###############################################################################
# 
# Makefile
# 
###############################################################################

# component (executable or achive) name
TARGET += calc

# executable name
EXENAME = $(TARGET).exe 

# library name
LIBNAME = $(TARGET).a

# test exe name
TESTNAME = $(TARGET)_test.exe

# gtest directory
GTEST_DIR = /cygdrive/c/Users/Dad/Documents/gtest-1.6.0
GMOCK_DIR = /cygdrive/c/Users/Dad/Documents/gmock-1.6.0
SLOCCO_DIR = /

# local directories
DOX_DIR = dox
LOG_DIR = log
REL_DIR = rel
REL_BIN_DIR = $(REL_DIR)/bin
REL_LIB_DIR = $(REL_DIR)/lib
REL_OBJ_DIR = $(REL_DIR)/obj
SRC_DIR = src
TST_DIR = tst
TST_BIN_DIR = $(TST_DIR)/bin
TST_OBJ_DIR = $(TST_DIR)/obj
TST_OUT_DIR = $(TST_DIR)/out
TST_SRC_DIR = $(TST_DIR)/src

# objects to include in executable (production objects - no test objects)
PROD_OBJ += $(REL_OBJ_DIR)/tcOperation.o
MAIN_OBJ = $(REL_OBJ_DIR)/main.o 

# List of test object for each PROD_OBJ
TEST_OBJ += $(PROD_OBJ:$(REL_OBJ_DIR)/%.o=$(TST_OBJ_DIR)/%.o) $(PROD_OBJ:$(REL_OBJ_DIR)/%.o=$(TST_OBJ_DIR)/%_test.o)

# Flags passed to the preprocessor.
CPPFLAGS += -I$(GTEST_DIR)/include -I$(GMOCK_DIR)/include
CPPFLAGS += -MF $(@:.o=.d) -MMD
COVFLAGS += -fprofile-arcs -ftest-coverage

# Flags passed to the C++ compiler.
CXXFLAGS += -g -Wall -Wextra 

# Flags passed to the linker
LINKFLAGS += -lpthread

# include the dependency files for each production object, if it exists.
# (i.e. obj/tcMyClass.o => obj/tcMyClass.d)
# these files provide all the include file dependencies for each object 
-include $(PROD_OBJ:.o=.d)
-include $(MAIN_OBJ:.o=.d)
-include $(TEST_OBJ:.o=.d)

###############################################################################

# this rule cleans the build area
clean :
	rm -rf $(REL_OBJ_DIR) $(REL_LIB_DIR) $(REL_BIN_DIR) $(TST_BIN_DIR) $(TST_OBJ_DIR) $(TST_OUT_DIR)

# all rule: should be "[library] [executable] [test] [coverage] [dox] [sloc]" 
all : executable test dox sloc #library coverage

###############################################################################

# this rule defines the location of the executable file
executable : $(REL_BIN_DIR)/$(EXENAME)

# this rule makes the production executable
$(REL_BIN_DIR)/$(EXENAME) : $(PROD_OBJ) $(MAIN_OBJ)
	@mkdir -p $(REL_BIN_DIR) $(LOG_DIR)
	$(CXX) $(CXXFLAGS) $(LINKFLAGS) $^ -o $@ | tee -a $(LOG_DIR)/build.log

# this rule makes an object file for each cpp file. the compile line produces
# the object file and the include dependency file.
$(REL_OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(REL_OBJ_DIR) $(LOG_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $^ -o $@ | tee -a $(LOG_DIR)/build.log

###############################################################################

# this rule defines the location and name of the test output file for each
# production object (i.e. obj/tcMyClass.o => tst/tcMyClass_test.xml)
test : $(PROD_OBJ:$(REL_OBJ_DIR)/%.o=$(TST_OUT_DIR)/%_test.xml)

# this rule executes the test for the objects that have been updated
$(TST_OUT_DIR)/%_test.xml : $(TST_OBJ_DIR)/%.o $(TST_OBJ_DIR)/%_test.o | $(TST_BIN_DIR)/$(TESTNAME)
	@mkdir -p $(TST_OUT_DIR) $(LOG_DIR)
	$(TST_BIN_DIR)/$(TESTNAME) --gtest_filter=$(@:$(TST_OUT_DIR)/%_test.xml=%)*.* --gtest_output="xml:$@" #&> $(@:$(TST_OUT_DIR)/%.xml=$(LOG_DIR)/%.log)

# this rule makes the test executable
$(TST_BIN_DIR)/$(TESTNAME) : $(TEST_OBJ) $(GMOCK_DIR)/make/gmock_main.a
	@mkdir -p $(TST_BIN_DIR) $(LOG_DIR)
	$(CXX) $(CXXFLAGS)  -fprofile-arcs $(LINKFLAGS) -lgcov $^ -o $@ | tee -a $(LOG_DIR)/build.log

# this rule makes the test objects
$(filter %_test.o,$(TEST_OBJ)): $(TST_OBJ_DIR)/%.o: $(TST_SRC_DIR)/%.cpp
	@mkdir -p $(TST_OBJ_DIR) $(LOG_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $(@:$(TST_OBJ_DIR)/%.o=$(TST_SRC_DIR)/%.cpp) -o $@ | tee -a $(LOG_DIR)/build.log

# this rule makes the instrumented production objects in the test directory
$(TST_OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(TST_OBJ_DIR) $(LOG_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(COVFLAGS) -c $^ -o $@ | tee -a $(LOG_DIR)/build.log

################################################################################

dox : $(DOX_DIR)/html/index.html

# this rule generates the doxygen output
$(DOX_DIR)/html/index.html : $(PROD_OBJ) $(DOX_DIR)/Doxyfile
	@mkdir -p $(DOX_DIR) $(LOG_DIR)
	doxygen $(DOX_DIR)/Doxyfile &> $(LOG_DIR)/doxygen.log

$(DOX_DIR)/Doxyfile : 
	@mkdir -p $(DOX_DIR) $(LOG_DIR)
	doxygen -g $@ &> $(LOG_DIR)/doxygen.log

################################################################################

# this rule defines the location of the library/archive file
library : $(REL_LIB_DIR)/$(LIBNAME)

# this rule makes an archive containing only the production objects
$(REL_LIB_DIR)/$(LIBNAME) : $(PROD_OBJ)
	@mkdir -p $(REL_LIB_DIR) $(LOG_DIR)
	$(AR) $(ARFLAGS) $@ $^ | tee -a $(LOG_DIR)/build.log

################################################################################

coverage : $(TST_OUT_DIR)/coverage.xml

# this rule converts the test coverage files to xml
$(TST_OUT_DIR)/coverage.xml : $(PROD_OBJ:.o=.gcda) $(PROD_OBJ:.o=.gcno)
	@cd $(REL_OBJ_DIR) $(LOG_DIR)
	gcovr -x &> $@

sloc : $(TST_OUT_DIR)/$(TARGET)_sloc.csv

$(TST_OUT_DIR)/$(TARGET)_sloc.csv :
	@mkdir -p $(TST_OUT_DIR) $(LOG_DIR)
	java -jar $(SLOCCO_DIR)/slocco.jar src -csv $@	

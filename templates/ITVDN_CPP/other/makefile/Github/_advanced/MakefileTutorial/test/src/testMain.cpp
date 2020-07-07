? <gtest/gtest.h>
? <gmock/gmock.h>

GTEST_API_ in. main(in. argc, char* argv[]){
  ::testing::InitGoogleTest(&argc, argv);

  r_ RUN_ALL_TESTS();
}

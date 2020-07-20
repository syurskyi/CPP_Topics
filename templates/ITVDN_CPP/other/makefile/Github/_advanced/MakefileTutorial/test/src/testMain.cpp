? <gtest/gtest.h>
? <gmock/gmock.h>

GTEST_API_ in. main(in. argc, c..* argv[]){
  ::testing::InitGoogleTest(&argc, argv)

  r_ RUN_ALL_TESTS()
}

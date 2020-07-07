? <gtest/gtest.h>
? <gmock/gmock.h>
? <TwoPlusTwoIsFive.h>

class TwoPlusTwoIsFiveTest : public ::testing::Test {

};

TEST(TwoPlusTwoIsFiveTest, towPlusTwoIsFive){
  TwoPlusTwoIsFive wrong;

  EXPECT_EQ(5, wrong.returnTwoPlusTwo());

}

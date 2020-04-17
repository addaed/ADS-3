#include "gtest/gtest.h"
#include <string>

std::string infx2pstfx(std::string);
int         eval(std::string);

TEST(lab3,test1_1)
{
    std::string in="(2+2)*2";
    std::string exp="22+2*";
    std::string out=infx2pstfx(in);
    EXPECT_TRUE(out==exp);
}
TEST(lab3,test1_2)
{
    std::string exp="22+2*";
    int         out=eval(exp);
    EXPECT_EQ(out,8);
}

TEST(lab3,test2_1)
{
    std::string in="(2-1)*(6+2)";
    std::string exp="21-62+*";
    std::string out=infx2pstfx(in);
    EXPECT_TRUE(out==exp);
}
TEST(lab3,test2_2)
{
    std::string exp="21-62+*";
    int         out=eval(exp);
    EXPECT_EQ(out,8);
}

TEST(lab3,test3_1)
{
    std::string in="(5+2)/6-(4+3)*5";
    std::string exp="52+6/43+5*-";
    std::string out=infx2pstfx(in);
    EXPECT_TRUE(out==exp);
}
TEST(lab3,test3_2)
{
    std::string exp="52+6/43+5*-";
    int         out=eval(exp);
    EXPECT_EQ(out,-34);
}
TEST(lab3,test4_1)
{
    std::string in="8*(3+7)/2-(3+7)*9";
    std::string exp="837+*2/37+9*-";
    std::string out=infx2pstfx(in);
    EXPECT_TRUE(out==exp);
}
TEST(lab3,test4_2)
{
    std::string exp="837+*2/37+9*-";
    int         out=eval(exp);
    EXPECT_EQ(-50,out);
}


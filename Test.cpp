#include "StirngUtils.h"

namespace StringUtils{

}
TEST TEST(StringUtilsTest, SliceTest){
    EXPECT_EQ(StringUtils::Slice(Base,0), "Hello");
    EXPECT_EQ(StringUtils::Slice(Base,1), "ello");
}


TEST(StringUtilsTest, Capitalize){
    std::string Base = "Hello";


    EXPECT_EQ(StringUtils::Capitalize(Base), "Hello");
    EXPECT_EQ(StringUtils::Capitalize(std::string()), "");
    EXPECT_EQ(StringUtils::Capitalize(" hello"), " hello");
    EXPECT_EQ(StringUtils::Capitalize("HELLO"), "Hello");
    EXPECT_EQ(StringUtils::Capitalize("    \n\t^87234"), "    \n\t^87234");

}
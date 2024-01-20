#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTest){
    std::string Base = "Hello";

    EXPECT_EQ(StringUtils::Slice(Base,0), "Hello");
    EXPECT_EQ(StringUtils::Slice(Base,1), "ello");
    EXPECT_EQ(StringUtils::Slice(Base,2), "llo");
}

TEST(StringUtilsTest, Capitalize){
    std::string Base = "hello";

    EXPECT_EQ(StringUtils::Capitalize(Base), "Hello");
    EXPECT_EQ(StringUtils::Capitalize(std::string()), "");
    EXPECT_EQ(StringUtils::Capitalize(" hello"), " hello");
    EXPECT_EQ(StringUtils::Capitalize("HELLO"), "Hello");
    EXPECT_EQ(StringUtils::Capitalize("    \n\t^87234"), "    \n\t^87234");
}

TEST(StringUtilsTest, Upper){
    EXPECT_EQ(StringUtils::Upper("hello"), "HELLO");
    EXPECT_EQ(StringUtils::Upper(" hello"), " HELLO");
    EXPECT_EQ(StringUtils::Upper(std::string()), "");
    EXPECT_EQ(StringUtils::Upper("HELLO"), "HELLO");
    EXPECT_EQ(StringUtils::Upper("heLlO"), "HELLO");
    EXPECT_EQ(StringUtils::Upper("Good Bye"), "GOOD BYE");
}

TEST(StringUtilsTest, Lower){
    EXPECT_EQ(StringUtils::Lower("HELLO"), "hello");
    EXPECT_EQ(StringUtils::Lower(" HELLO"), " hello");
    EXPECT_EQ(StringUtils::Lower(std::string()), "");
    EXPECT_EQ(StringUtils::Lower("hello"), "hello");
    EXPECT_EQ(StringUtils::Lower("HElLo"), "hello");
    EXPECT_EQ(StringUtils::Lower("GOOD BYE"), "good bye");
}

TEST(StringUtilsTest, LStrip){
    EXPECT_EQ(StringUtils::LStrip("hello"), "hello");
    EXPECT_EQ(StringUtils::LStrip(" hello"), "hello");
    EXPECT_EQ(StringUtils::LStrip("    hello"), "hello");
    EXPECT_EQ(StringUtils::LStrip("   hello   "), "hello   ");
    EXPECT_EQ(StringUtils::LStrip("   h  ello"), "h  ello");
    EXPECT_EQ(StringUtils::LStrip(std::string()), "");

}

TEST(StringUtilsTest, RStrip){
    EXPECT_EQ(StringUtils::RStrip("hello"), "hello");
    EXPECT_EQ(StringUtils::RStrip("hello "), "hello");
    EXPECT_EQ(StringUtils::RStrip("    hello"), "    hello");
    EXPECT_EQ(StringUtils::RStrip("   hello   "), "   hello");
    EXPECT_EQ(StringUtils::RStrip("   h  ello"), "   h  ello");
    EXPECT_EQ(StringUtils::RStrip("hell    o    "), "hell    o");
    EXPECT_EQ(StringUtils::RStrip(std::string()), "");
}

TEST(StringUtilsTest, Strip){
    
}

TEST(StringUtilsTest, Center){
    
}

TEST(StringUtilsTest, LJust){
    
}

TEST(StringUtilsTest, RJust){
    
}

TEST(StringUtilsTest, Replace){
    
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}

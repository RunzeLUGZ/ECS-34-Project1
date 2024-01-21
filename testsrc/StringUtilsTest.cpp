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
    EXPECT_EQ(StringUtils::Strip("hello"), "hello");
    EXPECT_EQ(StringUtils::Strip(" hello "), "hello");
    EXPECT_EQ(StringUtils::Strip("      hello      "), "hello");
    EXPECT_EQ(StringUtils::Strip("hello      "), "hello");
    EXPECT_EQ(StringUtils::Strip("      hello"), "hello");
    EXPECT_EQ(StringUtils::Strip("h e l l o"), "h e l l o");
    EXPECT_EQ(StringUtils::Strip(std::string()), "");
}

TEST(StringUtilsTest, Center){
    EXPECT_EQ(StringUtils::Center("ab",5,'-'), "-ab--");
    EXPECT_EQ(StringUtils::Center("A",4,'-'), "-A--");
    EXPECT_EQ(StringUtils::Center("A",3,'-'), "-A-");
    EXPECT_EQ(StringUtils::Center("A",5,'-'), "--A--");
    EXPECT_EQ(StringUtils::Center("ABC",4,'-'), "ABC-");
    EXPECT_EQ(StringUtils::Center("ABC",5,'-'), "-ABC-");
    EXPECT_EQ(StringUtils::Center("ABC",5,'*'), "*ABC*");
    EXPECT_EQ(StringUtils::Center(std::string(), 5, '$'), "$$$$$");
}

TEST(StringUtilsTest, LJust){
    EXPECT_EQ(StringUtils::LJust("AB", 5, '-'), "AB---");
    EXPECT_EQ(StringUtils::LJust("AB", 3, '-'), "AB-");
    EXPECT_EQ(StringUtils::LJust("AB", 2, '-'), "AB");
    EXPECT_EQ(StringUtils::LJust("ABC", 5, '-'), "ABC--");
    EXPECT_EQ(StringUtils::LJust("A", 5, '-'), "A----");
    EXPECT_EQ(StringUtils::LJust("AB", 5, '*'), "AB***");
    EXPECT_EQ(StringUtils::LJust("AB", 5, '$'), "AB$$$");
    EXPECT_EQ(StringUtils::LJust(std::string(), 5, '$'), "$$$$$");
}

TEST(StringUtilsTest, RJust){
    EXPECT_EQ(StringUtils::RJust("AB", 5, '-'), "---AB");
    EXPECT_EQ(StringUtils::RJust("AB", 3, '-'), "-AB");
    EXPECT_EQ(StringUtils::RJust("AB", 2, '-'), "AB");
    EXPECT_EQ(StringUtils::RJust("A", 5, '-'), "----A");
    EXPECT_EQ(StringUtils::RJust("AB", 5, '*'), "***AB");
    EXPECT_EQ(StringUtils::RJust("ABC", 5, '*'), "**ABC");
    EXPECT_EQ(StringUtils::RJust(std::string(), 5, '$'), "$$$$$");
}

TEST(StringUtilsTest, Replace){
    EXPECT_EQ(StringUtils::Replace("Banana", "na", "ba"), "Bababa");
    EXPECT_EQ(StringUtils::Replace("Banana", "nan", "bab"), "Bababa");
    EXPECT_EQ(StringUtils::Replace("Hello There", "There", "Hello"), "Hello Hello");
    EXPECT_EQ(StringUtils::Replace("", "na", "ba"), "");
    EXPECT_EQ(StringUtils::Replace("Banana", "ba", "na"), "Banana");
    EXPECT_EQ(StringUtils::Replace("Banana", "Ba", "ba"), "banana");
    EXPECT_EQ(StringUtils::Replace("Dinasour", "Ba", "ba"), "Dinasour");
}

TEST(StringUtilsTest, Split){
    std::vector<std::string> vector1 = {"Hello","World"};
    std::vector<std::string> vector2 = {"Hello","World","Bye"};
    EXPECT_EQ(StringUtils::Split("Hello World", std::string()), vector1);
    EXPECT_EQ(StringUtils::Split("Hello World", " "), vector1);
    EXPECT_EQ(StringUtils::Split("Hello,World", ","), vector1);
    EXPECT_EQ(StringUtils::Split("Hello,World,Bye", ","), vector2);
    EXPECT_EQ(StringUtils::Split("Hello,   World", ","), vector1);
    EXPECT_EQ(StringUtils::Split("Hello    ,World", ","), vector1);
    EXPECT_EQ(StringUtils::Split("Hello   ,   World", ","), vector1);
    EXPECT_EQ(StringUtils::Split("Hello,  World,  Bye", ","), vector2);
    EXPECT_EQ(StringUtils::Split("Hello,World,Bye,", ","), vector2);
    EXPECT_EQ(StringUtils::Split(",Hello,World,Bye", ","), vector2);
    EXPECT_EQ(StringUtils::Split(",Hello,World,Bye,", ","), vector2);
    EXPECT_EQ(StringUtils::Split(",,Hello,,World,,Bye,,", ",,"), vector2);
    EXPECT_EQ(StringUtils::Split("Hello!!!World", "!!!"), vector1);
    EXPECT_EQ(StringUtils::Split("Hello!!!World!!!", "!!!"), vector1);

}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}

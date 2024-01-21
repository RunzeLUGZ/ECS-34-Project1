#include "StringUtils.h"
#include <cctype>

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    // Replace code here
    return str.substr(start,str.length() - start);
}

std::string Capitalize(const std::string &str) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    std::string temp;
    temp += toupper(str[0]);
    for(size_t i = 1; i < str.length(); i++){
        temp += tolower(str[i]);
    }
    return temp;
}

std::string Upper(const std::string &str) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    std::string temp;
    for(size_t i = 0; i < str.length(); i++){
        temp += toupper(str[i]);
    }
    return temp;
}


std::string Lower(const std::string &str) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    std::string temp;
    for(size_t i = 0; i < str.length(); i++){
        temp += tolower(str[i]);
    }
    return temp;
}

std::string LStrip(const std::string &str) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    int index;

    for(size_t i = 0; i < str.length(); i++){
        if (str[i] != ' '){
            index = i;
            break;
        }
    }

    return str.substr(index, str.length());
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    int index;

    for(size_t i = str.length() - 1; i > 0; i--){
        if (str[i] != ' '){
            index = i;
            break;
        }
    }

    return str.substr(0, index + 1);
}


std::string Strip(const std::string &str) noexcept{
    // Replace code here
    return (RStrip(LStrip(str)));
}


std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    std::string temp;
    if(str.empty()){
        for (int i = 0; i < width; i++){
            temp += fill;
        }
        return temp;
    }
    else{
        temp += str;
        for (int i = str.length(); i < width; i++){
            temp += fill;
        }
        return temp;
    }
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    std::string temp;
    if(str.empty()){
        for (int i = str.length(); i < width; i++){
            temp += fill;
        }
        return temp;
    }
    else{
        for (size_t i = 0; i < width - str.length(); i++){
            temp += fill;
        }
        return temp + str;
    }
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    std::string temp;
    std::string fin;

    if(str.empty()){
        for (int i = 0; i < width; i++){
            temp += fill;
        }
        return temp;
    }
    else {
        int num = width - str.length();
        temp = RJust(str, str.length() + num/2, fill);
        fin = LJust(temp, width, fill);
        return fin;
    }
}


std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    if(str.empty()){
        return "";
    }

    std::string temp;
    int n = str.length();
    int length = old.length();

    for (int i = 0; i < n; i++) {
        if (i <= n - length) {
            std::string sub = str.substr(i, length);
            if (sub == old) {
                temp += rep;
                i += length - 1;
                continue;
            }
        }
        temp += str[i];
    }

    return temp;
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};
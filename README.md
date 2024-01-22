# ECS-34-Project1

Name: Runze Lu (ID 921187947)

## Known Issues

EditDistance does not work properly and only computes the edit distance that ignores case. I do not fully understand how to implement this algorithm but understand the idea behind it and the table that is commonly used to compute edit distances.  

## Reference
EditDistance Function: https://cppsecrets.com/users/101611099712197110107114971065149535048484864103109971051084699111109/C00-Edit-Distance-Using-Dynamic-Programming.php

### changed:

I changed the variable names to left and right so that it matches the function signature, and I also changed int to size_t on line 273 in order to match left.size().

## Generative AI Use

For the function capitalize, I used Chatgpt to fix my for loop that iterated through the characters after the first one in the string and learned to use size_t as an unsigned integer type to declare i

### Replace Function
prompt: How to I identify a repeated instance in a string in C++
response:

#include <iostream>
#include <string>

void findRepeatedInstances(const std::string &str, int length) {
    int n = str.length();
    for (int i = 0; i <= n - length; ++i) {
        std::string sub = str.substr(i, length);
        for (int j = i + 1; j <= n - length; ++j) {
            if (str.substr(j, length) == sub) {
                std::cout << "Repeated instance found: " << sub << " at positions " << i << " and " << j << std::endl;
            }
        }
    }
}

changes: this response by chatgpt does not have an existing instance to look for, therefore for this project, I modified the loop using the same idea so that it only contains one for loop to look for any repeated substrings. I did not directly copy from the response. 


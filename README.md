# ECS-34-Project1

Name: Runze Lu (ID 921187947)

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

changes: this response by chatgpt does not have an existing instance to look for, therefore for this project, I modified the loop using the same idea so that it only contains one for loop to look for any repeated substrings. 

### Accessing Vector in C++
prompt: How to I access the elements in a C++ vector?
Response: Accessing elements in a C++ vector can be done in several ways, depending on your needs and preferences. Here are some common methods:
Using the [] operator: This is similar to accessing elements in an array. You simply use the index to access the element. Remember that indices in C++ start at 0.

std::vector<int> v = {1, 2, 3, 4, 5};
int element = v[2]; // Accesses the third element (3)


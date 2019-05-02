#include "reverse_string.h"

std::string reverse_string::reverse_string(std::string str) {
    std::string result;
    for (int i = str.length() - 1; i >= 0; --i) {
        result += str.at(i);
    }
    return result;
}

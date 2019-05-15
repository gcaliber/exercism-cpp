#include "reverse_string.h"

std::string reverse_string::reverse_string(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

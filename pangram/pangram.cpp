#include "pangram.h"
#include <cctype>
#include <unordered_set>

bool pangram::is_pangram(const std::string &str) {
    std::unordered_set<char> missing;

    const std::string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (char c : alpha) {
        missing.insert(c);
    }

    for (char c : str) {
        missing.erase(std::tolower(c));
    }

    return missing.empty();
}

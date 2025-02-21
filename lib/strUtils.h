#ifndef STRING_UTILS_HPP
#define STRING_UTILS_HPP

#include <string>
#include <algorithm>
#include <cctype>

namespace strUtils
{

    std::string reverse_string(const std::string &input);

    std::string to_uppercase(const std::string &input);

    bool is_palindrome(const std::string &input);

}

#endif
#include "strUtils.h"

namespace strUtils
{

    std::string reverse_string(const std::string &input)
    {
        std::string reversed = input;
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }

    std::string to_uppercase(const std::string &input)
    {
        std::string upper = input;
        std::transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
        return upper;
    }
    bool is_palindrome(const std::string &input)
    {
        std::string cleaned = input;
        cleaned.erase(std::remove_if(cleaned.begin(), cleaned.end(), ::isspace), cleaned.end());
        std::transform(cleaned.begin(), cleaned.end(), cleaned.begin(), ::tolower);

        std::string reversed = reverse_string(cleaned);
        return cleaned == reversed;
    }

}
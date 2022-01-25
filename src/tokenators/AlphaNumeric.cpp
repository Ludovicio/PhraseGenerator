/**
 * Copyright 2022 Ludo
 * @file Alphabetic.cpp
 * @since 2022-01-25
 * @date 2022-01-25
 * @author Ludo
 * @brief Alpha numeric UniformCollection tokenator.
 */

#include "tokenators/AlphaNumeric.h"

namespace ludo_phrgen {

const char *_ALPHANUMERIC[] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z", "a", "e", "i", "o", "u", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
const std::vector<std::string> AlphaNumeric::ALPHANUMERIC(_ALPHANUMERIC, std::end(_ALPHANUMERIC));

} // namespace ludo_phrgen


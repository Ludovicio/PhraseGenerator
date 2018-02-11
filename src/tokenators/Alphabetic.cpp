/**
 * Copyright 2018 Ludo
 * @file Alphabetic.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#include "tokenators/Alphabetic.h"

namespace ludo_phrgen {

const char *_ALPHABET[] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z", "a", "e", "i", "o", "u"};
const std::vector<std::string> Alphabetic::ALPHABET(_ALPHABET, std::end(_ALPHABET));

} // namespace ludo_phrgen

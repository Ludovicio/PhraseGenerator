/**
 * Copyright 2018 Ludo
 * @file Consonantal.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#include "tokenators/Consonantal.h"

namespace ludo_phrgen {

const char *_CONSONANTS[] = {"b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "v", "w", "x", "y", "z"};
const std::vector<std::string> Consonantal::CONSONANTS(_CONSONANTS, std::end(_CONSONANTS));

} // namespace ludo_phrgen

/**
 * Copyright 2022 Ludo
 * @file Alphabetic.cpp
 * @since 2022-01-25
 * @date 2022-01-25
 * @author Ludo
 * @brief Numeric UniformCollection tokenator.
 */

#include "tokenators/Numeric.h"

namespace ludo_phrgen {

const char *_NUMERIC[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
const std::vector<std::string> Numeric::NUMERIC(_NUMERIC, std::end(_NUMERIC));

} // namespace ludo_phrgen


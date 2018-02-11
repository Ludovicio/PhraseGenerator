/**
 * Copyright 2018 Ludo
 * @file Vocalic.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#include "tokenators/Vocalic.h"

namespace ludo_phrgen {

const char *_VOCALS[] = {"a", "e", "i", "o", "u"};
const std::vector<std::string> Vocalic::VOCALS(_VOCALS, std::end(_VOCALS));

} // namespace ludo_phrgen

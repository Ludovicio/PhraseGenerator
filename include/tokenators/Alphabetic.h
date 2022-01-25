/**
 * Copyright 2018 Ludo
 * @file Alphabetic.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Alphabetic UniformCollection tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_ALPHABETIC_H_
#define LUDO_PHRGEN_TOKENATORS_ALPHABETIC_H_
#include "common.h"
#include "tokenators/UniformCollection.h"
#include "tokenators/Consonantal.h"
#include "tokenators/Vocalic.h"

namespace ludo_phrgen {

class Alphabetic : public UniformCollection {
public:

static const std::vector<std::string> ALPHABET;
Alphabetic() : UniformCollection(ALPHABET){}

};

} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_ALPHABETIC_H_

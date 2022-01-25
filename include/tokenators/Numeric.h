/**
 * Copyright 2018 Ludo
 * @file Numeric.h
 * @since 2022-01-25
 * @date 2022-01-25
 * @author Ludo
 * @brief Numeric UniformCollection tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_NUMERIC_H_
#define LUDO_PHRGEN_TOKENATORS_NUMERIC_H_
#include "common.h"
#include "tokenators/UniformCollection.h"

namespace ludo_phrgen {

class Numeric : public UniformCollection {
public:
static const std::vector<std::string> NUMERIC;
Numeric() : UniformCollection(NUMERIC){}

};

} //  namespace ludo_phrgen
#endif //  LUDO_PHRGEN_TOKENATORS_NUMERIC_H_

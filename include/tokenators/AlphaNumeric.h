/**
 * Copyright 2018 Ludo
 * @file AlphaNumeric.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Alpha numeric UniformCollection tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_ALPHANUMERIC_H_
#define LUDO_PHRGEN_TOKENATORS_ALPHANUMERIC_H_
#include "common.h"
#include "tokenators/UniformCollection.h"
#include "tokenators/Consonantal.h"
#include "tokenators/Vocalic.h"

namespace ludo_phrgen {

class AlphaNumeric : public UniformCollection {
public:
static const std::vector<std::string> ALPHANUMERIC;
AlphaNumeric() : UniformCollection(ALPHANUMERIC){}

};

} //  namespace ludo_phrgen
#endif //  LUDO_PHRGEN_TOKENATORS_ALPHANUMERIC_H_

/**
 * Copyright 2018 Ludo
 * @file Vocalic.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_VOCALIC_H_
#define LUDO_PHRGEN_TOKENATORS_VOCALIC_H_
#include "common.h"
#include "tokenators/UniformCollection.h"

namespace ludo_phrgen {

class Vocalic : public UniformCollection {
public:

static const std::vector<std::string> VOCALS;
Vocalic() : UniformCollection(VOCALS){}

};

} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_VOCALIC_H_

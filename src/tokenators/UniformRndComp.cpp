/**
 * Copyright 2018 Ludo
 * @file UniformRndComp.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformRndComp tokenator.
 */

#include "tokenators/UniformRndComp.h"

namespace ludo_phrgen {

void UniformRndComp::_populate() {
  min = 0;
  max = 0;
  comb = 0;
  for(auto tkntr : collection) {
    min = std::min(min, tkntr->minGen());
    max = std::max(max, tkntr->maxGen());
    comb += tkntr->combinations();
  }
}

std::string UniformRndComp::token() {
    return collection[rand()%collection.size()]->token();
}

} // namespace ludo_phrgen

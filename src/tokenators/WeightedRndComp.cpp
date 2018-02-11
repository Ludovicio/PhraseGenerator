/**
 * Copyright 2018 Ludo
 * @file WeightedRndComp.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief WeightedRndComp tokenator.
 */

#include "tokenators/WeightedRndComp.h"

namespace ludo_phrgen {

void WeightedRndComp::_populate() {
  collection.clear();
  min = 0;
  max = 0;
  comb = 0;
  for(auto tup : weightedCollection) {
    auto tkntr = std::get<1>(tup);
    min = std::min(min, tkntr->minGen());
    max = std::max(max, tkntr->maxGen());
    comb += tkntr->combinations();
    for(unsigned i = 0; i < std::get<0>(tup); i++){
      collection.push_back(tkntr);
    }
  }
}

std::string WeightedRndComp::token() {
    return collection[rand()%collection.size()]->token();
}

} // namespace ludo_phrgen

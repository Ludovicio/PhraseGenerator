/**
 * Copyright 2018 Ludo
 * @file RndMultiplier.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Random multiplier tokenator.
 */

#include "tokenators/RndMultiplier.h"

namespace ludo_phrgen {

void RndMultiplier::_populate() {
  min = subTkntr->minGen() * minG;
  max = subTkntr->maxGen() * maxG;
  comb = subTkntr->combinations() * maxG;
}

std::string RndMultiplier::token() {
    unsigned amount = (rand()% ((maxG+1)-minG))+minG;
    std::string out = "";
    if (amount == 0) {return out;}
    for(unsigned i = 0;i<amount;i++){
        out+=subTkntr->token();
    }
    return out;
}

} // namespace ludo_phrgen

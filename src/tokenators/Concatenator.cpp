/**
 * Copyright 2018 Ludo
 * @file Concatenator.cpp
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Concatenator tokenator.
 */

#include "tokenators/Concatenator.h"

namespace ludo_phrgen {

void Concatenator::_populate() {
  min = 0;
  max = 0;
  comb = 1;
  for(auto tkntr : collection) {
    min += tkntr->minGen();
    max += tkntr->maxGen();
    comb *= tkntr->combinations();
  }
}

std::string Concatenator::token() {
    std::string out =  "";
    for(auto tkntr : collection){
        out += tkntr->token();
    }
    return out;
}

} // namespace ludo_phrgen

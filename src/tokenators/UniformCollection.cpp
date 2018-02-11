/**
 * Copyright 2018 Ludo
 * @file UniformCollection.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#include "tokenators/UniformCollection.h"

namespace ludo_phrgen {

void UniformCollection::_populate() {
  min = 0;
  max = 0;
  for(auto str : collection) {
    min = std::min(min, (unsigned)str.size());
    max = std::max(max, (unsigned)str.size());
  }
}

std::string UniformCollection::token() {
    return collection[rand()%collection.size()];
}

} // namespace ludo_phrgen

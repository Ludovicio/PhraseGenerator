/**
 * Copyright 2018 Ludo
 * @file Tokenator.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Token generator interface.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_TOKENATOR_H_
#define LUDO_PHRGEN_TOKENATORS_TOKENATOR_H_

#include "common.h"

namespace ludo_phrgen {
class Tokenator {
public:
  virtual ~Tokenator() {}
  virtual std::string token() = 0;
  virtual unsigned alternatives() = 0;
  virtual unsigned combinations() = 0;
  virtual unsigned minGen() = 0;
  virtual unsigned maxGen() = 0;
};
} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_TOKENATOR_H_

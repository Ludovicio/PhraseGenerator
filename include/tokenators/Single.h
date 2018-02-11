/**
 * Copyright 2018 Ludo
 * @file Single.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Token generator interface.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_SINGLE_H_
#define LUDO_PHRGEN_TOKENATORS_SINGLE_H_

#include "common.h"

namespace ludo_phrgen {
class Single : virtual public Tokenator {
public:
  Single(std::string str) : str(str) {}
  virtual ~Single() {}
  std::string token() {return (str);}
  unsigned alternatives() {return (1);}
  unsigned combinations() {return (1);}
  unsigned minGen() {return (str.length());}
  unsigned maxGen() {return (str.length());}

private:
  std::string str;
};
} // namespace ludo_phrgen
#endif // LUDO_PHRGEN_TOKENATORS_SINGLE_H_

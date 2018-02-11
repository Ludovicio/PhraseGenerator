/**
 * Copyright 2018 Ludo
 * @file RndMultiplier.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Random multiplier tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_RNDMULTIPLIER_H_
#define LUDO_PHRGEN_TOKENATORS_RNDMULTIPLIER_H_
#include "common.h"
#include "tokenators/Tokenator.h"

namespace ludo_phrgen {
class RndMultiplier : virtual public Tokenator {
public:
  RndMultiplier(std::shared_ptr<Tokenator> subTkntr, unsigned minGen, unsigned maxGen)
    : subTkntr(subTkntr), min(0), max(0), minG(minGen), maxG(maxGen), comb(0) {
    _populate();
  }
  virtual ~RndMultiplier(){}

  std::string token() override;
  unsigned alternatives() override {return subTkntr->alternatives();}
  unsigned combinations() {return (comb);}
  unsigned minGen() override {return (min);}
  unsigned maxGen() override {return (max);};

private:
  void _populate();
  std::shared_ptr<Tokenator> subTkntr;
  unsigned min;
  unsigned max;
  unsigned minG;
  unsigned maxG;
  unsigned comb;
};
} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_RNDMULTIPLIER_H_

/**
 * Copyright 2018 Ludo
 * @file UniformRndComp.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Uniform random composite tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_UNIFORMRNDCOMP_H_
#define LUDO_PHRGEN_TOKENATORS_UNIFORMRNDCOMP_H_
#include "common.h"
#include "tokenators/Tokenator.h"

namespace ludo_phrgen {
class UniformRndComp : virtual public Tokenator {
public:
  UniformRndComp(std::vector<std::shared_ptr<Tokenator> > collection)
    : collection(collection), min(0), max(0){
    _populate();
  }
  virtual ~UniformRndComp(){}

  std::string token() override;
  unsigned alternatives() override {return collection.size();}
  unsigned combinations() override {return (comb);}
  unsigned minGen() override {return (min);}
  unsigned maxGen() override {return (max);};

private:
  void _populate();
  std::vector<std::shared_ptr<Tokenator> > collection;
  unsigned min;
  unsigned max;
  unsigned comb;
};
} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_UNIFORMRNDCOMP_H_

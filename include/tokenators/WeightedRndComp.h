/**
 * Copyright 2018 Ludo
 * @file WeightedRndComp.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief Weighted random composite tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_WEIGHTEDRndComp_H_
#define LUDO_PHRGEN_TOKENATORS_WEIGHTEDRndComp_H_
#include "common.h"
#include "tokenators/Tokenator.h"

namespace ludo_phrgen {

class WeightedRndComp : virtual public Tokenator {
public:
  WeightedRndComp(std::vector<std::tuple<unsigned,std::shared_ptr<Tokenator> > > weightedCollection)
    : weightedCollection(weightedCollection), collection(), min(0), max(0), comb(0){
    _populate();
  }
  virtual ~WeightedRndComp(){}

  std::string token() override;
  unsigned alternatives() override {return weightedCollection.size();}
  unsigned combinations() override {return (comb);}
  unsigned minGen() override {return (min);}
  unsigned maxGen() override {return (max);};

private:
  void _populate();
  std::vector<std::tuple<unsigned,std::shared_ptr<Tokenator> > > weightedCollection;
  std::vector<std::shared_ptr<Tokenator> > collection;
  unsigned min;
  unsigned max;
  unsigned comb;
};
} // namespace ludo_phrgen

#endif //LUDO_PHRGEN_TOKENATORS_WEIGHTEDRndComp_H_

/**
 * Copyright 2018 Ludo
 * @file UniformCollection.h
 * @since 2018-02-10
 * @date 2018-02-10
 * @author Ludo
 * @brief UniformCollection tokenator.
 */

#ifndef LUDO_PHRGEN_TOKENATORS_UNIFORMCOLLECTION_H_
#define LUDO_PHRGEN_TOKENATORS_UNIFORMCOLLECTION_H_
#include "common.h"
#include "tokenators/Tokenator.h"

namespace ludo_phrgen {

class UniformCollection : virtual public Tokenator {
public:
  UniformCollection(std::vector<std::string> collection)
    : collection(collection), min(0), max(0){
    _populate();
  }
  virtual ~UniformCollection(){}

  std::string token() override;
  unsigned alternatives() override {return collection.size();}
  unsigned combinations() override  {return collection.size();}
  unsigned minGen() override {return (min);}
  unsigned maxGen() override {return (max);};

private:
  void _populate();
  std::vector<std::string> collection;
  unsigned min;
  unsigned max;

};

} // namespace ludo_phrgen
#endif //LUDO_PHRGEN_TOKENATORS_UNIFORMCOLLECTION_H_

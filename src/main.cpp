#include <iostream>
#include "allTokenators.h"
#include "common.h"

using namespace std;

void generateTokens(std::string name, std::shared_ptr<ludo_phrgen::Tokenator> tokenator, unsigned amount);

int main() {
    using namespace ludo_phrgen;
    using namespace std::string_literals;

    const char *_CUSTOMSEPARATORS[] = {" ","-","'"};
    const std::vector<std::string> CUSTOMSEPARATORS(_CUSTOMSEPARATORS, std::end(_CUSTOMSEPARATORS));

    srand (time(NULL));
    std::shared_ptr<Tokenator> consonantal = std::make_shared<Consonantal>();
    std::shared_ptr<Tokenator> vocalic = std::make_shared<Vocalic>();
    std::shared_ptr<Numeric> numeric = std::make_shared<Numeric>();
    std::shared_ptr<AlphaNumeric> alphaNumeric = std::make_shared<AlphaNumeric>();
    std::shared_ptr<UniformCollection> customSeparator = std::make_shared<UniformCollection>(CUSTOMSEPARATORS);

    std::vector<std::shared_ptr<Tokenator> > cvSyllVec;
    cvSyllVec.push_back(consonantal);
    cvSyllVec.push_back(vocalic);
    std::vector<std::shared_ptr<Tokenator> > vcSyllVec;
    vcSyllVec.push_back(vocalic);
    vcSyllVec.push_back(consonantal);
    std::vector<std::shared_ptr<Tokenator> > vSyllVec;
    vSyllVec.push_back(vocalic);

    std::shared_ptr<Tokenator> cvSyll = std::make_shared<Concatenator>(cvSyllVec);
    std::shared_ptr<Tokenator> vcSyllV = std::make_shared<Concatenator>(vcSyllVec);
    std::shared_ptr<Tokenator> vSyll = std::make_shared<Concatenator>(vSyllVec);

    std::vector<std::tuple<unsigned,std::shared_ptr<Tokenator> > > initWColl;
    initWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(1, cvSyll));
    initWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(1, vcSyllV));
    std::shared_ptr<Tokenator> init = std::make_shared<WeightedRndComp>(initWColl);

    std::vector<std::tuple<unsigned,std::shared_ptr<Tokenator> > > midWColl;
    midWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(10, cvSyll));
    midWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(5, vcSyllV));
    midWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(1, vSyll));
    std::shared_ptr<Tokenator> midsub = std::make_shared<WeightedRndComp>(midWColl);
    std::shared_ptr<Tokenator> mid = std::make_shared<RndMultiplier>(midsub, 0,2);

    std::vector<std::tuple<unsigned,std::shared_ptr<Tokenator> > > endWColl;
    endWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(1, cvSyll));
    endWColl.push_back(std::tuple<unsigned,std::shared_ptr<Tokenator> >(10, vcSyllV));
    std::shared_ptr<Tokenator> end = std::make_shared<WeightedRndComp>(endWColl);

    std::vector<std::shared_ptr<Tokenator> > word0Vec;
    word0Vec.push_back(cvSyll);
    word0Vec.push_back(vcSyllV);
    word0Vec.push_back(vSyll);
    std::shared_ptr<Tokenator> word0 = std::make_shared<Concatenator>(word0Vec);

    std::vector<std::shared_ptr<Tokenator> > word1Vec;
    word1Vec.push_back(init);
    word1Vec.push_back(mid);
    word1Vec.push_back(end);
    std::shared_ptr<Tokenator> word1 = std::make_shared<Concatenator>(word1Vec);

    std::shared_ptr<Tokenator> endnumber = std::make_shared<RndMultiplier>(numeric, 1,2);
    std::vector<std::shared_ptr<Tokenator> > sepEndNumVec;
    sepEndNumVec.push_back(customSeparator);
    sepEndNumVec.push_back(endnumber);
    std::shared_ptr<Tokenator> separatedEndNumber = std::make_shared<Concatenator>(sepEndNumVec);
    std::shared_ptr<Tokenator> optionalendnumber = std::make_shared<RndMultiplier>(separatedEndNumber, 0,1);
    std::vector<std::shared_ptr<Tokenator> > word2Vec;
    word2Vec.push_back(word1);
    word2Vec.push_back(optionalendnumber);
    std::shared_ptr<Tokenator> word2 = std::make_shared<Concatenator>(word2Vec);

//    std::vector<std::shared_ptr<Tokenator> > phraseVec;
//    phraseVec
//    std::shared_ptr<Tokenator> phrase = std::make_shared<Concatenator>(phraseVec);

    cout << "Welcome to Ludo phrase generator!" << endl;
    generateTokens("two syllables of two letters and a vocal "s, word0, 10);
    generateTokens("Variable size init mid end word"s, word1, 10);
    generateTokens("Variable size init mid end word proably ending on number"s, word2, 20);
    return 0;
}


void generateTokens(std::string name, std::shared_ptr<ludo_phrgen::Tokenator> tokenator, unsigned amount) {
    cout << "||=============================||" << endl;
    cout << "Generating tokens (" << tokenator->minGen() << " - " << tokenator->maxGen() << ", " << tokenator->combinations() << " combinations)" << " of " << name << endl;
    cout << "||=============================||" << endl;
    for(unsigned i = 0;i < amount; i++){
        cout << tokenator->token() << endl;
    }
}

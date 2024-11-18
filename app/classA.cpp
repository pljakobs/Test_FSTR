#include "classA.h"
#include "fileMap.h"

classA::classA(){};

classA::~classA(){};

void classA::print(){
    debug_i("---- class A printing ----");
    debug_i("the file %s",fileMap["config/pinconfig.json"]);
}
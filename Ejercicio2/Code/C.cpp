#include "C.h"
#include <iostream>

#include <iostream>
using namespace std;

claseC::claseC(){

}

void claseC::printC(){
    cout << "Soy C "<< getC()<<"\n";
}

void claseC::setC(int cN){
    this->c=cN;
}

int claseC::getC(){
    return this->c;
}

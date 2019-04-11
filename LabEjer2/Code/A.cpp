#include "A.h"

#include <iostream>
using namespace std;

claseA::claseA(){

}

void claseA::printA(){
    cout << "Soy A "<<getA()<<"\n";
}

void claseA::setA(int aN){
    this->a=aN;
}

int claseA::getA(){
    return this->a;
}

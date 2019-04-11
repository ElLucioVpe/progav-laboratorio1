#include "B.h"

#include <iostream>
using namespace std;

claseB::claseB(){

}

void claseB::printB(){
    cout << "Soy B " << getB() << "\n";
}

void claseB::setB(int bN){
    this->b=bN;
}

int claseB::getB(){
    return this->b;
}

void claseB::setA(claseA & a) {
    this->a = &a;
}

void claseB::setC(claseC & c) {
    this->c = &c;
}

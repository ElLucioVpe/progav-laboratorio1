#include <iostream>

class claseA;
class claseB;
class claseC;
#include "A.h"
#include "B.h"
#include "C.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	claseA *ax = new claseA();
	claseB *ab = new claseB();
	claseC *ac = new claseC();

    ac->setC(2);
    ab->setB(5);
    ax->setA(8);

    ax->printA();
    ab->printB();
    ac->printC();

    return 0;
}

#include <iostream>

class claseA;
class claseB;
class claseC;

#include "A.h"
#include "B.h"
#include "C.h"

int main(int argc, char** argv) {

	claseA *ax = new claseA();
	claseB *ab = new claseB();
	claseC *ac = new claseC();

    ac->setC(2);
    ab->setB(5);
    ax->setA(8);

    ax->setC(*ac);
    ax->setB(*ab);

    ab->setA(*ax);
    ab->setC(*ac);

    ac->setA(*ax);
    ac->setB(*ab);

    ax->printA();
    ab->printB();
    ac->printC();

    // Accedemos a el valor de B desde A solamente porque queremos y podemos
    std::cout << ax->getBVal();

    return 0;
}

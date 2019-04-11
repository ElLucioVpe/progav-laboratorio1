#ifndef A
#define A


class claseB; //  forward declaration
class claseC; //  forward declaration

#include "B.h"
#include "C.h"
class claseA{
	public:
    claseA();
    void printA();
    void setA(int aN);
	int getA();

	private:
	 int a;
	claseB *b; //Aca esta la ref a una instancia de b
	claseC *c;

};

#endif

#ifndef A
#define A
#include "B.h"
#include "C.h"

class claseB; //  forward declaration
class claseC; //  forward declaration

class claseA{
	public:
    claseA();

	private:
	 int a;
	claseB *b; //Aca esta la ref a una instancia de b
	claseC *c;

};

#endif

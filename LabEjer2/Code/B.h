#ifndef B
#define B

class claseA; //  forward declaration
class claseC; //  forward declaration

#include "A.h"
#include "C.h"

class claseB{
	private:
	 int b;

	claseA *a; //Aca esta la ref a una instancia de b
	claseC *c;

	public:
    claseB();
    void printB();
    void setB(int bN);
	int getB();

};
#endif

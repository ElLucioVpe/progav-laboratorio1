#ifndef B
#define B

#include "A.h"
#include "C.h"

class claseA; //  forward declaration
class claseC; //  forward declaration

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

    void setA(claseA & a);
    void setC(claseC & c);

};
#endif

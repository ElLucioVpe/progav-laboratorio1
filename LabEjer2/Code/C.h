#ifndef C
#define C

#include "A.h"
#include "B.h"

class claseA; //  forward declaration
class claseB; //  forward declaration

class claseC{
	private:
	int c;

	claseA *a; //Aca esta la ref a una instancia de a
	claseB *b;

	public:
	claseC();
	void printC();
	void setC(int cN);
	int getC();

    void setA(claseA & a);
    void setB(claseB & b);

};

#endif

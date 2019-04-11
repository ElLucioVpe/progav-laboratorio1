#ifndef C
#define C


class claseA; //  forward declaration
class claseB; //  forward declaration

#include "A.h"
#include "B.h"

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

};

#endif

#ifndef B
#define B
#include "A.h"
#include "B.h"

class claseA; //  forward declaration
class claseB; //  forward declaration

class claseC{
	private:
	int c;
	 
	claseA *a; //Aca esta la ref a una instancia de a
	claseB *b;
	
};

#endif

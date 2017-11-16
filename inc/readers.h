#ifndef _READERS_H_
#define _READERS_H_

#include "types.h"

class Reader{
public:
	
private:
	int id;
	char surname[20];
	char name[20];
	char address[50];
	Date birth_date;
	Date registration_date;
};

#endif //_READERS_H_

#ifndef DOUGHTER_H
#define DOUGHTER_H

#include <iostream>
#include "Mother.h"
#include "Father.h"

using namespace std;

class Doughter: public Mother, public Father
{
public:
	Doughter() {};
	~Doughter() {};
	void canDance();
};

#endif
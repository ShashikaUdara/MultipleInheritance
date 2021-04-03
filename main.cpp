#include <iostream>
#include "Doughter.h"

using namespace std;

int main()
{
	// multiple inheritance is a feature in C++ which enables a class to be derived from several classes.
	Doughter d;

	d.canDance();

	// omherited from mother
	d.canCook();
	d.canSaw();

	// inherited from father
	d.canWork();
	d.canDrive();

	return 0;
}
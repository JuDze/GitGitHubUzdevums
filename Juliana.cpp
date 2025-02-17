#include <iostream>
#include "Name.h"
#include "Juliana.h"

using namespace std;

Juliana::Juliana(string n)
{
	name=n;
}

void Juliana::setName(string n)
{
	name=n;
}

void Juliana::Print() const
{
	cout << name << endl;
}



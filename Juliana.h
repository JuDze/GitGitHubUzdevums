#include <iostream>
#include "Name.h"
using namespace std;

class Juliana: public Name
{
	public:
		Juliana(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};

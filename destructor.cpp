#include<bits/stdc++.h>
using namespace std;
//destrustor is used to free the memory which is auto matically created but we can also create them manually then the one made by the system is destroyed.
//it has no input parameters and no return type.
//has the same name as the class.

class oops{
	public:
		oops()
		{
			cout<<"\nDefault constructor called.";
		}
		oops(int a)
		{
			cout<<"\nParameterised contructor called.";
		}
		~oops()
		{
			cout<<"\nDestructor called for object ";
		}
};
int main()
{
	//static allocation
	oops a;
	
	//objects created statically - destructor will be called automatically.
	//for dynamically allocated object, destuctor needs to be called.
	
	//dynamic allocation
	oops *b = new oops();
	delete b; 
	
	//destructor is called only once for a particular object.
	return 0;
}

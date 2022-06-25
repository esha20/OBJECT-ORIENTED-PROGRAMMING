#include<bits/stdc++.h>
using namespace std;
//static functions can only access static members.
//it can not use this keyword
//Doesnt depend on the object creation;

class oops{
	public:
		static int count;		//static data member belongs to the class.Doesn't depend on class. 
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
			count++;
			cout<<"\nDestructor called for object "<<count;		//had this not been the static member, this count would not increment.
		}
		static int random()
		{
			return count;
		}
		
};
int oops::count=0;			//initialised the static member count
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
	
	cout<<"\nCurrent count is : "<<oops::random();
	
	return 0;
} 

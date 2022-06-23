#include <bits/stdc++.h>
using namespace std;

class Alchemists{
	public:
	string ele;
	/*These constructors will be automatically genrated behind the scenes but we initialise them here 
	to see the working clearly. Once we have wriiten the implementation manually , the one created by the computer
	is removed automatically.*/
	Alchemists(){
		cout<<"\n\n\nDefault comstructor called ";
	}
	Alchemists(string element){
		cout<<"\n\n\nParameterised constructor called";
	}
	Alchemists(Alchemists& temp)	//passing by refernce to access the original object
	{
		cout<<"\n\n\nCopy constructor called.";
		this->ele=temp.ele;
	}
	void element(string ele){
	/*This is a pointer which stores the address of the current object*/
	this->ele=ele;
	/*We are copying the value of parameter ele in the ele value of alchemists*/	
	}
	string getelement()
	{
		return ele;
	}
};
int main()
{
	//constructor called and object created statically.
	Alchemists fm;
	fm.element("Full metal");
	cout<<"for full metal, Edward ELric";
	cout<<"\nThe element of full metal alchemist is "<<fm.getelement();
	
	//constructtor called again after object created dynamically.
	Alchemists *roy_mustang= new Alchemists();
	cout<<"for alchemist roy mustang";
	roy_mustang->element("Fire");
	cout<<"\nThe element of Roy is "<<(*roy_mustang).getelement();
	
	
	//this time parameterised constructor will be called
	Alchemists *grand= new Alchemists("iron_blood");
	cout<<" for grand alchemist";
	grand->element("Iron blood");
	string e = (*grand).getelement();
	cout<<"\nThe element of grand Alchemist is "<<e;
	
	//A copy constructor can be used to copy the elements of the object into another object
	Alchemists Elphonse_elric(fm);
	cout<<"\nThe element of Elphonse is same as edward which is "<<Elphonse_elric.getelement(); 
	return 0;
}

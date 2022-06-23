#include<bits/stdc++.h>
using namespace std;
/*Default constructor uses shallow copy only.*/
class dob{
	public:
		int date;
		string month;
		char *name;
		dob()
		{
			cout<<"Default constructor called.";
			name = new char[10];
		}
		void setdate(int date)
		{
			this->date=date;
		}
		void setmonth(string month)
		{
			this->month=month;
		}
		void setname(char name[])
		{
			strcpy(this->name,name);
		}
		void print()
		{
			cout<<"\n\nName : "<<this->name<<" Date in dob is : "
			<<this->date<<" Month in dob is : "<<this->month;
			cout<<"\n\n\n\n";
		}
};
int main()
{
	dob first;
	char name[10]="Esha";
	first.setdate(20);
	first.setmonth("June");
	first.setname(name);
	first.print();
	
	//using default copy constructor to initialise another object second.
	dob second(first);	//or can also be dob second = first;
	
	//change the name now in the first object.
	first.name[0]='A';
	
	//print first again
	first.print();
	
	//we see that there are desired changes in the first object but lets now print the second object as well.
	second.print();
	
	//here we see that the changes in the first object is also reflected in the second object. 
	//THIS IS SHALLLOW COPY.
	
	/*We access the same memory for both the objects.
	when we have initialised the pointer name. It is basically a address of the object element "name". So the pointer name stores the address of the character array name
	When we make changes in the name , the address remains same, and bcoz the second object is also a copy of the first, it has same address copied into element name.
	so the changes are basically made on the address used by both objects and thus changes made to one will be reflected on another.*/
	return 0;
}

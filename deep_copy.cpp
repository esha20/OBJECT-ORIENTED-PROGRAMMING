#include<bits/stdc++.h>
using namespace std;
class dob{
	public:
		int date;
		string month;
		char *name;
		dob()
		{
			cout<<"\nDefault constructor called";
			name = new char [10];
		}
		dob (dob &temp)
		{
			cout<<"\nCopy constructor called";
			//the name is not at same address instead is just copied and assigned a different address.
			char *ch = new char [strlen(temp.name)];
			strcpy(ch,temp.name);	//copies the name from the object first to the character array ch 
			this->name=ch;	//object second has ch as its name element but at different address than the name element of first object
			
			this->date=temp.date;
			this->month=temp.month;
			
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
	
	//using copy constructor to initialise another object second.
	dob second(first);	//or can also be dob second = first;
	
	//change the name now in the first object.
	first.name[0]='A';
	
	//print first again
	first.print();
	
	//we see that there are desired changes in the first object but the second doesnt reflect on the changes.
	second.print();
	
	//we have assigned two different addresses for the different objects. this is the concept of deep copy
	return 0;
}

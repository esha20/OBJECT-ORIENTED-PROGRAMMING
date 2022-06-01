#include<bits/stdc++.h>
using namespace std;

class subject {
	//by default this data member is private 
		int code;
	public:
		char grade;
		void setgrade(char s)
		{
			grade=s;
		}
		void setcode(int a)
		{
			code=a;
		}
		char getgrade()
		{
			return grade; 
		}
		int getcode()
		{
			return code;
		}
};

int main ()
{
	//static allocation
	subject ds;
	ds.setcode(101);
	ds.setgrade('a');
	
	cout<<"The code of ds is : "<<ds.getcode();
	
	//here grade can be accessed by the dot operator since it is declared publically in the class
	cout<<"The grade of ds is : "<<ds.grade;
	//the grade can also be accessed by the getter function like other private data member
	cout<<"\nThe grade of ds is : "<<ds.getgrade();
	
	//dynamic allocation
	subject *s= new subject;
	s->setcode(112);
	s->setgrade('b');
	
	//first method
	
	cout<<"\nThe code of dbms is : "<<(*s).getcode();
	
	//here grade can be accessed by the dot operator since it is public in the class
	cout<<"The grade of ds is : "<<(*s).grade;
	//and can also be accessed by the getter function
	cout<<"\nThe grade of dbms is : "<<(*s).getgrade();
	
	
	//second method
	cout<<"\nThe code of dbms is : "<<s->getcode();

	cout<<"The grade of ds is : "<<s->grade;
	cout<<"\nThe grade of dbms is : "<<s->getgrade();
	
	return 0;
}

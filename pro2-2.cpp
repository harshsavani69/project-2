#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
		char name[100];
		int id;
		char company[100];
		char mail[100];
		
		void show()
		{
			cout<<"enter name =";
			cin>>name;
			cout<<"enter id = ";
			cin>>id;
			cout<<"enter company= ";
			cin>>company;
			cout<<"enter mail = ";
			cin>>mail;
		}
};
class b{
	public :
		char name[100];
		int id;
		char company[100];
		char mail[100];
		
		void info()
		{
			cout<<"name = "<<name<<endl;
			cout<<"id = "<<id<<endl;
			cout<<"company = "<<company<<endl;
			cout<<"mail = "<<mail<<endl;
		}
};
class C : public A , public B
{
	
};

int main()
{
	c c1;
	c1.show();
	return 0;
}

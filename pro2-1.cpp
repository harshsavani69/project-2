#include<iostream>
#include<string.h>
using namespace std;
class mother{
	public:
		void display()
		{
			cout<<"how are you?"<<endl;
		}
};
class daughter : public mother 
{
	public:
	
	void display()
		{
			cout<<" i am fine."<<endl;
				
		}
	
};
int main()
{
	daughter D;
	D.mother::display();
	D.display();
}

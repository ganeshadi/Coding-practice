#include<iostream>
using namespace std;
class base{
	public:base(){
		cout<<" i am in base class"<<endl;
		
	}
	~base(){
		cout<<"i am in base distructor"<<endl;
	}
	
};
class base2{
	public:base2(){
		cout<<" i am in base2 class"<<endl;
		
	}
	~base2(){
		cout<<"i am in base2 distructor"<<endl;
	}
	
};
class derived:public base2,public base
{public:
	derived()
	{cout<<"i am in derived class ";
	
	}	
	~derived(){
		cout<<"i am in derived distructor"<<endl;
	}
};
int main()
{class derived dd;
	
}

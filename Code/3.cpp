#include<iostream>
using namespace std;

class shape
{
		
	public:
		float a,b;
	
		virtual void getdata()=0;
		virtual void sarea()=0;
};

class triangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Height and Base\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Triangle: "<<0.5*a*b<<"squnit\n";
	}
	
};

class rectangle: public shape
{
	void getdata()
	{
		
		cout<<"Enter the Length and B\n";
		cin>>a>>b;
	}
	
	void sarea()
	{
		cout<<"Area of Rectangle: "<<a*b<<"squnit\n";
	}
	
};



int main()
{
	
	triangle tri;
	shape *stri=&tri;
	stri->getdata();
	stri->sarea();
	
	rectangle rec;
	shape *srec=&rec;
	srec->getdata();
	srec->sarea();


	return 0;
}

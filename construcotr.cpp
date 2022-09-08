using namespace std;
#include<iostream>
class a
{
	int x,y;
	public:
	a()
	{
		x=y=0;
	}

	void read()
	{
		cout<<"value of x is:-"<<x<<endl<<"value of y is:-"<<y;
	}
};
int main()
{
	a obj;
	
	obj.read();
	return 0;
}

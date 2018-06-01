#include<iostream>
using namespace std;
class Rational
{
public:
	Rational()
	{
	this->x=0;
	this->y=0;
	}

	Rational(int x,int y)
	{
		this->x=x;
		this->y=y;
	}

	Rational(Rational &r1)
	{
		this->x=r1.x;
		this->y=r1.y;
	}

	void verify(Rational &r1)
	{
	
	}

	/*void bro(Rational &r1)
	{cout<<"jani";}                     This is method overloading
	void bro(Rational r1,int x)            
	{
		cout<<"yoyo";
	}
	*/

private:
	int x,y;
};
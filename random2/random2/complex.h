#include<iostream>
using namespace std;

class complex
{
public:
	complex(){
	  
		this->x=0;
		this->y=0;
	         }

		complex(int real, int img)
	{
		this->x = real;
		this->x = img;
	}


	complex(complex &z1)
	{
		cout<<"copy"<<endl;
	    this->x=z1.x;
	    this->y=z1.y;
	}

	complex operator+ (complex z1)
	{
		
	this->x=this->x + z1.x;
	this->y=this->y + z1.y;
	return *this;
	
	}

	complex operator=(complex z1)
	{
	cout<<"assign"<<endl;
	this->x=z1.x;
    this->y=z1.y;
	 
	return *this;
	}




private:
	int x,y;

};
//#include"desk.h"
//#include"office.h"

class employ
{
public:
	desk d1;
	office *myoffice;
	
	employ(office *o)
	{
	myoffice=o;
	cout<<"constructor employ"<<endl;
	}

	~employ()
	{
	
	cout<<"destructor employ"<<endl;
	}


};
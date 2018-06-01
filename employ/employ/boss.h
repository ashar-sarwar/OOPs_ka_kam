//#include"pc.h"
class boss : public employ
{
public:
	
	pc mypc;
	boss(office *o):employ(o)
	{
		mypc.turn_on();
	cout<<"constructor boss"<<endl;
	}

	~boss()
	{
		mypc.turn_off();
	cout<<"destructor boss"<<endl;
	}

};

class employ
{  
public:
	
    employ(float s,string n)
    {
        this->name=n;
        this->salary=s;
	}
	virtual void paycut(float s)
	{
	//cout<<name<<"is angry"<<endl;
	//cout<<*this<<endl;
	this->salary-=s;
	}

	friend ostream& operator<<(ostream &o,employ e)
    {
        return o<<e.name<<" paid"<<e.salary<<endl;
    }

	void payrise()
	{
	this->salary+=800;
	}

protected:
	float salary;
	string name;
};
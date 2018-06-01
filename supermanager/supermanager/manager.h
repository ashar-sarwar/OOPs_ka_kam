class manager:public employ
{
public:
	  
    manager(string n,float l) : employ(l*10000,n)
    {
        this->level=l;
    }

	virtual void paycut(float a)
	{
	this->salary=this->salary+this->level*a;
	}
	
	void payrise()
	{
		this->salary=this->salary + 100;
	}


private:
	int level;
};
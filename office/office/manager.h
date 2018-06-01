class manager:public employee
{
public:
	manager()
	{
	 
	}
	manager(string n,float num) : employee(num*10000,n)
	{
		this->level=num;
	}
	virtual void paycut(float s)
	{
		this->salary=this->salary+level*s;
	}
private:
	int level;
};
class employee
{
public:
    employee()
    {

    }
    employee(string n,float s)
    {
        this->name=n;
        this->salary=s;
    }
    friend ostream & operator<<(ostream & o,employee e)
    {
        return o<<e.name<<" paid"<<e.salary<<endl;
    }
   void paycut(float amt)
    {
        //cout<<*this<<"is angry\n";
        salary -=amt;
		cout<<"After paycut"<<salary<<endl;
    }

protected:
    float salary;
private:
	string name;
};

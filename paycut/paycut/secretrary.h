class secretary:public employee
{
public:
    void paycut(float amt)
    {
        cout<<"is angry\n";
        salary -=amt;
    }
    secretary(float s,string n):employee(n,s)
    {

    }

};
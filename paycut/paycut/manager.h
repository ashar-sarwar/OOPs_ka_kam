class manager:public employee

{
public:
    manager():employee()
    {

    }
    manager(int l,string n):employee(n,l*10000)
    {
        this->level=l;
    }
    void quarrel(employee *e)
    {
        this->salary+=1000;
        e->paycut(300);
		cout<<"After Querral:"<<salary<<endl;
    } 
    /*friend ostream & operator &&(ostream &o,const manager &m)
    {
        return o<<m<<"at level"<<m.level;
    }*/

private:
    int level;
};
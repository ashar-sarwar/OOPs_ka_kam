class employee
{
public:
	employee()
 {
  this->name="Mubashir";
  this->salary=50000;
 }
 employee(int n,string name)
 {
	 this->name=name;
	 this->salary=n;
 }
virtual void paycut(float s)
{
	this->salary-=s;
}
void payrise()
{
	this->salary+=800;
}
friend ostream & operator <<(ostream &out,employee e)
{
  return out<<e.name<<" paid"<<e.salary<<endl;
}
protected:
	string name;
	int salary;
};
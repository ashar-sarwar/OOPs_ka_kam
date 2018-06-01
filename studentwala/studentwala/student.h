class student
{
private:
	string *list;
	int count;
public:
	student()
	{
	 list=new string[50];
	 this->count=0;
	if(list==0)
	{
	 cerr<<"\n No memory allocated";
	}
	}
	student(const student& s)
	{
		this->count=s.count;
		for(int i=0;i<count;i++)
		{
		 this->list[i]=s.list[i];
		}
	}
	void addCourse(string n)
	{
		this->list[this->count]=n;
		this->count=this->count+1;
		//cout<<list[0]<<endl;
	}
	string getCourse(int index)
	{
		for(int i=0;i<index+1;i++)
		{
		 return	list[index];
		}
		
	}
	friend ostream& operator << (ostream& out, student& s1 )
    {
    out<<s1.list<<endl;
    return out;
	}
	


};
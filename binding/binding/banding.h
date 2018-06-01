class classZ : public classA
{
public:
	 void print()
	 {cout<<"class Z"<<endl;}

	 
	 classZ operator=(classZ b)
	 {
	  return (*this=b);
	 }
};

class tablelamp
{
	enum state{On,Off};
public:
	tablelamp()
	{
      this->on_off=On;
	}

	void press_switch()
	{

		on_off=(on_off==On)?Off:On;
		//(on_off==On)?printf("on"):printf("off");
	}

	friend ostream& operator << (ostream &s,tablelamp t)
	{
		return s<<"the lamp is "<<t.on_off<<"now";
	}
private:
    state on_off;


};
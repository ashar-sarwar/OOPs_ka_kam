

class adjtablelamp : public tablelamp
{

	enum status{dim,not_dim};

public:
	
	adjtablelamp()
	{
		this->batti=dim;
	}

	void dimmed()
	{
	  this->batti=(this->batti==dim)?dim:not_dim;
	}


   void print(ostream &o)
   {
   o<<*this;
   }

private:
	float bright;
	status batti;
};
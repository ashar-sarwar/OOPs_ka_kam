
class DvdCollection
{
public:

    DvdCollection()
    {
        this->count=4;
        this->size=5;
        this->total_cost=0;
        this->dvdlist= new Dvd[this->size];
    
    }

    void add_Dvd(Dvd &d)
    {
        if(this->count==this->size)
        {
            increasesize();
        }

        this->dvdlist[this->count+1]= d;
        this->count= this->count+1;


    }


    void increasesize()
    {
        this->size= this->size*2;
        Dvd *dvdtemp= nullptr;
        dvdtemp= new Dvd[this->size];
        for(int i=0; i<=count;i++)
        {
            dvdtemp[i]= this->dvdlist[i];

        }
        delete [] dvdlist;
        dvdlist= dvdtemp;


    }


    void show()
    {

          cout <<"\nThe details of the Dvd are:\n";
 
  for(int i=0;i<=this->count;i++)
  {
      cout << this->dvdlist[i];
    
  }

    }


private:
Dvd *dvdlist;
int size;
int total_cost;
int count;

}; 
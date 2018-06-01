

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include "employ.h"
#include "manager.h"
int main()
{
manager ht("ht",5);
employ ash(12000,"ashar");
cout<<ash<<endl;
ash.paycut(300);
cout<<ash<<endl;
cout<<ht<<endl;
ht.paycut(300);
cout<<ht<<endl;
system("pause>nul");
	/*
	manager *ht=new manager(5,"ht");
	employ *ash=new employ(12000,"ash");
	employ *vc= new supermanager("vicechancellor");
	;*/
}




#include"stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include "employ.h"
#include "manager.h"
int main()
{
 manager ht("HT",5);
 employee ash(50000,"ashar");
 cout<<ash<<endl;
 ash.paycut(300);
 cout<<ash<<endl;
 cout<<ht;
 ht.paycut(300);
 cout<<ht;
 system("pause>nul");

}

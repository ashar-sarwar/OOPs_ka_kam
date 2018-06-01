// paycut.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;
#include"employ.h"
#include"manager.h"
#include "secretrary.h"
int main()
{
    manager m(5,"ht");
    cout<<m<<endl;
    employee *e=new secretary(600000000,"ashar");
    m.quarrel(e);
	cout<<m;
	cout<<*e;
	system("pause>nul");


}



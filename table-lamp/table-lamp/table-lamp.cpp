// table-lamp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"tablelamp.h"
#include"adjtablelamp.h"
int main()
{
	tablelamp t1;
	adjtablelamp d1;
	d1.press_switch();
	cout << d1;

	system("pause>nul");
}


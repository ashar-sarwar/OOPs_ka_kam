// binding.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"binding.h"
#include "banding.h"


int main()
{
	classZ *z= new classZ; 
	classA *a=new classA;
	classA av;
	z->print();
	a->print();
	//a=z;
	z->print();
	av=*a;
	a->print();
	av.print();
	system("pause>nul");
}


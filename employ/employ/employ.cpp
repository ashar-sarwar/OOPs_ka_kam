// employ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"desk.h"
#include"office.h"
#include"pc.h"
#include"employ.h"
#include"boss.h"
int main()
{
	office *p_off=new office();
	boss *b=new boss(p_off);
 	delete b;
	employ *p_employ=new employ(p_off);
	delete p_employ;
	system("pause>nul");
}


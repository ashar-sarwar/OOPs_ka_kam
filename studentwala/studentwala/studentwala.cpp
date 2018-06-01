// studentwala.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
#include "student.h"

int main()
{
	student salman;
	student akbar(salman);
	salman.addCourse("BSCS 413");
    salman.addCourse("BSCS 419");
	cout<<akbar.getCourse(0);
	system("pause>nul");

}


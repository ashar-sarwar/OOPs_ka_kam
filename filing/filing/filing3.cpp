#include"stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
	ifstream fin;
	fin.open("myfile.txt");
	cout<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<(char)fin.get();
system("pause>nul");
} 
#pragma once
#include <iostream>
#include<conio.h>
#include<iomanip>//input-output manipulator
#include<stdlib.h> 
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class book
{
	char bno[6];//bookno.
	char bname[50];//bookname
	char aname[20];//authorname
public:
	void createbook()
	{
		cout << "\nNEW BOOK ENTRY...\n";
		cout << "\nENTER BOOK NO.";
		cin >> bno;
		cout << "\nENTER BOOK NAME";
		char* gets(bname);//enables enter with space
		cout << "\nENTER AUTHOR NAME";
		char* gets(aname);
		cout << "\n\n\nBook Created..";
	}
	void showbook()
	{
		cout << "\nBook Number: " << bno;
		cout << "\nBook Name: ";
		puts(bname);
		cout << "\nBook Author Name: ";
		puts(aname);
	}
	void modifybook()
	{
		cout << "\nBook Number: " << bno;
		cout << "\nModify Book Name :";
		char* gets(bname);
		cout << "\nModify Author's Name :";
		char* gets(aname);

	}

	char* retbno()//string return
	{
		return bno;

	}
	void report()
	{
		cout << bno << setw(30) << bname << setw(30) << aname << endl;
	}
};

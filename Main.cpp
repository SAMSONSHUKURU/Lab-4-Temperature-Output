/*
 Samson Shukuru
 Lab 4 Tempature Output 
 Due: Oct 14, 2022

*/
#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#include <cmath>

using namespace std;

void input();
void StarNeg();
void StarPos();

int x;
int Neg;

char star = '*';
char line = '|';
string Sp = " ";
ifstream infile;



int main()
{
	cout << "Temperatures for 24 hours" << endl;
	cout << "   -30" << "        " << "0" << "        " << "30" << "        " << "60" << "        " << "90" << "        " << "120" << endl;

	input();

	return 0;

}

//outputs negative stars
void StarNeg()
{
	//turns positive int to negative int
	int a = x * -1;
	//divides data ints by 3
	Neg = a / 3;
	//10 space - Neg output
	int spaces = 10 - Neg;

	if (x < 0)
	{
		cout << x;
		//calcuates spaces
		for (int i = 0; i < spaces; i++)

		{
			cout << Sp;
		}
		
		//outputs number of stars
		for (int i = 0; i < Neg; i++)
		{
			cout << star;
		}
		cout << line << endl;
		
	
	}
}
//outputs postive stars
void StarPos()
{
	if(x > 0)
	{	
		Neg = x / 3;
		cout << setw(0) << x << setw(13) << line;

		for(int i = 0; i < Neg; i++) 
		{
			cout << star;
		}
		cout <<  endl;
	}

}
	
//opens input file and loops the interger and pos/neg star functions
 void input()
 {
	
	 infile.open("c:/users/hp/onedrive - iowa central community college/documents/visual studio 2019/lab 4 temperature output/Temp_Input.dat");
	 if (!infile.is_open())
	 {
		 cout << "Cant open File" << endl;
	 }

	 while(infile.good())
	 {
		 infile >> x;
		 StarPos();
		 StarNeg();
	 }
	
 }





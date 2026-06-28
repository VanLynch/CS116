#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <fstream>
using namespace std;
int x = 0; /*menu selection*/
ifstream inData;
ofstream outData;

void sort()
{
}
void array()
{
}
void display()
{
	
}
void reverseDisplay()
{
}
void custom()
{
}
void getInput()
{
	cin >> x;
}
void getFile()
{
	ifstream input("data.txt");
	if(!input)
	{cout << "" }
}
void writeOutput()
{ }
int main()
{
	cout << "1. Display values, average, median, and sum" << endl << "2. Display values, average, median, and sum in decending order" << endl;
	cout << "3. Quit and write a custom array as an output file" <<endl << "4. Quit" << endl << "Please make a selection: ";
	getInput();
	for (;x;)
	{
		if (x != 4)
		{
			switch (x)
			{
			case 1:
				display();
				break;
			case 2:
				reverseDisplay();
				break;
			case 3:
				custom();
				break;
			default:
				cout << "Invalid selection. Please try again." << endl;
				getInput();
				break;

			}
		}
		else
		{
			cout << "Exiting...";
			break;
		}
	}
	return 0;
}
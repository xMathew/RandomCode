#include <iostream>
using namespace std;

void printDiamond(int num); //prints out diamond by callng printRow to print each row
void printRow(int mid, int row); //prints out a row of the diamond
void printStar(int num, int row, int dir); //

int main()
{
	int num;
	do
	{
		cout << "Enter an odd integer: ";
		cin >> num;
		if(cin.fail()) //checks the fail state to make sure the user entered an integer
		{
			cout << "Invalid input!" << endl;
			cin.clear();
			cin.ignore(100000,'\n');
			continue;
		}
		if(num%2 == 0) //checks to make sure the number is odd
		{
			cout << "Not an odd number!" << endl;
			continue;
		}
		printStar(num, num, 0); //calls the recursive function
		break;
	}
	while(true);
}

void printDiamond(int num)
{
	for(int i = 1;i < num;i += 2)
	{
		printRow(num, i);
	}
	for(int i = num;i > 0;i -= 2)
	{
		printRow(num, i);
	}
}

void printRow(int mid, int row)
{
	for(int i = 0;i < (mid-row)/2;i++) cout << " ";
	for(int i = 0;i < row;i++) cout << "*";
	cout << endl;
}

void printStar(int num, int row, int dir)
{
	if(row-2 >= 1 && (dir == 0 || dir == 1)) printStar(num, row-2, 1); //calls itself for the row above the current row
	for(int i = 0;i < (num-row)/2;i++) cout << " "; //prints out spaces
	for(int i = 0;i < row;i++) cout << "*"; //prints out stars
	cout << endl; //goes to next line
	if(row-2 >= 1 && (dir == 0 || dir == 2)) printStar(num, row-2, 2); //calls itself for the row below the current row
}
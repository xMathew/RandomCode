#include <iostream>
#include <string>
using namespace std;

string ToUpperCase(string input);
string ToLowerCase(string input);
string CombineString(string s1, string s2);
string ShortenString(string input, int start, int length);
string CutString(string input, string delimiters, string& remainingString);

int main()
{
	int choice, length;
	string input1, input2, remainingString, token;
	do
	{
		cout << "Enter 1 to convert a string to uppercase." << endl;
		cout << "Enter 2 to convert a string to lowercase." << endl;
		cout << "Enter 3 to combine two strings." << endl;
		cout << "Enter 4 to cut a piece from a string." << endl;
		cout << "Enter 5 to cut a string into multiple pieces based on the presence of specific characers." << endl;
		cout << "Enter 6 to quit" << endl;
		cout << "What do you want to do? ";
		cin >> choice;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "That is not an option!" << endl;
			continue;
		}
		else if(choice == 6) break;
		else if(choice < 1 || choice > 5)
		{
			cout << "That is not an option!" << endl;
			cin.ignore(10000, '\n');
			continue;
		}
		switch(choice)
		{
			case 1:
				do
				{
					cout << "Enter a string: ";
					cin >> input1;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					input1 = ToUpperCase(input1);
					cout << input1 << endl;
					break;
				}
				while(true);
				break;
			case 2:
				do
				{
					cout << "Enter a string: ";
					cin >> input1;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					input1 = ToLowerCase(input1);
					cout << input1 << endl;
					break;
				}
				while(true);
				break;
			case 3:
				do
				{
					cout << "Enter a string: ";
					cin >> input1;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					cout << "Enter a second string: ";
					cin >> input2;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					input1 = CombineString(input1, input2);
					cout << input1 << endl;
					break;
				}
				while(true);
				break;
			case 4:
				do
				{
					cout << "Enter a string: ";
					cin >> input1;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					cout << "Enter the location to start at: ";
					cin >> choice;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid integer!" << endl;
						continue;
					}
					else if(choice >= input1.length())
					{
						cin.ignore(10000, '\n');
						cout << "That is not within the string!" << endl;
						continue;
					}
					cout << "Enter the length of the new string: ";
					cin >> length;
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid integer!" << endl;
						continue;
					}
					input1 = ShortenString(input1, choice, length);
					cout << input1 << endl;
					break;
				}
				while(true);
				break;
			case 5:
				do
				{
					cin.ignore(10000, '\n');
					cout << "Enter a string: ";
					getline(cin, input1);
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					cout << "Enter the delimiters: ";
					getline(cin, input2);
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(10000, '\n');
						cout << "Enter a valid string!" << endl;
						continue;
					}
					while(input1.length() > 0)
					{
						token = CutString(input1, input2, remainingString);
						input1 = remainingString;
						cout << token << endl;
					}
					break;
				}
				while(true);
				break;
			default:
				cout << "You should never get here, something is terribly wrong." << endl;
				break;
		}
	}
	while(true);
}

string ToUpperCase(string input)
{
	string holder = "";
	for(int i = 0;i < input.length();i++)
	{
		if(input[i] > 'a' && input[i] < 'z')
		{
			switch(input[i])
			{
				case 'a':
					holder += 'A';
					break;
				case 'b':
					holder += 'B';
					break;
				case 'c':
					holder += 'C';
					break;
				case 'd':
					holder += 'D';
					break;
				case 'e':
					holder += 'E';
					break;
				case 'f':
					holder += 'F';
					break;
				case 'g':
					holder += 'G';
					break;
				case 'h':
					holder += 'H';
					break;
				case 'i':
					holder += 'I';
					break;
				case 'j':
					holder += 'J';
					break;
				case 'k':
					holder += 'K';
					break;
				case 'l':
					holder += 'L';
					break;
				case 'm':
					holder += 'M';
					break;
				case 'n':
					holder += 'N';
					break;
				case 'o':
					holder += 'O';
					break;
				case 'p':
					holder += 'P';
					break;
				case 'q':
					holder += 'Q';
					break;
				case 'r':
					holder += 'R';
					break;
				case 's':
					holder += 'S';
					break;
				case 't':
					holder += 'T';
					break;
				case 'u':
					holder += 'U';
					break;
				case 'v':
					holder += 'V';
					break;
				case 'w':
					holder += 'W';
					break;
				case 'x':
					holder += 'X';
					break;
				case 'y':
					holder += 'Y';
					break;
				case 'z':
					holder += 'Z';
					break;
				default:
					break;
			}
		}
		else holder += input[i];
	}
	return holder;
}

string ToLowerCase(string input)
{
	string holder = "";
	for(int i = 0;i < input.length();i++)
	{
		if(input[i] > 'A' && input[i] < 'Z')
		{
			switch(input[i])
			{
				case 'A':
					holder += 'a';
					break;
				case 'B':
					holder += 'b';
					break;
				case 'C':
					holder += 'c';
					break;
				case 'D':
					holder += 'd';
					break;
				case 'E':
					holder += 'e';
					break;
				case 'F':
					holder += 'f';
					break;
				case 'G':
					holder += 'g';
					break;
				case 'H':
					holder += 'h';
					break;
				case 'I':
					holder += 'i';
					break;
				case 'J':
					holder += 'j';
					break;
				case 'K':
					holder += 'k';
					break;
				case 'L':
					holder += 'l';
					break;
				case 'M':
					holder += 'm';
					break;
				case 'N':
					holder += 'n';
					break;
				case 'O':
					holder += 'o';
					break;
				case 'P':
					holder += 'p';
					break;
				case 'Q':
					holder += 'q';
					break;
				case 'R':
					holder += 'r';
					break;
				case 'S':
					holder += 's';
					break;
				case 'T':
					holder += 't';
					break;
				case 'U':
					holder += 'u';
					break;
				case 'V':
					holder += 'v';
					break;
				case 'W':
					holder += 'w';
					break;
				case 'X':
					holder += 'x';
					break;
				case 'Y':
					holder += 'y';
					break;
				case 'Z':
					holder += 'z';
					break;
				default:
					break;
			}
		}
		else holder += input[i];
	}
	return holder;
}

string CombineString(string s1, string s2)
{
	s1 += s2;
	return s1;
}

string ShortenString(string input, int start, int length)
{
	string holder = "";
	for(int i = start;i < start+length;i++)
	{
		holder += input[i];
	}
	return holder;
}

string CutString(string input, string delimiters, string& remainingString)
{
	string holder = "";
	remainingString = "";
	for(int i = 0;i < input.length();i++)
	{
		for(int j = 0;j < delimiters.length();j++)
		{
			if(input[i] == delimiters[j]) 
			{
				for(int k = i+1;k < input.length();k++) remainingString += input[k];
				return holder;
			}
		}
		holder += input[i];
	}
	return holder;
}
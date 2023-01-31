#include<iostream>
#include<string>
using namespace std;

int main()
{
	char movieseats[5][4] =
	{
		{'o','o','o','o'},//row 00 01 02 03 04
		{'o','o','o','o'},
		{'o','o','o','o'},
		{'o','o','o','o'},
		{'o','o','o','o'}
	};

	movieseats[0][0] = 'x';
	movieseats[1][1] = 'X';
	movieseats[2][2] = 'x';
	movieseats[3][3] = 'x';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (movieseats[i][j] != 'x' && movieseats[i][j] != 'X') 
			{
				movieseats[i][j] = 'R';
			}
			
			cout << movieseats[i][j];
			
		}
		cout << endl;
	}

}
/*
	int elementindex = 4;
	int myarray[] = { 1,2,3,4,5 };
	char chararray[] = { 'a','b','c','d','e' };
	string strarray[] = { "apple","oranges","blueberries","pear","banana" };
	cout << chararray[elementindex] << endl;
	cout << strarray[1] << endl;
	int arraylength = sizeof(myarray)/sizeof(myarray[0]);
	cout << arraylength << endl;
	for (int i = 0; i <arraylength; i++)
	{

		if (myarray[i] != 4)
		{
			myarray[i] = 7;
		}
		cout << myarray[i] << endl;
	}*/
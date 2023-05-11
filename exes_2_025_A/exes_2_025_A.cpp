#include <iostream>
using namespace std;


int arr[20]; 
int n; // lowerbound + upperbound
int i; // lowerbound


void input()
{
	while (true)
	{
		cout << "Enter the lowerbound + upperbound: ";
		cin >> n;
		if ((n > 1) && (n <= 10))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 10 elements.n\n";
	}

	//Accept array elements
	cout << "\n----------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 1; i < n; i++)
	{
		cout << "<" << (i + i) << "> ";
		cin >> arr[i];
	}
}



void  LinearSearch()
{
	char ch;
	int comparison; 
	
	do
	{
		 
		cout << "\nEnter the set upperbound + lower bound: ";
		int item;
		cin >> item;

		comparison = 0;
		for (i = 1; i < n; i++)
		{
			comparison++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + i) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of upperbound: " << comparison << endl;

		cout << "\nlowerbound (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'y'));
}


int main()
{
	input();
	LinearSearch();
}

#include<iostream>
using namespace std;

int main()
{
	int rows;

	cout << "Enter the Rows = ";
	cin >> rows;

	cout << "\n";
	int alphabet = 65;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 0; j <= (2 * i - 2); j++)
		{
			cout << char(alphabet + j) << " ";
		}
		cout << "\n";
	}
}
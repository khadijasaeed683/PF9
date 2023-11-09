#include<iostream>
using namespace std;
void reverse(int numbers[], int n);

int main()
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	if(n<=0)
	{
		cout << "Invalid intput. Number of elements must be greater than 0.";
	}
	else 
	{
	int numbers[n];
	cout << "Enter" << n <<  " numbers, one per line: " << endl;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> numbers[i];
	}
	cout << "Numbers in reverse order: ";
	reverse(numbers, n);
	}

}
void reverse(int numbers[], int n)
{
	for (int k =n-1; k >= 0; k--)
	{
		cout << numbers[k] << ' ';
	}

	
}

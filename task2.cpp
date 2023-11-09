#include<iostream>
using namespace std;
int main()
{
	string word;
	cout << "Enter a string: ";
	cin >> word;
	int s = word.length();
	cout << "Reversed String: ";
	
		for (int x=s-1; x>=0;x--)
		{
			cout << word[x] ;
		}
		
}
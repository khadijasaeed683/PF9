#include<iostream>
using namespace std;
int main()
{
	string word;
	cout << "Enter a String: ";
	cin >> word;
	int size = word.length();
	int asciiCode;
	cout << "Shifted String: ";

	for (int x = 0; x < size; x++ )
	{
		asciiCode = word[x];
		if (word[x]=='Z' )
		{
			asciiCode= 65;
		}
		else if(word[x]=='z' )
		{
			asciiCode=97;
		}
			
		else
			{
			asciiCode++;
			
			}
		char newLetter = asciiCode;
			cout << newLetter;
	}

}
#include "stdafx.h"
#include <iostream>

using namespace std;

bool isValidSymbol(char i){
	return (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) ? 1 : 0);
}

int wordCounter(char arr[]) {
	int counter = 0, i = 0;
	

	while (arr[i] != '\0') {

		if (counter == 0 && isValidSymbol(arr[i]))
			counter++;

		if (arr[i] == ' ' && isValidSymbol(arr[i + 1]))
			counter++;

		i++;
	}


	return counter;
}

int main()
{

	char arr[100];

	cin.getline(arr, 100);

	cout << wordCounter(arr);

	cout << endl;
	system("pause");
    return 0;
}


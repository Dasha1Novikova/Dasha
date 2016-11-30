#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	
	char str[80];
	cout << "Enter string: ";
	cin.getline(str,80);
	
	int numberRound = 0;
	int numberSquare = 0;
	int i;
	for (i=0; i < str[i]; i++) {
						
		switch (str[i]) {
			case '(': numberRound++; break;
        	case ')': numberRound--; break;
        	case '[': numberSquare++; break;
        	case ']': numberSquare--; break;
		}
	}
		if (numberRound == 0) {
			cout << "Round skobok porovny\n";
		}else cout << "Round Skobok ne porovny\n";
		
		if (numberSquare == 0) {
			cout << "Square skobok porovny";
			} else cout << "Square skobok ne porovny";
		
		
		//Выводим самое длинное слово
		
	int lenght = strlen(str);
	int maxLen = 0;
	int index = 0;
	int count = 0;
	
	for (i = 0; i < lenght; i++) {
		if (str[i] != ' '){
			count += 1;
		} else {
			if (count > maxLen) {
				maxLen = count;
				index = i - count;
			}
			count = 0;
		}
	}
	if (count > maxLen) {
		maxLen = count;
		index = i - count;
	}
	maxLen += index;
	printf("\n");
	for (i = index; i < maxLen; i++){
		
		putchar(str[i]);
	}
		printf("\n");
		  	
	return 0;
}

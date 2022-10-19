#if   defined(POL) && defined(ENG)
#error Please define only one country
#elif !(defined(POL) || defined(ENG))
#error Please define a country
#endif

#ifdef POL
#define mess1 "wprowadz liczbe naturalna (0 jesli chcesz zakonczyc): "
#define mess2 "Maksymalna suma cyfr to "
#define mess3 " dla "
#elif defined(ENG)
#define mess1 "enter a natural number(0 if done): "
#define mess2 "Max sum of digits was "
#define mess3 " for "
#endif

#include <iostream>
using namespace std;

int main() {
	int userInput, userInputTemp, sumOfDigitsTemp, max = 0;
	int sumOfDigits = 0;

	do {
		cout << mess1;

		cin >> userInput;
		userInputTemp = userInput;
		sumOfDigitsTemp = 0;
		while (userInputTemp > 0) {
			sumOfDigitsTemp += userInputTemp % 10;
			userInputTemp /= 10;
		}
		if (sumOfDigitsTemp > sumOfDigits) {
			sumOfDigits = sumOfDigitsTemp;
			max = userInput;
		}
	} while (userInput != 0);

	cout << mess2 << sumOfDigits << mess3 << max << endl;
}
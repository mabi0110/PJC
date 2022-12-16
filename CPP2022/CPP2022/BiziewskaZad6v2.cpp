/*

#include <iostream>
#include <vector>
using namespace std;

int len(const char* pass) {
	int len = 0;
	for (int i = 0; pass[i] != '\0'; i++) {
		len++;
	}
	return len;
}

bool checklen(const char* pass) {
	if (len(pass) < 8) {
		return false;
	}
	return true;
}

bool checkdiffchars(const char* pass) {
	vector<char> unique;
	bool occured;
	for (int i = 0; i <= len(pass); i++) {
		occured = false;
		for (int j = 0; j < unique.size(); j++) {
			if (pass[i] == unique[j]) {
				occured = true;
			}	
		}
		if (!occured) {
			unique.push_back(pass[i]);
		}
	}
	if (unique.size() - 1 < 6) {
		return false;
	}
	return true;
}

bool checkdigit(const char* pass) {
	bool isDigit = false;
	for (int i = 0; i < len(pass); i++) {
		for (int j = 48; j < 58; j++) {
			if (int(pass[i]) == j) {
				isDigit = true;
				break;
			}
		}
	}
	return isDigit;
}

bool checkuppercase(const char* pass) {
	bool isUpperCase = false;
	for (int i = 0; i < len(pass); i++) {
		for (int j = 65; j < 91; j++) {
			if (int(pass[i]) == j) {
				isUpperCase = true;
				break;
			}
		}
	}
	return isUpperCase;
}

bool checklowercase(const char* pass) {
	bool isLowerCase = false;
	for (int i = 0; i < len(pass); i++) {
		for (int j = 97; j < 123; j++) {
			if (int(pass[i]) == j) {
				isLowerCase = true;
				break;
			}
		}
	}
	return isLowerCase;
}

bool checknonalphanumeric(const char* pass) {
	bool isNonAlphaNumeric = false;
	for (int i = 0; i < len(pass); i++) {
		for (int j = 33; j < 127; j++) {
			if ((j >= 33 && j < 48) || (j >= 58 && j < 65) || (j >= 91 && j < 97) || (j >= 123 && j < 126)) {
				if (int(pass[i]) == j) {
					isNonAlphaNumeric = true;
					break;
				}
			}
		}
	}
	return isNonAlphaNumeric;
}

bool checkpass(const char* pass) {
	bool isCorrect = true;
	if (!checklen(pass)) {
		cout << "Too short" << endl;
		isCorrect = false;
	}
	if (!checkdiffchars(pass)) {
		cout << "Too few different characters" << endl;
		isCorrect = false;
	}
	if (!checkdigit(pass)) {
		cout << "No digit" << endl;
		isCorrect = false;
	}
	if (!checkuppercase(pass)) {
		cout << "No uppercase letter" << endl;
		isCorrect = false;
	}
	if (!checklowercase(pass)) {
		cout << "No lowercase letter" << endl;
		isCorrect = false;
	}
	if (!checknonalphanumeric(pass)) {
		cout << "No non-alphanumeric character" << endl;
		isCorrect = false;
	}
	return isCorrect;
}


int main() {
	using std::cout; using std::endl;
	const char* passes[] =
	{
	"AbcDe93", "A1b:A1b>", "Ab:Acb<",
	"abc123><", "Zorro@123", nullptr
	};
	for (int i = 0; passes[i] != nullptr; ++i) {
		cout << "checking " << passes[i] << endl;
		if (checkpass(passes[i])) cout << "OK" << endl;
		cout << endl;
	}
}
*/










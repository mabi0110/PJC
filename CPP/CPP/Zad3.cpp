#include <iostream>
using namespace std;

size_t length(const char* cstr);
bool isLetter(char c);
char* reverse(char* cstr);
size_t words(const char* cstr);
size_t words2(const char* cstr);
char* concat(char* t, const char* s);


int main() {
	using std::cout; using std::endl;
	char s1[] = "Alice in Wonderland";
	cout << "reverse: " << reverse(s1) << endl;
	cout << "length : " << length(s1) << endl;
	char s2[] = " ... for (int i = 0; i < n; ++i){...} ...";
	cout << "words : " << words(s2) << endl;
	cout << "words2 : " << words2(s2) << endl;
	char s3[100] = "Hello";
	cout << "concat : "
		<< concat(concat(s3, ", world"), "!") << endl;
}


size_t length(const char* cstr) {
	int length = 0;
	for (int i = 0; cstr[i] != '\0'; i++) {
		length++;
	}
	return length;
}

char* reverse(char* cstr) {
	int len = length(cstr);
	for (int i = 0; i < len / 2; i++) {
		char temp = cstr[i];
		cstr[i] = cstr[len - 1 - i];
		cstr[len - 1 - i] = temp;
	}
	return cstr;
}

bool isLetter(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return true;
	} else {
		return false;
	}
}


size_t words(const char* cstr) {
	int len = length(cstr);
	int words = 0;
	for (int i = 0; i < len; i++) {
		if (isLetter(cstr[i])) {
			if ((cstr[i + 1] < 'a' || cstr[i + 1] > 'z') && (cstr[i + 1] < 'A' || cstr[i + 1] > 'Z')) {
				words++;
			}
		}
	}
	return words;
}

size_t words2(const char* cstr) {
	int len = length(cstr);
	int words = 0;
	for (int i = 0; i < len; i++) {
		if (isLetter(cstr[i])) {
			if (isLetter(cstr[i + 1])) {
				if ((cstr[i + 2] < 'a' || cstr[i + 2] > 'z') && (cstr[i + 2] < 'A' || cstr[i + 2] > 'Z')) {
					words++;
				}
			}
		}
	}
	return words;
}

char* concat(char* t, const char* s) {
	int tLen = length(t);
	int sLen = length(s);
	char *temp;

	cout << " * t = " << *t << endl;
	cout << "  t = " << t << endl;
	cout << " t[0] = " << t[0] << endl;

	cout << " * s = " << *s << endl;
	cout << "  s = " << s << endl;
	cout << " s[0] = " << s[0] << endl;
	
	for (int i = 0; i < length(t) + length(s); i++) {
		if (i < length(t)) {
			cout << " ";
		}
		else {
			*t = s[i];
		}
	}
	return t;
}
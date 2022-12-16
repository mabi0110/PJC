/*

#include <iostream>
using namespace std;

unsigned short koduj(int plec, int stan_cyw, int grupa_wiek, int edu, int zam, int region, int odp) {

	return (plec << 15) | (stan_cyw << 13) | (grupa_wiek << 11) | (edu << 9)
		| (zam << 7) | (region << 3) | (odp << 0);
}

void info(unsigned short kod) {

	cout << "plec: " << ((kod & (1 << 15)) >> 15) << endl
		<< "stan cywilny: " << ((kod & (3 << 13)) >> 13) << endl
		<< "grupa wiekowa: " << ((kod & (3 << 11)) >> 11) << endl
		<< "wyksztalcenie: " << ((kod & (3 << 9)) >> 9) << endl
		<< "miejsce zam: " << ((kod & (3 << 7)) >> 7) << endl
		<< "region: " << ((kod & (15 << 3)) >> 3) << endl
		<< "odpowiedz: " << ((kod & (7 << 0)) >> 0) << endl;

}

void bitsInt(unsigned short k) {
	int mask = 1 << 15;
	for (int i = 0; i < 16; i++, mask >>= 1) {
		cout << (k & mask ? 1 : 0);
		if (i % 4 == 3) cout << " ";
	}
	cout << endl;
}


int main() {
	unsigned short k = koduj(1, 2, 3, 3, 3, 10, 7);
	cout << "k = " << k << endl;
	cout << "Zakodowano: "; bitsInt(k);
	info(k);

}


*/




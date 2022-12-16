/*

#include <iostream>


// stale z informacja o przesunieciu bitowym / miejscu skladowania informacji o danej odpowiedzi
#define A_PLEC 15
#define A_STAN_CYW 13
#define A_GRUPA_WIEK 11
#define A_EDU 9
#define A_ZAM 7
#define A_REGION 3
#define A_ODP 0

using namespace std;

// Metoda kodujaca odpowiedzi do ankiety do zapisu binarnego na 2 bajtach
unsigned short koduj(int plec, int stan_cyw, int grupa_wiek, int edu, int zam, int region, int odp) {

	return (plec << A_PLEC)
		| (stan_cyw << A_STAN_CYW)
		| (grupa_wiek << A_GRUPA_WIEK)
		| (edu << A_EDU)
		| (zam << A_ZAM)
		| (region << A_REGION)
		| (odp << A_ODP);

}

// metoda odkodowujaca i wyswietlajaca na ekran wyniki ankiety z zapisu binarnego dwubajtowego
void info(unsigned short kod) {

	cout << "Plec:\t" << ((kod & (1 << A_PLEC)) >> A_PLEC) << endl
		<< "stan cywilny:\t" << ((kod & (3 << A_STAN_CYW)) >> A_STAN_CYW) << endl
		<< "grupa wiekowa:\t" << ((kod & (3 << A_GRUPA_WIEK)) >> A_GRUPA_WIEK) << endl
		<< "wyksztalcenie:\t" << ((kod & (3 << A_EDU)) >> A_EDU) << endl
		<< "miejsce zam:\t" << ((kod & (3 << A_ZAM)) >> A_ZAM) << endl
		<< "region:\t" << ((kod & (15 << A_REGION)) >> A_REGION) << endl
		<< "odpowiedz:\t" << ((kod & (7 << A_ODP)) >> A_ODP) << endl;

}



// Program wlasciwy demonstrujacy uzycie funkcji check
int main() {

	// wywolanie testowej metody zakodowania i odkodowania odpowiedzi do antkiety
	cout << koduj(7, 15, 3, 3, 3, 3, 1) << endl;

	cout << koduj(0, 0, 0, 0, 0, 0, 0) << endl;

	cout << koduj(0, 0, 0, 0, 0, 0, 1) << endl;

	cout << koduj(7, 0, 0, 0, 0, 0, 0) << endl;

	cout << koduj(0, 15, 0, 0, 0, 0, 0) << endl;
	//info(koduj(0, 0, 0, 0, 0, 0, 0));

}


*/


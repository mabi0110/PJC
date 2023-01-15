/*
#include <iostream>
using namespace std;

enum Banks { PKO, BGZ, BRE, BPH };
struct Account {
	Banks bank;
	int balance;
};
struct Person {
	char name[20];
	Account account;
};
struct Couple {
	Person he;
	Person she;
};


Couple* bestClient(Couple* cpls, int size, Banks bank) {
	int i;
	int maxSum = INT_MIN;
	Couple* bestCouple = nullptr;

	for (i = 0; i < size; i++) {
		Couple* c = &(cpls[i]);

		if (c->he.account.bank == bank || c->she.account.bank == bank) {
			int sum = c->he.account.balance + c->she.account.balance;
			if (sum > maxSum) {
				maxSum = sum;
				bestCouple = c;
			}
		}
	}
	cout << "cos" << endl;
	return bestCouple;
}
int main() {
	using std::cout; using std::endl;
	Couple cpls[] = {
		{{"Johny", {PKO, 1200}}, {"Mary", {BGZ, 1400}}},
		{{"Peter", {BGZ, 1400}}, {"Suzy", {BRE, -1500}}},
		{{"Kevin", {PKO, 1600}}, {"Katy", {BPH, 1500}}},
		{{"Kenny", {BPH, 200}}, {"Lucy", {BRE, -201}}},
	};
	const Couple* p = bestClient(cpls, 4, BRE);
	if (p)
		cout << p->he.name << " and " << p->she.name
		<< ": " << p->he.account.balance +
		p->she.account.balance << endl;
	else
		cout << "No such couple...\n";
}
*/
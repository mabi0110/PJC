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
const Couple* bestClient(const Couple* cpls,
	int size, Banks bank) {

	if (cpls == nullptr || size <= 0) {
		return nullptr;
	}

	const Couple* bestCouple = nullptr;
	int maxBalance = -2147483648;

	for (int i = 0; i < size; i++)
	{
		if (cpls[i].he.account.bank == bank || cpls[i].she.account.bank == bank)
		{
			if (cpls[i].he.account.balance + cpls[i].she.account.balance > maxBalance)
			{
				maxBalance = cpls[i].he.account.balance + cpls[i].she.account.balance;
				bestCouple = cpls + i;
			}
		}
	}
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
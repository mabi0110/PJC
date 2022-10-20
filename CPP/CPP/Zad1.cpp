#include <iostream>
#include <string>

using namespace std;

void minMaxRep(int a[], size_t size, int& mn, size_t& in, int& mx, size_t& ix) {
	mn = a[0];
	mx = a[0];
	in = 1;
	ix = 1;
	
	for (size_t i = 1; i < size; ++i) {
		if (a[i] == mn) {
			in++;
		}
		if (a[i] < mn) {
			mn = a[i];
			in = 1;
		}
		if (a[i] == mx) {
			ix++;
		}
		if (a[i] > mx) {
			mx = a[i];
			ix = 1;
		}
	}

}

/*

int main() {
	using std::cout;
	int a[]{ 2,3,4,2,7,4,7,2 };
	size_t size = sizeof(a) / sizeof(*a);
	int mn, mx;
	size_t in, ix;
	minMaxRep(a, size, mn, in, mx, ix);
	cout << "Array: [ ";
	for (size_t i = 0; i < size; ++i)
		cout << a[i] << " ";
	cout << "]\n";
	cout << "Min = " << mn << " " << in << " times\n";
	cout << "Max = " << mx << " " << ix << " times\n";
}

*/


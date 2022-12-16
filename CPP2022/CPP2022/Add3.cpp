/*

#include <iostream>
using namespace std;

void histo(int arr[], size_t size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];	
		}
	}

	for (int j = 0; j < max; j++) {
		for (int i = 0; i < size; i++) {
			if (j < max - arr[i]) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}

}

int main() {
	int arr[]{ 2,1,0,7,1,9 };
	size_t size = sizeof(arr) / sizeof(*arr);
	histo(arr, size);
}

*/
#include <iostream>
#include <cmath>

const double* aver(const double* arr, size_t size, double& average) {
	double sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	average = sum / size;

	double minDifference = abs(arr[0] - average);
	int index = 0;

	for (int i = 1; i < size; i++) {
		if (abs(arr[i] - average) < minDifference) {
			minDifference = abs(arr[i] - average);
			index = i;
		}
	}
	return &arr[index];

}



int main() {
	using std::cout; using std::endl;
	double arr[] = { 1, 2, -1.5 , 3.25, 5.5, 7.75, -0.25, 5.75 };
	size_t size = std::size(arr);
	// or
	// size_t size = sizeof(arr)/sizeof(arr[0]);
	double average = 0;
	const double* p = aver(arr, size, average);
	cout << *p << " " << average << endl;
}


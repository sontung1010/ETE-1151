#include <iostream> 
using namespace std;

void fill_array_with_random_nums(int array[], int N) {
	unsigned seed; 

	cout << "Enter seed value: ";
	cin >> seed;
	cout << "\n";

	srand(seed); 

	for (int i = 0; i < N; i++) {
		array[i] = rand() % N;
	}
}

void print_array(int array[], int N) {
	for (int i = 0; i < N; i++) {
		cout << array[i] << "\t";
		if (i % 5 == 4) {
			cout << "\n";
		}
	}
}

int linear_search(int array[], int N, int element) {
	int indexFound;

	indexFound = -1;
	for (int i = 0; i < N; i++) {
		if (array[i] == element) {
			indexFound = i;
			break;
		}
	}
	
	return indexFound;
}

void print_search_result(int array[], int N) {
	int a;
	for (int i = 0; i < N; i++) {
		a = linear_search(array, N, i);
		if (a == -1) {
			cout << "-";
		}
		else {
			cout << "+";
		}
	}
	cout << "\n";
}
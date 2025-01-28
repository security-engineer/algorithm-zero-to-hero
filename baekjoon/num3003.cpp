#include <iostream>

using namespace std;

void num3003() {
	int piece[6] = { 1, 1, 2, 2, 2, 8 };
	int remain[6] = { 0, };
	
	for (int i = 0; i < 6; i++) {
		cin >> remain[i];
	}

	for (int i = 0; i < 6; i++) {
		cout << piece[i] - remain[i] << " ";
	}
}
#include <iostream>

using namespace std;

int num2444() {
	int count;
	cin >> count;

	for (int i = 1; i < count+1; i++) {
		for (int blanc = count-i; blanc > 0; blanc--)
			cout << " ";
		for (int star = i*2-1; star > 0; star--)
			cout << "*";
		cout << endl;
	}
	int loop = count-1;
	int blanc = 1;
	while(loop>0){
		int star = loop*2-1;
		for (int i = blanc; i > 0; i--) {
			cout << " ";
		}
		while (star > 0) {
			cout << "*";
			star--;
		}
		cout << endl;
		blanc++;
		loop--;
	}
	return 0;
}
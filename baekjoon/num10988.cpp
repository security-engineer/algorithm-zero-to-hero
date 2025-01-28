#include <iostream>
#include <string>

using namespace std;

bool palind(string line) {
	for (int i = 0; i < line.size() / 2; i++) {
		if (line[i] != line[line.size() - 1 - i])
			return false;
	}

	return true;
}

int num10988() {
	string line;
	getline(cin, line);

	cout << palind(line);
	return 0;
}
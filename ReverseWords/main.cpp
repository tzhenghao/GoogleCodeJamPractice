#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void runCase(int numTest) {

	string str;

	cin >> str;

	int i = 0;

	// reverse all words first, then reverse the whole string.
	while (str[i] != '\0') {

		int curr = i;
		while(str[curr] != ' ') {
			++curr;
		}

		//reverse(str.begin() + i, str.begin() + curr);

		while(str[curr] == ' ') {
			++curr;
		}

		i = curr;
	}
	//reverse(str.begin(), str.end());

	// Reverse the whole string.
	cout << "Case #" << numTest << ": " << str << "\n";
}

int main() {


	int numTestCases = 0;

	cin >> numTestCases;

	for (int i = 0; i < numTestCases; ++i) {

		runCase(i + 1);

	}

	return 0;
}

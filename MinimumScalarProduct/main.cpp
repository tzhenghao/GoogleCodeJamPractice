#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void runCase(int numTest) {

	vector<long>arr1;
	vector<long>arr2;

	int n;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		long temp;
		cin >> temp;
		arr1.push_back(temp);
	}

	for (int i = 0; i < n; ++i) {
		long temp;
		cin >> temp;
		arr2.push_back(temp);
	}

	sort(arr1.begin(), arr1.end());
	sort(arr2.begin(), arr2.end());

	long sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += arr1[i] * arr2[n-i-1];
	}

	cout << "Case #" << numTest << ": " << sum << "\n";
}

int main() {

	int numTestCases = 0;

	cin >> numTestCases;

	for (int i = 0; i < numTestCases; ++i) {
		runCase(i + 1);
	}

	return 0;
}

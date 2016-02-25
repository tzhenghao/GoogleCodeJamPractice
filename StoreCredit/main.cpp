#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

void runCase(int caseNum) {

	int credit, size;

	cin >> credit;
	cin >> size;

	vector<int> arr;
	unordered_map<int, vector<int>> arrIndex;

	for (int i = 0; i < size; ++i) {

		int temp;
		cin >> temp;

		arr.push_back(temp);
		arrIndex[temp].push_back(i + 1);
	}

	sort(arr.begin(), arr.end());

	int left = 0;
	int right = arr.size() - 1;

	while (left < right) {

		int sum = arr[left] + arr[right];

		if (sum < credit) {
			++left;
		}
		else if (sum > credit) {
			--right;
		}
		else {
			cout << "Case #" << caseNum << ": ";

			if (arr[left] == arr[right]) {
				cout << arrIndex[arr[left]][0] << " " << arrIndex[arr[left]][1] << "\n";
			}
			else if (arrIndex[arr[left]] < arrIndex[arr[right]]) {
				cout << arrIndex[arr[left]][0] << " " << arrIndex[arr[right]][0] << "\n";
			}
			else {
				cout << arrIndex[arr[right]][0] << " " << arrIndex[arr[left]][0] << "\n";
			}

			break;
		}
	}
}

int main() {

	int numTestCases = 0;

	cin >> numTestCases;
	for (int i = 0; i < numTestCases; ++i) {
		runCase(i + 1);
	}

	return 0;
}

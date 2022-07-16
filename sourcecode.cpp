#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	bool isActive = true;
	string newn_r, newn;
	string ans = "";

	while (isActive) {
		newn_r = "";
		newn = "";
		cout << "Enter a decimal number: ";

		cin >> a;
		while (a >= 1) {
			newn_r += to_string(a % 2);
			a /= 2;
		}

		for (int i = newn_r.length() - 1; i >= 0; i--) {
			newn += newn_r[i];
		}

		cout << "Your binary number is " << newn << endl;
		cout << "Continue? [Y/N] ";
		cin >> ans;
		if (ans == "n" || ans == "N")
			isActive = false;
	}

	return 0;
}

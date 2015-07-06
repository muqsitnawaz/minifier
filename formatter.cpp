#include <iostream>
#include <fstream>
using namespace std;

bool allSpaces(string str) {
	for (int i = 0; i < str.size(); i++) {
		if ((int)str[i] != 32) {
			return false;
		}
	}

	return true;
}

void function codeMinifer() {
	ifstream in("sample.txt");
	ofstream out("formatted.txt");

	string str = "";
	while (!in.eof()) {
		getline(in, str);

		if (!allSpaces(str)) {
			out << str << "\\" << "n";
		}
	}
}

void function cssMinifier() {
	ifstream in("sample.txt");
	ofstream out("formatted.txt");

	string str = "";
	while (!in.eof()) {
		getline(in, str);

		if (!allSpaces(str)) {
			out << str << " ";
		}
	}
}

int main() {
	int ch = -1;
	while (ch != 1 || ch != 2) {
		cout << "1. Run Code Minfier\n";
		cout << "2. Run Css Minfier\n";
	}

	switch (ch) {
		case 1:
			codeMinifer();
			break;
		case 2:
			cssMinifier();
			break;
	}
}
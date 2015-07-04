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

int main() {
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
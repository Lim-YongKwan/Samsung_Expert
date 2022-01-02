#include<iostream>

using namespace std;

int main() {

	int testcase;
	cin >> testcase;
	for (int T = 1; T <= testcase; T++) {

		string s;
		cin >> s;
		if (s == "MON") {
			cout << "#" << T << " " << 6 << endl;
		}
		else if (s == "TUE")
		{
			cout << "#" << T << " " << 5 << endl;

		}
		else if (s == "WED") {
			cout << "#" << T << " " << 4 << endl;
		}
		else if(s == "THU"){
			cout << "#" << T << " " << 3 << endl;
		}
		else if (s == "FRI") {
			cout << "#" << T << " " << 2 << endl;
		}
		else if (s == "SAT") {
			cout << "#" << T << " " << 1 << endl;
		}
		else if (s == "SUN") {
			cout << "#" << T << " " << 7 << endl;
		}

	}

	return 0;
}
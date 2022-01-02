
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

bool palindrome(int n) {
	string s;
	s += to_string(n);
	string reverse_s;
	reverse_s = s;
	reverse(s.begin(), s.end());
	if (s == reverse_s)
		return true;
	else
		return false;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a;
		int b;
		cin >> a >> b;

		int number = 0;

		for (int i = a; i <= b; i++) {
			if (sqrt(i) != (int)sqrt(i)) {
				continue;
			}
			if (palindrome(i) && palindrome(sqrt(i))) {
				number++; // ���� 1 �����ϱ�.
			}
		}
		
		cout << "#" << test_case << " " << number << endl;

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
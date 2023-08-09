#include <iostream>
using namespace std;
void recursive(string &str, int i = 0)
{
	int n = str.length();
	if (i == n / 2)
		return;
	swap(str[i], str[n-i-1]);
	recursive(str, i + 1);
}

int main()
{
	string str = "decode";
	recursive(str);
	cout << str;
	return 0;
}


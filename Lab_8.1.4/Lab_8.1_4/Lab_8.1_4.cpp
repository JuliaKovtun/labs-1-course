#include <iostream>
#include <string>
using namespace std;

string Change(string& s)
{
	int c = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1) {
		c++;
		if (c == 3) {
			s.replace(pos, 1, "**");
			break;
		}
		pos++;
	}
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	string dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
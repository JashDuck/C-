#include <iostream>
#include <string>
#include <cctype>
#include "Utilities.h"

using namespace std;

string Utilities::strip(const string& inpt) {
	auto start_it = inpt.begin();
	auto end_it = inpt.rbegin();
	while (isspace(*start_it))
		++start_it;
	while (isspace(*end_it))
		++end_it;
	return string(start_it, end_it.base());
}

double Utilities::isNum(string str) {
	str = strip(str);
	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i]) == false) return -1;
	}
	return stod(str);
}
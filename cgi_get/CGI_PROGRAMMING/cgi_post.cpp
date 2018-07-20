//: C10:CGI_POST.cpp
// CGImap works as easily with POST as it
// does with GET.
#include "CGImap.h"
#include <iostream>
using namespace std;
int main() {
	cout << "Content-type: text/plain\n" << endl;
	Post p; // Get the query string
	CGImap query(p);
	// Test: dump all names and values
	for (CGImap::iterator it = query.begin();
		it != query.end(); it++) {
		cout << (*it).first << " = "
			<< (*it).second << endl;
	}
} ///:~ 
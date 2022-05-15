#include "hw2_test.h"
#include <stdio.h>
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    int x = get_status();
	cout << "status: " << x << endl;
	assert(x == 0);
    x = set_status(1);
	cout << "set_status returns: " << x << endl;
	assert(x == 0);
    x = get_status();
	cout << "new status: " << x << endl;
	assert(x == 1);
    cout << "===== SUCCESS =====" << endl;
    return 0;
}


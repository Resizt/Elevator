// INCOMPLETE //

#include <iostream>
#include <stdlib.h>
#include <ksguid.h>

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

using namespace std;

void called(bool&, int&);
int elevator(bool&, int&);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main() {
	int floor;
	bool pressed;

	called(pressed, floor);
	elevator(pressed, floor);
	exit(0);
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void called(bool& pressed, int& floor) {
	cout << "What floor are you on: ";
	cin >> floor;
	if (floor < 5 && floor > 0) {
		pressed = true;
	}
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int elevator(bool& pressed, int& floor) {
	int elevatorcalled, realnum;
	elevatorcalled = rand() % 1 + 10;

	for (int rng = 0; rng > 100; rng++) {

	}

	cout << elevatorcalled << endl;
}

// This is a test from visual studios

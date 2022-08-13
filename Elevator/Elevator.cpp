// INCOMPLETE //

#include <iostream>
#include <stdlib.h>
#include <ksguid.h>
#include <queue>

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

using namespace std;

int called(bool&, int&); // User calling elevator0
void elevator(bool&, int&);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main() {
	int floor;
	bool pressed;
	elevator(pressed, floor);

	printf("Goodbye World");
	exit(0);	
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int called(bool& pressed, int& floor) {
	int elevatorcalled, realnum;
	elevatorcalled = rand() % 1 + 10;
}

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

void elevator(bool& pressed, int& floor) {
	queue<int> FloorTravel;
	bool eOff = true;

	while (!eOff) {
		FloorTravel.push(called(pressed, floor));
	}
}

// This is a test from visual studios


/*
Workflow
Elevator sititng still
Call function happens
Set direction (if Currentfloor < ifFloorIsCalled) = Up 
(if statement ifFloorisCalled while in motion) add to queue
	(if Currentfloor < ifFloorIsCalled) = Up 
When elevator reach floor (pop.front)
if !queue.empty 

*/
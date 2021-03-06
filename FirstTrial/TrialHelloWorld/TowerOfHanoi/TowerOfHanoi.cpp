// TowerOfHanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stack>
#include <iostream>

using namespace std;
////// definition of puzzle
// num of stacks -- 3
// num of disks -- user input
////// constraints --
// Only one disk can be moved at a time.
// Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
// No larger disk may be placed on top of a smaller disk.

// sample problem from User
// How many disks do you want to move? -- numb of disks
// list of disks -- in descenting order

typedef stack<int> Peg;
typedef struct {
	int numOfDisks;
	Peg  pegs[3];

	void moveDisk(int from, int to) {
		if (0 > from || from > 2) {
			cout << "error: wrong input:" << from << endl; exit(-1);
		}
		if (0 > to || to > 2) {
			cout << "error: wrong input:" << to << endl; exit(-1);
		}
		if (pegs[from].size() == 0) {
			cout << "No element to pop from peg:" << from + 1 << endl;
			exit(-1);
		}
		int disk = pegs[from].top();
		pegs[from].pop();
		pegs[to].push(disk);
		display();
	}
	void display() {
		Peg  tempPeg ;
		cout << "Number of disks[" << numOfDisks << "]";
		for (int i = 0; i < 3; i++) {
			cout << "- disks on peg " << i+1 << "{";
			tempPeg = std::move(pegs[i]);
			while (tempPeg.size()) {
				int topDisk = tempPeg.top();
				tempPeg.pop();
				cout << " " << topDisk;
				pegs[i].push(topDisk);
			}
			cout << "}";
			tempPeg = std::move(pegs[i]);
			while (tempPeg.size()) {
				int topDisk = tempPeg.top ();
				tempPeg.pop();
				pegs[i].push(topDisk);
			}
		}
		cout << endl;
	}
} TowerOfHonoi;
TowerOfHonoi getInputPuzzle_test() {
	TowerOfHonoi tohObj;
	tohObj.numOfDisks = 3;
	tohObj.pegs[0].push(5);
	tohObj.pegs[0].push(3);
	tohObj.pegs[0].push(1);
	return tohObj;
}

TowerOfHonoi getInputPuzzleCMD() {
	TowerOfHonoi tohObj;
	cout << "Enter the number of disks:" << endl;
	cin >> tohObj.numOfDisks;
	cout << "Enger the disks in desceding order:" << endl;
	for (int i = 0; i < tohObj.numOfDisks; i++) {
		int numb;
		cin >> numb;
		tohObj.pegs[0].push(numb);
	}
	return tohObj;
}
void tohSolve(TowerOfHonoi &tohObj) {
	tohObj.moveDisk(0, 2);
}

int main()
{
	TowerOfHonoi tohObj = getInputPuzzle_test();
	tohObj.display();
	tohSolve(tohObj);
    return 0;
}


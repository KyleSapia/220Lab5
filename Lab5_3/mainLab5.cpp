/*
 * mainLab5.cpp
 *
 *  Created on: May 15, 2019
 *      Author: kylesapia
 */


#include <iostream>
using namespace std;
#include <time.h>
#include "hashMap.hpp"
#include "hashNode.hpp"
#include "makeSeuss.hpp"

int main() {
	//cout << "Hi" << endl;
	makeSeuss("DrSeuss.txt", "NewText.txt", true, true);
	return 0;
}

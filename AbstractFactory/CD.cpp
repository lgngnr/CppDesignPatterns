/*
 * CD.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#include "CD.h"

using namespace std;

CD::CD() {
	// TODO Auto-generated constructor stub
}

string CD::read(){
	return sound;
}

void CD::write(string s){
	sound = s;
}

CD::~CD() {
	// TODO Auto-generated destructor stub
}


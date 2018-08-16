/*
 * Tape.cpp
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#include "Tape.h"

using namespace std;

Tape::Tape() {
	// TODO Auto-generated constructor stu
}

string Tape::read(){
	return sound;
}

void Tape::write(string s){
	sound = s;
}

Tape::~Tape() {
	// TODO Auto-generated destructor stub
}



/*
 * Tape.h
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#ifndef TAPE_H_
#define TAPE_H_

#include <string>

namespace Media {
	class Tape;
} /* namespace Media */

class Tape: public Media {
public:
	Tape();
	std::string read();
	void write(std::string);
	virtual ~Tape();
private:
	std::string sound;
};


#endif /* TAPE_H_ */

/*
 * CD.h
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#ifndef CD_H_
#define CD_H_

#include <string>

namespace Media {
	class CD;
} /* namespace Media */

class CD {
public:
	CD();
	std::string read();
	void write(std::string);
	virtual ~CD();
private:
	std::string sound;
};


#endif /* CD_H_ */

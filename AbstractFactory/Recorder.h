/*
 * Product.h
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#ifndef RECORDER_H_
#define RECORDER_H_

#include <string>
#include "Media.h"

namespace Product{
	class Recorder;
}

class Recorder{
public:
	Recorder();
	void insert(Media::Media*);
	virtual void record(std::string) = 0;
	virtual void play() = 0;
	virtual ~Recorder();
};



#endif /* RECORDER_H_ */

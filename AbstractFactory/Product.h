/*
 * Product.h
 *
 *  Created on: Aug 16, 2018
 *      Author: luigi
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>
#include "Media.h"

namespace Product{
	class Product;
}

class Product{
public:
	Product();
	void insert(Media::Media*);
	virtual void record(std::string) = 0;
	virtual void play() = 0;
	virtual ~Product();
};



#endif /* PRODUCT_H_ */

/*
 * Point.h
 *
 *  Created on: 08/11/2016
 *      Author: weslley
 */

#ifndef POINT_H_
#define POINT_H_

class Point : public Element  {
    Vector mCoords;
public:
	Point();
	virtual ~Point();
};

#endif /* POINT_H_ */

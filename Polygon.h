/*
 * Face.h
 *
 *  Created on: 08/11/2016
 *      Author: weslley
 */

#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon : public Element {
    std::vector<Point&> mPoints;
    std::vector<Edge&> mEdges;
public:
	Polygon();
	virtual ~Polygon();
};

#endif /* POLYGON_H_ */

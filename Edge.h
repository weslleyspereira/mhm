/*
 * Edge.h
 *
 *  Created on: 08/11/2016
 *      Author: weslley
 */

#include <vector>

#ifndef EDGE_H_
#define EDGE_H_

class Edge : public Element {
    std::vector<Point&> mPoints;
public:
	Edge();
	virtual ~Edge();
};

#endif /* EDGE_H_ */

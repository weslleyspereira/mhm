/*
 * Polyhedron.h
 *
 *  Created on: 08/11/2016
 *      Author: weslley
 */

#ifndef POLYHEDRON_H_
#define POLYHEDRON_H_

class Polyhedron : public Element {
    std::vector<Point&> mPoints;
    std::vector<Edge&> mEdges;
    std::vector<Polygon&> mFaces;
public:
	Polyhedron();
	virtual ~Polyhedron();
};

#endif /* POLYHEDRON_H_ */

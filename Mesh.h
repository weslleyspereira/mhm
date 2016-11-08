/*
 * Mesh.h
 *
 *  Created on: 08/11/2016
 *      Author: weslley
 */

#ifndef MESH_H_
#define MESH_H_

class Mesh {

    std::vector<Point> mPoints;
    std::vector<Element> mElements;

    std::vector<Edge> mEdges; // If it is empty, meshDim < 2
    std::vector<Polygon> mFaces; // If it is empty, meshDim < 3

public:
	Mesh();
	virtual ~Mesh();

	int getDim() const {
		if (mEdges.empty()) return 1;
		else if (mFaces.empty()) return 2;
		else return 3;
	};
};

#endif /* MESH_H_ */

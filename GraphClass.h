///Class to represent the map of Ohio as a graph.
//CountyMap array may be unneccessary depending on 
//if the boarder arrays for the nodes are enough to work with.


#include "CountyNode.h"
#include "CountyClusterClass.h"

public class OhioGraph
{
public:
	OhioGraph(): NumberOfNodes_(0) , nodeEdgeMatrix_[0][0] {};

	OhioGraph(int NumberOfNodes):
		NumberOfNodes_(NumberOfNodes) , nodeEdgeMatrix_[NumberOfNodes][NumberOfNodes] {}; 
	
	int getEdgeExistance(int nodeNumber1, int nodeNumber2){
		return nodeEdgeMatrix_[nodeNumber1], [nodeNumber2];
	} //from nodeNumber1 to nodeNumber2

private:

	int NumberOfNodes_; //Nodes being regions, counties, etc.

	int nodeEdgeMatrix_[NumberOfNodes_][NumberOfNodes_];//Matrix to represent boarders and the map as a whole
														//Node Connections can represented as 1 or 0 if they are 
														//Connected or not, 1 = edge connection between node pair
														//0 = no edge connection between node pair.	

};


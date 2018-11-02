//Class to represent the map of Ohio as a graph.
//CountyMap array may be unneccessary depending on 
//if the boarder arrays for the nodes are enough to work with.


#include "CountyNode.h"
#include "CountyClusterClass.h"

public class OhioGraph
{
public:
	OhioGraph(): NumberOfNodes_(0) , countyMap_[0][0] {};

	OhioGraph(int NumberOfNodes):
		NumberOfNodes_(NumberOfNodes) , countyMap_[NumberOfNodes][NumberOfNodes] {}; 
	


private:

	int NumberOfNodes_; //Nodes being regions, counties, etc.

	int countyMap_[NumberOfNodes_][NumberOfNodes_];//Matrix to represent boarders and the map as a whole
														//Node Connections can represented as 1 or 0 if they are 
														//Connected or not, 1 = edge connection between node pair
														//0 = no edge connection between node pair.	

};

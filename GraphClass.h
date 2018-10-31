//Class to represent the map of Ohio as a graph.
//CountyMap array may be unneccessary depending on 
//if the boarder arrays for the nodes are enough to work with.


#include "NodeClass.h"


public class OhioGraph
{
public:
	OhioGraph(): NumberOfCounties_(0) , countyMap_[0][0] {};

	OhioGraph(int NumberOfCounties, int countyMap[NumberOfCounties][NumberOfCounties]):
		NumberOfCounties_(NumberOfCounties) , countyMap_[countyMap] {}; 
		

private:

	int NumberOfCounties_;

	int countyMap_[NumberOfCounties_][NumberOfCounties_];//Matrix to represent boarders and the map as a whole
														//Node Connections can represented as 1 or 0 if they are 
														//Connected or not, 1 = edge connection between node pair
														//0 = no edge connection between node pair.	

};

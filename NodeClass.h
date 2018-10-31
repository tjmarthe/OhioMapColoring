//Node class for graph, Nodes represent vertices of connected edges.
//Edges will represent boarders of Ohio counties.
//Nodes will represent the actual counties
//Nodes will need an array for boardering states, 
//with pointers to the information on the other nodes.
//Nodes also have a color value

#include <cstdlib>
#include <iostream>


public class CountyNode
{

public:
	
	CountyNode(): countyNumber_(0), boarderingCounties_(0) , colorValue_(0) , boarderArray_(0) {}

	CountyNode(int countyNumber, int boarderingCounties, int colorValue, CountyNode boarderArray[boarderingCounties]): 
		countyNumber(0), boarderingCounties_(boarderingCounties) , colorValue_(colorValue) 
		, boarderArray_(boarderArray) {}

	int getCountyNumber() return countyNumber_;{}

	int getBoarderingCounties() return boarderingCounties_;{}

	int getColor() return colorValue_; {}

	CountyNode getBoarders() return boarderArray_;{}

private:
	
	int countyNumber_;

	int boarderingCounties_;

	int colorValue_; //Made this an int instead of a string because 
					//I think it'll be easier to compare this way.

	CountyNode boarderArray_[boarderingCounties_];
};
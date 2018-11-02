//Node class for graph, Nodes represent vertices of connected edges.
//Edges will represent boarders of Ohio counties.
//Nodes will represent the actual counties
//Nodes will need an array for boardering states, 
//with pointers to the information on the other nodes.
//Nodes also have a color value

#include <cstdlib>
#include <iostream>
#include <string.h>

public class CountyNode
{

public:
	
	CountyNode(): countyNumber_(0), boarderingCounties_(0) , colorValue_(0) , boarderArray_(0) {}

	CountyNode(int countyNumber, int boarderingCounties, int colorValue): 
		countyNumber(0), boarderingCounties_(boarderingCounties) , colorValue_(colorValue) 
		, boarderArray_ = CountyNode new[boarderingCounties_] {};

	int getCountyNumber() return countyNumber_;{}

	int getBoarderingCounties() return boarderingCounties_;{}

	int getColor() return colorValue_; {}

	CountyNode getBoarders() return boarderArray_;{}

	void printCounty(){
		cout << name_ << endl;
		}

private:
	
	string name_;

	int countyNumber_;

	int boarderingCounties_;

	int colorValue_; //Made this an int instead of a string because 
					//I think it'll be easier to compare this way.

	CountyNode* boarderArray_ = CountyNode new[boarderingCounties_];
};

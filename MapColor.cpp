//Map Color Main

#include <iostream>
#include "CountyClusterClass.h"


void color(CountyClusterClass curr){
	bool isConnectedOne;
	bool isConnectedTwo;
	bool isConnectedThree;
	bool isConnectedFour;
	bool isConnectedFive;
	bool isConnectedSix;
	
	for (int i = 0; i < curr.surroundingClusters_; ++i;){
		if(curr.surroundingClusterArray_[i].getColor = 1)
			isConnectedOne = true;	
		if(curr.surroundingClusterArray_[i].getColor = 2)
			isConnectedTwo = true;
		if(curr.surroundingClusterArray_[i].getColor = 3)
			isConnectedThree = true;
		if(curr.surroundingClusterArray_[i].getColor = 4)
			isConnectedFour = true;
		if(curr.surroundingClusterArray_[i].getColor = 5)
			isConnectedFive= true;
		if(curr.surroundingClusterArray_[i].getColor = 6)
			isConnectedSix = true

	}


}


int main(){

	CountyClusterClass one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

	one.surroundingClusters_ = 4;
	one.surroundingClusterArray_[0] = two;
	one.surroundingClusterArray_[1] = three;
	one.surroundingClusterArray_[2] = six;
	one.surroundingClusterArray_[3] = seven;

	two.surroundingClusters_ = 2;
	two.surroundingClusterArray_[0] = one;
	two.surroundingClusterArray_[1] = three;

	three.surroundingClusters_ = 7;
	three.surroundingClusterArray_[0] = two;
	three.surroundingClusterArray_[1] = five;
	three.surroundingClusterArray_[2] = one;
	three.surroundingClusterArray_[3] = six;
	three.surroundingClusterArray_[4] = eleven;
	three.surroundingClusterArray_[5] = four;
	three.surroundingClusterArray_[6] = twelve;

	four.surroundingClusters_ = 3;
	four.surroundingClusterArray_[0] = three;
	four.surroundingClusterArray_[1] = eleven;
	four.surroundingClusterArray_[2] = twelve;

	five.surroundingClusters_ = 4;
	five.surroundingClusterArray_[0] = three;
	five.surroundingClusterArray_[1] = six;
	five.surroundingClusterArray_[3] = eleven
	five.surroundingClusterArray_[4] = ten;

	six.surroundingClusters_ = 7;
	six.surroundingClusterArray_[0] = three;
	six.surroundingClusterArray_[1] = five;
	six.surroundingClusterArray_[2] = one;
	six.surroundingClusterArray_[3] = nine;
	six.surroundingClusterArray_[4] = seven;
	six.surroundingClusterArray_[5] = ten;
	six.surroundingClusterArray_[6] = eight;

	seven.surroundingClusters_ = 3;
	seven.surroundingClusterArray_[0] = six;
	seven.surroundingClusterArray_[1] = eight;
	seven.surroundingClusterArray_[2] = one;

	eight.surroundingClusters_ = 3;
	eight.surroundingClusterArray_[0] = seven;
	eight.surroundingClusterArray_[1] = nine;
	eight.surroundingClusterArray_[2] = six;

	nine.surroundingClusters_ = 3
	nine.surroundingClusterArray_[0] = eight;
	nine.surroundingClusterArray_[1] = six;
	nine.surroundingClusterArray_[2] = ten;

	ten.surroundingClusters_ = 3
	ten.surroundingClusterArray_[0] = five;
	ten.surroundingClusterArray_[1] = eleven;
	ten.surroundingClusterArray_[2] = nine;

	eleven.surroundingClusters_ = 4
	eleven.surroundingClusterArray_[0] = ten;
	eleven.surroundingClusterArray_[1] = five;
	eleven.surroundingClusterArray_[2] = three;
	eleven.surroundingClusterArray_[3] = four;

	twelve.surroundingClusters_ = 2
	twelve.surroundingClusterArray_[0] = three;
	twelve.surroundingClusterArray_[1] = four;

	CountyClusterClass ohioArray[12];

	ohioArray[0] = one;
	ohioArray[1] = two;
	ohioArray[2] = three;
	ohioArray[3] = four;
	ohioArray[4] = five;
	ohioArray[5] = six;
	ohioArray[6] = seven;
	ohioArray[7] = eight;
	ohioArray[8] = nine;
	ohioArray[9] = ten;
	ohioArray[10] = eleven;
	ohioArray[11] = twelve;




}
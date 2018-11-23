//Map Color Main

#include <iostream>
#include "CountyClusterClass.h"





int main(){

  CountyCluster one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;

  //These are each node, with an array of each touching node
  one.getsuroundingClusters(4);
  one.giveConnection(0, two);
  one.giveConnection(1, three);
  one.giveConnection(2, six);
  one.giveConnection(3, seven);

  two.getsuroundingClusters(2);
  two.giveConnection(0, one);
  two.giveConnection(1, three);

  three.getsuroundingClusters(7);
  three.giveConnection(0, two);
  three.giveConnection(1, five);
  three.giveConnection(2, one);
  three.giveConnection(3, six);
  three.giveConnection(4, eleven);
  three.giveConnection(5, four);
  three.giveConnection(6, twelve);

  four.getsuroundingClusters(3);
  four.giveConnection(0, three);
  four.giveConnection(1, eleven);
  four.giveConnection(2, twelve);

  five.getsuroundingClusters(4);
  five.giveConnection(0, three);
   five.giveConnection(1, six);
  five.giveConnection(3, eleven);
  five.giveConnection(4, twelve);

  six.getsuroundingClusters(7);
  six.giveConnection(0, three);
  six.giveConnection(1, five);;
  six.giveConnection(2, one);;
  six.giveConnection(3, nine);
  six.giveConnection(4, seven);
 six.giveConnection(5, ten);
 six.giveConnection(6, eight);

  seven.getsuroundingClusters(3);
  seven.giveConnection(0, six);
  seven.giveConnection(1, eight);
  seven.giveConnection(2, one);

  eight.getsuroundingClusters(3);
  eight.giveConnection(0, seven);
  eight.giveConnection(1, nine);
  eight.giveConnection(2, six);

  nine.getsuroundingClusters(3);
  nine.giveConnection(0, eight);
  nine.giveConnection(1, six);
  nine.giveConnection(2, ten);

  ten.getsuroundingClusters(3);
  ten.giveConnection(0, five);
  ten.giveConnection(1, eleven);
  ten.giveConnection(2, nine);

  eleven.getsuroundingClusters(4);
  eleven.giveConnection(0, ten);
  eleven.giveConnection(1, five);
  eleven.giveConnection(2, three);
  eleven.giveConnection(3, four);

  twelve.getsuroundingClusters(2);
  twelve.giveConnection(0, three);
  twelve.giveConnection(1, four);

  CountyCluster ohioArray[12];

  //each node
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

	int nodeLength[11] = { 10 , 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
	int tempLength;
	//Put lengths into an array
	for (int i = 0; i < 12; ++i) {
		tempLength = sizeof(ohioArray.surroundingClustersArray_) / sizeof(ohioArray[i].surroundingClustersArray_);
		if (nodeLength[i] > tempLength) {
			nodeLength[i] = tempLength;
		}
	}
	for (int i = 0; i < 12; ++i) {
		cout << "nodeLength " << i << ": " << nodeLength[i] << endl;
	}
	//Have our array fill up with nodeLength
	int ascendingArrays[11];
	for (int i = 0; i < 12; ++i) {
		ascendingArrays[i] = nodeLength[i];
	}
	//Meant for sorting from lowest to highest
	int temp;
	for (int i = 0; i < 12; ++i) {
		for (int j = i + 1; j < 12; ++j) {
			if (ascendingArrays[i] > ascendingArrays[j]) {
				temp = ascendingArrays[i];
				ascendingArrays[i] = ascendingArrays[j];
				ascendingArrays[j] = temp;
			}
		}
	}

	/*for (int i = 0; i < 12; ++i) {

	}*/
}

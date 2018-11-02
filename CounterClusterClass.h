//County Cluster Class
//Includes graph of CounyNodes
//Allows for us to mkae a graph of county clusters.
//Each node of the graph will have a graph consisting of the counties in that cluster.


#include "GraphClass.h"
#include "CountyNode.h"

public class CounterCluster
{
public:

	CounterCluster(int clusterNumber, int clusterColor, int suroundingClusters, int counties): 
		clusterNumber_(clusterNumber) , clusterColor(clusterColor_), surroundingClusters(suroundingClusters_)	
		, surroundingClustersArray_ = CounterCluster new[surroundingClusters], int counties_(counties), 
			countyArray_ = CountyNode new[counties] {};	
	
	CounterCluster(): 
		clusterNumber_(0), clusterColor_(0), surroundingClusters_(0), surroundingClustersArray_(0) {};
	
	~CounterClusterClass(){
		delete[] surroundingClusters_;
		delete[] countyArray_;
		}

	int getNumber(){return clusterNumber_;}

	int getColor(){return clusterColor_;}

	int getsuroundingClusters(){return surroundingClusters_;}

	CounterCluster& getsuroundingClustersArray(){
			return surroundingClustersArray_;
		}

	CountyNode& getCounties(){
		return countyArray_;
	}

	void printCluster(){
		for (int i = 0; i < counties_; ++i)
			cout << countyArray_[i] << endl;
		}
private:
	int clusterNumber_;
	GraphClass countyGraph_;
	int counties_;
	int clusterColor_;
	int surroundingClusters_;
	CountyCluster* surroundingClustersArray_ = CounterCluster new[surroundingClusters_];
	CountyNode* countyArray_ = CountyNode new[counties];
};

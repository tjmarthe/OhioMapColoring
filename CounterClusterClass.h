//County Cluster Class
//Includes graph of CounyNodes
//Allows for us to mkae a graph of county clusters.
//Each node of the graph will have a graph consisting of the counties in that cluster.


#inlcude "GraphClass.h"


public class CounterCluster
{
public:

	CounterCluster(int clusterColor, int suroundingClusters): 
		clusterColor(clusterColor_), surroundingClusters(suroundingClusters_)	
		, surroundingClustersArray_[suroundingClusters] {};	
	
	CounterCluster(): 
		clusterColor_(0), surroundingClusters_(0), surroundingClustersArray_(0) {};
	~CounterClusterClass();

	int getColor(){return clusterColor_;}

	int getsuroundingClusters(){return surroundingClusters_;}

	int getsuroundingClustersArray(){return surroundingClustersArray_;}
private:
	GraphClass countyGraph_;
	int clusterColor_;
	int surroundingClusters_;
	CountyCluster surroundingClustersArray_[suroundingClusters_];
};
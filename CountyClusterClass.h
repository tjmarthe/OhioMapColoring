//County Cluster Class
//Includes graph of CounyNodes
//Allows for us to mkae a graph of county clusters.
//Each node of the graph will have a graph consisting of the counties in that cluster.


//#include "GraphClass.h"
#include "CountyNode.h"

class CountyCluster
{
 public:

  CountyCluster(int clusterNumber, int clusterColor, int suroundingClusters, int counties):
  clusterNumber_(clusterNumber) , clusterColor(clusterColor_), surroundingClusters(suroundingClusters_), int counties_(counties){};

 CountyCluster():
  clusterNumber_(0), clusterColor_(0), surroundingClusters_(0), surroundingClustersArray_(0) {};

  ~CountyCluster(){
    delete[] surroundingClustersArray_;
    delete[] countyArray_;
  }

  int getNumber(){return clusterNumber_;}

  int getColor(){return clusterColor_;}

  int getsuroundingClusters(){return surroundingClusters_;}

  CountyCluster& getsuroundingClustersArray(){
    return surroundingClustersArray_;
  }

  CountyNode& getCounties(){
    return countyArray_;
  }

  CountyCluster& operator=(CountyCluster rhs){
    int clusterColor_ = rhs.clusterColor_;
    int counties_ = rhs.counties_;
    int clusterNumber_ = rhs.clusterNumber_;
    int surroundingClusters_ = rhs.surroundingClusters_;
    for(int i = 0; i < surroundingClusters_; ++i){
      surroundingClustersArray_[i] = rhs.surroundingClustersArray_[i];
    }
    for(int i = 0; i < counties_; ++i){
      countyArray_ = rhs.countyArray_;
    }

    return *this;
  }

  void printCluster(){
    for (int i = 0; i < counties_; ++i)
      std::cout << countyArray_[i] << std::endl;
  }
 private:
  int clusterNumber_;
  //GraphClass countyGraph_; //To keep track of boarder connections(edge connections)
int counties_;
  int clusterColor_;
  int surroundingClusters_;
  CountyCluster* surroundingClustersArray_ = CountyCluster new[surroundingClusters_]; //Number of contraints = surrounding clusters
  CountyNode* countyArray_ = CountyNode new[counties]; //Keep track of conties in the graph.
};




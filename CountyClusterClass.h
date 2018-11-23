//County Cluster Class
//Includes graph of CounyNodes
//Allows for us to mkae a graph of county clusters.
//Each node of the graph will have a graph consisting of the counties in that cluster.


//#include "GraphClass.h"
#include "CountyNode.h"

class CountyCluster
{
 public:

  CountyCluster():
  clusterNumber_(0), clusterColor_(0), surroundingClusters_(0), surroundingClustersArray_(0) {};


  CountyCluster(int clusterNumber, int clusterColor, int suroundingClusters, int counties){
  clusterNumber_ = clusterNumber;
  clusterColor_ = clusterColor;
  surroundingClusters_ = suroundingClusters;
  int counties_ = counties;
  }

  ~CountyCluster(){
    delete[] surroundingClustersArray_;
    delete[] countyArray_;
  }

  int getNumber(){return clusterNumber_;}

  int getColor(){return clusterColor_;}

  void getsuroundingClusters(int i){surroundingClusters_ = i;}

  void assignColor(int i){colorCluster_ = i;}
 
  /*
  CountyCluster& getsuroundingClustersArray(){
    return surroundingClustersArray_;
  }
  */
  /*
  CountyNode& getCounties(){
    return countyArray_;
  }
  */
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


 void giveConnection(int index, CountyCluster cluster){
    surroundingClustersArray_[index] = cluster;
  }

  void printCluster(){
    for (int i = 0; i < counties_; ++i)
       countyArray_[i].printCounty();
  }

 private:
  int clusterNumber_;
  //GraphClass countyGraph_; //To keep track of boarder connections(edge connections)
  int counties_;
  int clusterColor_;
  int surroundingClusters_;
  CountyCluster* surroundingClustersArray_ = new CountyCluster[surroundingClusters_]; //Number of contraints = surrounding clusters
  CountyNode* countyArray_ = new CountyNode[counties_]; //Keep track of conties in the graph.
};







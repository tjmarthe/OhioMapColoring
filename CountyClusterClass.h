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

  int getBoarderNumbers(){return surroundingClusters_;}

  void getsuroundingClusters(int i){surroundingClusters_ = i;}

  void assignColor(int i){clusterColor_ = i;}


  void color(){

    bool isConnectedOne = false;
    bool isConnectedTwo = false;
    bool isConnectedThree = false;
    bool isConnectedFour = false;

    //
    for (int i = 0; i < getBoarderNumbers(); ++i)
      {
        if(surroundingClustersArray_[i].getColor() == 1)
          isConnectedOne = true;
        if(surroundingClustersArray_[i].getColor() == 2)
          isConnectedTwo = true;
        if(surroundingClustersArray_[i].getColor() == 3)
          isConnectedThree = true;
        if(surroundingClustersArray_[i].getColor() == 4)
          isConnectedFour = true;
      }
 if (isConnectedOne == false || isConnectedTwo == false || isConnectedThree == false || isConnectedFour == false)
      {
        assignColor(1);
      }

    if (isConnectedOne == true || isConnectedTwo == false || isConnectedThree == false || isConnectedFour == false)
      {
        assignColor(2);
      }

    if (isConnectedOne == true || isConnectedTwo == true || isConnectedThree == false || isConnectedFour == false)
      {
        assignColor(3);
      }

    if (isConnectedOne == true || isConnectedTwo == true || isConnectedThree == true || isConnectedFour == false)
      {
        assignColor(4);
      }


  }

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



  CountyCluster(const CountyCluster &rhs){
    std::cout << "copy begin" << std::endl;
    int clusterColor_ = rhs.clusterColor_;
    int counties_ = rhs.counties_;
    int clusterNumber_ = rhs.clusterNumber_;
    int surroundingClusters_ = rhs.surroundingClusters_;
    std::cout << "lil men done" << std::endl;

    memcpy(surroundingClustersArray_, rhs.surroundingClustersArray_, sizeof(int) * surroundingClusters_);


    /*
    for(int i = 0; i < 10; ++i){
      std::cout << "boarder array copy " << i << std::endl;
      surroundingClustersArray_[i] = rhs.surroundingClustersArray_[i];
      }*/
    for(int i = 0; i < 10; ++i){
      countyArray_ = rhs.countyArray_;
    }

    std::cout << "copy end" << std::endl;

 const CountyCluster& operator=(const CountyCluster& rhs){


    std::cout << "overloard begin" << std::endl;
    if(this == &rhs) return *this;
    int clusterColor_ = rhs.clusterColor_;
    int counties_ = rhs.counties_;
    int clusterNumber_ = rhs.clusterNumber_;
    int surroundingClusters_ = rhs.surroundingClusters_;
    std::cout << "non array done" << std::endl;
    delete[] surroundingClustersArray_;
    std::cout << "delete" << std::endl;
    surroundingClustersArray_ = new CountyCluster[10];
    std::cout << "allocate" << std::endl;
    memcpy(surroundingClustersArray_, rhs.surroundingClustersArray_, sizeof(int) * surroundingClusters_);

    /*
    for(int i = 0; i < 10; ++i){
      std::cout << "boarder array copy " << i << std::endl;
      surroundingClustersArray_[i] = rhs.surroundingClustersArray_[i];
      }*/
    delete[] countyArray_;
    countyArray_ = new CountyNode[10];
    for(int i = 0; i < 10; ++i){
      countyArray_ = rhs.countyArray_;
    }
    std::cout << "overload end" << std::endl;
    return *this;
  }



  void giveConnection(int index, CountyCluster cluster){
    std::cout << "give connection" << std::endl;
    surroundingClustersArray_[index] = cluster;
  }

  void printCluster(){
    std::cout << counties_ << std::endl;
    std::cout << surroundingClusters_ << std::endl;
}

 private:
  int clusterNumber_;
  //GraphClass countyGraph_; //To keep track of boarder connections(edge connections)
  int counties_;
  int clusterColor_;
  int surroundingClusters_;
  CountyCluster* surroundingClustersArray_ = new CountyCluster[10]; //Number of contraints = surrounding clusters
  CountyNode* countyArray_ = new CountyNode[10]; //Keep track of conties in the graph.
};





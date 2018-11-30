//Program to color graphs based on their edges/vertex relationship



#include <iostream>
#include <list>



class ColorGraph{
public:
  ColorGraph(int num){
    NodeNum = num;
    BoarderList = new std::list<int>[num];
  }
  ~ColorGraph(){
    delete [] BoarderList;
  }

  void Color(){

    int colors[NodeNum];
    colors[0]  = 0;

   for (int i = 1; i < NodeNum; ++i)
      colors[i] = -1;


    bool possible[NodeNum];
    for (int x = 0; x < NodeNum; ++x)
      possible[x] = false;


    for (int u = 1; u < NodeNum; ++u)
      {
        std::list<int>::iterator IT;
        for (IT = BoarderList[u].begin(); IT != BoarderList[u].end(); ++IT)
          if (colors[*IT] != -1)
            possible[colors[*IT]] = true;
        int chosenColor;
        for (chosenColor = 0; chosenColor < NodeNum; chosenColor++)
          if (possible[chosenColor] == false)
            break;
        colors[u] = chosenColor;
        for (IT = BoarderList[u].begin(); IT != BoarderList[u].end(); ++IT)
          if (colors[*IT] != -1) {
            possible[colors[*IT]] = false;
          }
      }
    for (int j = 0; j < NodeNum; j++)
      std::cout << "Node number " << j << " has the color of: " << colors[j] << std::endl;
  }

 void giveConnection(int i, int j){
   BoarderList[j].push_back(i);
   BoarderList[i].push_back(j);
 }
private:

  int NodeNum;
  std::list<int> *BoarderList;
};


int main(){

  ColorGraph OhioGraph(12);

/* connection for ohio graph */


  std::cout << "How many nodes in your map to color? : ";
  int nodes;
  std::cin >> nodes;

  ColorGraph graph(nodes);

  std::cout << "Please enter your connections." << std::endl;
  int connector;
  int connectie;
  std::string toEnd;
  while(toEnd != "yes"){
    std::cout << "Node: ";
    std::cin >> connector;
    std::cout << "is connected to Node: ";
    std::cin >> connectie;

    graph.giveConnection(connector, connectie);

    std::cout << "Are you finished with your connections? (enter 'yes' to finish)" << std::endl;
    std::cin >> toEnd;
  }
  graph.Color();
}


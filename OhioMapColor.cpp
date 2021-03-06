//Program to color graphs based on their edges/vertex relationship
#include <iostream>
#include <list>
#include <string>

using namespace std;



class ColorGraph{
public:
  ColorGraph(int num)
  {
  	NodeNum = num;
    BoarderList = new std::list<int>[num];
  }
  ~ColorGraph()
  {
    delete [] BoarderList;
  }

  void Color()
  {
    int colors[NodeNum];
    string actualColors[] = {"red", "green", "blue", "yellow"};
    colors[0]  = 0;

    for (int i = 1; i < NodeNum; ++i)
    	colors[i] = -1;


    bool possible[NodeNum];
    for (int x = 0; x < NodeNum; ++x)
    	possible[x] = false;


    for (int u = 1; u < NodeNum; ++u)
    {
    	list<int>::iterator IT;
        for (IT = BoarderList[u].begin(); IT != BoarderList[u].end(); ++IT)
        	if (colors[*IT] != -1)
            possible[colors[*IT]] = true;
        int chosenColor;
        for (chosenColor = 0; chosenColor < NodeNum; chosenColor++)
        	if (possible[chosenColor] == false)
        		break;
        colors[u] = chosenColor;
        for (IT = BoarderList[u].begin(); IT != BoarderList[u].end(); ++IT)
        	if (colors[*IT] != -1)
			{
        		possible[colors[*IT]] = false;
        	}
    }
    
	for (int j = 0; j < NodeNum; j++)
	{
    	cout << "Node number " << j << " has the color of: ";
    	switch(colors[j])
    	{
    		case 0 : cout << actualColors[0];
    			break;
    		case 1 : cout << actualColors[1];
    			break;
    		case 2 : cout << actualColors[2];
    			break;
    		case 3 : cout << actualColors[3];
    			break;
    		default: cout << "color not assigned.";
    			break;
		}
		cout << endl;
	}
}

void giveConnection(int i, int j)
{
	BoarderList[j].push_back(i);
    BoarderList[i].push_back(j);
}
private:

	int NodeNum;
  	list<int> *BoarderList;
};


int main(){


  ColorGraph OhioGraph(12);

  /* connections for ohio grpah */
  

  cout << "How many nodes in your map to color? : ";
  int nodes;
  cin >> nodes;

  ColorGraph graph(nodes);

  cout << "Please enter your connections." << std::endl;
  int connector;
  int connectie;
  string toEnd;
  while(toEnd != "yes"){
    cout << "Node: ";
    cin >> connector;
    cout << "is connected to Node: ";
    cin >> connectie;

    graph.giveConnection(connector, connectie);

    cout << "Are you finished with your connections? (enter 'yes' to finish)" << std::endl;
    cin >> toEnd;
  }
  graph.Color();
}


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfNodes = 12;
	int nodes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int edgeMatrix[numberOfNodes][numberOfNodes] = {};
	int nodeConstraints[numberOfNodes] = {};
	int nodeWithMostConstraints = 0;
	int nodeColors[numberOfNodes] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int maxColors = 4;
	int nodeLength = sizeof(nodes)/sizeof(nodes[0]);
	int mostConstraints = 0;
	
	string edge;
	
	cout << "Node Length: " << nodeLength << endl << endl;

	for (int i = 0; i < nodeLength; i++)
	{
			for (int j = 0; j < nodeLength; j++)
			{
				if (i != j)
				{
					cout << "Does " << nodes[i] << " touch " << nodes[j] << "?" << endl;
					cout << "Enter \"Yes\" or \"No\":" << endl;
					cin >> edge;
					cout << edge << endl << endl;
					//and check to see if edge is an acceptable answer
					if (edge == "Yes" || edge == "yes")
					{
						edgeMatrix[i][j] = 1;
					}
					else
					edgeMatrix[i][j] = 0;
					
					nodeConstraints[i] = nodeConstraints[i]+ edgeMatrix[i][j];
				}
				else
				edgeMatrix[i][j] = 0;
				
			}
		cout << "Total Constraints for node " << i+1 <<": " << nodeConstraints[i] << "??" << nodeConstraints[nodeWithMostConstraints] << endl;
		if (mostConstraints < nodeConstraints[i])
		{
		    cout << "Testing: " << nodeConstraints[nodeWithMostConstraints] << " < " << nodeConstraints[i] << endl;
		    
			nodeWithMostConstraints = nodes[i];
			mostConstraints = nodeConstraints[i];
		}
		cout << "Node with Most Constraints: " << nodeWithMostConstraints << endl;
		cout << "Most Constraints: " << mostConstraints << endl << endl;
	}
    
    for (int i = 0; i < nodeLength; i++)
    {
        nodeColors[nodeWithMostConstraints] = rand() % maxColors;
        
        for (int j = 0; j < nodeLength; j++)
        {
           if (edgeMatrix[i][j] == 1)
           {
               cout << nodes[j] << " ";
               if (nodeColors[nodeWithMostConstraints] == nodeColors[j])
               {
                   nodeColors[nodeWithMostConstraints] = (nodeColors[nodeWithMostConstraints]+1) % maxColors;
               }
               cout << " Color: " <<nodeColors[nodeWithMostConstraints] << " ";
               nodeConstraints[nodeWithMostConstraints] = 0;
			   nodeWithMostConstraints = 0;
               
           }
        }
        cout << endl;
    }
    
    for (int i = 0; i < nodeLength; i++)
	{
		cout << endl << "Node " << nodes[i] << " has " << nodeColors[i] << " color.";
	}	
		
	return 0;
    
    
    /*
    	
	for (int x = 0; x < nodeLength; x++)
	{
	    cout << "hello";
		for (int i = 0; i < nodeLength; i++)
		{
			nodeColors[nodeWithMostConstraints] = rand() % maxColors;
			for(int j = 0; j < nodeLength; i++)
			{
				if(edgeMatrix[i][j] == 1)
				{
					while (nodeColors[nodeWithMostConstraints] == nodeColors[j])
					{
						nodeColors[nodeWithMostConstraints] = (nodeColors[nodeWithMostConstraints] + 1) % maxColors;
					}
				}
			}
			nodeConstraints[nodeWithMostConstraints] = 0;
			nodeWithMostConstraints = 0;
		}
	
		for (int i = 0; i < nodeLength; i++)
		{
			if (nodeWithMostConstraints < nodeConstraints[i])
			{
				nodeWithMostConstraints = nodeConstraints[i];
			}
		}
	}

	for (int i = 0; i < nodeLength; i++)
	{
		cout << nodes[i] << " has " << nodeColors[i] << " color.";
	}	
		
	return 0;
*/
}

/*
edgeMatrix:
//What it should be      #ofConstraints     node#       coloringOrder
0 1 1 0 0 1 1 0 0 0 0 0     = 4               1         
1 0 1 0 0 0 0 0 0 0 0 0     = 2               2
1 1 0 1 1 1 0 0 0 0 1 1     = 7               3             1
0 0 1 0 0 0 0 0 0 0 1 1     = 3               4
0 0 1 0 0 1 0 0 0 1 1 0     = 4               5
1 0 1 0 1 0 1 1 1 1 0 0     = 7               6             2
1 0 0 0 0 1 0 1 0 0 0 0     = 3               7
0 0 0 0 1 1 0 1 0 0 0 0     = 3               8
0 0 0 0 0 1 0 1 0 1 0 0     = 3               9
0 0 0 0 1 1 0 0 1 0 1 0     = 4               10
0 0 0 1 1 0 0 0 0 1 0 0     = 3               11
0 0 1 1 0 0 0 0 0 0 0 0     = 2               12
*/
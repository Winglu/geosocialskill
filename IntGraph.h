//
// Created by Lu Chen on 2019-05-17.
//

#ifndef GEOSOCIALSKILL_INTGRAPH_H
#define GEOSOCIALSKILL_INTGRAPH_H

#include <vector>
#include <list>
using namespace std;
class IntGraph {
public:
    vector<list<int>> *adjList;
    void addEdge(int,int);
    void printGraph();
    IntGraph(int);
    ~IntGraph();
};


#endif //GEOSOCIALSKILL_INTGRAPH_H

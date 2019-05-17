#include <iostream>
#include "IntGraph.h"
#include "GraphAlgorithm.h"
using namespace std;
using namespace GraphAlgorithm;
int main() {

    IntGraph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(0,3);
    g.addEdge(0,4);

    g.printGraph();
    coreDecomposition(g);


}



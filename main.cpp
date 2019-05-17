#include <iostream>
#include "IntGraph.h"
using namespace std;
int main() {

    IntGraph g(3);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);

    g.printGraph();

}



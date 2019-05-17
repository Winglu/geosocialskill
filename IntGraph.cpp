//
// Created by Lu Chen on 2019-05-17.
//

#include "IntGraph.h"
#include <iostream>



IntGraph::IntGraph(int n) {
   adjList = new vector<list<int>> (n);
   /*
   for(auto it = adjList->begin(); it!=adjList->end(); it++){
        list<int> l(0);

   }
*/
}


void IntGraph::addEdge(int s, int t) {
    adjList->at(s).emplace_back(t);
    adjList->at(t).emplace_back(s);
}


void IntGraph::printGraph(){
    for(int i=0; i<adjList->size(); i++){
        list<int> l = (*adjList)[i];
        std::cout<<i<<":";
        for(std::list<int>::iterator it=l.begin();it!=l.end();++it){
            cout<<*it<<",";
        }
        std::cout<<endl;
    }

}

IntGraph::~IntGraph() {

    delete adjList;
}




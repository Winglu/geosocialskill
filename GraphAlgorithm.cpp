//
// Created by Lu Chen on 2019-05-17.
//

#include "GraphAlgorithm.h"

using namespace std;

namespace GraphAlgorithm {
    void coreDecomposition(IntGraph &g) {

        //get the value of maximum degree.
        int degMax = 0;

        for (auto & it : *g.adjList) {
            //it is the address of the stored data, so *it operation shall get the data
            if (it.size() > degMax) {
                degMax = it.size();
            }
        }
        cout<<degMax<<endl;
        //prepare bucket sort
        //we need degree 0 since during the core decomposition
        //collect number of vertices for each degree
        int *bucket  = new int[degMax+1]();  //dynamic array, need to be deleted.
        for (auto & it : *g.adjList) {
            bucket[it.size()]++;
        }

        //cout<<(sizeof(bucket)/sizeof(*bucket));
        for(int i=1;i<degMax+1;i++){
            bucket[i] = bucket[i]+bucket[i-1];
        }

        //create a new array for store sorted

        delete[] bucket;

    }
}
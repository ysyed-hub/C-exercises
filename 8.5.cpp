//
//  main.cpp
//  6.10
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

void swap(vector<int> *pv, int a, int b);
void reverse(vector<int> *pv);

int main(int argc, const char * argv[]) {
    
    vector<int> v = {1, 3, 5, 7, 9};
    vector<int> *pv = &v;
    reverse(pv);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    
    return 0;
}

void reverse(vector<int> *pv) {
    int a = 0;
    int b = (*pv).size() - 1;
    while (a <= b) {
        swap(pv, a, b);
        a++;
        b--;
    }
}

void swap(vector<int> *pv, int a, int b) {
    int temp;
    temp = (*pv)[a];
    (*pv)[a] = (*pv)[b];
    (*pv)[b] = temp;
}

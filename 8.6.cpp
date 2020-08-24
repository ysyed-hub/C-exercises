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

void swap(vector<string> *pv, int a, int b);
void reverse(vector<string> *pv);

int main(int argc, const char * argv[]) {
    
    vector<string> v = {"arthur", "bobby", "cat", "dog", "elise"};
    vector<string> *pv = &v;
    reverse(pv);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    
    return 0;
}

void reverse(vector<string> *pv) {
    int a = 0;
    int b = (*pv).size() - 1;
    while (a <= b) {
        swap(pv, a, b);
        a++;
        b--;
    }
}

void swap(vector<string> *pv, int a, int b) {
    string temp;
    temp = (*pv)[a];
    (*pv)[a] = (*pv)[b];
    (*pv)[b] = temp;
}

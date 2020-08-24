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

void print(vector<int> v);
void fib(int x, int y, vector<int> *pv, int n);

int main(int argc, const char * argv[]) {
    
    vector<int> v;
    vector<int> *pv = &v;
    fib(1, 1, pv, 20);
    print(v);
    
    return 0;
}


void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << "v[" << i << "] = " << v[i] << endl;
}

void fib(int x, int y, vector<int> *pv, int n) {
    pv->push_back(x);
    if (n == 0) {
        print((*pv));
        return;
    }
    pv->push_back(y);
    if (n == 1) {
        print((*pv));
        return;
    }
    
    for(int i = 2; i < n; i++) {
        if (i % 2 == 0) {
            x = x + y;
            pv->push_back(x);
        }
        if (i % 2 == 1) {
            y = x + y;
            pv->push_back(y);
        }
    }
}

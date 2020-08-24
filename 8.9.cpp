//
//  main.cpp
//  8.9
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

double index(vector<double> p, vector<double> w);

int main(int argc, const char * argv[]) {
    
    vector<double> price = {3.4, 5.4, 30.23, 58.38422, 4.78438};
    vector<double> weight = {53.3, 454.2, 43.2, 4, 32.4};
    cout << "The index is: " << index(price, weight) << endl;
    
    return 0;
}

double index(vector<double> p, vector<double> w) {
    if (p.size() != w.size())
        return -1;
    double val = 0;
    for (int i = 0; i < p.size(); i++)
        val += p[i] * w[i];
    
    return val;
}

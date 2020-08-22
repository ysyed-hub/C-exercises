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

int fact(int n);

int main(int argc, const char * argv[]) {
    
    int x, y;
    char c;
    cout << "Input two integers, x and y, with x >= y: ";
    cin >> x >> y;
    if (x < y || x < 0 || y < 0) {
        cout << "Improper input\n";
        return 0;
    }
    cout << "Input p if you want permutations (xPy) and c if you want combinations (xCy): ";
    cin >> c;
    if (c == 'p')
        cout << fact(x) / fact(y) << endl;
    if (c == 'c')
        cout << fact(x) / (fact(y) * fact(x-y)) << endl;
    
    
    return 0;
}

int fact(int n) {
    int prod = 1;
    while (n > 1) {
        prod *= n;
        n--;
    }
    return prod;
}

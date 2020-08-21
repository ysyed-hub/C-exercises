//
//  main.cpp
//  5.11
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;



int main(int argc, const char * argv[]) {
    
    vector<int> fib = {1, 1, 2};
    
    int i = 3;
    while (fib[(i-1)%3] + fib[(i-2)%3] > 0) {
        fib[i%3] = fib[(i-1)%3] + fib[(i-2)%3];
        i++;
    }
    cout << "The largest fibonacci number that can be stored is: " << fib[(i-1)%3] << endl;
    
    return 0;
}


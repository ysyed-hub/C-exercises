//
//  main.cpp
//  4.10
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int isprime(int n);

int main(int argc, const char * argv[]) {
    
    vector<int> primes = {2, 3};
    int n = 4;
    while (primes.size() <= 100) {
        if (isprime(n) == 1)
            primes.push_back(n);
        n++;
    }
    
    for (int i = 0; i < primes.size(); i++)
        cout << primes[i] << " ";
    
    return 0;
}

int isprime(int n) {
    double x = sqrt(n);
    int y = x;
    int state = 1;
    for (int i = 2; i <= y; i++)
        if (n % i == 0)
            state = 0;
    
    return state;
}

//
//  main.cpp
//  4.7
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;




int main(int argc, const char * argv[]) {
    
    int n1 = 1000;
    int n2 = 1000000;
    int n3 = 1000000000;
    int sum = 0;
    int rice = 1;
    int i = 0;
    while (sum < n1) {
        sum += rice;
        rice *= 2;
        i++;
    }
    cout << "Need " << i << " squares to reach " << n1 << " grains of rice" << endl;
    
    i = 0;
    rice = 1;
    while (sum < n2) {
        sum += rice;
        rice *= 2;
        i++;
    }
    cout << "Need " << i << " squares to reach " << n2 << " grains of rice" << endl;
    
    i = 0;
    rice = 1;
    while (sum < n3) {
        sum += rice;
        rice *= 2;
        i++;
    }
    cout << "Need " << i << " squares to reach " << n3 << " grains of rice" << endl;
    
    
    
    return 0;
}


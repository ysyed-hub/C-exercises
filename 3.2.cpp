//
//  main.cpp
//  3.2
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;



int main(int argc, const char * argv[]) {
    
    int x;
    cout << "Enter your choice of number between 1 and 100: ";
    cin >> x;
    int state = 0;
    int min = 1;
    int max = 100;
    int y = (max + min) / 2;
    int z = y/2;
    
    while (state == 0) {
        if (y == x) {
            state = 1;
            cout << "The number is: " << y << endl;
        }
        else if (y > x) {
            cout << y;
            y -= z;
            cout << " No" << endl;
        }
        else {
            cout << y;
            y += z;
            cout << " Yes" << endl;
        }
        
        if (z % 2 == 1)
            z = (z + 1) / 2;
        else {
            z /= 2;
        }
        
    }
    
    return 0;
}

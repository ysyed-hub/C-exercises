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
    
    
    int sum = 0;
    int rice = 1;
    int i = 0;
    while (sum >= 0) {
        sum += rice;
        rice *= 2;
        i++;
    }
    cout << "The most number of squares we can reach is " << i << endl; // i = 32
    
    
    
    return 0;
}


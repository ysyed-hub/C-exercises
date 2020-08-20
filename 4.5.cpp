//
//  main.cpp
//  4.5
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    
    double x, y;
    string z;
    cout << "Enter two operands and an operator: ";
    cin >> x >> y >> z;
    
    if (z == "+") {
        cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
    }
    else if (z == "-") {
        cout << "The difference between " << x << " and " << y << " is " << x - y << endl;
    }
    else if (z == "*") {
        cout << "The product of " << x << " and " << y << " is " << x * y << endl;
    }
    else if (z == "/") {
        cout << "The quotient of " << x << " and " << y << " is " << x / y << endl;
    }
    else {
        cout << "Invalid operator" << endl;
    }
    return 0;
}

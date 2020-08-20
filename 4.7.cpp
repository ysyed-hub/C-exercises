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


int compare(string x, vector<string> v);
int convertoint(string x, vector<string> v);

int main(int argc, const char * argv[]) {
    
    
    vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string x, y, z;
    cout << "Enter expression (two single-digit operands) and an operator: ";
    while (cin >> x && cin >> y && cin >> z) {
        int a = convertoint(x, digits);
        int b = convertoint(y, digits);
        double c = 1.0 * a/b;
        if (a > 9 || b > 9 || (z != "+" && z != "*" && z != "/" && z != "-")) {
            cout << "Improper input" << endl;
        }
        else {
            if (z == "+")
                cout << "Sum is: " << a + b << endl;
            if (z == "-")
                cout << "Difference is: " << a - b << endl;
            if (z == "*")
                cout << "Product is: " << a * b << endl;
            if (z == "/")
                cout << "Quotient is: " << c << endl;
        }
       
        cout << "Enter expression (two single-digit operands) and an operator: ";
    }
    
    return 0;
}

int compare(string x, vector<string> v) {
    int a = -1;
    for (int i = 0; i < 10; i++) {
        if (x == v[i])
            a = i;
    }
    return a;
}

int convertoint(string x, vector<string> v) {
    int a = compare(x, v);
    if (x == "0") {
        a = 0;
    }
    else if (x == "1") {
        a = 1;
    }
    else if (x == "2") {
        a = 2;
    }
    else if (x == "3") {
        a = 3;
    }
    else if (x == "4") {
        a = 4;
    }
    else if (x == "5") {
        a = 5;
    }
    else if (x == "6") {
        a = 6;;
    }
    else if (x == "7") {
        a = 7;
    }
    else if (x == "8") {
        a = 8;
    }
    else if (x == "9") {
        a = 9;
    }
    if (a == -1)
        a = 10;
    return a;
}

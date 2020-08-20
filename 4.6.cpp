//
//  main.cpp
//  4.6
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int compare(string x, vector<string> v);

int main(int argc, const char * argv[]) {
    
    
    vector<string> digits = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string x;
    cout << "Enter a digit in numerical or spelled out form: ";
    while (cin >> x) {
        
        int a = compare(x, digits);
        if (a >= 0 && a <= 9) {
            cout << a << endl;
        }
        else if (x == "0") {
            cout << "zero" << endl;
        }
        else if (x == "1") {
            cout << "one" << endl;
        }
        else if (x == "2") {
            cout << "two" << endl;
        }
        else if (x == "3") {
            cout << "three" << endl;
        }
        else if (x == "4") {
            cout << "four" << endl;
        }
        else if (x == "5") {
            cout << "five" << endl;
        }
        else if (x == "6") {
            cout << "six" << endl;
        }
        else if (x == "7") {
            cout << "seven" << endl;
        }
        else if (x == "8") {
            cout << "eight" << endl;
        }
        else if (x == "9") {
            cout << "nine" << endl;
        }
        else {
            cout << "Not a digit" << endl;
        }
        cout << "Enter a digit in numerical or spelled out form: ";

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

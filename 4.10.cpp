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
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    vector<string> move = {"rock", "paper", "scissors"};
    vector<int> movenum = {0, 2, 1, 2, 0, 1, 0, 2, 1, 2, 0};
    int i = 0;
    int x;
    cout << "Enter 0 to play rock, 1 to play paper, and 2 to play scissors: ";
    while(cin >> x) {
        switch (x) {
                
            case 0: // user plays rock
                switch(movenum[i]) {
                    case 0:
                        cout << "Both played rock" << endl;
                        break;
                    case 1:
                        cout << "User loses to paper" << endl;
                        break;
                    case 2:
                        cout << "User wins to scissors" << endl;
                        break;
                }
                i++;
                break;
                
            case 1: // user plays paper
                switch(movenum[i]) {
                    case 0:
                        cout << "User wins to rock" << endl;
                        break;
                    case 1:
                        cout << "Both played paper" << endl;
                        break;
                    case 2:
                        cout << "User loses to scissors" << endl;
                        break;
                }
                i++;
                break;
                
            case 2: // user plays scissors
                switch(movenum[i]) {
                    case 0:
                        cout << "User loses to rock" << endl;
                        break;
                    case 1:
                        cout << "User wins to paper" << endl;
                        break;
                    case 2:
                        cout << "Both played scissors" << endl;
                        break;
                    
                }
                i++;
                break;
                
            default:
                cout << "Invalid entry" << endl;
                break;
        }
        if (i == movenum.size()) {
            cout << "Limit reached" << endl;
            break;
        }
        else {
            cout << "Enter 0 to play rock, 1 to play paper, and 2 to play scissors: ";
        }
    }
    
    return 0;
}


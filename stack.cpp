//
//  main.cpp
//  9.2
//
//  Created by Yunus Syed on 8/18/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;



/* class Node {
    int info;
    
public:
    int Node_Info() {return info;}
    class Node *down;
    Node(int x) {
        info = x;
        down = NULL;
    }
}; */



class Stack {
    
    class Node {
        int info;
        
    public:
        int Node_Info() {return info;}
        class Node *down;
        Node(int x) {
            info = x;
            down = NULL;
        }
    };
    typedef class Node *nodeptr;
    nodeptr top;
    
public:
    int pop() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int y = top -> Node_Info();
        nodeptr p = top;
        top = top -> down;
        free(p);
        return y;
    }
    
    void push(int y) {
        nodeptr p = new Node(y);
        p -> down = top;
        top = p;
    }
    Stack() {
        top = NULL;
    }
};

typedef class stack *stackptr;

int main() {
    Stack s;
    s.push(1);
    s.push(5);
    int x = s.pop();
    int y = s.pop();
    cout << x << " " << y << endl;
    return 0;
}



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



class node {
public:
    int info;
    class node *down;
    node() {
        info = 0;
        down = NULL;
    }
};

typedef class node *nodeptr;
nodeptr getnode(void);

class stack {
public:
    nodeptr top;
    int pop(stack *s);
    nodeptr push(stack *s, int y);
    stack() {
        top = NULL;
    }
};

typedef class stack *stackptr;

int stack::pop(stackptr s) {
    if (s -> top == NULL) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int y = (s -> top) -> info;
    nodeptr p = s -> top;
    s -> top = s -> top -> down;
    free(p);
    return y;
}

nodeptr stack::push(stackptr s, int y) {
    nodeptr p = getnode();
    p -> info = y;
    p -> down = s -> top;
    s -> top = p;
    return p;
}


int main() {
    stack s;
    stackptr ps = &s;
    ps -> push(ps, 1);
    ps -> push(ps, 5);
    int x = ps -> pop(ps);
    int y = ps -> pop(ps);
    cout << x << " " << y << endl;
    return 0;
}

nodeptr getnode(void) {
    return((nodeptr) malloc(sizeof(struct node)));
}

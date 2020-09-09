//
//  main.cpp
//  word_count
//
//  Created by Yunus Syed on 9/8/20.
//  Copyright © 2020 Yunus Syed. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void PrintWordsAndCount(ifstream &x);

int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        cout << "error\n";
        return 0;
    }
    
    ifstream x;
    x.open(argv[1]);
    if (!x) {
        cout << "Error opening file." << endl;
        return 0;
    }

    PrintWordsAndCount(x);

    return 0;
}


void PrintWordsAndCount(ifstream &x) {
    struct FileWords {
        string word;
        int word_count;
    };
    vector<FileWords> words_and_count;
    
    
    while (!x.eof()) {
        string word_read;
        x >> word_read;
        bool word_duplicate = false;
        for (int i = 0; i < words_and_count.size(); i++) {
            if (word_read == words_and_count[i].word) {
                words_and_count[i].word_count++;
                word_duplicate = true;
                break;
            }
        }
        
        if (word_duplicate == false) {
            FileWords new_word = {word_read, 1};
            words_and_count.push_back(new_word);
        }
    }
    
    for (int i = 0; i < words_and_count.size(); i++) {
        cout << words_and_count[i].word + " " << words_and_count[i].word_count << endl;
    }
    
}

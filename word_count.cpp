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

void PrintWordsAndCount(ifstream &file);

int main(int argc, const char * argv[]) {
    
    if (argc < 2) {
        cout << "error\n";
        return 0;
    }
    
    ifstream file(argv[1]);
    if (!file) {
        cout << "Error opening file." << endl;
        return 0;
    }

    PrintWordsAndCount(file);

    return 0;
}


void PrintWordsAndCount(ifstream &file) {
    struct FileWords {
        string word;
        int word_count;
    };
    vector<FileWords> words_and_count;
    
    string word_read;
    while (file >> word_read) {
        bool word_duplicate = false;
        for (int i = 0; i < words_and_count.size(); i++) {
            if (word_read == words_and_count[i].word) {
                words_and_count[i].word_count++;
                word_duplicate = true;
                break;
            }
        }
        
        if (!word_duplicate) {
            FileWords new_word = {word_read, 1};
            words_and_count.push_back(new_word);
        }
    }
    
    for (int i = 0; i < words_and_count.size(); i++) {
        cout << words_and_count[i].word + " " << words_and_count[i].word_count << endl;
    }
    
}

#include "WordCounter.hpp"
#include "Word.hpp"

#include <map>
#include <vector>

#include <iostream>

using namespace std;

WordCounter :: WordCounter (int num_words) {
	words = new Word[num_words];
}

void WordCounter :: addWord (string s) {
    for (int i = 0 ; i < size; i++) {
        if (words[i].word == s) {
            words[i].incrementFreq();
            return;
        }
    }
        
        words[size].word = s;
        words[size].incrementFreq();
        this -> size = this -> size + 1;
}
    
void WordCounter :: print () {
    string auxWord;
    int auxCount;
   
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size; j++) {
            if (words[i].word < words[j].word) {
                auxWord = words[i].word;
                auxCount = words[i].count;
                words[i].word = words[j].word;
                words[i].count = words[j].count;
                words[j].word = auxWord;
                words[j].count = auxCount;
            }
        }
    }
    
    for (int i = 1; i <= size; i++) {
        cout << words[i].word << ' ' << words[i].count << endl;
    }
}
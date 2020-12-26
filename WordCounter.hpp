#ifndef WORDCOUNT
#define WORDCOUNT

#include "Word.hpp"

#include <map>
#include <vector>
#include <string>

#include <iostream>

using namespace std;

class WordCounter {
	public:
		Word *words;
		int size = 0;
	
		WordCounter(int num_words);
		~WordCounter();
		void addWord(string s);
		void print();
};

#endif
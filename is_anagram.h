//
// Created by maxch on 1/15/2023.
//

#include <iostream>
#include <map>

using namespace std;

#ifndef TESTFILE_IS_ANAGRAM_H
#define TESTFILE_IS_ANAGRAM_H

void sep(string s, std::map<string, int> &c);

bool is_anagram(string string1, string string2) {
    // break string1 into a map of letters where the key is the letter and the value is the number of times the letter appears in string1
    std::map<string, int> check1, check2;
    sep(string1, check1);
    sep(string2, check2);

    if (check1 == check2) return true;
    return false;
}

// helper function to break the string into a map
void sep(string s, std::map<string, int> &c) {
    // iterate over each string letter
    for (int i = 0; i < s.length(); ++i) {
        // see if letter at spot is already in map
        const char item[] = {s[i], '\0'};
        std::map<string, int>::iterator it = c.find(item);
        // if in map
        if (it != c.end()) it->second++;
        // if not in map
        else {
            pair<string,int> temp;
            temp = make_pair(s[i],1);
            c.insert(temp);
        }
    }
}

#endif //TESTFILE_IS_ANAGRAM_H

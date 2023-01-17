//
// Created by maxch on 1/15/2023.
//

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#ifndef SOLUTION_H
#define SOLUTION_H

long longest_substring(string s) {
    string max = "";
    for (int i = 0; i < s.length(); ++i) {
        string test = "";
        test = s[i];
        for (int j = i+1; j < s.length(); ++j) {
            cout << s[j] << endl;
            // did not find s[i] inside
            const char item[] = {s[j], '\0'};
            cout << "test: " << test << endl;
            if (test.find(item) == std::string::npos) test += s[j];
                // did find s[i] inside
            else {
                // compare with max
                cout << "here" << endl;
                if (max.length() < test.length()) max = test;
                break;
            }
        }
    }
    return max.length();
}

#endif //SOLUTION_H
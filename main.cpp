#include <cctype>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

long solution(string s);
void sep(string s, std::map<string, int> &c);

int main() {
    std::cout << solution("nndNfdfdf") << std::endl;
    return 0;
}

bool solution(string string1, string string2) {
    // Type your solution here

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

long solution(string s) {
    // Type your solution here
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

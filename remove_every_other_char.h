//
// Created by maxch on 1/17/2023.
//

#include <iostream>
#include <string.h>

using namespace std;

#ifndef REMOVE_EVERY_OTHER_CHAR_H
#define REMOVE_EVERY_OTHER_CHAR_H

char* strdup_every_other_char(const char* s) {
    char temp[100];
    int j = 0;
    int length = sizeof(s)/sizeof(char);
    for (int i = 0; i < length; ++i) {
        // if number is even
        if (i % 2 == 0) {
            temp[j] = s[i];
            ++j;
        }
        // do nothing if odd
    }
    return temp;
}

#endif //REMOVE_EVERY_OTHER_CHAR_H

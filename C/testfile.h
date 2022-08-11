//
// Created by 김주형 on 2022/08/10.
//

#ifndef C_TESTFILE_H
#define C_TESTFILE_H


class testfile {
#include <iostream>
#include <vector>
#include <string>

    using namespace std;

    int main()
    {
        vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

        for (const string& word : msg)
        {
            cout << word << " ";
        }
        cout << endl;
    }
};


#endif //C_TESTFILE_H

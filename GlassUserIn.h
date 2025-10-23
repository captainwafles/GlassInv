#ifndef GLASSUSERIN_H
#define GLASSUSERIN_H

#include <string>
#include <iostream>
using namespace std;

class UserIn
{
    private:
        string userInStr;
	    double userInNum;

    public:
        void setUserNum(double num) { this->userInNum = num; }
        void setUserStr(string str) { this->userInStr = str; }
        string getUserStr() { return userInStr; }
        double getUserNum() { return userInNum; }

        void askUserPass(double num)
        {
            cout << "Please enter your four digit password" << endl;


            
            return;
        }
};

//Ask user for password //Ask user int
//Ask user insert or delete
//Ask user string






#endif
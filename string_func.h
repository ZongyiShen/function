#ifndef FUNC
#define FUNC
#include <cmath>
#include <string>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
using namespace std;
int getSpacenum(string s)
{
    string dir;
    int i = 0;
    stringstream ss(s);
    while (getline(ss, dir, ' '))
    {
        i++;
    }
    return i;
}
void split(string s, string result[])
{
    string dir;
    int i = 0;
    stringstream ss(s);
    while (getline(ss, dir, ' '))
    {
        result[i] = dir;
        i++;
    }
    ss.str("");
    ss.clear();
}
string *split(string s)
{
    string temp = "";
    int spacenum = getspace(s);
    //int spacelocate[spacenum];
    string *result;
    result = new string[spacenum + 1];
    int j = 0;
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            result[j] = temp;
            temp = "";
            k = 0;
            j++;
        }
        else
        {
            temp = temp + s[i];
            k++;
        }
    }
    result[j] = temp;
    temp = "";
    k = 0;
    j++;
    return result;
}
vector<string> split(string s)
{
    stringstream ss(s);
    string dir;
    vector<string> r;
    while (getline(ss, dir, ' '))
    {
        r.push_back(dir);
    }
    return r;
}
#endif
/*use split
#include "./func.h"
int main()
{
    string s;
    getline(cin, s);
    while (s.length())
    {
        int len = getSpacenum(s);
        string ls[len];
        split(s, ls);
        for (int i = 0; i < len; i++)
        {
            puts(ls[i].c_str());
        }
        getline(cin, s);
    }
    return 0;
}
*/
/*
use split v2
int main()
{
    string input;
    getline(cin, input);
    //cout << getSpace(input);
    vector<string> s;
    s = split(input);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}
*/

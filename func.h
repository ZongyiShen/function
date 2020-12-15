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

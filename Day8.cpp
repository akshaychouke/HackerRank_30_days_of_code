#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    map<string, string> mpp;

    for (int i = 0; i < n; i++)
    {
        string name;
        string phone;
        cin >> name;
        cin >> phone;
        mpp[name] = phone;
    }

    map<string, string>::iterator it;

    string query;
    while (cin >> query)
    {
        it = mpp.find(query);

        if (it != mpp.end())
        { // key is found in phoneBook
            cout << it->first << "=" << it->second << '\n';
        }
        else
        { // the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }
    return 0;
}

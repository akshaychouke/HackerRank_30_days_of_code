#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin >> t;
    while (t--)
    {
        string str, s1 = "", s2 = "";
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (i % 2 == 0)
            {
                s1.push_back(str[i]);
            }
            else
            {
                s2.push_back(str[i]);
            }
        }

        cout << s1 << " " << s2 << endl;
    }
    return 0;
}

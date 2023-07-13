#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    string str;

    // Read and save an integer, double, and String to your variables
    cin >> a;
    cin >> b;
    cin.get();
    getline(cin, str);

    // Print the sum of both integer variables on a new line.
    cout << a + i << endl;

    // Print the sum of the double variables on a new line.
    cout << std::fixed << std::setprecision(1) << d + b << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << str << endl;

    return 0;
}
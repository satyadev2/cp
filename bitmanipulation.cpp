#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    cout << (n << 1) << " " << (n << 2) << endl; // left shift  [x<<y => x*(2^y)]
    cout << (n >> 1) << " " << (n >> 2) << endl; // right shift [x<<y =>x/(2^y)]

    // checking if any number say 'n' is power of 2 or not
    if (n && (!(n & (n - 1))))
    {
        cout << "power of 2" << endl;
    }
    else
    {
        cout << "not a power of 2" << endl;
    }

    // creating a number with kth set bit
    //  4--100 (3rd set bit)
    cout << (1 << (3 - 1)) << endl;

    // checking if kth bit is 1 or not(here 4th bit of 8 in binry)
    if (n & (1 << (4 - 1)))
    {
        cout << "nth bit is 1" << endl;
    }
    else
    {
        cout << "nth bit is not 1" << endl;
    }

    // how to set kth  to '1'
    int k = (n | (1 << (3 - 1)));
    cout << "number 8 in decimal after converting its 3rd set bit to '1':";
    cout << k << endl;

    // how to set kth bit to '0'
    int x = (n & ~(1 << (3 - 1)));
    cout << "number 8 in decimal after converting its 4th set bit to '0':";
    cout << x << endl;

    // how to toggle kth  bit
    int y = (n ^ (1 << (4 - 1)));
    cout << "number 8 in decimal after toggling 4th bit :";
    cout << y << endl;

    char c = 'c';
    char d = 'D';
    cout << (char)(c & ' ') << endl;
    cout << (char)(d | ' ') << endl;
}

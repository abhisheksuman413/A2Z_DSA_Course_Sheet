
#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
     int a = n*2-2;
    for (int i = 0; i < n; i++)
    {
        int b = i + 1;
        
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1<<" ";
        }
        for (int p = 0; p < a; p++)
        {
            cout << "  ";
        }
        for (int q = 0; q < i + 1; q++)
        {

            cout << b<<" ";
            b--;
        }
        a=a-2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}

// Question_09
// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12

#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    
    for (int i = 0; i < n; i++)
    {
        char a = 64 + n;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a<<" ";
            a--;
        }
        
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


// Question_18
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18
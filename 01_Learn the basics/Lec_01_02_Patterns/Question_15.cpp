

#include <bits/stdc++.h>
using namespace std;
/*
ABCDEFG
ABCDEF
ABCDE
ABCD
ABC
AB
A
*/
void print1(int n)
{
    
    // for (int i = 0; i < n; i++)
    // {
    //     char a = 65;
    //     for (int j = 0; j < n-i; j++)
    //     {
    //         cout << a;
    //         a++;
    //     }
    //     cout << endl;
    // }


    // Striver code 
    for(int i=0; i<n; i++){
        for(char ch ='A'; ch<'A'+(n-i); ch++){
            cout<<ch;
        }
        cout<<endl;
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
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_15
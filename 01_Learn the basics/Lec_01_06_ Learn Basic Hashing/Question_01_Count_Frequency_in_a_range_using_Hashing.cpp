#include <bits/stdc++.h>
using namespace std;

// Solution with map Hashing

#include <bits/stdc++.h>



// vector<int> countFrequency(int n, int x, vector<int> &nums)
// {

//     map<int, int> abhi;
//     vector<int> frequency_count;

//     for (int i = 1; i <= n; i++)
//     {
//         abhi[i] = 0;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (nums[i-1] <= n)
//         {
//             abhi[nums[i - 1]]++;
//         }
//     }
//     for (auto k : abhi)
//     {
//         frequency_count.push_back(k.second);
//     }
//     return frequency_count;
// }


// Another solution with array Hashing 

vector<int> countFrequency(int n, int x, vector<int> &nums)
{

    vector<int> abhi(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= n)
        {
            abhi[nums[i] - 1] += 1;
        }
    }
    return abhi;
    // Write your code here.
}



int main()
{



    vector<int> abhi;
    abhi.push_back(11);
    abhi.push_back(14);
    abhi.push_back(8);
    abhi.push_back(3);
    abhi.push_back(12);
    abhi.push_back(14);
    abhi.push_back(1);
    abhi.push_back(7);
    abhi.push_back(4);
    abhi.push_back(3);

    // 10 is size of array
    // 14 is max no in array 

    vector<int> abhi1 = countFrequency(10, 14, abhi);

    for (auto i : abhi1)
    {
        cout << i << " ";
    }
    
    return 0;
}











/*


Question_01 :- Count Frequency in a range


Link :- https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf




Problem statement
You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.



Your task is to count the frequency of all elements from 1 to n.

Note:
You do not need to print anything. Return a frequency array as an array in the function such that index 0 represents the frequency of 1, index 1 represents the frequency of 2, and so on.
Example:
Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
Output: [2, 1, 1, 0, 0, 0]
Explanation: Below Table shows the number and their counts, respectively, in the array
Number         Count 
 1                2
 2                1
 3                1
 4                0
 5                0
 6                0
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6 4
1 3 4 3 4 1
Sample Output 1:
2 0 2 2 0 0
Explanation Of Sample Input 1 :
Frequency table:
Number         Count 
 1                2
 2                0
 3                2
 4                2
 5                0
 6                0
Sample Input 2 :
5 5
1 2 3 4 5
Sample Output 2 :
1 1 1 1 1
Explanation Of Sample Input 2 :
Frequency table:
Number         Count 
 1                1
 2                1
 3                1
 4                1
 5                1
Constraints:
1  <= n <= 10^5
1  <= x <= 10^5
1 <= arr[i] <= x


*/
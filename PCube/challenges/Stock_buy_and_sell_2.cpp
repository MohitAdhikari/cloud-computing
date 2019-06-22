/*

The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input Format

First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days.

Constraints

1 <= T <= 100

2 <= N <= 103

0 <= Ai <= 104

Output Format

For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit"

Sample Input 0

7
100 180 260 310 40 535 695
Sample Output 0

(0,3) (4,6)
Explanation 0

We can buy stock on day 0, and sell it on 3rd day, which will give us maximum profit.

Similar for purchasing on day 4 and selling on day 6

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;


int main() {
    long int n,t,i,begin=0,end=0,f=0,temp,j;
    //cin>>t;
    //while(t--){
        cin>>n;
        f=0;
        int a[n+1];
        a[n]=INT_MIN;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]<a[i+1]){
                end=i+1;
            }
            else{
                if(begin<end){
                    /*for(j=begin+1;j<end;j++){
                        if
                    }*/
                    cout<<"("<<begin<<","<<end<<") ";
                    f=1;
                }
                begin=i+1;
                
            }
        }
        if(f==0)
            cout<<"No Profit";
    //}
    return 0;
}

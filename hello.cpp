// { Driver Code Starts
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
   long long int mod=1000000007;
    int countWays(int n)
    {
           int dp[n+1];
           dp[0]=1;     
           dp[1]=1;
           dp[2]=2;
           for(int i=3;i<=n;i++)
           {
               dp[i]=((dp[i-1])%mod+(dp[i-2])%mod)%mod;
           }
           return dp[n];
    }
};



// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    t=1;
    while(t--)
    {
        //taking stair count
        int m;
        4;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
  // } Driver Code Ends
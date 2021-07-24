# include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool pairSum(int arr[],int n,int k){
    // O(n^2)

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; i < n; j++)
    //     {
    //         if(arr[i]+arr[j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             return true;
    //         }
    //     }
        
    // }

    // O(n)
    int low =0;
    int high = n-1;
    while(low<high){
        if(arr[low]+ arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }

        else if(arr[low]+ arr[high]>k){
            high--;
        }

        else {
            low++;
        }

    }
    return false;
    
}


int main (){

  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  { 
      cin>>a[i];
  }
  int k=31;

  cout<<pairSum(a,n,k)<<endl;
  return 0;

}

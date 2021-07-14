# include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main (){
  
  
  int mx = -19999999;
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  { 
      cin>>a[i];
  }

  int curr =0;

  for(int i=0; i<n ; i++){
      curr =0;
      for (int j = 0; j < n; j++)
      {
          curr += a[i];
          cout<<curr<<endl;
      }
      
  }
  return 0;
}

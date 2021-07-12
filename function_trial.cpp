# include <iostream>
#include <math.h>
using namespace std;


int sum(int i){
    int ans=0;
    for(int j=0;j<i;j++){
        ans+=j;
    }
    return ans;
}

int main (){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt" , "w" , stdout);
  #endif

  int n;
  cin>>n;
  cout<<sum(n);
  
}

# include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    if(num%2==0){
      return true;
    }
    else {return false;}
  }

int main (){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt" , "w" , stdout);
  #endif
  int a,b;
  cin>>a>>b;
  for(int i=a;i<b;i++){
    if(isPrime(i)){
      cout<<i<<endl;
    }
  }
}

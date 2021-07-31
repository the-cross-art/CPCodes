# include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main (){

    int a=10;
    int* aptr = &a;

    cout<<*aptr<<endl;
    *aptr=20;
    cout<<*aptr<<endl;
    cout<<a<<endl;
  return 0;

}

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
int main() {
  ll x;
  cin>>x;
  if(x>=5){
      ll ans=0;
      ans=ceil((float)x/5);
      cout<<ans;
  }
  else
  cout<<1;
}
/*https://www.hackerearth.com/problem/algorithm/minimum-jumps-1/*/

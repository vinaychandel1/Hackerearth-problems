#include <bits/stdc++.h>

using namespace std;
long long int gcd(long long int a,long long int b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}
int main() {
long long int a,b,c=0;
cin>>a>>b;
long long int n=gcd(a,b);
long long int result = 0;
long long int i;
for ( i=1; i<=sqrt(n); i++)
{
if (n%i==0)
{

if (n/i == i)
result += 1;
else
result += 2;
}
}
cout<<result;
}

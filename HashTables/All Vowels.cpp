#include <bits/stdc++.h>
int m[26];
using namespace std;

int main() {
    int num;
	cin >> num;
	string s;
	cin>>s;
	int ans=0;
	memset(m,0,sizeof(m));
	for (int i = 0; i < num; ++i)
	{
		m[s[i]]++;
	}
	if(m[97]>=1&&m[101]>=1&&m[105]>=1&&m[111]>=1&&m[117]>=1)
     ans=1;
 if(ans==1) cout<<"YES";
 else cout<<"NO";
}


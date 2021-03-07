#include <bits/stdc++.h>
int m[26];
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		memset(m,0,sizeof(m));
		for (int i = 0; i < s.size(); ++i)
		{
			m[s[i]-'a']++;
		}
		int count=0;
		for(int i=0;i<26;i++)
		{
			if(m[i]>=2)
				count=1;
		}
		if(count) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
}
}


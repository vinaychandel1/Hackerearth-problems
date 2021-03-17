#include <iostream>
const int N=1e5+10;
int hsh[N][26];
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		for (int i = 0; i < N; ++i){
			for (int j = 0; j < 26; ++j){
				hsh[i][j]=0;
			}
		}
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		for (int i = 0; i < n; ++i){
			hsh[i+1][s[i]-'a']++;
		}
		for (int i = 0; i < 26; ++i){
			for (int j = 1; j <=n; ++j){
				hsh[j][i]+=hsh[j-1][i];
			}
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			int oddCt=0;
			for (int i = 0; i < 26; ++i){
				int charCt=hsh[r][i]-hsh[l-1][i];
				if(charCt%2!=0) oddCt++;
			}
			if(oddCt>1) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
	return 0;
}

/*https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ispalin/*/

#include<iostream>
using namespace std;
const int N=1e5+10;
int hsh[N];
int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		int key,lock;
		cin>>key>>lock;
        hsh[lock]=1;
	}
	bool ans=true;
	for(int i=0;i<M;i++){
		int d;
		cin>>d;
		if(hsh[d]==0) ans=false;
	}
	if(ans) cout<<"YES";
	else cout<<"NO";


	return 0;
}

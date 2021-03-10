#include<iostream>
using namespace std;
const int N=1e3+10;
long long pf[N][N];
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
       int x;
       cin>>x;
       if(x%2!=0){
           pf[i][j]=1;
       }
       else {
       	pf[i][j]=0;
       }
        pf[i][j]=pf[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];    
    }
  }
 int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;
	}
}

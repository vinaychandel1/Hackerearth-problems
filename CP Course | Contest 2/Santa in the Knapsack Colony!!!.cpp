#include<stdio.h>
long long H=100000007+10;
int hsh[H];
int main(){
    int count=0;
int n,k;
scanf("%d%d",&n,&k);
for(int i=1;i<=n;i++){
    int u;
scanf("%d",&u);
	hsh[u]++;
}

for(int i=1;i<=H;i++){
	if(hsh[i]>k){
	count=count+1;
	}
}
printf("%d",count);

}

#include<iostream>
using namespace std;

int main(){
	int n;
cin>>n;
while(n--){
	int k;
	cin>>k;
	long long multiply=1;
	for(int i=0;i<k;i++){
		int a;
	cin>>a;
	multiply=multiply*a;
	}
	int digit=multiply%10;
	if(digit==2 ||digit==3||digit==5)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
	return 0;

}

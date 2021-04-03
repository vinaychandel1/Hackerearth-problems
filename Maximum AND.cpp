

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	long long i,j;	
	while(num--){
	cin>>i>>j;

        if((j-i)==1)

        cout<<(i&j)<<endl;

        else

        {

            cout<<max(j&(j-1),(j-1)&(j-2))<<endl;

        }
	}	
	}


/*https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/maximum-and/*/

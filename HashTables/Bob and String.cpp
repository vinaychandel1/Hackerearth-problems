#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int tc = 0; tc < t; tc++)
    {
        char S[100005], T[100005];
       cin>>S;
       cout<<"\n";
       cin>>T;
        int C[26], h = 0;
        for (int i = 0; i < 26; i++) C[i] = 0;
        while (S[h] != '\0') C[S[h++] - 'a']++;
        h = 0;
        while (T[h] != '\0') C[T[h++] - 'a']--;
        h = 0;
        for (int i = 0; i < 26; i++)
        {
            if (C[i] >= 0) h += C[i];
            else h -= C[i];
        }
        cout<<"\n"<< h;
    }
    return(0);
}

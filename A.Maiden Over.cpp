#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int Case;
signed main(){
    int tc;     scanf("%lld", &tc);
    while(tc--){
        int over,c=0;   scanf("%lld", &over);
        while(over--){
            int a[7],i,cnt=0;
            for(i=1; i<=6; i++){
                scanf("%lld", &a[i]);
                if(a[i]==0) cnt++;
            }
            if(cnt==6)  c++;
        }
        printf("Case %lld: %lld\n",++Case, c);
    }
    return 0;
}

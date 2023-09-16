#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define yes puts("YES")
#define no puts("NO")
// mini = min_element(a, a+n)-a;
// minval = *min_element(a, a+n);
const int mod=1e9+7;
using namespace std;

int i,j,n,k,c,l,r;

void ac(){
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);
    multiset<int>m1,m2;
    cin>>n>>k>>c;
    int a[n+2]; l=0,r=n-1;
    for(i=0; i<n; i++)  cin>>a[i];
    for(i=0; i<c; i++) m1.insert(a[i]);
    l=i;
    for(i=n-1; i>=n-c; i--) m2.insert(a[i]);
    r=i;

    int cnt=0,ans=0;
    while(cnt<k){
        if(*m1.begin()<=*m2.begin()){
            ans = ans+(*m1.begin());
            m1.erase(m1.begin());
            m1.insert(a[l]);    l++;
        }
        else{
            ans+=(*m2.begin());
            m2.erase(m2.begin());
            m2.insert(a[r]); r--;
        }
        cnt++;
    }
    cout<<ans<<endl;

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    ac();

   /* int tc; cin>>tc;
    while(tc--){
        ac();
    }*/
}














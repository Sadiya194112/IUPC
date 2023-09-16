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
const int N=1e4+5;
int i,j,n,m,k,x,y;
double eps = 1e-6;

void ac(){
    cin>>n;
    if(n==0) return;
    int a[n+2];
    // bool vis[n+2];
    // memset(vis, 0, sizeof(vis));

    //To fill the array with a value
    // fill(a, a+n, 4);

    for(i=0; i<n; i++) cin>>a[i];
    sort(a, a+n);

    vector<pair<int,int>>v;
    x=a[0];
    for(i=1; i<n; i++){
        if(a[i-1]+1==a[i]) continue;
        else{
            v.pb({x, a[i-1]});
            x = a[i];
        }

    }
    v.pb({x, a[i-1]});
    cout<<v.size()<<endl;
    string s;
    for(auto it:v){
        if(it.ff==it.ss){
            s = to_string(it.ff);
            cout<<s<<endl;
        }
        else{
            s = to_string(it.ff);
            cout<<s<<"->";
            s = to_string(it.ss);
            cout<<s<<endl;
        }
    }

}
signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(NULL);

    // ac();

    int tc; cin>>tc;
    while(tc--){
        ac();
    }
}


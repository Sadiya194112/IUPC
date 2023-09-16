#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int i,j,n;
void ac(){
    string s;   cin>>s;
    n = s.size();
    vector<pair<int,char>>v;
    map<char,int>m;
    for(i=0; i<n; i++){
        m[s[i]]++;
    }
    for(auto & [key,val]:m){
        v.pb({val,key});
    }
    sort(v.begin(), v.end());
    string st="";
    char c;
    for(auto it:v){
        c = it.second;
        if(it.first==1){
            st+=c; st+=c;
        }
        else st+=c;
    }
    if(n-st.size()>0){
        for(auto &[key,val]:m){
            if(val==1){
                for(i=st.size(); i<n; i++) st+=key;
                break;
            }
            else{
                if((n-st.size())==val-1) continue;
                for(i=st.size(); i<n; i++) st+=key;
                break;
            }
        }
    }
    if(st.size()==n)    cout<<st<<endl;
    else cout<<-1<<endl;
}
signed main(){
    int tc;     cin>>tc;
    while(tc--){
        ac();
    }
    return 0;
}

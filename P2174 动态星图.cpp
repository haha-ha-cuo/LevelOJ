#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int m,n,q;
    cin>>m>>n>>q;
    vector<vector<int>> star(m+1);
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        star[s].push_back(e);
    }

    for(int i=0;i<q;i++){
        int u,k;
        cin>>u>>k;
        if(star[u].size()<k){
            cout<<-1<<endl;
            continue;
        }
        sort(star[u].begin(),star[u].end());
        cout<<star[u][k-1]<<endl;
    }

    return 0;
}
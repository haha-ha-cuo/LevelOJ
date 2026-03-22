#include <iostream>
#include <vector> 

using namespace std;

int ans=0;

void cnt(vector<int> &tree,int n){
    for(int i=2;i<n+1;i++){
        if(tree[i]==1){
            ans++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    vector<int> tree(n+1);

    for(int i=0;i<n-1;i++){
        int index,val;
        cin>>index>>val;
        tree[index]++;
        tree[val]++;
    }
    cnt(tree,n);
    cout<<ans;

    return 0;
}
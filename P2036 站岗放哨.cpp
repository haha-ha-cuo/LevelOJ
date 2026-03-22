#include <iostream>
using namespace std;

int fun(int n,int m){
    // 边界条件
    // 边界条件
    if (m == 0 || m == n) return 1;
    if (m > n) return 0;
    
    // 递归式
    return fun(n - 1, m) + fun(n - 1, m - 1);
}

int main(){
    int n,m;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
    }
    cout<<fun(m,n);
}
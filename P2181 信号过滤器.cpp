#include <iostream>
#include <queue>

using namespace std;

int main(){
	priority_queue<long long int>q;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int op;
		cin>>op;
		if(op == 1){
			long long int x;
			cin>>x;
			if(q.size()<k){
				q.push(x); 
			}else{
				if(x<q.top()){
					q.pop();
					q.push(x);
				}else{
					continue;
				}
			}
		}
		else if(op == 2){
			long long int x;
			cin>>x;
			if(q.size()<k){
				cout<<-1<<endl;
			}else{
				cout<<q.top()<<endl; 
			}
		}
		else{
			return 0;
		}
	}
	return 0;
}

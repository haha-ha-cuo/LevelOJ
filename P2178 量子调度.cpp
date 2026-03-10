#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;

int main(){
	queue<string>Q;
	map<string, long long int>mp;
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		string s;
		long long int x;
		cin>>s>>x;
		mp[s] = x;
		Q.push(s);
	}
	long long int time=0;
	while(!Q.empty()){
		if(mp[Q.front()] <= q){
			time+=mp[Q.front()];
			cout<<Q.front()<<' '<<time<<endl;
			Q.pop();
		}
		else{
			time += q;
			mp[Q.front()] -= q;
			Q.push(Q.front());
			Q.pop();
		}
	}
	return 0;
}

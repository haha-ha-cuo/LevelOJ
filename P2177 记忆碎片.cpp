#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<string,long long int> mp;
	for(int i=0;i<n;i++){
		int op;
		cin>>op;
		if(op == 1){
			long long int x;
			string s;
			cin>>s>>x;
			mp[s] += x;
		}
		else if(op == 2){
			long long int x;
			string s;
			cin>>s>>x;
			if(mp[s] >= x){
				mp[s] -= x;
				cout<<mp[s]<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
		else if(op == 3){
			string s;
			cin>>s;
			auto it = mp.find(s);
			if(it != mp.end()){
				cout<< it->second <<endl;
			}else{
				cout<<0<<endl;
			}
		}else{
			return 0;
		}
	}
	
	return 0;
}

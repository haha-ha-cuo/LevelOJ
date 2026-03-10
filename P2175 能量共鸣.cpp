#include <iostream>
#include <set>

using namespace std;

int main(){
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++){
		int op;
		cin>>op;
		if(op == 1){
			int x;
			cin>>x;
			s.insert(x);
		}else if (op == 2){
			int x;
			cin>>x;
			s.erase(x);
		}else if (op == 3){
			int x;
			cin>>x;
			if(s.empty()){
				cout<<-1<<endl;
				continue;
			}
			auto it = s.lower_bound(x);
			if(it != s.end()){
				cout<<*it<<endl;
			}else{
				cout<<-1<<endl;
			}
		}else{
			return 0;
		}
	}
}

#include<iostream>
#include<set>

using namespace std;

int main(){
	int n;
	cin>>n;
	multiset<int> ms;
	
	for(int i=0;i<n;i++){
		int op;
		cin>>op;
		if(op == 1){
			int x;
			cin>>x;
			ms.insert(x);
		}
		else if(op == 2){
			int x;
			cin>>x;
			auto it = ms.find(x); 
			if (it != ms.end()) {
			    ms.erase(it); 
			}
		}
		else if(op == 3){
			int x;
			cin>>x;
			if(ms.empty()){
				cout<<-1<<endl;
				continue;
			}
			auto ub = ms.upper_bound(x); 
			if (ub != ms.end()) {
			    cout << *ub << endl;
			}
			else{
				cout<<-1<<endl;
			}
			
		}else{
			return 0;
		}
	}
	
	return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	int max=-60001;
	vector<int>v;
	vector<int>ans1;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		v.push_back(t);
		ans1.push_back(t);
	}
	for(int i=0;i<n;i++){
		ans+=v[i];
		if(ans<0){
			ans=0;
		}
		if(ans!=0){
			ans1[i]=ans;
		}
	}
	for(int i=0;i<n;i++){
		if(ans1[i]>max){
			max = ans1[i];
		}
	}
	cout<<max;
	return 0;
}

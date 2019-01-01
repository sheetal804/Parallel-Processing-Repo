#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>x;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		x.push_back(temp);
	}
	sort(x.begin(),x.end());
	vector<int>::iterator it(x.begin());
	for(it;it!=v.end();++it){
		cout<<it->first<<" ";
	}
	return 0;
	}

#include<bits/stdc++.h>
using namespace std;
void F(int a[],int i,int n,vector<int> SS,int c){
	int sum=0;
	//int c=0;
	if(i>n-1){
		c++;
		cout<<"{ ";
		for(i=0;i<SS.size();i++){
			sum+=SS[i];
			cout<<SS[i]<<" ";
		}
		cout<<"}"<<endl;
		cout<<sum<<endl;
		cout<<c<<endl;
		return;
	}
	SS.push_back(a[i]);
	F(a,i+1,n,SS,c);
	SS.pop_back();
	//SS.erase(SS.begin()+SS.size()-1);
	F(a,i+1,n,SS,c);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> SS;
	F(a,0,n,SS,0);
	return 0;
}
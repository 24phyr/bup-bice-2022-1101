#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	int N=pow(2,n);
	cout<<endl;
	int arr[N];
	int array[N];
	for(int num=1;num<N;num++){
		
		int sum=0;
		for(int i=0;i<n;i++){
			int p=1<<i;
			if((num & p)!=0){  //& is the AND operation
				//cout<<ar[i]<<" "<<endl;
				sum+=ar[i];
			}
		}
		arr[num]=sum;
		array[num]=sum;
		//cout<<arr[num]<<endl;
	}
	sort(arr,arr+N);
	cout<<arr[N-1]<<endl;
	for(int i=0;i<N;i++){
		if(array[i]==arr[N-1]){
			for(int i=0;i<n;i++){
				cout<<ar[i]<<" ";
			}
		}
	}	 
}
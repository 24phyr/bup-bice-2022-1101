#include<bits/stdc++.h>
using namespace std;

bool compare(pair <int,int> a,pair<int,int> b)
{
	if(a.first>b.first) return 1; //(< asc ,, > desc
	else return 0;
}

int main()
{
	freopen("C:/Users/user/Desktop/Algorithm/struct_data.txt", "r", stdin);
	
	vector < pair<int,int> > ar;
	
	int n; cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		int x,y; cin>>x>>y;
		
		ar.push_back(make_pair(x,y));	
	}
	
	cout << "Before sorting." << endl;
	
	for(int i = 0; i<=n-1; i++)
	{
		cout << ar[i].first << " " << ar[i].second << endl;
	}
	
	sort(ar.begin(),ar.end(), compare);
	cout<< "After sorting." << endl;
	for(int i = 0; i<=n-1; i++)
	{
		cout << ar[i].first << " " << ar[i].second << endl;
	}
	
	return 0;
}
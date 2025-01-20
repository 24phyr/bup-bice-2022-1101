#include<bits/stdc++.h>
using namespace std;
const int M=500;

bool compare(pair <int,pair<int,int>> a,pair<int,pair<int,int>> b){
	if(a.second.second<b.second.second){
		return 1;
	}
	else if(a.second.second==b.second.second){
		if(a.second.first>b.second.first){
			return 1;
		}else{
			return 0;
		}
	}else{
		return 0;
	}
}

int parent[M+1];
int Rank[M+1];

int Find(int u){
	if(parent[u]==u){
		return u;
	}else{
		return parent[u]=Find(parent[u]);
	}
}

void Union(int root_u,int root_v){
	if(Rank[root_u]==Rank[root_v]){
		parent[root_v]=root_u;
		Rank[root_u]++;
	}else if(Rank[root_u]>Rank[root_v]){
		parent[root_v]=root_u;
	}else{
		parent[root_u]=root_v;
	}
}

bool create_cycle(int u,int v){
	int root_u=Find(u);
	int root_v=Find(v);
	if(root_u==root_v){
		return true;
	}else{
		Union(root_u,root_v);
		return false;
	}
}

int main(){
	freopen("F:/OneDrive - MSFT/MY WORKS/ADA/kruskal.txt", "r", stdin);
	vector<pair<int,pair<int,int>>> G;
	int ne;
	cin>>ne;
	for(int i=1;i<=ne;i++){
		int u,v,w;
		cin>>u>>v>>w;
		G.push_back(make_pair(u,make_pair(v,w)));
	}
	sort(G.begin(),G.end(),compare);
	for(int u=0;u<=M;u++){
		parent[u]=u;
		Rank[u]=0;
	}
	vector<pair<int,pair<int,int>>> MST;
	int mst_wt=0;
	for(int i=0;i<ne;i++){
		int u=G[i].first;
		int v=G[i].second.first;
		int w=G[i].second.second;
		if(create_cycle(u,v)==true){
			continue;
		}else{
			MST.push_back(make_pair(u,make_pair(v,w)));
			mst_wt+=w;
		}
	}
	
	cout<<"Total weight: "<<mst_wt<<endl;
	return 0;
}
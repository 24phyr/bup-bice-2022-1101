#include <bits/stdc++.h>
using namespace std;
const int M=500;

int parent[M+1];
int Rank[M+1];

int Find(int u){
	if(parent[u]==u){
		return u;
	}else{
		//return Find(parent[u]);
		return parent[u]=Find(parent[u]);		//Path compression technique. Time complexity of both technique.
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

int main(){
	freopen("C:/Users/user/Desktop/Algorithm/union.txt", "r", stdin);
	for(int u=0;u<=M;u++){			//O(M)
		parent[u]=u;
		Rank[u]=0;
	}
	int ne; cin>>ne;				//O(1)
	for(int i=1;i<=ne;i++){			//O(ne)
		int u,v; cin>>u>>v;			//O(1)
		int root_u=Find(u);			//O(Elog2V)
		int root_v=Find(v);			//
		if(root_u==root_v){			//O(1)
			cout<<"The G contains cycle after "<<u<<" "<<v<<endl;
			break;
		}else{
			Union(root_u,root_v);	//O(1)
		}
	}
	return 0;
}

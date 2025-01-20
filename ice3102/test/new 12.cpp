/* dijktra
#include<bits/stdc++.h>
#define inf (1<<30)

using namespace std;

struct compare
{
    bool operator() (pair<int,int> a,pair<int,int> b)
    {
        if(a.second<b.second) return 0;
        else return 1;
    }
};

void dijktra(vector < pair<int,int> > G[],int source, int destination)
{
    int dist[100+1];

    for(int i = 0; i<=100; i++)
        dist[i] = inf;

    dist[source] = 0;

    priority_queue< pair<int,int>, vector< pair<int,int> >, compare > PQ;

    PQ.push(make_pair(source, dist[source]));

    while(!PQ.empty())
    {
        pair <int,int> src = PQ.top();
        PQ.pop();

        int u = src.first;

        int l = G[u].size();

        for(int i = 0; i<=l-1; i++)
        {
            int v = G[u][i].first;
            int w = G[u][i].second;

            if(dist[u]+w<dist[v])
            {
                dist[v] = dist[u]+w;

                PQ.push(make_pair(v,dist[v]));
            }
        }
    }

    cout << "ans = " << dist[destination] << endl;
}


int main()
{

    int ne; cin>>ne;

    int M = 100;

    vector < pair<int,int> > G[M+1];

    for(int i = 1; i<=ne; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        G[u].push_back(make_pair(v,w));
        G[v].push_back(make_pair(u,w));
    }

    int source, destination;
    cin>>source>>destination;

    dijktra(G, source, destination);

    return 0;
}
*/
/* priority queue
#include<bits/stdc++.h>

using namespace std;

struct compare
{
    bool operator ()(pair<int,int> a,pair<int,int> b)
    {
        if(a.first<b.first) return 0;
        else return 1;
    }
};

int main()
{
    freopen("C:/Users/com.lab2/Desktop/Algorithm/Test program/struct_data.txt", "r", stdin);

    int n; cin>>n;

    priority_queue< pair<int,int>, vector< pair<int,int> >, compare > PQ;

    for(int i = 1; i<=n; i++)
    {
        int x,y; cin>>x>>y;

        PQ.push(make_pair(x,y));
    }

    cout << "PQ: before sorting." << endl;
    while(!PQ.empty())
    {
        cout << PQ.top().first << " " << PQ.top().second<<endl;
        PQ.pop();
    }

    return 0;
}
*/
/* DSU
#include<bits/stdc++.h>
using namespace std;
const int M = 500;

int parent[M+1];
int Rank[M+1];

int Find(int u)
{
    if(parent[u] == u) return u;
    else
    {
        return Find(parent[u]);
    }
}

int Find(int u)
{
	if(parent[u] == u) return u;
	else
	{
		return parent[u] = Find(parent[u]);
	}
}

void union_set(int root_u, int root_v)
{
    if(Rank[root_u] == Rank[root_v])
    {
        parent[root_v] = root_u;
        Rank[root_u]++;
    }
    else if(Rank[root_u]>Rank[root_v])
    {
        parent[root_v] = root_u;
    }
    else
    {
        parent[root_u] = root_v;
    }
}


int main()
{
    for(int u = 0; u<=M; u++)
    {
        parent[u] = u;
        Rank[u] = 0;
    }

    int ne; cin>>ne;

    for(int i = 1; i<=ne; i++)
    {
        int u,v; cin>>u>>v;

        int root_u = Find(u);
        int root_v = Find(v);

        if(root_u == root_v)
        {
            cout << "The G contains cycle" << endl;
            break;
        }
        else
        {
            union_set(root_u, root_v);
        }
    }


    return 0;
}
*/
/* Bellman Ford
#include<bits/stdc++.h>
#define inf (1<<30)
using namespace std;
void Bellman_Ford(vector<pair<char,pair<char,int>>> edge,int n,char src,set<char> uv) {
	int dist[122+1];
	for(int i=0;i<=122;i++){
		dist[i]	=inf;
	}
	dist[src]=0;
	for(int i=1;i<n;i++){
		int l=edge.size();
		for(int k=0;k<l;k++){
			pair<char,pair<char,int>> e=edge[k];
			char u=e.first;
			char v=e.second.first;
			int w=e.second.second;
			if(dist[u]+w<dist[v]){
				dist[v]=dist[u]+w;
			}
		}
	}
	set<char> :: iterator i; //scope resolution operator ::
	cout<<endl;
	for(i=uv.begin();i!=uv.end();i++){
		cout<<*i<<" : "<<dist[*i]<<endl;
	}
}
 
int main() {
	
	freopen("E:/bell/new.txt", "r", stdin);
	freopen("E:/bell/output.txt", "w", stdout);
	vector<pair<char,pair<char,int>>> edge;
	int ne;
	cin>>ne;
	set<char> uv; //unique vertex
	for (int i=1;i<=ne;i++) {
		char u,v;
		int w;
		cin>>u>>v>>w;
		uv.insert(u);
		uv.insert(v);
		edge.push_back(make_pair(u, make_pair(v,w)));
	}
	int n=uv.size();
	char src;
	cin>>src;
	Bellman_Ford(edge,n,src,uv);
	
	return 0;
}

/*
9
A B 6
A C 4
A D 5
B E -1
C B -2
D F -1
E F 3
D C -2
C E 3
A
*/
/**/
/* */
/* */
/* */
/* */

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'kruskals' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts WEIGHTED_INTEGER_GRAPH g as parameter.
 */

/*
 * For the weighted graph, <name>:
 *
 * 1. The number of nodes is <name>_nodes.
 * 2. The number of edges is <name>_edges.
 * 3. An edge exists between <name>_from[i] and <name>_to[i]. The weight of the edge is <name>_weight[i].
 *
 */

int parent[10001];

struct edge{
    int u,v,w;
};

bool mycompare(edge a,edge b){
    if(a.w<b.w)
        return true;
    return false;    
}

int find(int i){
    while(parent[i]!=-1){
        i=parent[i];
    }
    return i;
}

void uni(int a,int b){
    parent[a]=b;
}

edge edges[10001]; 

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        parent[i]=-1;
    }

    for(int i=0;i<k;i++){
        cin>>edges[i].u;
        cin>>edges[i].v;
        cin>>edges[i].w;
    }

    sort(edges,edges+k,mycompare);

    int sum=0;
    for(int i=0;i<k;i++){
        int a=find(edges[i].u);
        int b=find(edges[i].v);

        if(a!=b){
            uni(a,b);
            sum=sum+edges[i].w;
        }
    }
    cout<<sum;

return 0;
}




//! This solution will give tle in case 5 and 4 :'D
/*
int p[9999];

int find(int i){
    while (p[i]!=-1){
       i=p[i];
    }
    return i;
} 

void uni(int a,int b){
    int i=find(a);
    int j=find(b);
    p[i]=j;
}
 

int kruskals(int n, vector<vector<int>>graph) {
    
    for(int i=0;i<=n;i++){
        p[i]=-1;
    }   
    
    int sum=0;
    int edgecount=0;
    while(edgecount<n-1){
        int mn=9999,a=-1,b=-1;
        for(int i=1;i<=n;i++){ 
        for(int j=1;j<=n;j++){
            if(find(i)!=find(j) && mn>graph[i][j] && graph[i][j]){  
                 mn=graph[i][j];
               
                a=i;
                b=j;
            }
        }
        
     }
        uni(a,b);
        edgecount++;
       // cout<<a<<":"<<b<<" "<<edgecount<<endl;
        sum=sum+mn;
    }
  
    return sum;
}

int main()
{
   int n,k;
   vector<int> u,v,w;
    cin>>n>>k;
    vector<vector<int>> graph(n+1,vector<int>(n+1,0));
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
            
            graph[a][b]=c;
            graph[b][a]=c;
           }
        int ans= kruskals(n,graph);
        cout<<ans<<endl;
}
*/


//*********************************************


//! This solution wont work if all nodes are inserted but they are not connected i.e forms a forest.
/*int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {
    int n=g_nodes;
    vector<bool> visited(n+1,false);
    set<int> selected;
    int mn=99999,mni;
    int sum=0;
    while(selected.size()<n){
            mn=99999;
            for(int i=0;i<g_weight.size();i++){         //smallests unselected weight edge
                                        //if one of the two nodes is not visited
                if(mn>g_weight[i] && (visited[g_from[i]]==false|| visited[g_to[i]]==false)){
                    mn=g_weight[i];
                    mni=i;
                }
            }
            sum=sum+g_weight[mni];
            visited[g_from[mni]]=true;
            visited[g_to[mni]]=true;
            if(selected.find(g_from[mni])==selected.end())
            selected.insert(g_from[mni]);
            if(selected.find(g_to[mni])==selected.end())
            selected.insert(g_to[mni]);
        
        }
    return sum;
}


int main()
{
   int n,k;
   vector<int> u,v,w;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        int a,b,c;
        cin>>a>>b>>c;
        u.push_back(a);
        v.push_back(b);
        w.push_back(c);
           }
        cout<< kruskals(n,u,v,w)<<endl;
}
*/
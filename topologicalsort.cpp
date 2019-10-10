#include<iostream>
using namespace std;
#define n 3
//int n;
int adj[n][n];
int indegree[4];
void calindegree(){
   for(int i=0;i<=n;i++){
      indegree[i]=0;
   }
   for(int i=0;i<=n;i++){
      for(int j=0;j<=n;j++){
      indegree[i]=indegree[i]+adj[j][i];
      }
   }
}
void topologicalsort(){
  calindegree();
int count=0;
  for(int i=0;i<=n;i++){
     if(indegree[i]==0){
       count++;
       cout<<i<<" ";
       indegree[i]=-1;
        for(int j=0;j<n;j++){
          if(adj[i][j]==1){
           indegree[j]=indegree[j]-1;
          }
        }
  }
  
}
    if(count==0){
      cout<<"Cycle in Graph - No solution exists\n";}
}
int main(){
 
 cout<<"enter adjacency matrix \n";
 for(int i=0;i<=n;i++){
  for(int j=0;j<=n;j++){
    cin>>adj[i][j];
  }
 } 
topologicalsort();
 return 0;
}

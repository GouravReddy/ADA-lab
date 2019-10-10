#include<iostream>
using namespace std;
int n,x[10];
bool place(int k,int col){
  for(int j=1;j<=k-1;j++){
     if( (x[j]==col) || (abs(x[j]-col)==abs(j-k)))
        return false;}
  return true;
}
     
void nqueen(int k,int n){
    
    for(int i=1;i<=n;i++){
       if(place(k,i)){
           x[k]=i;
         
          if(k==n){
              // cout<<"The solution is \n";
               for(int i=1;i<=n;i++){
                cout<<x[i]<<" ";
                }
               cout<<"\n";
         }

      else{
          nqueen(k+1,n);
       }
}
}
}
int main(){
 cout<<"enter the number of queens\n";
 cin>>n;
 nqueen(1,n);
 return 0;
}

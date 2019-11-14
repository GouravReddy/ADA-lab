#include<iostream>
using namespace std;
int maxheap(int arr[],int n){
 int l,flag=0;
 for(int i=n/2;i>=1;i--){
   l=2*i+1;
   if( l+1<n){
      if( arr[l]<=arr[i] && arr[l+1]<=arr[i])
         continue;
      else
         flag=1;
      }
   else if(l<n and arr[l]<=arr[i]){
        continue;
       }
   else{
     //return false;
     flag=0;
   }

 }
 return flag;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
if(maxheap(arr,n)){
  cout<<"False\n";
}
else{
cout<<"True\n";}


return 0;
}

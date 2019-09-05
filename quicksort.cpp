#include<iostream>
using namespace std;
int temp,t;
int partition (int A[],int l,int r);
void quicksort(int A[],int l,int r)
{
	if(l<r)
	{
		int s=partition(A,l,r);
		quicksort(A,l,s-1);
		quicksort(A,s+1,r);
	}
}



int partition (int A[],int l,int r)
{
    
    int p = A[r];  
 
    int i = (l - 1);  

    for (int j = l; j <= r- 1; j++)
    {
        
        if (A[j] < p)
        {
            i++;
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
        }
    }
	t=A[i+1];
	A[i+1]=A[r];
	A[r]=t;
    return (i + 1);
}
int main()
{
	int A[10],i,n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<n;i++)
		cin>>A[i];
	quicksort(A,0,n-1);
	cout<<"Array after sorting"<<endl;
	for(i=0;i<n;i++)
		cout<<A[i]<<endl;
	return 0;
}


  

#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
	int temp,max,count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			count++;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"comp for bubble"<<count<<endl;
}
/*void split(int a[],int low,int high)
{ 
	int mid;

	if(low<high)
	{
		 mid=(low+high)/2;
		 split(a,low,mid);
		 split(a,mid+1,high);
		 combine(a,low,mid,high);
	}
	cout<<"comp for merge"<<count<<endl;
}

int combine(int a[],int low,int mid,int high)
{
	  int c[20],i,j,k,count=0;
	  i=low,j=mid+1;
	  k=low;
	  while(i<=mid && j<=high)
	  {
		  count++;
		  if(a[i]<a[j])
			c[k++]=a[i++];
		  else
		    c[k++]=a[j++];
	  }
	  if(i>mid)
	  { 
		 while(j<=high)
	     c[k++]=a[j++];
	  }
	  if(j>high)
	  {
		while(i<=mid)
	    c[k++]=a[i++];
	  }
	  for(i=low;i<=high;i++)
	  { 
		  a[i]=c[i];
	  }
	return count;
 
}*/
void selection(int a[],int n)
{
	int i,j,temp,min,count=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{	
			count++;
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"comp for selection"<<count<<endl;
}
int main()
{
	  int a[20],n,i;
	  cout<<"Enter the size:";
	  cin>>n;
	  cout<<"\nEnter the array elements:";
	  for(i=0;i<n;i++)
	  cin>>a[i];
	  //split(a,0,n-1);
	  bubblesort(a,n);
	  selection(a,n);

	  return 0;
}
 
				
	
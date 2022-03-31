#include<iostream>
using namespace std;

void swap(int *a,int *b)
{

int temp=*a;
*a=*b;
*b=temp;
}

int main(void)
{

int *arr,n,ii,k=0,nn=0,min;
cout<<"Enter n\n";
cin>>n;

arr=new int[n];

cout<<"Enter Elements\n";
for(int i=0;i<n;i+=1)
cin>>arr[i];

min=arr[0];

for(int i=1;i<n;i++)
{
	ii=i;
 while(ii!=n-1)
   {  
	if(min>arr[ii])
		{
		min=ii;
		nn=ii;				
		}
	ii++;
   }

swap(&arr[k],&arr[nn]);
k++;
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

}

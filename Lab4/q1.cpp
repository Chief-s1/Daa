
#include <iostream>
using namespace std;

int sort(int arr[], int n)
{
int c=0;
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j-=1;
			c+=1;
		}
		arr[j + 1] = key;
	}
}



int main(void)
{
int *arr=NULL,n,c=0;
cout<<"Enter Size of Array\n";
cin>>n;
cout<<"Enter Elements\n";
arr= new int[n];

  for(int i=0;i<n;i+=1)
	cin>>arr[i];


	c=sort(arr, n);
cout<<"Sorted array after "<<c <<" comparision is\n";
	for(int i=0;i<n;i+=1)
	 cout<<arr[i]<<" ";
cout<<endl;
}



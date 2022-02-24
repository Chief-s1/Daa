//Binary Search

#include<iostream>

using namespace std;


void bsrch(int *arr, int n, int key)
{
int mid,start=0,end=n-1,c=0;

 while(start <=end)
  {
   c++;
   mid=(start+end)/2;
   
   if(arr[mid]== key)
   break;
   
   else if(key<arr[mid])
   end=mid-1;
   
   else  
   start=mid+1;
  }
   
if(start>end)
cout<<"Key Not Found\nTotal Comparisions Occured:"<<c<<endl;


else
cout<<"Key Found!!!\nTotal Comparisions:"<<c<<endl;

}

int main(void)
{

int n=1,*ar,key,i;
   do{

 cout<<"Enter Size of array\n";
 cin>>n;

      if(!n)
      break;
      
ar= new int[n];
   
   cout<<"Enter Elements In Sorted Manner\n";
   for(i=0;i<n;i++)
   cin>>ar[i];


cout<<"Enter Key To Be Searched\n";
cin>>key;

bsrch(ar,n,key);
delete[] ar;

    while(n);
}





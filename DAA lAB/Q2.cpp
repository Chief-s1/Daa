//Binary Search

#include<iostream>

using namespace std;


void bsrch(int *arr, int n, int key)
{
cout<"1";
int mid,start=0,end=n-1,c=0;

 while(start <=end)
  {
  cout<<"@";
   c++;
   mid=(start+end)/2;
   
   if(arr[mid]== key)
   break;
   
   else if(key<arr[mid])
   end=mid;
   
   else  
   start=mid;
  }
   
if(start>end)
cout<<"Key Not Found\nTotal Comparisions Occured:"<<c<<endl;


else
cout<<"Key Found!!!\nTotal Comparisions:"<<c<<endl;


}

int main(void)
{

int n,*ar,key,i;

 cout<<"Enter Size of array\n";
 cin>>n;

ar= new int[n];
   
   cout<<"Enter Elements In Sorted Manner\n";
   for(i=0;i<n;i++)
   cin>>ar[i];


cout<<"Enter Key To Be Searched\n";
cin>>key;

      bsrch(ar,n,key);
}



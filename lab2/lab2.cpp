#include<iostream>

using namespace std;

int main(void)
{

int i,*arr,c=0,n;

cout<<"Enter Total Number of Elements\n";
cin>>n;

arr= new int[n];

   cout<<"Enter Element\n";
   for(i=0;i<n;i+=1)
   cin>>arr[i];


int key,ii;

cout<<"Enter Key\n";
cin>>key;

int mid,end=(n-1),srt=0;

  while(end>=srt)
  {
    mid=(srt+end)/2;
    
      if(arr[mid]==key)
      {
        c++;
               for(ii=mid-1;ii>=srt;ii--)
                {
                  if(key==arr[ii])
                  c++;
                  else
                  break;
                }    
      
                     for(ii=mid+1;ii<=end;ii++)
                {
                  if(key==arr[ii])
                  c++;
                   
                   else 
                   break;
                   
                 }
                 break;
      }
      else if(key<arr[mid])
      
      end=mid-1;   
      
         else
            srt=mid+1 ;          

  }
  
 if(c)
 {
 cout<<"Total Occurence Of Key="<<c<<endl;
 }
 
 else
 cout<<"Key Not found\ns";
 
 delete[] arr;
  

}

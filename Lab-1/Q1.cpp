//Linear search using iteration

#include<iostream>

using namespace std;
int main(void)
{
int n=1,*ar=NULL,key,i,c=0;

do{
c=0;
cout<<"Enter Size\n";
cin>>n;
if(!n)
break;

ar = new int[n];

   cout<<"Enter Elements\n";
   for(i=0;i<n;i++)
   cin>>ar[i];

cout<<"Enter the Value to be searched\n";
cin>>key;

      for(i=0;i<n;i++)
      {
      c++;
      if(key==ar[i])
        {
            cout<<"Element Found after "<<c<<"comparision\n";
               delete[] ar;
          break;
         }
       }

cout<<"Element Not Found \nTotal Comparison "<<c<<endl;
delete[] ar;

}while(n);

} 

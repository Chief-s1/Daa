//Two Sum Problem

#include<iostream>

using namespace std;

int main(void){
cout<<"Enter The Size Of Array\n";
int n,*arr;
cin>>n;

arr=new int[n];

int i,j;
cout<<"Enter The Elements\n";
 for(i=0;i<n;++i){
  cin>>arr[i];
 }

int key;
cout<<"Enter Key To Be Searched\n";
cin>>key;

for(i=0;i<n;i++){
    for(j=0;j<n;++j)
      {
      if(arr[i]+arr[j]==key)
      cout<<arr[i]<<"+"<<arr[j]<<endl;
      }     
  }

}

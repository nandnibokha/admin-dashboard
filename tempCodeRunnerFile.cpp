#include<iostream>
using namespace std;
int main()
{
   int a[100];
   int i,n;

   cout<<"Enter the size of array: ";
   cin>>n;

   for(i=0; i<n; i++)
   { 
      cin>>a[i];
   }
   for(i=0; i<n; i++)
   {
      if(a[i]%2==1)
      {
         cout<<a[i]<<" ";
      }
   }
   cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,maxi1=INT_MIN,maxi2=INT_MIN,a[n];
 cout<<" Enter number of elements to be inserted into the array";
 cin>>n;
 cout<<"Enter the elements into the array";
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
 	if(a[i]>maxi1)
 	{
 		maxi2=maxi1;
 		maxi1=a[i];
	 }
	 else if(maxi2<a[i]&&a[i]!=maxi1)
	 {
	 	maxi2=a[i];
	 	cout<<"the second largest element in the array is "<<maxi2;
	 }
	 

	 }
	 

	 	
 
 return 0;
}

#include<iostream.h>
#include<iomanip.h>
#include<conio.h
using namespace std;

int main(){
int n, a[100],i;

cout<<"Enter the size of array:";
cin>>n;
cout<<"Enter the array elements: ";
for(i=0; i<n; i++)
cin>>arr[i];

int small = a[0];
int secsmall = a[0];

for(i=0; i<n; i++)
{
if(a[i]<small)
	small = a[i];
else if(a[i]<secsmall)
	secsmall = a[i];
}

cout<<"The smallest element is: "<<small<<endl;
cout<<"The second smallest element is :"<<secsmall<<endl;

getch();
return 0;
}

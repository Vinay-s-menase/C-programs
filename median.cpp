#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

int main(){
int a[100], n, i, m, j;
double med = 0.0;

cout<<"Enter the no of elements: ";
cin>>n;

cout<<"Enter the array elements: ";
for(i=0; i<n; i++)
	cin>>a[i];

for(i=0; i<n; i++){
m = i;

if(m == 0)
	med = a[m];
else if(m % 2!= 0)
	med = (double)a[m/2];
else
	med = (double)(a[(m-1)/2] + a[m/2]) / 2.0;
cout<<"After reading "<<m<<" element of stream ";
for(j=0; j<=m; j++)
	cout<<a[j]<<" ";
cout<<"Median -"<<med<<endl;
}
getch();
return 0;
}

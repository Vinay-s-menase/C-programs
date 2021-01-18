#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

void repeat(int ar[], int n){
	int i;
	cout<<"The repeated elements are: "<<endl;
	for(i = 0; i < n; i++){
		if(ar[abs(ar[i])] >= 0)
			ar[abs(ar[i])] = -ar[abs(ar[i])];
		else
			cout<<ar[abs(ar[i])]<<" ";

	}
}
void main()
{
	int ar, n, i;
	cout<<"Enter array elements: ";
	for(i=0; i<15; i++){
		cin>>ar[i];
	}

	n = sizeof(ar) / sizeof(ar[0]);

	repeat(ar, n);
	getch();
}
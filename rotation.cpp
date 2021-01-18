#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

void rotebyone(int ar[], int n){
	int temp = ar[0], i;
	for(i = 0; i < n-1; i++)
		ar[i] = ar[i+1];
	ar[i] = temp;
}

void rotate(int ar[], int d, int n){
	for (int i = 0; i < d; ++i)
	{
		rotebyone(ar, n);
	}
}

void main()
{
	int ar, n, i, d=2;
	cout<<"Enter array elements: ";
	for(i=0; i<15; i++){
		cin>>ar[i];
	}

	n = sizeof(ar) / sizeof(ar[0]);
	rotate(ar, 2, n);
	cout<<"Output array ";
	for(i=0; i<n; i++)
		cout<<ar[i]<<" ";

	getch();
}
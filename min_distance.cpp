#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

int mind(int ar[], int n, int a, int b){
	int i, j;
	int min = 1000;

	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if((a == ar[i] && b == ar[j] ||
				b == ar[i] && a == ar[j]) && min > abs(i-j)){
				min = abs(i-j);
			}
		}
	}
	return min;
}
void main()
{
	int ar, n, i, x, y;
	cout<<"Enter array elements: ";
	for(i=0; i<15; i++){
		cin>>ar[i];
	}

	n = sizeof(ar) / sizeof(ar[0]);
	cout<<"Enter first number: ";
	cin>>x;

	cout<<"Enter second number: ";
	cin>>y;

	cout<<"Minimum distance between "<<x<<" and "<<y<<" is "<<mind(ar, n, x, y)<<endl;

	getch();
}
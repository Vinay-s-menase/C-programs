#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

void minSumPair(int ar[], int n){
	int icount = 0;
	int l, r, min, sum, minl, minr;

	if(n < 2){
		cout<<"Invalid Input";
		return;
	}

	minl = 0;
	minr = 1;
	min = ar[0] + ar[1];

	for(l = 0; l < n; l++){
		for(r = 0; r < n; r++) {
			sum = ar[l] + ar[r];
			if(abs(min) > abs(sum)){
				min = sum;
				minl = l;
				minr = r;
			}
		}
	}
	cout<< "Two elements whose sum is closest to zero are: "<<ar[minl]<<ar[minr];
}

void main()
{
	int ar[100], n, i;
	cout<<"Enter array elements: ";
	for(i=0; i<15; i++){
		cin>>ar[i];
	}

	n = sizeof(ar) / sizeof(ar[0]);
	minSumPair(ar, n);

	getch();
}
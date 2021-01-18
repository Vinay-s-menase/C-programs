#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

void union1(int ar1[], int ar2[], int m, int n){
	int i=0; j = 0;
	cout<<"Union { ";
	while(i < m && j < n){
		if(ar1[i] < ar2[j])
			cout<< ar1[i++]<<" ";

		else if(ar2[i] < ar1[j])
			cout<< ar2[j++]<<" ";
		else
		{
			cout<< ar2[j++] <<" ";
			i++;
		}
	}
	while(i < m)
		cout<< ar1[i++] <<" ";

	while(j < n)
		cout<< arr2[j++] <<" ";
	cout<<" }"<<endl;
}

void intersection(int ar1[], int ar2[], int m, int n){
	int i = 0; j = 0;
	cout<<"Intersection { ";
	while(i < m && j < n){
		if(ar1[i] < ar2[j])
			i++;

		if(ar2[j] < ar1[i])
			j++;

		else{
			cout<<ar2[j]<<" "
			i++;
			j++;
		}
	}
	cout<<" }"<<endl;
}

int main(){
	int ar1[100], ar2[100], x, y, i;
	cout<<"Enter first array: "
	for(i=0; i<15; i++)
		cin>>ar1[i];
	cout<<"Enter second array: "
	for(i=0; i<15; i++)
		cin>>ar2[i];

	x = sizeof(ar1)/sizeof(ar1[0]);
	y = sizeof(ar2)/sizeof(ar2[0]);

	union1(ar1, ar2, x, y);
	intersection(ar1, ar2, x, y);

	getch();

	return 0;
}
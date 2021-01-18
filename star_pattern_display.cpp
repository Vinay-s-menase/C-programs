#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
using namespace std;

int main()
{
	int i, j, num;
	cout<<"Enter the number: ";
	cin>>num;

	for(i=1; i<=num; i++){
		for(j=i; j<=i; j++){
			cout<<"*";
		}
		for(j=i; j<=i; j++){
			cout<<" ";
		}
		for(j=i; j<=i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}

	for(i=1; i<=num; i++){
		for(j=i; j<=num; j++){
			cout<<"*";
		}
		for(j=i; j<=num; j++){
			cout<<" ";
		}
		for(j=i; j<=num; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
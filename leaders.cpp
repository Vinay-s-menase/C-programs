using namespace std;
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include <vector>


int main()
{
vector<int> arr;
int a[100], n, i, j, m;
int flag=0;

cout<<"Enter the no of elements: ";
cin>>n;

cout<<"Enter array elements: "
for (i = 0; i < n; i++)
{
	cin>>a[i];
}

for(i = 0; i < n; i++){
	for(j = i + 1; j < n; j++){
		if(a[j]>a[i]){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		arr.push_back(a[i]);
	}
}
arr.push_back(a[n-1]);
cout<<"Leaders are :";
for(i = 0; i < sizeof(arr); i++)
	cout<<arr[i]<<", ";
getch();
return 0;
}
}

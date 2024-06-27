#include<iostream>
using namespace std;
main()
{
	int arr[5]={2,4,6,5,8};
	int temp=0;
	int arr_lenght,i,j;
	cout<<"Enter the value of array element == ";
	cin>>arr_lenght;
	for(i=0;i<arr_lenght;i++)
	{
		cout<<"Enter the element  === ";
		cin>>arr[i];
	}
	for(j=i+1;j<arr_lenght;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=arr[i];
		}
		cout<<"Short in decenfing == ";
	}
	for(i=0;i<arr_lenght;i++)
	{
		cout<<" decending ==== "<<arr[i];
	}
		
}

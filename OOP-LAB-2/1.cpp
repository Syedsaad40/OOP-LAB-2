#include<iostream>
#include<string>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter the number of elements needed in the array:";
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int *ptr=arr;
	for(int i=0;i<num;i++){
		sum+=ptr[i];
	}
	cout<<"The sum of the elements in the array is:"<<sum<<endl;
	return 0;
}
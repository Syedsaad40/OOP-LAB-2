#include<iostream>
using namespace std;

void* add(void* a){
	int* ab=(int*)a;
	return a;
}
int main(){
	int arr[5]={1,2,3,4,5};
	int *ptr=(int*)add((void*)&arr);
	for(int i=0;i<5;i++){
		cout<<ptr[i]+2<<" ";
	}
		return 0;   
}
	
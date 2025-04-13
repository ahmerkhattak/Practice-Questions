#include<iostream>
using namespace std;

int maxele(int arr[],int s){
	int max = arr[0];
	for(int i=1; i<s;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}	
	return max;
}

int main(){
	int arr[]= {12,15,19,48,62,51,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<maxele(arr,n);
	return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string a ;
	cout<<"Enter a string: ";
	cin>>a;
	int n = a.length();
	for(int i=n;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}

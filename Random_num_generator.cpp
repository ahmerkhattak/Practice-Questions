#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int num = rand() % 100;
	cout<<num<<endl;
	if(num>50){
		cout<<"Too high";
	}
	else
	cout<<"Too low";
	
	return 0;
}

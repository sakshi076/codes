#include<iostream>
using namespace std;
int main(){
	int n1=15;
	int n2=20;
	int gcd=1;
	
	for(int i=1;i<n1 || i<n2;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	
	cout<<"gcd is "<<gcd;
}

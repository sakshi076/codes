#include<iostream>
using namespace std;
bool fibo(int n){
	if(n==0 || n==1){
		return true;
	}
	int a=0,b=1,c;
	while(true){
		c=a+b;
		a=b;
		b=c;
		
		if(c==n){
			return true;
		}
		else if(c>=n){
			return false;
		}
		
	}
}
int main(){
	int n=5;
	if (fibo(n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}

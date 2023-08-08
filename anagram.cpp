#include<iostream>
using namespace std;

bool ana(string s, string s1, int n, int n1){
	
	if(n!=n1){
		return false;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(s[j]>s[j+1]){
				int temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			
			if(s1[j]>s1[j+1]){
				int temp1=s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=temp1;
			}	
		}
	}
	
	if(s!=s1){
		return false;
	}
	
 return true;
}
int main(){
	string s="silent";
	string s1="listen";
	int n=s.length();
	int n1=s1.length();
	
	int result=ana(s,s1,n,n1);
	
	if(result){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
	
	
	
	
}

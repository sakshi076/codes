#include<iostream>
using namespace std;
int main(){
	string s="programming";
	int n=s.length();
	int flag=0;
		for(int i=0;i<n;i++){
		
		for(int j=i+1;j<n;j++)
		{
			if(s[i]!=s[j])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}	
		}
		if(flag==1){
			cout<<s[i];
			break;
		}
		else{
			cout<<"-1";
			break;
		}	
	}
	
	
}

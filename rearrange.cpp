#include<iostream>
using namespace std;
int main(){
	int arr[]={0,0,0,-1,-2,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp[n];
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			
		  temp[j++]=arr[i];	
		}
	
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			
		  temp[j++]=arr[i];	
		}
	
	}
	
	
	for(int i=0;i<n;i++){
		cout<<temp[i]<<" ";
	}
}

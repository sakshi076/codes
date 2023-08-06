#include<iostream>
using namespace std;
int main(){
	int arr[]={-5, -10, -2, -20, -1, -15};
	int n= sizeof(arr)/sizeof(arr[0]);
	int s=999;
	int l=-999;
	
	for(int i=0;i<n;i++){
		if(arr[i]>l){
			l=arr[i];
		}
		
		if(arr[i]<s){
			s=arr[i];
		}
	}
	
	cout<<"smallest number is "<<s<<endl;
	cout<<"largest number is "<<l<<endl;
}

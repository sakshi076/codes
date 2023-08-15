#include<iostream>
using namespace std;
int main(){
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=7;
	
	for(int i=0;i<n/2;i++){
		for(int j=1;j<n;j++){
			if(arr[i]+arr[j]==target){
				cout<<arr[i]<<","<<arr[j]<<endl;
			}
		}
	}
	
	//return {};
	
}

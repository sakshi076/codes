#include<iostream>
using namespace std;
int main(){
	int arr[]={2,5,1,3,4};
	int k;
	cout<<"enter the largest place you want"<<endl;
	cin>>k;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
		cout<<"The "<<k<<" largest element is "<<arr[k-1];
	
}

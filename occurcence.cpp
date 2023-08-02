#include<iostream>
using namespace std;
int main(){
	int arr[6]={1,3,5,5,7,9};
	int search;
	cout<<"enter the element to search in array"<<endl;
	cin>>search;
	int count=0;
	for(int i=0;i<6;i++){
		if(arr[i]==search){
			count++;
		}
	}
	
	cout<<count;
	
	
}

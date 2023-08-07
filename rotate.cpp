#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	int k=2;
	int res[n];
    for(int j=0;j<n;j++){
    	res[j]=arr[j];
	}
	for(int i=0;i<n;i++){
		res[i]=arr[(i+k)%n];
			
	}
	
	for(int i=0;i<n;i++){
		cout<<res[i];
	}
}

#include<iostream>
using namespace std;
int main(){
	int arr[]={4,5,2,25};
   cout<<"["; 
 for(int j=0;j<4;j++)
 { 
 	int flag=0;
 	
	for(int i=j+1;i<4;i++){
		if(arr[j]<arr[i]){
			
			cout<<arr[i]<<" ";
			flag=1;
			break;
		}
		
	}
	if(flag!=1){
  			cout<<"-1";
  	}
  	
	
}
cout<<"]";
  
	
}

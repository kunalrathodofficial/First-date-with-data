#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	int low=0;
	int high=n;
	
	while(high>=low){
		int mid=(high+low)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			high=mid-1;
		}
		else {
			low=mid+1;
		}
		
	}
	
	return -1;
}
int main(){
	int n,key,index;
	cout<<"Enter the number of elements in array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the number you want to search :";
	cin>>key;
	
	cout<<"The index of the element "<<key<<" is "<<binarysearch(arr,n,key)<<endl;
	
    
	return 0;
}

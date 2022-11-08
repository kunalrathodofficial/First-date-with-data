#include<iostream>
using namespace std;
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
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			index=i;
		}
	}
	cout<<"The index of the element "<<key<<" is"<<index<<endl;
	
	return 0;
	
}

#include <iostream>
using namespace std;

void func(int ind,int arr[6],int num){
	for(int i=6; i>ind;i=i-1){
	 arr[i]=arr[i-1];
	 }

	arr[ind]=num;

	for(int i=0;i<=6;i++){
	 cout << arr[i]<<"\n";
	 }
	return;
}

int main(){
	int num,index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter the index:";
	cin>>index;
	int arr[6]={1,2,3,4,5,6};
    func(index,arr,num);


	return 0;

}
#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int arr[10];
	for(int i=0;i<10;i++)
		arr[i]=i;
	int arr2[10];
	for(int i=0;i<10;i++)
		arr2[i]=arr[i];
	for(int i=0;i<10;i++)
		cout<<arr2[i]<<' ';
	cout<<endl;

	vector<int>vi(10);
	for(int i=0;i<10;i++){
		vi[i]=arr[i];
		cout<<vi[i]<<' ';
	}
	cout<<endl;
	return 0;
}

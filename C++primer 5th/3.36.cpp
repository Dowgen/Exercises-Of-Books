#include<iostream>
#include<vector>
using namespace std;
int main(void){
	/* 数组版本
	int arr[5]={1,2,3,4,5};
	int arr2[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(arr[i]!=arr2[i]){
			cout<<"这两个数组不等"<<endl;
			return 0;
		}
	}
	cout<<"这两个数组相等"<<endl;
	*/
	//vector版本
	vector<int>vi{1,2,3,4,5};
	vector<int>vi2{1,2,3,4,0};
	for(int i=0;i<5;i++){
		if(vi[i]!=vi2[i]){
			cout<<"这两个vector容器不等"<<endl;
			return 0;
		}
	}
	cout<<"这两个vector容器相等"<<endl;
	return 0;
}

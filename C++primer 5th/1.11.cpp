#include<iostream>
using namespace std;
int main(void){
	int i=0,j=0;
	cout<<"请输入两个整数:"<<endl;
	cin>>i>>j;
	if(i>j){
		for(;j<=i;j++){
			cout<<j<<endl;
		}
	}else if(i<j){
		for(;i<=j;i++){
			cout<<i<<endl;
		}
	}else if(i=j)
		cout<<i<<endl;
	return 0;
}

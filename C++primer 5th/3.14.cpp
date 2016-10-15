#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>v;
	int num=0;
	for(int i=0;i<=5;i++){
		cin>>num;
		v.push_back(num);
	}
//	for(int i=0;i<5;i++){
	for(auto c:v){
		cout<<c;
	}
	cout<<endl;
	return 0;
	
}

#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<string>s;
	string str;
	for(int i=0;i<=5;i++){
		cin>>str;
		s.push_back(str);
	}
//	for(int i=0;i<5;i++){
	for(auto c:s){
		cout<<c<<' ';
	}
	cout<<endl;
	return 0;
	
}

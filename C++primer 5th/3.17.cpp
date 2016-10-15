#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main(void){
	vector<string>s;
	string str;
	for(int i=0;i<=5;i++){
		cin>>str;
		s.push_back(str);
	}
//	for(int i=0;i<5;i++){
	for(auto str:s){
		for(auto c:str){
		c=toupper(c);
		cout<<c;
		}
	cout<<endl;
	}
	return 0;
	
}

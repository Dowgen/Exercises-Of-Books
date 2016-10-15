#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>v1;
	cout<<"v1:"<<v1.size()<<endl;
	for(auto it=v1.begin();it!=v1.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<int>v2(10);
	cout<<"v2:"<<v2.size()<<endl;
	for(auto it=v2.begin();it!=v2.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<int>v3(10,42);
	cout<<"v3:"<<v3.size()<<endl;
	for(auto it=v3.begin();it!=v3.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<int>v4{10};
	cout<<"v4:"<<v4.size()<<endl;
	for(auto it=v4.begin();it!=v4.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<int>v5{10,42};
	cout<<"v5:"<<v5.size()<<endl;
	for(auto it=v5.begin();it!=v5.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<string>v6{10};
	cout<<"v6:"<<v6.size()<<endl;
	for(auto it=v6.begin();it!=v6.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	vector<string>v7{10,"hi"};
	cout<<"v7:"<<v7.size()<<endl;
	for(auto it=v7.begin();it!=v7.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
	return 0;
}

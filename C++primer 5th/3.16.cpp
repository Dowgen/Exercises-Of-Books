#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>v1;
	cout<<"v1:"<<v1.size()<<endl;
	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<endl;
	}
	cout<<endl;

	vector<int>v2(10);
	cout<<"v2:"<<v2.size()<<endl;
	for(int i=0;i<v2.size();i++){
		cout<<v2[i]<<',';
	}
	cout<<endl;

	vector<int>v3(10,42);
	cout<<"v3:"<<v3.size()<<endl;
	for(int i=0;i<v3.size();i++){
		cout<<v3[i]<<',';
	}
	cout<<endl;
	vector<int>v4{10};
	cout<<"v4:"<<v4.size()<<endl;
	for(int i=0;i<v4.size();i++){
		cout<<v4[i]<<',';
	}
	cout<<endl;
	vector<int>v5{10,42};
	cout<<"v5:"<<v5.size()<<endl;
	for(int i=0;i<v5.size();i++){
		cout<<v5[i]<<',';
	}
	cout<<endl;
	vector<string>v6{10};
	cout<<"v6:"<<v6.size()<<endl;
	for(int i=0;i<v6.size();i++){
		cout<<v6[i]<<',';
	}
	cout<<endl;
	vector<string>v7{10,"hi"};
	cout<<"v7:"<<v7.size()<<endl;
	for(int i=0;i<v7.size();i++){
		cout<<v7[i]<<',';
	}
	cout<<endl;
	return 0;
}

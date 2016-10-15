#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>vi;
	int num=0;
	while(cin>>num){
		vi.push_back(num);
	}
	int size=vi.size();
	int size1=size;
	for(int i=0;i<size/2;i++){
		--size1;
		cout<<vi[i]+vi[size1]<<' ';
	}
	cout<<endl;
	if(size%2){
		cout<<"最后一个元素："<<vi[size-1]<<"落单了"<<endl;
	}
	return 0;
	
}

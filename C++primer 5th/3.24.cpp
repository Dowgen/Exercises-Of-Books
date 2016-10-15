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
	auto first=vi.begin(),last=vi.end()-1;
	for(;first<last;++first,--last){
		cout<<*first+*last<<' ';
	}
	cout<<endl;
	if(size%2){
		cout<<"中间一个元素："<<*first<<"落单了"<<endl;
		cout<<"中间一个元素："<<*last<<"落单了"<<endl;
	}
	return 0;
	
}

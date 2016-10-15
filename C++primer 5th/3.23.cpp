#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>vi{1,2,3,4,5,6,7,8,9,10};
	for(vector<int>::iterator it=vi.begin();it!=vi.end();++it){
		*it=*it*2;
	}
	for(int i=0;i<vi.size();i++){
		cout<<vi[i]<<' ';
	}
	cout<<endl;
	return 0;
}

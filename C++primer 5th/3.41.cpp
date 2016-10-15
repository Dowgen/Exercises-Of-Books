#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int arr[]={1,2,3,4,5};
	vector<int>vi(begin(arr),end(arr));
	for(auto i:vi)
		cout<<i<<endl;

	return 0;
}

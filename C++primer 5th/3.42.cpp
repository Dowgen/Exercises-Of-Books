#include<iostream>
#include<vector>
using namespace std;
int main(void){
	vector<int>vi{11,22,33,44,55};
	int arr[5]={0};
	for(int i=0;i<vi.size();i++){
		arr[i]=vi[i];
		cout<<arr[i]<<endl;
	}

	return 0;
}

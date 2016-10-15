#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vi={1,2,3,4,5,6,7,8,9};
	for(auto i:vi){
		int num=i;
		cout<<((num%2==1) ? num*2 :num)<<endl;
	}
}

#include<iostream>
using namespace std;
int main(void){
	string s("linxiao bao");
	for(auto& c:s)
		if(isalnum(c))
			c='x';
	cout<<s<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main(void){
	string s;
	cin>>s;
	for(auto c:s){
		if(!ispunct(c))
			cout<<c;
	}
		cout<<endl;
	return 0;
}

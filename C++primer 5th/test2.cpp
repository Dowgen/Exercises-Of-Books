#include<iostream>
using namespace std;
int main(void){
	string str("some string");
	for(auto& c:str)
		c=toupper(c);
		cout<<str<<endl;
	return 0;
}

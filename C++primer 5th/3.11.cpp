#include<iostream>
#include<typeinfo>
using namespace std;
int main(void){
	const string s="Keep out!";
	for(auto &c:s)
		c='x';//错误，这是常引用`
	return 0;
}

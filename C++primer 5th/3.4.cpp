#include<iostream>
using namespace std;
int main(void){
	string s1="saaasdfasdfsadfsadfasdfnm,nxcvokjwerfnwemkagnfm.,nm,123nl;kjdnsmnvxc,.vndsakljf;23ljkrsdfsdafasdfsadfsdafasdfsaasdfasddflkjlkj";
	string s2="z";
	cout<<(s1<=s2?s2:s1)<<endl;
	int is1=s1.size();
	int is2=s2.size();
	cout<<(is1<=is2?is2:is1)<<endl;
	return 0;
}

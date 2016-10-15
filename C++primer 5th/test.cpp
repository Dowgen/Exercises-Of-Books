#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	string word;
//	while(cin>>word)
//	while(getline(cin,word))
	//	if(word.size()>10)
	//	if(!word.empty())
	//	cout<<word<<endl;
	auto len=word.size();
	cout<<typeid(len).name()<<endl;
	return 0;
}

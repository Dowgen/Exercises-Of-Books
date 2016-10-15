#include<iostream>
using namespace std;
int main(void){
	string s("linxiao bao");
	cout<<s.size()<<endl;
	
//	for(int num=0;num<s.size();num++)
	int num=0;
	while(num<s.size()){
		if(s[num]!=' ')
			s[num]='x';
		num++;
	}
	cout<<s<<endl;
	return 0;
}

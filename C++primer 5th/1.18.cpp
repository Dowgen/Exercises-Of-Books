#include<iostream>
using namespace std;
int main(void){
	int curval=0,val=0;
	if(cin>>curval){
		int cnt=1;
		while(cin>>val){
			if(curval==val){
				++cnt;
			}else{
				cout<<curval<<"出现了"<<cnt<<"次"<<endl;
				cnt=1;
				curval=val;
			}
		}
		cout<<curval<<"出现了"<<cnt<<"次"<<endl;
	}
	return 0;
}

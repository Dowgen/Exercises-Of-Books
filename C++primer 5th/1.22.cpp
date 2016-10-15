#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(void){
	Sales_item trans1,trans2;
	cout<<"输入多个交易信息"<<endl;
	if(cin>>trans1){
		while(cin>>trans2)
			if(trans1.same_isbn(trans2))
				trans1+=trans2;
			else{
				cout<<"滚吧"<<endl;
				break;
			}
			cout<<"此ISBN的信息:"<<endl;
			cout<<"ISBN,已售本数，总销售额，平均价格是:"
			<<endl<<trans1<<endl;
	}else{
		cout<<"没信息"<<endl;
		return -1;
	}
	return 0;
}

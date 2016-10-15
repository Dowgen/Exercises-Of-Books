#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(void){
	Sales_item trans1,trans2;
	cout<<"输入两个交易信息"<<endl;
	cin>>trans1>>trans2;
	if(trans1.same_isbn(trans2)){
		cout<<"总信息:"<<endl;
		cout<<"ISBN,已售本数，总销售额，平均价格是:"
			<<endl<<trans1+trans2<<endl;
	}else
		cout<<"这两个交易信息ISBN不同"<<endl;
	return 0;
}

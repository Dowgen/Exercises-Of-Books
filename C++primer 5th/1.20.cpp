#include<iostream>
#include"Sales_item.h"
using namespace std;
int main(void){
	Sales_item book;
	cout<<"输入ISBN，已售本数，销售价格"<<endl;
	while(cin>>book){
		cout<<"ISBN,已售本数，总收入，平均价格是："<<endl;
		cout<<book<<endl;
	}
	return 0;
}

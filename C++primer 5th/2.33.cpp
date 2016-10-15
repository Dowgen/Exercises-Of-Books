#include<iostream>
using namespace std;
int main(void){
	int i=0,&r=i;
	auto a=r;
	const int ci=i,&cr=ci;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	const auto f=ci;
	auto &g=ci;//引用的话，初始值(ci)的常属性仍然保留,所以auto是一个常引用
	a=42;b=42;c=42;
	//d=42;
	//e=42;
	//g=42;

	return 0;
}

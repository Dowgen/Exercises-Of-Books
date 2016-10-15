#include<iostream>
using namespace std;
int fun(void){

	return 10;
}
int main(void){
	unsigned buf=1024;
	int ia[buf];
	int ib[4*7-14];
	int ic[fun()];
//	int id[11]="fundamental";

	return 0;
}

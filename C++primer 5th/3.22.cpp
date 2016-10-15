#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
	vector<string> vs;
	string str;
	//读 入 文 本 到 vector对 象
	cout << "Enter text(Ctrl+D to end):" << endl;
	while (cin>>str)
		vs.push_back(str);
	//将 vector对 象 中 每 个 单 词 转 化 为 大 写 字 母 ,并 输 出
	if (vs.size() == 0) {
		cout << "没有字符串?!" << endl;
		return -1;
	}
	cout << "开始转换:"<< endl;
	for(vector<string>::iterator it=vs.begin();it!=vs.end();++it){
		for(int i=0;i<it->size();++i){
			(*it)[i]=toupper((*it)[i]);
		}
		cout<<*it<<endl;
	}
	return 0;
}

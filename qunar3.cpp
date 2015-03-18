/////////////////////////////////////////////
选取文本行中，带有you的行输出
////////////////////////////////////////////
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream in("1.txt");
	for(string s;getline(in,s);){
		string::size_type position;
		position=s.find("you");
		if(position==string::npos) continue;
		cout<<s<<endl;
	}
	cout<<s;
	return 0;
}
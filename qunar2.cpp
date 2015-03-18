////////////////////////////////////////////////////
找出一个字符串中首先出现两次的字符输出
////////////////////////////////////////////////////
#include<iostream>
#include<string>
using namespace std;
char zifu(string target);
int main(){
/*	char a[10]="Hello";
	char* str="Hello";
	cout<<*str<<endl;
	cout<<str<<endl;
	cout<<a<<endl;*/
	string target1;//vc 6.0bug   target1.at(1)
	getline(cin,target1);
	//cout<<target1<<endl<<target1.size()<<endl<<target1.at(1)<<endl<<target1[1]<<endl;
	cout<<zifu(target1)<<endl;
}
char zifu(string target){
	string::size_type position;
	int m=0;
	while(m<target.size()){
	position=target.find(target[m],m+1);
	if (position!=string::npos) return target[m];
	m=m+1;
	}
}


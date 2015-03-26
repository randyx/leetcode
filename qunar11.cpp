#include <iostream>
using namespace std;
int findx(int m[],int x);
int main(){
	int m[7]={19,33,1,5,7,9,15};
	int target;
	cout<<"please input a number\n";
	cin>>target;
	cout<<"index is "<<findx(m,target)<<endl;
	//cout<<sizeof(m)/sizeof(m[0]); 返回7 
 	//cout<<sizeof(m)/1;            返回28
}
int findx(int m[],int x){
	int index=0;
	if(x==m[index]) return 0;
	else if(x<m[index]){
		index=6;
		//cout << sizeof(m)/sizeof(m[0]); 这里是1 因为传递的是一个地址  4/4=1
		while(m[index]>=x){
			if(m[index]==x) 
				return index;
			index--;
		}
	}
	else{
		index=1;
		while(m[index]<=x){
			if(m[index]==x) 
				return index;
			index++;
		}
	}
	return -1;
}

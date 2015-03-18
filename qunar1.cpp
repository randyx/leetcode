#include<iostream>
using namespace std;
int binary_search(int L[10],int key);
void main(){
	int L1[10]={1,3,4,6,8,9,11,15,21,56};
	int key1;
	cin>>key1;
	//int index=binary_search(L1,key1);
	cout<<"index is"<<binary_search(L1,key1);
}
int binary_search(int L[10],int key){
	int low=0;
	//int m=(sizeof(L)/sizeof(L[0]));
	//cout << m;
	int high=9;
	int between; 
	while(low<=high){
		between=(high+low)/2;
		if(key==L[between])return between;
		else if(key<L[between]) high=between-1;
		else low=between+1;
	}
	return -1;
}

#include<iostream>
using namespace std;
int main(){
	char name[50];
	fgets(name,sizeof(name),stdin);// hàm nhập chuỗi không bị bỏ qua dấu space
	cout << "Hello" << " " << name;
	return 0;
	
}
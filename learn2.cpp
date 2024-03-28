#include<iostream>
using namespace std;
int main(){
	char name[50];
	char Address[50];
	fgets(name,sizeof(name),stdin);
	fgets(Address,sizeof(Address),stdin);
	cout << "Name : " << name;
	cout << "Address : "<< Address;
	return 0;
}
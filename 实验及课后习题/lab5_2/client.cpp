#include"client.h"
#include<iostream>
using namespace std;

void Client::ChangeServerName(char S){
	ServerName=S;
	cout<<"change ServerName to:"<<S<<endl;
}
void Client::showName(){
	cout<<"Servername:"<<ServerName<<endl;
}
void Client::showNum(){
	cout<<"The number is:"<<ClientNum<<endl;
}
#include"client.h"
#include<iostream>
using namespace std;

int Client::ClientNum=0;
char Client::ServerName='A';
int main(){
	Client::showName();
	Client::showNum();
	Client c1;
	Client c2;
	c1.ChangeServerName('C');
	Client::showName();
	Client::showNum();
	c2.showName();
	return 0;
}
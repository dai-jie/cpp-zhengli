#ifndef _CLIENT_H_
#define _CLIENT_H_
class Client{
	static char ServerName;
	static int ClientNum;
public:
	Client(){ClientNum++;}
	~Client(){ClientNum--;}
	static void ChangeServerName(char S);
	static void showName();
	static void showNum();
};
#endif
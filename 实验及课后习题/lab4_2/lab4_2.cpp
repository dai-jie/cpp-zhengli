#include<iostream>
using namespace std;

enum CPU_RANK{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
	void run(){cout<<"run\n";}
	void stop(){cout<<"stop\n";}
	CPU(CPU_RANK r,int f,float v){
		rank=r;
		frequency=f;
		voltage=v;
		cout<<"create success!\n";
	}
	~CPU(){cout<<"delete success!\n";}
	CPU_RANK GetRank() const{ return rank;}
	int GetFrequency() const{return frequency;}
	float GetVoltage() const{return voltage;}
	void SetRank(CPU_RANK r){ rank=r;}
	void SetFrequency(int f){ frequency=f;}
	void SetVoltage(float v){ voltage=v;}
private:
	CPU_RANK rank;
	int frequency;
	float voltage;
};
class RAM{
public:
	RAM(int c,int f){
		capacity=c;
		frequency=f;
		cout<<"�ɹ�����һ��RAM\n";
	}
	~RAM(){cout<<"�ɹ�����һ��RAM\n";}
	void run(){cout<<"ram���гɹ�\n";}
	void stop(){cout<<"ramֹͣ����\n";}
private:
	int capacity;
	int frequency;
};
class CDROM{
public:
	CDROM(int r,int w){
		read_speed=r;
		write_speed=w;
		cout<<"�ɹ�����һ��CDROM\n";
	}
	~CDROM(){
		cout<<"�ɹ�����һ��CDROM\n";}

private:
	int read_speed;
	int write_speed;
};
class Computer{
public:
	Computer(CPU_RANK r,int fcpu,float v,int c,int fram,int rs,int ws)
		:cpu(r,fcpu,v),ram(c,fram),cdrom(rs,ws){
			cout<<"�ɹ�����һ������\n";
	}
	~Computer(){cout<<"�ɹ�����һ������\n";}
	void runcpu(){
		cpu.run();
	}
private:
	CDROM cdrom;
	CPU cpu;
	RAM ram;
};
int main(){
	Computer c(P6,300,1.5,1800,200,100,50);
	c.runcpu();
}
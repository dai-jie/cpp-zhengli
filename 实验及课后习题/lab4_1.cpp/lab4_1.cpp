#include<iostream>
using namespace std;

enum CPU_RANK{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
public:
	void run(){cout<<"run\n";}
	void stop(){cout<<"stop\n";}
	CPU(CPU_RANK r,int f,float v){
		rank=r;
		this->frequency=f;
		voltage=v;
		cout<<"create success!\n";
	}
	CPU(){};
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
int main(){
	CPU a(P6,300,2.8);
	CPU b=a;
	b.run();
	a.run();
	cout<<a.GetFrequency()<<endl;
	a.stop();
}

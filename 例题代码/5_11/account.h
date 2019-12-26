#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
class SavingsAccount{
	int id;
	double balance;
	double rate;
	int lastDate;
	double accumulation;
	static double total;
	void record(int date,double amount);
	double accumulate(int date) const;
public:
	SavingsAccount(int date,int id,double rate);
	int getId() const{return id;}
	double getBalance() const{return balance;}
	double getRate() const{return rate;}
	void show() const;
	void deposit(int date,double amount);
	void withdraw(int date,double amount);
	void settle(int date);
	static double getTotal();
};
#endif
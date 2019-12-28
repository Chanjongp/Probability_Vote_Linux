#pragma once
#ifndef VIP_H
#define VIP_H

#define ROOKIE 0 // votes 1
#define BRONZE 1 //votes 1~2
#define SILVER 2 //votes 2~3
#define GOLD 3 // votes 3~5
#define PLATINUM 4 // votes 4~7
#define DIAMOND 5 // votes 5~8
#define SUPER 6 // for Admin
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class VIP {
	int rank; // rank (Rookie = 0, Bronze = 1, Silver = 2, Gold = 3 Platinum = 4, Diamond = 5)
	string id; // id(including admin)
	int password; // password
	int votenum;
	int money = 0;
public:
	VIP(); // Default = Rookie, votenum = 1
	string getID() { return id; }
	void setID(string id) { this->id = id; }
	void setPassword(int password) { this->password = password; }
	int getPassword() { return password; }
	int getVoteNum() { return votenum; }
	void setVoteNum(int votenum) { this->votenum = votenum; }
	void ChangePassword(); // �н����� ����	0
	void SetMoney(int money) { this->money = money; }
	int GetMoney() { return money; }
	void SetRank(int rank); // ��ũ ����(���׷��̵�� �ʿ�)
	int getRank(); // ��ũ ��������0
	string NumtoString(int n);
	

	//common functions

};
#endif
#pragma once
#ifndef VOTE_H
#define VOTE_H
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "admin.h"
#include "viewer.h"

using namespace std;
typedef struct {
	int ranking = 0;
	string name;
	int age;
	string hometown;
	int nowvote = 0;
} Participant;

class Vote {
	bool statevote = false;
	bool finishvote = false;
public:
	vector<Participant> pa;
	Participant p;
	Vote() {
		ifstream fin;
		fin.open("ParticipationList.txt", ios::in);
		if (!fin) {
			cout << "you failed to open this text";
			return;
		}
	//	 int i = 0;
		while (!fin.eof()) {
			fin >> p.name;
			fin >> p.age;
			fin >> p.hometown;
			pa.push_back(p);

			//cout << pa[i].name << " " << pa[i].age << " " << pa[i].hometown << " " << endl;
			//i++;
		}
		fin.close();
	}

	//Viewer
	void BuyCash(Viewer &viewer);
	void BuyVIP(Viewer &viewer);
	void LoginViewer(Viewer &viewer);
	int GetVoteNumProb(Viewer &viewer);
	void VoteProbability(Viewer &viewer);

	void ViewerStart(Viewer &viewer);
	Viewer Signup();

	//common functions
	void ShowParticipants();
	void VotetoParticipant(VIP &viewer);
	void SeeResult();
	//Admin 
	
	void openVote() {
		if(finishvote == true){
			system("clear");
			cout << "Vote already finished." << endl;
			return;
		}
		statevote = true;
		system("clear");
		cout << "Vote opened. all Viewers can vote now!" << endl;
	} //open vote
	void closeVote() { 
		if(finishvote == true){
			system("clear");
			cout << "Vote already finished." << endl;
			return;
		}
		statevote = false;
		system("clear");
		cout << "Vote closed. all Viewers can't vote from now on!" << endl;
	} // close vote
	bool getVote() { return statevote; } // state of vote
	void FinishVote();
	void DetermineRank();
	void LoginAdmin(Admin &admin);
	void AddParticipant(); 
	void DeleteParticipant();
	void AdminStart(Admin &admin);
	string StateVoteToString();




	void VoteStart(vector<Viewer> &viewer, Admin &admin);
};


#endif

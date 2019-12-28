#include "vip.h"


VIP::VIP() {
	rank = ROOKIE;
	votenum = 1;
	money = 0;
} // ����Ʈ������ ��Ű


void VIP::SetRank(int rank) {
	this->rank = rank;
} // 
int VIP::getRank() {
	return rank;
} // 

void VIP::ChangePassword() {
	system("clear");
	cout << "Please write the password what you want to change";
	cin >> password;
	cout << "Success!" << endl;
}

string VIP::NumtoString(int n) {
	string s;
	switch (n) {
	case 0:
		s = "Rookie";
		break;
	case 1:
		s = "Bronze";
		break;
	case 2:
		s = "Silver";
		break;
	case 3:
		s = "Gold";
		break;
	case 4:
		s = "Platinum";
		break;
	case 5:
		s = "Diamond";
		break;

	case 6:
		s = "Super";
	}
	return s;
}



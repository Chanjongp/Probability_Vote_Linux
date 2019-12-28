#include "admin.h"

using namespace std;
Admin::Admin() {
	SetRank(SUPER);
	setVoteNum(1000);
	setID("Admin");
	setPassword(1111);
}
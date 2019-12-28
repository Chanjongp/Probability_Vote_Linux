#include "viewer.h"
#include "vip.h"
#include "vote.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	Vote vote;
	Admin admin;
	vector<Viewer> viewer;
	vote.VoteStart(viewer, admin);

	return 0;
}

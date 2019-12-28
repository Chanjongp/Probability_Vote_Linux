#include "vote.h"

//viewer functions

void Vote::LoginViewer(Viewer &viewer) {
	string id;
	int password;
	cout << "Write your ID" << endl;
	cin.ignore(256, '\n');
	getline(cin, id);
	cout << "Write your Password" << endl;
	cin >> password;
	if (id == viewer.getID() && password == viewer.getPassword()) {
		system("clear");
		cout << "Success!";
		ViewerStart(viewer);
	}
	else {
		system("clear");
		cout << "you are wrong. check your ID or Password again." << endl << endl;
	}
}

Viewer Vote::Signup() {
	static int membershipnum = 0;
	Viewer v;
	int p;
	string n;
	cout << "Please write your ID (no number, no spacing words)" << endl;
	cin.ignore(256, '\n');
	getline(cin, n);
	v.setID(n);
	cout << "Please write your Password (no character, no spacing words)" << endl;
	cin >> p;
	v.setPassword(p);
	system("clear");
	cout << "Success! Your VIP number is " << membershipnum+1 << endl << endl;
	membershipnum++;
	return v;
}



void Vote::BuyCash(Viewer &viewer) {
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}
	int m;
	system("clear");
	cout << "How much money do you want to buy? Limit : 100000" << endl;
	cin >> m;
	if (m > 100000) {
		system("clear");
		cout << "Please check your limit." << endl << endl;
		return;
	}
	viewer.SetMoney(viewer.GetMoney() + m);
	system("clear");
	cout << "Success! You have " << viewer.GetMoney() << "now" << endl << endl;
}

void Vote :: BuyVIP(Viewer &viewer) {
	int i;
	int j;
	system("clear");
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}
	cout << "Which rank do you want to be?" << endl << endl;
	cout << "1. BRONZE    2. SILVER   3. GOLD   4. PLATINUM   5. DIMOND" << endl;
	cin >> i;
	system("clear");
	switch (i) {
	case BRONZE:
		if (viewer.getRank() >= BRONZE) {
			system("clear");
			cout << "You are already more high rank or same rank with Bronze" << endl << endl;
			break;
		}
		system("clear");
		cout << "You have to pay 5000 money, do you want?" << endl;
		cout << "1. YES		2. NO" << endl;
		cin >> j;
		if (j == 1) {
			if (viewer.GetMoney() < 5000) {
				system("clear");
				cout << "You don't have enough money to pay" << endl << endl;
				break;
			}
			else {
				viewer.SetMoney(viewer.GetMoney() - 5000);
				viewer.SetRank(BRONZE);
				system("clear");
				cout << "Success! The left money is " << viewer.GetMoney() << ". " << endl << endl;
				break;
			}
		}
		else
			system("clear");
			break;
	case SILVER:
		if (viewer.getRank() >= SILVER) {
			system("clear");
			cout << "You are already more high rank or same rank with Silver" << endl << endl;
			break;
		}
		system("clear");
		cout << "You have to pay 15000 money, do you want?" << endl;
		cout << "1. YES		2. NO";
		cin >> j;
		if (j == 1) {
			if (viewer.GetMoney() < 15000) {
				system("clear");
				cout << "You don't have enough money to pay" << endl << endl;
				break;
			}
			else {
				viewer.SetMoney(viewer.GetMoney() - 15000);
				viewer.SetRank(SILVER);
				system("clear");
				cout << "Success! The left money is " << viewer.GetMoney() << ". " << endl << endl;
				break;
			}
		}
		else
			system("clear");
			break;


	case GOLD:
		if (viewer.getRank() >= GOLD) {
			system("clear");
			cout << "You are already more high rank or same rank with Gold" << endl << endl;
			break;
		}
		system("clear");
		cout << "You have to pay 30000 money, do you want?" << endl;
		cout << "1. YES		2. NO" << endl;
		cin >> j;
		if (j == 1) {
			if (viewer.GetMoney() < 30000) {
				system("clear");
				cout << "You don't have enough money to pay" << endl;
				break;
			}
			else {
				viewer.SetMoney(viewer.GetMoney() - 30000);
				viewer.SetRank(GOLD);
				system("clear");
				cout << "Success! The left money is " << viewer.GetMoney() << ". " << endl << endl;
				break;
			}
		}
		else
			system("clear");
			break;
	case PLATINUM:
		if (viewer.getRank() >= PLATINUM) {
			system("clear");
			cout << "You are already more high rank or same rank with Platinum" << endl << endl;
			break;
		}
		system("clear");
		cout << "You have to pay 60000 money, do you want?" << endl;
		cout << "1. YES		2. NO" << endl;
		cin >> j;
		if (j == 1) {
			if (viewer.GetMoney() < 60000) {
				system("clear");
				cout << "You don't have enough money to pay" << endl << endl;
				break;
			}
			else {
				viewer.SetMoney(viewer.GetMoney() - 60000);
				viewer.SetRank(PLATINUM);
				system("clear");
				cout << "Success! The left money is " << viewer.GetMoney() << ". " << endl << endl;
				break;
			}
		}
		else
			system("clear");
			break;
	case DIAMOND:
		if (viewer.getRank() == DIAMOND) {
			system("clear");
			cout << "You are already Dimond" << endl;
			break;
		}
		system("clear");
		cout << "You have to pay 100000 money, do you want?" << endl;
		cout << "1. YES		2. NO" << endl;
		cin >> j;
		if (j == 1) {
			if (viewer.GetMoney() < 100000) {
				system("clear");
				cout << "You don't have enough money to pay" << endl << endl;
				break;
			}
			else {
				viewer.SetMoney(viewer.GetMoney() - 100000);
				viewer.SetRank(DIAMOND);
				system("clear");
				cout << "Success! The left money is " << viewer.GetMoney() << ". " << endl << endl;
				break;
			}
		}
		else
			system("clear");
			break;
	}
}


int Vote::GetVoteNumProb(Viewer &viewer) {
	double r = rand() / (double)RAND_MAX; //{0.0 - 1.0}
	double dr = r * 100.0f; // {0.0 - 100.0}
	double cumulative = 0.0f;
	double pb[3] = { 10.0f, 20.0f, 70.0f }; // 3, 2, 1
	double ps[3] = { 10.0f, 20.0f, 70.0f }; // 5, 4, 3
	double pg[3] = { 20.0f, 20.0f, 60.0f }; // 7, 6, 5
	double pp[3] = { 25.0f, 25.0f, 50.0f }; // 9, 8, 7
	double pd[3] = { 30.0f, 30.0f, 40.0f }; // 11, 10, 9
	int i;
	switch (viewer.getRank()) {
	case ROOKIE:
		system("clear");
		cout << "You can't do this function. Please buy VIP" <<  endl << endl;
		return 1;
	case BRONZE:
		for (i = 1; i <= 3; i++) {
			cumulative += pb[i-1];
			if (dr <= cumulative)
				return 4 - i;
		}
		break;
	case SILVER:
		for (i = 1; i <= 3; i++) {
			cumulative += ps[i-1];
			if (dr <= cumulative)
				return 6 - i;
		}
		break;
	case GOLD:
		for (i = 1; i <= 3; i++) {
			cumulative += pg[i-1];
			if (dr <= cumulative)
				return 8 - i;
		}
		break;
	case PLATINUM:
		for (i = 1; i <= 3; i++) {
			cumulative += pp[i-1];
			if (dr <= cumulative)
				return 10 - i;
		}
		break;
	case DIAMOND:
		for (i = 1; i <= 3; i++) {
			cumulative += pd[i-1];
			if (dr <= cumulative)
				return 12 - i;
		}
		break;
	default:
		system("clear");
		cout << "Error" << endl << endl;
		return 0;
		}
	}



void Vote::VoteProbability(Viewer &viewer) {
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}	
	if (viewer.getVoteNum() > 1 || viewer.getVoteNum() < 1) {
		system("clear");
		cout << "You already did!" << endl << endl ;
		return;
	}
	system("clear");
	cout << "Votes Probaility of  " << viewer.NumtoString(viewer.getRank()) <<  endl;
	int n;
	switch (viewer.getRank()) {
	case BRONZE:
		cout << "Votes			Probability" << endl;
		cout << "1				70%" << endl;
		cout << "2				20%" << endl;
		cout << "3				10%" << endl;
		break;
	case SILVER:
		cout << "Votes			Probability" << endl;
		cout << "3				70%" << endl;
		cout << "4				20%" << endl;
		cout << "5				10%" << endl;
		break;
	case GOLD:
		cout << "Votes			Probability" << endl;
		cout << "5				60%" << endl;
		cout << "6				20%" << endl;
		cout << "7				20%" << endl;
		break;
	case PLATINUM:
		cout << "Votes			Probability" << endl;
		cout << "7				50%" << endl;
		cout << "8				25%" << endl;
		cout << "9				25%" << endl;
		break;
	case DIAMOND:
		cout << "Votes			Probability" << endl;
		cout << "9				40%" << endl;
		cout << "10				30%" << endl;
		cout << "11				30%" << endl;
		break;
	}
	cout << "Do you want to get votes?" << endl << "1.Yes			2. NO   ";
	cin >> n;	
	if (n == 1){
		system("clear");
		cout << "Success!" << endl << endl;
		viewer.setVoteNum(GetVoteNumProb(viewer));	
	}	
	else{
		system("clear");
		return;
		}
}





void Vote ::ViewerStart(Viewer &viewer) {
	int n;
	string name;
	cout << "Hello " << viewer.getID() << "!   " << endl;
	while (1) {
		while (1) {
			cout << "What do you want to do?" << endl;
			string rank = viewer.NumtoString(viewer.getRank());
			cout << "Your rank : " << rank <<"		Your Votes : " << viewer.getVoteNum() << endl;
			cout << "1. BuyCash" << endl;
			cout << "2. BuyVip" << endl; 
			cout << "3. Get Votes from Probability" << endl;
			cout << "4. Vote" << endl;
			cout << "5. See Result" << endl; 
			cout << "6. Change Password" << endl; 
			cout << "7. See Participants" << endl; 
			cout << "8. Exit" << endl; 
			cin >> n;
			
			if (n != 5  && finishvote == true) {
				if (n == 8)
					return;
				else {
					system("clear");
					cout << "The vote finished. All you can do is seeing the result. " << endl;
					break;
				}
			}
			switch (n) {
			case 1:
				BuyCash(viewer);
				break;
			case 2:
				BuyVIP(viewer);
				break;
			case 3:
				VoteProbability(viewer);
				break;
			case 4:
				VotetoParticipant(viewer);
				break;
			case 5:
				if (finishvote == true) {
					SeeResult();
				}
				else
					system("clear");
					cout << "Vote isn't finished." << endl;
				break;
			case 6:
				viewer.ChangePassword();
				break;
			case 7:
				ShowParticipants();
				break;
			case 8:
				system("clear");
				return;
			default:
				cout << "Error! Please Write a number exactly";
			}
		}
	}
}

//common functions

void Vote::ShowParticipants() {
	system("clear");
	cout << "Name\t\t\t\tAge\t\t\t\tHometown\t\t\tVoteNum" << endl;
	for (int i = 0; i < pa.size(); i++) {
		cout << pa[i].name << "\t\t\t\t" << pa[i].age << "\t\t\t\t" << pa[i].hometown << "\t\t\t\t" << pa[i].nowvote << endl;
	}
}

void Vote::VotetoParticipant(VIP &viewer) {
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}
	string name;
	int n;
	if (getVote() == false) {
		system("clear");
		cout << "You can't vote now. Please wait till Admin will open the vote" << endl;
		return;
	}
	if (viewer.getVoteNum() == 0) {
		system("clear");
		cout << "You can't vote. Please wait for result." << endl;
		return;
		}
	system("clear");
	cout << "Write your participant to vote" << endl;
	cin.ignore(256, '\n');
	getline(cin, name);
	vector<Participant>::iterator it;
	for (it = pa.begin(); it < pa.end(); it++) {
		if (it->name == name) {
			break;
		}
	}
	if (it != pa.end()) {
		cout << "How many votes are you going to do? " << endl;
		cin >> n;
		if (viewer.getVoteNum() < n && viewer.getVoteNum() >= 1) {
			system("clear");
			cout << "You have less votes than you want to vote" << endl;
			return;
		}
		it->nowvote += n;
		viewer.setVoteNum(viewer.getVoteNum() - n);
		system("clear");
		cout << "Success!" << endl;
	}
	else {
		system("clear");
		cout << "There's no participant you wrote"<< endl;
		return;
	}
	

}


// admin

void Vote::LoginAdmin(Admin &admin) {
	string id;
	int password;
	cout << "press put in your ID and Password" << endl;
	cin >> id >> password;
	if (id == admin.getID() && password == admin.getPassword()) {
		cout << "Success!";
		AdminStart(admin);
	}
	else {
		system("clear");
		cout << "You are wrong. Please check your ID or Password again." << endl << endl;
	}

}

void Vote :: AddParticipant() {
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}
	Participant p;
	system("clear");
	cout << "Write Participant's information" << endl << "Name : ";
	cin.ignore(256, '\n');
	getline(cin, p.name);
	//cin >> p.name;
	cout << "Age : ";
	cin >> p.age;
	cout << "Hometown : ";
	cin.ignore(256, '\n');
	getline(cin, p.hometown);
	pa.push_back(p);
	system("clear");
	cout << "Success!" << endl;
}


void Vote::DeleteParticipant() {
	if(finishvote == true){
		system("clear");
		cout << "Vote already finished." << endl;
		return;
		}
	string name;
	int n;
	vector<Participant>::iterator it;
	system("clear");
	cout << "Please write the participant's name you want to delete" << endl;
	cin >> name;
	for (it = pa.begin(); it < pa.end(); it++) {
		if (it->name == name) {
			cout << it->name << "  " << it->age << "  " << it->hometown << endl;
			cout << "Do you really want to remove this participant?" << endl << "1. Yes			2. No" << endl;
			cin >> n;
			if (n == 1) {
				pa.erase(it);
				system("clear");
				cout << "Success! "<< endl << endl;
				return;
			} 
		}
	}
	system("clear");
	cout << "There's no participant you wrote" << endl;
	return;
}

string Vote::StateVoteToString() {
	if (getVote() == true) {
		return "Open";
	}
	else
		return "Close";
}
bool compare(const Participant& p1, const Participant& p2) {
	if(p1.nowvote == p2.nowvote){
		return p1.age < p2.age;
	}
	return p1.nowvote > p2.nowvote;
}

void Vote::DetermineRank() {
	for (int i = 0; i < pa.size(); i++) {
		pa[i].ranking = i + 1;
	}
}

void Vote::FinishVote() {
	if(statevote == true)
		closeVote();
	finishvote = true;
	cout << "Vote finished. You can see the result!" << endl;
	sort(pa.begin(), pa.end(), compare);
	DetermineRank();
}

void Vote::SeeResult() {
	system("clear");
	cout << "Ranking						Name						Age						Hometown					VoteNum" << endl;
	for (int i = 0; i < pa.size(); i++) {
		cout << pa[i].ranking << "						"  << pa[i].name << "						" << pa[i].age << "						" << pa[i].hometown << "						" << pa[i].nowvote << endl;
	}
}

void Vote :: AdminStart(Admin &admin) {
	int n;
	string name;
	admin.setVoteNum(1000);
	cout << "Hello, Admin " << admin.getID() << "!   ";
	system("clear");
	while (1) {
		while (1) {
			cout << "What do you want to do?" << endl;
			string rank = admin.NumtoString(admin.getRank());
			cout << "Your rank : " << rank << "		Your Votes : " << admin.getVoteNum() << "			State of Vote : " << StateVoteToString() << endl;
			cout << "1. Open Vote" << endl;
			cout << "2. Close Vote" << endl;
			cout << "3. Add Participant" << endl;
			cout << "4. Delete Participant" << endl;
			cout << "5. Finish Vote" << endl;
			cout << "6. Change Password" << endl;
			cout << "7. Vote" << endl;
			cout << "8. See Participants" << endl;
			cout << "9. See Vote's Result" << endl;
			cout << "10. exit" << endl;
			cout << "11. Shutdown this Program" << endl;
			cin >> n;

			switch (n) {
			case 1:
				openVote();
				break;
			case 2:
				closeVote();
				break;
			case 3:
				AddParticipant();
				break;
			case 4:
				DeleteParticipant();
				break;
			case 5:
				system("clear");
				FinishVote();
				break;
			case 6:
				admin.ChangePassword();
				break;
			case 7:
				VotetoParticipant(admin);
				break;
			case 8:
				ShowParticipants();
				break;
			case 9:
				if (finishvote == true){
					system("clear");
					SeeResult();
				}
				else
					system("clear");
					cout << "Vote isn't finished" << endl;
				break;
			case 10:
				system("clear");
				return;
			case 11:
				exit(1);
			default:
				cout << "Error! Please Write a number exactly" << endl << endl;
			
			}

		}
	}
}









void Vote::VoteStart(vector<Viewer> &viewer, Admin &admin) {
	int n;
	int n1;
	int vipnum = 0;
	while (1) {
		cout << "Are you a Viewer? or Admin?" << endl << "1. Viewer			2. Admin" << endl;
		cin >> n;
		if (n == 1) {
			while (1) {
				system("clear");
				cout << "What do you want to do?" << endl << "1. Login			2. Sign up			3. Go Back" << endl;
				cin >> n1;
				if (n1 == 1) {
					system("clear");
					if (viewer.empty()) {
						cout << "There's no VIP member" << endl;
						break;
					}
					cout << "Please write your Vip number" << endl;
					cin >> vipnum;
					if (vipnum > viewer.size()) {
						cout << "There's no Vip number you wrote" << endl;
						break;
					}
					LoginViewer(viewer[vipnum - 1]);
					break;
				}
				else if (n1 == 2) {
					viewer.push_back(Signup());
					break;
				}
				else {
					system("clear");
					cout << "Error! Please Write a number exactly" << endl << endl;
					break;
			}
		}
	}

		else if(n == 2) {
			while (1) {
				system("clear");
				LoginAdmin(admin);
				break;
			}
		}
		else
		{
			system("clear");
			cout << "Error! Please Write a number exactly" << endl << endl;
		}
	}
}


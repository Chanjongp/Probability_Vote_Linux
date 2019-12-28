#pragma once
#ifndef ADMIN_H
#define ADMIN_H
#include "vip.h"
class Admin : public VIP {
public:
	Admin();
//	void OpenVoteState() { statevote = true; } //open vote
//	void CloseVoteState() { statevote = false; } // close vote
//	bool GetVoteState() { return statevote; } // state of vote
};
#endif
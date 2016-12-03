#pragma once

#include "Command.h"
#include <string>

class JumpCommand : Command
{
public:
	JumpCommand();

	virtual void execute() { jump(); };


	~JumpCommand();

private:

	void jump();
};


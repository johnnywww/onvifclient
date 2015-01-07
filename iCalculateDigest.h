#pragma once
#include "infdefine.h"

DeclareInterface(ICalculateDigest)
	InfMethod(int calc(const char* nonce, const char* time, const char* password, char* value));
EndInterface
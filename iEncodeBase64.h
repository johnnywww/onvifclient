#pragma once
#include "infdefine.h"

DeclareInterface(IEncodeBase64)
	InfMethod(int encode(const char* src, const int srcLen, const void* param, char* value));
EndInterface
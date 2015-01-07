#pragma once
#include "infdefine.h"

DeclareInterface(IEncodeBase64)
	InfMethod(int encode(const char* src, const void* param, char* value, int len));
EndInterface
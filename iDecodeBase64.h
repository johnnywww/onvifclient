#pragma once
#include "infdefine.h"

DeclareInterface(IDecodeBase64)
	InfMethod(int decode(const char* src, const void* param, char* value, int len));
EndInterface
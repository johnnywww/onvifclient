#pragma once
#include "iSearchDevice.h"
#include "iGetDeviceInformation.h"
#include "iGetMediaProfiles.h"
#include "iGetStreamUrl.h"
#include "iSetSoapSecurity.h"

DeclareInterface(IFactory)
	InfMethod(ISearchDevice* createSearchDevice());
	InfMethod(IGetDeviceInformation* createGetDeviceInformation());
	InfMethod(IGetMediaProfiles* createGetMediaProfiles());
	InfMethod(IGetStreamUrl* createGetStreamUrl());
	InfMethod(ISetSoapSecurity* createSetSoapSecurity());
EndInterface

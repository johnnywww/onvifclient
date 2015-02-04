#pragma once
#include "iSearchDevice.h"
#include "iGetDeviceInformation.h"
#include "iGetMediaProfiles.h"
#include "iGetStreamUrl.h"
#include "iSetSoapSecurity.h"
#include "iCalculateDigest.h"
#include "iEncodeBase64.h"
#include "iDecodeBase64.h"
#include "iGetServices.h"

DeclareInterface(IFactory)
	InfMethod(ISearchDevice* createSearchDevice());
	InfMethod(IGetDeviceInformation* createGetDeviceInformation());
	InfMethod(IGetMediaProfiles* createGetMediaProfiles());
	InfMethod(IGetStreamUrl* createGetStreamUrl());
	InfMethod(ISetSoapSecurity* createSetSoapSecurity());
	InfMethod(ICalculateDigest* createCalculateDigest());
	InfMethod(IEncodeBase64* createEncodeBase64());
	InfMethod(IDecodeBase64* createDecodeBase64());
	InfMethod(IGetServices* createGetServices());
EndInterface

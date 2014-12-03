#include "appTools.h"

#include <string.h>
#include <stdarg.h>


#include "appCommon.h"

CAppTools::CAppTools() {

}

CAppTools::~CAppTools() {

}

bool CAppTools::isExceedTime(const time_t now, const time_t past,
	const int intervalSec)
{
	return (difftime(now, past) > intervalSec);
}

bool CAppTools::isRetSuccess(const int retCode)
{
	return RET_CODE_SUCCESS == retCode;
}


bool CAppTools::isEmptyStr(const char* value)
{
	if (NULL == value)
		return true;

	return strlen(value) < 1;
}


bool CAppTools::strEqual(const char* str1, const char* str2, bool cmpNULL)
{
	if ((NULL == str1) || (NULL == str2))
	{
		if (!cmpNULL)
			return false;
		return ((str1 == NULL) && (NULL == str2));
	}
	int ret = strcmp(str1, str2);
	return (0 == ret);
}


std::vector<std::string> CAppTools::split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;
	int size = str.size();

	for (int i = 0; i < size; i++)
	{
		pos = str.find(pattern, i);
		if (pos < size)
		{
			std::string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + pattern.size() - 1;
		}
	}
	return result;
}

bool CAppTools::isValidIP(const char* ip)
{
	if (NULL == ip)
		return false;
	int a = -1, b, c, d;
	if (4 == sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d))
	{
		if (0 <= a && a <= 255 && 0 <= b && b <= 255 && 0 <= c && c <= 255
			&& 0 <= d && d <= 255)
		{
			return true;
		}
	}
	return false;
}

bool CAppTools::getInvalidServiceAddressRetInfo(std::string serviceAddress, CBaseRetInfo* retInfo)
{
	bool result = false;
	if (serviceAddress.length() < 1) {
		retInfo->setRetCode(RET_CODE_ERROR_INVALID_VALUE);
		retInfo->setMessage("no service address");
		result = true;
	}
	return result;
}







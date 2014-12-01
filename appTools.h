#ifndef APPTOOLS_H_
#define APPTOOLS_H_

#include <string>
#include <vector>
#include <list>
#include <map>
#include <time.h>
#include <iostream>
#include <sstream>

#include "appCommon.h"

class CAppTools
{
public:
	OneInstance(CAppTools)
	virtual ~CAppTools();
public:
	bool isEmptyStr(const char* value);
	bool isSameNetSegment(const char* ip1, const char* ip2, const char* mask);
	std::vector<std::string> split(std::string str, std::string pattern);
	bool strEqual(const char* str1, const char* str2, bool cmpNULL = false);

	template <typename T2> void clearList(std::list<T2*>& vList)
	{
		for (typename std::list<T2*>::iterator iter = vList.begin(); iter != vList.end();)
		{
			delete(*iter);
			iter = vList.erase(iter);
		}
	};

	template <typename T2, typename T3> void clearMap(std::map<T2, T3*>& vMap)
	{
		for (typename std::map<T2, T3*>::iterator iter = vMap.begin(); iter != vMap.end();)
		{
			delete ((iter->second));
			++iter;
		}
	};

	template <typename T> std::string convertToStr(T value)
	{
		std::stringstream ss;
		ss << value;
		return ss.str();
	}
	bool isRetSuccess(const int retCode);
	bool isExceedTime(const time_t now, const time_t past, const int intervalSec);
	bool isValidIP(const char* ip);
private:
	CAppTools();
private:

};

#endif /* APPTOOLS_H_ */

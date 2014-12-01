#ifndef CONTAINERLIST_H_
#define CONTAINERLIST_H_

#include <list>
#include "iList.h"
#include "appTools.h"

template<typename T>
class CContainerList : implements IList<T>
{
private:
	std::list<T*> m_List;

public:

	CContainerList() {};
	CContainerList(CContainerList& a) {};
	virtual ~CContainerList() {
		clear();
	};
public:

	ImplInfMethod(void add(T* info))
	{
		m_List.push_back(info);
	};

	ImplInfMethod(int remove(T* info, bool del))
	{
		int result = RET_CODE_ERROR_NULL_OBJECT;
		typename std::list<T*>::iterator iter;
		for (iter = m_List.begin(); iter != m_List.end(); iter++)
		{
			if (info == *iter)
			{
				if (del)
				{
					delete (*iter);
				}
				iter = m_List.erase(iter);
				result = RET_CODE_SUCCESS;
				break;
			}
		}
		return result;
	};

	ImplInfMethod(T* get(int index))
	{
		if (index < 0)
			return NULL;
		if (index > m_List.size())
			return NULL;
		T* result = NULL;
		int pos = 0;
		for (typename std::list<T*>::iterator iter = m_List.begin(); iter != m_List.end();
			iter++)
		{
			if (pos == index)
			{
				result = *iter;
				break;
			}
			pos++;
		}
		return result;
	};

	ImplInfMethod(int indexOf(T* info))
	{
		int result = -1;
		int pos = 0;
		for (typename std::list<T*>::iterator iter = m_List.begin(); iter != m_List.end();
			iter++)
		{
			if (*iter == info)
			{
				result = pos;
				break;
			}
			pos++;
		}
		return result;
	};

	ImplInfMethod(int del(int index))
	{
		int result = RET_CODE_ERROR_NULL_OBJECT;
		int pos = 0;
		for (typename std::list<T*>::iterator iter = m_List.begin(); iter != m_List.end();
			iter++)
		{
			if (pos == index)
			{
				delete (*iter);
				m_List.erase(iter);
				result = RET_CODE_SUCCESS;
				break;
			}
			pos++;
		}
		return result;
	};

	ImplInfMethod(int count())
	{
		return m_List.size();
	};

	ImplInfMethod(void clear())
	{
		for (typename std::list<T*>::iterator iter = m_List.begin(); iter != m_List.end();)
		{
			delete(*iter);
			iter = m_List.erase(iter);
		}
	};
};


#endif /* CONTAINERLIST_H_ */

#ifndef ILIST_H_
#define ILIST_H_

#include "infDefine.h"


template<typename T>
DeclareInterface(IList)
	InfMethod(void add(T* info));
	InfMethod(int remove(T* info, bool del));
	InfMethod(T* get(int index));
	InfMethod(int indexOf(T* info));
	InfMethod(int del(int index));
	InfMethod(int count());
	InfMethod(void clear());
EndInterface


#endif /* ILIST_H_ */

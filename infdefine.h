#ifndef INFDEFINE_H
#define	INFDEFINE_H

//#ifdef	__cplusplus
//extern "C" {
//#endif

#define IInterface class

#define implements public

#define extends public 

#define InterfaceDestructor(name) public: \
	virtual ~name() {}

#define DeclareInterface(name) IInterface name { \
	InterfaceDestructor(name)

#define DeclareExtInterface(name, baseName) IInterface name: extends baseName { \
	InterfaceDestructor(name)

#define EndInterface };

#define DeclareMultiExtInterfaceBegin(name) IInterface name:  

#define DeclareMultiExtInterfaceEnd(name) { \
	InterfaceDestructor(name)

#define InfMethod(name) virtual name = 0
#define ImplInfMethod(name) virtual name
#define AbstractMethod(name) virtual name = 0
#define ImplAbstractMethod(name) virtual name

//#ifdef	__cplusplus
//}
//#endif



#endif	/* INFDEFINE_H */

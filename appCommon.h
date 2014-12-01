#ifndef APPCOMMON_H
#define	APPCOMMON_H

#ifdef	__cplusplus
extern "C"
{
#endif

#define OneInstance(ClassName) static ClassName& getInstance() { \
	static ClassName instance; \
	return instance; \
}

#ifdef	__cplusplus
}
#endif

#define RET_CODE_SUCCESS 0
#define RET_CODE_ERROR_UNKNOWN -100
#define RET_CODE_ERROR_NULL_VALUE -1
#define RET_CODE_ERROR_SETSOCKOPT -2
#define RET_CODE_ERROR_SOAP_BIND -3
#define RET_CODE_ERROR_CREATE_THREAD -4
#define RET_CODE_ERROR_SOAP_ACCEPT -5
#define RET_CODE_ERROR_CREATE_SOCKET -6
#define RET_CODE_ERROR_SOCKETIOCTL -7
#define RET_CODE_ERROR_NULL_OBJECT -8
#define RET_CODE_ERROR_CONNECT -9
#define RET_CODE_ERROR_NOT_RUN -10
#define RET_CODE_ERROR_SEND -11
#define RET_CODE_ERROR_RECV -12
#define RET_CODE_ERROR_NOT_SUPPORT -13
#define RET_CODE_ERROR_INVALID_VALUE -14
#define RET_CODE_ERROR_INVALID_IP -15
#define RET_CODE_ERROR_NOT_RUN -10

#define SOAP_ENDPOINT_AUTOSEARCH "soap.udp://239.255.255.250:3702"
#define NET_CARD_NAME "eth0"

#endif

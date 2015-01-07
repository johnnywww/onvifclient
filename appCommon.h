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

static const char base64digits[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

#define BAD     -1
static const signed char base64val[] = { 
    BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,BAD,BAD,BAD, BAD,BAD,BAD,BAD, BAD,BAD,BAD, 62, BAD,BAD,BAD, 63, 
		52, 53, 54, 55,  56, 57, 58, 59,  60, 61,BAD,BAD, BAD,BAD,BAD,BAD,
		BAD,  0,  1,  2,   3,  4,  5,  6,   7,  8,  9, 10,  11, 12, 13, 14, 
		15, 16, 17, 18,  19, 20, 21, 22,  23, 24, 25,BAD, BAD,BAD,BAD,BAD,
		BAD, 26, 27, 28,  29, 30, 31, 32,  33, 34, 35, 36,  37, 38, 39, 40, 
		41, 42, 43, 44,  45, 46, 47, 48,  49, 50, 51,BAD, BAD,BAD,BAD,BAD
};

#define DECODE64(c)  (isascii(c) ? base64val[c] : BAD)

#define KB_SIZE 1024

#define SOAP_SMD_SHA1_SIZE  20
#define SOAP_PASS_DIGEST_URI "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-username-token-profile-1.0#PasswordDigest"
#endif

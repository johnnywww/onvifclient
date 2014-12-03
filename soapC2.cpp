#include "soapH.h"

SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist *p)
{	switch (p->type)
	{
	case SOAP_TYPE__wsu__Timestamp:
		if (p->size < 0)
			SOAP_DELETE((struct _wsu__Timestamp*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsu__Timestamp*)p->ptr);
		break;
	case SOAP_TYPE__wsse__UsernameToken:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__UsernameToken*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__UsernameToken*)p->ptr);
		break;
	case SOAP_TYPE__wsse__BinarySecurityToken:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__BinarySecurityToken*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__BinarySecurityToken*)p->ptr);
		break;
	case SOAP_TYPE__wsse__Reference:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__Reference*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__Reference*)p->ptr);
		break;
	case SOAP_TYPE__wsse__Embedded:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__Embedded*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__Embedded*)p->ptr);
		break;
	case SOAP_TYPE__wsse__KeyIdentifier:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__KeyIdentifier*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__KeyIdentifier*)p->ptr);
		break;
	case SOAP_TYPE__wsse__SecurityTokenReference:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__SecurityTokenReference*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__SecurityTokenReference*)p->ptr);
		break;
	case SOAP_TYPE_ds__SignatureType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__SignatureType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__SignatureType*)p->ptr);
		break;
	case SOAP_TYPE__c14n__InclusiveNamespaces:
		if (p->size < 0)
			SOAP_DELETE((struct _c14n__InclusiveNamespaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _c14n__InclusiveNamespaces*)p->ptr);
		break;
	case SOAP_TYPE_ds__TransformType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__TransformType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__TransformType*)p->ptr);
		break;
	case SOAP_TYPE_ds__KeyInfoType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__KeyInfoType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__KeyInfoType*)p->ptr);
		break;
	case SOAP_TYPE_ds__SignedInfoType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__SignedInfoType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__SignedInfoType*)p->ptr);
		break;
	case SOAP_TYPE_ds__CanonicalizationMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__CanonicalizationMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__CanonicalizationMethodType*)p->ptr);
		break;
	case SOAP_TYPE_ds__SignatureMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__SignatureMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__SignatureMethodType*)p->ptr);
		break;
	case SOAP_TYPE_ds__ReferenceType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__ReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__ReferenceType*)p->ptr);
		break;
	case SOAP_TYPE_ds__TransformsType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__TransformsType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__TransformsType*)p->ptr);
		break;
	case SOAP_TYPE_ds__DigestMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__DigestMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__DigestMethodType*)p->ptr);
		break;
	case SOAP_TYPE_ds__KeyValueType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__KeyValueType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__KeyValueType*)p->ptr);
		break;
	case SOAP_TYPE_ds__RetrievalMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__RetrievalMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__RetrievalMethodType*)p->ptr);
		break;
	case SOAP_TYPE_ds__X509DataType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__X509DataType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__X509DataType*)p->ptr);
		break;
	case SOAP_TYPE_ds__X509IssuerSerialType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__X509IssuerSerialType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__X509IssuerSerialType*)p->ptr);
		break;
	case SOAP_TYPE_ds__DSAKeyValueType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__DSAKeyValueType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__DSAKeyValueType*)p->ptr);
		break;
	case SOAP_TYPE_ds__RSAKeyValueType:
		if (p->size < 0)
			SOAP_DELETE((struct ds__RSAKeyValueType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__RSAKeyValueType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptionPropertyType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptionPropertyType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptionPropertyType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptedType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptedType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptedType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptionMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptionMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptionMethodType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__CipherDataType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__CipherDataType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__CipherDataType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__CipherReferenceType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__CipherReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__CipherReferenceType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__TransformsType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__TransformsType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__TransformsType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__AgreementMethodType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__AgreementMethodType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__AgreementMethodType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__ReferenceType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__ReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__ReferenceType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptionPropertiesType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptionPropertiesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptionPropertiesType*)p->ptr);
		break;
	case SOAP_TYPE___xenc__union_ReferenceList:
		if (p->size < 0)
			SOAP_DELETE((struct __xenc__union_ReferenceList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __xenc__union_ReferenceList*)p->ptr);
		break;
	case SOAP_TYPE__xenc__ReferenceList:
		if (p->size < 0)
			SOAP_DELETE((struct _xenc__ReferenceList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _xenc__ReferenceList*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptedDataType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptedDataType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptedDataType*)p->ptr);
		break;
	case SOAP_TYPE_xenc__EncryptedKeyType:
		if (p->size < 0)
			SOAP_DELETE((struct xenc__EncryptedKeyType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct xenc__EncryptedKeyType*)p->ptr);
		break;
	case SOAP_TYPE_wsc__SecurityContextTokenType:
		if (p->size < 0)
			SOAP_DELETE((struct wsc__SecurityContextTokenType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsc__SecurityContextTokenType*)p->ptr);
		break;
	case SOAP_TYPE___wsc__DerivedKeyTokenType_sequence:
		if (p->size < 0)
			SOAP_DELETE((struct __wsc__DerivedKeyTokenType_sequence*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsc__DerivedKeyTokenType_sequence*)p->ptr);
		break;
	case SOAP_TYPE_wsc__DerivedKeyTokenType:
		if (p->size < 0)
			SOAP_DELETE((struct wsc__DerivedKeyTokenType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsc__DerivedKeyTokenType*)p->ptr);
		break;
	case SOAP_TYPE_wsc__PropertiesType:
		if (p->size < 0)
			SOAP_DELETE((struct wsc__PropertiesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsc__PropertiesType*)p->ptr);
		break;
	case SOAP_TYPE__wsse__Security:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__Security*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__Security*)p->ptr);
		break;
	case SOAP_TYPE__wsse__Password:
		if (p->size < 0)
			SOAP_DELETE((struct _wsse__Password*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _wsse__Password*)p->ptr);
		break;
#ifndef WITH_NOGLOBAL
	case SOAP_TYPE_SOAP_ENV__Header:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Header*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Header*)p->ptr);
		break;
#endif
	case SOAP_TYPE_wsa__EndpointReferenceType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE_wsa__ReferencePropertiesType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__ReferencePropertiesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__ReferencePropertiesType*)p->ptr);
		break;
	case SOAP_TYPE_wsa__ReferenceParametersType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__ReferenceParametersType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__ReferenceParametersType*)p->ptr);
		break;
	case SOAP_TYPE_wsa__ServiceNameType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__ServiceNameType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__ServiceNameType*)p->ptr);
		break;
	case SOAP_TYPE_wsa__Relationship:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__Relationship*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__Relationship*)p->ptr);
		break;
#ifndef WITH_NOGLOBAL
	case SOAP_TYPE_SOAP_ENV__Detail:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Detail*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Detail*)p->ptr);
		break;
#endif
#ifndef WITH_NOGLOBAL
	case SOAP_TYPE_SOAP_ENV__Code:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Code*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Code*)p->ptr);
		break;
#endif
#ifndef WITH_NOGLOBAL
	case SOAP_TYPE_SOAP_ENV__Reason:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Reason*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Reason*)p->ptr);
		break;
#endif
#ifndef WITH_NOGLOBAL
	case SOAP_TYPE_SOAP_ENV__Fault:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Fault*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Fault*)p->ptr);
		break;
#endif
	case SOAP_TYPE_wsdd__HelloType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__HelloType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__HelloType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ByeType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ByeType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ByeType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ProbeType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ProbeType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ProbeType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ProbeMatchesType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ProbeMatchesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ProbeMatchesType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ProbeMatchType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ProbeMatchType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ProbeMatchType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ResolveType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ResolveType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ResolveType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ResolveMatchesType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ResolveMatchesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ResolveMatchesType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ResolveMatchType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ResolveMatchType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ResolveMatchType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__SecurityType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__SecurityType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__SecurityType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__SigType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__SigType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__SigType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__ScopesType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__ScopesType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__ScopesType*)p->ptr);
		break;
	case SOAP_TYPE_wsdd__AppSequenceType:
		if (p->size < 0)
			SOAP_DELETE((struct wsdd__AppSequenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsdd__AppSequenceType*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__Hello:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__Hello*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__Hello*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__Bye:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__Bye*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__Bye*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__Probe:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__Probe*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__Probe*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__ProbeMatches:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__ProbeMatches*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__ProbeMatches*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__Resolve:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__Resolve*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__Resolve*)p->ptr);
		break;
	case SOAP_TYPE___wsdd__ResolveMatches:
		if (p->size < 0)
			SOAP_DELETE((struct __wsdd__ResolveMatches*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __wsdd__ResolveMatches*)p->ptr);
		break;
	case SOAP_TYPE__xop__Include:
		if (p->size < 0)
			SOAP_DELETE((struct _xop__Include*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct _xop__Include*)p->ptr);
		break;
	case SOAP_TYPE_wsa5__EndpointReferenceType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE_wsa5__ReferenceParametersType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__ReferenceParametersType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__ReferenceParametersType*)p->ptr);
		break;
	case SOAP_TYPE_wsa5__MetadataType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__MetadataType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__MetadataType*)p->ptr);
		break;
	case SOAP_TYPE_wsa5__ProblemActionType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__ProblemActionType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__ProblemActionType*)p->ptr);
		break;
	case SOAP_TYPE_wsa5__RelatesToType:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__RelatesToType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__RelatesToType*)p->ptr);
		break;
	case SOAP_TYPE_chan__ChannelInstanceType:
		if (p->size < 0)
			SOAP_DELETE((struct chan__ChannelInstanceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct chan__ChannelInstanceType*)p->ptr);
		break;
	case SOAP_TYPE_xsd__anyType:
		if (p->size < 0)
			SOAP_DELETE((xsd__anyType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__anyType*)p->ptr);
		break;
	case SOAP_TYPE_SOAP_ENV__Envelope:
		if (p->size < 0)
			SOAP_DELETE((struct SOAP_ENV__Envelope*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct SOAP_ENV__Envelope*)p->ptr);
		break;
	case SOAP_TYPE_xsd__base64Binary:
		if (p->size < 0)
			SOAP_DELETE((xsd__base64Binary*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__base64Binary*)p->ptr);
		break;
	case SOAP_TYPE_xsd__hexBinary:
		if (p->size < 0)
			SOAP_DELETE((xsd__hexBinary*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__hexBinary*)p->ptr);
		break;
	case SOAP_TYPE_xsd__NCName_:
		if (p->size < 0)
			SOAP_DELETE((xsd__NCName_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__NCName_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__QName:
		if (p->size < 0)
			SOAP_DELETE((xsd__QName*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__QName*)p->ptr);
		break;
	case SOAP_TYPE_xsd__anySimpleType_:
		if (p->size < 0)
			SOAP_DELETE((xsd__anySimpleType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__anySimpleType_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__anyURI_:
		if (p->size < 0)
			SOAP_DELETE((xsd__anyURI_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__anyURI_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__base64Binary_:
		if (p->size < 0)
			SOAP_DELETE((xsd__base64Binary_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__base64Binary_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__boolean:
		if (p->size < 0)
			SOAP_DELETE((xsd__boolean*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__boolean*)p->ptr);
		break;
	case SOAP_TYPE_xsd__dateTime:
		if (p->size < 0)
			SOAP_DELETE((xsd__dateTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__dateTime*)p->ptr);
		break;
	case SOAP_TYPE_xsd__duration_:
		if (p->size < 0)
			SOAP_DELETE((xsd__duration_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__duration_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__float:
		if (p->size < 0)
			SOAP_DELETE((xsd__float*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__float*)p->ptr);
		break;
	case SOAP_TYPE_xsd__hexBinary_:
		if (p->size < 0)
			SOAP_DELETE((xsd__hexBinary_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__hexBinary_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__int:
		if (p->size < 0)
			SOAP_DELETE((xsd__int*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__int*)p->ptr);
		break;
	case SOAP_TYPE_xsd__integer_:
		if (p->size < 0)
			SOAP_DELETE((xsd__integer_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__integer_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__nonNegativeInteger_:
		if (p->size < 0)
			SOAP_DELETE((xsd__nonNegativeInteger_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__nonNegativeInteger_*)p->ptr);
		break;
	case SOAP_TYPE_xsd__string:
		if (p->size < 0)
			SOAP_DELETE((xsd__string*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__string*)p->ptr);
		break;
	case SOAP_TYPE_xsd__token_:
		if (p->size < 0)
			SOAP_DELETE((xsd__token_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__token_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReferenceToken__:
		if (p->size < 0)
			SOAP_DELETE((tt__ReferenceToken__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReferenceToken__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Name__:
		if (p->size < 0)
			SOAP_DELETE((tt__Name__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Name__*)p->ptr);
		break;
	case SOAP_TYPE_tt__RotateMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__RotateMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RotateMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoEncoding_:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoEncoding_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoEncoding_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Mpeg4Profile_:
		if (p->size < 0)
			SOAP_DELETE((tt__Mpeg4Profile_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Mpeg4Profile_*)p->ptr);
		break;
	case SOAP_TYPE_tt__H264Profile_:
		if (p->size < 0)
			SOAP_DELETE((tt__H264Profile_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__H264Profile_*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioEncoding_:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioEncoding_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioEncoding_*)p->ptr);
		break;
	case SOAP_TYPE_tt__StreamType_:
		if (p->size < 0)
			SOAP_DELETE((tt__StreamType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__StreamType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__TransportProtocol_:
		if (p->size < 0)
			SOAP_DELETE((tt__TransportProtocol_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TransportProtocol_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ScopeDefinition_:
		if (p->size < 0)
			SOAP_DELETE((tt__ScopeDefinition_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ScopeDefinition_*)p->ptr);
		break;
	case SOAP_TYPE_tt__DiscoveryMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__DiscoveryMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DiscoveryMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceConfigPriority__:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceConfigPriority__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceConfigPriority__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Duplex_:
		if (p->size < 0)
			SOAP_DELETE((tt__Duplex_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Duplex_*)p->ptr);
		break;
	case SOAP_TYPE_tt__IANA_IfTypes__:
		if (p->size < 0)
			SOAP_DELETE((tt__IANA_IfTypes__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IANA_IfTypes__*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6DHCPConfiguration_:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6DHCPConfiguration_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6DHCPConfiguration_*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkProtocolType_:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkProtocolType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkProtocolType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkHostType_:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkHostType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkHostType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv4Address__:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv4Address__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv4Address__*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6Address__:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6Address__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6Address__*)p->ptr);
		break;
	case SOAP_TYPE_tt__HwAddress__:
		if (p->size < 0)
			SOAP_DELETE((tt__HwAddress__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__HwAddress__*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPType_:
		if (p->size < 0)
			SOAP_DELETE((tt__IPType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__DNSName__:
		if (p->size < 0)
			SOAP_DELETE((tt__DNSName__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DNSName__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Domain__:
		if (p->size < 0)
			SOAP_DELETE((tt__Domain__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Domain__*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPAddressFilterType_:
		if (p->size < 0)
			SOAP_DELETE((tt__IPAddressFilterType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPAddressFilterType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__DynamicDNSType_:
		if (p->size < 0)
			SOAP_DELETE((tt__DynamicDNSType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DynamicDNSType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SSIDType__:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11SSIDType__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11SSIDType__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11StationMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11StationMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11StationMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SecurityMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11SecurityMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11SecurityMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11Cipher_:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11Cipher_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11Cipher_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11PSK__:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11PSK__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11PSK__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11PSKPassphrase__:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11PSKPassphrase__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11PSKPassphrase__*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SignalStrength_:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11SignalStrength_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11SignalStrength_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11AuthAndMangementSuite_:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11AuthAndMangementSuite_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11AuthAndMangementSuite_*)p->ptr);
		break;
	case SOAP_TYPE_tt__CapabilityCategory_:
		if (p->size < 0)
			SOAP_DELETE((tt__CapabilityCategory_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CapabilityCategory_*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemLogType_:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemLogType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemLogType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__FactoryDefaultType_:
		if (p->size < 0)
			SOAP_DELETE((tt__FactoryDefaultType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FactoryDefaultType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__SetDateTimeType_:
		if (p->size < 0)
			SOAP_DELETE((tt__SetDateTimeType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SetDateTimeType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__UserLevel_:
		if (p->size < 0)
			SOAP_DELETE((tt__UserLevel_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__UserLevel_*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelayLogicalState_:
		if (p->size < 0)
			SOAP_DELETE((tt__RelayLogicalState_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelayLogicalState_*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelayIdleState_:
		if (p->size < 0)
			SOAP_DELETE((tt__RelayIdleState_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelayIdleState_*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelayMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__RelayMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelayMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__EFlipMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__EFlipMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EFlipMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReverseMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__ReverseMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReverseMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__AuxiliaryData__:
		if (p->size < 0)
			SOAP_DELETE((tt__AuxiliaryData__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AuxiliaryData__*)p->ptr);
		break;
	case SOAP_TYPE_tt__MoveStatus_:
		if (p->size < 0)
			SOAP_DELETE((tt__MoveStatus_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MoveStatus_*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourState_:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourState_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourState_*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourDirection_:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourDirection_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourDirection_*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourOperation_:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourOperation_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourOperation_*)p->ptr);
		break;
	case SOAP_TYPE_tt__AutoFocusMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__AutoFocusMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AutoFocusMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__WideDynamicMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__WideDynamicMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WideDynamicMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__BacklightCompensationMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__BacklightCompensationMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BacklightCompensationMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ExposurePriority_:
		if (p->size < 0)
			SOAP_DELETE((tt__ExposurePriority_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ExposurePriority_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ExposureMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__ExposureMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ExposureMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Enabled_:
		if (p->size < 0)
			SOAP_DELETE((tt__Enabled_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Enabled_*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalanceMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalanceMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalanceMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__IrCutFilterMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__IrCutFilterMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IrCutFilterMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImageStabilizationMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__ImageStabilizationMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImageStabilizationMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__TopicNamespaceLocation__:
		if (p->size < 0)
			SOAP_DELETE((tt__TopicNamespaceLocation__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TopicNamespaceLocation__*)p->ptr);
		break;
	case SOAP_TYPE_tt__PropertyOperation_:
		if (p->size < 0)
			SOAP_DELETE((tt__PropertyOperation_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PropertyOperation_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Direction_:
		if (p->size < 0)
			SOAP_DELETE((tt__Direction_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Direction_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ClassType_:
		if (p->size < 0)
			SOAP_DELETE((tt__ClassType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ClassType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverMode_:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverMode_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverMode_*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverState_:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverState_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverState_*)p->ptr);
		break;
	case SOAP_TYPE_tt__Description__:
		if (p->size < 0)
			SOAP_DELETE((tt__Description__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Description__*)p->ptr);
		break;
	case SOAP_TYPE_tt__XPathExpression__:
		if (p->size < 0)
			SOAP_DELETE((tt__XPathExpression__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__XPathExpression__*)p->ptr);
		break;
	case SOAP_TYPE_tt__SearchState_:
		if (p->size < 0)
			SOAP_DELETE((tt__SearchState_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SearchState_*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingStatus_:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingStatus_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingStatus_*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackType_:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackType_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackType_*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobMode__:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobMode__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobMode__*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobState__:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobState__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobState__*)p->ptr);
		break;
	case SOAP_TYPE_tt__ModeOfOperation_:
		if (p->size < 0)
			SOAP_DELETE((tt__ModeOfOperation_*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ModeOfOperation_*)p->ptr);
		break;
	case SOAP_TYPE_wstop__FullTopicExpression__:
		if (p->size < 0)
			SOAP_DELETE((wstop__FullTopicExpression__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__FullTopicExpression__*)p->ptr);
		break;
	case SOAP_TYPE_wstop__ConcreteTopicExpression__:
		if (p->size < 0)
			SOAP_DELETE((wstop__ConcreteTopicExpression__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__ConcreteTopicExpression__*)p->ptr);
		break;
	case SOAP_TYPE_wstop__SimpleTopicExpression__:
		if (p->size < 0)
			SOAP_DELETE((wstop__SimpleTopicExpression__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__SimpleTopicExpression__*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverReference__:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverReference__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverReference__*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingReference__:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingReference__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingReference__*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackReference__:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackReference__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackReference__*)p->ptr);
		break;
	case SOAP_TYPE_tt__JobToken__:
		if (p->size < 0)
			SOAP_DELETE((tt__JobToken__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__JobToken__*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobReference__:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobReference__*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobReference__*)p->ptr);
		break;
	case SOAP_TYPE__tds__Service_Capabilities:
		if (p->size < 0)
			SOAP_DELETE((_tds__Service_Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__Service_Capabilities*)p->ptr);
		break;
	case SOAP_TYPE_tds__Service:
		if (p->size < 0)
			SOAP_DELETE((tds__Service*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__Service*)p->ptr);
		break;
	case SOAP_TYPE_tds__DeviceServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tds__DeviceServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__DeviceServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tds__NetworkCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tds__NetworkCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__NetworkCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tds__SecurityCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tds__SecurityCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__SecurityCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tds__SystemCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tds__SystemCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__SystemCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tds__MiscCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tds__MiscCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tds__MiscCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetServices:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetServices*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetServices*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetServicesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetServicesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetServicesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetServiceCapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetServiceCapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetServiceCapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDeviceInformation:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDeviceInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDeviceInformation*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDeviceInformationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDeviceInformationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDeviceInformationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetSystemDateAndTime:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetSystemDateAndTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetSystemDateAndTime*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetSystemDateAndTimeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetSystemDateAndTimeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetSystemDateAndTimeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemDateAndTime:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemDateAndTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemDateAndTime*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemDateAndTimeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemDateAndTimeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemDateAndTimeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetSystemFactoryDefault:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetSystemFactoryDefault*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetSystemFactoryDefault*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetSystemFactoryDefaultResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetSystemFactoryDefaultResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetSystemFactoryDefaultResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__UpgradeSystemFirmware:
		if (p->size < 0)
			SOAP_DELETE((_tds__UpgradeSystemFirmware*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__UpgradeSystemFirmware*)p->ptr);
		break;
	case SOAP_TYPE__tds__UpgradeSystemFirmwareResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__UpgradeSystemFirmwareResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__UpgradeSystemFirmwareResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SystemReboot:
		if (p->size < 0)
			SOAP_DELETE((_tds__SystemReboot*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SystemReboot*)p->ptr);
		break;
	case SOAP_TYPE__tds__SystemRebootResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SystemRebootResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SystemRebootResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__RestoreSystem:
		if (p->size < 0)
			SOAP_DELETE((_tds__RestoreSystem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RestoreSystem*)p->ptr);
		break;
	case SOAP_TYPE__tds__RestoreSystemResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__RestoreSystemResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RestoreSystemResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemBackup:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemBackup*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemBackup*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemBackupResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemBackupResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemBackupResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemSupportInformation:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemSupportInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemSupportInformation*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemSupportInformationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemSupportInformationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemSupportInformationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemLog:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemLog*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemLog*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemLogResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemLogResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemLogResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetScopes:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetScopes*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetScopesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetScopesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetScopesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetScopes:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetScopes*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetScopesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetScopesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetScopesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__AddScopes:
		if (p->size < 0)
			SOAP_DELETE((_tds__AddScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__AddScopes*)p->ptr);
		break;
	case SOAP_TYPE__tds__AddScopesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__AddScopesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__AddScopesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__RemoveScopes:
		if (p->size < 0)
			SOAP_DELETE((_tds__RemoveScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RemoveScopes*)p->ptr);
		break;
	case SOAP_TYPE__tds__RemoveScopesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__RemoveScopesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RemoveScopesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDiscoveryModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDiscoveryModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDiscoveryModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDiscoveryModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDiscoveryModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDiscoveryModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRemoteDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRemoteDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRemoteDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRemoteDiscoveryModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRemoteDiscoveryModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRemoteDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRemoteDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRemoteDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRemoteDiscoveryModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRemoteDiscoveryModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDPAddresses:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDPAddresses*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDPAddresses*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDPAddressesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDPAddressesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDPAddressesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDPAddresses:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDPAddresses*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDPAddresses*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDPAddressesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDPAddressesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDPAddressesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetEndpointReference:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetEndpointReference*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetEndpointReference*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetEndpointReferenceResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetEndpointReferenceResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetEndpointReferenceResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRemoteUser:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRemoteUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRemoteUser*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRemoteUserResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRemoteUserResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRemoteUserResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRemoteUser:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRemoteUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRemoteUser*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRemoteUserResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRemoteUserResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRemoteUserResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetUsers:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetUsers*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetUsersResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetUsersResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetUsersResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateUsers:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateUsers*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateUsersResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateUsersResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateUsersResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteUsers:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteUsers*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteUsersResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteUsersResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteUsersResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetUser:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetUser*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetUserResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetUserResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetUserResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetWsdlUrl:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetWsdlUrl*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetWsdlUrl*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetWsdlUrlResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetWsdlUrlResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetWsdlUrlResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCapabilities:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetHostname:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetHostname*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetHostname*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetHostnameResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetHostnameResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetHostnameResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetHostname:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetHostname*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetHostname*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetHostnameResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetHostnameResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetHostnameResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetHostnameFromDHCP:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetHostnameFromDHCP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetHostnameFromDHCP*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetHostnameFromDHCPResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetHostnameFromDHCPResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetHostnameFromDHCPResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDNS:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDNS*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDNSResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDNSResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDNSResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDNS:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDNS*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDNSResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDNSResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDNSResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNTP:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNTP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNTP*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNTPResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNTPResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNTPResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNTP:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNTP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNTP*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNTPResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNTPResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNTPResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDynamicDNS:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDynamicDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDynamicDNS*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDynamicDNSResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDynamicDNSResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDynamicDNSResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDynamicDNS:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDynamicDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDynamicDNS*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDynamicDNSResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDynamicDNSResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDynamicDNSResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkInterfaces:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkInterfaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkInterfaces*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkInterfacesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkInterfacesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkInterfacesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkInterfaces:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkInterfaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkInterfaces*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkInterfacesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkInterfacesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkInterfacesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkProtocols:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkProtocols*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkProtocols*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkProtocolsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkProtocolsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkProtocolsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkProtocols:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkProtocols*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkProtocols*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkProtocolsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkProtocolsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkProtocolsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkDefaultGateway:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkDefaultGateway*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkDefaultGateway*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetNetworkDefaultGatewayResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetNetworkDefaultGatewayResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetNetworkDefaultGatewayResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkDefaultGateway:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkDefaultGateway*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkDefaultGateway*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetNetworkDefaultGatewayResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetNetworkDefaultGatewayResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetNetworkDefaultGatewayResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetZeroConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetZeroConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetZeroConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetZeroConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetZeroConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetZeroConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetZeroConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetZeroConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetZeroConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetZeroConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetZeroConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetZeroConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetIPAddressFilterResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetIPAddressFilterResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetIPAddressFilterResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetIPAddressFilterResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetIPAddressFilterResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetIPAddressFilterResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__AddIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((_tds__AddIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__AddIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE__tds__AddIPAddressFilterResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__AddIPAddressFilterResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__AddIPAddressFilterResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__RemoveIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((_tds__RemoveIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RemoveIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE__tds__RemoveIPAddressFilterResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__RemoveIPAddressFilterResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__RemoveIPAddressFilterResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetAccessPolicy:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetAccessPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetAccessPolicy*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetAccessPolicyResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetAccessPolicyResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetAccessPolicyResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetAccessPolicy:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetAccessPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetAccessPolicy*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetAccessPolicyResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetAccessPolicyResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetAccessPolicyResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateCertificate:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateCertificate*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateCertificate*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateCertificateResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateCertificateResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateCertificateResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificates:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificates*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificatesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificatesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificatesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificatesStatus:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificatesStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificatesStatus*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificatesStatusResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificatesStatusResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificatesStatusResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetCertificatesStatus:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetCertificatesStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetCertificatesStatus*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetCertificatesStatusResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetCertificatesStatusResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetCertificatesStatusResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteCertificates:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteCertificates*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteCertificatesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteCertificatesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteCertificatesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetPkcs10Request:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetPkcs10Request*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetPkcs10Request*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetPkcs10RequestResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetPkcs10RequestResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetPkcs10RequestResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCertificates:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCertificates*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCertificatesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCertificatesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCertificatesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetClientCertificateMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetClientCertificateMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetClientCertificateMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetClientCertificateModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetClientCertificateModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetClientCertificateModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetClientCertificateMode:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetClientCertificateMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetClientCertificateMode*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetClientCertificateModeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetClientCertificateModeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetClientCertificateModeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCACertificates:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCACertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCACertificates*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCACertificatesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCACertificatesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCACertificatesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCertificateWithPrivateKey:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCertificateWithPrivateKey*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCertificateWithPrivateKey*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCertificateWithPrivateKeyResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCertificateWithPrivateKeyResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCertificateWithPrivateKeyResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificateInformation:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificateInformation*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetCertificateInformationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetCertificateInformationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetCertificateInformationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCACertificates:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCACertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCACertificates*)p->ptr);
		break;
	case SOAP_TYPE__tds__LoadCACertificatesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__LoadCACertificatesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__LoadCACertificatesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__CreateDot1XConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__CreateDot1XConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__CreateDot1XConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetDot1XConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetDot1XConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetDot1XConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot1XConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot1XConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot1XConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot1XConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot1XConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot1XConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot1XConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot1XConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot1XConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tds__DeleteDot1XConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__DeleteDot1XConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__DeleteDot1XConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRelayOutputs:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRelayOutputs*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRelayOutputs*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetRelayOutputsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetRelayOutputsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetRelayOutputsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRelayOutputSettings:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRelayOutputSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRelayOutputSettings*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRelayOutputSettingsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRelayOutputSettingsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRelayOutputSettingsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRelayOutputState:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRelayOutputState*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRelayOutputState*)p->ptr);
		break;
	case SOAP_TYPE__tds__SetRelayOutputStateResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SetRelayOutputStateResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SetRelayOutputStateResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__SendAuxiliaryCommand:
		if (p->size < 0)
			SOAP_DELETE((_tds__SendAuxiliaryCommand*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SendAuxiliaryCommand*)p->ptr);
		break;
	case SOAP_TYPE__tds__SendAuxiliaryCommandResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__SendAuxiliaryCommandResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__SendAuxiliaryCommandResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot11Capabilities:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot11Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot11Capabilities*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot11CapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot11CapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot11CapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot11Status:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot11Status*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot11Status*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetDot11StatusResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetDot11StatusResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetDot11StatusResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__ScanAvailableDot11Networks:
		if (p->size < 0)
			SOAP_DELETE((_tds__ScanAvailableDot11Networks*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__ScanAvailableDot11Networks*)p->ptr);
		break;
	case SOAP_TYPE__tds__ScanAvailableDot11NetworksResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__ScanAvailableDot11NetworksResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__ScanAvailableDot11NetworksResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemUris:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemUris*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemUris*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemUrisResponse_Extension:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemUrisResponse_Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemUrisResponse_Extension*)p->ptr);
		break;
	case SOAP_TYPE__tds__GetSystemUrisResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__GetSystemUrisResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__GetSystemUrisResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__StartFirmwareUpgrade:
		if (p->size < 0)
			SOAP_DELETE((_tds__StartFirmwareUpgrade*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__StartFirmwareUpgrade*)p->ptr);
		break;
	case SOAP_TYPE__tds__StartFirmwareUpgradeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__StartFirmwareUpgradeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__StartFirmwareUpgradeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tds__StartSystemRestore:
		if (p->size < 0)
			SOAP_DELETE((_tds__StartSystemRestore*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__StartSystemRestore*)p->ptr);
		break;
	case SOAP_TYPE__tds__StartSystemRestoreResponse:
		if (p->size < 0)
			SOAP_DELETE((_tds__StartSystemRestoreResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tds__StartSystemRestoreResponse*)p->ptr);
		break;
	case SOAP_TYPE_tt__DeviceEntity:
		if (p->size < 0)
			SOAP_DELETE((tt__DeviceEntity*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DeviceEntity*)p->ptr);
		break;
	case SOAP_TYPE_tt__IntRectangle:
		if (p->size < 0)
			SOAP_DELETE((tt__IntRectangle*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IntRectangle*)p->ptr);
		break;
	case SOAP_TYPE_tt__IntRectangleRange:
		if (p->size < 0)
			SOAP_DELETE((tt__IntRectangleRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IntRectangleRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__IntRange:
		if (p->size < 0)
			SOAP_DELETE((tt__IntRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IntRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__FloatRange:
		if (p->size < 0)
			SOAP_DELETE((tt__FloatRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FloatRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__DurationRange:
		if (p->size < 0)
			SOAP_DELETE((tt__DurationRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DurationRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__IntList:
		if (p->size < 0)
			SOAP_DELETE((tt__IntList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IntList*)p->ptr);
		break;
	case SOAP_TYPE_tt__FloatList:
		if (p->size < 0)
			SOAP_DELETE((tt__FloatList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FloatList*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnyHolder:
		if (p->size < 0)
			SOAP_DELETE((tt__AnyHolder*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnyHolder*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__Profile:
		if (p->size < 0)
			SOAP_DELETE((tt__Profile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Profile*)p->ptr);
		break;
	case SOAP_TYPE_tt__ProfileExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ProfileExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ProfileExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ProfileExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__ProfileExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ProfileExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__ConfigurationEntity:
		if (p->size < 0)
			SOAP_DELETE((tt__ConfigurationEntity*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ConfigurationEntity*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfigurationExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfigurationExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfigurationExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__Rotate:
		if (p->size < 0)
			SOAP_DELETE((tt__Rotate*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Rotate*)p->ptr);
		break;
	case SOAP_TYPE_tt__RotateExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RotateExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RotateExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfigurationOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfigurationOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfigurationOptionsExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfigurationOptionsExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__RotateOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__RotateOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RotateOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__RotateOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RotateOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RotateOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoResolution:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoResolution*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoResolution*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoRateControl:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoRateControl*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoRateControl*)p->ptr);
		break;
	case SOAP_TYPE_tt__Mpeg4Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__Mpeg4Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Mpeg4Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__H264Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__H264Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__H264Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoEncoderOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoEncoderOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoEncoderOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoEncoderOptionsExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoEncoderOptionsExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoEncoderOptionsExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__JpegOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__JpegOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__JpegOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__Mpeg4Options:
		if (p->size < 0)
			SOAP_DELETE((tt__Mpeg4Options*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Mpeg4Options*)p->ptr);
		break;
	case SOAP_TYPE_tt__H264Options:
		if (p->size < 0)
			SOAP_DELETE((tt__H264Options*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__H264Options*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioSourceOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioSourceOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioSourceOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioEncoderConfigurationOption:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioEncoderConfigurationOption*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioEncoderConfigurationOption*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZFilter:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZFilter*)p->ptr);
		break;
	case SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy:
		if (p->size < 0)
			SOAP_DELETE((_tt__EventSubscription_SubscriptionPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__EventSubscription_SubscriptionPolicy*)p->ptr);
		break;
	case SOAP_TYPE_tt__EventSubscription:
		if (p->size < 0)
			SOAP_DELETE((tt__EventSubscription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EventSubscription*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZStatusFilterOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZStatusFilterOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZStatusFilterOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZStatusFilterOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZStatusFilterOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZStatusFilterOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoOutputExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoOutputExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoOutputExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoOutputConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoOutputConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoOutputConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoDecoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoDecoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoDecoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__H264DecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__H264DecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__H264DecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__JpegDecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__JpegDecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__JpegDecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__Mpeg4DecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__Mpeg4DecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Mpeg4DecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoDecoderConfigurationOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoDecoderConfigurationOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioOutputConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioOutputConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioOutputConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioDecoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioDecoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioDecoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__G711DecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__G711DecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__G711DecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AACDecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AACDecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AACDecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__G726DecOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__G726DecOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__G726DecOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioDecoderConfigurationOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioDecoderConfigurationOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__MulticastConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__MulticastConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MulticastConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__StreamSetup:
		if (p->size < 0)
			SOAP_DELETE((tt__StreamSetup*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__StreamSetup*)p->ptr);
		break;
	case SOAP_TYPE_tt__Transport:
		if (p->size < 0)
			SOAP_DELETE((tt__Transport*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Transport*)p->ptr);
		break;
	case SOAP_TYPE_tt__MediaUri:
		if (p->size < 0)
			SOAP_DELETE((tt__MediaUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MediaUri*)p->ptr);
		break;
	case SOAP_TYPE_tt__Scope:
		if (p->size < 0)
			SOAP_DELETE((tt__Scope*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Scope*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot3Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot3Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot3Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceLink:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceLink*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceLink*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceConnectionSetting:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceConnectionSetting*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceConnectionSetting*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceInfo:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceInfo*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceInfo*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6NetworkInterface:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6NetworkInterface*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6NetworkInterface*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv4NetworkInterface:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv4NetworkInterface*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv4NetworkInterface*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv4Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv4Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv4Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6ConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6ConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6ConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkProtocol:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkProtocol*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkProtocol*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkProtocolExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkProtocolExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkProtocolExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkHost:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkHost*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkHost*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkHostExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkHostExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkHostExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPAddress:
		if (p->size < 0)
			SOAP_DELETE((tt__IPAddress*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPAddress*)p->ptr);
		break;
	case SOAP_TYPE_tt__PrefixedIPv4Address:
		if (p->size < 0)
			SOAP_DELETE((tt__PrefixedIPv4Address*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PrefixedIPv4Address*)p->ptr);
		break;
	case SOAP_TYPE_tt__PrefixedIPv6Address:
		if (p->size < 0)
			SOAP_DELETE((tt__PrefixedIPv6Address*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PrefixedIPv6Address*)p->ptr);
		break;
	case SOAP_TYPE_tt__HostnameInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__HostnameInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__HostnameInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__HostnameInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__HostnameInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__HostnameInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__DNSInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__DNSInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DNSInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__DNSInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__DNSInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DNSInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NTPInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__NTPInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NTPInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__NTPInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NTPInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NTPInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__DynamicDNSInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__DynamicDNSInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DynamicDNSInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__DynamicDNSInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__DynamicDNSInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DynamicDNSInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceSetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceSetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceSetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceSetConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceSetConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv6NetworkInterfaceSetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv6NetworkInterfaceSetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__IPv4NetworkInterfaceSetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPv4NetworkInterfaceSetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkGateway:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkGateway*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkGateway*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkZeroConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkZeroConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkZeroConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkZeroConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkZeroConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkZeroConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkZeroConfigurationExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkZeroConfigurationExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkZeroConfigurationExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((tt__IPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE_tt__IPAddressFilterExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__IPAddressFilterExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IPAddressFilterExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11Configuration:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11Configuration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11Configuration*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SecurityConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11SecurityConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11SecurityConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SecurityConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11SecurityConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11SecurityConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11PSKSet:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11PSKSet*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11PSKSet*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11PSKSetExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11PSKSetExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11PSKSetExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterfaceSetConfigurationExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterfaceSetConfigurationExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11Capabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11Capabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11Status:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11Status*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11Status*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11AvailableNetworks:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11AvailableNetworks*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11AvailableNetworks*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11AvailableNetworksExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot11AvailableNetworksExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot11AvailableNetworksExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Capabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Capabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__CapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__CapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__CapabilitiesExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__CapabilitiesExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CapabilitiesExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__DeviceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__DeviceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DeviceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__DeviceCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__DeviceCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DeviceCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__EventCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__EventCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EventCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__IOCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__IOCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IOCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__IOCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__IOCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IOCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__IOCapabilitiesExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__IOCapabilitiesExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__IOCapabilitiesExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__MediaCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__MediaCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MediaCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__MediaCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MediaCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MediaCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RealTimeStreamingCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__RealTimeStreamingCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RealTimeStreamingCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RealTimeStreamingCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RealTimeStreamingCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ProfileCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__ProfileCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ProfileCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkCapabilitiesExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkCapabilitiesExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkCapabilitiesExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__SecurityCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__SecurityCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SecurityCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__SecurityCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SecurityCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SecurityCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SecurityCapabilitiesExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__SecurityCapabilitiesExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SecurityCapabilitiesExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemCapabilitiesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemCapabilitiesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemCapabilitiesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemCapabilitiesExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemCapabilitiesExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemCapabilitiesExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__OnvifVersion:
		if (p->size < 0)
			SOAP_DELETE((tt__OnvifVersion*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__OnvifVersion*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__DeviceIOCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__DeviceIOCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DeviceIOCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__DisplayCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__DisplayCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DisplayCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__SearchCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__SearchCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SearchCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReplayCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__ReplayCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReplayCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsDeviceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsDeviceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsDeviceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsDeviceExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsDeviceExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsDeviceExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemLog:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemLog*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemLog*)p->ptr);
		break;
	case SOAP_TYPE_tt__SupportInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__SupportInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SupportInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__BinaryData:
		if (p->size < 0)
			SOAP_DELETE((tt__BinaryData*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BinaryData*)p->ptr);
		break;
	case SOAP_TYPE_tt__AttachmentData:
		if (p->size < 0)
			SOAP_DELETE((tt__AttachmentData*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AttachmentData*)p->ptr);
		break;
	case SOAP_TYPE_tt__BackupFile:
		if (p->size < 0)
			SOAP_DELETE((tt__BackupFile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BackupFile*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemLogUriList:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemLogUriList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemLogUriList*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemLogUri:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemLogUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemLogUri*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemDateTime:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemDateTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemDateTime*)p->ptr);
		break;
	case SOAP_TYPE_tt__SystemDateTimeExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SystemDateTimeExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SystemDateTimeExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__DateTime:
		if (p->size < 0)
			SOAP_DELETE((tt__DateTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DateTime*)p->ptr);
		break;
	case SOAP_TYPE_tt__Date:
		if (p->size < 0)
			SOAP_DELETE((tt__Date*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Date*)p->ptr);
		break;
	case SOAP_TYPE_tt__Time:
		if (p->size < 0)
			SOAP_DELETE((tt__Time*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Time*)p->ptr);
		break;
	case SOAP_TYPE_tt__TimeZone:
		if (p->size < 0)
			SOAP_DELETE((tt__TimeZone*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TimeZone*)p->ptr);
		break;
	case SOAP_TYPE_tt__RemoteUser:
		if (p->size < 0)
			SOAP_DELETE((tt__RemoteUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RemoteUser*)p->ptr);
		break;
	case SOAP_TYPE_tt__User:
		if (p->size < 0)
			SOAP_DELETE((tt__User*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__User*)p->ptr);
		break;
	case SOAP_TYPE_tt__UserExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__UserExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__UserExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateGenerationParameters:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateGenerationParameters*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateGenerationParameters*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateGenerationParametersExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateGenerationParametersExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateGenerationParametersExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Certificate:
		if (p->size < 0)
			SOAP_DELETE((tt__Certificate*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Certificate*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateWithPrivateKey:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateWithPrivateKey*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateWithPrivateKey*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot1XConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__Dot1XConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Dot1XConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__EAPMethodConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__EAPMethodConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EAPMethodConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__EapMethodExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__EapMethodExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EapMethodExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__TLSConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__TLSConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TLSConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__GenericEapPwdConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__GenericEapPwdConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__GenericEapPwdConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelayOutputSettings:
		if (p->size < 0)
			SOAP_DELETE((tt__RelayOutputSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelayOutputSettings*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZNodeExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZNodeExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZNodeExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZNodeExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZNodeExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZNodeExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourSupported:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourSupported*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourSupported*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourSupportedExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourSupportedExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourSupportedExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZConfigurationExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZConfigurationExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZConfigurationExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTControlDirection:
		if (p->size < 0)
			SOAP_DELETE((tt__PTControlDirection*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTControlDirection*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTControlDirectionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTControlDirectionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTControlDirectionExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__EFlip:
		if (p->size < 0)
			SOAP_DELETE((tt__EFlip*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EFlip*)p->ptr);
		break;
	case SOAP_TYPE_tt__Reverse:
		if (p->size < 0)
			SOAP_DELETE((tt__Reverse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Reverse*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZConfigurationOptions2:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZConfigurationOptions2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZConfigurationOptions2*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTControlDirectionOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTControlDirectionOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTControlDirectionOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTControlDirectionOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTControlDirectionOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTControlDirectionOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__EFlipOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__EFlipOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EFlipOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__EFlipOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__EFlipOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EFlipOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReverseOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__ReverseOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReverseOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReverseOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ReverseOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReverseOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PanTiltLimits:
		if (p->size < 0)
			SOAP_DELETE((tt__PanTiltLimits*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PanTiltLimits*)p->ptr);
		break;
	case SOAP_TYPE_tt__ZoomLimits:
		if (p->size < 0)
			SOAP_DELETE((tt__ZoomLimits*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ZoomLimits*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZSpaces:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZSpaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZSpaces*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZSpacesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZSpacesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZSpacesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Space2DDescription:
		if (p->size < 0)
			SOAP_DELETE((tt__Space2DDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Space2DDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__Space1DDescription:
		if (p->size < 0)
			SOAP_DELETE((tt__Space1DDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Space1DDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__Vector2D:
		if (p->size < 0)
			SOAP_DELETE((tt__Vector2D*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Vector2D*)p->ptr);
		break;
	case SOAP_TYPE_tt__Vector1D:
		if (p->size < 0)
			SOAP_DELETE((tt__Vector1D*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Vector1D*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZVector:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZVector*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZVector*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZSpeed:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZSpeed*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZSpeed*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPreset:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPreset*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZMoveStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZMoveStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZMoveStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__PresetTour:
		if (p->size < 0)
			SOAP_DELETE((tt__PresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PresetTour*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourSpot:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourSpot*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourSpot*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourSpotExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourSpotExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourSpotExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourPresetDetail:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourPresetDetail*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourPresetDetail*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourTypeExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourTypeExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourTypeExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStatusExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStatusExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStatusExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStartingCondition:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStartingCondition*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStartingCondition*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStartingConditionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStartingConditionExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourSpotOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourSpotOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourSpotOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourPresetDetailOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourPresetDetailOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourPresetDetailOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourPresetDetailOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStartingConditionOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStartingConditionOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPresetTourStartingConditionOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPresetTourStartingConditionOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusStatus:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusStatus*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingSettings:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingSettings*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingSettingsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingSettingsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingSettingsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Exposure:
		if (p->size < 0)
			SOAP_DELETE((tt__Exposure*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Exposure*)p->ptr);
		break;
	case SOAP_TYPE_tt__WideDynamicRange:
		if (p->size < 0)
			SOAP_DELETE((tt__WideDynamicRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WideDynamicRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__BacklightCompensation:
		if (p->size < 0)
			SOAP_DELETE((tt__BacklightCompensation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BacklightCompensation*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__WideDynamicRangeOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__WideDynamicRangeOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WideDynamicRangeOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__BacklightCompensationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__BacklightCompensationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BacklightCompensationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__ExposureOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__ExposureOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ExposureOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalanceOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalanceOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalanceOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusMove:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusMove*)p->ptr);
		break;
	case SOAP_TYPE_tt__AbsoluteFocus:
		if (p->size < 0)
			SOAP_DELETE((tt__AbsoluteFocus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AbsoluteFocus*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelativeFocus:
		if (p->size < 0)
			SOAP_DELETE((tt__RelativeFocus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelativeFocus*)p->ptr);
		break;
	case SOAP_TYPE_tt__ContinuousFocus:
		if (p->size < 0)
			SOAP_DELETE((tt__ContinuousFocus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ContinuousFocus*)p->ptr);
		break;
	case SOAP_TYPE_tt__MoveOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__MoveOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MoveOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__AbsoluteFocusOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__AbsoluteFocusOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AbsoluteFocusOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelativeFocusOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__RelativeFocusOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelativeFocusOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__ContinuousFocusOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__ContinuousFocusOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ContinuousFocusOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalance:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalance*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalance*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingStatus20:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingStatus20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingStatus20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingStatus20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingStatus20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingStatus20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusStatus20:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusStatus20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusStatus20*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusStatus20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusStatus20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusStatus20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingSettings20:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingSettings20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingSettings20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingSettingsExtension20:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingSettingsExtension20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingSettingsExtension20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingSettingsExtension202:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingSettingsExtension202*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingSettingsExtension202*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImageStabilization:
		if (p->size < 0)
			SOAP_DELETE((tt__ImageStabilization*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImageStabilization*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImageStabilizationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ImageStabilizationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImageStabilizationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__WideDynamicRange20:
		if (p->size < 0)
			SOAP_DELETE((tt__WideDynamicRange20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WideDynamicRange20*)p->ptr);
		break;
	case SOAP_TYPE_tt__BacklightCompensation20:
		if (p->size < 0)
			SOAP_DELETE((tt__BacklightCompensation20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BacklightCompensation20*)p->ptr);
		break;
	case SOAP_TYPE_tt__Exposure20:
		if (p->size < 0)
			SOAP_DELETE((tt__Exposure20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Exposure20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingOptions20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingOptions20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingOptions20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImagingOptions20Extension2:
		if (p->size < 0)
			SOAP_DELETE((tt__ImagingOptions20Extension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImagingOptions20Extension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImageStabilizationOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__ImageStabilizationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImageStabilizationOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__ImageStabilizationOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ImageStabilizationOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ImageStabilizationOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__WideDynamicRangeOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__WideDynamicRangeOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WideDynamicRangeOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__BacklightCompensationOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__BacklightCompensationOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BacklightCompensationOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__ExposureOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__ExposureOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ExposureOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__MoveOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__MoveOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MoveOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelativeFocusOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__RelativeFocusOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelativeFocusOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalance20:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalance20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalance20*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalance20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalance20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalance20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusConfiguration20:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusConfiguration20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusConfiguration20*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusConfiguration20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusConfiguration20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusConfiguration20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalanceOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalanceOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalanceOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__WhiteBalanceOptions20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__WhiteBalanceOptions20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__WhiteBalanceOptions20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusOptions20:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusOptions20*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusOptions20*)p->ptr);
		break;
	case SOAP_TYPE_tt__FocusOptions20Extension:
		if (p->size < 0)
			SOAP_DELETE((tt__FocusOptions20Extension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FocusOptions20Extension*)p->ptr);
		break;
	case SOAP_TYPE_tt__MessageExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MessageExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MessageExtension*)p->ptr);
		break;
	case SOAP_TYPE__tt__ItemList_SimpleItem:
		if (p->size < 0)
			SOAP_DELETE((_tt__ItemList_SimpleItem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ItemList_SimpleItem*)p->ptr);
		break;
	case SOAP_TYPE__tt__ItemList_ElementItem:
		if (p->size < 0)
			SOAP_DELETE((_tt__ItemList_ElementItem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ItemList_ElementItem*)p->ptr);
		break;
	case SOAP_TYPE_tt__ItemList:
		if (p->size < 0)
			SOAP_DELETE((tt__ItemList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ItemList*)p->ptr);
		break;
	case SOAP_TYPE_tt__ItemListExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ItemListExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ItemListExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__MessageDescription:
		if (p->size < 0)
			SOAP_DELETE((tt__MessageDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MessageDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__MessageDescriptionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MessageDescriptionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MessageDescriptionExtension*)p->ptr);
		break;
	case SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription:
		if (p->size < 0)
			SOAP_DELETE((_tt__ItemListDescription_SimpleItemDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ItemListDescription_SimpleItemDescription*)p->ptr);
		break;
	case SOAP_TYPE__tt__ItemListDescription_ElementItemDescription:
		if (p->size < 0)
			SOAP_DELETE((_tt__ItemListDescription_ElementItemDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ItemListDescription_ElementItemDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__ItemListDescription:
		if (p->size < 0)
			SOAP_DELETE((tt__ItemListDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ItemListDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__ItemListDescriptionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ItemListDescriptionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ItemListDescriptionExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Vector:
		if (p->size < 0)
			SOAP_DELETE((tt__Vector*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Vector*)p->ptr);
		break;
	case SOAP_TYPE_tt__Rectangle:
		if (p->size < 0)
			SOAP_DELETE((tt__Rectangle*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Rectangle*)p->ptr);
		break;
	case SOAP_TYPE_tt__Polygon:
		if (p->size < 0)
			SOAP_DELETE((tt__Polygon*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Polygon*)p->ptr);
		break;
	case SOAP_TYPE_tt__Polyline:
		if (p->size < 0)
			SOAP_DELETE((tt__Polyline*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Polyline*)p->ptr);
		break;
	case SOAP_TYPE_tt__Color:
		if (p->size < 0)
			SOAP_DELETE((tt__Color*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Color*)p->ptr);
		break;
	case SOAP_TYPE_tt__ColorCovariance:
		if (p->size < 0)
			SOAP_DELETE((tt__ColorCovariance*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ColorCovariance*)p->ptr);
		break;
	case SOAP_TYPE_tt__Appearance:
		if (p->size < 0)
			SOAP_DELETE((tt__Appearance*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Appearance*)p->ptr);
		break;
	case SOAP_TYPE_tt__AppearanceExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AppearanceExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AppearanceExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ShapeDescriptor:
		if (p->size < 0)
			SOAP_DELETE((tt__ShapeDescriptor*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ShapeDescriptor*)p->ptr);
		break;
	case SOAP_TYPE_tt__ShapeDescriptorExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ShapeDescriptorExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ShapeDescriptorExtension*)p->ptr);
		break;
	case SOAP_TYPE__tt__ColorDescriptor_ColorCluster:
		if (p->size < 0)
			SOAP_DELETE((_tt__ColorDescriptor_ColorCluster*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ColorDescriptor_ColorCluster*)p->ptr);
		break;
	case SOAP_TYPE_tt__ColorDescriptor:
		if (p->size < 0)
			SOAP_DELETE((tt__ColorDescriptor*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ColorDescriptor*)p->ptr);
		break;
	case SOAP_TYPE_tt__ColorDescriptorExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ColorDescriptorExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ColorDescriptorExtension*)p->ptr);
		break;
	case SOAP_TYPE__tt__ClassDescriptor_ClassCandidate:
		if (p->size < 0)
			SOAP_DELETE((_tt__ClassDescriptor_ClassCandidate*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ClassDescriptor_ClassCandidate*)p->ptr);
		break;
	case SOAP_TYPE_tt__ClassDescriptor:
		if (p->size < 0)
			SOAP_DELETE((tt__ClassDescriptor*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ClassDescriptor*)p->ptr);
		break;
	case SOAP_TYPE_tt__ClassDescriptorExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ClassDescriptorExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ClassDescriptorExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ClassDescriptorExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__ClassDescriptorExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ClassDescriptorExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__OtherType:
		if (p->size < 0)
			SOAP_DELETE((tt__OtherType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__OtherType*)p->ptr);
		break;
	case SOAP_TYPE_tt__ObjectExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ObjectExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ObjectExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Transformation:
		if (p->size < 0)
			SOAP_DELETE((tt__Transformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Transformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__TransformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__TransformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TransformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Frame:
		if (p->size < 0)
			SOAP_DELETE((tt__Frame*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Frame*)p->ptr);
		break;
	case SOAP_TYPE_tt__FrameExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__FrameExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FrameExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__FrameExtension2:
		if (p->size < 0)
			SOAP_DELETE((tt__FrameExtension2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FrameExtension2*)p->ptr);
		break;
	case SOAP_TYPE_tt__Merge:
		if (p->size < 0)
			SOAP_DELETE((tt__Merge*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Merge*)p->ptr);
		break;
	case SOAP_TYPE_tt__Split:
		if (p->size < 0)
			SOAP_DELETE((tt__Split*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Split*)p->ptr);
		break;
	case SOAP_TYPE_tt__Rename:
		if (p->size < 0)
			SOAP_DELETE((tt__Rename*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Rename*)p->ptr);
		break;
	case SOAP_TYPE_tt__ObjectId:
		if (p->size < 0)
			SOAP_DELETE((tt__ObjectId*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ObjectId*)p->ptr);
		break;
	case SOAP_TYPE__tt__Behaviour_Removed:
		if (p->size < 0)
			SOAP_DELETE((_tt__Behaviour_Removed*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__Behaviour_Removed*)p->ptr);
		break;
	case SOAP_TYPE__tt__Behaviour_Idle:
		if (p->size < 0)
			SOAP_DELETE((_tt__Behaviour_Idle*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__Behaviour_Idle*)p->ptr);
		break;
	case SOAP_TYPE_tt__Behaviour:
		if (p->size < 0)
			SOAP_DELETE((tt__Behaviour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Behaviour*)p->ptr);
		break;
	case SOAP_TYPE_tt__BehaviourExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__BehaviourExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__BehaviourExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__ObjectTree:
		if (p->size < 0)
			SOAP_DELETE((tt__ObjectTree*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ObjectTree*)p->ptr);
		break;
	case SOAP_TYPE_tt__ObjectTreeExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ObjectTreeExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ObjectTreeExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__MotionInCells:
		if (p->size < 0)
			SOAP_DELETE((tt__MotionInCells*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MotionInCells*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RuleEngineConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__RuleEngineConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RuleEngineConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__RuleEngineConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RuleEngineConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RuleEngineConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Config:
		if (p->size < 0)
			SOAP_DELETE((tt__Config*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Config*)p->ptr);
		break;
	case SOAP_TYPE__tt__ConfigDescription_Messages:
		if (p->size < 0)
			SOAP_DELETE((_tt__ConfigDescription_Messages*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__ConfigDescription_Messages*)p->ptr);
		break;
	case SOAP_TYPE_tt__ConfigDescription:
		if (p->size < 0)
			SOAP_DELETE((tt__ConfigDescription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ConfigDescription*)p->ptr);
		break;
	case SOAP_TYPE_tt__ConfigDescriptionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ConfigDescriptionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ConfigDescriptionExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SupportedRules:
		if (p->size < 0)
			SOAP_DELETE((tt__SupportedRules*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SupportedRules*)p->ptr);
		break;
	case SOAP_TYPE_tt__SupportedRulesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SupportedRulesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SupportedRulesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SupportedAnalyticsModules:
		if (p->size < 0)
			SOAP_DELETE((tt__SupportedAnalyticsModules*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SupportedAnalyticsModules*)p->ptr);
		break;
	case SOAP_TYPE_tt__SupportedAnalyticsModulesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SupportedAnalyticsModulesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SupportedAnalyticsModulesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PolygonConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__PolygonConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PolygonConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__PolylineArray:
		if (p->size < 0)
			SOAP_DELETE((tt__PolylineArray*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PolylineArray*)p->ptr);
		break;
	case SOAP_TYPE_tt__PolylineArrayExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PolylineArrayExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PolylineArrayExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PolylineArrayConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__PolylineArrayConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PolylineArrayConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__MotionExpression:
		if (p->size < 0)
			SOAP_DELETE((tt__MotionExpression*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MotionExpression*)p->ptr);
		break;
	case SOAP_TYPE_tt__MotionExpressionConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__MotionExpressionConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MotionExpressionConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__CellLayout:
		if (p->size < 0)
			SOAP_DELETE((tt__CellLayout*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CellLayout*)p->ptr);
		break;
	case SOAP_TYPE___tt__union_MetadataStream:
		if (p->size < 0)
			SOAP_DELETE((__tt__union_MetadataStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((__tt__union_MetadataStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataStream:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataStreamExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataStreamExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataStreamExtension*)p->ptr);
		break;
	case SOAP_TYPE___tt__union_VideoAnalyticsStream:
		if (p->size < 0)
			SOAP_DELETE((__tt__union_VideoAnalyticsStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((__tt__union_VideoAnalyticsStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoAnalyticsStream:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoAnalyticsStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoAnalyticsStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoAnalyticsStreamExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoAnalyticsStreamExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoAnalyticsStreamExtension*)p->ptr);
		break;
	case SOAP_TYPE___tt__union_PTZStream:
		if (p->size < 0)
			SOAP_DELETE((__tt__union_PTZStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((__tt__union_PTZStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZStream:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZStreamExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZStreamExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZStreamExtension*)p->ptr);
		break;
	case SOAP_TYPE___tt__union_EventStream:
		if (p->size < 0)
			SOAP_DELETE((__tt__union_EventStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((__tt__union_EventStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__EventStream:
		if (p->size < 0)
			SOAP_DELETE((tt__EventStream*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EventStream*)p->ptr);
		break;
	case SOAP_TYPE_tt__EventStreamExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__EventStreamExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EventStreamExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PaneConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__PaneConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PaneConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__PaneLayout:
		if (p->size < 0)
			SOAP_DELETE((tt__PaneLayout*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PaneLayout*)p->ptr);
		break;
	case SOAP_TYPE_tt__Layout:
		if (p->size < 0)
			SOAP_DELETE((tt__Layout*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Layout*)p->ptr);
		break;
	case SOAP_TYPE_tt__LayoutExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__LayoutExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__LayoutExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__CodingCapabilities:
		if (p->size < 0)
			SOAP_DELETE((tt__CodingCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CodingCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_tt__LayoutOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__LayoutOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__LayoutOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__LayoutOptionsExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__LayoutOptionsExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__LayoutOptionsExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PaneLayoutOptions:
		if (p->size < 0)
			SOAP_DELETE((tt__PaneLayoutOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PaneLayoutOptions*)p->ptr);
		break;
	case SOAP_TYPE_tt__PaneOptionExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__PaneOptionExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PaneOptionExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__Receiver:
		if (p->size < 0)
			SOAP_DELETE((tt__Receiver*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Receiver*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReceiverStateInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__ReceiverStateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReceiverStateInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__SourceReference:
		if (p->size < 0)
			SOAP_DELETE((tt__SourceReference*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SourceReference*)p->ptr);
		break;
	case SOAP_TYPE_tt__DateTimeRange:
		if (p->size < 0)
			SOAP_DELETE((tt__DateTimeRange*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DateTimeRange*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingSummary:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingSummary*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingSummary*)p->ptr);
		break;
	case SOAP_TYPE_tt__SearchScope:
		if (p->size < 0)
			SOAP_DELETE((tt__SearchScope*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SearchScope*)p->ptr);
		break;
	case SOAP_TYPE_tt__SearchScopeExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SearchScopeExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SearchScopeExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZPositionFilter:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZPositionFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZPositionFilter*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataFilter:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataFilter*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindRecordingResultList:
		if (p->size < 0)
			SOAP_DELETE((tt__FindRecordingResultList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindRecordingResultList*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindEventResultList:
		if (p->size < 0)
			SOAP_DELETE((tt__FindEventResultList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindEventResultList*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindEventResult:
		if (p->size < 0)
			SOAP_DELETE((tt__FindEventResult*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindEventResult*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindPTZPositionResultList:
		if (p->size < 0)
			SOAP_DELETE((tt__FindPTZPositionResultList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindPTZPositionResultList*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindPTZPositionResult:
		if (p->size < 0)
			SOAP_DELETE((tt__FindPTZPositionResult*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindPTZPositionResult*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindMetadataResultList:
		if (p->size < 0)
			SOAP_DELETE((tt__FindMetadataResultList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindMetadataResultList*)p->ptr);
		break;
	case SOAP_TYPE_tt__FindMetadataResult:
		if (p->size < 0)
			SOAP_DELETE((tt__FindMetadataResult*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__FindMetadataResult*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingSourceInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingSourceInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingSourceInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__MediaAttributes:
		if (p->size < 0)
			SOAP_DELETE((tt__MediaAttributes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MediaAttributes*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackAttributes:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackAttributes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackAttributes*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackAttributesExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackAttributesExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackAttributesExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoAttributes:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoAttributes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoAttributes*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioAttributes:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioAttributes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioAttributes*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataAttributes:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataAttributes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataAttributes*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__TrackConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__TrackConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__TrackConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__GetRecordingsResponseItem:
		if (p->size < 0)
			SOAP_DELETE((tt__GetRecordingsResponseItem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__GetRecordingsResponseItem*)p->ptr);
		break;
	case SOAP_TYPE_tt__GetTracksResponseList:
		if (p->size < 0)
			SOAP_DELETE((tt__GetTracksResponseList*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__GetTracksResponseList*)p->ptr);
		break;
	case SOAP_TYPE_tt__GetTracksResponseItem:
		if (p->size < 0)
			SOAP_DELETE((tt__GetTracksResponseItem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__GetTracksResponseItem*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobSource:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobSource*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobSource*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobSourceExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobSourceExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobSourceExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobTrack:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobTrack*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobTrack*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobStateInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobStateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobStateInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobStateInformationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobStateInformationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobStateInformationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobStateSource:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobStateSource*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobStateSource*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobStateTracks:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobStateTracks*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobStateTracks*)p->ptr);
		break;
	case SOAP_TYPE_tt__RecordingJobStateTrack:
		if (p->size < 0)
			SOAP_DELETE((tt__RecordingJobStateTrack*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RecordingJobStateTrack*)p->ptr);
		break;
	case SOAP_TYPE_tt__GetRecordingJobsResponseItem:
		if (p->size < 0)
			SOAP_DELETE((tt__GetRecordingJobsResponseItem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__GetRecordingJobsResponseItem*)p->ptr);
		break;
	case SOAP_TYPE_tt__ReplayConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__ReplayConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ReplayConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsDeviceEngineConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsDeviceEngineConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsDeviceEngineConfigurationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsDeviceEngineConfigurationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__EngineConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__EngineConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EngineConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineInputInfo:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineInputInfo*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineInputInfo*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineInputInfoExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineInputInfoExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__SourceIdentification:
		if (p->size < 0)
			SOAP_DELETE((tt__SourceIdentification*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SourceIdentification*)p->ptr);
		break;
	case SOAP_TYPE_tt__SourceIdentificationExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__SourceIdentificationExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__SourceIdentificationExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataInput:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataInput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataInput*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataInputExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataInputExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataInputExtension*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsStateInformation:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsStateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsStateInformation*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsState:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsState*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsState*)p->ptr);
		break;
	case SOAP_TYPE_tt__ActionEngineEventPayload:
		if (p->size < 0)
			SOAP_DELETE((tt__ActionEngineEventPayload*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ActionEngineEventPayload*)p->ptr);
		break;
	case SOAP_TYPE_tt__ActionEngineEventPayloadExtension:
		if (p->size < 0)
			SOAP_DELETE((tt__ActionEngineEventPayloadExtension*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__ActionEngineEventPayloadExtension*)p->ptr);
		break;
	case SOAP_TYPE__tt__Message:
		if (p->size < 0)
			SOAP_DELETE((_tt__Message*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tt__Message*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__QueryExpressionType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__QueryExpressionType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__QueryExpressionType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__TopicExpressionType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__TopicExpressionType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__TopicExpressionType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__FilterType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__FilterType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__FilterType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__SubscriptionPolicyType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__SubscriptionPolicyType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__SubscriptionPolicyType*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__NotificationMessageHolderType_Message:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__NotificationMessageHolderType_Message*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__NotificationMessageHolderType_Message*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__NotificationMessageHolderType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__NotificationMessageHolderType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__NotificationMessageHolderType*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__NotificationProducerRP:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__NotificationProducerRP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__NotificationProducerRP*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__SubscriptionManagerRP:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__SubscriptionManagerRP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__SubscriptionManagerRP*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__Notify:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__Notify*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__Notify*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__UseRaw:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__UseRaw*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__UseRaw*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__Subscribe_SubscriptionPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__Subscribe_SubscriptionPolicy*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__Subscribe:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__Subscribe*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__Subscribe*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__SubscribeResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__SubscribeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__SubscribeResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__GetCurrentMessage:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__GetCurrentMessage*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__GetCurrentMessage*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__GetCurrentMessageResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__GetCurrentMessageResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__GetCurrentMessageResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__GetMessages:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__GetMessages*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__GetMessages*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__GetMessagesResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__GetMessagesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__GetMessagesResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__DestroyPullPoint:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__DestroyPullPoint*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__DestroyPullPoint*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__DestroyPullPointResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__DestroyPullPointResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__DestroyPullPointResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__CreatePullPoint:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__CreatePullPoint*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__CreatePullPoint*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__CreatePullPointResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__CreatePullPointResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__CreatePullPointResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__Renew:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__Renew*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__Renew*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__RenewResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__RenewResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__RenewResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__Unsubscribe:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__Unsubscribe*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__Unsubscribe*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__UnsubscribeResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__UnsubscribeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__UnsubscribeResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__PauseSubscription:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__PauseSubscription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__PauseSubscription*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__PauseSubscriptionResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__PauseSubscriptionResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__PauseSubscriptionResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__ResumeSubscription:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__ResumeSubscription*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__ResumeSubscription*)p->ptr);
		break;
	case SOAP_TYPE__wsnt__ResumeSubscriptionResponse:
		if (p->size < 0)
			SOAP_DELETE((_wsnt__ResumeSubscriptionResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsnt__ResumeSubscriptionResponse*)p->ptr);
		break;
	case SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode:
		if (p->size < 0)
			SOAP_DELETE((_wsrfbf__BaseFaultType_ErrorCode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsrfbf__BaseFaultType_ErrorCode*)p->ptr);
		break;
	case SOAP_TYPE__wsrfbf__BaseFaultType_Description:
		if (p->size < 0)
			SOAP_DELETE((_wsrfbf__BaseFaultType_Description*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsrfbf__BaseFaultType_Description*)p->ptr);
		break;
	case SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause:
		if (p->size < 0)
			SOAP_DELETE((_wsrfbf__BaseFaultType_FaultCause*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wsrfbf__BaseFaultType_FaultCause*)p->ptr);
		break;
	case SOAP_TYPE_wsrfbf__BaseFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsrfbf__BaseFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsrfbf__BaseFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wstop__Documentation:
		if (p->size < 0)
			SOAP_DELETE((wstop__Documentation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__Documentation*)p->ptr);
		break;
	case SOAP_TYPE_wstop__ExtensibleDocumented:
		if (p->size < 0)
			SOAP_DELETE((wstop__ExtensibleDocumented*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__ExtensibleDocumented*)p->ptr);
		break;
	case SOAP_TYPE_wstop__QueryExpressionType:
		if (p->size < 0)
			SOAP_DELETE((wstop__QueryExpressionType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__QueryExpressionType*)p->ptr);
		break;
	case SOAP_TYPE_trt__Capabilities:
		if (p->size < 0)
			SOAP_DELETE((trt__Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((trt__Capabilities*)p->ptr);
		break;
	case SOAP_TYPE_trt__ProfileCapabilities:
		if (p->size < 0)
			SOAP_DELETE((trt__ProfileCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((trt__ProfileCapabilities*)p->ptr);
		break;
	case SOAP_TYPE_trt__StreamingCapabilities:
		if (p->size < 0)
			SOAP_DELETE((trt__StreamingCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((trt__StreamingCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetServiceCapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetServiceCapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetServiceCapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSources:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSources*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSources*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourcesResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourcesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourcesResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSources:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSources*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSources*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourcesResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourcesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourcesResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputs:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputs*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputs*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__CreateProfile:
		if (p->size < 0)
			SOAP_DELETE((_trt__CreateProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__CreateProfile*)p->ptr);
		break;
	case SOAP_TYPE__trt__CreateProfileResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__CreateProfileResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__CreateProfileResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetProfile:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetProfile*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetProfileResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetProfileResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetProfileResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetProfiles:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetProfiles*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetProfiles*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetProfilesResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetProfilesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetProfilesResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddPTZConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddPTZConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddPTZConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddPTZConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddPTZConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddPTZConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemovePTZConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemovePTZConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemovePTZConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemovePTZConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemovePTZConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemovePTZConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddVideoAnalyticsConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddVideoAnalyticsConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveVideoAnalyticsConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveVideoAnalyticsConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddMetadataConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddMetadataConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddMetadataConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveMetadataConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveMetadataConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveMetadataConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioOutputConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioOutputConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioOutputConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioOutputConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioOutputConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__AddAudioDecoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__AddAudioDecoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__RemoveAudioDecoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__RemoveAudioDecoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__DeleteProfile:
		if (p->size < 0)
			SOAP_DELETE((_trt__DeleteProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__DeleteProfile*)p->ptr);
		break;
	case SOAP_TYPE__trt__DeleteProfileResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__DeleteProfileResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__DeleteProfileResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoAnalyticsConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoAnalyticsConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoAnalyticsConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoAnalyticsConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoAnalyticsConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoAnalyticsConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoAnalyticsConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoEncoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoEncoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoSourceConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoSourceConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioEncoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioEncoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioSourceConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioSourceConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoAnalyticsConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoAnalyticsConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleMetadataConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleMetadataConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleMetadataConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleMetadataConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleMetadataConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioOutputConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioOutputConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioOutputConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioOutputConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioDecoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioDecoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetCompatibleAudioDecoderConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetCompatibleAudioDecoderConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioEncoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioEncoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioSourceConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioSourceConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioSourceConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetVideoAnalyticsConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetVideoAnalyticsConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetMetadataConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetMetadataConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetMetadataConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioOutputConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioOutputConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioOutputConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetAudioDecoderConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetAudioDecoderConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoSourceConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoSourceConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetVideoEncoderConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetVideoEncoderConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioSourceConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioSourceConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioEncoderConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioEncoderConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetMetadataConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetMetadataConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioOutputConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioOutputConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetAudioDecoderConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetAudioDecoderConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetGuaranteedNumberOfVideoEncoderInstances*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetGuaranteedNumberOfVideoEncoderInstances*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetStreamUri:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetStreamUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetStreamUri*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetStreamUriResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetStreamUriResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetStreamUriResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__StartMulticastStreaming:
		if (p->size < 0)
			SOAP_DELETE((_trt__StartMulticastStreaming*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__StartMulticastStreaming*)p->ptr);
		break;
	case SOAP_TYPE__trt__StartMulticastStreamingResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__StartMulticastStreamingResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__StartMulticastStreamingResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__StopMulticastStreaming:
		if (p->size < 0)
			SOAP_DELETE((_trt__StopMulticastStreaming*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__StopMulticastStreaming*)p->ptr);
		break;
	case SOAP_TYPE__trt__StopMulticastStreamingResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__StopMulticastStreamingResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__StopMulticastStreamingResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetSynchronizationPoint:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetSynchronizationPoint*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetSynchronizationPoint*)p->ptr);
		break;
	case SOAP_TYPE__trt__SetSynchronizationPointResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__SetSynchronizationPointResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__SetSynchronizationPointResponse*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetSnapshotUri:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetSnapshotUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetSnapshotUri*)p->ptr);
		break;
	case SOAP_TYPE__trt__GetSnapshotUriResponse:
		if (p->size < 0)
			SOAP_DELETE((_trt__GetSnapshotUriResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_trt__GetSnapshotUriResponse*)p->ptr);
		break;
	case SOAP_TYPE_tptz__Capabilities:
		if (p->size < 0)
			SOAP_DELETE((tptz__Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tptz__Capabilities*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetServiceCapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetServiceCapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetServiceCapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetNodes:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetNodes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetNodes*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetNodesResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetNodesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetNodesResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetNode:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetNode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetNode*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetNodeResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetNodeResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetNodeResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfigurations:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfigurations*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfigurationsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfigurationsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfigurationsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tptz__SetConfigurationResponse_sequence:
		if (p->size < 0)
			SOAP_DELETE((__tptz__SetConfigurationResponse_sequence*)p->ptr);
		else
			SOAP_DELETE_ARRAY((__tptz__SetConfigurationResponse_sequence*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetConfigurationResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetConfigurationResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetConfigurationResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetConfigurationOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetConfigurationOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetConfigurationOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SendAuxiliaryCommand:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SendAuxiliaryCommand*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SendAuxiliaryCommand*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SendAuxiliaryCommandResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SendAuxiliaryCommandResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SendAuxiliaryCommandResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresets:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresets*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresets*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetPreset:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetPreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetPreset*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetPresetResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetPresetResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetPresetResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RemovePreset:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RemovePreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RemovePreset*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RemovePresetResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RemovePresetResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RemovePresetResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GotoPreset:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GotoPreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GotoPreset*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GotoPresetResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GotoPresetResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GotoPresetResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetStatus:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetStatus*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetStatusResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetStatusResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetStatusResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GotoHomePosition:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GotoHomePosition*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GotoHomePosition*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GotoHomePositionResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GotoHomePositionResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GotoHomePositionResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetHomePosition:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetHomePosition*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetHomePosition*)p->ptr);
		break;
	case SOAP_TYPE__tptz__SetHomePositionResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__SetHomePositionResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__SetHomePositionResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__ContinuousMove:
		if (p->size < 0)
			SOAP_DELETE((_tptz__ContinuousMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__ContinuousMove*)p->ptr);
		break;
	case SOAP_TYPE__tptz__ContinuousMoveResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__ContinuousMoveResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__ContinuousMoveResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RelativeMove:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RelativeMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RelativeMove*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RelativeMoveResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RelativeMoveResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RelativeMoveResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__AbsoluteMove:
		if (p->size < 0)
			SOAP_DELETE((_tptz__AbsoluteMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__AbsoluteMove*)p->ptr);
		break;
	case SOAP_TYPE__tptz__AbsoluteMoveResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__AbsoluteMoveResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__AbsoluteMoveResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__Stop:
		if (p->size < 0)
			SOAP_DELETE((_tptz__Stop*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__Stop*)p->ptr);
		break;
	case SOAP_TYPE__tptz__StopResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__StopResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__StopResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetTours:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetTours*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetTours*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetToursResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetToursResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetToursResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetTour:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetTour*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetTourResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetTourResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetTourResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetTourOptions:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetTourOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetTourOptions*)p->ptr);
		break;
	case SOAP_TYPE__tptz__GetPresetTourOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__GetPresetTourOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__GetPresetTourOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__CreatePresetTour:
		if (p->size < 0)
			SOAP_DELETE((_tptz__CreatePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__CreatePresetTour*)p->ptr);
		break;
	case SOAP_TYPE__tptz__CreatePresetTourResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__CreatePresetTourResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__CreatePresetTourResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__ModifyPresetTour:
		if (p->size < 0)
			SOAP_DELETE((_tptz__ModifyPresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__ModifyPresetTour*)p->ptr);
		break;
	case SOAP_TYPE__tptz__ModifyPresetTourResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__ModifyPresetTourResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__ModifyPresetTourResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__OperatePresetTour:
		if (p->size < 0)
			SOAP_DELETE((_tptz__OperatePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__OperatePresetTour*)p->ptr);
		break;
	case SOAP_TYPE__tptz__OperatePresetTourResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__OperatePresetTourResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__OperatePresetTourResponse*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RemovePresetTour:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RemovePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RemovePresetTour*)p->ptr);
		break;
	case SOAP_TYPE__tptz__RemovePresetTourResponse:
		if (p->size < 0)
			SOAP_DELETE((_tptz__RemovePresetTourResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_tptz__RemovePresetTourResponse*)p->ptr);
		break;
	case SOAP_TYPE_timg__Capabilities:
		if (p->size < 0)
			SOAP_DELETE((timg__Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((timg__Capabilities*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetServiceCapabilitiesResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetServiceCapabilitiesResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetServiceCapabilitiesResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetImagingSettings:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetImagingSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetImagingSettings*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetImagingSettingsResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetImagingSettingsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetImagingSettingsResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__SetImagingSettings:
		if (p->size < 0)
			SOAP_DELETE((_timg__SetImagingSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__SetImagingSettings*)p->ptr);
		break;
	case SOAP_TYPE__timg__SetImagingSettingsResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__SetImagingSettingsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__SetImagingSettingsResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetOptions:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetOptions*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__Move:
		if (p->size < 0)
			SOAP_DELETE((_timg__Move*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__Move*)p->ptr);
		break;
	case SOAP_TYPE__timg__MoveResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__MoveResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__MoveResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetMoveOptions:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetMoveOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetMoveOptions*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetMoveOptionsResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetMoveOptionsResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetMoveOptionsResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__Stop:
		if (p->size < 0)
			SOAP_DELETE((_timg__Stop*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__Stop*)p->ptr);
		break;
	case SOAP_TYPE__timg__StopResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__StopResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__StopResponse*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetStatus:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetStatus*)p->ptr);
		break;
	case SOAP_TYPE__timg__GetStatusResponse:
		if (p->size < 0)
			SOAP_DELETE((_timg__GetStatusResponse*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_timg__GetStatusResponse*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSource:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSource*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSource*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioSource:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioSource*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioSource*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__JpegOptions2:
		if (p->size < 0)
			SOAP_DELETE((tt__JpegOptions2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__JpegOptions2*)p->ptr);
		break;
	case SOAP_TYPE_tt__Mpeg4Options2:
		if (p->size < 0)
			SOAP_DELETE((tt__Mpeg4Options2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Mpeg4Options2*)p->ptr);
		break;
	case SOAP_TYPE_tt__H264Options2:
		if (p->size < 0)
			SOAP_DELETE((tt__H264Options2*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__H264Options2*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__MetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__MetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__MetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoOutput:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoOutput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoOutput*)p->ptr);
		break;
	case SOAP_TYPE_tt__VideoOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__VideoOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__VideoOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioOutput:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioOutput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioOutput*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__AudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__AudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__NetworkInterface:
		if (p->size < 0)
			SOAP_DELETE((tt__NetworkInterface*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__NetworkInterface*)p->ptr);
		break;
	case SOAP_TYPE_tt__CertificateUsage:
		if (p->size < 0)
			SOAP_DELETE((tt__CertificateUsage*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__CertificateUsage*)p->ptr);
		break;
	case SOAP_TYPE_tt__RelayOutput:
		if (p->size < 0)
			SOAP_DELETE((tt__RelayOutput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__RelayOutput*)p->ptr);
		break;
	case SOAP_TYPE_tt__DigitalInput:
		if (p->size < 0)
			SOAP_DELETE((tt__DigitalInput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__DigitalInput*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZNode:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZNode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZNode*)p->ptr);
		break;
	case SOAP_TYPE_tt__PTZConfiguration:
		if (p->size < 0)
			SOAP_DELETE((tt__PTZConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__PTZConfiguration*)p->ptr);
		break;
	case SOAP_TYPE_tt__Object:
		if (p->size < 0)
			SOAP_DELETE((tt__Object*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__Object*)p->ptr);
		break;
	case SOAP_TYPE_tt__EventFilter:
		if (p->size < 0)
			SOAP_DELETE((tt__EventFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__EventFilter*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngine:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngine*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngine*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineInput:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineInput*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineInput*)p->ptr);
		break;
	case SOAP_TYPE_tt__AnalyticsEngineControl:
		if (p->size < 0)
			SOAP_DELETE((tt__AnalyticsEngineControl*)p->ptr);
		else
			SOAP_DELETE_ARRAY((tt__AnalyticsEngineControl*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__SubscribeCreationFailedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__SubscribeCreationFailedFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__InvalidFilterFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__InvalidFilterFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__InvalidFilterFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__TopicExpressionDialectUnknownFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__TopicExpressionDialectUnknownFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__InvalidTopicExpressionFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__InvalidTopicExpressionFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__TopicNotSupportedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__TopicNotSupportedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__TopicNotSupportedFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__MultipleTopicsSpecifiedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__MultipleTopicsSpecifiedFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__InvalidProducerPropertiesExpressionFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__InvalidProducerPropertiesExpressionFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__InvalidMessageContentExpressionFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__InvalidMessageContentExpressionFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnrecognizedPolicyRequestFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnrecognizedPolicyRequestFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnsupportedPolicyRequestFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnsupportedPolicyRequestFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__NotifyMessageNotSupportedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__NotifyMessageNotSupportedFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnacceptableInitialTerminationTimeFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnacceptableInitialTerminationTimeFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__NoCurrentMessageOnTopicFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__NoCurrentMessageOnTopicFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnableToGetMessagesFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnableToGetMessagesFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnableToGetMessagesFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnableToDestroyPullPointFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnableToDestroyPullPointFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnableToCreatePullPointFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnableToCreatePullPointFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnacceptableTerminationTimeFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnacceptableTerminationTimeFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__UnableToDestroySubscriptionFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__UnableToDestroySubscriptionFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__PauseFailedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__PauseFailedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__PauseFailedFaultType*)p->ptr);
		break;
	case SOAP_TYPE_wsnt__ResumeFailedFaultType:
		if (p->size < 0)
			SOAP_DELETE((wsnt__ResumeFailedFaultType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wsnt__ResumeFailedFaultType*)p->ptr);
		break;
	case SOAP_TYPE__wstop__TopicNamespaceType_Topic:
		if (p->size < 0)
			SOAP_DELETE((_wstop__TopicNamespaceType_Topic*)p->ptr);
		else
			SOAP_DELETE_ARRAY((_wstop__TopicNamespaceType_Topic*)p->ptr);
		break;
	case SOAP_TYPE_wstop__TopicNamespaceType:
		if (p->size < 0)
			SOAP_DELETE((wstop__TopicNamespaceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__TopicNamespaceType*)p->ptr);
		break;
	case SOAP_TYPE_wstop__TopicType:
		if (p->size < 0)
			SOAP_DELETE((wstop__TopicType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__TopicType*)p->ptr);
		break;
	case SOAP_TYPE_wstop__TopicSetType:
		if (p->size < 0)
			SOAP_DELETE((wstop__TopicSetType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((wstop__TopicSetType*)p->ptr);
		break;
	case SOAP_TYPE___dn__Hello:
		if (p->size < 0)
			SOAP_DELETE((struct __dn__Hello*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __dn__Hello*)p->ptr);
		break;
	case SOAP_TYPE___dn__Bye:
		if (p->size < 0)
			SOAP_DELETE((struct __dn__Bye*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __dn__Bye*)p->ptr);
		break;
	case SOAP_TYPE___dn__Probe:
		if (p->size < 0)
			SOAP_DELETE((struct __dn__Probe*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __dn__Probe*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetServices:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetServices*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetServices*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDeviceInformation:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDeviceInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDeviceInformation*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetSystemDateAndTime:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetSystemDateAndTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetSystemDateAndTime*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetSystemDateAndTime:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetSystemDateAndTime*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetSystemDateAndTime*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetSystemFactoryDefault:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetSystemFactoryDefault*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetSystemFactoryDefault*)p->ptr);
		break;
	case SOAP_TYPE___tds__UpgradeSystemFirmware:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__UpgradeSystemFirmware*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__UpgradeSystemFirmware*)p->ptr);
		break;
	case SOAP_TYPE___tds__SystemReboot:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SystemReboot*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SystemReboot*)p->ptr);
		break;
	case SOAP_TYPE___tds__RestoreSystem:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__RestoreSystem*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__RestoreSystem*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetSystemBackup:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetSystemBackup*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetSystemBackup*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetSystemLog:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetSystemLog*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetSystemLog*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetSystemSupportInformation:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetSystemSupportInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetSystemSupportInformation*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetScopes:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetScopes*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetScopes:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetScopes*)p->ptr);
		break;
	case SOAP_TYPE___tds__AddScopes:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__AddScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__AddScopes*)p->ptr);
		break;
	case SOAP_TYPE___tds__RemoveScopes:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__RemoveScopes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__RemoveScopes*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetRemoteDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetRemoteDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetRemoteDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetRemoteDiscoveryMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetRemoteDiscoveryMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetRemoteDiscoveryMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDPAddresses:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDPAddresses*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDPAddresses*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetEndpointReference:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetEndpointReference*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetEndpointReference*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetRemoteUser:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetRemoteUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetRemoteUser*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetRemoteUser:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetRemoteUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetRemoteUser*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetUsers:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetUsers*)p->ptr);
		break;
	case SOAP_TYPE___tds__CreateUsers:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__CreateUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__CreateUsers*)p->ptr);
		break;
	case SOAP_TYPE___tds__DeleteUsers:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__DeleteUsers*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__DeleteUsers*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetUser:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetUser*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetUser*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetWsdlUrl:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetWsdlUrl*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetWsdlUrl*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetCapabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetCapabilities*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetDPAddresses:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetDPAddresses*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetDPAddresses*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetHostname:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetHostname*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetHostname*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetHostname:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetHostname*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetHostname*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetHostnameFromDHCP:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetHostnameFromDHCP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetHostnameFromDHCP*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDNS:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDNS*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetDNS:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetDNS*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetNTP:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetNTP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetNTP*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetNTP:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetNTP*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetNTP*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDynamicDNS:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDynamicDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDynamicDNS*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetDynamicDNS:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetDynamicDNS*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetDynamicDNS*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetNetworkInterfaces:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetNetworkInterfaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetNetworkInterfaces*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetNetworkInterfaces:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetNetworkInterfaces*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetNetworkInterfaces*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetNetworkProtocols:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetNetworkProtocols*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetNetworkProtocols*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetNetworkProtocols:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetNetworkProtocols*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetNetworkProtocols*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetNetworkDefaultGateway:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetNetworkDefaultGateway*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetNetworkDefaultGateway*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetNetworkDefaultGateway:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetNetworkDefaultGateway*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetNetworkDefaultGateway*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetZeroConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetZeroConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetZeroConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetZeroConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetZeroConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetZeroConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE___tds__AddIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__AddIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__AddIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE___tds__RemoveIPAddressFilter:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__RemoveIPAddressFilter*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__RemoveIPAddressFilter*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetAccessPolicy:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetAccessPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetAccessPolicy*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetAccessPolicy:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetAccessPolicy*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetAccessPolicy*)p->ptr);
		break;
	case SOAP_TYPE___tds__CreateCertificate:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__CreateCertificate*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__CreateCertificate*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetCertificates:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetCertificates*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetCertificatesStatus:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetCertificatesStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetCertificatesStatus*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetCertificatesStatus:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetCertificatesStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetCertificatesStatus*)p->ptr);
		break;
	case SOAP_TYPE___tds__DeleteCertificates:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__DeleteCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__DeleteCertificates*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetPkcs10Request:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetPkcs10Request*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetPkcs10Request*)p->ptr);
		break;
	case SOAP_TYPE___tds__LoadCertificates:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__LoadCertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__LoadCertificates*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetClientCertificateMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetClientCertificateMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetClientCertificateMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetClientCertificateMode:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetClientCertificateMode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetClientCertificateMode*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetRelayOutputs:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetRelayOutputs*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetRelayOutputs*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetRelayOutputSettings:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetRelayOutputSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetRelayOutputSettings*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetRelayOutputState:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetRelayOutputState*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetRelayOutputState*)p->ptr);
		break;
	case SOAP_TYPE___tds__SendAuxiliaryCommand:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SendAuxiliaryCommand*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SendAuxiliaryCommand*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetCACertificates:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetCACertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetCACertificates*)p->ptr);
		break;
	case SOAP_TYPE___tds__LoadCertificateWithPrivateKey:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__LoadCertificateWithPrivateKey*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__LoadCertificateWithPrivateKey*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetCertificateInformation:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetCertificateInformation*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetCertificateInformation*)p->ptr);
		break;
	case SOAP_TYPE___tds__LoadCACertificates:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__LoadCACertificates*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__LoadCACertificates*)p->ptr);
		break;
	case SOAP_TYPE___tds__CreateDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__CreateDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__CreateDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__SetDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__SetDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__SetDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDot1XConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDot1XConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDot1XConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___tds__DeleteDot1XConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__DeleteDot1XConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__DeleteDot1XConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDot11Capabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDot11Capabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDot11Capabilities*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetDot11Status:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetDot11Status*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetDot11Status*)p->ptr);
		break;
	case SOAP_TYPE___tds__ScanAvailableDot11Networks:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__ScanAvailableDot11Networks*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__ScanAvailableDot11Networks*)p->ptr);
		break;
	case SOAP_TYPE___tds__GetSystemUris:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__GetSystemUris*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__GetSystemUris*)p->ptr);
		break;
	case SOAP_TYPE___tds__StartFirmwareUpgrade:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__StartFirmwareUpgrade*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__StartFirmwareUpgrade*)p->ptr);
		break;
	case SOAP_TYPE___tds__StartSystemRestore:
		if (p->size < 0)
			SOAP_DELETE((struct __tds__StartSystemRestore*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tds__StartSystemRestore*)p->ptr);
		break;
	case SOAP_TYPE___timg__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE___timg__GetImagingSettings:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__GetImagingSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__GetImagingSettings*)p->ptr);
		break;
	case SOAP_TYPE___timg__SetImagingSettings:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__SetImagingSettings*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__SetImagingSettings*)p->ptr);
		break;
	case SOAP_TYPE___timg__GetOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__GetOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__GetOptions*)p->ptr);
		break;
	case SOAP_TYPE___timg__Move:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__Move*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__Move*)p->ptr);
		break;
	case SOAP_TYPE___timg__Stop:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__Stop*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__Stop*)p->ptr);
		break;
	case SOAP_TYPE___timg__GetStatus:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__GetStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__GetStatus*)p->ptr);
		break;
	case SOAP_TYPE___timg__GetMoveOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __timg__GetMoveOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __timg__GetMoveOptions*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetPresets:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetPresets*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetPresets*)p->ptr);
		break;
	case SOAP_TYPE___tptz__SetPreset:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__SetPreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__SetPreset*)p->ptr);
		break;
	case SOAP_TYPE___tptz__RemovePreset:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__RemovePreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__RemovePreset*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GotoPreset:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GotoPreset*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GotoPreset*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetStatus:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetStatus*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetStatus*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetNodes:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetNodes*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetNodes*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetNode:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetNode*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetNode*)p->ptr);
		break;
	case SOAP_TYPE___tptz__SetConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__SetConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__SetConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GotoHomePosition:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GotoHomePosition*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GotoHomePosition*)p->ptr);
		break;
	case SOAP_TYPE___tptz__SetHomePosition:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__SetHomePosition*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__SetHomePosition*)p->ptr);
		break;
	case SOAP_TYPE___tptz__ContinuousMove:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__ContinuousMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__ContinuousMove*)p->ptr);
		break;
	case SOAP_TYPE___tptz__RelativeMove:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__RelativeMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__RelativeMove*)p->ptr);
		break;
	case SOAP_TYPE___tptz__SendAuxiliaryCommand:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__SendAuxiliaryCommand*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__SendAuxiliaryCommand*)p->ptr);
		break;
	case SOAP_TYPE___tptz__AbsoluteMove:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__AbsoluteMove*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__AbsoluteMove*)p->ptr);
		break;
	case SOAP_TYPE___tptz__Stop:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__Stop*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__Stop*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetPresetTours:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetPresetTours*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetPresetTours*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetPresetTour:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetPresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetPresetTour*)p->ptr);
		break;
	case SOAP_TYPE___tptz__GetPresetTourOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__GetPresetTourOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__GetPresetTourOptions*)p->ptr);
		break;
	case SOAP_TYPE___tptz__CreatePresetTour:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__CreatePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__CreatePresetTour*)p->ptr);
		break;
	case SOAP_TYPE___tptz__ModifyPresetTour:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__ModifyPresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__ModifyPresetTour*)p->ptr);
		break;
	case SOAP_TYPE___tptz__OperatePresetTour:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__OperatePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__OperatePresetTour*)p->ptr);
		break;
	case SOAP_TYPE___tptz__RemovePresetTour:
		if (p->size < 0)
			SOAP_DELETE((struct __tptz__RemovePresetTour*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __tptz__RemovePresetTour*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetServiceCapabilities:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetServiceCapabilities*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetServiceCapabilities*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoSources:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoSources*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoSources*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioSources:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioSources*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioSources*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioOutputs:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioOutputs*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioOutputs*)p->ptr);
		break;
	case SOAP_TYPE___trt__CreateProfile:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__CreateProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__CreateProfile*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetProfile:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetProfile*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetProfiles:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetProfiles*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetProfiles*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddPTZConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddPTZConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddPTZConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__AddAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__AddAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__AddAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemovePTZConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemovePTZConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemovePTZConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__RemoveAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__RemoveAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__RemoveAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__DeleteProfile:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__DeleteProfile*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__DeleteProfile*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoAnalyticsConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoAnalyticsConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoAnalyticsConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetMetadataConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetMetadataConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetMetadataConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioOutputConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioOutputConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioOutputConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioDecoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioDecoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioDecoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleVideoEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleVideoEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleVideoEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleVideoSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleVideoSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleVideoSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleAudioEncoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleAudioEncoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleAudioEncoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleAudioSourceConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleAudioSourceConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleAudioSourceConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleVideoAnalyticsConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleVideoAnalyticsConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleVideoAnalyticsConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleMetadataConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleMetadataConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleMetadataConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleAudioOutputConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleAudioOutputConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleAudioOutputConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetCompatibleAudioDecoderConfigurations:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetCompatibleAudioDecoderConfigurations*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetCompatibleAudioDecoderConfigurations*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetVideoSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetVideoSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetVideoSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetVideoEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetVideoEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetVideoEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetAudioSourceConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetAudioSourceConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetAudioSourceConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetAudioEncoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetAudioEncoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetAudioEncoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetVideoAnalyticsConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetVideoAnalyticsConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetVideoAnalyticsConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetMetadataConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetMetadataConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetMetadataConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetAudioOutputConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetAudioOutputConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetAudioOutputConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetAudioDecoderConfiguration:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetAudioDecoderConfiguration*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetAudioDecoderConfiguration*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetVideoEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetVideoEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetVideoEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioSourceConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioSourceConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioSourceConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioEncoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioEncoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioEncoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetMetadataConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetMetadataConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetMetadataConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioOutputConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioOutputConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioOutputConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetAudioDecoderConfigurationOptions:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetAudioDecoderConfigurationOptions*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetAudioDecoderConfigurationOptions*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetGuaranteedNumberOfVideoEncoderInstances:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetGuaranteedNumberOfVideoEncoderInstances*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetGuaranteedNumberOfVideoEncoderInstances*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetStreamUri:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetStreamUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetStreamUri*)p->ptr);
		break;
	case SOAP_TYPE___trt__StartMulticastStreaming:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__StartMulticastStreaming*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__StartMulticastStreaming*)p->ptr);
		break;
	case SOAP_TYPE___trt__StopMulticastStreaming:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__StopMulticastStreaming*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__StopMulticastStreaming*)p->ptr);
		break;
	case SOAP_TYPE___trt__SetSynchronizationPoint:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__SetSynchronizationPoint*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__SetSynchronizationPoint*)p->ptr);
		break;
	case SOAP_TYPE___trt__GetSnapshotUri:
		if (p->size < 0)
			SOAP_DELETE((struct __trt__GetSnapshotUri*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct __trt__GetSnapshotUri*)p->ptr);
		break;
	case SOAP_TYPE__ds__Signature:
		if (p->size < 0)
			SOAP_DELETE((struct ds__SignatureType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__SignatureType*)p->ptr);
		break;
	case SOAP_TYPE__ds__Transform:
		if (p->size < 0)
			SOAP_DELETE((struct ds__TransformType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__TransformType*)p->ptr);
		break;
	case SOAP_TYPE__ds__KeyInfo:
		if (p->size < 0)
			SOAP_DELETE((struct ds__KeyInfoType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct ds__KeyInfoType*)p->ptr);
		break;
	case SOAP_TYPE__wsa__EndpointReference:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa__RelatesTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__Relationship*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__Relationship*)p->ptr);
		break;
	case SOAP_TYPE__wsa__From:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa__ReplyTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa__FaultTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__EndpointReference:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__ReferenceParameters:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__ReferenceParametersType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__ReferenceParametersType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__Metadata:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__MetadataType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__MetadataType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__RelatesTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__RelatesToType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__RelatesToType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__ReplyTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__From:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__FaultTo:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__EndpointReferenceType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__EndpointReferenceType*)p->ptr);
		break;
	case SOAP_TYPE__wsa5__ProblemAction:
		if (p->size < 0)
			SOAP_DELETE((struct wsa5__ProblemActionType*)p->ptr);
		else
			SOAP_DELETE_ARRAY((struct wsa5__ProblemActionType*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11SSIDType:
		if (p->size < 0)
			SOAP_DELETE((xsd__hexBinary*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__hexBinary*)p->ptr);
		break;
	case SOAP_TYPE_tt__Dot11PSK:
		if (p->size < 0)
			SOAP_DELETE((xsd__hexBinary*)p->ptr);
		else
			SOAP_DELETE_ARRAY((xsd__hexBinary*)p->ptr);
		break;
	default:	return SOAP_ERR;
	}
	return SOAP_OK;
}

SOAP_FMAC3 void* SOAP_FMAC4 soap_class_id_enter(struct soap *soap, const char *id, void *p, int t, size_t n, const char *type, const char *arrayType)
{	return soap_id_enter(soap, id, p, t, n, 0, type, arrayType, soap_instantiate);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap *soap, char *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_byte
	*a = SOAP_DEFAULT_byte;
#else
	*a = (char)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap *soap, const char *tag, int id, const char *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outbyte(soap, tag, id, a, type, SOAP_TYPE_byte);
}

SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap *soap, const char *tag, char *a, const char *type)
{	char *p;
	p = soap_inbyte(soap, tag, a, type, SOAP_TYPE_byte);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap *soap, const char *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_byte);
	if (soap_out_byte(soap, tag?tag:"byte", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap *soap, char *p, const char *tag, const char *type)
{
	if ((p = soap_in_byte(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IANA_IfTypes(struct soap *soap, const char *tag, int id, const int *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outint(soap, tag, id, a, type, SOAP_TYPE_tt__IANA_IfTypes);
}

SOAP_FMAC3 int * SOAP_FMAC4 soap_in_tt__IANA_IfTypes(struct soap *soap, const char *tag, int *a, const char *type)
{	int *p;
	p = soap_inint(soap, tag, a, type, SOAP_TYPE_tt__IANA_IfTypes);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IANA_IfTypes(struct soap *soap, const int *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IANA_IfTypes);
	if (soap_out_tt__IANA_IfTypes(soap, tag?tag:"tt:IANA-IfTypes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 int * SOAP_FMAC4 soap_get_tt__IANA_IfTypes(struct soap *soap, int *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IANA_IfTypes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap *soap, int *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_int
	*a = SOAP_DEFAULT_int;
#else
	*a = (int)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap *soap, const char *tag, int id, const int *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outint(soap, tag, id, a, type, SOAP_TYPE_int);
}

SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap *soap, const char *tag, int *a, const char *type)
{	int *p;
	p = soap_inint(soap, tag, a, type, SOAP_TYPE_int);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap *soap, const int *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_int);
	if (soap_out_int(soap, tag?tag:"int", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap *soap, int *p, const char *tag, const char *type)
{
	if ((p = soap_in_int(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__duration(struct soap *soap, const LONG64 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_xsd__duration);
	if (soap_out_xsd__duration(soap, tag?tag:"xsd:duration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 LONG64 * SOAP_FMAC4 soap_get_xsd__duration(struct soap *soap, LONG64 *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__duration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_float(struct soap *soap, float *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_float
	*a = SOAP_DEFAULT_float;
#else
	*a = (float)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_float(struct soap *soap, const char *tag, int id, const float *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outfloat(soap, tag, id, a, type, SOAP_TYPE_float);
}

SOAP_FMAC3 float * SOAP_FMAC4 soap_in_float(struct soap *soap, const char *tag, float *a, const char *type)
{	float *p;
	p = soap_infloat(soap, tag, a, type, SOAP_TYPE_float);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_float(struct soap *soap, const float *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_float);
	if (soap_out_float(soap, tag?tag:"float", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 float * SOAP_FMAC4 soap_get_float(struct soap *soap, float *p, const char *tag, const char *type)
{
	if ((p = soap_in_float(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_unsignedByte(struct soap *soap, unsigned char *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_unsignedByte
	*a = SOAP_DEFAULT_unsignedByte;
#else
	*a = (unsigned char)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_unsignedByte(struct soap *soap, const char *tag, int id, const unsigned char *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outunsignedByte(soap, tag, id, a, type, SOAP_TYPE_unsignedByte);
}

SOAP_FMAC3 unsigned char * SOAP_FMAC4 soap_in_unsignedByte(struct soap *soap, const char *tag, unsigned char *a, const char *type)
{	unsigned char *p;
	p = soap_inunsignedByte(soap, tag, a, type, SOAP_TYPE_unsignedByte);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_unsignedByte(struct soap *soap, const unsigned char *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_unsignedByte);
	if (soap_out_unsignedByte(soap, tag?tag:"unsignedByte", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 unsigned char * SOAP_FMAC4 soap_get_unsignedByte(struct soap *soap, unsigned char *p, const char *tag, const char *type)
{
	if ((p = soap_in_unsignedByte(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_unsignedInt(struct soap *soap, unsigned int *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_unsignedInt
	*a = SOAP_DEFAULT_unsignedInt;
#else
	*a = (unsigned int)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_unsignedInt(struct soap *soap, const char *tag, int id, const unsigned int *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outunsignedInt(soap, tag, id, a, type, SOAP_TYPE_unsignedInt);
}

SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_in_unsignedInt(struct soap *soap, const char *tag, unsigned int *a, const char *type)
{	unsigned int *p;
	p = soap_inunsignedInt(soap, tag, a, type, SOAP_TYPE_unsignedInt);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_unsignedInt(struct soap *soap, const unsigned int *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_unsignedInt);
	if (soap_out_unsignedInt(soap, tag?tag:"unsignedInt", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_get_unsignedInt(struct soap *soap, unsigned int *p, const char *tag, const char *type)
{
	if ((p = soap_in_unsignedInt(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_unsignedLONG64(struct soap *soap, ULONG64 *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_unsignedLONG64
	*a = SOAP_DEFAULT_unsignedLONG64;
#else
	*a = (ULONG64)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_unsignedLONG64(struct soap *soap, const char *tag, int id, const ULONG64 *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outULONG64(soap, tag, id, a, type, SOAP_TYPE_unsignedLONG64);
}

SOAP_FMAC3 ULONG64 * SOAP_FMAC4 soap_in_unsignedLONG64(struct soap *soap, const char *tag, ULONG64 *a, const char *type)
{	ULONG64 *p;
	p = soap_inULONG64(soap, tag, a, type, SOAP_TYPE_unsignedLONG64);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_unsignedLONG64(struct soap *soap, const ULONG64 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_unsignedLONG64);
	if (soap_out_unsignedLONG64(soap, tag?tag:"unsignedLong", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 ULONG64 * SOAP_FMAC4 soap_get_unsignedLONG64(struct soap *soap, ULONG64 *p, const char *tag, const char *type)
{
	if ((p = soap_in_unsignedLONG64(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_time(struct soap *soap, time_t *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_time
	*a = SOAP_DEFAULT_time;
#else
	*a = (time_t)0;
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_time(struct soap *soap, const char *tag, int id, const time_t *a, const char *type)
{	(void)soap; (void)type; (void)tag; (void)id;
	return soap_outdateTime(soap, tag, id, a, type, SOAP_TYPE_time);
}

SOAP_FMAC3 time_t * SOAP_FMAC4 soap_in_time(struct soap *soap, const char *tag, time_t *a, const char *type)
{	time_t *p;
	p = soap_indateTime(soap, tag, a, type, SOAP_TYPE_time);
	return p;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_time(struct soap *soap, const time_t *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_time);
	if (soap_out_time(soap, tag?tag:"dateTime", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 time_t * SOAP_FMAC4 soap_get_time(struct soap *soap, time_t *p, const char *tag, const char *type)
{
	if ((p = soap_in_time(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ModeOfOperation(struct soap *soap, enum tt__ModeOfOperation *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ModeOfOperation
	*a = SOAP_DEFAULT_tt__ModeOfOperation;
#else
	*a = (enum tt__ModeOfOperation)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ModeOfOperation[] =
{	{ (long)tt__ModeOfOperation__Idle, "Idle" },
	{ (long)tt__ModeOfOperation__Active, "Active" },
	{ (long)tt__ModeOfOperation__Unknown, "Unknown" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ModeOfOperation2s(struct soap *soap, enum tt__ModeOfOperation n)
{	const char *s = soap_code_str(soap_codes_tt__ModeOfOperation, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ModeOfOperation(struct soap *soap, const char *tag, int id, const enum tt__ModeOfOperation *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ModeOfOperation), type) || soap_send(soap, soap_tt__ModeOfOperation2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ModeOfOperation(struct soap *soap, const char *s, enum tt__ModeOfOperation *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ModeOfOperation, s);
	if (map)
		*a = (enum tt__ModeOfOperation)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ModeOfOperation)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ModeOfOperation * SOAP_FMAC4 soap_in_tt__ModeOfOperation(struct soap *soap, const char *tag, enum tt__ModeOfOperation *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ModeOfOperation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ModeOfOperation, sizeof(enum tt__ModeOfOperation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ModeOfOperation(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ModeOfOperation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ModeOfOperation, 0, sizeof(enum tt__ModeOfOperation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ModeOfOperation(struct soap *soap, const enum tt__ModeOfOperation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ModeOfOperation);
	if (soap_out_tt__ModeOfOperation(soap, tag?tag:"tt:ModeOfOperation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ModeOfOperation * SOAP_FMAC4 soap_get_tt__ModeOfOperation(struct soap *soap, enum tt__ModeOfOperation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ModeOfOperation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TrackType(struct soap *soap, enum tt__TrackType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__TrackType
	*a = SOAP_DEFAULT_tt__TrackType;
#else
	*a = (enum tt__TrackType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__TrackType[] =
{	{ (long)tt__TrackType__Video, "Video" },
	{ (long)tt__TrackType__Audio, "Audio" },
	{ (long)tt__TrackType__Metadata, "Metadata" },
	{ (long)tt__TrackType__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__TrackType2s(struct soap *soap, enum tt__TrackType n)
{	const char *s = soap_code_str(soap_codes_tt__TrackType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackType(struct soap *soap, const char *tag, int id, const enum tt__TrackType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackType), type) || soap_send(soap, soap_tt__TrackType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__TrackType(struct soap *soap, const char *s, enum tt__TrackType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__TrackType, s);
	if (map)
		*a = (enum tt__TrackType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__TrackType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__TrackType * SOAP_FMAC4 soap_in_tt__TrackType(struct soap *soap, const char *tag, enum tt__TrackType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__TrackType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackType, sizeof(enum tt__TrackType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__TrackType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__TrackType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackType, 0, sizeof(enum tt__TrackType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TrackType(struct soap *soap, const enum tt__TrackType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TrackType);
	if (soap_out_tt__TrackType(soap, tag?tag:"tt:TrackType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__TrackType * SOAP_FMAC4 soap_get_tt__TrackType(struct soap *soap, enum tt__TrackType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingStatus(struct soap *soap, enum tt__RecordingStatus *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__RecordingStatus
	*a = SOAP_DEFAULT_tt__RecordingStatus;
#else
	*a = (enum tt__RecordingStatus)0;
#endif
}

static const struct soap_code_map soap_codes_tt__RecordingStatus[] =
{	{ (long)tt__RecordingStatus__Initiated, "Initiated" },
	{ (long)tt__RecordingStatus__Recording, "Recording" },
	{ (long)tt__RecordingStatus__Stopped, "Stopped" },
	{ (long)tt__RecordingStatus__Removing, "Removing" },
	{ (long)tt__RecordingStatus__Removed, "Removed" },
	{ (long)tt__RecordingStatus__Unknown, "Unknown" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__RecordingStatus2s(struct soap *soap, enum tt__RecordingStatus n)
{	const char *s = soap_code_str(soap_codes_tt__RecordingStatus, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingStatus(struct soap *soap, const char *tag, int id, const enum tt__RecordingStatus *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingStatus), type) || soap_send(soap, soap_tt__RecordingStatus2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__RecordingStatus(struct soap *soap, const char *s, enum tt__RecordingStatus *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__RecordingStatus, s);
	if (map)
		*a = (enum tt__RecordingStatus)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 5)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__RecordingStatus)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__RecordingStatus * SOAP_FMAC4 soap_in_tt__RecordingStatus(struct soap *soap, const char *tag, enum tt__RecordingStatus *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__RecordingStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingStatus, sizeof(enum tt__RecordingStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__RecordingStatus(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__RecordingStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingStatus, 0, sizeof(enum tt__RecordingStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingStatus(struct soap *soap, const enum tt__RecordingStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingStatus);
	if (soap_out_tt__RecordingStatus(soap, tag?tag:"tt:RecordingStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__RecordingStatus * SOAP_FMAC4 soap_get_tt__RecordingStatus(struct soap *soap, enum tt__RecordingStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SearchState(struct soap *soap, enum tt__SearchState *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__SearchState
	*a = SOAP_DEFAULT_tt__SearchState;
#else
	*a = (enum tt__SearchState)0;
#endif
}

static const struct soap_code_map soap_codes_tt__SearchState[] =
{	{ (long)tt__SearchState__Queued, "Queued" },
	{ (long)tt__SearchState__Searching, "Searching" },
	{ (long)tt__SearchState__Completed, "Completed" },
	{ (long)tt__SearchState__Unknown, "Unknown" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__SearchState2s(struct soap *soap, enum tt__SearchState n)
{	const char *s = soap_code_str(soap_codes_tt__SearchState, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchState(struct soap *soap, const char *tag, int id, const enum tt__SearchState *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchState), type) || soap_send(soap, soap_tt__SearchState2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__SearchState(struct soap *soap, const char *s, enum tt__SearchState *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__SearchState, s);
	if (map)
		*a = (enum tt__SearchState)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__SearchState)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__SearchState * SOAP_FMAC4 soap_in_tt__SearchState(struct soap *soap, const char *tag, enum tt__SearchState *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__SearchState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchState, sizeof(enum tt__SearchState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__SearchState(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__SearchState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchState, 0, sizeof(enum tt__SearchState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SearchState(struct soap *soap, const enum tt__SearchState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SearchState);
	if (soap_out_tt__SearchState(soap, tag?tag:"tt:SearchState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__SearchState * SOAP_FMAC4 soap_get_tt__SearchState(struct soap *soap, enum tt__SearchState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverState(struct soap *soap, enum tt__ReceiverState *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ReceiverState
	*a = SOAP_DEFAULT_tt__ReceiverState;
#else
	*a = (enum tt__ReceiverState)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ReceiverState[] =
{	{ (long)tt__ReceiverState__NotConnected, "NotConnected" },
	{ (long)tt__ReceiverState__Connecting, "Connecting" },
	{ (long)tt__ReceiverState__Connected, "Connected" },
	{ (long)tt__ReceiverState__Unknown, "Unknown" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ReceiverState2s(struct soap *soap, enum tt__ReceiverState n)
{	const char *s = soap_code_str(soap_codes_tt__ReceiverState, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverState(struct soap *soap, const char *tag, int id, const enum tt__ReceiverState *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverState), type) || soap_send(soap, soap_tt__ReceiverState2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ReceiverState(struct soap *soap, const char *s, enum tt__ReceiverState *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ReceiverState, s);
	if (map)
		*a = (enum tt__ReceiverState)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ReceiverState)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ReceiverState * SOAP_FMAC4 soap_in_tt__ReceiverState(struct soap *soap, const char *tag, enum tt__ReceiverState *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ReceiverState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverState, sizeof(enum tt__ReceiverState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ReceiverState(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ReceiverState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverState, 0, sizeof(enum tt__ReceiverState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverState(struct soap *soap, const enum tt__ReceiverState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverState);
	if (soap_out_tt__ReceiverState(soap, tag?tag:"tt:ReceiverState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ReceiverState * SOAP_FMAC4 soap_get_tt__ReceiverState(struct soap *soap, enum tt__ReceiverState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverMode(struct soap *soap, enum tt__ReceiverMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ReceiverMode
	*a = SOAP_DEFAULT_tt__ReceiverMode;
#else
	*a = (enum tt__ReceiverMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ReceiverMode[] =
{	{ (long)tt__ReceiverMode__AutoConnect, "AutoConnect" },
	{ (long)tt__ReceiverMode__AlwaysConnect, "AlwaysConnect" },
	{ (long)tt__ReceiverMode__NeverConnect, "NeverConnect" },
	{ (long)tt__ReceiverMode__Unknown, "Unknown" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ReceiverMode2s(struct soap *soap, enum tt__ReceiverMode n)
{	const char *s = soap_code_str(soap_codes_tt__ReceiverMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverMode(struct soap *soap, const char *tag, int id, const enum tt__ReceiverMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverMode), type) || soap_send(soap, soap_tt__ReceiverMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ReceiverMode(struct soap *soap, const char *s, enum tt__ReceiverMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ReceiverMode, s);
	if (map)
		*a = (enum tt__ReceiverMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ReceiverMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ReceiverMode * SOAP_FMAC4 soap_in_tt__ReceiverMode(struct soap *soap, const char *tag, enum tt__ReceiverMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ReceiverMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverMode, sizeof(enum tt__ReceiverMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ReceiverMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ReceiverMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverMode, 0, sizeof(enum tt__ReceiverMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverMode(struct soap *soap, const enum tt__ReceiverMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverMode);
	if (soap_out_tt__ReceiverMode(soap, tag?tag:"tt:ReceiverMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ReceiverMode * SOAP_FMAC4 soap_get_tt__ReceiverMode(struct soap *soap, enum tt__ReceiverMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ClassType(struct soap *soap, enum tt__ClassType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ClassType
	*a = SOAP_DEFAULT_tt__ClassType;
#else
	*a = (enum tt__ClassType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ClassType[] =
{	{ (long)tt__ClassType__Animal, "Animal" },
	{ (long)tt__ClassType__Face, "Face" },
	{ (long)tt__ClassType__Human, "Human" },
	{ (long)tt__ClassType__Vehical, "Vehical" },
	{ (long)tt__ClassType__Other, "Other" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ClassType2s(struct soap *soap, enum tt__ClassType n)
{	const char *s = soap_code_str(soap_codes_tt__ClassType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassType(struct soap *soap, const char *tag, int id, const enum tt__ClassType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassType), type) || soap_send(soap, soap_tt__ClassType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ClassType(struct soap *soap, const char *s, enum tt__ClassType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ClassType, s);
	if (map)
		*a = (enum tt__ClassType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 4)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ClassType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ClassType * SOAP_FMAC4 soap_in_tt__ClassType(struct soap *soap, const char *tag, enum tt__ClassType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ClassType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassType, sizeof(enum tt__ClassType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ClassType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ClassType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassType, 0, sizeof(enum tt__ClassType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ClassType(struct soap *soap, const enum tt__ClassType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ClassType);
	if (soap_out_tt__ClassType(soap, tag?tag:"tt:ClassType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ClassType * SOAP_FMAC4 soap_get_tt__ClassType(struct soap *soap, enum tt__ClassType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Direction(struct soap *soap, enum tt__Direction *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Direction
	*a = SOAP_DEFAULT_tt__Direction;
#else
	*a = (enum tt__Direction)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Direction[] =
{	{ (long)tt__Direction__Left, "Left" },
	{ (long)tt__Direction__Right, "Right" },
	{ (long)tt__Direction__Any, "Any" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Direction2s(struct soap *soap, enum tt__Direction n)
{	const char *s = soap_code_str(soap_codes_tt__Direction, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Direction(struct soap *soap, const char *tag, int id, const enum tt__Direction *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Direction), type) || soap_send(soap, soap_tt__Direction2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Direction(struct soap *soap, const char *s, enum tt__Direction *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Direction, s);
	if (map)
		*a = (enum tt__Direction)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Direction)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Direction * SOAP_FMAC4 soap_in_tt__Direction(struct soap *soap, const char *tag, enum tt__Direction *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Direction *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Direction, sizeof(enum tt__Direction), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Direction(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Direction *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Direction, 0, sizeof(enum tt__Direction), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Direction(struct soap *soap, const enum tt__Direction *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Direction);
	if (soap_out_tt__Direction(soap, tag?tag:"tt:Direction", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Direction * SOAP_FMAC4 soap_get_tt__Direction(struct soap *soap, enum tt__Direction *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Direction(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PropertyOperation(struct soap *soap, enum tt__PropertyOperation *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__PropertyOperation
	*a = SOAP_DEFAULT_tt__PropertyOperation;
#else
	*a = (enum tt__PropertyOperation)0;
#endif
}

static const struct soap_code_map soap_codes_tt__PropertyOperation[] =
{	{ (long)tt__PropertyOperation__Initialized, "Initialized" },
	{ (long)tt__PropertyOperation__Deleted, "Deleted" },
	{ (long)tt__PropertyOperation__Changed, "Changed" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__PropertyOperation2s(struct soap *soap, enum tt__PropertyOperation n)
{	const char *s = soap_code_str(soap_codes_tt__PropertyOperation, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PropertyOperation(struct soap *soap, const char *tag, int id, const enum tt__PropertyOperation *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PropertyOperation), type) || soap_send(soap, soap_tt__PropertyOperation2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__PropertyOperation(struct soap *soap, const char *s, enum tt__PropertyOperation *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__PropertyOperation, s);
	if (map)
		*a = (enum tt__PropertyOperation)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__PropertyOperation)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__PropertyOperation * SOAP_FMAC4 soap_in_tt__PropertyOperation(struct soap *soap, const char *tag, enum tt__PropertyOperation *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__PropertyOperation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PropertyOperation, sizeof(enum tt__PropertyOperation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__PropertyOperation(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__PropertyOperation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PropertyOperation, 0, sizeof(enum tt__PropertyOperation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PropertyOperation(struct soap *soap, const enum tt__PropertyOperation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PropertyOperation);
	if (soap_out_tt__PropertyOperation(soap, tag?tag:"tt:PropertyOperation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__PropertyOperation * SOAP_FMAC4 soap_get_tt__PropertyOperation(struct soap *soap, enum tt__PropertyOperation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PropertyOperation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImageStabilizationMode(struct soap *soap, enum tt__ImageStabilizationMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ImageStabilizationMode
	*a = SOAP_DEFAULT_tt__ImageStabilizationMode;
#else
	*a = (enum tt__ImageStabilizationMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ImageStabilizationMode[] =
{	{ (long)tt__ImageStabilizationMode__OFF, "OFF" },
	{ (long)tt__ImageStabilizationMode__ON, "ON" },
	{ (long)tt__ImageStabilizationMode__AUTO, "AUTO" },
	{ (long)tt__ImageStabilizationMode__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ImageStabilizationMode2s(struct soap *soap, enum tt__ImageStabilizationMode n)
{	const char *s = soap_code_str(soap_codes_tt__ImageStabilizationMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationMode(struct soap *soap, const char *tag, int id, const enum tt__ImageStabilizationMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationMode), type) || soap_send(soap, soap_tt__ImageStabilizationMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ImageStabilizationMode(struct soap *soap, const char *s, enum tt__ImageStabilizationMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ImageStabilizationMode, s);
	if (map)
		*a = (enum tt__ImageStabilizationMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ImageStabilizationMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ImageStabilizationMode * SOAP_FMAC4 soap_in_tt__ImageStabilizationMode(struct soap *soap, const char *tag, enum tt__ImageStabilizationMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ImageStabilizationMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationMode, sizeof(enum tt__ImageStabilizationMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ImageStabilizationMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ImageStabilizationMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationMode, 0, sizeof(enum tt__ImageStabilizationMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImageStabilizationMode(struct soap *soap, const enum tt__ImageStabilizationMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationMode);
	if (soap_out_tt__ImageStabilizationMode(soap, tag?tag:"tt:ImageStabilizationMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ImageStabilizationMode * SOAP_FMAC4 soap_get_tt__ImageStabilizationMode(struct soap *soap, enum tt__ImageStabilizationMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IrCutFilterMode(struct soap *soap, enum tt__IrCutFilterMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__IrCutFilterMode
	*a = SOAP_DEFAULT_tt__IrCutFilterMode;
#else
	*a = (enum tt__IrCutFilterMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__IrCutFilterMode[] =
{	{ (long)tt__IrCutFilterMode__ON, "ON" },
	{ (long)tt__IrCutFilterMode__OFF, "OFF" },
	{ (long)tt__IrCutFilterMode__AUTO, "AUTO" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__IrCutFilterMode2s(struct soap *soap, enum tt__IrCutFilterMode n)
{	const char *s = soap_code_str(soap_codes_tt__IrCutFilterMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IrCutFilterMode(struct soap *soap, const char *tag, int id, const enum tt__IrCutFilterMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IrCutFilterMode), type) || soap_send(soap, soap_tt__IrCutFilterMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__IrCutFilterMode(struct soap *soap, const char *s, enum tt__IrCutFilterMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__IrCutFilterMode, s);
	if (map)
		*a = (enum tt__IrCutFilterMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__IrCutFilterMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__IrCutFilterMode * SOAP_FMAC4 soap_in_tt__IrCutFilterMode(struct soap *soap, const char *tag, enum tt__IrCutFilterMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__IrCutFilterMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IrCutFilterMode, sizeof(enum tt__IrCutFilterMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__IrCutFilterMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__IrCutFilterMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IrCutFilterMode, 0, sizeof(enum tt__IrCutFilterMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IrCutFilterMode(struct soap *soap, const enum tt__IrCutFilterMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IrCutFilterMode);
	if (soap_out_tt__IrCutFilterMode(soap, tag?tag:"tt:IrCutFilterMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__IrCutFilterMode * SOAP_FMAC4 soap_get_tt__IrCutFilterMode(struct soap *soap, enum tt__IrCutFilterMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IrCutFilterMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WhiteBalanceMode(struct soap *soap, enum tt__WhiteBalanceMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__WhiteBalanceMode
	*a = SOAP_DEFAULT_tt__WhiteBalanceMode;
#else
	*a = (enum tt__WhiteBalanceMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__WhiteBalanceMode[] =
{	{ (long)tt__WhiteBalanceMode__AUTO, "AUTO" },
	{ (long)tt__WhiteBalanceMode__MANUAL, "MANUAL" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__WhiteBalanceMode2s(struct soap *soap, enum tt__WhiteBalanceMode n)
{	const char *s = soap_code_str(soap_codes_tt__WhiteBalanceMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceMode(struct soap *soap, const char *tag, int id, const enum tt__WhiteBalanceMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceMode), type) || soap_send(soap, soap_tt__WhiteBalanceMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__WhiteBalanceMode(struct soap *soap, const char *s, enum tt__WhiteBalanceMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__WhiteBalanceMode, s);
	if (map)
		*a = (enum tt__WhiteBalanceMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__WhiteBalanceMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__WhiteBalanceMode * SOAP_FMAC4 soap_in_tt__WhiteBalanceMode(struct soap *soap, const char *tag, enum tt__WhiteBalanceMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__WhiteBalanceMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceMode, sizeof(enum tt__WhiteBalanceMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__WhiteBalanceMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__WhiteBalanceMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceMode, 0, sizeof(enum tt__WhiteBalanceMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WhiteBalanceMode(struct soap *soap, const enum tt__WhiteBalanceMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceMode);
	if (soap_out_tt__WhiteBalanceMode(soap, tag?tag:"tt:WhiteBalanceMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__WhiteBalanceMode * SOAP_FMAC4 soap_get_tt__WhiteBalanceMode(struct soap *soap, enum tt__WhiteBalanceMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Enabled(struct soap *soap, enum tt__Enabled *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Enabled
	*a = SOAP_DEFAULT_tt__Enabled;
#else
	*a = (enum tt__Enabled)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Enabled[] =
{	{ (long)tt__Enabled__ENABLED, "ENABLED" },
	{ (long)tt__Enabled__DISABLED, "DISABLED" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Enabled2s(struct soap *soap, enum tt__Enabled n)
{	const char *s = soap_code_str(soap_codes_tt__Enabled, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Enabled(struct soap *soap, const char *tag, int id, const enum tt__Enabled *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Enabled), type) || soap_send(soap, soap_tt__Enabled2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Enabled(struct soap *soap, const char *s, enum tt__Enabled *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Enabled, s);
	if (map)
		*a = (enum tt__Enabled)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Enabled)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Enabled * SOAP_FMAC4 soap_in_tt__Enabled(struct soap *soap, const char *tag, enum tt__Enabled *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Enabled *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Enabled, sizeof(enum tt__Enabled), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Enabled(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Enabled *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Enabled, 0, sizeof(enum tt__Enabled), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Enabled(struct soap *soap, const enum tt__Enabled *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Enabled);
	if (soap_out_tt__Enabled(soap, tag?tag:"tt:Enabled", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Enabled * SOAP_FMAC4 soap_get_tt__Enabled(struct soap *soap, enum tt__Enabled *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Enabled(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ExposureMode(struct soap *soap, enum tt__ExposureMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ExposureMode
	*a = SOAP_DEFAULT_tt__ExposureMode;
#else
	*a = (enum tt__ExposureMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ExposureMode[] =
{	{ (long)tt__ExposureMode__AUTO, "AUTO" },
	{ (long)tt__ExposureMode__MANUAL, "MANUAL" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ExposureMode2s(struct soap *soap, enum tt__ExposureMode n)
{	const char *s = soap_code_str(soap_codes_tt__ExposureMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureMode(struct soap *soap, const char *tag, int id, const enum tt__ExposureMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposureMode), type) || soap_send(soap, soap_tt__ExposureMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ExposureMode(struct soap *soap, const char *s, enum tt__ExposureMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ExposureMode, s);
	if (map)
		*a = (enum tt__ExposureMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ExposureMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ExposureMode * SOAP_FMAC4 soap_in_tt__ExposureMode(struct soap *soap, const char *tag, enum tt__ExposureMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ExposureMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureMode, sizeof(enum tt__ExposureMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ExposureMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ExposureMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposureMode, 0, sizeof(enum tt__ExposureMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ExposureMode(struct soap *soap, const enum tt__ExposureMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ExposureMode);
	if (soap_out_tt__ExposureMode(soap, tag?tag:"tt:ExposureMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ExposureMode * SOAP_FMAC4 soap_get_tt__ExposureMode(struct soap *soap, enum tt__ExposureMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ExposurePriority(struct soap *soap, enum tt__ExposurePriority *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ExposurePriority
	*a = SOAP_DEFAULT_tt__ExposurePriority;
#else
	*a = (enum tt__ExposurePriority)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ExposurePriority[] =
{	{ (long)tt__ExposurePriority__LowNoise, "LowNoise" },
	{ (long)tt__ExposurePriority__FrameRate, "FrameRate" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ExposurePriority2s(struct soap *soap, enum tt__ExposurePriority n)
{	const char *s = soap_code_str(soap_codes_tt__ExposurePriority, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposurePriority(struct soap *soap, const char *tag, int id, const enum tt__ExposurePriority *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposurePriority), type) || soap_send(soap, soap_tt__ExposurePriority2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ExposurePriority(struct soap *soap, const char *s, enum tt__ExposurePriority *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ExposurePriority, s);
	if (map)
		*a = (enum tt__ExposurePriority)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ExposurePriority)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ExposurePriority * SOAP_FMAC4 soap_in_tt__ExposurePriority(struct soap *soap, const char *tag, enum tt__ExposurePriority *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ExposurePriority *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposurePriority, sizeof(enum tt__ExposurePriority), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ExposurePriority(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ExposurePriority *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposurePriority, 0, sizeof(enum tt__ExposurePriority), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ExposurePriority(struct soap *soap, const enum tt__ExposurePriority *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ExposurePriority);
	if (soap_out_tt__ExposurePriority(soap, tag?tag:"tt:ExposurePriority", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ExposurePriority * SOAP_FMAC4 soap_get_tt__ExposurePriority(struct soap *soap, enum tt__ExposurePriority *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposurePriority(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BacklightCompensationMode(struct soap *soap, enum tt__BacklightCompensationMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__BacklightCompensationMode
	*a = SOAP_DEFAULT_tt__BacklightCompensationMode;
#else
	*a = (enum tt__BacklightCompensationMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__BacklightCompensationMode[] =
{	{ (long)tt__BacklightCompensationMode__OFF, "OFF" },
	{ (long)tt__BacklightCompensationMode__ON, "ON" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__BacklightCompensationMode2s(struct soap *soap, enum tt__BacklightCompensationMode n)
{	const char *s = soap_code_str(soap_codes_tt__BacklightCompensationMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationMode(struct soap *soap, const char *tag, int id, const enum tt__BacklightCompensationMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensationMode), type) || soap_send(soap, soap_tt__BacklightCompensationMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__BacklightCompensationMode(struct soap *soap, const char *s, enum tt__BacklightCompensationMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__BacklightCompensationMode, s);
	if (map)
		*a = (enum tt__BacklightCompensationMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__BacklightCompensationMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__BacklightCompensationMode * SOAP_FMAC4 soap_in_tt__BacklightCompensationMode(struct soap *soap, const char *tag, enum tt__BacklightCompensationMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__BacklightCompensationMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationMode, sizeof(enum tt__BacklightCompensationMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__BacklightCompensationMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__BacklightCompensationMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensationMode, 0, sizeof(enum tt__BacklightCompensationMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BacklightCompensationMode(struct soap *soap, const enum tt__BacklightCompensationMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationMode);
	if (soap_out_tt__BacklightCompensationMode(soap, tag?tag:"tt:BacklightCompensationMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__BacklightCompensationMode * SOAP_FMAC4 soap_get_tt__BacklightCompensationMode(struct soap *soap, enum tt__BacklightCompensationMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__WideDynamicMode(struct soap *soap, enum tt__WideDynamicMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__WideDynamicMode
	*a = SOAP_DEFAULT_tt__WideDynamicMode;
#else
	*a = (enum tt__WideDynamicMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__WideDynamicMode[] =
{	{ (long)tt__WideDynamicMode__OFF, "OFF" },
	{ (long)tt__WideDynamicMode__ON, "ON" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__WideDynamicMode2s(struct soap *soap, enum tt__WideDynamicMode n)
{	const char *s = soap_code_str(soap_codes_tt__WideDynamicMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicMode(struct soap *soap, const char *tag, int id, const enum tt__WideDynamicMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicMode), type) || soap_send(soap, soap_tt__WideDynamicMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__WideDynamicMode(struct soap *soap, const char *s, enum tt__WideDynamicMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__WideDynamicMode, s);
	if (map)
		*a = (enum tt__WideDynamicMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__WideDynamicMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__WideDynamicMode * SOAP_FMAC4 soap_in_tt__WideDynamicMode(struct soap *soap, const char *tag, enum tt__WideDynamicMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__WideDynamicMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicMode, sizeof(enum tt__WideDynamicMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__WideDynamicMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__WideDynamicMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicMode, 0, sizeof(enum tt__WideDynamicMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__WideDynamicMode(struct soap *soap, const enum tt__WideDynamicMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicMode);
	if (soap_out_tt__WideDynamicMode(soap, tag?tag:"tt:WideDynamicMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__WideDynamicMode * SOAP_FMAC4 soap_get_tt__WideDynamicMode(struct soap *soap, enum tt__WideDynamicMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AutoFocusMode(struct soap *soap, enum tt__AutoFocusMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__AutoFocusMode
	*a = SOAP_DEFAULT_tt__AutoFocusMode;
#else
	*a = (enum tt__AutoFocusMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__AutoFocusMode[] =
{	{ (long)tt__AutoFocusMode__AUTO, "AUTO" },
	{ (long)tt__AutoFocusMode__MANUAL, "MANUAL" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__AutoFocusMode2s(struct soap *soap, enum tt__AutoFocusMode n)
{	const char *s = soap_code_str(soap_codes_tt__AutoFocusMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AutoFocusMode(struct soap *soap, const char *tag, int id, const enum tt__AutoFocusMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AutoFocusMode), type) || soap_send(soap, soap_tt__AutoFocusMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__AutoFocusMode(struct soap *soap, const char *s, enum tt__AutoFocusMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__AutoFocusMode, s);
	if (map)
		*a = (enum tt__AutoFocusMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__AutoFocusMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__AutoFocusMode * SOAP_FMAC4 soap_in_tt__AutoFocusMode(struct soap *soap, const char *tag, enum tt__AutoFocusMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__AutoFocusMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AutoFocusMode, sizeof(enum tt__AutoFocusMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__AutoFocusMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__AutoFocusMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AutoFocusMode, 0, sizeof(enum tt__AutoFocusMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AutoFocusMode(struct soap *soap, const enum tt__AutoFocusMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AutoFocusMode);
	if (soap_out_tt__AutoFocusMode(soap, tag?tag:"tt:AutoFocusMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__AutoFocusMode * SOAP_FMAC4 soap_get_tt__AutoFocusMode(struct soap *soap, enum tt__AutoFocusMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AutoFocusMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourOperation(struct soap *soap, enum tt__PTZPresetTourOperation *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__PTZPresetTourOperation
	*a = SOAP_DEFAULT_tt__PTZPresetTourOperation;
#else
	*a = (enum tt__PTZPresetTourOperation)0;
#endif
}

static const struct soap_code_map soap_codes_tt__PTZPresetTourOperation[] =
{	{ (long)tt__PTZPresetTourOperation__Start, "Start" },
	{ (long)tt__PTZPresetTourOperation__Stop, "Stop" },
	{ (long)tt__PTZPresetTourOperation__Pause, "Pause" },
	{ (long)tt__PTZPresetTourOperation__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__PTZPresetTourOperation2s(struct soap *soap, enum tt__PTZPresetTourOperation n)
{	const char *s = soap_code_str(soap_codes_tt__PTZPresetTourOperation, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourOperation(struct soap *soap, const char *tag, int id, const enum tt__PTZPresetTourOperation *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourOperation), type) || soap_send(soap, soap_tt__PTZPresetTourOperation2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__PTZPresetTourOperation(struct soap *soap, const char *s, enum tt__PTZPresetTourOperation *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__PTZPresetTourOperation, s);
	if (map)
		*a = (enum tt__PTZPresetTourOperation)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__PTZPresetTourOperation)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__PTZPresetTourOperation * SOAP_FMAC4 soap_in_tt__PTZPresetTourOperation(struct soap *soap, const char *tag, enum tt__PTZPresetTourOperation *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__PTZPresetTourOperation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourOperation, sizeof(enum tt__PTZPresetTourOperation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__PTZPresetTourOperation(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__PTZPresetTourOperation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourOperation, 0, sizeof(enum tt__PTZPresetTourOperation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourOperation(struct soap *soap, const enum tt__PTZPresetTourOperation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourOperation);
	if (soap_out_tt__PTZPresetTourOperation(soap, tag?tag:"tt:PTZPresetTourOperation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__PTZPresetTourOperation * SOAP_FMAC4 soap_get_tt__PTZPresetTourOperation(struct soap *soap, enum tt__PTZPresetTourOperation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourOperation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourDirection(struct soap *soap, enum tt__PTZPresetTourDirection *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__PTZPresetTourDirection
	*a = SOAP_DEFAULT_tt__PTZPresetTourDirection;
#else
	*a = (enum tt__PTZPresetTourDirection)0;
#endif
}

static const struct soap_code_map soap_codes_tt__PTZPresetTourDirection[] =
{	{ (long)tt__PTZPresetTourDirection__Forward, "Forward" },
	{ (long)tt__PTZPresetTourDirection__Backward, "Backward" },
	{ (long)tt__PTZPresetTourDirection__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__PTZPresetTourDirection2s(struct soap *soap, enum tt__PTZPresetTourDirection n)
{	const char *s = soap_code_str(soap_codes_tt__PTZPresetTourDirection, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourDirection(struct soap *soap, const char *tag, int id, const enum tt__PTZPresetTourDirection *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourDirection), type) || soap_send(soap, soap_tt__PTZPresetTourDirection2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__PTZPresetTourDirection(struct soap *soap, const char *s, enum tt__PTZPresetTourDirection *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__PTZPresetTourDirection, s);
	if (map)
		*a = (enum tt__PTZPresetTourDirection)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__PTZPresetTourDirection)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__PTZPresetTourDirection * SOAP_FMAC4 soap_in_tt__PTZPresetTourDirection(struct soap *soap, const char *tag, enum tt__PTZPresetTourDirection *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__PTZPresetTourDirection *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourDirection, sizeof(enum tt__PTZPresetTourDirection), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__PTZPresetTourDirection(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__PTZPresetTourDirection *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourDirection, 0, sizeof(enum tt__PTZPresetTourDirection), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourDirection(struct soap *soap, const enum tt__PTZPresetTourDirection *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourDirection);
	if (soap_out_tt__PTZPresetTourDirection(soap, tag?tag:"tt:PTZPresetTourDirection", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__PTZPresetTourDirection * SOAP_FMAC4 soap_get_tt__PTZPresetTourDirection(struct soap *soap, enum tt__PTZPresetTourDirection *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourDirection(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPresetTourState(struct soap *soap, enum tt__PTZPresetTourState *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__PTZPresetTourState
	*a = SOAP_DEFAULT_tt__PTZPresetTourState;
#else
	*a = (enum tt__PTZPresetTourState)0;
#endif
}

static const struct soap_code_map soap_codes_tt__PTZPresetTourState[] =
{	{ (long)tt__PTZPresetTourState__Idle, "Idle" },
	{ (long)tt__PTZPresetTourState__Touring, "Touring" },
	{ (long)tt__PTZPresetTourState__Paused, "Paused" },
	{ (long)tt__PTZPresetTourState__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__PTZPresetTourState2s(struct soap *soap, enum tt__PTZPresetTourState n)
{	const char *s = soap_code_str(soap_codes_tt__PTZPresetTourState, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourState(struct soap *soap, const char *tag, int id, const enum tt__PTZPresetTourState *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourState), type) || soap_send(soap, soap_tt__PTZPresetTourState2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__PTZPresetTourState(struct soap *soap, const char *s, enum tt__PTZPresetTourState *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__PTZPresetTourState, s);
	if (map)
		*a = (enum tt__PTZPresetTourState)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__PTZPresetTourState)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__PTZPresetTourState * SOAP_FMAC4 soap_in_tt__PTZPresetTourState(struct soap *soap, const char *tag, enum tt__PTZPresetTourState *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__PTZPresetTourState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourState, sizeof(enum tt__PTZPresetTourState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__PTZPresetTourState(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__PTZPresetTourState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourState, 0, sizeof(enum tt__PTZPresetTourState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPresetTourState(struct soap *soap, const enum tt__PTZPresetTourState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourState);
	if (soap_out_tt__PTZPresetTourState(soap, tag?tag:"tt:PTZPresetTourState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__PTZPresetTourState * SOAP_FMAC4 soap_get_tt__PTZPresetTourState(struct soap *soap, enum tt__PTZPresetTourState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MoveStatus(struct soap *soap, enum tt__MoveStatus *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__MoveStatus
	*a = SOAP_DEFAULT_tt__MoveStatus;
#else
	*a = (enum tt__MoveStatus)0;
#endif
}

static const struct soap_code_map soap_codes_tt__MoveStatus[] =
{	{ (long)tt__MoveStatus__IDLE, "IDLE" },
	{ (long)tt__MoveStatus__MOVING, "MOVING" },
	{ (long)tt__MoveStatus__UNKNOWN, "UNKNOWN" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__MoveStatus2s(struct soap *soap, enum tt__MoveStatus n)
{	const char *s = soap_code_str(soap_codes_tt__MoveStatus, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveStatus(struct soap *soap, const char *tag, int id, const enum tt__MoveStatus *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MoveStatus), type) || soap_send(soap, soap_tt__MoveStatus2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__MoveStatus(struct soap *soap, const char *s, enum tt__MoveStatus *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__MoveStatus, s);
	if (map)
		*a = (enum tt__MoveStatus)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__MoveStatus)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__MoveStatus * SOAP_FMAC4 soap_in_tt__MoveStatus(struct soap *soap, const char *tag, enum tt__MoveStatus *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__MoveStatus *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveStatus, sizeof(enum tt__MoveStatus), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__MoveStatus(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__MoveStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MoveStatus, 0, sizeof(enum tt__MoveStatus), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MoveStatus(struct soap *soap, const enum tt__MoveStatus *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MoveStatus);
	if (soap_out_tt__MoveStatus(soap, tag?tag:"tt:MoveStatus", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__MoveStatus * SOAP_FMAC4 soap_get_tt__MoveStatus(struct soap *soap, enum tt__MoveStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReverseMode(struct soap *soap, enum tt__ReverseMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ReverseMode
	*a = SOAP_DEFAULT_tt__ReverseMode;
#else
	*a = (enum tt__ReverseMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ReverseMode[] =
{	{ (long)tt__ReverseMode__OFF, "OFF" },
	{ (long)tt__ReverseMode__ON, "ON" },
	{ (long)tt__ReverseMode__AUTO, "AUTO" },
	{ (long)tt__ReverseMode__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ReverseMode2s(struct soap *soap, enum tt__ReverseMode n)
{	const char *s = soap_code_str(soap_codes_tt__ReverseMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseMode(struct soap *soap, const char *tag, int id, const enum tt__ReverseMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReverseMode), type) || soap_send(soap, soap_tt__ReverseMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ReverseMode(struct soap *soap, const char *s, enum tt__ReverseMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ReverseMode, s);
	if (map)
		*a = (enum tt__ReverseMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ReverseMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ReverseMode * SOAP_FMAC4 soap_in_tt__ReverseMode(struct soap *soap, const char *tag, enum tt__ReverseMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ReverseMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseMode, sizeof(enum tt__ReverseMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ReverseMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ReverseMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReverseMode, 0, sizeof(enum tt__ReverseMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReverseMode(struct soap *soap, const enum tt__ReverseMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReverseMode);
	if (soap_out_tt__ReverseMode(soap, tag?tag:"tt:ReverseMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ReverseMode * SOAP_FMAC4 soap_get_tt__ReverseMode(struct soap *soap, enum tt__ReverseMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EFlipMode(struct soap *soap, enum tt__EFlipMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__EFlipMode
	*a = SOAP_DEFAULT_tt__EFlipMode;
#else
	*a = (enum tt__EFlipMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__EFlipMode[] =
{	{ (long)tt__EFlipMode__OFF, "OFF" },
	{ (long)tt__EFlipMode__ON, "ON" },
	{ (long)tt__EFlipMode__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__EFlipMode2s(struct soap *soap, enum tt__EFlipMode n)
{	const char *s = soap_code_str(soap_codes_tt__EFlipMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipMode(struct soap *soap, const char *tag, int id, const enum tt__EFlipMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlipMode), type) || soap_send(soap, soap_tt__EFlipMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__EFlipMode(struct soap *soap, const char *s, enum tt__EFlipMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__EFlipMode, s);
	if (map)
		*a = (enum tt__EFlipMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__EFlipMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__EFlipMode * SOAP_FMAC4 soap_in_tt__EFlipMode(struct soap *soap, const char *tag, enum tt__EFlipMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__EFlipMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipMode, sizeof(enum tt__EFlipMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__EFlipMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__EFlipMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlipMode, 0, sizeof(enum tt__EFlipMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EFlipMode(struct soap *soap, const enum tt__EFlipMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EFlipMode);
	if (soap_out_tt__EFlipMode(soap, tag?tag:"tt:EFlipMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__EFlipMode * SOAP_FMAC4 soap_get_tt__EFlipMode(struct soap *soap, enum tt__EFlipMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelayMode(struct soap *soap, enum tt__RelayMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__RelayMode
	*a = SOAP_DEFAULT_tt__RelayMode;
#else
	*a = (enum tt__RelayMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__RelayMode[] =
{	{ (long)tt__RelayMode__Monostable, "Monostable" },
	{ (long)tt__RelayMode__Bistable, "Bistable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__RelayMode2s(struct soap *soap, enum tt__RelayMode n)
{	const char *s = soap_code_str(soap_codes_tt__RelayMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayMode(struct soap *soap, const char *tag, int id, const enum tt__RelayMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayMode), type) || soap_send(soap, soap_tt__RelayMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__RelayMode(struct soap *soap, const char *s, enum tt__RelayMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__RelayMode, s);
	if (map)
		*a = (enum tt__RelayMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__RelayMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__RelayMode * SOAP_FMAC4 soap_in_tt__RelayMode(struct soap *soap, const char *tag, enum tt__RelayMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__RelayMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayMode, sizeof(enum tt__RelayMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__RelayMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__RelayMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayMode, 0, sizeof(enum tt__RelayMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelayMode(struct soap *soap, const enum tt__RelayMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelayMode);
	if (soap_out_tt__RelayMode(soap, tag?tag:"tt:RelayMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__RelayMode * SOAP_FMAC4 soap_get_tt__RelayMode(struct soap *soap, enum tt__RelayMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelayIdleState(struct soap *soap, enum tt__RelayIdleState *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__RelayIdleState
	*a = SOAP_DEFAULT_tt__RelayIdleState;
#else
	*a = (enum tt__RelayIdleState)0;
#endif
}

static const struct soap_code_map soap_codes_tt__RelayIdleState[] =
{	{ (long)tt__RelayIdleState__closed, "closed" },
	{ (long)tt__RelayIdleState__open, "open" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__RelayIdleState2s(struct soap *soap, enum tt__RelayIdleState n)
{	const char *s = soap_code_str(soap_codes_tt__RelayIdleState, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayIdleState(struct soap *soap, const char *tag, int id, const enum tt__RelayIdleState *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayIdleState), type) || soap_send(soap, soap_tt__RelayIdleState2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__RelayIdleState(struct soap *soap, const char *s, enum tt__RelayIdleState *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__RelayIdleState, s);
	if (map)
		*a = (enum tt__RelayIdleState)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__RelayIdleState)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__RelayIdleState * SOAP_FMAC4 soap_in_tt__RelayIdleState(struct soap *soap, const char *tag, enum tt__RelayIdleState *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__RelayIdleState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayIdleState, sizeof(enum tt__RelayIdleState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__RelayIdleState(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__RelayIdleState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayIdleState, 0, sizeof(enum tt__RelayIdleState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelayIdleState(struct soap *soap, const enum tt__RelayIdleState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelayIdleState);
	if (soap_out_tt__RelayIdleState(soap, tag?tag:"tt:RelayIdleState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__RelayIdleState * SOAP_FMAC4 soap_get_tt__RelayIdleState(struct soap *soap, enum tt__RelayIdleState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayIdleState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RelayLogicalState(struct soap *soap, enum tt__RelayLogicalState *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__RelayLogicalState
	*a = SOAP_DEFAULT_tt__RelayLogicalState;
#else
	*a = (enum tt__RelayLogicalState)0;
#endif
}

static const struct soap_code_map soap_codes_tt__RelayLogicalState[] =
{	{ (long)tt__RelayLogicalState__active, "active" },
	{ (long)tt__RelayLogicalState__inactive, "inactive" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__RelayLogicalState2s(struct soap *soap, enum tt__RelayLogicalState n)
{	const char *s = soap_code_str(soap_codes_tt__RelayLogicalState, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayLogicalState(struct soap *soap, const char *tag, int id, const enum tt__RelayLogicalState *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayLogicalState), type) || soap_send(soap, soap_tt__RelayLogicalState2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__RelayLogicalState(struct soap *soap, const char *s, enum tt__RelayLogicalState *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__RelayLogicalState, s);
	if (map)
		*a = (enum tt__RelayLogicalState)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__RelayLogicalState)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__RelayLogicalState * SOAP_FMAC4 soap_in_tt__RelayLogicalState(struct soap *soap, const char *tag, enum tt__RelayLogicalState *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__RelayLogicalState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayLogicalState, sizeof(enum tt__RelayLogicalState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__RelayLogicalState(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__RelayLogicalState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayLogicalState, 0, sizeof(enum tt__RelayLogicalState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RelayLogicalState(struct soap *soap, const enum tt__RelayLogicalState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RelayLogicalState);
	if (soap_out_tt__RelayLogicalState(soap, tag?tag:"tt:RelayLogicalState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__RelayLogicalState * SOAP_FMAC4 soap_get_tt__RelayLogicalState(struct soap *soap, enum tt__RelayLogicalState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayLogicalState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__UserLevel(struct soap *soap, enum tt__UserLevel *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__UserLevel
	*a = SOAP_DEFAULT_tt__UserLevel;
#else
	*a = (enum tt__UserLevel)0;
#endif
}

static const struct soap_code_map soap_codes_tt__UserLevel[] =
{	{ (long)tt__UserLevel__Administrator, "Administrator" },
	{ (long)tt__UserLevel__Operator, "Operator" },
	{ (long)tt__UserLevel__User, "User" },
	{ (long)tt__UserLevel__Anonymous, "Anonymous" },
	{ (long)tt__UserLevel__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__UserLevel2s(struct soap *soap, enum tt__UserLevel n)
{	const char *s = soap_code_str(soap_codes_tt__UserLevel, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__UserLevel(struct soap *soap, const char *tag, int id, const enum tt__UserLevel *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__UserLevel), type) || soap_send(soap, soap_tt__UserLevel2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__UserLevel(struct soap *soap, const char *s, enum tt__UserLevel *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__UserLevel, s);
	if (map)
		*a = (enum tt__UserLevel)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 4)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__UserLevel)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__UserLevel * SOAP_FMAC4 soap_in_tt__UserLevel(struct soap *soap, const char *tag, enum tt__UserLevel *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__UserLevel *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__UserLevel, sizeof(enum tt__UserLevel), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__UserLevel(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__UserLevel *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__UserLevel, 0, sizeof(enum tt__UserLevel), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__UserLevel(struct soap *soap, const enum tt__UserLevel *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__UserLevel);
	if (soap_out_tt__UserLevel(soap, tag?tag:"tt:UserLevel", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__UserLevel * SOAP_FMAC4 soap_get_tt__UserLevel(struct soap *soap, enum tt__UserLevel *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__UserLevel(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SetDateTimeType(struct soap *soap, enum tt__SetDateTimeType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__SetDateTimeType
	*a = SOAP_DEFAULT_tt__SetDateTimeType;
#else
	*a = (enum tt__SetDateTimeType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__SetDateTimeType[] =
{	{ (long)tt__SetDateTimeType__Manual, "Manual" },
	{ (long)tt__SetDateTimeType__NTP, "NTP" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__SetDateTimeType2s(struct soap *soap, enum tt__SetDateTimeType n)
{	const char *s = soap_code_str(soap_codes_tt__SetDateTimeType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SetDateTimeType(struct soap *soap, const char *tag, int id, const enum tt__SetDateTimeType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SetDateTimeType), type) || soap_send(soap, soap_tt__SetDateTimeType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__SetDateTimeType(struct soap *soap, const char *s, enum tt__SetDateTimeType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__SetDateTimeType, s);
	if (map)
		*a = (enum tt__SetDateTimeType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__SetDateTimeType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__SetDateTimeType * SOAP_FMAC4 soap_in_tt__SetDateTimeType(struct soap *soap, const char *tag, enum tt__SetDateTimeType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__SetDateTimeType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SetDateTimeType, sizeof(enum tt__SetDateTimeType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__SetDateTimeType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__SetDateTimeType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SetDateTimeType, 0, sizeof(enum tt__SetDateTimeType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SetDateTimeType(struct soap *soap, const enum tt__SetDateTimeType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SetDateTimeType);
	if (soap_out_tt__SetDateTimeType(soap, tag?tag:"tt:SetDateTimeType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__SetDateTimeType * SOAP_FMAC4 soap_get_tt__SetDateTimeType(struct soap *soap, enum tt__SetDateTimeType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SetDateTimeType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FactoryDefaultType(struct soap *soap, enum tt__FactoryDefaultType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__FactoryDefaultType
	*a = SOAP_DEFAULT_tt__FactoryDefaultType;
#else
	*a = (enum tt__FactoryDefaultType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__FactoryDefaultType[] =
{	{ (long)tt__FactoryDefaultType__Hard, "Hard" },
	{ (long)tt__FactoryDefaultType__Soft, "Soft" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__FactoryDefaultType2s(struct soap *soap, enum tt__FactoryDefaultType n)
{	const char *s = soap_code_str(soap_codes_tt__FactoryDefaultType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FactoryDefaultType(struct soap *soap, const char *tag, int id, const enum tt__FactoryDefaultType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FactoryDefaultType), type) || soap_send(soap, soap_tt__FactoryDefaultType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__FactoryDefaultType(struct soap *soap, const char *s, enum tt__FactoryDefaultType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__FactoryDefaultType, s);
	if (map)
		*a = (enum tt__FactoryDefaultType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__FactoryDefaultType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__FactoryDefaultType * SOAP_FMAC4 soap_in_tt__FactoryDefaultType(struct soap *soap, const char *tag, enum tt__FactoryDefaultType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__FactoryDefaultType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FactoryDefaultType, sizeof(enum tt__FactoryDefaultType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__FactoryDefaultType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__FactoryDefaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FactoryDefaultType, 0, sizeof(enum tt__FactoryDefaultType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FactoryDefaultType(struct soap *soap, const enum tt__FactoryDefaultType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FactoryDefaultType);
	if (soap_out_tt__FactoryDefaultType(soap, tag?tag:"tt:FactoryDefaultType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__FactoryDefaultType * SOAP_FMAC4 soap_get_tt__FactoryDefaultType(struct soap *soap, enum tt__FactoryDefaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FactoryDefaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemLogType(struct soap *soap, enum tt__SystemLogType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__SystemLogType
	*a = SOAP_DEFAULT_tt__SystemLogType;
#else
	*a = (enum tt__SystemLogType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__SystemLogType[] =
{	{ (long)tt__SystemLogType__System, "System" },
	{ (long)tt__SystemLogType__Access, "Access" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__SystemLogType2s(struct soap *soap, enum tt__SystemLogType n)
{	const char *s = soap_code_str(soap_codes_tt__SystemLogType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogType(struct soap *soap, const char *tag, int id, const enum tt__SystemLogType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLogType), type) || soap_send(soap, soap_tt__SystemLogType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__SystemLogType(struct soap *soap, const char *s, enum tt__SystemLogType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__SystemLogType, s);
	if (map)
		*a = (enum tt__SystemLogType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__SystemLogType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__SystemLogType * SOAP_FMAC4 soap_in_tt__SystemLogType(struct soap *soap, const char *tag, enum tt__SystemLogType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__SystemLogType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogType, sizeof(enum tt__SystemLogType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__SystemLogType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__SystemLogType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLogType, 0, sizeof(enum tt__SystemLogType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemLogType(struct soap *soap, const enum tt__SystemLogType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemLogType);
	if (soap_out_tt__SystemLogType(soap, tag?tag:"tt:SystemLogType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__SystemLogType * SOAP_FMAC4 soap_get_tt__SystemLogType(struct soap *soap, enum tt__SystemLogType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CapabilityCategory(struct soap *soap, enum tt__CapabilityCategory *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__CapabilityCategory
	*a = SOAP_DEFAULT_tt__CapabilityCategory;
#else
	*a = (enum tt__CapabilityCategory)0;
#endif
}

static const struct soap_code_map soap_codes_tt__CapabilityCategory[] =
{	{ (long)tt__CapabilityCategory__All, "All" },
	{ (long)tt__CapabilityCategory__Analytics, "Analytics" },
	{ (long)tt__CapabilityCategory__Device, "Device" },
	{ (long)tt__CapabilityCategory__Events, "Events" },
	{ (long)tt__CapabilityCategory__Imaging, "Imaging" },
	{ (long)tt__CapabilityCategory__Media, "Media" },
	{ (long)tt__CapabilityCategory__PTZ, "PTZ" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__CapabilityCategory2s(struct soap *soap, enum tt__CapabilityCategory n)
{	const char *s = soap_code_str(soap_codes_tt__CapabilityCategory, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilityCategory(struct soap *soap, const char *tag, int id, const enum tt__CapabilityCategory *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilityCategory), type) || soap_send(soap, soap_tt__CapabilityCategory2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__CapabilityCategory(struct soap *soap, const char *s, enum tt__CapabilityCategory *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__CapabilityCategory, s);
	if (map)
		*a = (enum tt__CapabilityCategory)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 6)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__CapabilityCategory)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__CapabilityCategory * SOAP_FMAC4 soap_in_tt__CapabilityCategory(struct soap *soap, const char *tag, enum tt__CapabilityCategory *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__CapabilityCategory *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilityCategory, sizeof(enum tt__CapabilityCategory), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__CapabilityCategory(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__CapabilityCategory *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilityCategory, 0, sizeof(enum tt__CapabilityCategory), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CapabilityCategory(struct soap *soap, const enum tt__CapabilityCategory *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CapabilityCategory);
	if (soap_out_tt__CapabilityCategory(soap, tag?tag:"tt:CapabilityCategory", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__CapabilityCategory * SOAP_FMAC4 soap_get_tt__CapabilityCategory(struct soap *soap, enum tt__CapabilityCategory *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilityCategory(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11AuthAndMangementSuite(struct soap *soap, enum tt__Dot11AuthAndMangementSuite *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Dot11AuthAndMangementSuite
	*a = SOAP_DEFAULT_tt__Dot11AuthAndMangementSuite;
#else
	*a = (enum tt__Dot11AuthAndMangementSuite)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Dot11AuthAndMangementSuite[] =
{	{ (long)tt__Dot11AuthAndMangementSuite__None, "None" },
	{ (long)tt__Dot11AuthAndMangementSuite__Dot1X, "Dot1X" },
	{ (long)tt__Dot11AuthAndMangementSuite__PSK, "PSK" },
	{ (long)tt__Dot11AuthAndMangementSuite__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Dot11AuthAndMangementSuite2s(struct soap *soap, enum tt__Dot11AuthAndMangementSuite n)
{	const char *s = soap_code_str(soap_codes_tt__Dot11AuthAndMangementSuite, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AuthAndMangementSuite(struct soap *soap, const char *tag, int id, const enum tt__Dot11AuthAndMangementSuite *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11AuthAndMangementSuite), type) || soap_send(soap, soap_tt__Dot11AuthAndMangementSuite2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Dot11AuthAndMangementSuite(struct soap *soap, const char *s, enum tt__Dot11AuthAndMangementSuite *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Dot11AuthAndMangementSuite, s);
	if (map)
		*a = (enum tt__Dot11AuthAndMangementSuite)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Dot11AuthAndMangementSuite)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Dot11AuthAndMangementSuite * SOAP_FMAC4 soap_in_tt__Dot11AuthAndMangementSuite(struct soap *soap, const char *tag, enum tt__Dot11AuthAndMangementSuite *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Dot11AuthAndMangementSuite *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AuthAndMangementSuite, sizeof(enum tt__Dot11AuthAndMangementSuite), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Dot11AuthAndMangementSuite(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Dot11AuthAndMangementSuite *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11AuthAndMangementSuite, 0, sizeof(enum tt__Dot11AuthAndMangementSuite), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11AuthAndMangementSuite(struct soap *soap, const enum tt__Dot11AuthAndMangementSuite *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11AuthAndMangementSuite);
	if (soap_out_tt__Dot11AuthAndMangementSuite(soap, tag?tag:"tt:Dot11AuthAndMangementSuite", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Dot11AuthAndMangementSuite * SOAP_FMAC4 soap_get_tt__Dot11AuthAndMangementSuite(struct soap *soap, enum tt__Dot11AuthAndMangementSuite *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AuthAndMangementSuite(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11SignalStrength(struct soap *soap, enum tt__Dot11SignalStrength *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Dot11SignalStrength
	*a = SOAP_DEFAULT_tt__Dot11SignalStrength;
#else
	*a = (enum tt__Dot11SignalStrength)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Dot11SignalStrength[] =
{	{ (long)tt__Dot11SignalStrength__None, "None" },
	{ (long)tt__Dot11SignalStrength__Very_x0020Bad, "Very Bad" },
	{ (long)tt__Dot11SignalStrength__Bad, "Bad" },
	{ (long)tt__Dot11SignalStrength__Good, "Good" },
	{ (long)tt__Dot11SignalStrength__Very_x0020Good, "Very Good" },
	{ (long)tt__Dot11SignalStrength__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Dot11SignalStrength2s(struct soap *soap, enum tt__Dot11SignalStrength n)
{	const char *s = soap_code_str(soap_codes_tt__Dot11SignalStrength, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SignalStrength(struct soap *soap, const char *tag, int id, const enum tt__Dot11SignalStrength *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SignalStrength), type) || soap_send(soap, soap_tt__Dot11SignalStrength2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Dot11SignalStrength(struct soap *soap, const char *s, enum tt__Dot11SignalStrength *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Dot11SignalStrength, s);
	if (map)
		*a = (enum tt__Dot11SignalStrength)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 5)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Dot11SignalStrength)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Dot11SignalStrength * SOAP_FMAC4 soap_in_tt__Dot11SignalStrength(struct soap *soap, const char *tag, enum tt__Dot11SignalStrength *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Dot11SignalStrength *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SignalStrength, sizeof(enum tt__Dot11SignalStrength), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Dot11SignalStrength(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Dot11SignalStrength *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SignalStrength, 0, sizeof(enum tt__Dot11SignalStrength), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SignalStrength(struct soap *soap, const enum tt__Dot11SignalStrength *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11SignalStrength);
	if (soap_out_tt__Dot11SignalStrength(soap, tag?tag:"tt:Dot11SignalStrength", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Dot11SignalStrength * SOAP_FMAC4 soap_get_tt__Dot11SignalStrength(struct soap *soap, enum tt__Dot11SignalStrength *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SignalStrength(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11Cipher(struct soap *soap, enum tt__Dot11Cipher *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Dot11Cipher
	*a = SOAP_DEFAULT_tt__Dot11Cipher;
#else
	*a = (enum tt__Dot11Cipher)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Dot11Cipher[] =
{	{ (long)tt__Dot11Cipher__CCMP, "CCMP" },
	{ (long)tt__Dot11Cipher__TKIP, "TKIP" },
	{ (long)tt__Dot11Cipher__Any, "Any" },
	{ (long)tt__Dot11Cipher__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Dot11Cipher2s(struct soap *soap, enum tt__Dot11Cipher n)
{	const char *s = soap_code_str(soap_codes_tt__Dot11Cipher, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Cipher(struct soap *soap, const char *tag, int id, const enum tt__Dot11Cipher *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Cipher), type) || soap_send(soap, soap_tt__Dot11Cipher2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Dot11Cipher(struct soap *soap, const char *s, enum tt__Dot11Cipher *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Dot11Cipher, s);
	if (map)
		*a = (enum tt__Dot11Cipher)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Dot11Cipher)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Dot11Cipher * SOAP_FMAC4 soap_in_tt__Dot11Cipher(struct soap *soap, const char *tag, enum tt__Dot11Cipher *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Dot11Cipher *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Cipher, sizeof(enum tt__Dot11Cipher), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Dot11Cipher(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Dot11Cipher *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Cipher, 0, sizeof(enum tt__Dot11Cipher), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11Cipher(struct soap *soap, const enum tt__Dot11Cipher *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11Cipher);
	if (soap_out_tt__Dot11Cipher(soap, tag?tag:"tt:Dot11Cipher", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Dot11Cipher * SOAP_FMAC4 soap_get_tt__Dot11Cipher(struct soap *soap, enum tt__Dot11Cipher *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Cipher(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11SecurityMode(struct soap *soap, enum tt__Dot11SecurityMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Dot11SecurityMode
	*a = SOAP_DEFAULT_tt__Dot11SecurityMode;
#else
	*a = (enum tt__Dot11SecurityMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Dot11SecurityMode[] =
{	{ (long)tt__Dot11SecurityMode__None, "None" },
	{ (long)tt__Dot11SecurityMode__WEP, "WEP" },
	{ (long)tt__Dot11SecurityMode__PSK, "PSK" },
	{ (long)tt__Dot11SecurityMode__Dot1X, "Dot1X" },
	{ (long)tt__Dot11SecurityMode__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Dot11SecurityMode2s(struct soap *soap, enum tt__Dot11SecurityMode n)
{	const char *s = soap_code_str(soap_codes_tt__Dot11SecurityMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityMode(struct soap *soap, const char *tag, int id, const enum tt__Dot11SecurityMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SecurityMode), type) || soap_send(soap, soap_tt__Dot11SecurityMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Dot11SecurityMode(struct soap *soap, const char *s, enum tt__Dot11SecurityMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Dot11SecurityMode, s);
	if (map)
		*a = (enum tt__Dot11SecurityMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 4)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Dot11SecurityMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Dot11SecurityMode * SOAP_FMAC4 soap_in_tt__Dot11SecurityMode(struct soap *soap, const char *tag, enum tt__Dot11SecurityMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Dot11SecurityMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityMode, sizeof(enum tt__Dot11SecurityMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Dot11SecurityMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Dot11SecurityMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SecurityMode, 0, sizeof(enum tt__Dot11SecurityMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SecurityMode(struct soap *soap, const enum tt__Dot11SecurityMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityMode);
	if (soap_out_tt__Dot11SecurityMode(soap, tag?tag:"tt:Dot11SecurityMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Dot11SecurityMode * SOAP_FMAC4 soap_get_tt__Dot11SecurityMode(struct soap *soap, enum tt__Dot11SecurityMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Dot11StationMode(struct soap *soap, enum tt__Dot11StationMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Dot11StationMode
	*a = SOAP_DEFAULT_tt__Dot11StationMode;
#else
	*a = (enum tt__Dot11StationMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Dot11StationMode[] =
{	{ (long)tt__Dot11StationMode__Ad_hoc, "Ad-hoc" },
	{ (long)tt__Dot11StationMode__Infrastructure, "Infrastructure" },
	{ (long)tt__Dot11StationMode__Extended, "Extended" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Dot11StationMode2s(struct soap *soap, enum tt__Dot11StationMode n)
{	const char *s = soap_code_str(soap_codes_tt__Dot11StationMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11StationMode(struct soap *soap, const char *tag, int id, const enum tt__Dot11StationMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11StationMode), type) || soap_send(soap, soap_tt__Dot11StationMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Dot11StationMode(struct soap *soap, const char *s, enum tt__Dot11StationMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Dot11StationMode, s);
	if (map)
		*a = (enum tt__Dot11StationMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Dot11StationMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Dot11StationMode * SOAP_FMAC4 soap_in_tt__Dot11StationMode(struct soap *soap, const char *tag, enum tt__Dot11StationMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Dot11StationMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11StationMode, sizeof(enum tt__Dot11StationMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Dot11StationMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Dot11StationMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11StationMode, 0, sizeof(enum tt__Dot11StationMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11StationMode(struct soap *soap, const enum tt__Dot11StationMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Dot11StationMode);
	if (soap_out_tt__Dot11StationMode(soap, tag?tag:"tt:Dot11StationMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Dot11StationMode * SOAP_FMAC4 soap_get_tt__Dot11StationMode(struct soap *soap, enum tt__Dot11StationMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11StationMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DynamicDNSType(struct soap *soap, enum tt__DynamicDNSType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__DynamicDNSType
	*a = SOAP_DEFAULT_tt__DynamicDNSType;
#else
	*a = (enum tt__DynamicDNSType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__DynamicDNSType[] =
{	{ (long)tt__DynamicDNSType__NoUpdate, "NoUpdate" },
	{ (long)tt__DynamicDNSType__ClientUpdates, "ClientUpdates" },
	{ (long)tt__DynamicDNSType__ServerUpdates, "ServerUpdates" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__DynamicDNSType2s(struct soap *soap, enum tt__DynamicDNSType n)
{	const char *s = soap_code_str(soap_codes_tt__DynamicDNSType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSType(struct soap *soap, const char *tag, int id, const enum tt__DynamicDNSType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DynamicDNSType), type) || soap_send(soap, soap_tt__DynamicDNSType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__DynamicDNSType(struct soap *soap, const char *s, enum tt__DynamicDNSType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__DynamicDNSType, s);
	if (map)
		*a = (enum tt__DynamicDNSType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__DynamicDNSType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__DynamicDNSType * SOAP_FMAC4 soap_in_tt__DynamicDNSType(struct soap *soap, const char *tag, enum tt__DynamicDNSType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__DynamicDNSType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSType, sizeof(enum tt__DynamicDNSType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__DynamicDNSType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__DynamicDNSType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DynamicDNSType, 0, sizeof(enum tt__DynamicDNSType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DynamicDNSType(struct soap *soap, const enum tt__DynamicDNSType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSType);
	if (soap_out_tt__DynamicDNSType(soap, tag?tag:"tt:DynamicDNSType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__DynamicDNSType * SOAP_FMAC4 soap_get_tt__DynamicDNSType(struct soap *soap, enum tt__DynamicDNSType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPAddressFilterType(struct soap *soap, enum tt__IPAddressFilterType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__IPAddressFilterType
	*a = SOAP_DEFAULT_tt__IPAddressFilterType;
#else
	*a = (enum tt__IPAddressFilterType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__IPAddressFilterType[] =
{	{ (long)tt__IPAddressFilterType__Allow, "Allow" },
	{ (long)tt__IPAddressFilterType__Deny, "Deny" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__IPAddressFilterType2s(struct soap *soap, enum tt__IPAddressFilterType n)
{	const char *s = soap_code_str(soap_codes_tt__IPAddressFilterType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilterType(struct soap *soap, const char *tag, int id, const enum tt__IPAddressFilterType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddressFilterType), type) || soap_send(soap, soap_tt__IPAddressFilterType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__IPAddressFilterType(struct soap *soap, const char *s, enum tt__IPAddressFilterType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__IPAddressFilterType, s);
	if (map)
		*a = (enum tt__IPAddressFilterType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__IPAddressFilterType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__IPAddressFilterType * SOAP_FMAC4 soap_in_tt__IPAddressFilterType(struct soap *soap, const char *tag, enum tt__IPAddressFilterType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__IPAddressFilterType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilterType, sizeof(enum tt__IPAddressFilterType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__IPAddressFilterType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__IPAddressFilterType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddressFilterType, 0, sizeof(enum tt__IPAddressFilterType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPAddressFilterType(struct soap *soap, const enum tt__IPAddressFilterType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilterType);
	if (soap_out_tt__IPAddressFilterType(soap, tag?tag:"tt:IPAddressFilterType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__IPAddressFilterType * SOAP_FMAC4 soap_get_tt__IPAddressFilterType(struct soap *soap, enum tt__IPAddressFilterType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilterType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPType(struct soap *soap, enum tt__IPType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__IPType
	*a = SOAP_DEFAULT_tt__IPType;
#else
	*a = (enum tt__IPType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__IPType[] =
{	{ (long)tt__IPType__IPv4, "IPv4" },
	{ (long)tt__IPType__IPv6, "IPv6" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__IPType2s(struct soap *soap, enum tt__IPType n)
{	const char *s = soap_code_str(soap_codes_tt__IPType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPType(struct soap *soap, const char *tag, int id, const enum tt__IPType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPType), type) || soap_send(soap, soap_tt__IPType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__IPType(struct soap *soap, const char *s, enum tt__IPType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__IPType, s);
	if (map)
		*a = (enum tt__IPType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__IPType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__IPType * SOAP_FMAC4 soap_in_tt__IPType(struct soap *soap, const char *tag, enum tt__IPType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__IPType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPType, sizeof(enum tt__IPType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__IPType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__IPType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPType, 0, sizeof(enum tt__IPType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPType(struct soap *soap, const enum tt__IPType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPType);
	if (soap_out_tt__IPType(soap, tag?tag:"tt:IPType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__IPType * SOAP_FMAC4 soap_get_tt__IPType(struct soap *soap, enum tt__IPType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkHostType(struct soap *soap, enum tt__NetworkHostType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__NetworkHostType
	*a = SOAP_DEFAULT_tt__NetworkHostType;
#else
	*a = (enum tt__NetworkHostType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__NetworkHostType[] =
{	{ (long)tt__NetworkHostType__IPv4, "IPv4" },
	{ (long)tt__NetworkHostType__IPv6, "IPv6" },
	{ (long)tt__NetworkHostType__DNS, "DNS" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__NetworkHostType2s(struct soap *soap, enum tt__NetworkHostType n)
{	const char *s = soap_code_str(soap_codes_tt__NetworkHostType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHostType(struct soap *soap, const char *tag, int id, const enum tt__NetworkHostType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkHostType), type) || soap_send(soap, soap_tt__NetworkHostType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__NetworkHostType(struct soap *soap, const char *s, enum tt__NetworkHostType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__NetworkHostType, s);
	if (map)
		*a = (enum tt__NetworkHostType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__NetworkHostType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__NetworkHostType * SOAP_FMAC4 soap_in_tt__NetworkHostType(struct soap *soap, const char *tag, enum tt__NetworkHostType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__NetworkHostType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHostType, sizeof(enum tt__NetworkHostType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__NetworkHostType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__NetworkHostType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkHostType, 0, sizeof(enum tt__NetworkHostType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkHostType(struct soap *soap, const enum tt__NetworkHostType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkHostType);
	if (soap_out_tt__NetworkHostType(soap, tag?tag:"tt:NetworkHostType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__NetworkHostType * SOAP_FMAC4 soap_get_tt__NetworkHostType(struct soap *soap, enum tt__NetworkHostType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHostType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkProtocolType(struct soap *soap, enum tt__NetworkProtocolType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__NetworkProtocolType
	*a = SOAP_DEFAULT_tt__NetworkProtocolType;
#else
	*a = (enum tt__NetworkProtocolType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__NetworkProtocolType[] =
{	{ (long)tt__NetworkProtocolType__HTTP, "HTTP" },
	{ (long)tt__NetworkProtocolType__HTTPS, "HTTPS" },
	{ (long)tt__NetworkProtocolType__RTSP, "RTSP" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__NetworkProtocolType2s(struct soap *soap, enum tt__NetworkProtocolType n)
{	const char *s = soap_code_str(soap_codes_tt__NetworkProtocolType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocolType(struct soap *soap, const char *tag, int id, const enum tt__NetworkProtocolType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkProtocolType), type) || soap_send(soap, soap_tt__NetworkProtocolType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__NetworkProtocolType(struct soap *soap, const char *s, enum tt__NetworkProtocolType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__NetworkProtocolType, s);
	if (map)
		*a = (enum tt__NetworkProtocolType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__NetworkProtocolType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__NetworkProtocolType * SOAP_FMAC4 soap_in_tt__NetworkProtocolType(struct soap *soap, const char *tag, enum tt__NetworkProtocolType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__NetworkProtocolType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocolType, sizeof(enum tt__NetworkProtocolType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__NetworkProtocolType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__NetworkProtocolType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkProtocolType, 0, sizeof(enum tt__NetworkProtocolType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkProtocolType(struct soap *soap, const enum tt__NetworkProtocolType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocolType);
	if (soap_out_tt__NetworkProtocolType(soap, tag?tag:"tt:NetworkProtocolType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__NetworkProtocolType * SOAP_FMAC4 soap_get_tt__NetworkProtocolType(struct soap *soap, enum tt__NetworkProtocolType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocolType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IPv6DHCPConfiguration(struct soap *soap, enum tt__IPv6DHCPConfiguration *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__IPv6DHCPConfiguration
	*a = SOAP_DEFAULT_tt__IPv6DHCPConfiguration;
#else
	*a = (enum tt__IPv6DHCPConfiguration)0;
#endif
}

static const struct soap_code_map soap_codes_tt__IPv6DHCPConfiguration[] =
{	{ (long)tt__IPv6DHCPConfiguration__Auto, "Auto" },
	{ (long)tt__IPv6DHCPConfiguration__Stateful, "Stateful" },
	{ (long)tt__IPv6DHCPConfiguration__Stateless, "Stateless" },
	{ (long)tt__IPv6DHCPConfiguration__Off, "Off" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__IPv6DHCPConfiguration2s(struct soap *soap, enum tt__IPv6DHCPConfiguration n)
{	const char *s = soap_code_str(soap_codes_tt__IPv6DHCPConfiguration, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6DHCPConfiguration(struct soap *soap, const char *tag, int id, const enum tt__IPv6DHCPConfiguration *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6DHCPConfiguration), type) || soap_send(soap, soap_tt__IPv6DHCPConfiguration2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__IPv6DHCPConfiguration(struct soap *soap, const char *s, enum tt__IPv6DHCPConfiguration *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__IPv6DHCPConfiguration, s);
	if (map)
		*a = (enum tt__IPv6DHCPConfiguration)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__IPv6DHCPConfiguration)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__IPv6DHCPConfiguration * SOAP_FMAC4 soap_in_tt__IPv6DHCPConfiguration(struct soap *soap, const char *tag, enum tt__IPv6DHCPConfiguration *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__IPv6DHCPConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6DHCPConfiguration, sizeof(enum tt__IPv6DHCPConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__IPv6DHCPConfiguration(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__IPv6DHCPConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6DHCPConfiguration, 0, sizeof(enum tt__IPv6DHCPConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IPv6DHCPConfiguration(struct soap *soap, const enum tt__IPv6DHCPConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IPv6DHCPConfiguration);
	if (soap_out_tt__IPv6DHCPConfiguration(soap, tag?tag:"tt:IPv6DHCPConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__IPv6DHCPConfiguration * SOAP_FMAC4 soap_get_tt__IPv6DHCPConfiguration(struct soap *soap, enum tt__IPv6DHCPConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6DHCPConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Duplex(struct soap *soap, enum tt__Duplex *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Duplex
	*a = SOAP_DEFAULT_tt__Duplex;
#else
	*a = (enum tt__Duplex)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Duplex[] =
{	{ (long)tt__Duplex__Full, "Full" },
	{ (long)tt__Duplex__Half, "Half" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Duplex2s(struct soap *soap, enum tt__Duplex n)
{	const char *s = soap_code_str(soap_codes_tt__Duplex, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Duplex(struct soap *soap, const char *tag, int id, const enum tt__Duplex *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Duplex), type) || soap_send(soap, soap_tt__Duplex2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Duplex(struct soap *soap, const char *s, enum tt__Duplex *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Duplex, s);
	if (map)
		*a = (enum tt__Duplex)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Duplex)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Duplex * SOAP_FMAC4 soap_in_tt__Duplex(struct soap *soap, const char *tag, enum tt__Duplex *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Duplex *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Duplex, sizeof(enum tt__Duplex), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Duplex(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Duplex *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Duplex, 0, sizeof(enum tt__Duplex), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Duplex(struct soap *soap, const enum tt__Duplex *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Duplex);
	if (soap_out_tt__Duplex(soap, tag?tag:"tt:Duplex", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Duplex * SOAP_FMAC4 soap_get_tt__Duplex(struct soap *soap, enum tt__Duplex *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Duplex(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DiscoveryMode(struct soap *soap, enum tt__DiscoveryMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__DiscoveryMode
	*a = SOAP_DEFAULT_tt__DiscoveryMode;
#else
	*a = (enum tt__DiscoveryMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__DiscoveryMode[] =
{	{ (long)tt__DiscoveryMode__Discoverable, "Discoverable" },
	{ (long)tt__DiscoveryMode__NonDiscoverable, "NonDiscoverable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__DiscoveryMode2s(struct soap *soap, enum tt__DiscoveryMode n)
{	const char *s = soap_code_str(soap_codes_tt__DiscoveryMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DiscoveryMode(struct soap *soap, const char *tag, int id, const enum tt__DiscoveryMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DiscoveryMode), type) || soap_send(soap, soap_tt__DiscoveryMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__DiscoveryMode(struct soap *soap, const char *s, enum tt__DiscoveryMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__DiscoveryMode, s);
	if (map)
		*a = (enum tt__DiscoveryMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__DiscoveryMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__DiscoveryMode * SOAP_FMAC4 soap_in_tt__DiscoveryMode(struct soap *soap, const char *tag, enum tt__DiscoveryMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__DiscoveryMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DiscoveryMode, sizeof(enum tt__DiscoveryMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__DiscoveryMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__DiscoveryMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DiscoveryMode, 0, sizeof(enum tt__DiscoveryMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DiscoveryMode(struct soap *soap, const enum tt__DiscoveryMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DiscoveryMode);
	if (soap_out_tt__DiscoveryMode(soap, tag?tag:"tt:DiscoveryMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__DiscoveryMode * SOAP_FMAC4 soap_get_tt__DiscoveryMode(struct soap *soap, enum tt__DiscoveryMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DiscoveryMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ScopeDefinition(struct soap *soap, enum tt__ScopeDefinition *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__ScopeDefinition
	*a = SOAP_DEFAULT_tt__ScopeDefinition;
#else
	*a = (enum tt__ScopeDefinition)0;
#endif
}

static const struct soap_code_map soap_codes_tt__ScopeDefinition[] =
{	{ (long)tt__ScopeDefinition__Fixed, "Fixed" },
	{ (long)tt__ScopeDefinition__Configurable, "Configurable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__ScopeDefinition2s(struct soap *soap, enum tt__ScopeDefinition n)
{	const char *s = soap_code_str(soap_codes_tt__ScopeDefinition, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ScopeDefinition(struct soap *soap, const char *tag, int id, const enum tt__ScopeDefinition *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ScopeDefinition), type) || soap_send(soap, soap_tt__ScopeDefinition2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__ScopeDefinition(struct soap *soap, const char *s, enum tt__ScopeDefinition *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__ScopeDefinition, s);
	if (map)
		*a = (enum tt__ScopeDefinition)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__ScopeDefinition)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__ScopeDefinition * SOAP_FMAC4 soap_in_tt__ScopeDefinition(struct soap *soap, const char *tag, enum tt__ScopeDefinition *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__ScopeDefinition *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ScopeDefinition, sizeof(enum tt__ScopeDefinition), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__ScopeDefinition(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__ScopeDefinition *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ScopeDefinition, 0, sizeof(enum tt__ScopeDefinition), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ScopeDefinition(struct soap *soap, const enum tt__ScopeDefinition *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ScopeDefinition);
	if (soap_out_tt__ScopeDefinition(soap, tag?tag:"tt:ScopeDefinition", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__ScopeDefinition * SOAP_FMAC4 soap_get_tt__ScopeDefinition(struct soap *soap, enum tt__ScopeDefinition *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ScopeDefinition(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TransportProtocol(struct soap *soap, enum tt__TransportProtocol *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__TransportProtocol
	*a = SOAP_DEFAULT_tt__TransportProtocol;
#else
	*a = (enum tt__TransportProtocol)0;
#endif
}

static const struct soap_code_map soap_codes_tt__TransportProtocol[] =
{	{ (long)tt__TransportProtocol__UDP, "UDP" },
	{ (long)tt__TransportProtocol__TCP, "TCP" },
	{ (long)tt__TransportProtocol__RTSP, "RTSP" },
	{ (long)tt__TransportProtocol__HTTP, "HTTP" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__TransportProtocol2s(struct soap *soap, enum tt__TransportProtocol n)
{	const char *s = soap_code_str(soap_codes_tt__TransportProtocol, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TransportProtocol(struct soap *soap, const char *tag, int id, const enum tt__TransportProtocol *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TransportProtocol), type) || soap_send(soap, soap_tt__TransportProtocol2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__TransportProtocol(struct soap *soap, const char *s, enum tt__TransportProtocol *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__TransportProtocol, s);
	if (map)
		*a = (enum tt__TransportProtocol)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__TransportProtocol)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__TransportProtocol * SOAP_FMAC4 soap_in_tt__TransportProtocol(struct soap *soap, const char *tag, enum tt__TransportProtocol *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__TransportProtocol *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TransportProtocol, sizeof(enum tt__TransportProtocol), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__TransportProtocol(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__TransportProtocol *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TransportProtocol, 0, sizeof(enum tt__TransportProtocol), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TransportProtocol(struct soap *soap, const enum tt__TransportProtocol *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TransportProtocol);
	if (soap_out_tt__TransportProtocol(soap, tag?tag:"tt:TransportProtocol", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__TransportProtocol * SOAP_FMAC4 soap_get_tt__TransportProtocol(struct soap *soap, enum tt__TransportProtocol *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TransportProtocol(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__StreamType(struct soap *soap, enum tt__StreamType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__StreamType
	*a = SOAP_DEFAULT_tt__StreamType;
#else
	*a = (enum tt__StreamType)0;
#endif
}

static const struct soap_code_map soap_codes_tt__StreamType[] =
{	{ (long)tt__StreamType__RTP_Unicast, "RTP-Unicast" },
	{ (long)tt__StreamType__RTP_Multicast, "RTP-Multicast" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__StreamType2s(struct soap *soap, enum tt__StreamType n)
{	const char *s = soap_code_str(soap_codes_tt__StreamType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__StreamType(struct soap *soap, const char *tag, int id, const enum tt__StreamType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__StreamType), type) || soap_send(soap, soap_tt__StreamType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__StreamType(struct soap *soap, const char *s, enum tt__StreamType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__StreamType, s);
	if (map)
		*a = (enum tt__StreamType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__StreamType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__StreamType * SOAP_FMAC4 soap_in_tt__StreamType(struct soap *soap, const char *tag, enum tt__StreamType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__StreamType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__StreamType, sizeof(enum tt__StreamType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__StreamType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__StreamType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__StreamType, 0, sizeof(enum tt__StreamType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__StreamType(struct soap *soap, const enum tt__StreamType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__StreamType);
	if (soap_out_tt__StreamType(soap, tag?tag:"tt:StreamType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__StreamType * SOAP_FMAC4 soap_get_tt__StreamType(struct soap *soap, enum tt__StreamType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__StreamType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioEncoding(struct soap *soap, enum tt__AudioEncoding *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__AudioEncoding
	*a = SOAP_DEFAULT_tt__AudioEncoding;
#else
	*a = (enum tt__AudioEncoding)0;
#endif
}

static const struct soap_code_map soap_codes_tt__AudioEncoding[] =
{	{ (long)tt__AudioEncoding__G711, "G711" },
	{ (long)tt__AudioEncoding__G726, "G726" },
	{ (long)tt__AudioEncoding__AAC, "AAC" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__AudioEncoding2s(struct soap *soap, enum tt__AudioEncoding n)
{	const char *s = soap_code_str(soap_codes_tt__AudioEncoding, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioEncoding(struct soap *soap, const char *tag, int id, const enum tt__AudioEncoding *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioEncoding), type) || soap_send(soap, soap_tt__AudioEncoding2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__AudioEncoding(struct soap *soap, const char *s, enum tt__AudioEncoding *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__AudioEncoding, s);
	if (map)
		*a = (enum tt__AudioEncoding)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__AudioEncoding)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__AudioEncoding * SOAP_FMAC4 soap_in_tt__AudioEncoding(struct soap *soap, const char *tag, enum tt__AudioEncoding *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__AudioEncoding *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioEncoding, sizeof(enum tt__AudioEncoding), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__AudioEncoding(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__AudioEncoding *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioEncoding, 0, sizeof(enum tt__AudioEncoding), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioEncoding(struct soap *soap, const enum tt__AudioEncoding *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioEncoding);
	if (soap_out_tt__AudioEncoding(soap, tag?tag:"tt:AudioEncoding", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__AudioEncoding * SOAP_FMAC4 soap_get_tt__AudioEncoding(struct soap *soap, enum tt__AudioEncoding *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioEncoding(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__H264Profile(struct soap *soap, enum tt__H264Profile *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__H264Profile
	*a = SOAP_DEFAULT_tt__H264Profile;
#else
	*a = (enum tt__H264Profile)0;
#endif
}

static const struct soap_code_map soap_codes_tt__H264Profile[] =
{	{ (long)tt__H264Profile__Baseline, "Baseline" },
	{ (long)tt__H264Profile__Main, "Main" },
	{ (long)tt__H264Profile__Extended, "Extended" },
	{ (long)tt__H264Profile__High, "High" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__H264Profile2s(struct soap *soap, enum tt__H264Profile n)
{	const char *s = soap_code_str(soap_codes_tt__H264Profile, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264Profile(struct soap *soap, const char *tag, int id, const enum tt__H264Profile *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264Profile), type) || soap_send(soap, soap_tt__H264Profile2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__H264Profile(struct soap *soap, const char *s, enum tt__H264Profile *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__H264Profile, s);
	if (map)
		*a = (enum tt__H264Profile)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 3)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__H264Profile)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__H264Profile * SOAP_FMAC4 soap_in_tt__H264Profile(struct soap *soap, const char *tag, enum tt__H264Profile *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__H264Profile *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264Profile, sizeof(enum tt__H264Profile), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__H264Profile(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__H264Profile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264Profile, 0, sizeof(enum tt__H264Profile), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__H264Profile(struct soap *soap, const enum tt__H264Profile *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__H264Profile);
	if (soap_out_tt__H264Profile(soap, tag?tag:"tt:H264Profile", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__H264Profile * SOAP_FMAC4 soap_get_tt__H264Profile(struct soap *soap, enum tt__H264Profile *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264Profile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Mpeg4Profile(struct soap *soap, enum tt__Mpeg4Profile *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__Mpeg4Profile
	*a = SOAP_DEFAULT_tt__Mpeg4Profile;
#else
	*a = (enum tt__Mpeg4Profile)0;
#endif
}

static const struct soap_code_map soap_codes_tt__Mpeg4Profile[] =
{	{ (long)tt__Mpeg4Profile__SP, "SP" },
	{ (long)tt__Mpeg4Profile__ASP, "ASP" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__Mpeg4Profile2s(struct soap *soap, enum tt__Mpeg4Profile n)
{	const char *s = soap_code_str(soap_codes_tt__Mpeg4Profile, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4Profile(struct soap *soap, const char *tag, int id, const enum tt__Mpeg4Profile *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4Profile), type) || soap_send(soap, soap_tt__Mpeg4Profile2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__Mpeg4Profile(struct soap *soap, const char *s, enum tt__Mpeg4Profile *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__Mpeg4Profile, s);
	if (map)
		*a = (enum tt__Mpeg4Profile)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__Mpeg4Profile)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__Mpeg4Profile * SOAP_FMAC4 soap_in_tt__Mpeg4Profile(struct soap *soap, const char *tag, enum tt__Mpeg4Profile *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__Mpeg4Profile *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4Profile, sizeof(enum tt__Mpeg4Profile), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__Mpeg4Profile(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__Mpeg4Profile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4Profile, 0, sizeof(enum tt__Mpeg4Profile), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Mpeg4Profile(struct soap *soap, const enum tt__Mpeg4Profile *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4Profile);
	if (soap_out_tt__Mpeg4Profile(soap, tag?tag:"tt:Mpeg4Profile", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__Mpeg4Profile * SOAP_FMAC4 soap_get_tt__Mpeg4Profile(struct soap *soap, enum tt__Mpeg4Profile *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4Profile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoEncoding(struct soap *soap, enum tt__VideoEncoding *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__VideoEncoding
	*a = SOAP_DEFAULT_tt__VideoEncoding;
#else
	*a = (enum tt__VideoEncoding)0;
#endif
}

static const struct soap_code_map soap_codes_tt__VideoEncoding[] =
{	{ (long)tt__VideoEncoding__JPEG, "JPEG" },
	{ (long)tt__VideoEncoding__MPEG4, "MPEG4" },
	{ (long)tt__VideoEncoding__H264, "H264" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__VideoEncoding2s(struct soap *soap, enum tt__VideoEncoding n)
{	const char *s = soap_code_str(soap_codes_tt__VideoEncoding, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoding(struct soap *soap, const char *tag, int id, const enum tt__VideoEncoding *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoEncoding), type) || soap_send(soap, soap_tt__VideoEncoding2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__VideoEncoding(struct soap *soap, const char *s, enum tt__VideoEncoding *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__VideoEncoding, s);
	if (map)
		*a = (enum tt__VideoEncoding)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__VideoEncoding)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__VideoEncoding * SOAP_FMAC4 soap_in_tt__VideoEncoding(struct soap *soap, const char *tag, enum tt__VideoEncoding *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__VideoEncoding *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoding, sizeof(enum tt__VideoEncoding), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__VideoEncoding(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__VideoEncoding *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoEncoding, 0, sizeof(enum tt__VideoEncoding), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoEncoding(struct soap *soap, const enum tt__VideoEncoding *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoding);
	if (soap_out_tt__VideoEncoding(soap, tag?tag:"tt:VideoEncoding", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__VideoEncoding * SOAP_FMAC4 soap_get_tt__VideoEncoding(struct soap *soap, enum tt__VideoEncoding *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoding(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RotateMode(struct soap *soap, enum tt__RotateMode *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_tt__RotateMode
	*a = SOAP_DEFAULT_tt__RotateMode;
#else
	*a = (enum tt__RotateMode)0;
#endif
}

static const struct soap_code_map soap_codes_tt__RotateMode[] =
{	{ (long)tt__RotateMode__OFF, "OFF" },
	{ (long)tt__RotateMode__ON, "ON" },
	{ (long)tt__RotateMode__AUTO, "AUTO" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_tt__RotateMode2s(struct soap *soap, enum tt__RotateMode n)
{	const char *s = soap_code_str(soap_codes_tt__RotateMode, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RotateMode(struct soap *soap, const char *tag, int id, const enum tt__RotateMode *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RotateMode), type) || soap_send(soap, soap_tt__RotateMode2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2tt__RotateMode(struct soap *soap, const char *s, enum tt__RotateMode *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_tt__RotateMode, s);
	if (map)
		*a = (enum tt__RotateMode)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 2)))
			return soap->error = SOAP_TYPE;
		*a = (enum tt__RotateMode)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum tt__RotateMode * SOAP_FMAC4 soap_in_tt__RotateMode(struct soap *soap, const char *tag, enum tt__RotateMode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum tt__RotateMode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RotateMode, sizeof(enum tt__RotateMode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2tt__RotateMode(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum tt__RotateMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RotateMode, 0, sizeof(enum tt__RotateMode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RotateMode(struct soap *soap, const enum tt__RotateMode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RotateMode);
	if (soap_out_tt__RotateMode(soap, tag?tag:"tt:RotateMode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__RotateMode * SOAP_FMAC4 soap_get_tt__RotateMode(struct soap *soap, enum tt__RotateMode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RotateMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_bool(struct soap *soap, bool *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_bool
	*a = SOAP_DEFAULT_bool;
#else
	*a = (bool)0;
#endif
}

static const struct soap_code_map soap_codes_bool[] =
{	{ (long)false, "false" },
	{ (long)true, "true" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_bool2s(struct soap *soap, bool n)
{
	(void)soap; /* appease -Wall -Werror */
return soap_code_str(soap_codes_bool, n!=0);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_bool(struct soap *soap, const char *tag, int id, const bool *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_bool), type) || soap_send(soap, soap_bool2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2bool(struct soap *soap, const char *s, bool *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_bool, s);
	if (map)
		*a = (bool)(map->code != 0);
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || n < 0 || n > 1)
			return soap->error = SOAP_TYPE;
		*a = (bool)(n != 0);
	}
	return SOAP_OK;
}

SOAP_FMAC3 bool * SOAP_FMAC4 soap_in_bool(struct soap *soap, const char *tag, bool *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":boolean"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (bool *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_bool, sizeof(bool), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2bool(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (bool *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_bool, 0, sizeof(bool), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_bool(struct soap *soap, const bool *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_bool);
	if (soap_out_bool(soap, tag?tag:"boolean", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 bool * SOAP_FMAC4 soap_get_bool(struct soap *soap, bool *p, const char *tag, const char *type)
{
	if ((p = soap_in_bool(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsa5__IsReferenceParameter(struct soap *soap, enum _wsa5__IsReferenceParameter *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT__wsa5__IsReferenceParameter
	*a = SOAP_DEFAULT__wsa5__IsReferenceParameter;
#else
	*a = (enum _wsa5__IsReferenceParameter)0;
#endif
}

static const struct soap_code_map soap_codes__wsa5__IsReferenceParameter[] =
{	{ (long)_wsa5__IsReferenceParameter__false, "false" },
	{ (long)_wsa5__IsReferenceParameter__true, "true" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap__wsa5__IsReferenceParameter2s(struct soap *soap, enum _wsa5__IsReferenceParameter n)
{	const char *s = soap_code_str(soap_codes__wsa5__IsReferenceParameter, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsa5__IsReferenceParameter(struct soap *soap, const char *tag, int id, const enum _wsa5__IsReferenceParameter *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsa5__IsReferenceParameter), type) || soap_send(soap, soap__wsa5__IsReferenceParameter2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2_wsa5__IsReferenceParameter(struct soap *soap, const char *s, enum _wsa5__IsReferenceParameter *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes__wsa5__IsReferenceParameter, s);
	if (map)
		*a = (enum _wsa5__IsReferenceParameter)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 1)))
			return soap->error = SOAP_TYPE;
		*a = (enum _wsa5__IsReferenceParameter)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum _wsa5__IsReferenceParameter * SOAP_FMAC4 soap_in__wsa5__IsReferenceParameter(struct soap *soap, const char *tag, enum _wsa5__IsReferenceParameter *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum _wsa5__IsReferenceParameter *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsa5__IsReferenceParameter, sizeof(enum _wsa5__IsReferenceParameter), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2_wsa5__IsReferenceParameter(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum _wsa5__IsReferenceParameter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsa5__IsReferenceParameter, 0, sizeof(enum _wsa5__IsReferenceParameter), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsa5__IsReferenceParameter(struct soap *soap, const enum _wsa5__IsReferenceParameter *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsa5__IsReferenceParameter);
	if (soap_out__wsa5__IsReferenceParameter(soap, tag?tag:"wsa5:IsReferenceParameter", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum _wsa5__IsReferenceParameter * SOAP_FMAC4 soap_get__wsa5__IsReferenceParameter(struct soap *soap, enum _wsa5__IsReferenceParameter *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsa5__IsReferenceParameter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__FaultCodesType(struct soap *soap, enum wsa5__FaultCodesType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsa5__FaultCodesType
	*a = SOAP_DEFAULT_wsa5__FaultCodesType;
#else
	*a = (enum wsa5__FaultCodesType)0;
#endif
}

static const struct soap_code_map soap_codes_wsa5__FaultCodesType[] =
{	{ (long)wsa5__InvalidAddressingHeader, "wsa5:InvalidAddressingHeader" },
	{ (long)wsa5__InvalidAddress, "wsa5:InvalidAddress" },
	{ (long)wsa5__InvalidEPR, "wsa5:InvalidEPR" },
	{ (long)wsa5__InvalidCardinality, "wsa5:InvalidCardinality" },
	{ (long)wsa5__MissingAddressInEPR, "wsa5:MissingAddressInEPR" },
	{ (long)wsa5__DuplicateMessageID, "wsa5:DuplicateMessageID" },
	{ (long)wsa5__ActionMismatch, "wsa5:ActionMismatch" },
	{ (long)wsa5__MessageAddressingHeaderRequired, "wsa5:MessageAddressingHeaderRequired" },
	{ (long)wsa5__DestinationUnreachable, "wsa5:DestinationUnreachable" },
	{ (long)wsa5__ActionNotSupported, "wsa5:ActionNotSupported" },
	{ (long)wsa5__EndpointUnavailable, "wsa5:EndpointUnavailable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsa5__FaultCodesType2s(struct soap *soap, enum wsa5__FaultCodesType n)
{	const char *s = soap_code_str(soap_codes_wsa5__FaultCodesType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__FaultCodesType(struct soap *soap, const char *tag, int id, const enum wsa5__FaultCodesType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__FaultCodesType), type) || soap_send(soap, soap_wsa5__FaultCodesType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsa5__FaultCodesType(struct soap *soap, const char *s, enum wsa5__FaultCodesType *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsa5__FaultCodesType, t);
	if (map)
		*a = (enum wsa5__FaultCodesType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 10)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsa5__FaultCodesType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsa5__FaultCodesType * SOAP_FMAC4 soap_in_wsa5__FaultCodesType(struct soap *soap, const char *tag, enum wsa5__FaultCodesType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsa5__FaultCodesType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__FaultCodesType, sizeof(enum wsa5__FaultCodesType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsa5__FaultCodesType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsa5__FaultCodesType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__FaultCodesType, 0, sizeof(enum wsa5__FaultCodesType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__FaultCodesType(struct soap *soap, const enum wsa5__FaultCodesType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__FaultCodesType);
	if (soap_out_wsa5__FaultCodesType(soap, tag?tag:"wsa5:FaultCodesType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsa5__FaultCodesType * SOAP_FMAC4 soap_get_wsa5__FaultCodesType(struct soap *soap, enum wsa5__FaultCodesType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__FaultCodesType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa5__RelationshipType(struct soap *soap, enum wsa5__RelationshipType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsa5__RelationshipType
	*a = SOAP_DEFAULT_wsa5__RelationshipType;
#else
	*a = (enum wsa5__RelationshipType)0;
#endif
}

static const struct soap_code_map soap_codes_wsa5__RelationshipType[] =
{	{ (long)http_x003a_x002f_x002fwww_x002ew3_x002eorg_x002f2005_x002f08_x002faddressing_x002freply, "http://www.w3.org/2005/08/addressing/reply" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsa5__RelationshipType2s(struct soap *soap, enum wsa5__RelationshipType n)
{	const char *s = soap_code_str(soap_codes_wsa5__RelationshipType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa5__RelationshipType(struct soap *soap, const char *tag, int id, const enum wsa5__RelationshipType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa5__RelationshipType), type) || soap_send(soap, soap_wsa5__RelationshipType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsa5__RelationshipType(struct soap *soap, const char *s, enum wsa5__RelationshipType *a)
{
	const struct soap_code_map *map;
	if (!s)
		return soap->error;
	map = soap_code(soap_codes_wsa5__RelationshipType, s);
	if (map)
		*a = (enum wsa5__RelationshipType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 0)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsa5__RelationshipType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsa5__RelationshipType * SOAP_FMAC4 soap_in_wsa5__RelationshipType(struct soap *soap, const char *tag, enum wsa5__RelationshipType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsa5__RelationshipType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa5__RelationshipType, sizeof(enum wsa5__RelationshipType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsa5__RelationshipType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsa5__RelationshipType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa5__RelationshipType, 0, sizeof(enum wsa5__RelationshipType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa5__RelationshipType(struct soap *soap, const enum wsa5__RelationshipType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa5__RelationshipType);
	if (soap_out_wsa5__RelationshipType(soap, tag?tag:"wsa5:RelationshipType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsa5__RelationshipType * SOAP_FMAC4 soap_get_wsa5__RelationshipType(struct soap *soap, enum wsa5__RelationshipType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa5__RelationshipType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsdd__FaultCodeType(struct soap *soap, enum wsdd__FaultCodeType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsdd__FaultCodeType
	*a = SOAP_DEFAULT_wsdd__FaultCodeType;
#else
	*a = (enum wsdd__FaultCodeType)0;
#endif
}

static const struct soap_code_map soap_codes_wsdd__FaultCodeType[] =
{	{ (long)wsdd__MatchingRuleNotSupported, "wsdd:MatchingRuleNotSupported" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsdd__FaultCodeType2s(struct soap *soap, enum wsdd__FaultCodeType n)
{	const char *s = soap_code_str(soap_codes_wsdd__FaultCodeType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsdd__FaultCodeType(struct soap *soap, const char *tag, int id, const enum wsdd__FaultCodeType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsdd__FaultCodeType), type) || soap_send(soap, soap_wsdd__FaultCodeType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsdd__FaultCodeType(struct soap *soap, const char *s, enum wsdd__FaultCodeType *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsdd__FaultCodeType, t);
	if (map)
		*a = (enum wsdd__FaultCodeType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 0)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsdd__FaultCodeType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsdd__FaultCodeType * SOAP_FMAC4 soap_in_wsdd__FaultCodeType(struct soap *soap, const char *tag, enum wsdd__FaultCodeType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsdd__FaultCodeType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsdd__FaultCodeType, sizeof(enum wsdd__FaultCodeType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsdd__FaultCodeType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsdd__FaultCodeType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsdd__FaultCodeType, 0, sizeof(enum wsdd__FaultCodeType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsdd__FaultCodeType(struct soap *soap, const enum wsdd__FaultCodeType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsdd__FaultCodeType);
	if (soap_out_wsdd__FaultCodeType(soap, tag?tag:"wsdd:FaultCodeType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsdd__FaultCodeType * SOAP_FMAC4 soap_get_wsdd__FaultCodeType(struct soap *soap, enum wsdd__FaultCodeType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsdd__FaultCodeType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa__FaultSubcodeValues(struct soap *soap, enum wsa__FaultSubcodeValues *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsa__FaultSubcodeValues
	*a = SOAP_DEFAULT_wsa__FaultSubcodeValues;
#else
	*a = (enum wsa__FaultSubcodeValues)0;
#endif
}

static const struct soap_code_map soap_codes_wsa__FaultSubcodeValues[] =
{	{ (long)wsa__InvalidMessageInformationHeader, "wsa:InvalidMessageInformationHeader" },
	{ (long)wsa__MessageInformationHeaderRequired, "wsa:MessageInformationHeaderRequired" },
	{ (long)wsa__DestinationUnreachable, "wsa:DestinationUnreachable" },
	{ (long)wsa__ActionNotSupported, "wsa:ActionNotSupported" },
	{ (long)wsa__EndpointUnavailable, "wsa:EndpointUnavailable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsa__FaultSubcodeValues2s(struct soap *soap, enum wsa__FaultSubcodeValues n)
{	const char *s = soap_code_str(soap_codes_wsa__FaultSubcodeValues, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa__FaultSubcodeValues(struct soap *soap, const char *tag, int id, const enum wsa__FaultSubcodeValues *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa__FaultSubcodeValues), type) || soap_send(soap, soap_wsa__FaultSubcodeValues2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsa__FaultSubcodeValues(struct soap *soap, const char *s, enum wsa__FaultSubcodeValues *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsa__FaultSubcodeValues, t);
	if (map)
		*a = (enum wsa__FaultSubcodeValues)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 4)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsa__FaultSubcodeValues)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsa__FaultSubcodeValues * SOAP_FMAC4 soap_in_wsa__FaultSubcodeValues(struct soap *soap, const char *tag, enum wsa__FaultSubcodeValues *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsa__FaultSubcodeValues *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa__FaultSubcodeValues, sizeof(enum wsa__FaultSubcodeValues), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsa__FaultSubcodeValues(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsa__FaultSubcodeValues *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa__FaultSubcodeValues, 0, sizeof(enum wsa__FaultSubcodeValues), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa__FaultSubcodeValues(struct soap *soap, const enum wsa__FaultSubcodeValues *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa__FaultSubcodeValues);
	if (soap_out_wsa__FaultSubcodeValues(soap, tag?tag:"wsa:FaultSubcodeValues", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsa__FaultSubcodeValues * SOAP_FMAC4 soap_get_wsa__FaultSubcodeValues(struct soap *soap, enum wsa__FaultSubcodeValues *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa__FaultSubcodeValues(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsa__RelationshipTypeValues(struct soap *soap, enum wsa__RelationshipTypeValues *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsa__RelationshipTypeValues
	*a = SOAP_DEFAULT_wsa__RelationshipTypeValues;
#else
	*a = (enum wsa__RelationshipTypeValues)0;
#endif
}

static const struct soap_code_map soap_codes_wsa__RelationshipTypeValues[] =
{	{ (long)wsa__Reply, "wsa:Reply" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsa__RelationshipTypeValues2s(struct soap *soap, enum wsa__RelationshipTypeValues n)
{	const char *s = soap_code_str(soap_codes_wsa__RelationshipTypeValues, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsa__RelationshipTypeValues(struct soap *soap, const char *tag, int id, const enum wsa__RelationshipTypeValues *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsa__RelationshipTypeValues), type) || soap_send(soap, soap_wsa__RelationshipTypeValues2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsa__RelationshipTypeValues(struct soap *soap, const char *s, enum wsa__RelationshipTypeValues *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsa__RelationshipTypeValues, t);
	if (map)
		*a = (enum wsa__RelationshipTypeValues)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 0)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsa__RelationshipTypeValues)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsa__RelationshipTypeValues * SOAP_FMAC4 soap_in_wsa__RelationshipTypeValues(struct soap *soap, const char *tag, enum wsa__RelationshipTypeValues *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsa__RelationshipTypeValues *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsa__RelationshipTypeValues, sizeof(enum wsa__RelationshipTypeValues), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsa__RelationshipTypeValues(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsa__RelationshipTypeValues *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsa__RelationshipTypeValues, 0, sizeof(enum wsa__RelationshipTypeValues), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsa__RelationshipTypeValues(struct soap *soap, const enum wsa__RelationshipTypeValues *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsa__RelationshipTypeValues);
	if (soap_out_wsa__RelationshipTypeValues(soap, tag?tag:"wsa:RelationshipTypeValues", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsa__RelationshipTypeValues * SOAP_FMAC4 soap_get_wsa__RelationshipTypeValues(struct soap *soap, enum wsa__RelationshipTypeValues *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsa__RelationshipTypeValues(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsc__FaultCodeType(struct soap *soap, enum wsc__FaultCodeType *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsc__FaultCodeType
	*a = SOAP_DEFAULT_wsc__FaultCodeType;
#else
	*a = (enum wsc__FaultCodeType)0;
#endif
}

static const struct soap_code_map soap_codes_wsc__FaultCodeType[] =
{	{ (long)wsc__BadContextToken, "wsc:BadContextToken" },
	{ (long)wsc__UnsupportedContextToken, "wsc:UnsupportedContextToken" },
	{ (long)wsc__UnknownDerivationSource, "wsc:UnknownDerivationSource" },
	{ (long)wsc__RenewNeeded, "wsc:RenewNeeded" },
	{ (long)wsc__UnableToRenew, "wsc:UnableToRenew" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsc__FaultCodeType2s(struct soap *soap, enum wsc__FaultCodeType n)
{	const char *s = soap_code_str(soap_codes_wsc__FaultCodeType, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsc__FaultCodeType(struct soap *soap, const char *tag, int id, const enum wsc__FaultCodeType *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsc__FaultCodeType), type) || soap_send(soap, soap_wsc__FaultCodeType2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsc__FaultCodeType(struct soap *soap, const char *s, enum wsc__FaultCodeType *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsc__FaultCodeType, t);
	if (map)
		*a = (enum wsc__FaultCodeType)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 4)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsc__FaultCodeType)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsc__FaultCodeType * SOAP_FMAC4 soap_in_wsc__FaultCodeType(struct soap *soap, const char *tag, enum wsc__FaultCodeType *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsc__FaultCodeType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsc__FaultCodeType, sizeof(enum wsc__FaultCodeType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsc__FaultCodeType(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsc__FaultCodeType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsc__FaultCodeType, 0, sizeof(enum wsc__FaultCodeType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsc__FaultCodeType(struct soap *soap, const enum wsc__FaultCodeType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsc__FaultCodeType);
	if (soap_out_wsc__FaultCodeType(soap, tag?tag:"wsc:FaultCodeType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsc__FaultCodeType * SOAP_FMAC4 soap_get_wsc__FaultCodeType(struct soap *soap, enum wsc__FaultCodeType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsc__FaultCodeType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsse__FaultcodeEnum(struct soap *soap, enum wsse__FaultcodeEnum *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsse__FaultcodeEnum
	*a = SOAP_DEFAULT_wsse__FaultcodeEnum;
#else
	*a = (enum wsse__FaultcodeEnum)0;
#endif
}

static const struct soap_code_map soap_codes_wsse__FaultcodeEnum[] =
{	{ (long)wsse__UnsupportedSecurityToken, "wsse:UnsupportedSecurityToken" },
	{ (long)wsse__UnsupportedAlgorithm, "wsse:UnsupportedAlgorithm" },
	{ (long)wsse__InvalidSecurity, "wsse:InvalidSecurity" },
	{ (long)wsse__InvalidSecurityToken, "wsse:InvalidSecurityToken" },
	{ (long)wsse__FailedAuthentication, "wsse:FailedAuthentication" },
	{ (long)wsse__FailedCheck, "wsse:FailedCheck" },
	{ (long)wsse__SecurityTokenUnavailable, "wsse:SecurityTokenUnavailable" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsse__FaultcodeEnum2s(struct soap *soap, enum wsse__FaultcodeEnum n)
{	const char *s = soap_code_str(soap_codes_wsse__FaultcodeEnum, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsse__FaultcodeEnum(struct soap *soap, const char *tag, int id, const enum wsse__FaultcodeEnum *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsse__FaultcodeEnum), type) || soap_send(soap, soap_wsse__FaultcodeEnum2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsse__FaultcodeEnum(struct soap *soap, const char *s, enum wsse__FaultcodeEnum *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsse__FaultcodeEnum, t);
	if (map)
		*a = (enum wsse__FaultcodeEnum)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 6)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsse__FaultcodeEnum)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsse__FaultcodeEnum * SOAP_FMAC4 soap_in_wsse__FaultcodeEnum(struct soap *soap, const char *tag, enum wsse__FaultcodeEnum *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsse__FaultcodeEnum *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsse__FaultcodeEnum, sizeof(enum wsse__FaultcodeEnum), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsse__FaultcodeEnum(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsse__FaultcodeEnum *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsse__FaultcodeEnum, 0, sizeof(enum wsse__FaultcodeEnum), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsse__FaultcodeEnum(struct soap *soap, const enum wsse__FaultcodeEnum *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsse__FaultcodeEnum);
	if (soap_out_wsse__FaultcodeEnum(soap, tag?tag:"wsse:FaultcodeEnum", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsse__FaultcodeEnum * SOAP_FMAC4 soap_get_wsse__FaultcodeEnum(struct soap *soap, enum wsse__FaultcodeEnum *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsse__FaultcodeEnum(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsu__tTimestampFault(struct soap *soap, enum wsu__tTimestampFault *a)
{
	(void)soap; /* appease -Wall -Werror */
#ifdef SOAP_DEFAULT_wsu__tTimestampFault
	*a = SOAP_DEFAULT_wsu__tTimestampFault;
#else
	*a = (enum wsu__tTimestampFault)0;
#endif
}

static const struct soap_code_map soap_codes_wsu__tTimestampFault[] =
{	{ (long)wsu__MessageExpired, "wsu:MessageExpired" },
	{ 0, NULL }
};

SOAP_FMAC3S const char* SOAP_FMAC4S soap_wsu__tTimestampFault2s(struct soap *soap, enum wsu__tTimestampFault n)
{	const char *s = soap_code_str(soap_codes_wsu__tTimestampFault, (long)n);
	if (s)
		return s;
	return soap_long2s(soap, (long)n);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsu__tTimestampFault(struct soap *soap, const char *tag, int id, const enum wsu__tTimestampFault *a, const char *type)
{	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsu__tTimestampFault), type) || soap_send(soap, soap_wsu__tTimestampFault2s(soap, *a)))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3S int SOAP_FMAC4S soap_s2wsu__tTimestampFault(struct soap *soap, const char *s, enum wsu__tTimestampFault *a)
{
	const struct soap_code_map *map;
	char *t;
	if (!s)
		return soap->error;
	soap_s2QName(soap, s, &t, 0, -1);
	map = soap_code(soap_codes_wsu__tTimestampFault, t);
	if (map)
		*a = (enum wsu__tTimestampFault)map->code;
	else
	{	long n;
		if (soap_s2long(soap, s, &n) || ((soap->mode & SOAP_XML_STRICT) && (n < 0 || n > 0)))
			return soap->error = SOAP_TYPE;
		*a = (enum wsu__tTimestampFault)n;
	}
	return SOAP_OK;
}

SOAP_FMAC3 enum wsu__tTimestampFault * SOAP_FMAC4 soap_in_wsu__tTimestampFault(struct soap *soap, const char *tag, enum wsu__tTimestampFault *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (enum wsu__tTimestampFault *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsu__tTimestampFault, sizeof(enum wsu__tTimestampFault), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	if (soap->body && !*soap->href)
	{	if (!a || soap_s2wsu__tTimestampFault(soap, soap_value(soap), a) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (enum wsu__tTimestampFault *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsu__tTimestampFault, 0, sizeof(enum wsu__tTimestampFault), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsu__tTimestampFault(struct soap *soap, const enum wsu__tTimestampFault *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsu__tTimestampFault);
	if (soap_out_wsu__tTimestampFault(soap, tag?tag:"wsu:tTimestampFault", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 enum wsu__tTimestampFault * SOAP_FMAC4 soap_get_wsu__tTimestampFault(struct soap *soap, enum wsu__tTimestampFault *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsu__tTimestampFault(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

void _wstop__TopicNamespaceType_Topic::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_wstop__TopicNamespaceType_Topic::documentation = NULL;
	this->_wstop__TopicNamespaceType_Topic::__anyAttribute = NULL;
	this->_wstop__TopicNamespaceType_Topic::MessagePattern = NULL;
	this->_wstop__TopicNamespaceType_Topic::__sizeTopic = 0;
	this->_wstop__TopicNamespaceType_Topic::Topic = NULL;
	this->_wstop__TopicNamespaceType_Topic::__size = 0;
	this->_wstop__TopicNamespaceType_Topic::__any = NULL;
	soap_default_xsd__NCName(soap, &this->_wstop__TopicNamespaceType_Topic::name);
	this->_wstop__TopicNamespaceType_Topic::messageTypes = NULL;
	this->_wstop__TopicNamespaceType_Topic::final = (bool)0;
	soap_default_wstop__ConcreteTopicExpression(soap, &this->_wstop__TopicNamespaceType_Topic::parent);
}

void _wstop__TopicNamespaceType_Topic::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowstop__Documentation(soap, &this->_wstop__TopicNamespaceType_Topic::documentation);
	soap_serialize_PointerTowstop__QueryExpressionType(soap, &this->_wstop__TopicNamespaceType_Topic::MessagePattern);
	if (this->_wstop__TopicNamespaceType_Topic::Topic)
	{	int i;
		for (i = 0; i < this->_wstop__TopicNamespaceType_Topic::__sizeTopic; i++)
		{
			soap_serialize_PointerTowstop__TopicType(soap, this->_wstop__TopicNamespaceType_Topic::Topic + i);
		}
	}
#endif
}

int _wstop__TopicNamespaceType_Topic::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wstop__TopicNamespaceType_Topic(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wstop__TopicNamespaceType_Topic(struct soap *soap, const char *tag, int id, const _wstop__TopicNamespaceType_Topic *a, const char *type)
{
	if (((_wstop__TopicNamespaceType_Topic*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wstop__TopicNamespaceType_Topic*)a)->__anyAttribute, 1);
	if (((_wstop__TopicNamespaceType_Topic*)a)->name)
		soap_set_attr(soap, "name", ((_wstop__TopicNamespaceType_Topic*)a)->name, 1);
	if (((_wstop__TopicNamespaceType_Topic*)a)->messageTypes)
		if (*((_wstop__TopicNamespaceType_Topic*)a)->messageTypes)
			soap_set_attr(soap, "messageTypes", soap_QName2s(soap, *((_wstop__TopicNamespaceType_Topic*)a)->messageTypes), 1);
	soap_set_attr(soap, "final", soap_bool2s(soap, ((_wstop__TopicNamespaceType_Topic*)a)->final), 1);
	if (((_wstop__TopicNamespaceType_Topic*)a)->parent)
		soap_set_attr(soap, "parent", ((_wstop__TopicNamespaceType_Topic*)a)->parent, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wstop__TopicNamespaceType_Topic), type))
		return soap->error;
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &(a->_wstop__TopicNamespaceType_Topic::documentation), ""))
		return soap->error;
	if (soap_out_PointerTowstop__QueryExpressionType(soap, "wstop:MessagePattern", -1, &(a->_wstop__TopicNamespaceType_Topic::MessagePattern), ""))
		return soap->error;
	if (a->_wstop__TopicNamespaceType_Topic::Topic)
	{	int i;
		for (i = 0; i < a->_wstop__TopicNamespaceType_Topic::__sizeTopic; i++)
			if (soap_out_PointerTowstop__TopicType(soap, "wstop:Topic", -1, a->_wstop__TopicNamespaceType_Topic::Topic + i, ""))
				return soap->error;
	}
	if (a->_wstop__TopicNamespaceType_Topic::__any)
	{	int i;
		for (i = 0; i < a->_wstop__TopicNamespaceType_Topic::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wstop__TopicNamespaceType_Topic::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_wstop__TopicNamespaceType_Topic::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wstop__TopicNamespaceType_Topic(soap, tag, this, type);
}

SOAP_FMAC3 _wstop__TopicNamespaceType_Topic * SOAP_FMAC4 soap_in__wstop__TopicNamespaceType_Topic(struct soap *soap, const char *tag, _wstop__TopicNamespaceType_Topic *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wstop__TopicNamespaceType_Topic *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wstop__TopicNamespaceType_Topic, sizeof(_wstop__TopicNamespaceType_Topic), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wstop__TopicNamespaceType_Topic)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wstop__TopicNamespaceType_Topic *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wstop__TopicNamespaceType_Topic*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "name", 1), &((_wstop__TopicNamespaceType_Topic*)a)->name, 0, -1))
		return NULL;
	{	const char *t = soap_attr_value(soap, "messageTypes", 0);
		if (t)
		{
			if (!(((_wstop__TopicNamespaceType_Topic*)a)->messageTypes = (char **)soap_malloc(soap, sizeof(char *))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2QName(soap, t, ((_wstop__TopicNamespaceType_Topic*)a)->messageTypes, 0, -1))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2bool(soap, soap_attr_value(soap, "final", 0), &((_wstop__TopicNamespaceType_Topic*)a)->final))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "parent", 0), &((_wstop__TopicNamespaceType_Topic*)a)->parent, 0, -1))
		return NULL;
	size_t soap_flag_documentation1 = 1;
	size_t soap_flag_MessagePattern1 = 1;
	struct soap_blist *soap_blist_Topic1 = NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_documentation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &(a->_wstop__TopicNamespaceType_Topic::documentation), "wstop:Documentation"))
				{	soap_flag_documentation1--;
					continue;
				}
			if (soap_flag_MessagePattern1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__QueryExpressionType(soap, "wstop:MessagePattern", &(a->_wstop__TopicNamespaceType_Topic::MessagePattern), "wstop:QueryExpressionType"))
				{	soap_flag_MessagePattern1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wstop:Topic", 1, NULL))
			{	if (a->_wstop__TopicNamespaceType_Topic::Topic == NULL)
				{	if (soap_blist_Topic1 == NULL)
						soap_blist_Topic1 = soap_new_block(soap);
					a->_wstop__TopicNamespaceType_Topic::Topic = (wstop__TopicType **)soap_push_block(soap, soap_blist_Topic1, sizeof(wstop__TopicType *));
					if (a->_wstop__TopicNamespaceType_Topic::Topic == NULL)
						return NULL;
					*a->_wstop__TopicNamespaceType_Topic::Topic = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTowstop__TopicType(soap, "wstop:Topic", a->_wstop__TopicNamespaceType_Topic::Topic, "wstop:TopicType"))
				{	a->_wstop__TopicNamespaceType_Topic::__sizeTopic++;
					a->_wstop__TopicNamespaceType_Topic::Topic = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wstop__TopicNamespaceType_Topic::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wstop__TopicNamespaceType_Topic::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wstop__TopicNamespaceType_Topic::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wstop__TopicNamespaceType_Topic::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wstop__TopicNamespaceType_Topic::__any, "xsd:byte"))
				{	a->_wstop__TopicNamespaceType_Topic::__size++;
					a->_wstop__TopicNamespaceType_Topic::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_wstop__TopicNamespaceType_Topic::Topic)
			soap_pop_block(soap, soap_blist_Topic1);
		if (a->_wstop__TopicNamespaceType_Topic::__sizeTopic)
			a->_wstop__TopicNamespaceType_Topic::Topic = (wstop__TopicType **)soap_save_block(soap, soap_blist_Topic1, NULL, 1);
		else
		{	a->_wstop__TopicNamespaceType_Topic::Topic = NULL;
			if (soap_blist_Topic1)
				soap_end_block(soap, soap_blist_Topic1);
		}
		if (a->_wstop__TopicNamespaceType_Topic::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wstop__TopicNamespaceType_Topic::__size)
			a->_wstop__TopicNamespaceType_Topic::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wstop__TopicNamespaceType_Topic::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wstop__TopicNamespaceType_Topic *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wstop__TopicNamespaceType_Topic, 0, sizeof(_wstop__TopicNamespaceType_Topic), 0, soap_copy__wstop__TopicNamespaceType_Topic);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wstop__TopicNamespaceType_Topic::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wstop__TopicNamespaceType_Topic);
	if (this->soap_out(soap, tag?tag:"wstop:TopicNamespaceType-Topic", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wstop__TopicNamespaceType_Topic::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wstop__TopicNamespaceType_Topic(soap, this, tag, type);
}

SOAP_FMAC3 _wstop__TopicNamespaceType_Topic * SOAP_FMAC4 soap_get__wstop__TopicNamespaceType_Topic(struct soap *soap, _wstop__TopicNamespaceType_Topic *p, const char *tag, const char *type)
{
	if ((p = soap_in__wstop__TopicNamespaceType_Topic(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wstop__TopicNamespaceType_Topic * SOAP_FMAC2 soap_instantiate__wstop__TopicNamespaceType_Topic(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wstop__TopicNamespaceType_Topic(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wstop__TopicNamespaceType_Topic, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wstop__TopicNamespaceType_Topic);
		if (size)
			*size = sizeof(_wstop__TopicNamespaceType_Topic);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wstop__TopicNamespaceType_Topic, n);
		if (size)
			*size = n * sizeof(_wstop__TopicNamespaceType_Topic);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wstop__TopicNamespaceType_Topic*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wstop__TopicNamespaceType_Topic(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wstop__TopicNamespaceType_Topic %p -> %p\n", q, p));
	*(_wstop__TopicNamespaceType_Topic*)p = *(_wstop__TopicNamespaceType_Topic*)q;
}

void __tptz__SetConfigurationResponse_sequence::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
}

void __tptz__SetConfigurationResponse_sequence::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int __tptz__SetConfigurationResponse_sequence::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out___tptz__SetConfigurationResponse_sequence(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tptz__SetConfigurationResponse_sequence(struct soap *soap, const char *tag, int id, const __tptz__SetConfigurationResponse_sequence *a, const char *type)
{
	return SOAP_OK;
}

void *__tptz__SetConfigurationResponse_sequence::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in___tptz__SetConfigurationResponse_sequence(soap, tag, this, type);
}

SOAP_FMAC3 __tptz__SetConfigurationResponse_sequence * SOAP_FMAC4 soap_in___tptz__SetConfigurationResponse_sequence(struct soap *soap, const char *tag, __tptz__SetConfigurationResponse_sequence *a, const char *type)
{
	a = (__tptz__SetConfigurationResponse_sequence *)soap_class_id_enter(soap, "", a, SOAP_TYPE___tptz__SetConfigurationResponse_sequence, sizeof(__tptz__SetConfigurationResponse_sequence), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
	}
	soap->error = SOAP_TAG_MISMATCH;
	a = NULL;
	return a;
}

int __tptz__SetConfigurationResponse_sequence::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = 0;
	if (this->soap_out(soap, tag?tag:"-tptz:SetConfigurationResponse-sequence", id, type))
		return soap->error;
	return SOAP_OK;
}

void *__tptz__SetConfigurationResponse_sequence::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get___tptz__SetConfigurationResponse_sequence(soap, this, tag, type);
}

SOAP_FMAC3 __tptz__SetConfigurationResponse_sequence * SOAP_FMAC4 soap_get___tptz__SetConfigurationResponse_sequence(struct soap *soap, __tptz__SetConfigurationResponse_sequence *p, const char *tag, const char *type)
{
	if ((p = soap_in___tptz__SetConfigurationResponse_sequence(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 __tptz__SetConfigurationResponse_sequence * SOAP_FMAC2 soap_instantiate___tptz__SetConfigurationResponse_sequence(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___tptz__SetConfigurationResponse_sequence(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___tptz__SetConfigurationResponse_sequence, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(__tptz__SetConfigurationResponse_sequence);
		if (size)
			*size = sizeof(__tptz__SetConfigurationResponse_sequence);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(__tptz__SetConfigurationResponse_sequence, n);
		if (size)
			*size = n * sizeof(__tptz__SetConfigurationResponse_sequence);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (__tptz__SetConfigurationResponse_sequence*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___tptz__SetConfigurationResponse_sequence(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying __tptz__SetConfigurationResponse_sequence %p -> %p\n", q, p));
	*(__tptz__SetConfigurationResponse_sequence*)p = *(__tptz__SetConfigurationResponse_sequence*)q;
}

void _wsrfbf__BaseFaultType_FaultCause::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_wsrfbf__BaseFaultType_FaultCause::__any = NULL;
}

void _wsrfbf__BaseFaultType_FaultCause::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _wsrfbf__BaseFaultType_FaultCause::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsrfbf__BaseFaultType_FaultCause(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const char *tag, int id, const _wsrfbf__BaseFaultType_FaultCause *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause), type))
		return soap->error;
	soap_outliteral(soap, "-any", &(a->_wsrfbf__BaseFaultType_FaultCause::__any), NULL);
	return soap_element_end_out(soap, tag);
}

void *_wsrfbf__BaseFaultType_FaultCause::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsrfbf__BaseFaultType_FaultCause(soap, tag, this, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_FaultCause * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const char *tag, _wsrfbf__BaseFaultType_FaultCause *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsrfbf__BaseFaultType_FaultCause *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause, sizeof(_wsrfbf__BaseFaultType_FaultCause), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsrfbf__BaseFaultType_FaultCause *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___any1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->_wsrfbf__BaseFaultType_FaultCause::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsrfbf__BaseFaultType_FaultCause *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause, 0, sizeof(_wsrfbf__BaseFaultType_FaultCause), 0, soap_copy__wsrfbf__BaseFaultType_FaultCause);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsrfbf__BaseFaultType_FaultCause::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause);
	if (this->soap_out(soap, tag?tag:"wsrfbf:BaseFaultType-FaultCause", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsrfbf__BaseFaultType_FaultCause::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsrfbf__BaseFaultType_FaultCause(soap, this, tag, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_FaultCause * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, _wsrfbf__BaseFaultType_FaultCause *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_FaultCause(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsrfbf__BaseFaultType_FaultCause * SOAP_FMAC2 soap_instantiate__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsrfbf__BaseFaultType_FaultCause(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsrfbf__BaseFaultType_FaultCause);
		if (size)
			*size = sizeof(_wsrfbf__BaseFaultType_FaultCause);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsrfbf__BaseFaultType_FaultCause, n);
		if (size)
			*size = n * sizeof(_wsrfbf__BaseFaultType_FaultCause);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsrfbf__BaseFaultType_FaultCause*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsrfbf__BaseFaultType_FaultCause %p -> %p\n", q, p));
	*(_wsrfbf__BaseFaultType_FaultCause*)p = *(_wsrfbf__BaseFaultType_FaultCause*)q;
}

void _wsrfbf__BaseFaultType_Description::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_string(soap, &this->_wsrfbf__BaseFaultType_Description::__item);
	soap_default__xml__lang(soap, &this->_wsrfbf__BaseFaultType_Description::xml__lang);
}

void _wsrfbf__BaseFaultType_Description::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->_wsrfbf__BaseFaultType_Description::__item);
#endif
}

int _wsrfbf__BaseFaultType_Description::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsrfbf__BaseFaultType_Description(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_Description(struct soap *soap, const char *tag, int id, const _wsrfbf__BaseFaultType_Description *a, const char *type)
{
	if (((_wsrfbf__BaseFaultType_Description*)a)->xml__lang)
		soap_set_attr(soap, "xml:lang", ((_wsrfbf__BaseFaultType_Description*)a)->xml__lang, 1);
	return soap_out_string(soap, tag, id, &a->_wsrfbf__BaseFaultType_Description::__item, "");
}

void *_wsrfbf__BaseFaultType_Description::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsrfbf__BaseFaultType_Description(soap, tag, this, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_Description * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_Description(struct soap *soap, const char *tag, _wsrfbf__BaseFaultType_Description *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (_wsrfbf__BaseFaultType_Description *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_Description, sizeof(_wsrfbf__BaseFaultType_Description), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsrfbf__BaseFaultType_Description)
			return (_wsrfbf__BaseFaultType_Description *)a->soap_in(soap, tag, type);
	}
	if (soap_s2string(soap, soap_attr_value(soap, "xml:lang", 0), &((_wsrfbf__BaseFaultType_Description*)a)->xml__lang, 0, -1))
		return NULL;
	if (!soap_in_string(soap, tag, &(a->_wsrfbf__BaseFaultType_Description::__item), ""))
		return NULL;
	return a;
}

int _wsrfbf__BaseFaultType_Description::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_Description);
	if (this->soap_out(soap, tag?tag:"wsrfbf:BaseFaultType-Description", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsrfbf__BaseFaultType_Description::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsrfbf__BaseFaultType_Description(soap, this, tag, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_Description * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_Description(struct soap *soap, _wsrfbf__BaseFaultType_Description *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_Description(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsrfbf__BaseFaultType_Description * SOAP_FMAC2 soap_instantiate__wsrfbf__BaseFaultType_Description(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsrfbf__BaseFaultType_Description(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsrfbf__BaseFaultType_Description, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsrfbf__BaseFaultType_Description);
		if (size)
			*size = sizeof(_wsrfbf__BaseFaultType_Description);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsrfbf__BaseFaultType_Description, n);
		if (size)
			*size = n * sizeof(_wsrfbf__BaseFaultType_Description);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsrfbf__BaseFaultType_Description*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsrfbf__BaseFaultType_Description(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsrfbf__BaseFaultType_Description %p -> %p\n", q, p));
	*(_wsrfbf__BaseFaultType_Description*)p = *(_wsrfbf__BaseFaultType_Description*)q;
}

void _wsrfbf__BaseFaultType_ErrorCode::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &this->_wsrfbf__BaseFaultType_ErrorCode::dialect);
}

void _wsrfbf__BaseFaultType_ErrorCode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _wsrfbf__BaseFaultType_ErrorCode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsrfbf__BaseFaultType_ErrorCode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const char *tag, int id, const _wsrfbf__BaseFaultType_ErrorCode *a, const char *type)
{
	if (((_wsrfbf__BaseFaultType_ErrorCode*)a)->dialect)
		soap_set_attr(soap, "dialect", ((_wsrfbf__BaseFaultType_ErrorCode*)a)->dialect, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_wsrfbf__BaseFaultType_ErrorCode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsrfbf__BaseFaultType_ErrorCode(soap, tag, this, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_ErrorCode * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const char *tag, _wsrfbf__BaseFaultType_ErrorCode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsrfbf__BaseFaultType_ErrorCode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode, sizeof(_wsrfbf__BaseFaultType_ErrorCode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsrfbf__BaseFaultType_ErrorCode *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "dialect", 1), &((_wsrfbf__BaseFaultType_ErrorCode*)a)->dialect, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsrfbf__BaseFaultType_ErrorCode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode, 0, sizeof(_wsrfbf__BaseFaultType_ErrorCode), 0, soap_copy__wsrfbf__BaseFaultType_ErrorCode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsrfbf__BaseFaultType_ErrorCode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode);
	if (this->soap_out(soap, tag?tag:"wsrfbf:BaseFaultType-ErrorCode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsrfbf__BaseFaultType_ErrorCode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsrfbf__BaseFaultType_ErrorCode(soap, this, tag, type);
}

SOAP_FMAC3 _wsrfbf__BaseFaultType_ErrorCode * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, _wsrfbf__BaseFaultType_ErrorCode *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_ErrorCode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsrfbf__BaseFaultType_ErrorCode * SOAP_FMAC2 soap_instantiate__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsrfbf__BaseFaultType_ErrorCode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsrfbf__BaseFaultType_ErrorCode);
		if (size)
			*size = sizeof(_wsrfbf__BaseFaultType_ErrorCode);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsrfbf__BaseFaultType_ErrorCode, n);
		if (size)
			*size = n * sizeof(_wsrfbf__BaseFaultType_ErrorCode);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsrfbf__BaseFaultType_ErrorCode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsrfbf__BaseFaultType_ErrorCode %p -> %p\n", q, p));
	*(_wsrfbf__BaseFaultType_ErrorCode*)p = *(_wsrfbf__BaseFaultType_ErrorCode*)q;
}

void _wsnt__Subscribe_SubscriptionPolicy::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_wsnt__Subscribe_SubscriptionPolicy::__size = 0;
	this->_wsnt__Subscribe_SubscriptionPolicy::__any = NULL;
}

void _wsnt__Subscribe_SubscriptionPolicy::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _wsnt__Subscribe_SubscriptionPolicy::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__Subscribe_SubscriptionPolicy(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const char *tag, int id, const _wsnt__Subscribe_SubscriptionPolicy *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy), type))
		return soap->error;
	if (a->_wsnt__Subscribe_SubscriptionPolicy::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__Subscribe_SubscriptionPolicy::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__Subscribe_SubscriptionPolicy::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_wsnt__Subscribe_SubscriptionPolicy::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__Subscribe_SubscriptionPolicy(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__Subscribe_SubscriptionPolicy * SOAP_FMAC4 soap_in__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const char *tag, _wsnt__Subscribe_SubscriptionPolicy *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__Subscribe_SubscriptionPolicy *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy, sizeof(_wsnt__Subscribe_SubscriptionPolicy), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__Subscribe_SubscriptionPolicy *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__Subscribe_SubscriptionPolicy::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__Subscribe_SubscriptionPolicy::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__Subscribe_SubscriptionPolicy::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__Subscribe_SubscriptionPolicy::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__Subscribe_SubscriptionPolicy::__any, "xsd:byte"))
				{	a->_wsnt__Subscribe_SubscriptionPolicy::__size++;
					a->_wsnt__Subscribe_SubscriptionPolicy::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_wsnt__Subscribe_SubscriptionPolicy::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__Subscribe_SubscriptionPolicy::__size)
			a->_wsnt__Subscribe_SubscriptionPolicy::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__Subscribe_SubscriptionPolicy::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__Subscribe_SubscriptionPolicy *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy, 0, sizeof(_wsnt__Subscribe_SubscriptionPolicy), 0, soap_copy__wsnt__Subscribe_SubscriptionPolicy);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__Subscribe_SubscriptionPolicy::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy);
	if (this->soap_out(soap, tag?tag:"wsnt:Subscribe-SubscriptionPolicy", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__Subscribe_SubscriptionPolicy::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__Subscribe_SubscriptionPolicy(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__Subscribe_SubscriptionPolicy * SOAP_FMAC4 soap_get__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, _wsnt__Subscribe_SubscriptionPolicy *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Subscribe_SubscriptionPolicy(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__Subscribe_SubscriptionPolicy * SOAP_FMAC2 soap_instantiate__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__Subscribe_SubscriptionPolicy(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__Subscribe_SubscriptionPolicy);
		if (size)
			*size = sizeof(_wsnt__Subscribe_SubscriptionPolicy);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__Subscribe_SubscriptionPolicy, n);
		if (size)
			*size = n * sizeof(_wsnt__Subscribe_SubscriptionPolicy);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__Subscribe_SubscriptionPolicy*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__Subscribe_SubscriptionPolicy %p -> %p\n", q, p));
	*(_wsnt__Subscribe_SubscriptionPolicy*)p = *(_wsnt__Subscribe_SubscriptionPolicy*)q;
}

void _wsnt__NotificationMessageHolderType_Message::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_wsnt__NotificationMessageHolderType_Message::__any = NULL;
}

void _wsnt__NotificationMessageHolderType_Message::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _wsnt__NotificationMessageHolderType_Message::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__NotificationMessageHolderType_Message(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const char *tag, int id, const _wsnt__NotificationMessageHolderType_Message *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message), type))
		return soap->error;
	soap_outliteral(soap, "-any", &(a->_wsnt__NotificationMessageHolderType_Message::__any), NULL);
	return soap_element_end_out(soap, tag);
}

void *_wsnt__NotificationMessageHolderType_Message::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__NotificationMessageHolderType_Message(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__NotificationMessageHolderType_Message * SOAP_FMAC4 soap_in__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const char *tag, _wsnt__NotificationMessageHolderType_Message *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__NotificationMessageHolderType_Message *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message, sizeof(_wsnt__NotificationMessageHolderType_Message), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__NotificationMessageHolderType_Message)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__NotificationMessageHolderType_Message *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___any1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->_wsnt__NotificationMessageHolderType_Message::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__NotificationMessageHolderType_Message *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message, 0, sizeof(_wsnt__NotificationMessageHolderType_Message), 0, soap_copy__wsnt__NotificationMessageHolderType_Message);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__NotificationMessageHolderType_Message::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message);
	if (this->soap_out(soap, tag?tag:"wsnt:NotificationMessageHolderType-Message", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__NotificationMessageHolderType_Message::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__NotificationMessageHolderType_Message(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__NotificationMessageHolderType_Message * SOAP_FMAC4 soap_get__wsnt__NotificationMessageHolderType_Message(struct soap *soap, _wsnt__NotificationMessageHolderType_Message *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__NotificationMessageHolderType_Message(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__NotificationMessageHolderType_Message * SOAP_FMAC2 soap_instantiate__wsnt__NotificationMessageHolderType_Message(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__NotificationMessageHolderType_Message(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__NotificationMessageHolderType_Message);
		if (size)
			*size = sizeof(_wsnt__NotificationMessageHolderType_Message);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__NotificationMessageHolderType_Message, n);
		if (size)
			*size = n * sizeof(_wsnt__NotificationMessageHolderType_Message);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__NotificationMessageHolderType_Message*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__NotificationMessageHolderType_Message(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__NotificationMessageHolderType_Message %p -> %p\n", q, p));
	*(_wsnt__NotificationMessageHolderType_Message*)p = *(_wsnt__NotificationMessageHolderType_Message*)q;
}

void __tt__union_EventStream::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->__tt__union_EventStream::__union_EventStream = 0;
}

void __tt__union_EventStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__tt__union_EventStream(soap, this->__tt__union_EventStream::__union_EventStream, &this->__tt__union_EventStream::union_EventStream);
#endif
}

int __tt__union_EventStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out___tt__union_EventStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_EventStream(struct soap *soap, const char *tag, int id, const __tt__union_EventStream *a, const char *type)
{
	if (soap_out__tt__union_EventStream(soap, a->__tt__union_EventStream::__union_EventStream, &a->__tt__union_EventStream::union_EventStream))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_EventStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in___tt__union_EventStream(soap, tag, this, type);
}

SOAP_FMAC3 __tt__union_EventStream * SOAP_FMAC4 soap_in___tt__union_EventStream(struct soap *soap, const char *tag, __tt__union_EventStream *a, const char *type)
{
	a = (__tt__union_EventStream *)soap_class_id_enter(soap, "", a, SOAP_TYPE___tt__union_EventStream, sizeof(__tt__union_EventStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	a->soap_default(soap);
		if (!soap_in__tt__union_EventStream(soap, &a->__union_EventStream, &a->union_EventStream))
			return NULL;
	return a;
}

int __tt__union_EventStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = 0;
	if (this->soap_out(soap, tag?tag:"-tt:union-EventStream", id, type))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_EventStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get___tt__union_EventStream(soap, this, tag, type);
}

SOAP_FMAC3 __tt__union_EventStream * SOAP_FMAC4 soap_get___tt__union_EventStream(struct soap *soap, __tt__union_EventStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_EventStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 __tt__union_EventStream * SOAP_FMAC2 soap_instantiate___tt__union_EventStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___tt__union_EventStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___tt__union_EventStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(__tt__union_EventStream);
		if (size)
			*size = sizeof(__tt__union_EventStream);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(__tt__union_EventStream, n);
		if (size)
			*size = n * sizeof(__tt__union_EventStream);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (__tt__union_EventStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___tt__union_EventStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying __tt__union_EventStream %p -> %p\n", q, p));
	*(__tt__union_EventStream*)p = *(__tt__union_EventStream*)q;
}

void __tt__union_PTZStream::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->__tt__union_PTZStream::__union_PTZStream = 0;
}

void __tt__union_PTZStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__tt__union_PTZStream(soap, this->__tt__union_PTZStream::__union_PTZStream, &this->__tt__union_PTZStream::union_PTZStream);
#endif
}

int __tt__union_PTZStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out___tt__union_PTZStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_PTZStream(struct soap *soap, const char *tag, int id, const __tt__union_PTZStream *a, const char *type)
{
	if (soap_out__tt__union_PTZStream(soap, a->__tt__union_PTZStream::__union_PTZStream, &a->__tt__union_PTZStream::union_PTZStream))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_PTZStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in___tt__union_PTZStream(soap, tag, this, type);
}

SOAP_FMAC3 __tt__union_PTZStream * SOAP_FMAC4 soap_in___tt__union_PTZStream(struct soap *soap, const char *tag, __tt__union_PTZStream *a, const char *type)
{
	a = (__tt__union_PTZStream *)soap_class_id_enter(soap, "", a, SOAP_TYPE___tt__union_PTZStream, sizeof(__tt__union_PTZStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	a->soap_default(soap);
		if (!soap_in__tt__union_PTZStream(soap, &a->__union_PTZStream, &a->union_PTZStream))
			return NULL;
	return a;
}

int __tt__union_PTZStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = 0;
	if (this->soap_out(soap, tag?tag:"-tt:union-PTZStream", id, type))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_PTZStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get___tt__union_PTZStream(soap, this, tag, type);
}

SOAP_FMAC3 __tt__union_PTZStream * SOAP_FMAC4 soap_get___tt__union_PTZStream(struct soap *soap, __tt__union_PTZStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_PTZStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 __tt__union_PTZStream * SOAP_FMAC2 soap_instantiate___tt__union_PTZStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___tt__union_PTZStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___tt__union_PTZStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(__tt__union_PTZStream);
		if (size)
			*size = sizeof(__tt__union_PTZStream);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(__tt__union_PTZStream, n);
		if (size)
			*size = n * sizeof(__tt__union_PTZStream);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (__tt__union_PTZStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___tt__union_PTZStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying __tt__union_PTZStream %p -> %p\n", q, p));
	*(__tt__union_PTZStream*)p = *(__tt__union_PTZStream*)q;
}

void __tt__union_VideoAnalyticsStream::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->__tt__union_VideoAnalyticsStream::__union_VideoAnalyticsStream = 0;
}

void __tt__union_VideoAnalyticsStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__tt__union_VideoAnalyticsStream(soap, this->__tt__union_VideoAnalyticsStream::__union_VideoAnalyticsStream, &this->__tt__union_VideoAnalyticsStream::union_VideoAnalyticsStream);
#endif
}

int __tt__union_VideoAnalyticsStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out___tt__union_VideoAnalyticsStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_VideoAnalyticsStream(struct soap *soap, const char *tag, int id, const __tt__union_VideoAnalyticsStream *a, const char *type)
{
	if (soap_out__tt__union_VideoAnalyticsStream(soap, a->__tt__union_VideoAnalyticsStream::__union_VideoAnalyticsStream, &a->__tt__union_VideoAnalyticsStream::union_VideoAnalyticsStream))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_VideoAnalyticsStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in___tt__union_VideoAnalyticsStream(soap, tag, this, type);
}

SOAP_FMAC3 __tt__union_VideoAnalyticsStream * SOAP_FMAC4 soap_in___tt__union_VideoAnalyticsStream(struct soap *soap, const char *tag, __tt__union_VideoAnalyticsStream *a, const char *type)
{
	a = (__tt__union_VideoAnalyticsStream *)soap_class_id_enter(soap, "", a, SOAP_TYPE___tt__union_VideoAnalyticsStream, sizeof(__tt__union_VideoAnalyticsStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	a->soap_default(soap);
		if (!soap_in__tt__union_VideoAnalyticsStream(soap, &a->__union_VideoAnalyticsStream, &a->union_VideoAnalyticsStream))
			return NULL;
	return a;
}

int __tt__union_VideoAnalyticsStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = 0;
	if (this->soap_out(soap, tag?tag:"-tt:union-VideoAnalyticsStream", id, type))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_VideoAnalyticsStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get___tt__union_VideoAnalyticsStream(soap, this, tag, type);
}

SOAP_FMAC3 __tt__union_VideoAnalyticsStream * SOAP_FMAC4 soap_get___tt__union_VideoAnalyticsStream(struct soap *soap, __tt__union_VideoAnalyticsStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_VideoAnalyticsStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 __tt__union_VideoAnalyticsStream * SOAP_FMAC2 soap_instantiate___tt__union_VideoAnalyticsStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___tt__union_VideoAnalyticsStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___tt__union_VideoAnalyticsStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(__tt__union_VideoAnalyticsStream);
		if (size)
			*size = sizeof(__tt__union_VideoAnalyticsStream);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(__tt__union_VideoAnalyticsStream, n);
		if (size)
			*size = n * sizeof(__tt__union_VideoAnalyticsStream);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (__tt__union_VideoAnalyticsStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___tt__union_VideoAnalyticsStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying __tt__union_VideoAnalyticsStream %p -> %p\n", q, p));
	*(__tt__union_VideoAnalyticsStream*)p = *(__tt__union_VideoAnalyticsStream*)q;
}

void __tt__union_MetadataStream::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->__tt__union_MetadataStream::__union_MetadataStream = 0;
}

void __tt__union_MetadataStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__tt__union_MetadataStream(soap, this->__tt__union_MetadataStream::__union_MetadataStream, &this->__tt__union_MetadataStream::union_MetadataStream);
#endif
}

int __tt__union_MetadataStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out___tt__union_MetadataStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_MetadataStream(struct soap *soap, const char *tag, int id, const __tt__union_MetadataStream *a, const char *type)
{
	if (soap_out__tt__union_MetadataStream(soap, a->__tt__union_MetadataStream::__union_MetadataStream, &a->__tt__union_MetadataStream::union_MetadataStream))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_MetadataStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in___tt__union_MetadataStream(soap, tag, this, type);
}

SOAP_FMAC3 __tt__union_MetadataStream * SOAP_FMAC4 soap_in___tt__union_MetadataStream(struct soap *soap, const char *tag, __tt__union_MetadataStream *a, const char *type)
{
	a = (__tt__union_MetadataStream *)soap_class_id_enter(soap, "", a, SOAP_TYPE___tt__union_MetadataStream, sizeof(__tt__union_MetadataStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	a->soap_default(soap);
		if (!soap_in__tt__union_MetadataStream(soap, &a->__union_MetadataStream, &a->union_MetadataStream))
			return NULL;
	return a;
}

int __tt__union_MetadataStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = 0;
	if (this->soap_out(soap, tag?tag:"-tt:union-MetadataStream", id, type))
		return soap->error;
	return SOAP_OK;
}

void *__tt__union_MetadataStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get___tt__union_MetadataStream(soap, this, tag, type);
}

SOAP_FMAC3 __tt__union_MetadataStream * SOAP_FMAC4 soap_get___tt__union_MetadataStream(struct soap *soap, __tt__union_MetadataStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_MetadataStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 __tt__union_MetadataStream * SOAP_FMAC2 soap_instantiate___tt__union_MetadataStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___tt__union_MetadataStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___tt__union_MetadataStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(__tt__union_MetadataStream);
		if (size)
			*size = sizeof(__tt__union_MetadataStream);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(__tt__union_MetadataStream, n);
		if (size)
			*size = n * sizeof(__tt__union_MetadataStream);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (__tt__union_MetadataStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___tt__union_MetadataStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying __tt__union_MetadataStream %p -> %p\n", q, p));
	*(__tt__union_MetadataStream*)p = *(__tt__union_MetadataStream*)q;
}

void _tt__ConfigDescription_Messages::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__ConfigDescription_Messages::Source = NULL;
	this->_tt__ConfigDescription_Messages::Key = NULL;
	this->_tt__ConfigDescription_Messages::Data = NULL;
	this->_tt__ConfigDescription_Messages::Extension = NULL;
	this->_tt__ConfigDescription_Messages::IsProperty = NULL;
	this->_tt__ConfigDescription_Messages::__anyAttribute = NULL;
	soap_default_string(soap, &this->_tt__ConfigDescription_Messages::ParentTopic);
}

void _tt__ConfigDescription_Messages::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &this->_tt__ConfigDescription_Messages::Source);
	soap_serialize_PointerTott__ItemListDescription(soap, &this->_tt__ConfigDescription_Messages::Key);
	soap_serialize_PointerTott__ItemListDescription(soap, &this->_tt__ConfigDescription_Messages::Data);
	soap_serialize_PointerTott__MessageDescriptionExtension(soap, &this->_tt__ConfigDescription_Messages::Extension);
	soap_serialize_string(soap, &this->_tt__ConfigDescription_Messages::ParentTopic);
#endif
}

int _tt__ConfigDescription_Messages::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ConfigDescription_Messages(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ConfigDescription_Messages(struct soap *soap, const char *tag, int id, const _tt__ConfigDescription_Messages *a, const char *type)
{
	if (((_tt__ConfigDescription_Messages*)a)->IsProperty)
		soap_set_attr(soap, "IsProperty", soap_bool2s(soap, *((_tt__ConfigDescription_Messages*)a)->IsProperty), 1);
	if (((_tt__ConfigDescription_Messages*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_tt__ConfigDescription_Messages*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ConfigDescription_Messages), type))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Source", -1, &(a->_tt__ConfigDescription_Messages::Source), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Key", -1, &(a->_tt__ConfigDescription_Messages::Key), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Data", -1, &(a->_tt__ConfigDescription_Messages::Data), ""))
		return soap->error;
	if (soap_out_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", -1, &(a->_tt__ConfigDescription_Messages::Extension), ""))
		return soap->error;
	if (a->_tt__ConfigDescription_Messages::ParentTopic)
	{	if (soap_out_string(soap, "tt:ParentTopic", -1, &a->_tt__ConfigDescription_Messages::ParentTopic, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ParentTopic"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ConfigDescription_Messages::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ConfigDescription_Messages(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ConfigDescription_Messages * SOAP_FMAC4 soap_in__tt__ConfigDescription_Messages(struct soap *soap, const char *tag, _tt__ConfigDescription_Messages *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ConfigDescription_Messages *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ConfigDescription_Messages, sizeof(_tt__ConfigDescription_Messages), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ConfigDescription_Messages)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ConfigDescription_Messages *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "IsProperty", 0);
		if (t)
		{
			if (!(((_tt__ConfigDescription_Messages*)a)->IsProperty = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((_tt__ConfigDescription_Messages*)a)->IsProperty))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_tt__ConfigDescription_Messages*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag_Source1 = 1;
	size_t soap_flag_Key1 = 1;
	size_t soap_flag_Data1 = 1;
	size_t soap_flag_Extension1 = 1;
	size_t soap_flag_ParentTopic1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Source1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Source", &(a->_tt__ConfigDescription_Messages::Source), "tt:ItemListDescription"))
				{	soap_flag_Source1--;
					continue;
				}
			if (soap_flag_Key1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Key", &(a->_tt__ConfigDescription_Messages::Key), "tt:ItemListDescription"))
				{	soap_flag_Key1--;
					continue;
				}
			if (soap_flag_Data1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Data", &(a->_tt__ConfigDescription_Messages::Data), "tt:ItemListDescription"))
				{	soap_flag_Data1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", &(a->_tt__ConfigDescription_Messages::Extension), "tt:MessageDescriptionExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap_flag_ParentTopic1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:ParentTopic", &(a->_tt__ConfigDescription_Messages::ParentTopic), "xsd:string"))
				{	soap_flag_ParentTopic1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ConfigDescription_Messages *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ConfigDescription_Messages, 0, sizeof(_tt__ConfigDescription_Messages), 0, soap_copy__tt__ConfigDescription_Messages);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ParentTopic1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tt__ConfigDescription_Messages::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ConfigDescription_Messages);
	if (this->soap_out(soap, tag?tag:"tt:ConfigDescription-Messages", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ConfigDescription_Messages::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ConfigDescription_Messages(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ConfigDescription_Messages * SOAP_FMAC4 soap_get__tt__ConfigDescription_Messages(struct soap *soap, _tt__ConfigDescription_Messages *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ConfigDescription_Messages(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ConfigDescription_Messages * SOAP_FMAC2 soap_instantiate__tt__ConfigDescription_Messages(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ConfigDescription_Messages(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ConfigDescription_Messages, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ConfigDescription_Messages);
		if (size)
			*size = sizeof(_tt__ConfigDescription_Messages);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ConfigDescription_Messages, n);
		if (size)
			*size = n * sizeof(_tt__ConfigDescription_Messages);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ConfigDescription_Messages*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ConfigDescription_Messages(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ConfigDescription_Messages %p -> %p\n", q, p));
	*(_tt__ConfigDescription_Messages*)p = *(_tt__ConfigDescription_Messages*)q;
}

void _tt__Behaviour_Idle::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__Behaviour_Idle::__size = 0;
	this->_tt__Behaviour_Idle::__any = NULL;
}

void _tt__Behaviour_Idle::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__Behaviour_Idle::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__Behaviour_Idle(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Behaviour_Idle(struct soap *soap, const char *tag, int id, const _tt__Behaviour_Idle *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Behaviour_Idle), type))
		return soap->error;
	if (a->_tt__Behaviour_Idle::__any)
	{	int i;
		for (i = 0; i < a->_tt__Behaviour_Idle::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_tt__Behaviour_Idle::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_tt__Behaviour_Idle::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__Behaviour_Idle(soap, tag, this, type);
}

SOAP_FMAC3 _tt__Behaviour_Idle * SOAP_FMAC4 soap_in__tt__Behaviour_Idle(struct soap *soap, const char *tag, _tt__Behaviour_Idle *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__Behaviour_Idle *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Behaviour_Idle, sizeof(_tt__Behaviour_Idle), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__Behaviour_Idle)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__Behaviour_Idle *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tt__Behaviour_Idle::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_tt__Behaviour_Idle::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_tt__Behaviour_Idle::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_tt__Behaviour_Idle::__any);
				}
				if (soap_in_byte(soap, "-any", a->_tt__Behaviour_Idle::__any, "xsd:byte"))
				{	a->_tt__Behaviour_Idle::__size++;
					a->_tt__Behaviour_Idle::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tt__Behaviour_Idle::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_tt__Behaviour_Idle::__size)
			a->_tt__Behaviour_Idle::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_tt__Behaviour_Idle::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__Behaviour_Idle *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Behaviour_Idle, 0, sizeof(_tt__Behaviour_Idle), 0, soap_copy__tt__Behaviour_Idle);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__Behaviour_Idle::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__Behaviour_Idle);
	if (this->soap_out(soap, tag?tag:"tt:Behaviour-Idle", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__Behaviour_Idle::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__Behaviour_Idle(soap, this, tag, type);
}

SOAP_FMAC3 _tt__Behaviour_Idle * SOAP_FMAC4 soap_get__tt__Behaviour_Idle(struct soap *soap, _tt__Behaviour_Idle *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Behaviour_Idle(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__Behaviour_Idle * SOAP_FMAC2 soap_instantiate__tt__Behaviour_Idle(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__Behaviour_Idle(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__Behaviour_Idle, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__Behaviour_Idle);
		if (size)
			*size = sizeof(_tt__Behaviour_Idle);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__Behaviour_Idle, n);
		if (size)
			*size = n * sizeof(_tt__Behaviour_Idle);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__Behaviour_Idle*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__Behaviour_Idle(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__Behaviour_Idle %p -> %p\n", q, p));
	*(_tt__Behaviour_Idle*)p = *(_tt__Behaviour_Idle*)q;
}

void _tt__Behaviour_Removed::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__Behaviour_Removed::__size = 0;
	this->_tt__Behaviour_Removed::__any = NULL;
}

void _tt__Behaviour_Removed::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__Behaviour_Removed::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__Behaviour_Removed(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Behaviour_Removed(struct soap *soap, const char *tag, int id, const _tt__Behaviour_Removed *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Behaviour_Removed), type))
		return soap->error;
	if (a->_tt__Behaviour_Removed::__any)
	{	int i;
		for (i = 0; i < a->_tt__Behaviour_Removed::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_tt__Behaviour_Removed::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_tt__Behaviour_Removed::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__Behaviour_Removed(soap, tag, this, type);
}

SOAP_FMAC3 _tt__Behaviour_Removed * SOAP_FMAC4 soap_in__tt__Behaviour_Removed(struct soap *soap, const char *tag, _tt__Behaviour_Removed *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__Behaviour_Removed *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Behaviour_Removed, sizeof(_tt__Behaviour_Removed), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__Behaviour_Removed)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__Behaviour_Removed *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tt__Behaviour_Removed::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_tt__Behaviour_Removed::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_tt__Behaviour_Removed::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_tt__Behaviour_Removed::__any);
				}
				if (soap_in_byte(soap, "-any", a->_tt__Behaviour_Removed::__any, "xsd:byte"))
				{	a->_tt__Behaviour_Removed::__size++;
					a->_tt__Behaviour_Removed::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tt__Behaviour_Removed::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_tt__Behaviour_Removed::__size)
			a->_tt__Behaviour_Removed::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_tt__Behaviour_Removed::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__Behaviour_Removed *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Behaviour_Removed, 0, sizeof(_tt__Behaviour_Removed), 0, soap_copy__tt__Behaviour_Removed);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__Behaviour_Removed::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__Behaviour_Removed);
	if (this->soap_out(soap, tag?tag:"tt:Behaviour-Removed", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__Behaviour_Removed::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__Behaviour_Removed(soap, this, tag, type);
}

SOAP_FMAC3 _tt__Behaviour_Removed * SOAP_FMAC4 soap_get__tt__Behaviour_Removed(struct soap *soap, _tt__Behaviour_Removed *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Behaviour_Removed(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__Behaviour_Removed * SOAP_FMAC2 soap_instantiate__tt__Behaviour_Removed(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__Behaviour_Removed(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__Behaviour_Removed, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__Behaviour_Removed);
		if (size)
			*size = sizeof(_tt__Behaviour_Removed);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__Behaviour_Removed, n);
		if (size)
			*size = n * sizeof(_tt__Behaviour_Removed);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__Behaviour_Removed*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__Behaviour_Removed(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__Behaviour_Removed %p -> %p\n", q, p));
	*(_tt__Behaviour_Removed*)p = *(_tt__Behaviour_Removed*)q;
}

void _tt__ClassDescriptor_ClassCandidate::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_tt__ClassType(soap, &this->_tt__ClassDescriptor_ClassCandidate::Type);
	soap_default_float(soap, &this->_tt__ClassDescriptor_ClassCandidate::Likelihood);
}

void _tt__ClassDescriptor_ClassCandidate::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_tt__ClassDescriptor_ClassCandidate::Likelihood, SOAP_TYPE_float);
#endif
}

int _tt__ClassDescriptor_ClassCandidate::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ClassDescriptor_ClassCandidate(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const char *tag, int id, const _tt__ClassDescriptor_ClassCandidate *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate), type))
		return soap->error;
	if (soap_out_tt__ClassType(soap, "tt:Type", -1, &(a->_tt__ClassDescriptor_ClassCandidate::Type), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Likelihood", -1, &(a->_tt__ClassDescriptor_ClassCandidate::Likelihood), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ClassDescriptor_ClassCandidate::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ClassDescriptor_ClassCandidate(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ClassDescriptor_ClassCandidate * SOAP_FMAC4 soap_in__tt__ClassDescriptor_ClassCandidate(struct soap *soap, const char *tag, _tt__ClassDescriptor_ClassCandidate *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ClassDescriptor_ClassCandidate *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate, sizeof(_tt__ClassDescriptor_ClassCandidate), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ClassDescriptor_ClassCandidate)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ClassDescriptor_ClassCandidate *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_Likelihood1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ClassType(soap, "tt:Type", &(a->_tt__ClassDescriptor_ClassCandidate::Type), "tt:ClassType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_Likelihood1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Likelihood", &(a->_tt__ClassDescriptor_ClassCandidate::Likelihood), "xsd:float"))
				{	soap_flag_Likelihood1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ClassDescriptor_ClassCandidate *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate, 0, sizeof(_tt__ClassDescriptor_ClassCandidate), 0, soap_copy__tt__ClassDescriptor_ClassCandidate);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0 || soap_flag_Likelihood1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tt__ClassDescriptor_ClassCandidate::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate);
	if (this->soap_out(soap, tag?tag:"tt:ClassDescriptor-ClassCandidate", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ClassDescriptor_ClassCandidate::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ClassDescriptor_ClassCandidate(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ClassDescriptor_ClassCandidate * SOAP_FMAC4 soap_get__tt__ClassDescriptor_ClassCandidate(struct soap *soap, _tt__ClassDescriptor_ClassCandidate *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ClassDescriptor_ClassCandidate(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ClassDescriptor_ClassCandidate * SOAP_FMAC2 soap_instantiate__tt__ClassDescriptor_ClassCandidate(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ClassDescriptor_ClassCandidate(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ClassDescriptor_ClassCandidate);
		if (size)
			*size = sizeof(_tt__ClassDescriptor_ClassCandidate);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ClassDescriptor_ClassCandidate, n);
		if (size)
			*size = n * sizeof(_tt__ClassDescriptor_ClassCandidate);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ClassDescriptor_ClassCandidate*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ClassDescriptor_ClassCandidate(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ClassDescriptor_ClassCandidate %p -> %p\n", q, p));
	*(_tt__ClassDescriptor_ClassCandidate*)p = *(_tt__ClassDescriptor_ClassCandidate*)q;
}

void _tt__ColorDescriptor_ColorCluster::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__ColorDescriptor_ColorCluster::Color = NULL;
	this->_tt__ColorDescriptor_ColorCluster::Weight = NULL;
	this->_tt__ColorDescriptor_ColorCluster::Covariance = NULL;
}

void _tt__ColorDescriptor_ColorCluster::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Color(soap, &this->_tt__ColorDescriptor_ColorCluster::Color);
	soap_serialize_PointerTofloat(soap, &this->_tt__ColorDescriptor_ColorCluster::Weight);
	soap_serialize_PointerTott__ColorCovariance(soap, &this->_tt__ColorDescriptor_ColorCluster::Covariance);
#endif
}

int _tt__ColorDescriptor_ColorCluster::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ColorDescriptor_ColorCluster(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ColorDescriptor_ColorCluster(struct soap *soap, const char *tag, int id, const _tt__ColorDescriptor_ColorCluster *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ColorDescriptor_ColorCluster), type))
		return soap->error;
	if (a->_tt__ColorDescriptor_ColorCluster::Color)
	{	if (soap_out_PointerTott__Color(soap, "tt:Color", -1, &a->_tt__ColorDescriptor_ColorCluster::Color, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Color"))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Weight", -1, &(a->_tt__ColorDescriptor_ColorCluster::Weight), ""))
		return soap->error;
	if (soap_out_PointerTott__ColorCovariance(soap, "tt:Covariance", -1, &(a->_tt__ColorDescriptor_ColorCluster::Covariance), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ColorDescriptor_ColorCluster::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ColorDescriptor_ColorCluster(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ColorDescriptor_ColorCluster * SOAP_FMAC4 soap_in__tt__ColorDescriptor_ColorCluster(struct soap *soap, const char *tag, _tt__ColorDescriptor_ColorCluster *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ColorDescriptor_ColorCluster *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ColorDescriptor_ColorCluster, sizeof(_tt__ColorDescriptor_ColorCluster), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ColorDescriptor_ColorCluster)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ColorDescriptor_ColorCluster *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Color1 = 1;
	size_t soap_flag_Weight1 = 1;
	size_t soap_flag_Covariance1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Color1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Color(soap, "tt:Color", &(a->_tt__ColorDescriptor_ColorCluster::Color), "tt:Color"))
				{	soap_flag_Color1--;
					continue;
				}
			if (soap_flag_Weight1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Weight", &(a->_tt__ColorDescriptor_ColorCluster::Weight), "xsd:float"))
				{	soap_flag_Weight1--;
					continue;
				}
			if (soap_flag_Covariance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorCovariance(soap, "tt:Covariance", &(a->_tt__ColorDescriptor_ColorCluster::Covariance), "tt:ColorCovariance"))
				{	soap_flag_Covariance1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ColorDescriptor_ColorCluster *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ColorDescriptor_ColorCluster, 0, sizeof(_tt__ColorDescriptor_ColorCluster), 0, soap_copy__tt__ColorDescriptor_ColorCluster);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Color1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tt__ColorDescriptor_ColorCluster::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ColorDescriptor_ColorCluster);
	if (this->soap_out(soap, tag?tag:"tt:ColorDescriptor-ColorCluster", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ColorDescriptor_ColorCluster::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ColorDescriptor_ColorCluster(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ColorDescriptor_ColorCluster * SOAP_FMAC4 soap_get__tt__ColorDescriptor_ColorCluster(struct soap *soap, _tt__ColorDescriptor_ColorCluster *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ColorDescriptor_ColorCluster(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ColorDescriptor_ColorCluster * SOAP_FMAC2 soap_instantiate__tt__ColorDescriptor_ColorCluster(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ColorDescriptor_ColorCluster(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ColorDescriptor_ColorCluster, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ColorDescriptor_ColorCluster);
		if (size)
			*size = sizeof(_tt__ColorDescriptor_ColorCluster);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ColorDescriptor_ColorCluster, n);
		if (size)
			*size = n * sizeof(_tt__ColorDescriptor_ColorCluster);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ColorDescriptor_ColorCluster*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ColorDescriptor_ColorCluster(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ColorDescriptor_ColorCluster %p -> %p\n", q, p));
	*(_tt__ColorDescriptor_ColorCluster*)p = *(_tt__ColorDescriptor_ColorCluster*)q;
}

void _tt__ItemListDescription_ElementItemDescription::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_string(soap, &this->_tt__ItemListDescription_ElementItemDescription::Name);
	soap_default__QName(soap, &this->_tt__ItemListDescription_ElementItemDescription::Type);
}

void _tt__ItemListDescription_ElementItemDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__ItemListDescription_ElementItemDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ItemListDescription_ElementItemDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const char *tag, int id, const _tt__ItemListDescription_ElementItemDescription *a, const char *type)
{
	if (((_tt__ItemListDescription_ElementItemDescription*)a)->Name)
		soap_set_attr(soap, "Name", ((_tt__ItemListDescription_ElementItemDescription*)a)->Name, 1);
	if (((_tt__ItemListDescription_ElementItemDescription*)a)->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, ((_tt__ItemListDescription_ElementItemDescription*)a)->Type), 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ItemListDescription_ElementItemDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ItemListDescription_ElementItemDescription(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ItemListDescription_ElementItemDescription * SOAP_FMAC4 soap_in__tt__ItemListDescription_ElementItemDescription(struct soap *soap, const char *tag, _tt__ItemListDescription_ElementItemDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ItemListDescription_ElementItemDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription, sizeof(_tt__ItemListDescription_ElementItemDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ItemListDescription_ElementItemDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ItemListDescription_ElementItemDescription *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &((_tt__ItemListDescription_ElementItemDescription*)a)->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &((_tt__ItemListDescription_ElementItemDescription*)a)->Type, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ItemListDescription_ElementItemDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription, 0, sizeof(_tt__ItemListDescription_ElementItemDescription), 0, soap_copy__tt__ItemListDescription_ElementItemDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__ItemListDescription_ElementItemDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription);
	if (this->soap_out(soap, tag?tag:"tt:ItemListDescription-ElementItemDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ItemListDescription_ElementItemDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ItemListDescription_ElementItemDescription(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ItemListDescription_ElementItemDescription * SOAP_FMAC4 soap_get__tt__ItemListDescription_ElementItemDescription(struct soap *soap, _tt__ItemListDescription_ElementItemDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemListDescription_ElementItemDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ItemListDescription_ElementItemDescription * SOAP_FMAC2 soap_instantiate__tt__ItemListDescription_ElementItemDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ItemListDescription_ElementItemDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ItemListDescription_ElementItemDescription);
		if (size)
			*size = sizeof(_tt__ItemListDescription_ElementItemDescription);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ItemListDescription_ElementItemDescription, n);
		if (size)
			*size = n * sizeof(_tt__ItemListDescription_ElementItemDescription);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ItemListDescription_ElementItemDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ItemListDescription_ElementItemDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ItemListDescription_ElementItemDescription %p -> %p\n", q, p));
	*(_tt__ItemListDescription_ElementItemDescription*)p = *(_tt__ItemListDescription_ElementItemDescription*)q;
}

void _tt__ItemListDescription_SimpleItemDescription::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_string(soap, &this->_tt__ItemListDescription_SimpleItemDescription::Name);
	soap_default__QName(soap, &this->_tt__ItemListDescription_SimpleItemDescription::Type);
}

void _tt__ItemListDescription_SimpleItemDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__ItemListDescription_SimpleItemDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ItemListDescription_SimpleItemDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const char *tag, int id, const _tt__ItemListDescription_SimpleItemDescription *a, const char *type)
{
	if (((_tt__ItemListDescription_SimpleItemDescription*)a)->Name)
		soap_set_attr(soap, "Name", ((_tt__ItemListDescription_SimpleItemDescription*)a)->Name, 1);
	if (((_tt__ItemListDescription_SimpleItemDescription*)a)->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, ((_tt__ItemListDescription_SimpleItemDescription*)a)->Type), 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ItemListDescription_SimpleItemDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ItemListDescription_SimpleItemDescription(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ItemListDescription_SimpleItemDescription * SOAP_FMAC4 soap_in__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, const char *tag, _tt__ItemListDescription_SimpleItemDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ItemListDescription_SimpleItemDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription, sizeof(_tt__ItemListDescription_SimpleItemDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ItemListDescription_SimpleItemDescription *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &((_tt__ItemListDescription_SimpleItemDescription*)a)->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &((_tt__ItemListDescription_SimpleItemDescription*)a)->Type, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ItemListDescription_SimpleItemDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription, 0, sizeof(_tt__ItemListDescription_SimpleItemDescription), 0, soap_copy__tt__ItemListDescription_SimpleItemDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__ItemListDescription_SimpleItemDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription);
	if (this->soap_out(soap, tag?tag:"tt:ItemListDescription-SimpleItemDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ItemListDescription_SimpleItemDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ItemListDescription_SimpleItemDescription(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ItemListDescription_SimpleItemDescription * SOAP_FMAC4 soap_get__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, _tt__ItemListDescription_SimpleItemDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemListDescription_SimpleItemDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ItemListDescription_SimpleItemDescription * SOAP_FMAC2 soap_instantiate__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ItemListDescription_SimpleItemDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ItemListDescription_SimpleItemDescription);
		if (size)
			*size = sizeof(_tt__ItemListDescription_SimpleItemDescription);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ItemListDescription_SimpleItemDescription, n);
		if (size)
			*size = n * sizeof(_tt__ItemListDescription_SimpleItemDescription);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ItemListDescription_SimpleItemDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ItemListDescription_SimpleItemDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ItemListDescription_SimpleItemDescription %p -> %p\n", q, p));
	*(_tt__ItemListDescription_SimpleItemDescription*)p = *(_tt__ItemListDescription_SimpleItemDescription*)q;
}

void _tt__ItemList_ElementItem::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__ItemList_ElementItem::__any = NULL;
	soap_default_string(soap, &this->_tt__ItemList_ElementItem::Name);
}

void _tt__ItemList_ElementItem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__ItemList_ElementItem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ItemList_ElementItem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemList_ElementItem(struct soap *soap, const char *tag, int id, const _tt__ItemList_ElementItem *a, const char *type)
{
	if (((_tt__ItemList_ElementItem*)a)->Name)
		soap_set_attr(soap, "Name", ((_tt__ItemList_ElementItem*)a)->Name, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemList_ElementItem), type))
		return soap->error;
	soap_outliteral(soap, "-any", &(a->_tt__ItemList_ElementItem::__any), NULL);
	return soap_element_end_out(soap, tag);
}

void *_tt__ItemList_ElementItem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ItemList_ElementItem(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ItemList_ElementItem * SOAP_FMAC4 soap_in__tt__ItemList_ElementItem(struct soap *soap, const char *tag, _tt__ItemList_ElementItem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ItemList_ElementItem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemList_ElementItem, sizeof(_tt__ItemList_ElementItem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ItemList_ElementItem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ItemList_ElementItem *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &((_tt__ItemList_ElementItem*)a)->Name, 0, -1))
		return NULL;
	size_t soap_flag___any1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->_tt__ItemList_ElementItem::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ItemList_ElementItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemList_ElementItem, 0, sizeof(_tt__ItemList_ElementItem), 0, soap_copy__tt__ItemList_ElementItem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__ItemList_ElementItem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ItemList_ElementItem);
	if (this->soap_out(soap, tag?tag:"tt:ItemList-ElementItem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ItemList_ElementItem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ItemList_ElementItem(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ItemList_ElementItem * SOAP_FMAC4 soap_get__tt__ItemList_ElementItem(struct soap *soap, _tt__ItemList_ElementItem *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemList_ElementItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ItemList_ElementItem * SOAP_FMAC2 soap_instantiate__tt__ItemList_ElementItem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ItemList_ElementItem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ItemList_ElementItem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ItemList_ElementItem);
		if (size)
			*size = sizeof(_tt__ItemList_ElementItem);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ItemList_ElementItem, n);
		if (size)
			*size = n * sizeof(_tt__ItemList_ElementItem);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ItemList_ElementItem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ItemList_ElementItem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ItemList_ElementItem %p -> %p\n", q, p));
	*(_tt__ItemList_ElementItem*)p = *(_tt__ItemList_ElementItem*)q;
}

void _tt__ItemList_SimpleItem::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	soap_default_string(soap, &this->_tt__ItemList_SimpleItem::Name);
	soap_default_xsd__anySimpleType(soap, &this->_tt__ItemList_SimpleItem::Value);
}

void _tt__ItemList_SimpleItem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__ItemList_SimpleItem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__ItemList_SimpleItem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ItemList_SimpleItem(struct soap *soap, const char *tag, int id, const _tt__ItemList_SimpleItem *a, const char *type)
{
	if (((_tt__ItemList_SimpleItem*)a)->Name)
		soap_set_attr(soap, "Name", ((_tt__ItemList_SimpleItem*)a)->Name, 1);
	if (((_tt__ItemList_SimpleItem*)a)->Value)
		soap_set_attr(soap, "Value", ((_tt__ItemList_SimpleItem*)a)->Value, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ItemList_SimpleItem), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *_tt__ItemList_SimpleItem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__ItemList_SimpleItem(soap, tag, this, type);
}

SOAP_FMAC3 _tt__ItemList_SimpleItem * SOAP_FMAC4 soap_in__tt__ItemList_SimpleItem(struct soap *soap, const char *tag, _tt__ItemList_SimpleItem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__ItemList_SimpleItem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ItemList_SimpleItem, sizeof(_tt__ItemList_SimpleItem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__ItemList_SimpleItem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__ItemList_SimpleItem *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &((_tt__ItemList_SimpleItem*)a)->Name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Value", 1), &((_tt__ItemList_SimpleItem*)a)->Value, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__ItemList_SimpleItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ItemList_SimpleItem, 0, sizeof(_tt__ItemList_SimpleItem), 0, soap_copy__tt__ItemList_SimpleItem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__ItemList_SimpleItem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__ItemList_SimpleItem);
	if (this->soap_out(soap, tag?tag:"tt:ItemList-SimpleItem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__ItemList_SimpleItem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__ItemList_SimpleItem(soap, this, tag, type);
}

SOAP_FMAC3 _tt__ItemList_SimpleItem * SOAP_FMAC4 soap_get__tt__ItemList_SimpleItem(struct soap *soap, _tt__ItemList_SimpleItem *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ItemList_SimpleItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__ItemList_SimpleItem * SOAP_FMAC2 soap_instantiate__tt__ItemList_SimpleItem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__ItemList_SimpleItem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__ItemList_SimpleItem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__ItemList_SimpleItem);
		if (size)
			*size = sizeof(_tt__ItemList_SimpleItem);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__ItemList_SimpleItem, n);
		if (size)
			*size = n * sizeof(_tt__ItemList_SimpleItem);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__ItemList_SimpleItem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__ItemList_SimpleItem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__ItemList_SimpleItem %p -> %p\n", q, p));
	*(_tt__ItemList_SimpleItem*)p = *(_tt__ItemList_SimpleItem*)q;
}

void _tt__EventSubscription_SubscriptionPolicy::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tt__EventSubscription_SubscriptionPolicy::__size = 0;
	this->_tt__EventSubscription_SubscriptionPolicy::__any = NULL;
}

void _tt__EventSubscription_SubscriptionPolicy::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tt__EventSubscription_SubscriptionPolicy::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__EventSubscription_SubscriptionPolicy(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const char *tag, int id, const _tt__EventSubscription_SubscriptionPolicy *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy), type))
		return soap->error;
	if (a->_tt__EventSubscription_SubscriptionPolicy::__any)
	{	int i;
		for (i = 0; i < a->_tt__EventSubscription_SubscriptionPolicy::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_tt__EventSubscription_SubscriptionPolicy::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_tt__EventSubscription_SubscriptionPolicy::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__EventSubscription_SubscriptionPolicy(soap, tag, this, type);
}

SOAP_FMAC3 _tt__EventSubscription_SubscriptionPolicy * SOAP_FMAC4 soap_in__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, const char *tag, _tt__EventSubscription_SubscriptionPolicy *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__EventSubscription_SubscriptionPolicy *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy, sizeof(_tt__EventSubscription_SubscriptionPolicy), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__EventSubscription_SubscriptionPolicy *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tt__EventSubscription_SubscriptionPolicy::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_tt__EventSubscription_SubscriptionPolicy::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_tt__EventSubscription_SubscriptionPolicy::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_tt__EventSubscription_SubscriptionPolicy::__any);
				}
				if (soap_in_byte(soap, "-any", a->_tt__EventSubscription_SubscriptionPolicy::__any, "xsd:byte"))
				{	a->_tt__EventSubscription_SubscriptionPolicy::__size++;
					a->_tt__EventSubscription_SubscriptionPolicy::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tt__EventSubscription_SubscriptionPolicy::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_tt__EventSubscription_SubscriptionPolicy::__size)
			a->_tt__EventSubscription_SubscriptionPolicy::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_tt__EventSubscription_SubscriptionPolicy::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tt__EventSubscription_SubscriptionPolicy *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy, 0, sizeof(_tt__EventSubscription_SubscriptionPolicy), 0, soap_copy__tt__EventSubscription_SubscriptionPolicy);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__EventSubscription_SubscriptionPolicy::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy);
	if (this->soap_out(soap, tag?tag:"tt:EventSubscription-SubscriptionPolicy", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__EventSubscription_SubscriptionPolicy::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__EventSubscription_SubscriptionPolicy(soap, this, tag, type);
}

SOAP_FMAC3 _tt__EventSubscription_SubscriptionPolicy * SOAP_FMAC4 soap_get__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, _tt__EventSubscription_SubscriptionPolicy *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__EventSubscription_SubscriptionPolicy(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__EventSubscription_SubscriptionPolicy * SOAP_FMAC2 soap_instantiate__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__EventSubscription_SubscriptionPolicy(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__EventSubscription_SubscriptionPolicy, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__EventSubscription_SubscriptionPolicy);
		if (size)
			*size = sizeof(_tt__EventSubscription_SubscriptionPolicy);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__EventSubscription_SubscriptionPolicy, n);
		if (size)
			*size = n * sizeof(_tt__EventSubscription_SubscriptionPolicy);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__EventSubscription_SubscriptionPolicy*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__EventSubscription_SubscriptionPolicy(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__EventSubscription_SubscriptionPolicy %p -> %p\n", q, p));
	*(_tt__EventSubscription_SubscriptionPolicy*)p = *(_tt__EventSubscription_SubscriptionPolicy*)q;
}

void _tds__GetSystemUrisResponse_Extension::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tds__GetSystemUrisResponse_Extension::__size = 0;
	this->_tds__GetSystemUrisResponse_Extension::__any = NULL;
}

void _tds__GetSystemUrisResponse_Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tds__GetSystemUrisResponse_Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemUrisResponse_Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemUrisResponse_Extension(struct soap *soap, const char *tag, int id, const _tds__GetSystemUrisResponse_Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemUrisResponse_Extension), type))
		return soap->error;
	if (a->_tds__GetSystemUrisResponse_Extension::__any)
	{	int i;
		for (i = 0; i < a->_tds__GetSystemUrisResponse_Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_tds__GetSystemUrisResponse_Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemUrisResponse_Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemUrisResponse_Extension(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemUrisResponse_Extension * SOAP_FMAC4 soap_in__tds__GetSystemUrisResponse_Extension(struct soap *soap, const char *tag, _tds__GetSystemUrisResponse_Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemUrisResponse_Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemUrisResponse_Extension, sizeof(_tds__GetSystemUrisResponse_Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemUrisResponse_Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemUrisResponse_Extension *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tds__GetSystemUrisResponse_Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_tds__GetSystemUrisResponse_Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_tds__GetSystemUrisResponse_Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_tds__GetSystemUrisResponse_Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->_tds__GetSystemUrisResponse_Extension::__any, "xsd:byte"))
				{	a->_tds__GetSystemUrisResponse_Extension::__size++;
					a->_tds__GetSystemUrisResponse_Extension::__any = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetSystemUrisResponse_Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_tds__GetSystemUrisResponse_Extension::__size)
			a->_tds__GetSystemUrisResponse_Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_tds__GetSystemUrisResponse_Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetSystemUrisResponse_Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemUrisResponse_Extension, 0, sizeof(_tds__GetSystemUrisResponse_Extension), 0, soap_copy__tds__GetSystemUrisResponse_Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetSystemUrisResponse_Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemUrisResponse_Extension);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemUrisResponse-Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemUrisResponse_Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemUrisResponse_Extension(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemUrisResponse_Extension * SOAP_FMAC4 soap_get__tds__GetSystemUrisResponse_Extension(struct soap *soap, _tds__GetSystemUrisResponse_Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemUrisResponse_Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemUrisResponse_Extension * SOAP_FMAC2 soap_instantiate__tds__GetSystemUrisResponse_Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemUrisResponse_Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemUrisResponse_Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemUrisResponse_Extension);
		if (size)
			*size = sizeof(_tds__GetSystemUrisResponse_Extension);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemUrisResponse_Extension, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemUrisResponse_Extension);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemUrisResponse_Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemUrisResponse_Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemUrisResponse_Extension %p -> %p\n", q, p));
	*(_tds__GetSystemUrisResponse_Extension*)p = *(_tds__GetSystemUrisResponse_Extension*)q;
}

void _tds__Service_Capabilities::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->_tds__Service_Capabilities::__any = NULL;
}

void _tds__Service_Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
#endif
}

int _tds__Service_Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__Service_Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__Service_Capabilities(struct soap *soap, const char *tag, int id, const _tds__Service_Capabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__Service_Capabilities), type))
		return soap->error;
	soap_outliteral(soap, "-any", &(a->_tds__Service_Capabilities::__any), NULL);
	return soap_element_end_out(soap, tag);
}

void *_tds__Service_Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__Service_Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 _tds__Service_Capabilities * SOAP_FMAC4 soap_in__tds__Service_Capabilities(struct soap *soap, const char *tag, _tds__Service_Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__Service_Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__Service_Capabilities, sizeof(_tds__Service_Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__Service_Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__Service_Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___any1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->_tds__Service_Capabilities::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__Service_Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__Service_Capabilities, 0, sizeof(_tds__Service_Capabilities), 0, soap_copy__tds__Service_Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__Service_Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__Service_Capabilities);
	if (this->soap_out(soap, tag?tag:"tds:Service-Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__Service_Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__Service_Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 _tds__Service_Capabilities * SOAP_FMAC4 soap_get__tds__Service_Capabilities(struct soap *soap, _tds__Service_Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__Service_Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__Service_Capabilities * SOAP_FMAC2 soap_instantiate__tds__Service_Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__Service_Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__Service_Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__Service_Capabilities);
		if (size)
			*size = sizeof(_tds__Service_Capabilities);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__Service_Capabilities, n);
		if (size)
			*size = n * sizeof(_tds__Service_Capabilities);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__Service_Capabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__Service_Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__Service_Capabilities %p -> %p\n", q, p));
	*(_tds__Service_Capabilities*)p = *(_tds__Service_Capabilities*)q;
}

void tt__RecordingJobReference__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingJobReference(soap, &this->tt__RecordingJobReference__::__item);
}

void tt__RecordingJobReference__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingJobReference(soap, &this->tt__RecordingJobReference__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobReference__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobReference__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobReference__(struct soap *soap, const char *tag, int id, const tt__RecordingJobReference__ *a, const char *type)
{
	return soap_out_tt__RecordingJobReference(soap, tag, id, &(a->tt__RecordingJobReference__::__item), "tt:RecordingJobReference");
}

void *tt__RecordingJobReference__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobReference__(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobReference__ * SOAP_FMAC4 soap_in_tt__RecordingJobReference__(struct soap *soap, const char *tag, tt__RecordingJobReference__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RecordingJobReference__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobReference__, sizeof(tt__RecordingJobReference__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobReference__)
			return (tt__RecordingJobReference__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RecordingJobReference(soap, tag, &(a->tt__RecordingJobReference__::__item), "tt:RecordingJobReference"))
		return NULL;
	return a;
}

int tt__RecordingJobReference__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobReference__);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobReference__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobReference__(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobReference__ * SOAP_FMAC4 soap_get_tt__RecordingJobReference__(struct soap *soap, tt__RecordingJobReference__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobReference__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobReference__ * SOAP_FMAC2 soap_instantiate_tt__RecordingJobReference__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobReference__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobReference__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobReference__);
		if (size)
			*size = sizeof(tt__RecordingJobReference__);
		((tt__RecordingJobReference__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobReference__, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobReference__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobReference__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobReference__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobReference__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobReference__ %p -> %p\n", q, p));
	*(tt__RecordingJobReference__*)p = *(tt__RecordingJobReference__*)q;
}

void tt__JobToken__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__JobToken(soap, &this->tt__JobToken__::__item);
}

void tt__JobToken__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__JobToken(soap, &this->tt__JobToken__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__JobToken__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__JobToken__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__JobToken__(struct soap *soap, const char *tag, int id, const tt__JobToken__ *a, const char *type)
{
	return soap_out_tt__JobToken(soap, tag, id, &(a->tt__JobToken__::__item), "tt:JobToken");
}

void *tt__JobToken__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__JobToken__(soap, tag, this, type);
}

SOAP_FMAC3 tt__JobToken__ * SOAP_FMAC4 soap_in_tt__JobToken__(struct soap *soap, const char *tag, tt__JobToken__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__JobToken__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__JobToken__, sizeof(tt__JobToken__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__JobToken__)
			return (tt__JobToken__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__JobToken(soap, tag, &(a->tt__JobToken__::__item), "tt:JobToken"))
		return NULL;
	return a;
}

int tt__JobToken__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__JobToken__);
	if (this->soap_out(soap, tag?tag:"tt:JobToken", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__JobToken__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__JobToken__(soap, this, tag, type);
}

SOAP_FMAC3 tt__JobToken__ * SOAP_FMAC4 soap_get_tt__JobToken__(struct soap *soap, tt__JobToken__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__JobToken__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__JobToken__ * SOAP_FMAC2 soap_instantiate_tt__JobToken__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__JobToken__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__JobToken__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__JobToken__);
		if (size)
			*size = sizeof(tt__JobToken__);
		((tt__JobToken__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__JobToken__, n);
		if (size)
			*size = n * sizeof(tt__JobToken__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__JobToken__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__JobToken__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__JobToken__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__JobToken__ %p -> %p\n", q, p));
	*(tt__JobToken__*)p = *(tt__JobToken__*)q;
}

void tt__TrackReference__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TrackReference(soap, &this->tt__TrackReference__::__item);
}

void tt__TrackReference__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__TrackReference(soap, &this->tt__TrackReference__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackReference__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackReference__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackReference__(struct soap *soap, const char *tag, int id, const tt__TrackReference__ *a, const char *type)
{
	return soap_out_tt__TrackReference(soap, tag, id, &(a->tt__TrackReference__::__item), "tt:TrackReference");
}

void *tt__TrackReference__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackReference__(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackReference__ * SOAP_FMAC4 soap_in_tt__TrackReference__(struct soap *soap, const char *tag, tt__TrackReference__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__TrackReference__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackReference__, sizeof(tt__TrackReference__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackReference__)
			return (tt__TrackReference__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__TrackReference(soap, tag, &(a->tt__TrackReference__::__item), "tt:TrackReference"))
		return NULL;
	return a;
}

int tt__TrackReference__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackReference__);
	if (this->soap_out(soap, tag?tag:"tt:TrackReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackReference__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackReference__(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackReference__ * SOAP_FMAC4 soap_get_tt__TrackReference__(struct soap *soap, tt__TrackReference__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackReference__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackReference__ * SOAP_FMAC2 soap_instantiate_tt__TrackReference__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackReference__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackReference__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackReference__);
		if (size)
			*size = sizeof(tt__TrackReference__);
		((tt__TrackReference__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackReference__, n);
		if (size)
			*size = n * sizeof(tt__TrackReference__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackReference__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackReference__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackReference__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackReference__ %p -> %p\n", q, p));
	*(tt__TrackReference__*)p = *(tt__TrackReference__*)q;
}

void tt__RecordingReference__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__RecordingReference__::__item);
}

void tt__RecordingReference__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__RecordingReference__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingReference__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingReference__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingReference__(struct soap *soap, const char *tag, int id, const tt__RecordingReference__ *a, const char *type)
{
	return soap_out_tt__RecordingReference(soap, tag, id, &(a->tt__RecordingReference__::__item), "tt:RecordingReference");
}

void *tt__RecordingReference__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingReference__(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingReference__ * SOAP_FMAC4 soap_in_tt__RecordingReference__(struct soap *soap, const char *tag, tt__RecordingReference__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RecordingReference__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingReference__, sizeof(tt__RecordingReference__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingReference__)
			return (tt__RecordingReference__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RecordingReference(soap, tag, &(a->tt__RecordingReference__::__item), "tt:RecordingReference"))
		return NULL;
	return a;
}

int tt__RecordingReference__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingReference__);
	if (this->soap_out(soap, tag?tag:"tt:RecordingReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingReference__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingReference__(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingReference__ * SOAP_FMAC4 soap_get_tt__RecordingReference__(struct soap *soap, tt__RecordingReference__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingReference__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingReference__ * SOAP_FMAC2 soap_instantiate_tt__RecordingReference__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingReference__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingReference__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingReference__);
		if (size)
			*size = sizeof(tt__RecordingReference__);
		((tt__RecordingReference__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingReference__, n);
		if (size)
			*size = n * sizeof(tt__RecordingReference__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingReference__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingReference__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingReference__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingReference__ %p -> %p\n", q, p));
	*(tt__RecordingReference__*)p = *(tt__RecordingReference__*)q;
}

void tt__ReceiverReference__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReceiverReference(soap, &this->tt__ReceiverReference__::__item);
}

void tt__ReceiverReference__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReceiverReference(soap, &this->tt__ReceiverReference__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverReference__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverReference__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverReference__(struct soap *soap, const char *tag, int id, const tt__ReceiverReference__ *a, const char *type)
{
	return soap_out_tt__ReceiverReference(soap, tag, id, &(a->tt__ReceiverReference__::__item), "tt:ReceiverReference");
}

void *tt__ReceiverReference__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverReference__(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverReference__ * SOAP_FMAC4 soap_in_tt__ReceiverReference__(struct soap *soap, const char *tag, tt__ReceiverReference__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ReceiverReference__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverReference__, sizeof(tt__ReceiverReference__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverReference__)
			return (tt__ReceiverReference__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ReceiverReference(soap, tag, &(a->tt__ReceiverReference__::__item), "tt:ReceiverReference"))
		return NULL;
	return a;
}

int tt__ReceiverReference__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverReference__);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverReference__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverReference__(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverReference__ * SOAP_FMAC4 soap_get_tt__ReceiverReference__(struct soap *soap, tt__ReceiverReference__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverReference__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverReference__ * SOAP_FMAC2 soap_instantiate_tt__ReceiverReference__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverReference__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverReference__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverReference__);
		if (size)
			*size = sizeof(tt__ReceiverReference__);
		((tt__ReceiverReference__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverReference__, n);
		if (size)
			*size = n * sizeof(tt__ReceiverReference__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverReference__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverReference__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverReference__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverReference__ %p -> %p\n", q, p));
	*(tt__ReceiverReference__*)p = *(tt__ReceiverReference__*)q;
}

void wstop__SimpleTopicExpression__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_wstop__SimpleTopicExpression(soap, &this->wstop__SimpleTopicExpression__::__item);
}

void wstop__SimpleTopicExpression__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_wstop__SimpleTopicExpression(soap, &this->wstop__SimpleTopicExpression__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__SimpleTopicExpression__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__SimpleTopicExpression__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__SimpleTopicExpression__(struct soap *soap, const char *tag, int id, const wstop__SimpleTopicExpression__ *a, const char *type)
{
	const char *soap_tmp___item = soap_QName2s(soap, a->__item);
	return soap_out_wstop__SimpleTopicExpression(soap, tag, id, (char*const*)&soap_tmp___item, "wstop:SimpleTopicExpression");
}

void *wstop__SimpleTopicExpression__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__SimpleTopicExpression__(soap, tag, this, type);
}

SOAP_FMAC3 wstop__SimpleTopicExpression__ * SOAP_FMAC4 soap_in_wstop__SimpleTopicExpression__(struct soap *soap, const char *tag, wstop__SimpleTopicExpression__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (wstop__SimpleTopicExpression__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__SimpleTopicExpression__, sizeof(wstop__SimpleTopicExpression__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__SimpleTopicExpression__)
			return (wstop__SimpleTopicExpression__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_wstop__SimpleTopicExpression(soap, tag, &(a->wstop__SimpleTopicExpression__::__item), "wstop:SimpleTopicExpression"))
		return NULL;
	return a;
}

int wstop__SimpleTopicExpression__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__SimpleTopicExpression__);
	if (this->soap_out(soap, tag?tag:"wstop:SimpleTopicExpression", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__SimpleTopicExpression__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__SimpleTopicExpression__(soap, this, tag, type);
}

SOAP_FMAC3 wstop__SimpleTopicExpression__ * SOAP_FMAC4 soap_get_wstop__SimpleTopicExpression__(struct soap *soap, wstop__SimpleTopicExpression__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__SimpleTopicExpression__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__SimpleTopicExpression__ * SOAP_FMAC2 soap_instantiate_wstop__SimpleTopicExpression__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__SimpleTopicExpression__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__SimpleTopicExpression__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(wstop__SimpleTopicExpression__);
		if (size)
			*size = sizeof(wstop__SimpleTopicExpression__);
		((wstop__SimpleTopicExpression__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__SimpleTopicExpression__, n);
		if (size)
			*size = n * sizeof(wstop__SimpleTopicExpression__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((wstop__SimpleTopicExpression__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (wstop__SimpleTopicExpression__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__SimpleTopicExpression__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__SimpleTopicExpression__ %p -> %p\n", q, p));
	*(wstop__SimpleTopicExpression__*)p = *(wstop__SimpleTopicExpression__*)q;
}

void wstop__ConcreteTopicExpression__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_wstop__ConcreteTopicExpression(soap, &this->wstop__ConcreteTopicExpression__::__item);
}

void wstop__ConcreteTopicExpression__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_wstop__ConcreteTopicExpression(soap, &this->wstop__ConcreteTopicExpression__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__ConcreteTopicExpression__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__ConcreteTopicExpression__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__ConcreteTopicExpression__(struct soap *soap, const char *tag, int id, const wstop__ConcreteTopicExpression__ *a, const char *type)
{
	return soap_out_wstop__ConcreteTopicExpression(soap, tag, id, &(a->wstop__ConcreteTopicExpression__::__item), "wstop:ConcreteTopicExpression");
}

void *wstop__ConcreteTopicExpression__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__ConcreteTopicExpression__(soap, tag, this, type);
}

SOAP_FMAC3 wstop__ConcreteTopicExpression__ * SOAP_FMAC4 soap_in_wstop__ConcreteTopicExpression__(struct soap *soap, const char *tag, wstop__ConcreteTopicExpression__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (wstop__ConcreteTopicExpression__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__ConcreteTopicExpression__, sizeof(wstop__ConcreteTopicExpression__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__ConcreteTopicExpression__)
			return (wstop__ConcreteTopicExpression__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_wstop__ConcreteTopicExpression(soap, tag, &(a->wstop__ConcreteTopicExpression__::__item), "wstop:ConcreteTopicExpression"))
		return NULL;
	return a;
}

int wstop__ConcreteTopicExpression__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__ConcreteTopicExpression__);
	if (this->soap_out(soap, tag?tag:"wstop:ConcreteTopicExpression", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__ConcreteTopicExpression__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__ConcreteTopicExpression__(soap, this, tag, type);
}

SOAP_FMAC3 wstop__ConcreteTopicExpression__ * SOAP_FMAC4 soap_get_wstop__ConcreteTopicExpression__(struct soap *soap, wstop__ConcreteTopicExpression__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__ConcreteTopicExpression__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__ConcreteTopicExpression__ * SOAP_FMAC2 soap_instantiate_wstop__ConcreteTopicExpression__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__ConcreteTopicExpression__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__ConcreteTopicExpression__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(wstop__ConcreteTopicExpression__);
		if (size)
			*size = sizeof(wstop__ConcreteTopicExpression__);
		((wstop__ConcreteTopicExpression__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__ConcreteTopicExpression__, n);
		if (size)
			*size = n * sizeof(wstop__ConcreteTopicExpression__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((wstop__ConcreteTopicExpression__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (wstop__ConcreteTopicExpression__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__ConcreteTopicExpression__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__ConcreteTopicExpression__ %p -> %p\n", q, p));
	*(wstop__ConcreteTopicExpression__*)p = *(wstop__ConcreteTopicExpression__*)q;
}

void wstop__FullTopicExpression__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_wstop__FullTopicExpression(soap, &this->wstop__FullTopicExpression__::__item);
}

void wstop__FullTopicExpression__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_wstop__FullTopicExpression(soap, &this->wstop__FullTopicExpression__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__FullTopicExpression__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__FullTopicExpression__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__FullTopicExpression__(struct soap *soap, const char *tag, int id, const wstop__FullTopicExpression__ *a, const char *type)
{
	return soap_out_wstop__FullTopicExpression(soap, tag, id, &(a->wstop__FullTopicExpression__::__item), "wstop:FullTopicExpression");
}

void *wstop__FullTopicExpression__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__FullTopicExpression__(soap, tag, this, type);
}

SOAP_FMAC3 wstop__FullTopicExpression__ * SOAP_FMAC4 soap_in_wstop__FullTopicExpression__(struct soap *soap, const char *tag, wstop__FullTopicExpression__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (wstop__FullTopicExpression__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__FullTopicExpression__, sizeof(wstop__FullTopicExpression__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__FullTopicExpression__)
			return (wstop__FullTopicExpression__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_wstop__FullTopicExpression(soap, tag, &(a->wstop__FullTopicExpression__::__item), "wstop:FullTopicExpression"))
		return NULL;
	return a;
}

int wstop__FullTopicExpression__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__FullTopicExpression__);
	if (this->soap_out(soap, tag?tag:"wstop:FullTopicExpression", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__FullTopicExpression__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__FullTopicExpression__(soap, this, tag, type);
}

SOAP_FMAC3 wstop__FullTopicExpression__ * SOAP_FMAC4 soap_get_wstop__FullTopicExpression__(struct soap *soap, wstop__FullTopicExpression__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__FullTopicExpression__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__FullTopicExpression__ * SOAP_FMAC2 soap_instantiate_wstop__FullTopicExpression__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__FullTopicExpression__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__FullTopicExpression__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(wstop__FullTopicExpression__);
		if (size)
			*size = sizeof(wstop__FullTopicExpression__);
		((wstop__FullTopicExpression__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__FullTopicExpression__, n);
		if (size)
			*size = n * sizeof(wstop__FullTopicExpression__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((wstop__FullTopicExpression__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (wstop__FullTopicExpression__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__FullTopicExpression__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__FullTopicExpression__ %p -> %p\n", q, p));
	*(wstop__FullTopicExpression__*)p = *(wstop__FullTopicExpression__*)q;
}

void tt__ModeOfOperation_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ModeOfOperation(soap, &this->tt__ModeOfOperation_::__item);
}

void tt__ModeOfOperation_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ModeOfOperation_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ModeOfOperation_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ModeOfOperation_(struct soap *soap, const char *tag, int id, const tt__ModeOfOperation_ *a, const char *type)
{
	return soap_out_tt__ModeOfOperation(soap, tag, id, &(a->tt__ModeOfOperation_::__item), "tt:ModeOfOperation");
}

void *tt__ModeOfOperation_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ModeOfOperation_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ModeOfOperation_ * SOAP_FMAC4 soap_in_tt__ModeOfOperation_(struct soap *soap, const char *tag, tt__ModeOfOperation_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ModeOfOperation_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ModeOfOperation_, sizeof(tt__ModeOfOperation_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ModeOfOperation_)
			return (tt__ModeOfOperation_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ModeOfOperation(soap, tag, &(a->tt__ModeOfOperation_::__item), "tt:ModeOfOperation"))
		return NULL;
	return a;
}

int tt__ModeOfOperation_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ModeOfOperation_);
	if (this->soap_out(soap, tag?tag:"tt:ModeOfOperation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ModeOfOperation_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ModeOfOperation_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ModeOfOperation_ * SOAP_FMAC4 soap_get_tt__ModeOfOperation_(struct soap *soap, tt__ModeOfOperation_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ModeOfOperation_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ModeOfOperation_ * SOAP_FMAC2 soap_instantiate_tt__ModeOfOperation_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ModeOfOperation_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ModeOfOperation_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ModeOfOperation_);
		if (size)
			*size = sizeof(tt__ModeOfOperation_);
		((tt__ModeOfOperation_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ModeOfOperation_, n);
		if (size)
			*size = n * sizeof(tt__ModeOfOperation_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ModeOfOperation_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ModeOfOperation_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ModeOfOperation_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ModeOfOperation_ %p -> %p\n", q, p));
	*(tt__ModeOfOperation_*)p = *(tt__ModeOfOperation_*)q;
}

void tt__RecordingJobState__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingJobState(soap, &this->tt__RecordingJobState__::__item);
}

void tt__RecordingJobState__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingJobState(soap, &this->tt__RecordingJobState__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobState__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobState__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobState__(struct soap *soap, const char *tag, int id, const tt__RecordingJobState__ *a, const char *type)
{
	return soap_out_tt__RecordingJobState(soap, tag, id, &(a->tt__RecordingJobState__::__item), "tt:RecordingJobState");
}

void *tt__RecordingJobState__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobState__(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobState__ * SOAP_FMAC4 soap_in_tt__RecordingJobState__(struct soap *soap, const char *tag, tt__RecordingJobState__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RecordingJobState__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobState__, sizeof(tt__RecordingJobState__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobState__)
			return (tt__RecordingJobState__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RecordingJobState(soap, tag, &(a->tt__RecordingJobState__::__item), "tt:RecordingJobState"))
		return NULL;
	return a;
}

int tt__RecordingJobState__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobState__);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobState__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobState__(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobState__ * SOAP_FMAC4 soap_get_tt__RecordingJobState__(struct soap *soap, tt__RecordingJobState__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobState__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobState__ * SOAP_FMAC2 soap_instantiate_tt__RecordingJobState__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobState__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobState__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobState__);
		if (size)
			*size = sizeof(tt__RecordingJobState__);
		((tt__RecordingJobState__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobState__, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobState__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobState__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobState__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobState__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobState__ %p -> %p\n", q, p));
	*(tt__RecordingJobState__*)p = *(tt__RecordingJobState__*)q;
}

void tt__RecordingJobMode__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingJobMode(soap, &this->tt__RecordingJobMode__::__item);
}

void tt__RecordingJobMode__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingJobMode(soap, &this->tt__RecordingJobMode__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobMode__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobMode__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobMode__(struct soap *soap, const char *tag, int id, const tt__RecordingJobMode__ *a, const char *type)
{
	return soap_out_tt__RecordingJobMode(soap, tag, id, &(a->tt__RecordingJobMode__::__item), "tt:RecordingJobMode");
}

void *tt__RecordingJobMode__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobMode__(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobMode__ * SOAP_FMAC4 soap_in_tt__RecordingJobMode__(struct soap *soap, const char *tag, tt__RecordingJobMode__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RecordingJobMode__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobMode__, sizeof(tt__RecordingJobMode__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobMode__)
			return (tt__RecordingJobMode__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RecordingJobMode(soap, tag, &(a->tt__RecordingJobMode__::__item), "tt:RecordingJobMode"))
		return NULL;
	return a;
}

int tt__RecordingJobMode__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobMode__);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobMode__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobMode__(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobMode__ * SOAP_FMAC4 soap_get_tt__RecordingJobMode__(struct soap *soap, tt__RecordingJobMode__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobMode__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobMode__ * SOAP_FMAC2 soap_instantiate_tt__RecordingJobMode__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobMode__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobMode__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobMode__);
		if (size)
			*size = sizeof(tt__RecordingJobMode__);
		((tt__RecordingJobMode__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobMode__, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobMode__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobMode__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobMode__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobMode__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobMode__ %p -> %p\n", q, p));
	*(tt__RecordingJobMode__*)p = *(tt__RecordingJobMode__*)q;
}

void tt__TrackType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TrackType(soap, &this->tt__TrackType_::__item);
}

void tt__TrackType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackType_(struct soap *soap, const char *tag, int id, const tt__TrackType_ *a, const char *type)
{
	return soap_out_tt__TrackType(soap, tag, id, &(a->tt__TrackType_::__item), "tt:TrackType");
}

void *tt__TrackType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackType_ * SOAP_FMAC4 soap_in_tt__TrackType_(struct soap *soap, const char *tag, tt__TrackType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__TrackType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackType_, sizeof(tt__TrackType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackType_)
			return (tt__TrackType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__TrackType(soap, tag, &(a->tt__TrackType_::__item), "tt:TrackType"))
		return NULL;
	return a;
}

int tt__TrackType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackType_);
	if (this->soap_out(soap, tag?tag:"tt:TrackType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackType_ * SOAP_FMAC4 soap_get_tt__TrackType_(struct soap *soap, tt__TrackType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackType_ * SOAP_FMAC2 soap_instantiate_tt__TrackType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackType_);
		if (size)
			*size = sizeof(tt__TrackType_);
		((tt__TrackType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackType_, n);
		if (size)
			*size = n * sizeof(tt__TrackType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackType_ %p -> %p\n", q, p));
	*(tt__TrackType_*)p = *(tt__TrackType_*)q;
}

void tt__RecordingStatus_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingStatus(soap, &this->tt__RecordingStatus_::__item);
}

void tt__RecordingStatus_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingStatus_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingStatus_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingStatus_(struct soap *soap, const char *tag, int id, const tt__RecordingStatus_ *a, const char *type)
{
	return soap_out_tt__RecordingStatus(soap, tag, id, &(a->tt__RecordingStatus_::__item), "tt:RecordingStatus");
}

void *tt__RecordingStatus_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingStatus_(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingStatus_ * SOAP_FMAC4 soap_in_tt__RecordingStatus_(struct soap *soap, const char *tag, tt__RecordingStatus_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RecordingStatus_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingStatus_, sizeof(tt__RecordingStatus_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingStatus_)
			return (tt__RecordingStatus_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RecordingStatus(soap, tag, &(a->tt__RecordingStatus_::__item), "tt:RecordingStatus"))
		return NULL;
	return a;
}

int tt__RecordingStatus_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingStatus_);
	if (this->soap_out(soap, tag?tag:"tt:RecordingStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingStatus_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingStatus_(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingStatus_ * SOAP_FMAC4 soap_get_tt__RecordingStatus_(struct soap *soap, tt__RecordingStatus_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingStatus_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingStatus_ * SOAP_FMAC2 soap_instantiate_tt__RecordingStatus_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingStatus_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingStatus_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingStatus_);
		if (size)
			*size = sizeof(tt__RecordingStatus_);
		((tt__RecordingStatus_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingStatus_, n);
		if (size)
			*size = n * sizeof(tt__RecordingStatus_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingStatus_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingStatus_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingStatus_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingStatus_ %p -> %p\n", q, p));
	*(tt__RecordingStatus_*)p = *(tt__RecordingStatus_*)q;
}

void tt__SearchState_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SearchState(soap, &this->tt__SearchState_::__item);
}

void tt__SearchState_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SearchState_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SearchState_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchState_(struct soap *soap, const char *tag, int id, const tt__SearchState_ *a, const char *type)
{
	return soap_out_tt__SearchState(soap, tag, id, &(a->tt__SearchState_::__item), "tt:SearchState");
}

void *tt__SearchState_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SearchState_(soap, tag, this, type);
}

SOAP_FMAC3 tt__SearchState_ * SOAP_FMAC4 soap_in_tt__SearchState_(struct soap *soap, const char *tag, tt__SearchState_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__SearchState_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchState_, sizeof(tt__SearchState_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SearchState_)
			return (tt__SearchState_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__SearchState(soap, tag, &(a->tt__SearchState_::__item), "tt:SearchState"))
		return NULL;
	return a;
}

int tt__SearchState_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SearchState_);
	if (this->soap_out(soap, tag?tag:"tt:SearchState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SearchState_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SearchState_(soap, this, tag, type);
}

SOAP_FMAC3 tt__SearchState_ * SOAP_FMAC4 soap_get_tt__SearchState_(struct soap *soap, tt__SearchState_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchState_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SearchState_ * SOAP_FMAC2 soap_instantiate_tt__SearchState_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SearchState_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SearchState_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SearchState_);
		if (size)
			*size = sizeof(tt__SearchState_);
		((tt__SearchState_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SearchState_, n);
		if (size)
			*size = n * sizeof(tt__SearchState_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SearchState_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SearchState_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SearchState_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SearchState_ %p -> %p\n", q, p));
	*(tt__SearchState_*)p = *(tt__SearchState_*)q;
}

void tt__XPathExpression__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__XPathExpression(soap, &this->tt__XPathExpression__::__item);
}

void tt__XPathExpression__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__XPathExpression(soap, &this->tt__XPathExpression__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__XPathExpression__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__XPathExpression__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__XPathExpression__(struct soap *soap, const char *tag, int id, const tt__XPathExpression__ *a, const char *type)
{
	return soap_out_tt__XPathExpression(soap, tag, id, &(a->tt__XPathExpression__::__item), "tt:XPathExpression");
}

void *tt__XPathExpression__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__XPathExpression__(soap, tag, this, type);
}

SOAP_FMAC3 tt__XPathExpression__ * SOAP_FMAC4 soap_in_tt__XPathExpression__(struct soap *soap, const char *tag, tt__XPathExpression__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__XPathExpression__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__XPathExpression__, sizeof(tt__XPathExpression__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__XPathExpression__)
			return (tt__XPathExpression__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__XPathExpression(soap, tag, &(a->tt__XPathExpression__::__item), "tt:XPathExpression"))
		return NULL;
	return a;
}

int tt__XPathExpression__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__XPathExpression__);
	if (this->soap_out(soap, tag?tag:"tt:XPathExpression", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__XPathExpression__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__XPathExpression__(soap, this, tag, type);
}

SOAP_FMAC3 tt__XPathExpression__ * SOAP_FMAC4 soap_get_tt__XPathExpression__(struct soap *soap, tt__XPathExpression__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__XPathExpression__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__XPathExpression__ * SOAP_FMAC2 soap_instantiate_tt__XPathExpression__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__XPathExpression__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__XPathExpression__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__XPathExpression__);
		if (size)
			*size = sizeof(tt__XPathExpression__);
		((tt__XPathExpression__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__XPathExpression__, n);
		if (size)
			*size = n * sizeof(tt__XPathExpression__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__XPathExpression__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__XPathExpression__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__XPathExpression__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__XPathExpression__ %p -> %p\n", q, p));
	*(tt__XPathExpression__*)p = *(tt__XPathExpression__*)q;
}

void tt__Description__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Description(soap, &this->tt__Description__::__item);
}

void tt__Description__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Description(soap, &this->tt__Description__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Description__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Description__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Description__(struct soap *soap, const char *tag, int id, const tt__Description__ *a, const char *type)
{
	return soap_out_tt__Description(soap, tag, id, &(a->tt__Description__::__item), "tt:Description");
}

void *tt__Description__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Description__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Description__ * SOAP_FMAC4 soap_in_tt__Description__(struct soap *soap, const char *tag, tt__Description__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Description__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Description__, sizeof(tt__Description__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Description__)
			return (tt__Description__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Description(soap, tag, &(a->tt__Description__::__item), "tt:Description"))
		return NULL;
	return a;
}

int tt__Description__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Description__);
	if (this->soap_out(soap, tag?tag:"tt:Description", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Description__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Description__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Description__ * SOAP_FMAC4 soap_get_tt__Description__(struct soap *soap, tt__Description__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Description__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Description__ * SOAP_FMAC2 soap_instantiate_tt__Description__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Description__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Description__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Description__);
		if (size)
			*size = sizeof(tt__Description__);
		((tt__Description__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Description__, n);
		if (size)
			*size = n * sizeof(tt__Description__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Description__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Description__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Description__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Description__ %p -> %p\n", q, p));
	*(tt__Description__*)p = *(tt__Description__*)q;
}

void tt__ReceiverState_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReceiverState(soap, &this->tt__ReceiverState_::__item);
}

void tt__ReceiverState_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverState_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverState_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverState_(struct soap *soap, const char *tag, int id, const tt__ReceiverState_ *a, const char *type)
{
	return soap_out_tt__ReceiverState(soap, tag, id, &(a->tt__ReceiverState_::__item), "tt:ReceiverState");
}

void *tt__ReceiverState_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverState_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverState_ * SOAP_FMAC4 soap_in_tt__ReceiverState_(struct soap *soap, const char *tag, tt__ReceiverState_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ReceiverState_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverState_, sizeof(tt__ReceiverState_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverState_)
			return (tt__ReceiverState_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ReceiverState(soap, tag, &(a->tt__ReceiverState_::__item), "tt:ReceiverState"))
		return NULL;
	return a;
}

int tt__ReceiverState_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverState_);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverState_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverState_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverState_ * SOAP_FMAC4 soap_get_tt__ReceiverState_(struct soap *soap, tt__ReceiverState_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverState_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverState_ * SOAP_FMAC2 soap_instantiate_tt__ReceiverState_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverState_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverState_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverState_);
		if (size)
			*size = sizeof(tt__ReceiverState_);
		((tt__ReceiverState_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverState_, n);
		if (size)
			*size = n * sizeof(tt__ReceiverState_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverState_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverState_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverState_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverState_ %p -> %p\n", q, p));
	*(tt__ReceiverState_*)p = *(tt__ReceiverState_*)q;
}

void tt__ReceiverMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReceiverMode(soap, &this->tt__ReceiverMode_::__item);
}

void tt__ReceiverMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverMode_(struct soap *soap, const char *tag, int id, const tt__ReceiverMode_ *a, const char *type)
{
	return soap_out_tt__ReceiverMode(soap, tag, id, &(a->tt__ReceiverMode_::__item), "tt:ReceiverMode");
}

void *tt__ReceiverMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverMode_ * SOAP_FMAC4 soap_in_tt__ReceiverMode_(struct soap *soap, const char *tag, tt__ReceiverMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ReceiverMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverMode_, sizeof(tt__ReceiverMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverMode_)
			return (tt__ReceiverMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ReceiverMode(soap, tag, &(a->tt__ReceiverMode_::__item), "tt:ReceiverMode"))
		return NULL;
	return a;
}

int tt__ReceiverMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverMode_);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverMode_ * SOAP_FMAC4 soap_get_tt__ReceiverMode_(struct soap *soap, tt__ReceiverMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverMode_ * SOAP_FMAC2 soap_instantiate_tt__ReceiverMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverMode_);
		if (size)
			*size = sizeof(tt__ReceiverMode_);
		((tt__ReceiverMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverMode_, n);
		if (size)
			*size = n * sizeof(tt__ReceiverMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverMode_ %p -> %p\n", q, p));
	*(tt__ReceiverMode_*)p = *(tt__ReceiverMode_*)q;
}

void tt__ClassType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ClassType(soap, &this->tt__ClassType_::__item);
}

void tt__ClassType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ClassType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ClassType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassType_(struct soap *soap, const char *tag, int id, const tt__ClassType_ *a, const char *type)
{
	return soap_out_tt__ClassType(soap, tag, id, &(a->tt__ClassType_::__item), "tt:ClassType");
}

void *tt__ClassType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ClassType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ClassType_ * SOAP_FMAC4 soap_in_tt__ClassType_(struct soap *soap, const char *tag, tt__ClassType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ClassType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassType_, sizeof(tt__ClassType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ClassType_)
			return (tt__ClassType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ClassType(soap, tag, &(a->tt__ClassType_::__item), "tt:ClassType"))
		return NULL;
	return a;
}

int tt__ClassType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ClassType_);
	if (this->soap_out(soap, tag?tag:"tt:ClassType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ClassType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ClassType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ClassType_ * SOAP_FMAC4 soap_get_tt__ClassType_(struct soap *soap, tt__ClassType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ClassType_ * SOAP_FMAC2 soap_instantiate_tt__ClassType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ClassType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ClassType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ClassType_);
		if (size)
			*size = sizeof(tt__ClassType_);
		((tt__ClassType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ClassType_, n);
		if (size)
			*size = n * sizeof(tt__ClassType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ClassType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ClassType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ClassType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ClassType_ %p -> %p\n", q, p));
	*(tt__ClassType_*)p = *(tt__ClassType_*)q;
}

void tt__Direction_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Direction(soap, &this->tt__Direction_::__item);
}

void tt__Direction_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Direction_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Direction_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Direction_(struct soap *soap, const char *tag, int id, const tt__Direction_ *a, const char *type)
{
	return soap_out_tt__Direction(soap, tag, id, &(a->tt__Direction_::__item), "tt:Direction");
}

void *tt__Direction_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Direction_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Direction_ * SOAP_FMAC4 soap_in_tt__Direction_(struct soap *soap, const char *tag, tt__Direction_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Direction_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Direction_, sizeof(tt__Direction_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Direction_)
			return (tt__Direction_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Direction(soap, tag, &(a->tt__Direction_::__item), "tt:Direction"))
		return NULL;
	return a;
}

int tt__Direction_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Direction_);
	if (this->soap_out(soap, tag?tag:"tt:Direction", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Direction_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Direction_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Direction_ * SOAP_FMAC4 soap_get_tt__Direction_(struct soap *soap, tt__Direction_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Direction_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Direction_ * SOAP_FMAC2 soap_instantiate_tt__Direction_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Direction_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Direction_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Direction_);
		if (size)
			*size = sizeof(tt__Direction_);
		((tt__Direction_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Direction_, n);
		if (size)
			*size = n * sizeof(tt__Direction_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Direction_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Direction_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Direction_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Direction_ %p -> %p\n", q, p));
	*(tt__Direction_*)p = *(tt__Direction_*)q;
}

void tt__PropertyOperation_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__PropertyOperation(soap, &this->tt__PropertyOperation_::__item);
}

void tt__PropertyOperation_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PropertyOperation_::__item, SOAP_TYPE_tt__PropertyOperation);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PropertyOperation_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PropertyOperation_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PropertyOperation_(struct soap *soap, const char *tag, int id, const tt__PropertyOperation_ *a, const char *type)
{
	return soap_out_tt__PropertyOperation(soap, tag, id, &(a->tt__PropertyOperation_::__item), "tt:PropertyOperation");
}

void *tt__PropertyOperation_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PropertyOperation_(soap, tag, this, type);
}

SOAP_FMAC3 tt__PropertyOperation_ * SOAP_FMAC4 soap_in_tt__PropertyOperation_(struct soap *soap, const char *tag, tt__PropertyOperation_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__PropertyOperation_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PropertyOperation_, sizeof(tt__PropertyOperation_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PropertyOperation_)
			return (tt__PropertyOperation_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__PropertyOperation(soap, tag, &(a->tt__PropertyOperation_::__item), "tt:PropertyOperation"))
		return NULL;
	return a;
}

int tt__PropertyOperation_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PropertyOperation_);
	if (this->soap_out(soap, tag?tag:"tt:PropertyOperation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PropertyOperation_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PropertyOperation_(soap, this, tag, type);
}

SOAP_FMAC3 tt__PropertyOperation_ * SOAP_FMAC4 soap_get_tt__PropertyOperation_(struct soap *soap, tt__PropertyOperation_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PropertyOperation_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PropertyOperation_ * SOAP_FMAC2 soap_instantiate_tt__PropertyOperation_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PropertyOperation_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PropertyOperation_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PropertyOperation_);
		if (size)
			*size = sizeof(tt__PropertyOperation_);
		((tt__PropertyOperation_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PropertyOperation_, n);
		if (size)
			*size = n * sizeof(tt__PropertyOperation_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PropertyOperation_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PropertyOperation_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PropertyOperation_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PropertyOperation_ %p -> %p\n", q, p));
	*(tt__PropertyOperation_*)p = *(tt__PropertyOperation_*)q;
}

void tt__TopicNamespaceLocation__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TopicNamespaceLocation(soap, &this->tt__TopicNamespaceLocation__::__item);
}

void tt__TopicNamespaceLocation__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__TopicNamespaceLocation(soap, &this->tt__TopicNamespaceLocation__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TopicNamespaceLocation__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TopicNamespaceLocation__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TopicNamespaceLocation__(struct soap *soap, const char *tag, int id, const tt__TopicNamespaceLocation__ *a, const char *type)
{
	return soap_out_tt__TopicNamespaceLocation(soap, tag, id, &(a->tt__TopicNamespaceLocation__::__item), "tt:TopicNamespaceLocation");
}

void *tt__TopicNamespaceLocation__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TopicNamespaceLocation__(soap, tag, this, type);
}

SOAP_FMAC3 tt__TopicNamespaceLocation__ * SOAP_FMAC4 soap_in_tt__TopicNamespaceLocation__(struct soap *soap, const char *tag, tt__TopicNamespaceLocation__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__TopicNamespaceLocation__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TopicNamespaceLocation__, sizeof(tt__TopicNamespaceLocation__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TopicNamespaceLocation__)
			return (tt__TopicNamespaceLocation__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__TopicNamespaceLocation(soap, tag, &(a->tt__TopicNamespaceLocation__::__item), "tt:TopicNamespaceLocation"))
		return NULL;
	return a;
}

int tt__TopicNamespaceLocation__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TopicNamespaceLocation__);
	if (this->soap_out(soap, tag?tag:"tt:TopicNamespaceLocation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TopicNamespaceLocation__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TopicNamespaceLocation__(soap, this, tag, type);
}

SOAP_FMAC3 tt__TopicNamespaceLocation__ * SOAP_FMAC4 soap_get_tt__TopicNamespaceLocation__(struct soap *soap, tt__TopicNamespaceLocation__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TopicNamespaceLocation__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TopicNamespaceLocation__ * SOAP_FMAC2 soap_instantiate_tt__TopicNamespaceLocation__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TopicNamespaceLocation__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TopicNamespaceLocation__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TopicNamespaceLocation__);
		if (size)
			*size = sizeof(tt__TopicNamespaceLocation__);
		((tt__TopicNamespaceLocation__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TopicNamespaceLocation__, n);
		if (size)
			*size = n * sizeof(tt__TopicNamespaceLocation__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TopicNamespaceLocation__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TopicNamespaceLocation__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TopicNamespaceLocation__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TopicNamespaceLocation__ %p -> %p\n", q, p));
	*(tt__TopicNamespaceLocation__*)p = *(tt__TopicNamespaceLocation__*)q;
}

void tt__ImageStabilizationMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ImageStabilizationMode(soap, &this->tt__ImageStabilizationMode_::__item);
}

void tt__ImageStabilizationMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ImageStabilizationMode_::__item, SOAP_TYPE_tt__ImageStabilizationMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImageStabilizationMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImageStabilizationMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationMode_(struct soap *soap, const char *tag, int id, const tt__ImageStabilizationMode_ *a, const char *type)
{
	return soap_out_tt__ImageStabilizationMode(soap, tag, id, &(a->tt__ImageStabilizationMode_::__item), "tt:ImageStabilizationMode");
}

void *tt__ImageStabilizationMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImageStabilizationMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImageStabilizationMode_ * SOAP_FMAC4 soap_in_tt__ImageStabilizationMode_(struct soap *soap, const char *tag, tt__ImageStabilizationMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ImageStabilizationMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationMode_, sizeof(tt__ImageStabilizationMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImageStabilizationMode_)
			return (tt__ImageStabilizationMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ImageStabilizationMode(soap, tag, &(a->tt__ImageStabilizationMode_::__item), "tt:ImageStabilizationMode"))
		return NULL;
	return a;
}

int tt__ImageStabilizationMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationMode_);
	if (this->soap_out(soap, tag?tag:"tt:ImageStabilizationMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImageStabilizationMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImageStabilizationMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImageStabilizationMode_ * SOAP_FMAC4 soap_get_tt__ImageStabilizationMode_(struct soap *soap, tt__ImageStabilizationMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImageStabilizationMode_ * SOAP_FMAC2 soap_instantiate_tt__ImageStabilizationMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImageStabilizationMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImageStabilizationMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImageStabilizationMode_);
		if (size)
			*size = sizeof(tt__ImageStabilizationMode_);
		((tt__ImageStabilizationMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImageStabilizationMode_, n);
		if (size)
			*size = n * sizeof(tt__ImageStabilizationMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImageStabilizationMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImageStabilizationMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImageStabilizationMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImageStabilizationMode_ %p -> %p\n", q, p));
	*(tt__ImageStabilizationMode_*)p = *(tt__ImageStabilizationMode_*)q;
}

void tt__IrCutFilterMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IrCutFilterMode(soap, &this->tt__IrCutFilterMode_::__item);
}

void tt__IrCutFilterMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__IrCutFilterMode_::__item, SOAP_TYPE_tt__IrCutFilterMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IrCutFilterMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IrCutFilterMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IrCutFilterMode_(struct soap *soap, const char *tag, int id, const tt__IrCutFilterMode_ *a, const char *type)
{
	return soap_out_tt__IrCutFilterMode(soap, tag, id, &(a->tt__IrCutFilterMode_::__item), "tt:IrCutFilterMode");
}

void *tt__IrCutFilterMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IrCutFilterMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__IrCutFilterMode_ * SOAP_FMAC4 soap_in_tt__IrCutFilterMode_(struct soap *soap, const char *tag, tt__IrCutFilterMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IrCutFilterMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IrCutFilterMode_, sizeof(tt__IrCutFilterMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IrCutFilterMode_)
			return (tt__IrCutFilterMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IrCutFilterMode(soap, tag, &(a->tt__IrCutFilterMode_::__item), "tt:IrCutFilterMode"))
		return NULL;
	return a;
}

int tt__IrCutFilterMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IrCutFilterMode_);
	if (this->soap_out(soap, tag?tag:"tt:IrCutFilterMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IrCutFilterMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IrCutFilterMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__IrCutFilterMode_ * SOAP_FMAC4 soap_get_tt__IrCutFilterMode_(struct soap *soap, tt__IrCutFilterMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IrCutFilterMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IrCutFilterMode_ * SOAP_FMAC2 soap_instantiate_tt__IrCutFilterMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IrCutFilterMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IrCutFilterMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IrCutFilterMode_);
		if (size)
			*size = sizeof(tt__IrCutFilterMode_);
		((tt__IrCutFilterMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IrCutFilterMode_, n);
		if (size)
			*size = n * sizeof(tt__IrCutFilterMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IrCutFilterMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IrCutFilterMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IrCutFilterMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IrCutFilterMode_ %p -> %p\n", q, p));
	*(tt__IrCutFilterMode_*)p = *(tt__IrCutFilterMode_*)q;
}

void tt__WhiteBalanceMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WhiteBalanceMode(soap, &this->tt__WhiteBalanceMode_::__item);
}

void tt__WhiteBalanceMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WhiteBalanceMode_::__item, SOAP_TYPE_tt__WhiteBalanceMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalanceMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalanceMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceMode_(struct soap *soap, const char *tag, int id, const tt__WhiteBalanceMode_ *a, const char *type)
{
	return soap_out_tt__WhiteBalanceMode(soap, tag, id, &(a->tt__WhiteBalanceMode_::__item), "tt:WhiteBalanceMode");
}

void *tt__WhiteBalanceMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalanceMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalanceMode_ * SOAP_FMAC4 soap_in_tt__WhiteBalanceMode_(struct soap *soap, const char *tag, tt__WhiteBalanceMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__WhiteBalanceMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceMode_, sizeof(tt__WhiteBalanceMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalanceMode_)
			return (tt__WhiteBalanceMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__WhiteBalanceMode(soap, tag, &(a->tt__WhiteBalanceMode_::__item), "tt:WhiteBalanceMode"))
		return NULL;
	return a;
}

int tt__WhiteBalanceMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceMode_);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalanceMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalanceMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalanceMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalanceMode_ * SOAP_FMAC4 soap_get_tt__WhiteBalanceMode_(struct soap *soap, tt__WhiteBalanceMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalanceMode_ * SOAP_FMAC2 soap_instantiate_tt__WhiteBalanceMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalanceMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalanceMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalanceMode_);
		if (size)
			*size = sizeof(tt__WhiteBalanceMode_);
		((tt__WhiteBalanceMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalanceMode_, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalanceMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalanceMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalanceMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalanceMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalanceMode_ %p -> %p\n", q, p));
	*(tt__WhiteBalanceMode_*)p = *(tt__WhiteBalanceMode_*)q;
}

void tt__Enabled_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Enabled(soap, &this->tt__Enabled_::__item);
}

void tt__Enabled_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Enabled_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Enabled_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Enabled_(struct soap *soap, const char *tag, int id, const tt__Enabled_ *a, const char *type)
{
	return soap_out_tt__Enabled(soap, tag, id, &(a->tt__Enabled_::__item), "tt:Enabled");
}

void *tt__Enabled_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Enabled_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Enabled_ * SOAP_FMAC4 soap_in_tt__Enabled_(struct soap *soap, const char *tag, tt__Enabled_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Enabled_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Enabled_, sizeof(tt__Enabled_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Enabled_)
			return (tt__Enabled_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Enabled(soap, tag, &(a->tt__Enabled_::__item), "tt:Enabled"))
		return NULL;
	return a;
}

int tt__Enabled_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Enabled_);
	if (this->soap_out(soap, tag?tag:"tt:Enabled", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Enabled_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Enabled_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Enabled_ * SOAP_FMAC4 soap_get_tt__Enabled_(struct soap *soap, tt__Enabled_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Enabled_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Enabled_ * SOAP_FMAC2 soap_instantiate_tt__Enabled_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Enabled_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Enabled_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Enabled_);
		if (size)
			*size = sizeof(tt__Enabled_);
		((tt__Enabled_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Enabled_, n);
		if (size)
			*size = n * sizeof(tt__Enabled_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Enabled_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Enabled_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Enabled_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Enabled_ %p -> %p\n", q, p));
	*(tt__Enabled_*)p = *(tt__Enabled_*)q;
}

void tt__ExposureMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ExposureMode(soap, &this->tt__ExposureMode_::__item);
}

void tt__ExposureMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ExposureMode_::__item, SOAP_TYPE_tt__ExposureMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ExposureMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ExposureMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureMode_(struct soap *soap, const char *tag, int id, const tt__ExposureMode_ *a, const char *type)
{
	return soap_out_tt__ExposureMode(soap, tag, id, &(a->tt__ExposureMode_::__item), "tt:ExposureMode");
}

void *tt__ExposureMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ExposureMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ExposureMode_ * SOAP_FMAC4 soap_in_tt__ExposureMode_(struct soap *soap, const char *tag, tt__ExposureMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ExposureMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureMode_, sizeof(tt__ExposureMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ExposureMode_)
			return (tt__ExposureMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ExposureMode(soap, tag, &(a->tt__ExposureMode_::__item), "tt:ExposureMode"))
		return NULL;
	return a;
}

int tt__ExposureMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ExposureMode_);
	if (this->soap_out(soap, tag?tag:"tt:ExposureMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ExposureMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ExposureMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ExposureMode_ * SOAP_FMAC4 soap_get_tt__ExposureMode_(struct soap *soap, tt__ExposureMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ExposureMode_ * SOAP_FMAC2 soap_instantiate_tt__ExposureMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ExposureMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ExposureMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ExposureMode_);
		if (size)
			*size = sizeof(tt__ExposureMode_);
		((tt__ExposureMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ExposureMode_, n);
		if (size)
			*size = n * sizeof(tt__ExposureMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ExposureMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ExposureMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ExposureMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ExposureMode_ %p -> %p\n", q, p));
	*(tt__ExposureMode_*)p = *(tt__ExposureMode_*)q;
}

void tt__ExposurePriority_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ExposurePriority(soap, &this->tt__ExposurePriority_::__item);
}

void tt__ExposurePriority_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ExposurePriority_::__item, SOAP_TYPE_tt__ExposurePriority);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ExposurePriority_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ExposurePriority_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposurePriority_(struct soap *soap, const char *tag, int id, const tt__ExposurePriority_ *a, const char *type)
{
	return soap_out_tt__ExposurePriority(soap, tag, id, &(a->tt__ExposurePriority_::__item), "tt:ExposurePriority");
}

void *tt__ExposurePriority_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ExposurePriority_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ExposurePriority_ * SOAP_FMAC4 soap_in_tt__ExposurePriority_(struct soap *soap, const char *tag, tt__ExposurePriority_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ExposurePriority_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposurePriority_, sizeof(tt__ExposurePriority_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ExposurePriority_)
			return (tt__ExposurePriority_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ExposurePriority(soap, tag, &(a->tt__ExposurePriority_::__item), "tt:ExposurePriority"))
		return NULL;
	return a;
}

int tt__ExposurePriority_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ExposurePriority_);
	if (this->soap_out(soap, tag?tag:"tt:ExposurePriority", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ExposurePriority_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ExposurePriority_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ExposurePriority_ * SOAP_FMAC4 soap_get_tt__ExposurePriority_(struct soap *soap, tt__ExposurePriority_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposurePriority_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ExposurePriority_ * SOAP_FMAC2 soap_instantiate_tt__ExposurePriority_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ExposurePriority_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ExposurePriority_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ExposurePriority_);
		if (size)
			*size = sizeof(tt__ExposurePriority_);
		((tt__ExposurePriority_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ExposurePriority_, n);
		if (size)
			*size = n * sizeof(tt__ExposurePriority_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ExposurePriority_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ExposurePriority_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ExposurePriority_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ExposurePriority_ %p -> %p\n", q, p));
	*(tt__ExposurePriority_*)p = *(tt__ExposurePriority_*)q;
}

void tt__BacklightCompensationMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__BacklightCompensationMode(soap, &this->tt__BacklightCompensationMode_::__item);
}

void tt__BacklightCompensationMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__BacklightCompensationMode_::__item, SOAP_TYPE_tt__BacklightCompensationMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BacklightCompensationMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BacklightCompensationMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationMode_(struct soap *soap, const char *tag, int id, const tt__BacklightCompensationMode_ *a, const char *type)
{
	return soap_out_tt__BacklightCompensationMode(soap, tag, id, &(a->tt__BacklightCompensationMode_::__item), "tt:BacklightCompensationMode");
}

void *tt__BacklightCompensationMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BacklightCompensationMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__BacklightCompensationMode_ * SOAP_FMAC4 soap_in_tt__BacklightCompensationMode_(struct soap *soap, const char *tag, tt__BacklightCompensationMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__BacklightCompensationMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationMode_, sizeof(tt__BacklightCompensationMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BacklightCompensationMode_)
			return (tt__BacklightCompensationMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__BacklightCompensationMode(soap, tag, &(a->tt__BacklightCompensationMode_::__item), "tt:BacklightCompensationMode"))
		return NULL;
	return a;
}

int tt__BacklightCompensationMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationMode_);
	if (this->soap_out(soap, tag?tag:"tt:BacklightCompensationMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BacklightCompensationMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BacklightCompensationMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__BacklightCompensationMode_ * SOAP_FMAC4 soap_get_tt__BacklightCompensationMode_(struct soap *soap, tt__BacklightCompensationMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BacklightCompensationMode_ * SOAP_FMAC2 soap_instantiate_tt__BacklightCompensationMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BacklightCompensationMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BacklightCompensationMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BacklightCompensationMode_);
		if (size)
			*size = sizeof(tt__BacklightCompensationMode_);
		((tt__BacklightCompensationMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BacklightCompensationMode_, n);
		if (size)
			*size = n * sizeof(tt__BacklightCompensationMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BacklightCompensationMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BacklightCompensationMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BacklightCompensationMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BacklightCompensationMode_ %p -> %p\n", q, p));
	*(tt__BacklightCompensationMode_*)p = *(tt__BacklightCompensationMode_*)q;
}

void tt__WideDynamicMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WideDynamicMode(soap, &this->tt__WideDynamicMode_::__item);
}

void tt__WideDynamicMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WideDynamicMode_::__item, SOAP_TYPE_tt__WideDynamicMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WideDynamicMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WideDynamicMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicMode_(struct soap *soap, const char *tag, int id, const tt__WideDynamicMode_ *a, const char *type)
{
	return soap_out_tt__WideDynamicMode(soap, tag, id, &(a->tt__WideDynamicMode_::__item), "tt:WideDynamicMode");
}

void *tt__WideDynamicMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WideDynamicMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__WideDynamicMode_ * SOAP_FMAC4 soap_in_tt__WideDynamicMode_(struct soap *soap, const char *tag, tt__WideDynamicMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__WideDynamicMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicMode_, sizeof(tt__WideDynamicMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WideDynamicMode_)
			return (tt__WideDynamicMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__WideDynamicMode(soap, tag, &(a->tt__WideDynamicMode_::__item), "tt:WideDynamicMode"))
		return NULL;
	return a;
}

int tt__WideDynamicMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicMode_);
	if (this->soap_out(soap, tag?tag:"tt:WideDynamicMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WideDynamicMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WideDynamicMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__WideDynamicMode_ * SOAP_FMAC4 soap_get_tt__WideDynamicMode_(struct soap *soap, tt__WideDynamicMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WideDynamicMode_ * SOAP_FMAC2 soap_instantiate_tt__WideDynamicMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WideDynamicMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WideDynamicMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WideDynamicMode_);
		if (size)
			*size = sizeof(tt__WideDynamicMode_);
		((tt__WideDynamicMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WideDynamicMode_, n);
		if (size)
			*size = n * sizeof(tt__WideDynamicMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WideDynamicMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WideDynamicMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WideDynamicMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WideDynamicMode_ %p -> %p\n", q, p));
	*(tt__WideDynamicMode_*)p = *(tt__WideDynamicMode_*)q;
}

void tt__AutoFocusMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__AutoFocusMode(soap, &this->tt__AutoFocusMode_::__item);
}

void tt__AutoFocusMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__AutoFocusMode_::__item, SOAP_TYPE_tt__AutoFocusMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AutoFocusMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AutoFocusMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AutoFocusMode_(struct soap *soap, const char *tag, int id, const tt__AutoFocusMode_ *a, const char *type)
{
	return soap_out_tt__AutoFocusMode(soap, tag, id, &(a->tt__AutoFocusMode_::__item), "tt:AutoFocusMode");
}

void *tt__AutoFocusMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AutoFocusMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__AutoFocusMode_ * SOAP_FMAC4 soap_in_tt__AutoFocusMode_(struct soap *soap, const char *tag, tt__AutoFocusMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__AutoFocusMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AutoFocusMode_, sizeof(tt__AutoFocusMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AutoFocusMode_)
			return (tt__AutoFocusMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__AutoFocusMode(soap, tag, &(a->tt__AutoFocusMode_::__item), "tt:AutoFocusMode"))
		return NULL;
	return a;
}

int tt__AutoFocusMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AutoFocusMode_);
	if (this->soap_out(soap, tag?tag:"tt:AutoFocusMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AutoFocusMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AutoFocusMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__AutoFocusMode_ * SOAP_FMAC4 soap_get_tt__AutoFocusMode_(struct soap *soap, tt__AutoFocusMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AutoFocusMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AutoFocusMode_ * SOAP_FMAC2 soap_instantiate_tt__AutoFocusMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AutoFocusMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AutoFocusMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AutoFocusMode_);
		if (size)
			*size = sizeof(tt__AutoFocusMode_);
		((tt__AutoFocusMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AutoFocusMode_, n);
		if (size)
			*size = n * sizeof(tt__AutoFocusMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AutoFocusMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AutoFocusMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AutoFocusMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AutoFocusMode_ %p -> %p\n", q, p));
	*(tt__AutoFocusMode_*)p = *(tt__AutoFocusMode_*)q;
}

void tt__PTZPresetTourOperation_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__PTZPresetTourOperation(soap, &this->tt__PTZPresetTourOperation_::__item);
}

void tt__PTZPresetTourOperation_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZPresetTourOperation_::__item, SOAP_TYPE_tt__PTZPresetTourOperation);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourOperation_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourOperation_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourOperation_(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourOperation_ *a, const char *type)
{
	return soap_out_tt__PTZPresetTourOperation(soap, tag, id, &(a->tt__PTZPresetTourOperation_::__item), "tt:PTZPresetTourOperation");
}

void *tt__PTZPresetTourOperation_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourOperation_(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourOperation_ * SOAP_FMAC4 soap_in_tt__PTZPresetTourOperation_(struct soap *soap, const char *tag, tt__PTZPresetTourOperation_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__PTZPresetTourOperation_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourOperation_, sizeof(tt__PTZPresetTourOperation_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourOperation_)
			return (tt__PTZPresetTourOperation_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__PTZPresetTourOperation(soap, tag, &(a->tt__PTZPresetTourOperation_::__item), "tt:PTZPresetTourOperation"))
		return NULL;
	return a;
}

int tt__PTZPresetTourOperation_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourOperation_);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourOperation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourOperation_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourOperation_(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourOperation_ * SOAP_FMAC4 soap_get_tt__PTZPresetTourOperation_(struct soap *soap, tt__PTZPresetTourOperation_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourOperation_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourOperation_ * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourOperation_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourOperation_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourOperation_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourOperation_);
		if (size)
			*size = sizeof(tt__PTZPresetTourOperation_);
		((tt__PTZPresetTourOperation_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourOperation_, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourOperation_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourOperation_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourOperation_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourOperation_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourOperation_ %p -> %p\n", q, p));
	*(tt__PTZPresetTourOperation_*)p = *(tt__PTZPresetTourOperation_*)q;
}

void tt__PTZPresetTourDirection_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__PTZPresetTourDirection(soap, &this->tt__PTZPresetTourDirection_::__item);
}

void tt__PTZPresetTourDirection_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZPresetTourDirection_::__item, SOAP_TYPE_tt__PTZPresetTourDirection);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourDirection_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourDirection_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourDirection_(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourDirection_ *a, const char *type)
{
	return soap_out_tt__PTZPresetTourDirection(soap, tag, id, &(a->tt__PTZPresetTourDirection_::__item), "tt:PTZPresetTourDirection");
}

void *tt__PTZPresetTourDirection_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourDirection_(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourDirection_ * SOAP_FMAC4 soap_in_tt__PTZPresetTourDirection_(struct soap *soap, const char *tag, tt__PTZPresetTourDirection_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__PTZPresetTourDirection_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourDirection_, sizeof(tt__PTZPresetTourDirection_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourDirection_)
			return (tt__PTZPresetTourDirection_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__PTZPresetTourDirection(soap, tag, &(a->tt__PTZPresetTourDirection_::__item), "tt:PTZPresetTourDirection"))
		return NULL;
	return a;
}

int tt__PTZPresetTourDirection_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourDirection_);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourDirection", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourDirection_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourDirection_(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourDirection_ * SOAP_FMAC4 soap_get_tt__PTZPresetTourDirection_(struct soap *soap, tt__PTZPresetTourDirection_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourDirection_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourDirection_ * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourDirection_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourDirection_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourDirection_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourDirection_);
		if (size)
			*size = sizeof(tt__PTZPresetTourDirection_);
		((tt__PTZPresetTourDirection_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourDirection_, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourDirection_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourDirection_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourDirection_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourDirection_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourDirection_ %p -> %p\n", q, p));
	*(tt__PTZPresetTourDirection_*)p = *(tt__PTZPresetTourDirection_*)q;
}

void tt__PTZPresetTourState_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__PTZPresetTourState(soap, &this->tt__PTZPresetTourState_::__item);
}

void tt__PTZPresetTourState_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourState_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourState_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourState_(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourState_ *a, const char *type)
{
	return soap_out_tt__PTZPresetTourState(soap, tag, id, &(a->tt__PTZPresetTourState_::__item), "tt:PTZPresetTourState");
}

void *tt__PTZPresetTourState_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourState_(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourState_ * SOAP_FMAC4 soap_in_tt__PTZPresetTourState_(struct soap *soap, const char *tag, tt__PTZPresetTourState_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__PTZPresetTourState_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourState_, sizeof(tt__PTZPresetTourState_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourState_)
			return (tt__PTZPresetTourState_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__PTZPresetTourState(soap, tag, &(a->tt__PTZPresetTourState_::__item), "tt:PTZPresetTourState"))
		return NULL;
	return a;
}

int tt__PTZPresetTourState_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourState_);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourState_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourState_(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourState_ * SOAP_FMAC4 soap_get_tt__PTZPresetTourState_(struct soap *soap, tt__PTZPresetTourState_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourState_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourState_ * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourState_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourState_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourState_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourState_);
		if (size)
			*size = sizeof(tt__PTZPresetTourState_);
		((tt__PTZPresetTourState_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourState_, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourState_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourState_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourState_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourState_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourState_ %p -> %p\n", q, p));
	*(tt__PTZPresetTourState_*)p = *(tt__PTZPresetTourState_*)q;
}

void tt__MoveStatus_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__MoveStatus(soap, &this->tt__MoveStatus_::__item);
}

void tt__MoveStatus_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__MoveStatus_::__item, SOAP_TYPE_tt__MoveStatus);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MoveStatus_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MoveStatus_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveStatus_(struct soap *soap, const char *tag, int id, const tt__MoveStatus_ *a, const char *type)
{
	return soap_out_tt__MoveStatus(soap, tag, id, &(a->tt__MoveStatus_::__item), "tt:MoveStatus");
}

void *tt__MoveStatus_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MoveStatus_(soap, tag, this, type);
}

SOAP_FMAC3 tt__MoveStatus_ * SOAP_FMAC4 soap_in_tt__MoveStatus_(struct soap *soap, const char *tag, tt__MoveStatus_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__MoveStatus_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveStatus_, sizeof(tt__MoveStatus_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MoveStatus_)
			return (tt__MoveStatus_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__MoveStatus(soap, tag, &(a->tt__MoveStatus_::__item), "tt:MoveStatus"))
		return NULL;
	return a;
}

int tt__MoveStatus_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MoveStatus_);
	if (this->soap_out(soap, tag?tag:"tt:MoveStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MoveStatus_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MoveStatus_(soap, this, tag, type);
}

SOAP_FMAC3 tt__MoveStatus_ * SOAP_FMAC4 soap_get_tt__MoveStatus_(struct soap *soap, tt__MoveStatus_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveStatus_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MoveStatus_ * SOAP_FMAC2 soap_instantiate_tt__MoveStatus_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MoveStatus_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MoveStatus_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MoveStatus_);
		if (size)
			*size = sizeof(tt__MoveStatus_);
		((tt__MoveStatus_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MoveStatus_, n);
		if (size)
			*size = n * sizeof(tt__MoveStatus_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MoveStatus_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MoveStatus_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MoveStatus_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MoveStatus_ %p -> %p\n", q, p));
	*(tt__MoveStatus_*)p = *(tt__MoveStatus_*)q;
}

void tt__AuxiliaryData__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__AuxiliaryData(soap, &this->tt__AuxiliaryData__::__item);
}

void tt__AuxiliaryData__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__AuxiliaryData(soap, &this->tt__AuxiliaryData__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AuxiliaryData__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AuxiliaryData__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AuxiliaryData__(struct soap *soap, const char *tag, int id, const tt__AuxiliaryData__ *a, const char *type)
{
	return soap_out_tt__AuxiliaryData(soap, tag, id, &(a->tt__AuxiliaryData__::__item), "tt:AuxiliaryData");
}

void *tt__AuxiliaryData__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AuxiliaryData__(soap, tag, this, type);
}

SOAP_FMAC3 tt__AuxiliaryData__ * SOAP_FMAC4 soap_in_tt__AuxiliaryData__(struct soap *soap, const char *tag, tt__AuxiliaryData__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__AuxiliaryData__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AuxiliaryData__, sizeof(tt__AuxiliaryData__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AuxiliaryData__)
			return (tt__AuxiliaryData__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__AuxiliaryData(soap, tag, &(a->tt__AuxiliaryData__::__item), "tt:AuxiliaryData"))
		return NULL;
	return a;
}

int tt__AuxiliaryData__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AuxiliaryData__);
	if (this->soap_out(soap, tag?tag:"tt:AuxiliaryData", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AuxiliaryData__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AuxiliaryData__(soap, this, tag, type);
}

SOAP_FMAC3 tt__AuxiliaryData__ * SOAP_FMAC4 soap_get_tt__AuxiliaryData__(struct soap *soap, tt__AuxiliaryData__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AuxiliaryData__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AuxiliaryData__ * SOAP_FMAC2 soap_instantiate_tt__AuxiliaryData__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AuxiliaryData__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AuxiliaryData__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AuxiliaryData__);
		if (size)
			*size = sizeof(tt__AuxiliaryData__);
		((tt__AuxiliaryData__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AuxiliaryData__, n);
		if (size)
			*size = n * sizeof(tt__AuxiliaryData__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AuxiliaryData__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AuxiliaryData__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AuxiliaryData__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AuxiliaryData__ %p -> %p\n", q, p));
	*(tt__AuxiliaryData__*)p = *(tt__AuxiliaryData__*)q;
}

void tt__ReverseMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReverseMode(soap, &this->tt__ReverseMode_::__item);
}

void tt__ReverseMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ReverseMode_::__item, SOAP_TYPE_tt__ReverseMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReverseMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReverseMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseMode_(struct soap *soap, const char *tag, int id, const tt__ReverseMode_ *a, const char *type)
{
	return soap_out_tt__ReverseMode(soap, tag, id, &(a->tt__ReverseMode_::__item), "tt:ReverseMode");
}

void *tt__ReverseMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReverseMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReverseMode_ * SOAP_FMAC4 soap_in_tt__ReverseMode_(struct soap *soap, const char *tag, tt__ReverseMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ReverseMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseMode_, sizeof(tt__ReverseMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReverseMode_)
			return (tt__ReverseMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ReverseMode(soap, tag, &(a->tt__ReverseMode_::__item), "tt:ReverseMode"))
		return NULL;
	return a;
}

int tt__ReverseMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReverseMode_);
	if (this->soap_out(soap, tag?tag:"tt:ReverseMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReverseMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReverseMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReverseMode_ * SOAP_FMAC4 soap_get_tt__ReverseMode_(struct soap *soap, tt__ReverseMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReverseMode_ * SOAP_FMAC2 soap_instantiate_tt__ReverseMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReverseMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReverseMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReverseMode_);
		if (size)
			*size = sizeof(tt__ReverseMode_);
		((tt__ReverseMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReverseMode_, n);
		if (size)
			*size = n * sizeof(tt__ReverseMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReverseMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReverseMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReverseMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReverseMode_ %p -> %p\n", q, p));
	*(tt__ReverseMode_*)p = *(tt__ReverseMode_*)q;
}

void tt__EFlipMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__EFlipMode(soap, &this->tt__EFlipMode_::__item);
}

void tt__EFlipMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__EFlipMode_::__item, SOAP_TYPE_tt__EFlipMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EFlipMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EFlipMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipMode_(struct soap *soap, const char *tag, int id, const tt__EFlipMode_ *a, const char *type)
{
	return soap_out_tt__EFlipMode(soap, tag, id, &(a->tt__EFlipMode_::__item), "tt:EFlipMode");
}

void *tt__EFlipMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EFlipMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__EFlipMode_ * SOAP_FMAC4 soap_in_tt__EFlipMode_(struct soap *soap, const char *tag, tt__EFlipMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__EFlipMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipMode_, sizeof(tt__EFlipMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EFlipMode_)
			return (tt__EFlipMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__EFlipMode(soap, tag, &(a->tt__EFlipMode_::__item), "tt:EFlipMode"))
		return NULL;
	return a;
}

int tt__EFlipMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EFlipMode_);
	if (this->soap_out(soap, tag?tag:"tt:EFlipMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EFlipMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EFlipMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__EFlipMode_ * SOAP_FMAC4 soap_get_tt__EFlipMode_(struct soap *soap, tt__EFlipMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EFlipMode_ * SOAP_FMAC2 soap_instantiate_tt__EFlipMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EFlipMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EFlipMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EFlipMode_);
		if (size)
			*size = sizeof(tt__EFlipMode_);
		((tt__EFlipMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EFlipMode_, n);
		if (size)
			*size = n * sizeof(tt__EFlipMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EFlipMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EFlipMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EFlipMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EFlipMode_ %p -> %p\n", q, p));
	*(tt__EFlipMode_*)p = *(tt__EFlipMode_*)q;
}

void tt__RelayMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RelayMode(soap, &this->tt__RelayMode_::__item);
}

void tt__RelayMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelayMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelayMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayMode_(struct soap *soap, const char *tag, int id, const tt__RelayMode_ *a, const char *type)
{
	return soap_out_tt__RelayMode(soap, tag, id, &(a->tt__RelayMode_::__item), "tt:RelayMode");
}

void *tt__RelayMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelayMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelayMode_ * SOAP_FMAC4 soap_in_tt__RelayMode_(struct soap *soap, const char *tag, tt__RelayMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RelayMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayMode_, sizeof(tt__RelayMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelayMode_)
			return (tt__RelayMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RelayMode(soap, tag, &(a->tt__RelayMode_::__item), "tt:RelayMode"))
		return NULL;
	return a;
}

int tt__RelayMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelayMode_);
	if (this->soap_out(soap, tag?tag:"tt:RelayMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelayMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelayMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelayMode_ * SOAP_FMAC4 soap_get_tt__RelayMode_(struct soap *soap, tt__RelayMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelayMode_ * SOAP_FMAC2 soap_instantiate_tt__RelayMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelayMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelayMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelayMode_);
		if (size)
			*size = sizeof(tt__RelayMode_);
		((tt__RelayMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelayMode_, n);
		if (size)
			*size = n * sizeof(tt__RelayMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelayMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelayMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelayMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelayMode_ %p -> %p\n", q, p));
	*(tt__RelayMode_*)p = *(tt__RelayMode_*)q;
}

void tt__RelayIdleState_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RelayIdleState(soap, &this->tt__RelayIdleState_::__item);
}

void tt__RelayIdleState_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelayIdleState_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelayIdleState_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayIdleState_(struct soap *soap, const char *tag, int id, const tt__RelayIdleState_ *a, const char *type)
{
	return soap_out_tt__RelayIdleState(soap, tag, id, &(a->tt__RelayIdleState_::__item), "tt:RelayIdleState");
}

void *tt__RelayIdleState_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelayIdleState_(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelayIdleState_ * SOAP_FMAC4 soap_in_tt__RelayIdleState_(struct soap *soap, const char *tag, tt__RelayIdleState_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RelayIdleState_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayIdleState_, sizeof(tt__RelayIdleState_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelayIdleState_)
			return (tt__RelayIdleState_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RelayIdleState(soap, tag, &(a->tt__RelayIdleState_::__item), "tt:RelayIdleState"))
		return NULL;
	return a;
}

int tt__RelayIdleState_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelayIdleState_);
	if (this->soap_out(soap, tag?tag:"tt:RelayIdleState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelayIdleState_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelayIdleState_(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelayIdleState_ * SOAP_FMAC4 soap_get_tt__RelayIdleState_(struct soap *soap, tt__RelayIdleState_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayIdleState_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelayIdleState_ * SOAP_FMAC2 soap_instantiate_tt__RelayIdleState_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelayIdleState_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelayIdleState_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelayIdleState_);
		if (size)
			*size = sizeof(tt__RelayIdleState_);
		((tt__RelayIdleState_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelayIdleState_, n);
		if (size)
			*size = n * sizeof(tt__RelayIdleState_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelayIdleState_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelayIdleState_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelayIdleState_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelayIdleState_ %p -> %p\n", q, p));
	*(tt__RelayIdleState_*)p = *(tt__RelayIdleState_*)q;
}

void tt__RelayLogicalState_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RelayLogicalState(soap, &this->tt__RelayLogicalState_::__item);
}

void tt__RelayLogicalState_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelayLogicalState_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelayLogicalState_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayLogicalState_(struct soap *soap, const char *tag, int id, const tt__RelayLogicalState_ *a, const char *type)
{
	return soap_out_tt__RelayLogicalState(soap, tag, id, &(a->tt__RelayLogicalState_::__item), "tt:RelayLogicalState");
}

void *tt__RelayLogicalState_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelayLogicalState_(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelayLogicalState_ * SOAP_FMAC4 soap_in_tt__RelayLogicalState_(struct soap *soap, const char *tag, tt__RelayLogicalState_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RelayLogicalState_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayLogicalState_, sizeof(tt__RelayLogicalState_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelayLogicalState_)
			return (tt__RelayLogicalState_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RelayLogicalState(soap, tag, &(a->tt__RelayLogicalState_::__item), "tt:RelayLogicalState"))
		return NULL;
	return a;
}

int tt__RelayLogicalState_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelayLogicalState_);
	if (this->soap_out(soap, tag?tag:"tt:RelayLogicalState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelayLogicalState_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelayLogicalState_(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelayLogicalState_ * SOAP_FMAC4 soap_get_tt__RelayLogicalState_(struct soap *soap, tt__RelayLogicalState_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayLogicalState_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelayLogicalState_ * SOAP_FMAC2 soap_instantiate_tt__RelayLogicalState_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelayLogicalState_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelayLogicalState_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelayLogicalState_);
		if (size)
			*size = sizeof(tt__RelayLogicalState_);
		((tt__RelayLogicalState_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelayLogicalState_, n);
		if (size)
			*size = n * sizeof(tt__RelayLogicalState_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelayLogicalState_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelayLogicalState_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelayLogicalState_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelayLogicalState_ %p -> %p\n", q, p));
	*(tt__RelayLogicalState_*)p = *(tt__RelayLogicalState_*)q;
}

void tt__UserLevel_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__UserLevel(soap, &this->tt__UserLevel_::__item);
}

void tt__UserLevel_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__UserLevel_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__UserLevel_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__UserLevel_(struct soap *soap, const char *tag, int id, const tt__UserLevel_ *a, const char *type)
{
	return soap_out_tt__UserLevel(soap, tag, id, &(a->tt__UserLevel_::__item), "tt:UserLevel");
}

void *tt__UserLevel_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__UserLevel_(soap, tag, this, type);
}

SOAP_FMAC3 tt__UserLevel_ * SOAP_FMAC4 soap_in_tt__UserLevel_(struct soap *soap, const char *tag, tt__UserLevel_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__UserLevel_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__UserLevel_, sizeof(tt__UserLevel_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__UserLevel_)
			return (tt__UserLevel_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__UserLevel(soap, tag, &(a->tt__UserLevel_::__item), "tt:UserLevel"))
		return NULL;
	return a;
}

int tt__UserLevel_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__UserLevel_);
	if (this->soap_out(soap, tag?tag:"tt:UserLevel", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__UserLevel_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__UserLevel_(soap, this, tag, type);
}

SOAP_FMAC3 tt__UserLevel_ * SOAP_FMAC4 soap_get_tt__UserLevel_(struct soap *soap, tt__UserLevel_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__UserLevel_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__UserLevel_ * SOAP_FMAC2 soap_instantiate_tt__UserLevel_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__UserLevel_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__UserLevel_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__UserLevel_);
		if (size)
			*size = sizeof(tt__UserLevel_);
		((tt__UserLevel_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__UserLevel_, n);
		if (size)
			*size = n * sizeof(tt__UserLevel_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__UserLevel_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__UserLevel_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__UserLevel_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__UserLevel_ %p -> %p\n", q, p));
	*(tt__UserLevel_*)p = *(tt__UserLevel_*)q;
}

void tt__SetDateTimeType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SetDateTimeType(soap, &this->tt__SetDateTimeType_::__item);
}

void tt__SetDateTimeType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SetDateTimeType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SetDateTimeType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SetDateTimeType_(struct soap *soap, const char *tag, int id, const tt__SetDateTimeType_ *a, const char *type)
{
	return soap_out_tt__SetDateTimeType(soap, tag, id, &(a->tt__SetDateTimeType_::__item), "tt:SetDateTimeType");
}

void *tt__SetDateTimeType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SetDateTimeType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__SetDateTimeType_ * SOAP_FMAC4 soap_in_tt__SetDateTimeType_(struct soap *soap, const char *tag, tt__SetDateTimeType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__SetDateTimeType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SetDateTimeType_, sizeof(tt__SetDateTimeType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SetDateTimeType_)
			return (tt__SetDateTimeType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__SetDateTimeType(soap, tag, &(a->tt__SetDateTimeType_::__item), "tt:SetDateTimeType"))
		return NULL;
	return a;
}

int tt__SetDateTimeType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SetDateTimeType_);
	if (this->soap_out(soap, tag?tag:"tt:SetDateTimeType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SetDateTimeType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SetDateTimeType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__SetDateTimeType_ * SOAP_FMAC4 soap_get_tt__SetDateTimeType_(struct soap *soap, tt__SetDateTimeType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SetDateTimeType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SetDateTimeType_ * SOAP_FMAC2 soap_instantiate_tt__SetDateTimeType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SetDateTimeType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SetDateTimeType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SetDateTimeType_);
		if (size)
			*size = sizeof(tt__SetDateTimeType_);
		((tt__SetDateTimeType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SetDateTimeType_, n);
		if (size)
			*size = n * sizeof(tt__SetDateTimeType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SetDateTimeType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SetDateTimeType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SetDateTimeType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SetDateTimeType_ %p -> %p\n", q, p));
	*(tt__SetDateTimeType_*)p = *(tt__SetDateTimeType_*)q;
}

void tt__FactoryDefaultType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__FactoryDefaultType(soap, &this->tt__FactoryDefaultType_::__item);
}

void tt__FactoryDefaultType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FactoryDefaultType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FactoryDefaultType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FactoryDefaultType_(struct soap *soap, const char *tag, int id, const tt__FactoryDefaultType_ *a, const char *type)
{
	return soap_out_tt__FactoryDefaultType(soap, tag, id, &(a->tt__FactoryDefaultType_::__item), "tt:FactoryDefaultType");
}

void *tt__FactoryDefaultType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FactoryDefaultType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__FactoryDefaultType_ * SOAP_FMAC4 soap_in_tt__FactoryDefaultType_(struct soap *soap, const char *tag, tt__FactoryDefaultType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__FactoryDefaultType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FactoryDefaultType_, sizeof(tt__FactoryDefaultType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FactoryDefaultType_)
			return (tt__FactoryDefaultType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__FactoryDefaultType(soap, tag, &(a->tt__FactoryDefaultType_::__item), "tt:FactoryDefaultType"))
		return NULL;
	return a;
}

int tt__FactoryDefaultType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FactoryDefaultType_);
	if (this->soap_out(soap, tag?tag:"tt:FactoryDefaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FactoryDefaultType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FactoryDefaultType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__FactoryDefaultType_ * SOAP_FMAC4 soap_get_tt__FactoryDefaultType_(struct soap *soap, tt__FactoryDefaultType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FactoryDefaultType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FactoryDefaultType_ * SOAP_FMAC2 soap_instantiate_tt__FactoryDefaultType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FactoryDefaultType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FactoryDefaultType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FactoryDefaultType_);
		if (size)
			*size = sizeof(tt__FactoryDefaultType_);
		((tt__FactoryDefaultType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FactoryDefaultType_, n);
		if (size)
			*size = n * sizeof(tt__FactoryDefaultType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FactoryDefaultType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FactoryDefaultType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FactoryDefaultType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FactoryDefaultType_ %p -> %p\n", q, p));
	*(tt__FactoryDefaultType_*)p = *(tt__FactoryDefaultType_*)q;
}

void tt__SystemLogType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SystemLogType(soap, &this->tt__SystemLogType_::__item);
}

void tt__SystemLogType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemLogType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemLogType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogType_(struct soap *soap, const char *tag, int id, const tt__SystemLogType_ *a, const char *type)
{
	return soap_out_tt__SystemLogType(soap, tag, id, &(a->tt__SystemLogType_::__item), "tt:SystemLogType");
}

void *tt__SystemLogType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemLogType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemLogType_ * SOAP_FMAC4 soap_in_tt__SystemLogType_(struct soap *soap, const char *tag, tt__SystemLogType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__SystemLogType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogType_, sizeof(tt__SystemLogType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemLogType_)
			return (tt__SystemLogType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__SystemLogType(soap, tag, &(a->tt__SystemLogType_::__item), "tt:SystemLogType"))
		return NULL;
	return a;
}

int tt__SystemLogType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemLogType_);
	if (this->soap_out(soap, tag?tag:"tt:SystemLogType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemLogType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemLogType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemLogType_ * SOAP_FMAC4 soap_get_tt__SystemLogType_(struct soap *soap, tt__SystemLogType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemLogType_ * SOAP_FMAC2 soap_instantiate_tt__SystemLogType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemLogType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemLogType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemLogType_);
		if (size)
			*size = sizeof(tt__SystemLogType_);
		((tt__SystemLogType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemLogType_, n);
		if (size)
			*size = n * sizeof(tt__SystemLogType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemLogType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemLogType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemLogType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemLogType_ %p -> %p\n", q, p));
	*(tt__SystemLogType_*)p = *(tt__SystemLogType_*)q;
}

void tt__CapabilityCategory_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__CapabilityCategory(soap, &this->tt__CapabilityCategory_::__item);
}

void tt__CapabilityCategory_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__CapabilityCategory_::__item, SOAP_TYPE_tt__CapabilityCategory);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CapabilityCategory_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CapabilityCategory_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilityCategory_(struct soap *soap, const char *tag, int id, const tt__CapabilityCategory_ *a, const char *type)
{
	return soap_out_tt__CapabilityCategory(soap, tag, id, &(a->tt__CapabilityCategory_::__item), "tt:CapabilityCategory");
}

void *tt__CapabilityCategory_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CapabilityCategory_(soap, tag, this, type);
}

SOAP_FMAC3 tt__CapabilityCategory_ * SOAP_FMAC4 soap_in_tt__CapabilityCategory_(struct soap *soap, const char *tag, tt__CapabilityCategory_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__CapabilityCategory_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilityCategory_, sizeof(tt__CapabilityCategory_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CapabilityCategory_)
			return (tt__CapabilityCategory_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__CapabilityCategory(soap, tag, &(a->tt__CapabilityCategory_::__item), "tt:CapabilityCategory"))
		return NULL;
	return a;
}

int tt__CapabilityCategory_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CapabilityCategory_);
	if (this->soap_out(soap, tag?tag:"tt:CapabilityCategory", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CapabilityCategory_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CapabilityCategory_(soap, this, tag, type);
}

SOAP_FMAC3 tt__CapabilityCategory_ * SOAP_FMAC4 soap_get_tt__CapabilityCategory_(struct soap *soap, tt__CapabilityCategory_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilityCategory_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CapabilityCategory_ * SOAP_FMAC2 soap_instantiate_tt__CapabilityCategory_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CapabilityCategory_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CapabilityCategory_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CapabilityCategory_);
		if (size)
			*size = sizeof(tt__CapabilityCategory_);
		((tt__CapabilityCategory_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CapabilityCategory_, n);
		if (size)
			*size = n * sizeof(tt__CapabilityCategory_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CapabilityCategory_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CapabilityCategory_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CapabilityCategory_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CapabilityCategory_ %p -> %p\n", q, p));
	*(tt__CapabilityCategory_*)p = *(tt__CapabilityCategory_*)q;
}

void tt__Dot11AuthAndMangementSuite_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11AuthAndMangementSuite(soap, &this->tt__Dot11AuthAndMangementSuite_::__item);
}

void tt__Dot11AuthAndMangementSuite_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Dot11AuthAndMangementSuite_::__item, SOAP_TYPE_tt__Dot11AuthAndMangementSuite);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11AuthAndMangementSuite_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11AuthAndMangementSuite_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AuthAndMangementSuite_(struct soap *soap, const char *tag, int id, const tt__Dot11AuthAndMangementSuite_ *a, const char *type)
{
	return soap_out_tt__Dot11AuthAndMangementSuite(soap, tag, id, &(a->tt__Dot11AuthAndMangementSuite_::__item), "tt:Dot11AuthAndMangementSuite");
}

void *tt__Dot11AuthAndMangementSuite_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11AuthAndMangementSuite_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11AuthAndMangementSuite_ * SOAP_FMAC4 soap_in_tt__Dot11AuthAndMangementSuite_(struct soap *soap, const char *tag, tt__Dot11AuthAndMangementSuite_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11AuthAndMangementSuite_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AuthAndMangementSuite_, sizeof(tt__Dot11AuthAndMangementSuite_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11AuthAndMangementSuite_)
			return (tt__Dot11AuthAndMangementSuite_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11AuthAndMangementSuite(soap, tag, &(a->tt__Dot11AuthAndMangementSuite_::__item), "tt:Dot11AuthAndMangementSuite"))
		return NULL;
	return a;
}

int tt__Dot11AuthAndMangementSuite_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11AuthAndMangementSuite_);
	if (this->soap_out(soap, tag?tag:"tt:Dot11AuthAndMangementSuite", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11AuthAndMangementSuite_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11AuthAndMangementSuite_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11AuthAndMangementSuite_ * SOAP_FMAC4 soap_get_tt__Dot11AuthAndMangementSuite_(struct soap *soap, tt__Dot11AuthAndMangementSuite_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AuthAndMangementSuite_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11AuthAndMangementSuite_ * SOAP_FMAC2 soap_instantiate_tt__Dot11AuthAndMangementSuite_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11AuthAndMangementSuite_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11AuthAndMangementSuite_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11AuthAndMangementSuite_);
		if (size)
			*size = sizeof(tt__Dot11AuthAndMangementSuite_);
		((tt__Dot11AuthAndMangementSuite_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11AuthAndMangementSuite_, n);
		if (size)
			*size = n * sizeof(tt__Dot11AuthAndMangementSuite_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11AuthAndMangementSuite_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11AuthAndMangementSuite_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11AuthAndMangementSuite_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11AuthAndMangementSuite_ %p -> %p\n", q, p));
	*(tt__Dot11AuthAndMangementSuite_*)p = *(tt__Dot11AuthAndMangementSuite_*)q;
}

void tt__Dot11SignalStrength_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SignalStrength(soap, &this->tt__Dot11SignalStrength_::__item);
}

void tt__Dot11SignalStrength_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Dot11SignalStrength_::__item, SOAP_TYPE_tt__Dot11SignalStrength);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11SignalStrength_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11SignalStrength_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SignalStrength_(struct soap *soap, const char *tag, int id, const tt__Dot11SignalStrength_ *a, const char *type)
{
	return soap_out_tt__Dot11SignalStrength(soap, tag, id, &(a->tt__Dot11SignalStrength_::__item), "tt:Dot11SignalStrength");
}

void *tt__Dot11SignalStrength_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11SignalStrength_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11SignalStrength_ * SOAP_FMAC4 soap_in_tt__Dot11SignalStrength_(struct soap *soap, const char *tag, tt__Dot11SignalStrength_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11SignalStrength_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SignalStrength_, sizeof(tt__Dot11SignalStrength_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11SignalStrength_)
			return (tt__Dot11SignalStrength_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11SignalStrength(soap, tag, &(a->tt__Dot11SignalStrength_::__item), "tt:Dot11SignalStrength"))
		return NULL;
	return a;
}

int tt__Dot11SignalStrength_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11SignalStrength_);
	if (this->soap_out(soap, tag?tag:"tt:Dot11SignalStrength", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11SignalStrength_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11SignalStrength_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11SignalStrength_ * SOAP_FMAC4 soap_get_tt__Dot11SignalStrength_(struct soap *soap, tt__Dot11SignalStrength_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SignalStrength_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11SignalStrength_ * SOAP_FMAC2 soap_instantiate_tt__Dot11SignalStrength_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11SignalStrength_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11SignalStrength_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11SignalStrength_);
		if (size)
			*size = sizeof(tt__Dot11SignalStrength_);
		((tt__Dot11SignalStrength_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11SignalStrength_, n);
		if (size)
			*size = n * sizeof(tt__Dot11SignalStrength_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11SignalStrength_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11SignalStrength_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11SignalStrength_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11SignalStrength_ %p -> %p\n", q, p));
	*(tt__Dot11SignalStrength_*)p = *(tt__Dot11SignalStrength_*)q;
}

void tt__Dot11PSKPassphrase__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11PSKPassphrase(soap, &this->tt__Dot11PSKPassphrase__::__item);
}

void tt__Dot11PSKPassphrase__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11PSKPassphrase(soap, &this->tt__Dot11PSKPassphrase__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11PSKPassphrase__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11PSKPassphrase__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSKPassphrase__(struct soap *soap, const char *tag, int id, const tt__Dot11PSKPassphrase__ *a, const char *type)
{
	return soap_out_tt__Dot11PSKPassphrase(soap, tag, id, &(a->tt__Dot11PSKPassphrase__::__item), "tt:Dot11PSKPassphrase");
}

void *tt__Dot11PSKPassphrase__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11PSKPassphrase__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11PSKPassphrase__ * SOAP_FMAC4 soap_in_tt__Dot11PSKPassphrase__(struct soap *soap, const char *tag, tt__Dot11PSKPassphrase__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11PSKPassphrase__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSKPassphrase__, sizeof(tt__Dot11PSKPassphrase__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11PSKPassphrase__)
			return (tt__Dot11PSKPassphrase__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11PSKPassphrase(soap, tag, &(a->tt__Dot11PSKPassphrase__::__item), "tt:Dot11PSKPassphrase"))
		return NULL;
	return a;
}

int tt__Dot11PSKPassphrase__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSKPassphrase__);
	if (this->soap_out(soap, tag?tag:"tt:Dot11PSKPassphrase", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11PSKPassphrase__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11PSKPassphrase__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11PSKPassphrase__ * SOAP_FMAC4 soap_get_tt__Dot11PSKPassphrase__(struct soap *soap, tt__Dot11PSKPassphrase__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSKPassphrase__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11PSKPassphrase__ * SOAP_FMAC2 soap_instantiate_tt__Dot11PSKPassphrase__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11PSKPassphrase__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11PSKPassphrase__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11PSKPassphrase__);
		if (size)
			*size = sizeof(tt__Dot11PSKPassphrase__);
		((tt__Dot11PSKPassphrase__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11PSKPassphrase__, n);
		if (size)
			*size = n * sizeof(tt__Dot11PSKPassphrase__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11PSKPassphrase__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11PSKPassphrase__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11PSKPassphrase__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11PSKPassphrase__ %p -> %p\n", q, p));
	*(tt__Dot11PSKPassphrase__*)p = *(tt__Dot11PSKPassphrase__*)q;
}

void tt__Dot11PSK__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11PSK(soap, &this->tt__Dot11PSK__::__item);
}


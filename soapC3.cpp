#include "soapH.h"

void tt__Dot11PSK__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Dot11PSK__::__item, SOAP_TYPE_tt__Dot11PSK);
	soap_serialize_tt__Dot11PSK(soap, &this->tt__Dot11PSK__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11PSK__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11PSK__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSK__(struct soap *soap, const char *tag, int id, const tt__Dot11PSK__ *a, const char *type)
{
	return soap_out_tt__Dot11PSK(soap, tag, id, &(a->tt__Dot11PSK__::__item), "tt:Dot11PSK");
}

void *tt__Dot11PSK__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11PSK__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11PSK__ * SOAP_FMAC4 soap_in_tt__Dot11PSK__(struct soap *soap, const char *tag, tt__Dot11PSK__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11PSK__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSK__, sizeof(tt__Dot11PSK__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11PSK__)
			return (tt__Dot11PSK__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11PSK(soap, tag, &(a->tt__Dot11PSK__::__item), "tt:Dot11PSK"))
		return NULL;
	return a;
}

int tt__Dot11PSK__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSK__);
	if (this->soap_out(soap, tag?tag:"tt:Dot11PSK", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11PSK__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11PSK__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11PSK__ * SOAP_FMAC4 soap_get_tt__Dot11PSK__(struct soap *soap, tt__Dot11PSK__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSK__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11PSK__ * SOAP_FMAC2 soap_instantiate_tt__Dot11PSK__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11PSK__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11PSK__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11PSK__);
		if (size)
			*size = sizeof(tt__Dot11PSK__);
		((tt__Dot11PSK__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11PSK__, n);
		if (size)
			*size = n * sizeof(tt__Dot11PSK__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11PSK__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11PSK__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11PSK__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11PSK__ %p -> %p\n", q, p));
	*(tt__Dot11PSK__*)p = *(tt__Dot11PSK__*)q;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSK(struct soap *soap, const char *tag, int id, const xsd__hexBinary *a, const char *type)
{
	id = soap_element_id(soap, tag, id, a, (struct soap_array*)&a->__ptr, 1, type, SOAP_TYPE_tt__Dot11PSK);
	if (id < 0)
		return soap->error;
	if (soap_element_begin_out(soap, tag, id, type))
		return soap->error;
	if (soap_puthex(soap, a->__ptr, a->__size))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_in_tt__Dot11PSK(struct soap *soap, const char *tag, xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (xsd__hexBinary *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSK, sizeof(xsd__hexBinary), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
		a->soap_default(soap);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_gethex(soap, &a->__size);
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSK, 0, sizeof(xsd__hexBinary), 0, soap_copy_tt__Dot11PSK);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11PSK(struct soap *soap, const xsd__hexBinary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_tt__Dot11PSK);
	if (soap_out_tt__Dot11PSK(soap, tag?tag:"tt:Dot11PSK", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_get_tt__Dot11PSK(struct soap *soap, xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSK(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

void tt__Dot11Cipher_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11Cipher(soap, &this->tt__Dot11Cipher_::__item);
}

void tt__Dot11Cipher_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Dot11Cipher_::__item, SOAP_TYPE_tt__Dot11Cipher);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11Cipher_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11Cipher_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Cipher_(struct soap *soap, const char *tag, int id, const tt__Dot11Cipher_ *a, const char *type)
{
	return soap_out_tt__Dot11Cipher(soap, tag, id, &(a->tt__Dot11Cipher_::__item), "tt:Dot11Cipher");
}

void *tt__Dot11Cipher_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11Cipher_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11Cipher_ * SOAP_FMAC4 soap_in_tt__Dot11Cipher_(struct soap *soap, const char *tag, tt__Dot11Cipher_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11Cipher_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Cipher_, sizeof(tt__Dot11Cipher_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11Cipher_)
			return (tt__Dot11Cipher_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11Cipher(soap, tag, &(a->tt__Dot11Cipher_::__item), "tt:Dot11Cipher"))
		return NULL;
	return a;
}

int tt__Dot11Cipher_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11Cipher_);
	if (this->soap_out(soap, tag?tag:"tt:Dot11Cipher", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11Cipher_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11Cipher_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11Cipher_ * SOAP_FMAC4 soap_get_tt__Dot11Cipher_(struct soap *soap, tt__Dot11Cipher_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Cipher_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11Cipher_ * SOAP_FMAC2 soap_instantiate_tt__Dot11Cipher_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11Cipher_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11Cipher_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11Cipher_);
		if (size)
			*size = sizeof(tt__Dot11Cipher_);
		((tt__Dot11Cipher_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11Cipher_, n);
		if (size)
			*size = n * sizeof(tt__Dot11Cipher_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11Cipher_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11Cipher_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11Cipher_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11Cipher_ %p -> %p\n", q, p));
	*(tt__Dot11Cipher_*)p = *(tt__Dot11Cipher_*)q;
}

void tt__Dot11SecurityMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SecurityMode(soap, &this->tt__Dot11SecurityMode_::__item);
}

void tt__Dot11SecurityMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11SecurityMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11SecurityMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityMode_(struct soap *soap, const char *tag, int id, const tt__Dot11SecurityMode_ *a, const char *type)
{
	return soap_out_tt__Dot11SecurityMode(soap, tag, id, &(a->tt__Dot11SecurityMode_::__item), "tt:Dot11SecurityMode");
}

void *tt__Dot11SecurityMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11SecurityMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11SecurityMode_ * SOAP_FMAC4 soap_in_tt__Dot11SecurityMode_(struct soap *soap, const char *tag, tt__Dot11SecurityMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11SecurityMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityMode_, sizeof(tt__Dot11SecurityMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11SecurityMode_)
			return (tt__Dot11SecurityMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11SecurityMode(soap, tag, &(a->tt__Dot11SecurityMode_::__item), "tt:Dot11SecurityMode"))
		return NULL;
	return a;
}

int tt__Dot11SecurityMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityMode_);
	if (this->soap_out(soap, tag?tag:"tt:Dot11SecurityMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11SecurityMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11SecurityMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11SecurityMode_ * SOAP_FMAC4 soap_get_tt__Dot11SecurityMode_(struct soap *soap, tt__Dot11SecurityMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11SecurityMode_ * SOAP_FMAC2 soap_instantiate_tt__Dot11SecurityMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11SecurityMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11SecurityMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11SecurityMode_);
		if (size)
			*size = sizeof(tt__Dot11SecurityMode_);
		((tt__Dot11SecurityMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11SecurityMode_, n);
		if (size)
			*size = n * sizeof(tt__Dot11SecurityMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11SecurityMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11SecurityMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11SecurityMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11SecurityMode_ %p -> %p\n", q, p));
	*(tt__Dot11SecurityMode_*)p = *(tt__Dot11SecurityMode_*)q;
}

void tt__Dot11StationMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11StationMode(soap, &this->tt__Dot11StationMode_::__item);
}

void tt__Dot11StationMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11StationMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11StationMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11StationMode_(struct soap *soap, const char *tag, int id, const tt__Dot11StationMode_ *a, const char *type)
{
	return soap_out_tt__Dot11StationMode(soap, tag, id, &(a->tt__Dot11StationMode_::__item), "tt:Dot11StationMode");
}

void *tt__Dot11StationMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11StationMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11StationMode_ * SOAP_FMAC4 soap_in_tt__Dot11StationMode_(struct soap *soap, const char *tag, tt__Dot11StationMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11StationMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11StationMode_, sizeof(tt__Dot11StationMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11StationMode_)
			return (tt__Dot11StationMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11StationMode(soap, tag, &(a->tt__Dot11StationMode_::__item), "tt:Dot11StationMode"))
		return NULL;
	return a;
}

int tt__Dot11StationMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11StationMode_);
	if (this->soap_out(soap, tag?tag:"tt:Dot11StationMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11StationMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11StationMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11StationMode_ * SOAP_FMAC4 soap_get_tt__Dot11StationMode_(struct soap *soap, tt__Dot11StationMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11StationMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11StationMode_ * SOAP_FMAC2 soap_instantiate_tt__Dot11StationMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11StationMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11StationMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11StationMode_);
		if (size)
			*size = sizeof(tt__Dot11StationMode_);
		((tt__Dot11StationMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11StationMode_, n);
		if (size)
			*size = n * sizeof(tt__Dot11StationMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11StationMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11StationMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11StationMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11StationMode_ %p -> %p\n", q, p));
	*(tt__Dot11StationMode_*)p = *(tt__Dot11StationMode_*)q;
}

void tt__Dot11SSIDType__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SSIDType(soap, &this->tt__Dot11SSIDType__::__item);
}

void tt__Dot11SSIDType__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &this->tt__Dot11SSIDType__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11SSIDType__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11SSIDType__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SSIDType__(struct soap *soap, const char *tag, int id, const tt__Dot11SSIDType__ *a, const char *type)
{
	return soap_out_tt__Dot11SSIDType(soap, tag, id, &(a->tt__Dot11SSIDType__::__item), "tt:Dot11SSIDType");
}

void *tt__Dot11SSIDType__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11SSIDType__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11SSIDType__ * SOAP_FMAC4 soap_in_tt__Dot11SSIDType__(struct soap *soap, const char *tag, tt__Dot11SSIDType__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Dot11SSIDType__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SSIDType__, sizeof(tt__Dot11SSIDType__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11SSIDType__)
			return (tt__Dot11SSIDType__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Dot11SSIDType(soap, tag, &(a->tt__Dot11SSIDType__::__item), "tt:Dot11SSIDType"))
		return NULL;
	return a;
}

int tt__Dot11SSIDType__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11SSIDType__);
	if (this->soap_out(soap, tag?tag:"tt:Dot11SSIDType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11SSIDType__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11SSIDType__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11SSIDType__ * SOAP_FMAC4 soap_get_tt__Dot11SSIDType__(struct soap *soap, tt__Dot11SSIDType__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SSIDType__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11SSIDType__ * SOAP_FMAC2 soap_instantiate_tt__Dot11SSIDType__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11SSIDType__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11SSIDType__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11SSIDType__);
		if (size)
			*size = sizeof(tt__Dot11SSIDType__);
		((tt__Dot11SSIDType__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11SSIDType__, n);
		if (size)
			*size = n * sizeof(tt__Dot11SSIDType__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11SSIDType__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11SSIDType__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11SSIDType__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11SSIDType__ %p -> %p\n", q, p));
	*(tt__Dot11SSIDType__*)p = *(tt__Dot11SSIDType__*)q;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SSIDType(struct soap *soap, const char *tag, int id, const xsd__hexBinary *a, const char *type)
{
	id = soap_element_id(soap, tag, id, a, (struct soap_array*)&a->__ptr, 1, type, SOAP_TYPE_tt__Dot11SSIDType);
	if (id < 0)
		return soap->error;
	if (soap_element_begin_out(soap, tag, id, type))
		return soap->error;
	if (soap_puthex(soap, a->__ptr, a->__size))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_in_tt__Dot11SSIDType(struct soap *soap, const char *tag, xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (xsd__hexBinary *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SSIDType, sizeof(xsd__hexBinary), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
		a->soap_default(soap);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_gethex(soap, &a->__size);
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SSIDType, 0, sizeof(xsd__hexBinary), 0, soap_copy_tt__Dot11SSIDType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Dot11SSIDType(struct soap *soap, const xsd__hexBinary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, (struct soap_array*)&a->__ptr, 1, tag, SOAP_TYPE_tt__Dot11SSIDType);
	if (soap_out_tt__Dot11SSIDType(soap, tag?tag:"tt:Dot11SSIDType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_get_tt__Dot11SSIDType(struct soap *soap, xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SSIDType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

void tt__DynamicDNSType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__DynamicDNSType(soap, &this->tt__DynamicDNSType_::__item);
}

void tt__DynamicDNSType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DynamicDNSType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DynamicDNSType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSType_(struct soap *soap, const char *tag, int id, const tt__DynamicDNSType_ *a, const char *type)
{
	return soap_out_tt__DynamicDNSType(soap, tag, id, &(a->tt__DynamicDNSType_::__item), "tt:DynamicDNSType");
}

void *tt__DynamicDNSType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DynamicDNSType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__DynamicDNSType_ * SOAP_FMAC4 soap_in_tt__DynamicDNSType_(struct soap *soap, const char *tag, tt__DynamicDNSType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__DynamicDNSType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSType_, sizeof(tt__DynamicDNSType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DynamicDNSType_)
			return (tt__DynamicDNSType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__DynamicDNSType(soap, tag, &(a->tt__DynamicDNSType_::__item), "tt:DynamicDNSType"))
		return NULL;
	return a;
}

int tt__DynamicDNSType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSType_);
	if (this->soap_out(soap, tag?tag:"tt:DynamicDNSType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DynamicDNSType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DynamicDNSType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__DynamicDNSType_ * SOAP_FMAC4 soap_get_tt__DynamicDNSType_(struct soap *soap, tt__DynamicDNSType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DynamicDNSType_ * SOAP_FMAC2 soap_instantiate_tt__DynamicDNSType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DynamicDNSType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DynamicDNSType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DynamicDNSType_);
		if (size)
			*size = sizeof(tt__DynamicDNSType_);
		((tt__DynamicDNSType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DynamicDNSType_, n);
		if (size)
			*size = n * sizeof(tt__DynamicDNSType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DynamicDNSType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DynamicDNSType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DynamicDNSType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DynamicDNSType_ %p -> %p\n", q, p));
	*(tt__DynamicDNSType_*)p = *(tt__DynamicDNSType_*)q;
}

void tt__IPAddressFilterType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPAddressFilterType(soap, &this->tt__IPAddressFilterType_::__item);
}

void tt__IPAddressFilterType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPAddressFilterType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPAddressFilterType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilterType_(struct soap *soap, const char *tag, int id, const tt__IPAddressFilterType_ *a, const char *type)
{
	return soap_out_tt__IPAddressFilterType(soap, tag, id, &(a->tt__IPAddressFilterType_::__item), "tt:IPAddressFilterType");
}

void *tt__IPAddressFilterType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPAddressFilterType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPAddressFilterType_ * SOAP_FMAC4 soap_in_tt__IPAddressFilterType_(struct soap *soap, const char *tag, tt__IPAddressFilterType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IPAddressFilterType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilterType_, sizeof(tt__IPAddressFilterType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPAddressFilterType_)
			return (tt__IPAddressFilterType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IPAddressFilterType(soap, tag, &(a->tt__IPAddressFilterType_::__item), "tt:IPAddressFilterType"))
		return NULL;
	return a;
}

int tt__IPAddressFilterType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilterType_);
	if (this->soap_out(soap, tag?tag:"tt:IPAddressFilterType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPAddressFilterType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPAddressFilterType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPAddressFilterType_ * SOAP_FMAC4 soap_get_tt__IPAddressFilterType_(struct soap *soap, tt__IPAddressFilterType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilterType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPAddressFilterType_ * SOAP_FMAC2 soap_instantiate_tt__IPAddressFilterType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPAddressFilterType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPAddressFilterType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPAddressFilterType_);
		if (size)
			*size = sizeof(tt__IPAddressFilterType_);
		((tt__IPAddressFilterType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPAddressFilterType_, n);
		if (size)
			*size = n * sizeof(tt__IPAddressFilterType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPAddressFilterType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPAddressFilterType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPAddressFilterType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPAddressFilterType_ %p -> %p\n", q, p));
	*(tt__IPAddressFilterType_*)p = *(tt__IPAddressFilterType_*)q;
}

void tt__Domain__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Domain(soap, &this->tt__Domain__::__item);
}

void tt__Domain__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Domain(soap, &this->tt__Domain__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Domain__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Domain__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Domain__(struct soap *soap, const char *tag, int id, const tt__Domain__ *a, const char *type)
{
	return soap_out_tt__Domain(soap, tag, id, &(a->tt__Domain__::__item), "tt:Domain");
}

void *tt__Domain__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Domain__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Domain__ * SOAP_FMAC4 soap_in_tt__Domain__(struct soap *soap, const char *tag, tt__Domain__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Domain__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Domain__, sizeof(tt__Domain__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Domain__)
			return (tt__Domain__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Domain(soap, tag, &(a->tt__Domain__::__item), "tt:Domain"))
		return NULL;
	return a;
}

int tt__Domain__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Domain__);
	if (this->soap_out(soap, tag?tag:"tt:Domain", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Domain__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Domain__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Domain__ * SOAP_FMAC4 soap_get_tt__Domain__(struct soap *soap, tt__Domain__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Domain__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Domain__ * SOAP_FMAC2 soap_instantiate_tt__Domain__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Domain__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Domain__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Domain__);
		if (size)
			*size = sizeof(tt__Domain__);
		((tt__Domain__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Domain__, n);
		if (size)
			*size = n * sizeof(tt__Domain__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Domain__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Domain__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Domain__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Domain__ %p -> %p\n", q, p));
	*(tt__Domain__*)p = *(tt__Domain__*)q;
}

void tt__DNSName__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__DNSName(soap, &this->tt__DNSName__::__item);
}

void tt__DNSName__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__DNSName(soap, &this->tt__DNSName__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DNSName__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DNSName__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DNSName__(struct soap *soap, const char *tag, int id, const tt__DNSName__ *a, const char *type)
{
	return soap_out_tt__DNSName(soap, tag, id, &(a->tt__DNSName__::__item), "tt:DNSName");
}

void *tt__DNSName__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DNSName__(soap, tag, this, type);
}

SOAP_FMAC3 tt__DNSName__ * SOAP_FMAC4 soap_in_tt__DNSName__(struct soap *soap, const char *tag, tt__DNSName__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__DNSName__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DNSName__, sizeof(tt__DNSName__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DNSName__)
			return (tt__DNSName__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__DNSName(soap, tag, &(a->tt__DNSName__::__item), "tt:DNSName"))
		return NULL;
	return a;
}

int tt__DNSName__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DNSName__);
	if (this->soap_out(soap, tag?tag:"tt:DNSName", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DNSName__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DNSName__(soap, this, tag, type);
}

SOAP_FMAC3 tt__DNSName__ * SOAP_FMAC4 soap_get_tt__DNSName__(struct soap *soap, tt__DNSName__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DNSName__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DNSName__ * SOAP_FMAC2 soap_instantiate_tt__DNSName__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DNSName__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DNSName__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DNSName__);
		if (size)
			*size = sizeof(tt__DNSName__);
		((tt__DNSName__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DNSName__, n);
		if (size)
			*size = n * sizeof(tt__DNSName__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DNSName__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DNSName__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DNSName__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DNSName__ %p -> %p\n", q, p));
	*(tt__DNSName__*)p = *(tt__DNSName__*)q;
}

void tt__IPType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPType(soap, &this->tt__IPType_::__item);
}

void tt__IPType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPType_(struct soap *soap, const char *tag, int id, const tt__IPType_ *a, const char *type)
{
	return soap_out_tt__IPType(soap, tag, id, &(a->tt__IPType_::__item), "tt:IPType");
}

void *tt__IPType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPType_ * SOAP_FMAC4 soap_in_tt__IPType_(struct soap *soap, const char *tag, tt__IPType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IPType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPType_, sizeof(tt__IPType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPType_)
			return (tt__IPType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IPType(soap, tag, &(a->tt__IPType_::__item), "tt:IPType"))
		return NULL;
	return a;
}

int tt__IPType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPType_);
	if (this->soap_out(soap, tag?tag:"tt:IPType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPType_ * SOAP_FMAC4 soap_get_tt__IPType_(struct soap *soap, tt__IPType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPType_ * SOAP_FMAC2 soap_instantiate_tt__IPType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPType_);
		if (size)
			*size = sizeof(tt__IPType_);
		((tt__IPType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPType_, n);
		if (size)
			*size = n * sizeof(tt__IPType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPType_ %p -> %p\n", q, p));
	*(tt__IPType_*)p = *(tt__IPType_*)q;
}

void tt__HwAddress__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__HwAddress(soap, &this->tt__HwAddress__::__item);
}

void tt__HwAddress__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__HwAddress(soap, &this->tt__HwAddress__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__HwAddress__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__HwAddress__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__HwAddress__(struct soap *soap, const char *tag, int id, const tt__HwAddress__ *a, const char *type)
{
	return soap_out_tt__HwAddress(soap, tag, id, &(a->tt__HwAddress__::__item), "tt:HwAddress");
}

void *tt__HwAddress__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__HwAddress__(soap, tag, this, type);
}

SOAP_FMAC3 tt__HwAddress__ * SOAP_FMAC4 soap_in_tt__HwAddress__(struct soap *soap, const char *tag, tt__HwAddress__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__HwAddress__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__HwAddress__, sizeof(tt__HwAddress__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__HwAddress__)
			return (tt__HwAddress__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__HwAddress(soap, tag, &(a->tt__HwAddress__::__item), "tt:HwAddress"))
		return NULL;
	return a;
}

int tt__HwAddress__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__HwAddress__);
	if (this->soap_out(soap, tag?tag:"tt:HwAddress", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__HwAddress__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__HwAddress__(soap, this, tag, type);
}

SOAP_FMAC3 tt__HwAddress__ * SOAP_FMAC4 soap_get_tt__HwAddress__(struct soap *soap, tt__HwAddress__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__HwAddress__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__HwAddress__ * SOAP_FMAC2 soap_instantiate_tt__HwAddress__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__HwAddress__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__HwAddress__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__HwAddress__);
		if (size)
			*size = sizeof(tt__HwAddress__);
		((tt__HwAddress__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__HwAddress__, n);
		if (size)
			*size = n * sizeof(tt__HwAddress__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__HwAddress__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__HwAddress__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__HwAddress__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__HwAddress__ %p -> %p\n", q, p));
	*(tt__HwAddress__*)p = *(tt__HwAddress__*)q;
}

void tt__IPv6Address__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPv6Address(soap, &this->tt__IPv6Address__::__item);
}

void tt__IPv6Address__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv6Address(soap, &this->tt__IPv6Address__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6Address__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6Address__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6Address__(struct soap *soap, const char *tag, int id, const tt__IPv6Address__ *a, const char *type)
{
	return soap_out_tt__IPv6Address(soap, tag, id, &(a->tt__IPv6Address__::__item), "tt:IPv6Address");
}

void *tt__IPv6Address__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6Address__(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6Address__ * SOAP_FMAC4 soap_in_tt__IPv6Address__(struct soap *soap, const char *tag, tt__IPv6Address__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IPv6Address__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6Address__, sizeof(tt__IPv6Address__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6Address__)
			return (tt__IPv6Address__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IPv6Address(soap, tag, &(a->tt__IPv6Address__::__item), "tt:IPv6Address"))
		return NULL;
	return a;
}

int tt__IPv6Address__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6Address__);
	if (this->soap_out(soap, tag?tag:"tt:IPv6Address", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6Address__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6Address__(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6Address__ * SOAP_FMAC4 soap_get_tt__IPv6Address__(struct soap *soap, tt__IPv6Address__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6Address__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6Address__ * SOAP_FMAC2 soap_instantiate_tt__IPv6Address__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6Address__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6Address__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6Address__);
		if (size)
			*size = sizeof(tt__IPv6Address__);
		((tt__IPv6Address__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6Address__, n);
		if (size)
			*size = n * sizeof(tt__IPv6Address__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6Address__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6Address__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6Address__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6Address__ %p -> %p\n", q, p));
	*(tt__IPv6Address__*)p = *(tt__IPv6Address__*)q;
}

void tt__IPv4Address__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPv4Address(soap, &this->tt__IPv4Address__::__item);
}

void tt__IPv4Address__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &this->tt__IPv4Address__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv4Address__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv4Address__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4Address__(struct soap *soap, const char *tag, int id, const tt__IPv4Address__ *a, const char *type)
{
	return soap_out_tt__IPv4Address(soap, tag, id, &(a->tt__IPv4Address__::__item), "tt:IPv4Address");
}

void *tt__IPv4Address__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv4Address__(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv4Address__ * SOAP_FMAC4 soap_in_tt__IPv4Address__(struct soap *soap, const char *tag, tt__IPv4Address__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IPv4Address__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4Address__, sizeof(tt__IPv4Address__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv4Address__)
			return (tt__IPv4Address__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IPv4Address(soap, tag, &(a->tt__IPv4Address__::__item), "tt:IPv4Address"))
		return NULL;
	return a;
}

int tt__IPv4Address__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv4Address__);
	if (this->soap_out(soap, tag?tag:"tt:IPv4Address", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv4Address__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv4Address__(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv4Address__ * SOAP_FMAC4 soap_get_tt__IPv4Address__(struct soap *soap, tt__IPv4Address__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4Address__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv4Address__ * SOAP_FMAC2 soap_instantiate_tt__IPv4Address__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv4Address__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv4Address__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv4Address__);
		if (size)
			*size = sizeof(tt__IPv4Address__);
		((tt__IPv4Address__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv4Address__, n);
		if (size)
			*size = n * sizeof(tt__IPv4Address__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv4Address__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv4Address__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv4Address__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv4Address__ %p -> %p\n", q, p));
	*(tt__IPv4Address__*)p = *(tt__IPv4Address__*)q;
}

void tt__NetworkHostType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__NetworkHostType(soap, &this->tt__NetworkHostType_::__item);
}

void tt__NetworkHostType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkHostType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkHostType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHostType_(struct soap *soap, const char *tag, int id, const tt__NetworkHostType_ *a, const char *type)
{
	return soap_out_tt__NetworkHostType(soap, tag, id, &(a->tt__NetworkHostType_::__item), "tt:NetworkHostType");
}

void *tt__NetworkHostType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkHostType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkHostType_ * SOAP_FMAC4 soap_in_tt__NetworkHostType_(struct soap *soap, const char *tag, tt__NetworkHostType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__NetworkHostType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHostType_, sizeof(tt__NetworkHostType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkHostType_)
			return (tt__NetworkHostType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__NetworkHostType(soap, tag, &(a->tt__NetworkHostType_::__item), "tt:NetworkHostType"))
		return NULL;
	return a;
}

int tt__NetworkHostType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkHostType_);
	if (this->soap_out(soap, tag?tag:"tt:NetworkHostType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkHostType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkHostType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkHostType_ * SOAP_FMAC4 soap_get_tt__NetworkHostType_(struct soap *soap, tt__NetworkHostType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHostType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkHostType_ * SOAP_FMAC2 soap_instantiate_tt__NetworkHostType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkHostType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkHostType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkHostType_);
		if (size)
			*size = sizeof(tt__NetworkHostType_);
		((tt__NetworkHostType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkHostType_, n);
		if (size)
			*size = n * sizeof(tt__NetworkHostType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkHostType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkHostType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkHostType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkHostType_ %p -> %p\n", q, p));
	*(tt__NetworkHostType_*)p = *(tt__NetworkHostType_*)q;
}

void tt__NetworkProtocolType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__NetworkProtocolType(soap, &this->tt__NetworkProtocolType_::__item);
}

void tt__NetworkProtocolType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkProtocolType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkProtocolType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocolType_(struct soap *soap, const char *tag, int id, const tt__NetworkProtocolType_ *a, const char *type)
{
	return soap_out_tt__NetworkProtocolType(soap, tag, id, &(a->tt__NetworkProtocolType_::__item), "tt:NetworkProtocolType");
}

void *tt__NetworkProtocolType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkProtocolType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkProtocolType_ * SOAP_FMAC4 soap_in_tt__NetworkProtocolType_(struct soap *soap, const char *tag, tt__NetworkProtocolType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__NetworkProtocolType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocolType_, sizeof(tt__NetworkProtocolType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkProtocolType_)
			return (tt__NetworkProtocolType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__NetworkProtocolType(soap, tag, &(a->tt__NetworkProtocolType_::__item), "tt:NetworkProtocolType"))
		return NULL;
	return a;
}

int tt__NetworkProtocolType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocolType_);
	if (this->soap_out(soap, tag?tag:"tt:NetworkProtocolType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkProtocolType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkProtocolType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkProtocolType_ * SOAP_FMAC4 soap_get_tt__NetworkProtocolType_(struct soap *soap, tt__NetworkProtocolType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocolType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkProtocolType_ * SOAP_FMAC2 soap_instantiate_tt__NetworkProtocolType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkProtocolType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkProtocolType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkProtocolType_);
		if (size)
			*size = sizeof(tt__NetworkProtocolType_);
		((tt__NetworkProtocolType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkProtocolType_, n);
		if (size)
			*size = n * sizeof(tt__NetworkProtocolType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkProtocolType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkProtocolType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkProtocolType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkProtocolType_ %p -> %p\n", q, p));
	*(tt__NetworkProtocolType_*)p = *(tt__NetworkProtocolType_*)q;
}

void tt__IPv6DHCPConfiguration_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPv6DHCPConfiguration(soap, &this->tt__IPv6DHCPConfiguration_::__item);
}

void tt__IPv6DHCPConfiguration_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__IPv6DHCPConfiguration_::__item, SOAP_TYPE_tt__IPv6DHCPConfiguration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6DHCPConfiguration_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6DHCPConfiguration_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6DHCPConfiguration_(struct soap *soap, const char *tag, int id, const tt__IPv6DHCPConfiguration_ *a, const char *type)
{
	return soap_out_tt__IPv6DHCPConfiguration(soap, tag, id, &(a->tt__IPv6DHCPConfiguration_::__item), "tt:IPv6DHCPConfiguration");
}

void *tt__IPv6DHCPConfiguration_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6DHCPConfiguration_(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6DHCPConfiguration_ * SOAP_FMAC4 soap_in_tt__IPv6DHCPConfiguration_(struct soap *soap, const char *tag, tt__IPv6DHCPConfiguration_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IPv6DHCPConfiguration_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6DHCPConfiguration_, sizeof(tt__IPv6DHCPConfiguration_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6DHCPConfiguration_)
			return (tt__IPv6DHCPConfiguration_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IPv6DHCPConfiguration(soap, tag, &(a->tt__IPv6DHCPConfiguration_::__item), "tt:IPv6DHCPConfiguration"))
		return NULL;
	return a;
}

int tt__IPv6DHCPConfiguration_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6DHCPConfiguration_);
	if (this->soap_out(soap, tag?tag:"tt:IPv6DHCPConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6DHCPConfiguration_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6DHCPConfiguration_(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6DHCPConfiguration_ * SOAP_FMAC4 soap_get_tt__IPv6DHCPConfiguration_(struct soap *soap, tt__IPv6DHCPConfiguration_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6DHCPConfiguration_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6DHCPConfiguration_ * SOAP_FMAC2 soap_instantiate_tt__IPv6DHCPConfiguration_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6DHCPConfiguration_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6DHCPConfiguration_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6DHCPConfiguration_);
		if (size)
			*size = sizeof(tt__IPv6DHCPConfiguration_);
		((tt__IPv6DHCPConfiguration_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6DHCPConfiguration_, n);
		if (size)
			*size = n * sizeof(tt__IPv6DHCPConfiguration_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6DHCPConfiguration_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6DHCPConfiguration_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6DHCPConfiguration_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6DHCPConfiguration_ %p -> %p\n", q, p));
	*(tt__IPv6DHCPConfiguration_*)p = *(tt__IPv6DHCPConfiguration_*)q;
}

void tt__IANA_IfTypes__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IANA_IfTypes(soap, &this->tt__IANA_IfTypes__::__item);
}

void tt__IANA_IfTypes__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IANA_IfTypes__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IANA_IfTypes__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IANA_IfTypes__(struct soap *soap, const char *tag, int id, const tt__IANA_IfTypes__ *a, const char *type)
{
	return soap_out_tt__IANA_IfTypes(soap, tag, id, &(a->tt__IANA_IfTypes__::__item), "tt:IANA-IfTypes");
}

void *tt__IANA_IfTypes__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IANA_IfTypes__(soap, tag, this, type);
}

SOAP_FMAC3 tt__IANA_IfTypes__ * SOAP_FMAC4 soap_in_tt__IANA_IfTypes__(struct soap *soap, const char *tag, tt__IANA_IfTypes__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__IANA_IfTypes__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IANA_IfTypes__, sizeof(tt__IANA_IfTypes__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IANA_IfTypes__)
			return (tt__IANA_IfTypes__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__IANA_IfTypes(soap, tag, &(a->tt__IANA_IfTypes__::__item), "tt:IANA-IfTypes"))
		return NULL;
	return a;
}

int tt__IANA_IfTypes__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IANA_IfTypes__);
	if (this->soap_out(soap, tag?tag:"tt:IANA-IfTypes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IANA_IfTypes__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IANA_IfTypes__(soap, this, tag, type);
}

SOAP_FMAC3 tt__IANA_IfTypes__ * SOAP_FMAC4 soap_get_tt__IANA_IfTypes__(struct soap *soap, tt__IANA_IfTypes__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IANA_IfTypes__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IANA_IfTypes__ * SOAP_FMAC2 soap_instantiate_tt__IANA_IfTypes__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IANA_IfTypes__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IANA_IfTypes__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IANA_IfTypes__);
		if (size)
			*size = sizeof(tt__IANA_IfTypes__);
		((tt__IANA_IfTypes__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IANA_IfTypes__, n);
		if (size)
			*size = n * sizeof(tt__IANA_IfTypes__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IANA_IfTypes__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IANA_IfTypes__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IANA_IfTypes__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IANA_IfTypes__ %p -> %p\n", q, p));
	*(tt__IANA_IfTypes__*)p = *(tt__IANA_IfTypes__*)q;
}

void tt__Duplex_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Duplex(soap, &this->tt__Duplex_::__item);
}

void tt__Duplex_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Duplex_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Duplex_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Duplex_(struct soap *soap, const char *tag, int id, const tt__Duplex_ *a, const char *type)
{
	return soap_out_tt__Duplex(soap, tag, id, &(a->tt__Duplex_::__item), "tt:Duplex");
}

void *tt__Duplex_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Duplex_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Duplex_ * SOAP_FMAC4 soap_in_tt__Duplex_(struct soap *soap, const char *tag, tt__Duplex_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Duplex_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Duplex_, sizeof(tt__Duplex_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Duplex_)
			return (tt__Duplex_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Duplex(soap, tag, &(a->tt__Duplex_::__item), "tt:Duplex"))
		return NULL;
	return a;
}

int tt__Duplex_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Duplex_);
	if (this->soap_out(soap, tag?tag:"tt:Duplex", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Duplex_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Duplex_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Duplex_ * SOAP_FMAC4 soap_get_tt__Duplex_(struct soap *soap, tt__Duplex_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Duplex_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Duplex_ * SOAP_FMAC2 soap_instantiate_tt__Duplex_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Duplex_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Duplex_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Duplex_);
		if (size)
			*size = sizeof(tt__Duplex_);
		((tt__Duplex_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Duplex_, n);
		if (size)
			*size = n * sizeof(tt__Duplex_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Duplex_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Duplex_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Duplex_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Duplex_ %p -> %p\n", q, p));
	*(tt__Duplex_*)p = *(tt__Duplex_*)q;
}

void tt__NetworkInterfaceConfigPriority__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__NetworkInterfaceConfigPriority(soap, &this->tt__NetworkInterfaceConfigPriority__::__item);
}

void tt__NetworkInterfaceConfigPriority__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__NetworkInterfaceConfigPriority(soap, &this->tt__NetworkInterfaceConfigPriority__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceConfigPriority__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceConfigPriority__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceConfigPriority__(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceConfigPriority__ *a, const char *type)
{
	return soap_out_tt__NetworkInterfaceConfigPriority(soap, tag, id, &(a->tt__NetworkInterfaceConfigPriority__::__item), "tt:NetworkInterfaceConfigPriority");
}

void *tt__NetworkInterfaceConfigPriority__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceConfigPriority__(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceConfigPriority__ * SOAP_FMAC4 soap_in_tt__NetworkInterfaceConfigPriority__(struct soap *soap, const char *tag, tt__NetworkInterfaceConfigPriority__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__NetworkInterfaceConfigPriority__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceConfigPriority__, sizeof(tt__NetworkInterfaceConfigPriority__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceConfigPriority__)
			return (tt__NetworkInterfaceConfigPriority__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__NetworkInterfaceConfigPriority(soap, tag, &(a->tt__NetworkInterfaceConfigPriority__::__item), "tt:NetworkInterfaceConfigPriority"))
		return NULL;
	return a;
}

int tt__NetworkInterfaceConfigPriority__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceConfigPriority__);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceConfigPriority", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceConfigPriority__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceConfigPriority__(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceConfigPriority__ * SOAP_FMAC4 soap_get_tt__NetworkInterfaceConfigPriority__(struct soap *soap, tt__NetworkInterfaceConfigPriority__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceConfigPriority__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceConfigPriority__ * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceConfigPriority__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceConfigPriority__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceConfigPriority__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceConfigPriority__);
		if (size)
			*size = sizeof(tt__NetworkInterfaceConfigPriority__);
		((tt__NetworkInterfaceConfigPriority__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceConfigPriority__, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceConfigPriority__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceConfigPriority__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceConfigPriority__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceConfigPriority__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceConfigPriority__ %p -> %p\n", q, p));
	*(tt__NetworkInterfaceConfigPriority__*)p = *(tt__NetworkInterfaceConfigPriority__*)q;
}

void tt__DiscoveryMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__DiscoveryMode(soap, &this->tt__DiscoveryMode_::__item);
}

void tt__DiscoveryMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DiscoveryMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DiscoveryMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DiscoveryMode_(struct soap *soap, const char *tag, int id, const tt__DiscoveryMode_ *a, const char *type)
{
	return soap_out_tt__DiscoveryMode(soap, tag, id, &(a->tt__DiscoveryMode_::__item), "tt:DiscoveryMode");
}

void *tt__DiscoveryMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DiscoveryMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__DiscoveryMode_ * SOAP_FMAC4 soap_in_tt__DiscoveryMode_(struct soap *soap, const char *tag, tt__DiscoveryMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__DiscoveryMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DiscoveryMode_, sizeof(tt__DiscoveryMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DiscoveryMode_)
			return (tt__DiscoveryMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__DiscoveryMode(soap, tag, &(a->tt__DiscoveryMode_::__item), "tt:DiscoveryMode"))
		return NULL;
	return a;
}

int tt__DiscoveryMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DiscoveryMode_);
	if (this->soap_out(soap, tag?tag:"tt:DiscoveryMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DiscoveryMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DiscoveryMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__DiscoveryMode_ * SOAP_FMAC4 soap_get_tt__DiscoveryMode_(struct soap *soap, tt__DiscoveryMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DiscoveryMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DiscoveryMode_ * SOAP_FMAC2 soap_instantiate_tt__DiscoveryMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DiscoveryMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DiscoveryMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DiscoveryMode_);
		if (size)
			*size = sizeof(tt__DiscoveryMode_);
		((tt__DiscoveryMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DiscoveryMode_, n);
		if (size)
			*size = n * sizeof(tt__DiscoveryMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DiscoveryMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DiscoveryMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DiscoveryMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DiscoveryMode_ %p -> %p\n", q, p));
	*(tt__DiscoveryMode_*)p = *(tt__DiscoveryMode_*)q;
}

void tt__ScopeDefinition_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ScopeDefinition(soap, &this->tt__ScopeDefinition_::__item);
}

void tt__ScopeDefinition_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ScopeDefinition_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ScopeDefinition_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ScopeDefinition_(struct soap *soap, const char *tag, int id, const tt__ScopeDefinition_ *a, const char *type)
{
	return soap_out_tt__ScopeDefinition(soap, tag, id, &(a->tt__ScopeDefinition_::__item), "tt:ScopeDefinition");
}

void *tt__ScopeDefinition_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ScopeDefinition_(soap, tag, this, type);
}

SOAP_FMAC3 tt__ScopeDefinition_ * SOAP_FMAC4 soap_in_tt__ScopeDefinition_(struct soap *soap, const char *tag, tt__ScopeDefinition_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ScopeDefinition_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ScopeDefinition_, sizeof(tt__ScopeDefinition_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ScopeDefinition_)
			return (tt__ScopeDefinition_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ScopeDefinition(soap, tag, &(a->tt__ScopeDefinition_::__item), "tt:ScopeDefinition"))
		return NULL;
	return a;
}

int tt__ScopeDefinition_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ScopeDefinition_);
	if (this->soap_out(soap, tag?tag:"tt:ScopeDefinition", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ScopeDefinition_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ScopeDefinition_(soap, this, tag, type);
}

SOAP_FMAC3 tt__ScopeDefinition_ * SOAP_FMAC4 soap_get_tt__ScopeDefinition_(struct soap *soap, tt__ScopeDefinition_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ScopeDefinition_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ScopeDefinition_ * SOAP_FMAC2 soap_instantiate_tt__ScopeDefinition_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ScopeDefinition_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ScopeDefinition_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ScopeDefinition_);
		if (size)
			*size = sizeof(tt__ScopeDefinition_);
		((tt__ScopeDefinition_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ScopeDefinition_, n);
		if (size)
			*size = n * sizeof(tt__ScopeDefinition_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ScopeDefinition_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ScopeDefinition_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ScopeDefinition_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ScopeDefinition_ %p -> %p\n", q, p));
	*(tt__ScopeDefinition_*)p = *(tt__ScopeDefinition_*)q;
}

void tt__TransportProtocol_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TransportProtocol(soap, &this->tt__TransportProtocol_::__item);
}

void tt__TransportProtocol_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TransportProtocol_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TransportProtocol_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TransportProtocol_(struct soap *soap, const char *tag, int id, const tt__TransportProtocol_ *a, const char *type)
{
	return soap_out_tt__TransportProtocol(soap, tag, id, &(a->tt__TransportProtocol_::__item), "tt:TransportProtocol");
}

void *tt__TransportProtocol_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TransportProtocol_(soap, tag, this, type);
}

SOAP_FMAC3 tt__TransportProtocol_ * SOAP_FMAC4 soap_in_tt__TransportProtocol_(struct soap *soap, const char *tag, tt__TransportProtocol_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__TransportProtocol_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TransportProtocol_, sizeof(tt__TransportProtocol_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TransportProtocol_)
			return (tt__TransportProtocol_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__TransportProtocol(soap, tag, &(a->tt__TransportProtocol_::__item), "tt:TransportProtocol"))
		return NULL;
	return a;
}

int tt__TransportProtocol_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TransportProtocol_);
	if (this->soap_out(soap, tag?tag:"tt:TransportProtocol", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TransportProtocol_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TransportProtocol_(soap, this, tag, type);
}

SOAP_FMAC3 tt__TransportProtocol_ * SOAP_FMAC4 soap_get_tt__TransportProtocol_(struct soap *soap, tt__TransportProtocol_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TransportProtocol_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TransportProtocol_ * SOAP_FMAC2 soap_instantiate_tt__TransportProtocol_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TransportProtocol_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TransportProtocol_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TransportProtocol_);
		if (size)
			*size = sizeof(tt__TransportProtocol_);
		((tt__TransportProtocol_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TransportProtocol_, n);
		if (size)
			*size = n * sizeof(tt__TransportProtocol_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TransportProtocol_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TransportProtocol_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TransportProtocol_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TransportProtocol_ %p -> %p\n", q, p));
	*(tt__TransportProtocol_*)p = *(tt__TransportProtocol_*)q;
}

void tt__StreamType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__StreamType(soap, &this->tt__StreamType_::__item);
}

void tt__StreamType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__StreamType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__StreamType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__StreamType_(struct soap *soap, const char *tag, int id, const tt__StreamType_ *a, const char *type)
{
	return soap_out_tt__StreamType(soap, tag, id, &(a->tt__StreamType_::__item), "tt:StreamType");
}

void *tt__StreamType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__StreamType_(soap, tag, this, type);
}

SOAP_FMAC3 tt__StreamType_ * SOAP_FMAC4 soap_in_tt__StreamType_(struct soap *soap, const char *tag, tt__StreamType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__StreamType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__StreamType_, sizeof(tt__StreamType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__StreamType_)
			return (tt__StreamType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__StreamType(soap, tag, &(a->tt__StreamType_::__item), "tt:StreamType"))
		return NULL;
	return a;
}

int tt__StreamType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__StreamType_);
	if (this->soap_out(soap, tag?tag:"tt:StreamType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__StreamType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__StreamType_(soap, this, tag, type);
}

SOAP_FMAC3 tt__StreamType_ * SOAP_FMAC4 soap_get_tt__StreamType_(struct soap *soap, tt__StreamType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__StreamType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__StreamType_ * SOAP_FMAC2 soap_instantiate_tt__StreamType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__StreamType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__StreamType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__StreamType_);
		if (size)
			*size = sizeof(tt__StreamType_);
		((tt__StreamType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__StreamType_, n);
		if (size)
			*size = n * sizeof(tt__StreamType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__StreamType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__StreamType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__StreamType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__StreamType_ %p -> %p\n", q, p));
	*(tt__StreamType_*)p = *(tt__StreamType_*)q;
}

void tt__AudioEncoding_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__AudioEncoding(soap, &this->tt__AudioEncoding_::__item);
}

void tt__AudioEncoding_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioEncoding_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioEncoding_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioEncoding_(struct soap *soap, const char *tag, int id, const tt__AudioEncoding_ *a, const char *type)
{
	return soap_out_tt__AudioEncoding(soap, tag, id, &(a->tt__AudioEncoding_::__item), "tt:AudioEncoding");
}

void *tt__AudioEncoding_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioEncoding_(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioEncoding_ * SOAP_FMAC4 soap_in_tt__AudioEncoding_(struct soap *soap, const char *tag, tt__AudioEncoding_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__AudioEncoding_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioEncoding_, sizeof(tt__AudioEncoding_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioEncoding_)
			return (tt__AudioEncoding_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__AudioEncoding(soap, tag, &(a->tt__AudioEncoding_::__item), "tt:AudioEncoding"))
		return NULL;
	return a;
}

int tt__AudioEncoding_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioEncoding_);
	if (this->soap_out(soap, tag?tag:"tt:AudioEncoding", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioEncoding_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioEncoding_(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioEncoding_ * SOAP_FMAC4 soap_get_tt__AudioEncoding_(struct soap *soap, tt__AudioEncoding_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioEncoding_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioEncoding_ * SOAP_FMAC2 soap_instantiate_tt__AudioEncoding_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioEncoding_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioEncoding_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioEncoding_);
		if (size)
			*size = sizeof(tt__AudioEncoding_);
		((tt__AudioEncoding_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioEncoding_, n);
		if (size)
			*size = n * sizeof(tt__AudioEncoding_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioEncoding_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioEncoding_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioEncoding_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioEncoding_ %p -> %p\n", q, p));
	*(tt__AudioEncoding_*)p = *(tt__AudioEncoding_*)q;
}

void tt__H264Profile_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__H264Profile(soap, &this->tt__H264Profile_::__item);
}

void tt__H264Profile_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__H264Profile_::__item, SOAP_TYPE_tt__H264Profile);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__H264Profile_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__H264Profile_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264Profile_(struct soap *soap, const char *tag, int id, const tt__H264Profile_ *a, const char *type)
{
	return soap_out_tt__H264Profile(soap, tag, id, &(a->tt__H264Profile_::__item), "tt:H264Profile");
}

void *tt__H264Profile_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__H264Profile_(soap, tag, this, type);
}

SOAP_FMAC3 tt__H264Profile_ * SOAP_FMAC4 soap_in_tt__H264Profile_(struct soap *soap, const char *tag, tt__H264Profile_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__H264Profile_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264Profile_, sizeof(tt__H264Profile_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__H264Profile_)
			return (tt__H264Profile_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__H264Profile(soap, tag, &(a->tt__H264Profile_::__item), "tt:H264Profile"))
		return NULL;
	return a;
}

int tt__H264Profile_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__H264Profile_);
	if (this->soap_out(soap, tag?tag:"tt:H264Profile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__H264Profile_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__H264Profile_(soap, this, tag, type);
}

SOAP_FMAC3 tt__H264Profile_ * SOAP_FMAC4 soap_get_tt__H264Profile_(struct soap *soap, tt__H264Profile_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264Profile_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__H264Profile_ * SOAP_FMAC2 soap_instantiate_tt__H264Profile_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__H264Profile_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__H264Profile_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__H264Profile_);
		if (size)
			*size = sizeof(tt__H264Profile_);
		((tt__H264Profile_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__H264Profile_, n);
		if (size)
			*size = n * sizeof(tt__H264Profile_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__H264Profile_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__H264Profile_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__H264Profile_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__H264Profile_ %p -> %p\n", q, p));
	*(tt__H264Profile_*)p = *(tt__H264Profile_*)q;
}

void tt__Mpeg4Profile_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Mpeg4Profile(soap, &this->tt__Mpeg4Profile_::__item);
}

void tt__Mpeg4Profile_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Mpeg4Profile_::__item, SOAP_TYPE_tt__Mpeg4Profile);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Mpeg4Profile_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Mpeg4Profile_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4Profile_(struct soap *soap, const char *tag, int id, const tt__Mpeg4Profile_ *a, const char *type)
{
	return soap_out_tt__Mpeg4Profile(soap, tag, id, &(a->tt__Mpeg4Profile_::__item), "tt:Mpeg4Profile");
}

void *tt__Mpeg4Profile_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Mpeg4Profile_(soap, tag, this, type);
}

SOAP_FMAC3 tt__Mpeg4Profile_ * SOAP_FMAC4 soap_in_tt__Mpeg4Profile_(struct soap *soap, const char *tag, tt__Mpeg4Profile_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Mpeg4Profile_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4Profile_, sizeof(tt__Mpeg4Profile_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Mpeg4Profile_)
			return (tt__Mpeg4Profile_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Mpeg4Profile(soap, tag, &(a->tt__Mpeg4Profile_::__item), "tt:Mpeg4Profile"))
		return NULL;
	return a;
}

int tt__Mpeg4Profile_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4Profile_);
	if (this->soap_out(soap, tag?tag:"tt:Mpeg4Profile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Mpeg4Profile_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Mpeg4Profile_(soap, this, tag, type);
}

SOAP_FMAC3 tt__Mpeg4Profile_ * SOAP_FMAC4 soap_get_tt__Mpeg4Profile_(struct soap *soap, tt__Mpeg4Profile_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4Profile_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Mpeg4Profile_ * SOAP_FMAC2 soap_instantiate_tt__Mpeg4Profile_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Mpeg4Profile_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Mpeg4Profile_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Mpeg4Profile_);
		if (size)
			*size = sizeof(tt__Mpeg4Profile_);
		((tt__Mpeg4Profile_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Mpeg4Profile_, n);
		if (size)
			*size = n * sizeof(tt__Mpeg4Profile_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Mpeg4Profile_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Mpeg4Profile_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Mpeg4Profile_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Mpeg4Profile_ %p -> %p\n", q, p));
	*(tt__Mpeg4Profile_*)p = *(tt__Mpeg4Profile_*)q;
}

void tt__VideoEncoding_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__VideoEncoding(soap, &this->tt__VideoEncoding_::__item);
}

void tt__VideoEncoding_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoEncoding_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoEncoding_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoEncoding_(struct soap *soap, const char *tag, int id, const tt__VideoEncoding_ *a, const char *type)
{
	return soap_out_tt__VideoEncoding(soap, tag, id, &(a->tt__VideoEncoding_::__item), "tt:VideoEncoding");
}

void *tt__VideoEncoding_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoEncoding_(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoEncoding_ * SOAP_FMAC4 soap_in_tt__VideoEncoding_(struct soap *soap, const char *tag, tt__VideoEncoding_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__VideoEncoding_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoEncoding_, sizeof(tt__VideoEncoding_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoEncoding_)
			return (tt__VideoEncoding_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__VideoEncoding(soap, tag, &(a->tt__VideoEncoding_::__item), "tt:VideoEncoding"))
		return NULL;
	return a;
}

int tt__VideoEncoding_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoEncoding_);
	if (this->soap_out(soap, tag?tag:"tt:VideoEncoding", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoEncoding_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoEncoding_(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoEncoding_ * SOAP_FMAC4 soap_get_tt__VideoEncoding_(struct soap *soap, tt__VideoEncoding_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoEncoding_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoEncoding_ * SOAP_FMAC2 soap_instantiate_tt__VideoEncoding_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoEncoding_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoEncoding_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoEncoding_);
		if (size)
			*size = sizeof(tt__VideoEncoding_);
		((tt__VideoEncoding_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoEncoding_, n);
		if (size)
			*size = n * sizeof(tt__VideoEncoding_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoEncoding_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoEncoding_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoEncoding_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoEncoding_ %p -> %p\n", q, p));
	*(tt__VideoEncoding_*)p = *(tt__VideoEncoding_*)q;
}

void tt__RotateMode_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RotateMode(soap, &this->tt__RotateMode_::__item);
}

void tt__RotateMode_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__RotateMode_::__item, SOAP_TYPE_tt__RotateMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RotateMode_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RotateMode_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RotateMode_(struct soap *soap, const char *tag, int id, const tt__RotateMode_ *a, const char *type)
{
	return soap_out_tt__RotateMode(soap, tag, id, &(a->tt__RotateMode_::__item), "tt:RotateMode");
}

void *tt__RotateMode_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RotateMode_(soap, tag, this, type);
}

SOAP_FMAC3 tt__RotateMode_ * SOAP_FMAC4 soap_in_tt__RotateMode_(struct soap *soap, const char *tag, tt__RotateMode_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__RotateMode_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RotateMode_, sizeof(tt__RotateMode_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RotateMode_)
			return (tt__RotateMode_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__RotateMode(soap, tag, &(a->tt__RotateMode_::__item), "tt:RotateMode"))
		return NULL;
	return a;
}

int tt__RotateMode_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RotateMode_);
	if (this->soap_out(soap, tag?tag:"tt:RotateMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RotateMode_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RotateMode_(soap, this, tag, type);
}

SOAP_FMAC3 tt__RotateMode_ * SOAP_FMAC4 soap_get_tt__RotateMode_(struct soap *soap, tt__RotateMode_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RotateMode_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RotateMode_ * SOAP_FMAC2 soap_instantiate_tt__RotateMode_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RotateMode_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RotateMode_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RotateMode_);
		if (size)
			*size = sizeof(tt__RotateMode_);
		((tt__RotateMode_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RotateMode_, n);
		if (size)
			*size = n * sizeof(tt__RotateMode_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RotateMode_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RotateMode_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RotateMode_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RotateMode_ %p -> %p\n", q, p));
	*(tt__RotateMode_*)p = *(tt__RotateMode_*)q;
}

void tt__Name__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Name(soap, &this->tt__Name__::__item);
}

void tt__Name__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &this->tt__Name__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Name__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Name__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Name__(struct soap *soap, const char *tag, int id, const tt__Name__ *a, const char *type)
{
	return soap_out_tt__Name(soap, tag, id, &(a->tt__Name__::__item), "tt:Name");
}

void *tt__Name__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Name__(soap, tag, this, type);
}

SOAP_FMAC3 tt__Name__ * SOAP_FMAC4 soap_in_tt__Name__(struct soap *soap, const char *tag, tt__Name__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Name__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Name__, sizeof(tt__Name__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Name__)
			return (tt__Name__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__Name(soap, tag, &(a->tt__Name__::__item), "tt:Name"))
		return NULL;
	return a;
}

int tt__Name__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Name__);
	if (this->soap_out(soap, tag?tag:"tt:Name", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Name__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Name__(soap, this, tag, type);
}

SOAP_FMAC3 tt__Name__ * SOAP_FMAC4 soap_get_tt__Name__(struct soap *soap, tt__Name__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Name__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Name__ * SOAP_FMAC2 soap_instantiate_tt__Name__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Name__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Name__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Name__);
		if (size)
			*size = sizeof(tt__Name__);
		((tt__Name__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Name__, n);
		if (size)
			*size = n * sizeof(tt__Name__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Name__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Name__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Name__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Name__ %p -> %p\n", q, p));
	*(tt__Name__*)p = *(tt__Name__*)q;
}

void tt__ReferenceToken__::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__ReferenceToken__::__item);
}

void tt__ReferenceToken__::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__ReferenceToken__::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReferenceToken__::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReferenceToken__(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReferenceToken__(struct soap *soap, const char *tag, int id, const tt__ReferenceToken__ *a, const char *type)
{
	return soap_out_tt__ReferenceToken(soap, tag, id, &(a->tt__ReferenceToken__::__item), "tt:ReferenceToken");
}

void *tt__ReferenceToken__::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReferenceToken__(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReferenceToken__ * SOAP_FMAC4 soap_in_tt__ReferenceToken__(struct soap *soap, const char *tag, tt__ReferenceToken__ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ReferenceToken__ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReferenceToken__, sizeof(tt__ReferenceToken__), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReferenceToken__)
			return (tt__ReferenceToken__ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_tt__ReferenceToken(soap, tag, &(a->tt__ReferenceToken__::__item), "tt:ReferenceToken"))
		return NULL;
	return a;
}

int tt__ReferenceToken__::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReferenceToken__);
	if (this->soap_out(soap, tag?tag:"tt:ReferenceToken", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReferenceToken__::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReferenceToken__(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReferenceToken__ * SOAP_FMAC4 soap_get_tt__ReferenceToken__(struct soap *soap, tt__ReferenceToken__ *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReferenceToken__(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReferenceToken__ * SOAP_FMAC2 soap_instantiate_tt__ReferenceToken__(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReferenceToken__(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReferenceToken__, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReferenceToken__);
		if (size)
			*size = sizeof(tt__ReferenceToken__);
		((tt__ReferenceToken__*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReferenceToken__, n);
		if (size)
			*size = n * sizeof(tt__ReferenceToken__);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReferenceToken__*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReferenceToken__*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReferenceToken__(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReferenceToken__ %p -> %p\n", q, p));
	*(tt__ReferenceToken__*)p = *(tt__ReferenceToken__*)q;
}

void _timg__GetStatusResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_timg__GetStatusResponse::Status = NULL;
	/* transient soap skipped */
}

void _timg__GetStatusResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImagingStatus20(soap, &this->_timg__GetStatusResponse::Status);
	/* transient soap skipped */
#endif
}

int _timg__GetStatusResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetStatusResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetStatusResponse(struct soap *soap, const char *tag, int id, const _timg__GetStatusResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetStatusResponse), type))
		return soap->error;
	if (a->Status)
		soap_element_result(soap, "timg:Status");
	if (a->_timg__GetStatusResponse::Status)
	{	if (soap_out_PointerTott__ImagingStatus20(soap, "timg:Status", -1, &a->_timg__GetStatusResponse::Status, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:Status"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetStatusResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetStatusResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetStatusResponse * SOAP_FMAC4 soap_in__timg__GetStatusResponse(struct soap *soap, const char *tag, _timg__GetStatusResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetStatusResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetStatusResponse, sizeof(_timg__GetStatusResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetStatusResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetStatusResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Status1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Status1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingStatus20(soap, "timg:Status", &(a->_timg__GetStatusResponse::Status), "tt:ImagingStatus20"))
				{	soap_flag_Status1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "timg:Status");
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
	{	a = (_timg__GetStatusResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetStatusResponse, 0, sizeof(_timg__GetStatusResponse), 0, soap_copy__timg__GetStatusResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Status1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetStatusResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetStatusResponse);
	if (this->soap_out(soap, tag?tag:"timg:GetStatusResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetStatusResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetStatusResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetStatusResponse * SOAP_FMAC4 soap_get__timg__GetStatusResponse(struct soap *soap, _timg__GetStatusResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetStatusResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetStatusResponse * SOAP_FMAC2 soap_instantiate__timg__GetStatusResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetStatusResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetStatusResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetStatusResponse);
		if (size)
			*size = sizeof(_timg__GetStatusResponse);
		((_timg__GetStatusResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetStatusResponse, n);
		if (size)
			*size = n * sizeof(_timg__GetStatusResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetStatusResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetStatusResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetStatusResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetStatusResponse %p -> %p\n", q, p));
	*(_timg__GetStatusResponse*)p = *(_timg__GetStatusResponse*)q;
}

void _timg__GetStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__GetStatus::VideoSourceToken);
	/* transient soap skipped */
}

void _timg__GetStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__GetStatus::VideoSourceToken);
	/* transient soap skipped */
#endif
}

int _timg__GetStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetStatus(struct soap *soap, const char *tag, int id, const _timg__GetStatus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetStatus), type))
		return soap->error;
	if (a->_timg__GetStatus::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__GetStatus::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetStatus(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetStatus * SOAP_FMAC4 soap_in__timg__GetStatus(struct soap *soap, const char *tag, _timg__GetStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetStatus, sizeof(_timg__GetStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetStatus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__GetStatus::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__GetStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetStatus, 0, sizeof(_timg__GetStatus), 0, soap_copy__timg__GetStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetStatus);
	if (this->soap_out(soap, tag?tag:"timg:GetStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetStatus(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetStatus * SOAP_FMAC4 soap_get__timg__GetStatus(struct soap *soap, _timg__GetStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetStatus * SOAP_FMAC2 soap_instantiate__timg__GetStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetStatus);
		if (size)
			*size = sizeof(_timg__GetStatus);
		((_timg__GetStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetStatus, n);
		if (size)
			*size = n * sizeof(_timg__GetStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetStatus %p -> %p\n", q, p));
	*(_timg__GetStatus*)p = *(_timg__GetStatus*)q;
}

void _timg__StopResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _timg__StopResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _timg__StopResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__StopResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__StopResponse(struct soap *soap, const char *tag, int id, const _timg__StopResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__StopResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__StopResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__StopResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__StopResponse * SOAP_FMAC4 soap_in__timg__StopResponse(struct soap *soap, const char *tag, _timg__StopResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__StopResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__StopResponse, sizeof(_timg__StopResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__StopResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__StopResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_timg__StopResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__StopResponse, 0, sizeof(_timg__StopResponse), 0, soap_copy__timg__StopResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _timg__StopResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__StopResponse);
	if (this->soap_out(soap, tag?tag:"timg:StopResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__StopResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__StopResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__StopResponse * SOAP_FMAC4 soap_get__timg__StopResponse(struct soap *soap, _timg__StopResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__StopResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__StopResponse * SOAP_FMAC2 soap_instantiate__timg__StopResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__StopResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__StopResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__StopResponse);
		if (size)
			*size = sizeof(_timg__StopResponse);
		((_timg__StopResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__StopResponse, n);
		if (size)
			*size = n * sizeof(_timg__StopResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__StopResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__StopResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__StopResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__StopResponse %p -> %p\n", q, p));
	*(_timg__StopResponse*)p = *(_timg__StopResponse*)q;
}

void _timg__Stop::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__Stop::VideoSourceToken);
	/* transient soap skipped */
}

void _timg__Stop::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__Stop::VideoSourceToken);
	/* transient soap skipped */
#endif
}

int _timg__Stop::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__Stop(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__Stop(struct soap *soap, const char *tag, int id, const _timg__Stop *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__Stop), type))
		return soap->error;
	if (a->_timg__Stop::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__Stop::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__Stop::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__Stop(soap, tag, this, type);
}

SOAP_FMAC3 _timg__Stop * SOAP_FMAC4 soap_in__timg__Stop(struct soap *soap, const char *tag, _timg__Stop *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__Stop *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__Stop, sizeof(_timg__Stop), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__Stop)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__Stop *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__Stop::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__Stop *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__Stop, 0, sizeof(_timg__Stop), 0, soap_copy__timg__Stop);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__Stop::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__Stop);
	if (this->soap_out(soap, tag?tag:"timg:Stop", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__Stop::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__Stop(soap, this, tag, type);
}

SOAP_FMAC3 _timg__Stop * SOAP_FMAC4 soap_get__timg__Stop(struct soap *soap, _timg__Stop *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__Stop(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__Stop * SOAP_FMAC2 soap_instantiate__timg__Stop(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__Stop(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__Stop, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__Stop);
		if (size)
			*size = sizeof(_timg__Stop);
		((_timg__Stop*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__Stop, n);
		if (size)
			*size = n * sizeof(_timg__Stop);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__Stop*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__Stop*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__Stop(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__Stop %p -> %p\n", q, p));
	*(_timg__Stop*)p = *(_timg__Stop*)q;
}

void _timg__GetMoveOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_timg__GetMoveOptionsResponse::MoveOptions = NULL;
	/* transient soap skipped */
}

void _timg__GetMoveOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MoveOptions20(soap, &this->_timg__GetMoveOptionsResponse::MoveOptions);
	/* transient soap skipped */
#endif
}

int _timg__GetMoveOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetMoveOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetMoveOptionsResponse(struct soap *soap, const char *tag, int id, const _timg__GetMoveOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetMoveOptionsResponse), type))
		return soap->error;
	if (a->MoveOptions)
		soap_element_result(soap, "timg:MoveOptions");
	if (a->_timg__GetMoveOptionsResponse::MoveOptions)
	{	if (soap_out_PointerTott__MoveOptions20(soap, "timg:MoveOptions", -1, &a->_timg__GetMoveOptionsResponse::MoveOptions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:MoveOptions"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetMoveOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetMoveOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetMoveOptionsResponse * SOAP_FMAC4 soap_in__timg__GetMoveOptionsResponse(struct soap *soap, const char *tag, _timg__GetMoveOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetMoveOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetMoveOptionsResponse, sizeof(_timg__GetMoveOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetMoveOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetMoveOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_MoveOptions1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MoveOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MoveOptions20(soap, "timg:MoveOptions", &(a->_timg__GetMoveOptionsResponse::MoveOptions), "tt:MoveOptions20"))
				{	soap_flag_MoveOptions1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "timg:MoveOptions");
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
	{	a = (_timg__GetMoveOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetMoveOptionsResponse, 0, sizeof(_timg__GetMoveOptionsResponse), 0, soap_copy__timg__GetMoveOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MoveOptions1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetMoveOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetMoveOptionsResponse);
	if (this->soap_out(soap, tag?tag:"timg:GetMoveOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetMoveOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetMoveOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetMoveOptionsResponse * SOAP_FMAC4 soap_get__timg__GetMoveOptionsResponse(struct soap *soap, _timg__GetMoveOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetMoveOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetMoveOptionsResponse * SOAP_FMAC2 soap_instantiate__timg__GetMoveOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetMoveOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetMoveOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetMoveOptionsResponse);
		if (size)
			*size = sizeof(_timg__GetMoveOptionsResponse);
		((_timg__GetMoveOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetMoveOptionsResponse, n);
		if (size)
			*size = n * sizeof(_timg__GetMoveOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetMoveOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetMoveOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetMoveOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetMoveOptionsResponse %p -> %p\n", q, p));
	*(_timg__GetMoveOptionsResponse*)p = *(_timg__GetMoveOptionsResponse*)q;
}

void _timg__GetMoveOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__GetMoveOptions::VideoSourceToken);
	/* transient soap skipped */
}

void _timg__GetMoveOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__GetMoveOptions::VideoSourceToken);
	/* transient soap skipped */
#endif
}

int _timg__GetMoveOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetMoveOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetMoveOptions(struct soap *soap, const char *tag, int id, const _timg__GetMoveOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetMoveOptions), type))
		return soap->error;
	if (a->_timg__GetMoveOptions::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__GetMoveOptions::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetMoveOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetMoveOptions(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetMoveOptions * SOAP_FMAC4 soap_in__timg__GetMoveOptions(struct soap *soap, const char *tag, _timg__GetMoveOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetMoveOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetMoveOptions, sizeof(_timg__GetMoveOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetMoveOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetMoveOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__GetMoveOptions::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__GetMoveOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetMoveOptions, 0, sizeof(_timg__GetMoveOptions), 0, soap_copy__timg__GetMoveOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetMoveOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetMoveOptions);
	if (this->soap_out(soap, tag?tag:"timg:GetMoveOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetMoveOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetMoveOptions(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetMoveOptions * SOAP_FMAC4 soap_get__timg__GetMoveOptions(struct soap *soap, _timg__GetMoveOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetMoveOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetMoveOptions * SOAP_FMAC2 soap_instantiate__timg__GetMoveOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetMoveOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetMoveOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetMoveOptions);
		if (size)
			*size = sizeof(_timg__GetMoveOptions);
		((_timg__GetMoveOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetMoveOptions, n);
		if (size)
			*size = n * sizeof(_timg__GetMoveOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetMoveOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetMoveOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetMoveOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetMoveOptions %p -> %p\n", q, p));
	*(_timg__GetMoveOptions*)p = *(_timg__GetMoveOptions*)q;
}

void _timg__MoveResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _timg__MoveResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _timg__MoveResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__MoveResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__MoveResponse(struct soap *soap, const char *tag, int id, const _timg__MoveResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__MoveResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__MoveResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__MoveResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__MoveResponse * SOAP_FMAC4 soap_in__timg__MoveResponse(struct soap *soap, const char *tag, _timg__MoveResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__MoveResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__MoveResponse, sizeof(_timg__MoveResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__MoveResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__MoveResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_timg__MoveResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__MoveResponse, 0, sizeof(_timg__MoveResponse), 0, soap_copy__timg__MoveResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _timg__MoveResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__MoveResponse);
	if (this->soap_out(soap, tag?tag:"timg:MoveResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__MoveResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__MoveResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__MoveResponse * SOAP_FMAC4 soap_get__timg__MoveResponse(struct soap *soap, _timg__MoveResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__MoveResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__MoveResponse * SOAP_FMAC2 soap_instantiate__timg__MoveResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__MoveResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__MoveResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__MoveResponse);
		if (size)
			*size = sizeof(_timg__MoveResponse);
		((_timg__MoveResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__MoveResponse, n);
		if (size)
			*size = n * sizeof(_timg__MoveResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__MoveResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__MoveResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__MoveResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__MoveResponse %p -> %p\n", q, p));
	*(_timg__MoveResponse*)p = *(_timg__MoveResponse*)q;
}

void _timg__Move::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__Move::VideoSourceToken);
	this->_timg__Move::Focus = NULL;
	/* transient soap skipped */
}

void _timg__Move::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__Move::VideoSourceToken);
	soap_serialize_PointerTott__FocusMove(soap, &this->_timg__Move::Focus);
	/* transient soap skipped */
#endif
}

int _timg__Move::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__Move(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__Move(struct soap *soap, const char *tag, int id, const _timg__Move *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__Move), type))
		return soap->error;
	if (a->_timg__Move::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__Move::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	if (a->_timg__Move::Focus)
	{	if (soap_out_PointerTott__FocusMove(soap, "timg:Focus", -1, &a->_timg__Move::Focus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:Focus"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__Move::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__Move(soap, tag, this, type);
}

SOAP_FMAC3 _timg__Move * SOAP_FMAC4 soap_in__timg__Move(struct soap *soap, const char *tag, _timg__Move *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__Move *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__Move, sizeof(_timg__Move), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__Move)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__Move *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	size_t soap_flag_Focus1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__Move::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			if (soap_flag_Focus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusMove(soap, "timg:Focus", &(a->_timg__Move::Focus), "tt:FocusMove"))
				{	soap_flag_Focus1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__Move *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__Move, 0, sizeof(_timg__Move), 0, soap_copy__timg__Move);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0 || soap_flag_Focus1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__Move::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__Move);
	if (this->soap_out(soap, tag?tag:"timg:Move", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__Move::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__Move(soap, this, tag, type);
}

SOAP_FMAC3 _timg__Move * SOAP_FMAC4 soap_get__timg__Move(struct soap *soap, _timg__Move *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__Move(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__Move * SOAP_FMAC2 soap_instantiate__timg__Move(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__Move(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__Move, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__Move);
		if (size)
			*size = sizeof(_timg__Move);
		((_timg__Move*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__Move, n);
		if (size)
			*size = n * sizeof(_timg__Move);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__Move*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__Move*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__Move(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__Move %p -> %p\n", q, p));
	*(_timg__Move*)p = *(_timg__Move*)q;
}

void _timg__GetOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_timg__GetOptionsResponse::ImagingOptions = NULL;
	/* transient soap skipped */
}

void _timg__GetOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImagingOptions20(soap, &this->_timg__GetOptionsResponse::ImagingOptions);
	/* transient soap skipped */
#endif
}

int _timg__GetOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetOptionsResponse(struct soap *soap, const char *tag, int id, const _timg__GetOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetOptionsResponse), type))
		return soap->error;
	if (a->ImagingOptions)
		soap_element_result(soap, "timg:ImagingOptions");
	if (a->_timg__GetOptionsResponse::ImagingOptions)
	{	if (soap_out_PointerTott__ImagingOptions20(soap, "timg:ImagingOptions", -1, &a->_timg__GetOptionsResponse::ImagingOptions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:ImagingOptions"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetOptionsResponse * SOAP_FMAC4 soap_in__timg__GetOptionsResponse(struct soap *soap, const char *tag, _timg__GetOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetOptionsResponse, sizeof(_timg__GetOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ImagingOptions1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ImagingOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingOptions20(soap, "timg:ImagingOptions", &(a->_timg__GetOptionsResponse::ImagingOptions), "tt:ImagingOptions20"))
				{	soap_flag_ImagingOptions1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "timg:ImagingOptions");
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
	{	a = (_timg__GetOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetOptionsResponse, 0, sizeof(_timg__GetOptionsResponse), 0, soap_copy__timg__GetOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ImagingOptions1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetOptionsResponse);
	if (this->soap_out(soap, tag?tag:"timg:GetOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetOptionsResponse * SOAP_FMAC4 soap_get__timg__GetOptionsResponse(struct soap *soap, _timg__GetOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetOptionsResponse * SOAP_FMAC2 soap_instantiate__timg__GetOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetOptionsResponse);
		if (size)
			*size = sizeof(_timg__GetOptionsResponse);
		((_timg__GetOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetOptionsResponse, n);
		if (size)
			*size = n * sizeof(_timg__GetOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetOptionsResponse %p -> %p\n", q, p));
	*(_timg__GetOptionsResponse*)p = *(_timg__GetOptionsResponse*)q;
}

void _timg__GetOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__GetOptions::VideoSourceToken);
	/* transient soap skipped */
}

void _timg__GetOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__GetOptions::VideoSourceToken);
	/* transient soap skipped */
#endif
}

int _timg__GetOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetOptions(struct soap *soap, const char *tag, int id, const _timg__GetOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetOptions), type))
		return soap->error;
	if (a->_timg__GetOptions::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__GetOptions::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetOptions(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetOptions * SOAP_FMAC4 soap_in__timg__GetOptions(struct soap *soap, const char *tag, _timg__GetOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetOptions, sizeof(_timg__GetOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__GetOptions::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__GetOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetOptions, 0, sizeof(_timg__GetOptions), 0, soap_copy__timg__GetOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetOptions);
	if (this->soap_out(soap, tag?tag:"timg:GetOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetOptions(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetOptions * SOAP_FMAC4 soap_get__timg__GetOptions(struct soap *soap, _timg__GetOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetOptions * SOAP_FMAC2 soap_instantiate__timg__GetOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetOptions);
		if (size)
			*size = sizeof(_timg__GetOptions);
		((_timg__GetOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetOptions, n);
		if (size)
			*size = n * sizeof(_timg__GetOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetOptions %p -> %p\n", q, p));
	*(_timg__GetOptions*)p = *(_timg__GetOptions*)q;
}

void _timg__SetImagingSettingsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _timg__SetImagingSettingsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _timg__SetImagingSettingsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__SetImagingSettingsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__SetImagingSettingsResponse(struct soap *soap, const char *tag, int id, const _timg__SetImagingSettingsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__SetImagingSettingsResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__SetImagingSettingsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__SetImagingSettingsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__SetImagingSettingsResponse * SOAP_FMAC4 soap_in__timg__SetImagingSettingsResponse(struct soap *soap, const char *tag, _timg__SetImagingSettingsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__SetImagingSettingsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__SetImagingSettingsResponse, sizeof(_timg__SetImagingSettingsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__SetImagingSettingsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__SetImagingSettingsResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_timg__SetImagingSettingsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__SetImagingSettingsResponse, 0, sizeof(_timg__SetImagingSettingsResponse), 0, soap_copy__timg__SetImagingSettingsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _timg__SetImagingSettingsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__SetImagingSettingsResponse);
	if (this->soap_out(soap, tag?tag:"timg:SetImagingSettingsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__SetImagingSettingsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__SetImagingSettingsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__SetImagingSettingsResponse * SOAP_FMAC4 soap_get__timg__SetImagingSettingsResponse(struct soap *soap, _timg__SetImagingSettingsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__SetImagingSettingsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__SetImagingSettingsResponse * SOAP_FMAC2 soap_instantiate__timg__SetImagingSettingsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__SetImagingSettingsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__SetImagingSettingsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__SetImagingSettingsResponse);
		if (size)
			*size = sizeof(_timg__SetImagingSettingsResponse);
		((_timg__SetImagingSettingsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__SetImagingSettingsResponse, n);
		if (size)
			*size = n * sizeof(_timg__SetImagingSettingsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__SetImagingSettingsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__SetImagingSettingsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__SetImagingSettingsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__SetImagingSettingsResponse %p -> %p\n", q, p));
	*(_timg__SetImagingSettingsResponse*)p = *(_timg__SetImagingSettingsResponse*)q;
}

void _timg__SetImagingSettings::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__SetImagingSettings::VideoSourceToken);
	this->_timg__SetImagingSettings::ImagingSettings = NULL;
	this->_timg__SetImagingSettings::ForcePersistence_x0020 = NULL;
	/* transient soap skipped */
}

void _timg__SetImagingSettings::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__SetImagingSettings::VideoSourceToken);
	soap_serialize_PointerTott__ImagingSettings20(soap, &this->_timg__SetImagingSettings::ImagingSettings);
	soap_serialize_PointerTobool(soap, &this->_timg__SetImagingSettings::ForcePersistence_x0020);
	/* transient soap skipped */
#endif
}

int _timg__SetImagingSettings::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__SetImagingSettings(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__SetImagingSettings(struct soap *soap, const char *tag, int id, const _timg__SetImagingSettings *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__SetImagingSettings), type))
		return soap->error;
	if (a->_timg__SetImagingSettings::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__SetImagingSettings::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	if (a->_timg__SetImagingSettings::ImagingSettings)
	{	if (soap_out_PointerTott__ImagingSettings20(soap, "timg:ImagingSettings", -1, &a->_timg__SetImagingSettings::ImagingSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:ImagingSettings"))
		return soap->error;
	if (soap_out_PointerTobool(soap, "timg:ForcePersistence ", -1, &(a->_timg__SetImagingSettings::ForcePersistence_x0020), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__SetImagingSettings::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__SetImagingSettings(soap, tag, this, type);
}

SOAP_FMAC3 _timg__SetImagingSettings * SOAP_FMAC4 soap_in__timg__SetImagingSettings(struct soap *soap, const char *tag, _timg__SetImagingSettings *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__SetImagingSettings *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__SetImagingSettings, sizeof(_timg__SetImagingSettings), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__SetImagingSettings)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__SetImagingSettings *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	size_t soap_flag_ImagingSettings1 = 1;
	size_t soap_flag_ForcePersistence_x00201 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__SetImagingSettings::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			if (soap_flag_ImagingSettings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettings20(soap, "timg:ImagingSettings", &(a->_timg__SetImagingSettings::ImagingSettings), "tt:ImagingSettings20"))
				{	soap_flag_ImagingSettings1--;
					continue;
				}
			if (soap_flag_ForcePersistence_x00201 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "timg:ForcePersistence ", &(a->_timg__SetImagingSettings::ForcePersistence_x0020), "xsd:boolean"))
				{	soap_flag_ForcePersistence_x00201--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__SetImagingSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__SetImagingSettings, 0, sizeof(_timg__SetImagingSettings), 0, soap_copy__timg__SetImagingSettings);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0 || soap_flag_ImagingSettings1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__SetImagingSettings::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__SetImagingSettings);
	if (this->soap_out(soap, tag?tag:"timg:SetImagingSettings", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__SetImagingSettings::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__SetImagingSettings(soap, this, tag, type);
}

SOAP_FMAC3 _timg__SetImagingSettings * SOAP_FMAC4 soap_get__timg__SetImagingSettings(struct soap *soap, _timg__SetImagingSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__SetImagingSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__SetImagingSettings * SOAP_FMAC2 soap_instantiate__timg__SetImagingSettings(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__SetImagingSettings(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__SetImagingSettings, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__SetImagingSettings);
		if (size)
			*size = sizeof(_timg__SetImagingSettings);
		((_timg__SetImagingSettings*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__SetImagingSettings, n);
		if (size)
			*size = n * sizeof(_timg__SetImagingSettings);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__SetImagingSettings*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__SetImagingSettings*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__SetImagingSettings(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__SetImagingSettings %p -> %p\n", q, p));
	*(_timg__SetImagingSettings*)p = *(_timg__SetImagingSettings*)q;
}

void _timg__GetImagingSettingsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_timg__GetImagingSettingsResponse::ImagingSettings = NULL;
	/* transient soap skipped */
}

void _timg__GetImagingSettingsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImagingSettings20(soap, &this->_timg__GetImagingSettingsResponse::ImagingSettings);
	/* transient soap skipped */
#endif
}

int _timg__GetImagingSettingsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetImagingSettingsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetImagingSettingsResponse(struct soap *soap, const char *tag, int id, const _timg__GetImagingSettingsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetImagingSettingsResponse), type))
		return soap->error;
	if (a->ImagingSettings)
		soap_element_result(soap, "timg:ImagingSettings");
	if (a->_timg__GetImagingSettingsResponse::ImagingSettings)
	{	if (soap_out_PointerTott__ImagingSettings20(soap, "timg:ImagingSettings", -1, &a->_timg__GetImagingSettingsResponse::ImagingSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:ImagingSettings"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetImagingSettingsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetImagingSettingsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetImagingSettingsResponse * SOAP_FMAC4 soap_in__timg__GetImagingSettingsResponse(struct soap *soap, const char *tag, _timg__GetImagingSettingsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetImagingSettingsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetImagingSettingsResponse, sizeof(_timg__GetImagingSettingsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetImagingSettingsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetImagingSettingsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ImagingSettings1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ImagingSettings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettings20(soap, "timg:ImagingSettings", &(a->_timg__GetImagingSettingsResponse::ImagingSettings), "tt:ImagingSettings20"))
				{	soap_flag_ImagingSettings1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "timg:ImagingSettings");
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
	{	a = (_timg__GetImagingSettingsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetImagingSettingsResponse, 0, sizeof(_timg__GetImagingSettingsResponse), 0, soap_copy__timg__GetImagingSettingsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ImagingSettings1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetImagingSettingsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetImagingSettingsResponse);
	if (this->soap_out(soap, tag?tag:"timg:GetImagingSettingsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetImagingSettingsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetImagingSettingsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetImagingSettingsResponse * SOAP_FMAC4 soap_get__timg__GetImagingSettingsResponse(struct soap *soap, _timg__GetImagingSettingsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetImagingSettingsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetImagingSettingsResponse * SOAP_FMAC2 soap_instantiate__timg__GetImagingSettingsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetImagingSettingsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetImagingSettingsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetImagingSettingsResponse);
		if (size)
			*size = sizeof(_timg__GetImagingSettingsResponse);
		((_timg__GetImagingSettingsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetImagingSettingsResponse, n);
		if (size)
			*size = n * sizeof(_timg__GetImagingSettingsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetImagingSettingsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetImagingSettingsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetImagingSettingsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetImagingSettingsResponse %p -> %p\n", q, p));
	*(_timg__GetImagingSettingsResponse*)p = *(_timg__GetImagingSettingsResponse*)q;
}

void _timg__GetImagingSettings::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_timg__GetImagingSettings::VideoSourceToken);
	/* transient soap skipped */
}

void _timg__GetImagingSettings::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_timg__GetImagingSettings::VideoSourceToken);
	/* transient soap skipped */
#endif
}

int _timg__GetImagingSettings::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetImagingSettings(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetImagingSettings(struct soap *soap, const char *tag, int id, const _timg__GetImagingSettings *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetImagingSettings), type))
		return soap->error;
	if (a->_timg__GetImagingSettings::VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "timg:VideoSourceToken", -1, &a->_timg__GetImagingSettings::VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:VideoSourceToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetImagingSettings::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetImagingSettings(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetImagingSettings * SOAP_FMAC4 soap_in__timg__GetImagingSettings(struct soap *soap, const char *tag, _timg__GetImagingSettings *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetImagingSettings *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetImagingSettings, sizeof(_timg__GetImagingSettings), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetImagingSettings)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetImagingSettings *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_VideoSourceToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "timg:VideoSourceToken", &(a->_timg__GetImagingSettings::VideoSourceToken), "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_timg__GetImagingSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetImagingSettings, 0, sizeof(_timg__GetImagingSettings), 0, soap_copy__timg__GetImagingSettings);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetImagingSettings::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetImagingSettings);
	if (this->soap_out(soap, tag?tag:"timg:GetImagingSettings", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetImagingSettings::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetImagingSettings(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetImagingSettings * SOAP_FMAC4 soap_get__timg__GetImagingSettings(struct soap *soap, _timg__GetImagingSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetImagingSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetImagingSettings * SOAP_FMAC2 soap_instantiate__timg__GetImagingSettings(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetImagingSettings(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetImagingSettings, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetImagingSettings);
		if (size)
			*size = sizeof(_timg__GetImagingSettings);
		((_timg__GetImagingSettings*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetImagingSettings, n);
		if (size)
			*size = n * sizeof(_timg__GetImagingSettings);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetImagingSettings*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetImagingSettings*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetImagingSettings(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetImagingSettings %p -> %p\n", q, p));
	*(_timg__GetImagingSettings*)p = *(_timg__GetImagingSettings*)q;
}

void _timg__GetServiceCapabilitiesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_timg__GetServiceCapabilitiesResponse::Capabilities = NULL;
	/* transient soap skipped */
}

void _timg__GetServiceCapabilitiesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotimg__Capabilities(soap, &this->_timg__GetServiceCapabilitiesResponse::Capabilities);
	/* transient soap skipped */
#endif
}

int _timg__GetServiceCapabilitiesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetServiceCapabilitiesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const _timg__GetServiceCapabilitiesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "timg:Capabilities");
	if (a->_timg__GetServiceCapabilitiesResponse::Capabilities)
	{	if (soap_out_PointerTotimg__Capabilities(soap, "timg:Capabilities", -1, &a->_timg__GetServiceCapabilitiesResponse::Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "timg:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetServiceCapabilitiesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetServiceCapabilitiesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__timg__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, _timg__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetServiceCapabilitiesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetServiceCapabilitiesResponse, sizeof(_timg__GetServiceCapabilitiesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetServiceCapabilitiesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetServiceCapabilitiesResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Capabilities1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotimg__Capabilities(soap, "timg:Capabilities", &(a->_timg__GetServiceCapabilitiesResponse::Capabilities), "timg:Capabilities"))
				{	soap_flag_Capabilities1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "timg:Capabilities");
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
	{	a = (_timg__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetServiceCapabilitiesResponse, 0, sizeof(_timg__GetServiceCapabilitiesResponse), 0, soap_copy__timg__GetServiceCapabilitiesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _timg__GetServiceCapabilitiesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetServiceCapabilitiesResponse);
	if (this->soap_out(soap, tag?tag:"timg:GetServiceCapabilitiesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetServiceCapabilitiesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetServiceCapabilitiesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__timg__GetServiceCapabilitiesResponse(struct soap *soap, _timg__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetServiceCapabilitiesResponse * SOAP_FMAC2 soap_instantiate__timg__GetServiceCapabilitiesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetServiceCapabilitiesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetServiceCapabilitiesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetServiceCapabilitiesResponse);
		if (size)
			*size = sizeof(_timg__GetServiceCapabilitiesResponse);
		((_timg__GetServiceCapabilitiesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetServiceCapabilitiesResponse, n);
		if (size)
			*size = n * sizeof(_timg__GetServiceCapabilitiesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetServiceCapabilitiesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetServiceCapabilitiesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetServiceCapabilitiesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetServiceCapabilitiesResponse %p -> %p\n", q, p));
	*(_timg__GetServiceCapabilitiesResponse*)p = *(_timg__GetServiceCapabilitiesResponse*)q;
}

void _timg__GetServiceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _timg__GetServiceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _timg__GetServiceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__timg__GetServiceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__timg__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const _timg__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__timg__GetServiceCapabilities), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_timg__GetServiceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__timg__GetServiceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 _timg__GetServiceCapabilities * SOAP_FMAC4 soap_in__timg__GetServiceCapabilities(struct soap *soap, const char *tag, _timg__GetServiceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_timg__GetServiceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__timg__GetServiceCapabilities, sizeof(_timg__GetServiceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__timg__GetServiceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_timg__GetServiceCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_timg__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__timg__GetServiceCapabilities, 0, sizeof(_timg__GetServiceCapabilities), 0, soap_copy__timg__GetServiceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _timg__GetServiceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__timg__GetServiceCapabilities);
	if (this->soap_out(soap, tag?tag:"timg:GetServiceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_timg__GetServiceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__timg__GetServiceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 _timg__GetServiceCapabilities * SOAP_FMAC4 soap_get__timg__GetServiceCapabilities(struct soap *soap, _timg__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__timg__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _timg__GetServiceCapabilities * SOAP_FMAC2 soap_instantiate__timg__GetServiceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__timg__GetServiceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__timg__GetServiceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_timg__GetServiceCapabilities);
		if (size)
			*size = sizeof(_timg__GetServiceCapabilities);
		((_timg__GetServiceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_timg__GetServiceCapabilities, n);
		if (size)
			*size = n * sizeof(_timg__GetServiceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_timg__GetServiceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_timg__GetServiceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__timg__GetServiceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _timg__GetServiceCapabilities %p -> %p\n", q, p));
	*(_timg__GetServiceCapabilities*)p = *(_timg__GetServiceCapabilities*)q;
}

void timg__Capabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->timg__Capabilities::__size = 0;
	this->timg__Capabilities::__any = NULL;
	this->timg__Capabilities::ImageStabilization = NULL;
	this->timg__Capabilities::__anyAttribute = NULL;
}

void timg__Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int timg__Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_timg__Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_timg__Capabilities(struct soap *soap, const char *tag, int id, const timg__Capabilities *a, const char *type)
{
	if (((timg__Capabilities*)a)->ImageStabilization)
		soap_set_attr(soap, "ImageStabilization", soap_bool2s(soap, *((timg__Capabilities*)a)->ImageStabilization), 1);
	if (((timg__Capabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((timg__Capabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_timg__Capabilities), "timg:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->timg__Capabilities::__any)
	{	int i;
		for (i = 0; i < a->timg__Capabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->timg__Capabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *timg__Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_timg__Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 timg__Capabilities * SOAP_FMAC4 soap_in_timg__Capabilities(struct soap *soap, const char *tag, timg__Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (timg__Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_timg__Capabilities, sizeof(timg__Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_timg__Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (timg__Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "ImageStabilization", 0);
		if (t)
		{
			if (!(((timg__Capabilities*)a)->ImageStabilization = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((timg__Capabilities*)a)->ImageStabilization))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((timg__Capabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->timg__Capabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->timg__Capabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->timg__Capabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->timg__Capabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->timg__Capabilities::__any, "xsd:byte"))
				{	a->timg__Capabilities::__size++;
					a->timg__Capabilities::__any = NULL;
					continue;
				}
			}
			if (soap_flag___item2 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->timg__Capabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->timg__Capabilities::__size)
			a->timg__Capabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->timg__Capabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (timg__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_timg__Capabilities, 0, sizeof(timg__Capabilities), 0, soap_copy_timg__Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int timg__Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_timg__Capabilities);
	if (this->soap_out(soap, tag?tag:"timg:Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *timg__Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_timg__Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 timg__Capabilities * SOAP_FMAC4 soap_get_timg__Capabilities(struct soap *soap, timg__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_timg__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 timg__Capabilities * SOAP_FMAC2 soap_instantiate_timg__Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_timg__Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_timg__Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(timg__Capabilities);
		if (size)
			*size = sizeof(timg__Capabilities);
		((timg__Capabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(timg__Capabilities, n);
		if (size)
			*size = n * sizeof(timg__Capabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((timg__Capabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (timg__Capabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_timg__Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying timg__Capabilities %p -> %p\n", q, p));
	*(timg__Capabilities*)p = *(timg__Capabilities*)q;
}

void _tptz__RemovePresetTourResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__RemovePresetTourResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__RemovePresetTourResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RemovePresetTourResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RemovePresetTourResponse(struct soap *soap, const char *tag, int id, const _tptz__RemovePresetTourResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RemovePresetTourResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RemovePresetTourResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RemovePresetTourResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RemovePresetTourResponse * SOAP_FMAC4 soap_in__tptz__RemovePresetTourResponse(struct soap *soap, const char *tag, _tptz__RemovePresetTourResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RemovePresetTourResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RemovePresetTourResponse, sizeof(_tptz__RemovePresetTourResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RemovePresetTourResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RemovePresetTourResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__RemovePresetTourResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RemovePresetTourResponse, 0, sizeof(_tptz__RemovePresetTourResponse), 0, soap_copy__tptz__RemovePresetTourResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__RemovePresetTourResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RemovePresetTourResponse);
	if (this->soap_out(soap, tag?tag:"tptz:RemovePresetTourResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RemovePresetTourResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RemovePresetTourResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RemovePresetTourResponse * SOAP_FMAC4 soap_get__tptz__RemovePresetTourResponse(struct soap *soap, _tptz__RemovePresetTourResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RemovePresetTourResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RemovePresetTourResponse * SOAP_FMAC2 soap_instantiate__tptz__RemovePresetTourResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RemovePresetTourResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RemovePresetTourResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RemovePresetTourResponse);
		if (size)
			*size = sizeof(_tptz__RemovePresetTourResponse);
		((_tptz__RemovePresetTourResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RemovePresetTourResponse, n);
		if (size)
			*size = n * sizeof(_tptz__RemovePresetTourResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RemovePresetTourResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RemovePresetTourResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RemovePresetTourResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RemovePresetTourResponse %p -> %p\n", q, p));
	*(_tptz__RemovePresetTourResponse*)p = *(_tptz__RemovePresetTourResponse*)q;
}

void _tptz__RemovePresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__RemovePresetTour::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__RemovePresetTour::PresetTourToken);
	/* transient soap skipped */
}

void _tptz__RemovePresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__RemovePresetTour::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__RemovePresetTour::PresetTourToken);
	/* transient soap skipped */
#endif
}

int _tptz__RemovePresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RemovePresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RemovePresetTour(struct soap *soap, const char *tag, int id, const _tptz__RemovePresetTour *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RemovePresetTour), type))
		return soap->error;
	if (a->_tptz__RemovePresetTour::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__RemovePresetTour::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__RemovePresetTour::PresetTourToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetTourToken", -1, &a->_tptz__RemovePresetTour::PresetTourToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTourToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RemovePresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RemovePresetTour(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RemovePresetTour * SOAP_FMAC4 soap_in__tptz__RemovePresetTour(struct soap *soap, const char *tag, _tptz__RemovePresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RemovePresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RemovePresetTour, sizeof(_tptz__RemovePresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RemovePresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RemovePresetTour *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetTourToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__RemovePresetTour::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetTourToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetTourToken", &(a->_tptz__RemovePresetTour::PresetTourToken), "tt:ReferenceToken"))
				{	soap_flag_PresetTourToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__RemovePresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RemovePresetTour, 0, sizeof(_tptz__RemovePresetTour), 0, soap_copy__tptz__RemovePresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetTourToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__RemovePresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RemovePresetTour);
	if (this->soap_out(soap, tag?tag:"tptz:RemovePresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RemovePresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RemovePresetTour(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RemovePresetTour * SOAP_FMAC4 soap_get__tptz__RemovePresetTour(struct soap *soap, _tptz__RemovePresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RemovePresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RemovePresetTour * SOAP_FMAC2 soap_instantiate__tptz__RemovePresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RemovePresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RemovePresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RemovePresetTour);
		if (size)
			*size = sizeof(_tptz__RemovePresetTour);
		((_tptz__RemovePresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RemovePresetTour, n);
		if (size)
			*size = n * sizeof(_tptz__RemovePresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RemovePresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RemovePresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RemovePresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RemovePresetTour %p -> %p\n", q, p));
	*(_tptz__RemovePresetTour*)p = *(_tptz__RemovePresetTour*)q;
}

void _tptz__OperatePresetTourResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__OperatePresetTourResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__OperatePresetTourResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__OperatePresetTourResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__OperatePresetTourResponse(struct soap *soap, const char *tag, int id, const _tptz__OperatePresetTourResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__OperatePresetTourResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__OperatePresetTourResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__OperatePresetTourResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__OperatePresetTourResponse * SOAP_FMAC4 soap_in__tptz__OperatePresetTourResponse(struct soap *soap, const char *tag, _tptz__OperatePresetTourResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__OperatePresetTourResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__OperatePresetTourResponse, sizeof(_tptz__OperatePresetTourResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__OperatePresetTourResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__OperatePresetTourResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__OperatePresetTourResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__OperatePresetTourResponse, 0, sizeof(_tptz__OperatePresetTourResponse), 0, soap_copy__tptz__OperatePresetTourResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__OperatePresetTourResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__OperatePresetTourResponse);
	if (this->soap_out(soap, tag?tag:"tptz:OperatePresetTourResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__OperatePresetTourResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__OperatePresetTourResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__OperatePresetTourResponse * SOAP_FMAC4 soap_get__tptz__OperatePresetTourResponse(struct soap *soap, _tptz__OperatePresetTourResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__OperatePresetTourResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__OperatePresetTourResponse * SOAP_FMAC2 soap_instantiate__tptz__OperatePresetTourResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__OperatePresetTourResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__OperatePresetTourResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__OperatePresetTourResponse);
		if (size)
			*size = sizeof(_tptz__OperatePresetTourResponse);
		((_tptz__OperatePresetTourResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__OperatePresetTourResponse, n);
		if (size)
			*size = n * sizeof(_tptz__OperatePresetTourResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__OperatePresetTourResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__OperatePresetTourResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__OperatePresetTourResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__OperatePresetTourResponse %p -> %p\n", q, p));
	*(_tptz__OperatePresetTourResponse*)p = *(_tptz__OperatePresetTourResponse*)q;
}

void _tptz__OperatePresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__OperatePresetTour::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__OperatePresetTour::PresetTourToken);
	soap_default_tt__PTZPresetTourOperation(soap, &this->_tptz__OperatePresetTour::Operation);
	/* transient soap skipped */
}

void _tptz__OperatePresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__OperatePresetTour::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__OperatePresetTour::PresetTourToken);
	soap_embedded(soap, &this->_tptz__OperatePresetTour::Operation, SOAP_TYPE_tt__PTZPresetTourOperation);
	/* transient soap skipped */
#endif
}

int _tptz__OperatePresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__OperatePresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__OperatePresetTour(struct soap *soap, const char *tag, int id, const _tptz__OperatePresetTour *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__OperatePresetTour), type))
		return soap->error;
	if (a->_tptz__OperatePresetTour::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__OperatePresetTour::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__OperatePresetTour::PresetTourToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetTourToken", -1, &a->_tptz__OperatePresetTour::PresetTourToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTourToken"))
		return soap->error;
	if (soap_out_tt__PTZPresetTourOperation(soap, "tptz:Operation", -1, &(a->_tptz__OperatePresetTour::Operation), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__OperatePresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__OperatePresetTour(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__OperatePresetTour * SOAP_FMAC4 soap_in__tptz__OperatePresetTour(struct soap *soap, const char *tag, _tptz__OperatePresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__OperatePresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__OperatePresetTour, sizeof(_tptz__OperatePresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__OperatePresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__OperatePresetTour *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetTourToken1 = 1;
	size_t soap_flag_Operation1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__OperatePresetTour::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetTourToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetTourToken", &(a->_tptz__OperatePresetTour::PresetTourToken), "tt:ReferenceToken"))
				{	soap_flag_PresetTourToken1--;
					continue;
				}
			if (soap_flag_Operation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__PTZPresetTourOperation(soap, "tptz:Operation", &(a->_tptz__OperatePresetTour::Operation), "tt:PTZPresetTourOperation"))
				{	soap_flag_Operation1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__OperatePresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__OperatePresetTour, 0, sizeof(_tptz__OperatePresetTour), 0, soap_copy__tptz__OperatePresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetTourToken1 > 0 || soap_flag_Operation1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__OperatePresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__OperatePresetTour);
	if (this->soap_out(soap, tag?tag:"tptz:OperatePresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__OperatePresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__OperatePresetTour(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__OperatePresetTour * SOAP_FMAC4 soap_get__tptz__OperatePresetTour(struct soap *soap, _tptz__OperatePresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__OperatePresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__OperatePresetTour * SOAP_FMAC2 soap_instantiate__tptz__OperatePresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__OperatePresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__OperatePresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__OperatePresetTour);
		if (size)
			*size = sizeof(_tptz__OperatePresetTour);
		((_tptz__OperatePresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__OperatePresetTour, n);
		if (size)
			*size = n * sizeof(_tptz__OperatePresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__OperatePresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__OperatePresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__OperatePresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__OperatePresetTour %p -> %p\n", q, p));
	*(_tptz__OperatePresetTour*)p = *(_tptz__OperatePresetTour*)q;
}

void _tptz__ModifyPresetTourResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__ModifyPresetTourResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__ModifyPresetTourResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__ModifyPresetTourResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__ModifyPresetTourResponse(struct soap *soap, const char *tag, int id, const _tptz__ModifyPresetTourResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__ModifyPresetTourResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__ModifyPresetTourResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__ModifyPresetTourResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__ModifyPresetTourResponse * SOAP_FMAC4 soap_in__tptz__ModifyPresetTourResponse(struct soap *soap, const char *tag, _tptz__ModifyPresetTourResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__ModifyPresetTourResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__ModifyPresetTourResponse, sizeof(_tptz__ModifyPresetTourResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__ModifyPresetTourResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__ModifyPresetTourResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__ModifyPresetTourResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__ModifyPresetTourResponse, 0, sizeof(_tptz__ModifyPresetTourResponse), 0, soap_copy__tptz__ModifyPresetTourResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__ModifyPresetTourResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__ModifyPresetTourResponse);
	if (this->soap_out(soap, tag?tag:"tptz:ModifyPresetTourResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__ModifyPresetTourResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__ModifyPresetTourResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__ModifyPresetTourResponse * SOAP_FMAC4 soap_get__tptz__ModifyPresetTourResponse(struct soap *soap, _tptz__ModifyPresetTourResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__ModifyPresetTourResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__ModifyPresetTourResponse * SOAP_FMAC2 soap_instantiate__tptz__ModifyPresetTourResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__ModifyPresetTourResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__ModifyPresetTourResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__ModifyPresetTourResponse);
		if (size)
			*size = sizeof(_tptz__ModifyPresetTourResponse);
		((_tptz__ModifyPresetTourResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__ModifyPresetTourResponse, n);
		if (size)
			*size = n * sizeof(_tptz__ModifyPresetTourResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__ModifyPresetTourResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__ModifyPresetTourResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__ModifyPresetTourResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__ModifyPresetTourResponse %p -> %p\n", q, p));
	*(_tptz__ModifyPresetTourResponse*)p = *(_tptz__ModifyPresetTourResponse*)q;
}

void _tptz__ModifyPresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__ModifyPresetTour::ProfileToken);
	this->_tptz__ModifyPresetTour::PresetTour = NULL;
	/* transient soap skipped */
}

void _tptz__ModifyPresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__ModifyPresetTour::ProfileToken);
	soap_serialize_PointerTott__PresetTour(soap, &this->_tptz__ModifyPresetTour::PresetTour);
	/* transient soap skipped */
#endif
}

int _tptz__ModifyPresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__ModifyPresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__ModifyPresetTour(struct soap *soap, const char *tag, int id, const _tptz__ModifyPresetTour *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__ModifyPresetTour), type))
		return soap->error;
	if (a->_tptz__ModifyPresetTour::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__ModifyPresetTour::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__ModifyPresetTour::PresetTour)
	{	if (soap_out_PointerTott__PresetTour(soap, "tptz:PresetTour", -1, &a->_tptz__ModifyPresetTour::PresetTour, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTour"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__ModifyPresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__ModifyPresetTour(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__ModifyPresetTour * SOAP_FMAC4 soap_in__tptz__ModifyPresetTour(struct soap *soap, const char *tag, _tptz__ModifyPresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__ModifyPresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__ModifyPresetTour, sizeof(_tptz__ModifyPresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__ModifyPresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__ModifyPresetTour *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetTour1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__ModifyPresetTour::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetTour1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PresetTour(soap, "tptz:PresetTour", &(a->_tptz__ModifyPresetTour::PresetTour), "tt:PresetTour"))
				{	soap_flag_PresetTour1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__ModifyPresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__ModifyPresetTour, 0, sizeof(_tptz__ModifyPresetTour), 0, soap_copy__tptz__ModifyPresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetTour1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__ModifyPresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__ModifyPresetTour);
	if (this->soap_out(soap, tag?tag:"tptz:ModifyPresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__ModifyPresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__ModifyPresetTour(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__ModifyPresetTour * SOAP_FMAC4 soap_get__tptz__ModifyPresetTour(struct soap *soap, _tptz__ModifyPresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__ModifyPresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__ModifyPresetTour * SOAP_FMAC2 soap_instantiate__tptz__ModifyPresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__ModifyPresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__ModifyPresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__ModifyPresetTour);
		if (size)
			*size = sizeof(_tptz__ModifyPresetTour);
		((_tptz__ModifyPresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__ModifyPresetTour, n);
		if (size)
			*size = n * sizeof(_tptz__ModifyPresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__ModifyPresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__ModifyPresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__ModifyPresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__ModifyPresetTour %p -> %p\n", q, p));
	*(_tptz__ModifyPresetTour*)p = *(_tptz__ModifyPresetTour*)q;
}

void _tptz__CreatePresetTourResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__CreatePresetTourResponse::PresetTourToken);
	/* transient soap skipped */
}

void _tptz__CreatePresetTourResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__CreatePresetTourResponse::PresetTourToken);
	/* transient soap skipped */
#endif
}

int _tptz__CreatePresetTourResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__CreatePresetTourResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__CreatePresetTourResponse(struct soap *soap, const char *tag, int id, const _tptz__CreatePresetTourResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__CreatePresetTourResponse), type))
		return soap->error;
	if (a->PresetTourToken)
		soap_element_result(soap, "tptz:PresetTourToken");
	if (a->_tptz__CreatePresetTourResponse::PresetTourToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetTourToken", -1, &a->_tptz__CreatePresetTourResponse::PresetTourToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTourToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__CreatePresetTourResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__CreatePresetTourResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__CreatePresetTourResponse * SOAP_FMAC4 soap_in__tptz__CreatePresetTourResponse(struct soap *soap, const char *tag, _tptz__CreatePresetTourResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__CreatePresetTourResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__CreatePresetTourResponse, sizeof(_tptz__CreatePresetTourResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__CreatePresetTourResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__CreatePresetTourResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PresetTourToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PresetTourToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetTourToken", &(a->_tptz__CreatePresetTourResponse::PresetTourToken), "tt:ReferenceToken"))
				{	soap_flag_PresetTourToken1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PresetTourToken");
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
	{	a = (_tptz__CreatePresetTourResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__CreatePresetTourResponse, 0, sizeof(_tptz__CreatePresetTourResponse), 0, soap_copy__tptz__CreatePresetTourResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetTourToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__CreatePresetTourResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__CreatePresetTourResponse);
	if (this->soap_out(soap, tag?tag:"tptz:CreatePresetTourResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__CreatePresetTourResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__CreatePresetTourResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__CreatePresetTourResponse * SOAP_FMAC4 soap_get__tptz__CreatePresetTourResponse(struct soap *soap, _tptz__CreatePresetTourResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__CreatePresetTourResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__CreatePresetTourResponse * SOAP_FMAC2 soap_instantiate__tptz__CreatePresetTourResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__CreatePresetTourResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__CreatePresetTourResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__CreatePresetTourResponse);
		if (size)
			*size = sizeof(_tptz__CreatePresetTourResponse);
		((_tptz__CreatePresetTourResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__CreatePresetTourResponse, n);
		if (size)
			*size = n * sizeof(_tptz__CreatePresetTourResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__CreatePresetTourResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__CreatePresetTourResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__CreatePresetTourResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__CreatePresetTourResponse %p -> %p\n", q, p));
	*(_tptz__CreatePresetTourResponse*)p = *(_tptz__CreatePresetTourResponse*)q;
}

void _tptz__CreatePresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__CreatePresetTour::ProfileToken);
	/* transient soap skipped */
}

void _tptz__CreatePresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__CreatePresetTour::ProfileToken);
	/* transient soap skipped */
#endif
}

int _tptz__CreatePresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__CreatePresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__CreatePresetTour(struct soap *soap, const char *tag, int id, const _tptz__CreatePresetTour *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__CreatePresetTour), type))
		return soap->error;
	if (a->_tptz__CreatePresetTour::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__CreatePresetTour::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__CreatePresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__CreatePresetTour(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__CreatePresetTour * SOAP_FMAC4 soap_in__tptz__CreatePresetTour(struct soap *soap, const char *tag, _tptz__CreatePresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__CreatePresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__CreatePresetTour, sizeof(_tptz__CreatePresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__CreatePresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__CreatePresetTour *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__CreatePresetTour::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__CreatePresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__CreatePresetTour, 0, sizeof(_tptz__CreatePresetTour), 0, soap_copy__tptz__CreatePresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__CreatePresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__CreatePresetTour);
	if (this->soap_out(soap, tag?tag:"tptz:CreatePresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__CreatePresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__CreatePresetTour(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__CreatePresetTour * SOAP_FMAC4 soap_get__tptz__CreatePresetTour(struct soap *soap, _tptz__CreatePresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__CreatePresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__CreatePresetTour * SOAP_FMAC2 soap_instantiate__tptz__CreatePresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__CreatePresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__CreatePresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__CreatePresetTour);
		if (size)
			*size = sizeof(_tptz__CreatePresetTour);
		((_tptz__CreatePresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__CreatePresetTour, n);
		if (size)
			*size = n * sizeof(_tptz__CreatePresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__CreatePresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__CreatePresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__CreatePresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__CreatePresetTour %p -> %p\n", q, p));
	*(_tptz__CreatePresetTour*)p = *(_tptz__CreatePresetTour*)q;
}

void _tptz__GetPresetTourOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetPresetTourOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _tptz__GetPresetTourOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourOptions(soap, &this->_tptz__GetPresetTourOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetTourOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetTourOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetTourOptionsResponse(struct soap *soap, const char *tag, int id, const _tptz__GetPresetTourOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetTourOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "tptz:Options");
	if (a->_tptz__GetPresetTourOptionsResponse::Options)
	{	if (soap_out_PointerTott__PTZPresetTourOptions(soap, "tptz:Options", -1, &a->_tptz__GetPresetTourOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetTourOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetTourOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetTourOptionsResponse * SOAP_FMAC4 soap_in__tptz__GetPresetTourOptionsResponse(struct soap *soap, const char *tag, _tptz__GetPresetTourOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetTourOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetTourOptionsResponse, sizeof(_tptz__GetPresetTourOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetTourOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetTourOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourOptions(soap, "tptz:Options", &(a->_tptz__GetPresetTourOptionsResponse::Options), "tt:PTZPresetTourOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:Options");
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
	{	a = (_tptz__GetPresetTourOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetTourOptionsResponse, 0, sizeof(_tptz__GetPresetTourOptionsResponse), 0, soap_copy__tptz__GetPresetTourOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresetTourOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetTourOptionsResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetTourOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetTourOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetTourOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetTourOptionsResponse * SOAP_FMAC4 soap_get__tptz__GetPresetTourOptionsResponse(struct soap *soap, _tptz__GetPresetTourOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetTourOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetTourOptionsResponse * SOAP_FMAC2 soap_instantiate__tptz__GetPresetTourOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetTourOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetTourOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetTourOptionsResponse);
		if (size)
			*size = sizeof(_tptz__GetPresetTourOptionsResponse);
		((_tptz__GetPresetTourOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetTourOptionsResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetTourOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetTourOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetTourOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetTourOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetTourOptionsResponse %p -> %p\n", q, p));
	*(_tptz__GetPresetTourOptionsResponse*)p = *(_tptz__GetPresetTourOptionsResponse*)q;
}

void _tptz__GetPresetTourOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresetTourOptions::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresetTourOptions::PresetTourToken);
	/* transient soap skipped */
}

void _tptz__GetPresetTourOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresetTourOptions::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresetTourOptions::PresetTourToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetTourOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetTourOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetTourOptions(struct soap *soap, const char *tag, int id, const _tptz__GetPresetTourOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetTourOptions), type))
		return soap->error;
	if (a->_tptz__GetPresetTourOptions::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GetPresetTourOptions::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetTourToken", -1, &(a->_tptz__GetPresetTourOptions::PresetTourToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetTourOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetTourOptions(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetTourOptions * SOAP_FMAC4 soap_in__tptz__GetPresetTourOptions(struct soap *soap, const char *tag, _tptz__GetPresetTourOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetTourOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetTourOptions, sizeof(_tptz__GetPresetTourOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetTourOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetTourOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetTourToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GetPresetTourOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetTourToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetTourToken", &(a->_tptz__GetPresetTourOptions::PresetTourToken), "tt:ReferenceToken"))
				{	soap_flag_PresetTourToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetPresetTourOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetTourOptions, 0, sizeof(_tptz__GetPresetTourOptions), 0, soap_copy__tptz__GetPresetTourOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresetTourOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetTourOptions);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetTourOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetTourOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetTourOptions(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetTourOptions * SOAP_FMAC4 soap_get__tptz__GetPresetTourOptions(struct soap *soap, _tptz__GetPresetTourOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetTourOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetTourOptions * SOAP_FMAC2 soap_instantiate__tptz__GetPresetTourOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetTourOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetTourOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetTourOptions);
		if (size)
			*size = sizeof(_tptz__GetPresetTourOptions);
		((_tptz__GetPresetTourOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetTourOptions, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetTourOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetTourOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetTourOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetTourOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetTourOptions %p -> %p\n", q, p));
	*(_tptz__GetPresetTourOptions*)p = *(_tptz__GetPresetTourOptions*)q;
}

void _tptz__GetPresetTourResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetPresetTourResponse::PresetTour = NULL;
	/* transient soap skipped */
}

void _tptz__GetPresetTourResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PresetTour(soap, &this->_tptz__GetPresetTourResponse::PresetTour);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetTourResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetTourResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetTourResponse(struct soap *soap, const char *tag, int id, const _tptz__GetPresetTourResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetTourResponse), type))
		return soap->error;
	if (a->PresetTour)
		soap_element_result(soap, "tptz:PresetTour");
	if (a->_tptz__GetPresetTourResponse::PresetTour)
	{	if (soap_out_PointerTott__PresetTour(soap, "tptz:PresetTour", -1, &a->_tptz__GetPresetTourResponse::PresetTour, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTour"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetTourResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetTourResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetTourResponse * SOAP_FMAC4 soap_in__tptz__GetPresetTourResponse(struct soap *soap, const char *tag, _tptz__GetPresetTourResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetTourResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetTourResponse, sizeof(_tptz__GetPresetTourResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetTourResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetTourResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PresetTour1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PresetTour1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PresetTour(soap, "tptz:PresetTour", &(a->_tptz__GetPresetTourResponse::PresetTour), "tt:PresetTour"))
				{	soap_flag_PresetTour1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PresetTour");
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
	{	a = (_tptz__GetPresetTourResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetTourResponse, 0, sizeof(_tptz__GetPresetTourResponse), 0, soap_copy__tptz__GetPresetTourResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetTour1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresetTourResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetTourResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetTourResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetTourResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetTourResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetTourResponse * SOAP_FMAC4 soap_get__tptz__GetPresetTourResponse(struct soap *soap, _tptz__GetPresetTourResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetTourResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetTourResponse * SOAP_FMAC2 soap_instantiate__tptz__GetPresetTourResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetTourResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetTourResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetTourResponse);
		if (size)
			*size = sizeof(_tptz__GetPresetTourResponse);
		((_tptz__GetPresetTourResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetTourResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetTourResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetTourResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetTourResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetTourResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetTourResponse %p -> %p\n", q, p));
	*(_tptz__GetPresetTourResponse*)p = *(_tptz__GetPresetTourResponse*)q;
}

void _tptz__GetPresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresetTour::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresetTour::PresetTourToken);
	/* transient soap skipped */
}

void _tptz__GetPresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresetTour::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresetTour::PresetTourToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetTour(struct soap *soap, const char *tag, int id, const _tptz__GetPresetTour *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetTour), type))
		return soap->error;
	if (a->_tptz__GetPresetTour::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GetPresetTour::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__GetPresetTour::PresetTourToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetTourToken", -1, &a->_tptz__GetPresetTour::PresetTourToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetTourToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetTour(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetTour * SOAP_FMAC4 soap_in__tptz__GetPresetTour(struct soap *soap, const char *tag, _tptz__GetPresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetTour, sizeof(_tptz__GetPresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetTour *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetTourToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GetPresetTour::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetTourToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetTourToken", &(a->_tptz__GetPresetTour::PresetTourToken), "tt:ReferenceToken"))
				{	soap_flag_PresetTourToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetPresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetTour, 0, sizeof(_tptz__GetPresetTour), 0, soap_copy__tptz__GetPresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetTourToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetTour);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetTour(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetTour * SOAP_FMAC4 soap_get__tptz__GetPresetTour(struct soap *soap, _tptz__GetPresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetTour * SOAP_FMAC2 soap_instantiate__tptz__GetPresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetTour);
		if (size)
			*size = sizeof(_tptz__GetPresetTour);
		((_tptz__GetPresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetTour, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetTour %p -> %p\n", q, p));
	*(_tptz__GetPresetTour*)p = *(_tptz__GetPresetTour*)q;
}

void _tptz__GetPresetToursResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetPresetToursResponse::__sizePresetTour = 0;
	this->_tptz__GetPresetToursResponse::PresetTour = NULL;
	/* transient soap skipped */
}

void _tptz__GetPresetToursResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tptz__GetPresetToursResponse::PresetTour)
	{	int i;
		for (i = 0; i < this->_tptz__GetPresetToursResponse::__sizePresetTour; i++)
		{
			soap_serialize_PointerTott__PresetTour(soap, this->_tptz__GetPresetToursResponse::PresetTour + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetToursResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetToursResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetToursResponse(struct soap *soap, const char *tag, int id, const _tptz__GetPresetToursResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetToursResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizePresetTour");
	if (a->_tptz__GetPresetToursResponse::PresetTour)
	{	int i;
		for (i = 0; i < a->_tptz__GetPresetToursResponse::__sizePresetTour; i++)
			if (soap_out_PointerTott__PresetTour(soap, "tptz:PresetTour", -1, a->_tptz__GetPresetToursResponse::PresetTour + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetToursResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetToursResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetToursResponse * SOAP_FMAC4 soap_in__tptz__GetPresetToursResponse(struct soap *soap, const char *tag, _tptz__GetPresetToursResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetToursResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetToursResponse, sizeof(_tptz__GetPresetToursResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetToursResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetToursResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_PresetTour1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tptz:PresetTour", 1, NULL))
			{	if (a->_tptz__GetPresetToursResponse::PresetTour == NULL)
				{	if (soap_blist_PresetTour1 == NULL)
						soap_blist_PresetTour1 = soap_new_block(soap);
					a->_tptz__GetPresetToursResponse::PresetTour = (tt__PresetTour **)soap_push_block(soap, soap_blist_PresetTour1, sizeof(tt__PresetTour *));
					if (a->_tptz__GetPresetToursResponse::PresetTour == NULL)
						return NULL;
					*a->_tptz__GetPresetToursResponse::PresetTour = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PresetTour(soap, "tptz:PresetTour", a->_tptz__GetPresetToursResponse::PresetTour, "tt:PresetTour"))
				{	a->_tptz__GetPresetToursResponse::__sizePresetTour++;
					a->_tptz__GetPresetToursResponse::PresetTour = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizePresetTour");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tptz__GetPresetToursResponse::PresetTour)
			soap_pop_block(soap, soap_blist_PresetTour1);
		if (a->_tptz__GetPresetToursResponse::__sizePresetTour)
			a->_tptz__GetPresetToursResponse::PresetTour = (tt__PresetTour **)soap_save_block(soap, soap_blist_PresetTour1, NULL, 1);
		else
		{	a->_tptz__GetPresetToursResponse::PresetTour = NULL;
			if (soap_blist_PresetTour1)
				soap_end_block(soap, soap_blist_PresetTour1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tptz__GetPresetToursResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetToursResponse, 0, sizeof(_tptz__GetPresetToursResponse), 0, soap_copy__tptz__GetPresetToursResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetPresetToursResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetToursResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetToursResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetToursResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetToursResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetToursResponse * SOAP_FMAC4 soap_get__tptz__GetPresetToursResponse(struct soap *soap, _tptz__GetPresetToursResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetToursResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetToursResponse * SOAP_FMAC2 soap_instantiate__tptz__GetPresetToursResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetToursResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetToursResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetToursResponse);
		if (size)
			*size = sizeof(_tptz__GetPresetToursResponse);
		((_tptz__GetPresetToursResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetToursResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetToursResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetToursResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetToursResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetToursResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetToursResponse %p -> %p\n", q, p));
	*(_tptz__GetPresetToursResponse*)p = *(_tptz__GetPresetToursResponse*)q;
}

void _tptz__GetPresetTours::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresetTours::ProfileToken);
	/* transient soap skipped */
}

void _tptz__GetPresetTours::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresetTours::ProfileToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetTours::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetTours(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetTours(struct soap *soap, const char *tag, int id, const _tptz__GetPresetTours *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetTours), type))
		return soap->error;
	if (a->_tptz__GetPresetTours::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GetPresetTours::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetTours::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetTours(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetTours * SOAP_FMAC4 soap_in__tptz__GetPresetTours(struct soap *soap, const char *tag, _tptz__GetPresetTours *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetTours *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetTours, sizeof(_tptz__GetPresetTours), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetTours)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetTours *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GetPresetTours::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetPresetTours *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetTours, 0, sizeof(_tptz__GetPresetTours), 0, soap_copy__tptz__GetPresetTours);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresetTours::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetTours);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetTours", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetTours::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetTours(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetTours * SOAP_FMAC4 soap_get__tptz__GetPresetTours(struct soap *soap, _tptz__GetPresetTours *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetTours(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetTours * SOAP_FMAC2 soap_instantiate__tptz__GetPresetTours(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetTours(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetTours, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetTours);
		if (size)
			*size = sizeof(_tptz__GetPresetTours);
		((_tptz__GetPresetTours*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetTours, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetTours);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetTours*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetTours*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetTours(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetTours %p -> %p\n", q, p));
	*(_tptz__GetPresetTours*)p = *(_tptz__GetPresetTours*)q;
}

void _tptz__StopResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__StopResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__StopResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__StopResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__StopResponse(struct soap *soap, const char *tag, int id, const _tptz__StopResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__StopResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__StopResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__StopResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__StopResponse * SOAP_FMAC4 soap_in__tptz__StopResponse(struct soap *soap, const char *tag, _tptz__StopResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__StopResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__StopResponse, sizeof(_tptz__StopResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__StopResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__StopResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__StopResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__StopResponse, 0, sizeof(_tptz__StopResponse), 0, soap_copy__tptz__StopResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__StopResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__StopResponse);
	if (this->soap_out(soap, tag?tag:"tptz:StopResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__StopResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__StopResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__StopResponse * SOAP_FMAC4 soap_get__tptz__StopResponse(struct soap *soap, _tptz__StopResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__StopResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__StopResponse * SOAP_FMAC2 soap_instantiate__tptz__StopResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__StopResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__StopResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__StopResponse);
		if (size)
			*size = sizeof(_tptz__StopResponse);
		((_tptz__StopResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__StopResponse, n);
		if (size)
			*size = n * sizeof(_tptz__StopResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__StopResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__StopResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__StopResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__StopResponse %p -> %p\n", q, p));
	*(_tptz__StopResponse*)p = *(_tptz__StopResponse*)q;
}

void _tptz__Stop::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__Stop::ProfileToken);
	this->_tptz__Stop::PanTilt = NULL;
	this->_tptz__Stop::Zoom = NULL;
	/* transient soap skipped */
}

void _tptz__Stop::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__Stop::ProfileToken);
	soap_serialize_PointerTobool(soap, &this->_tptz__Stop::PanTilt);
	soap_serialize_PointerTobool(soap, &this->_tptz__Stop::Zoom);
	/* transient soap skipped */
#endif
}

int _tptz__Stop::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__Stop(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__Stop(struct soap *soap, const char *tag, int id, const _tptz__Stop *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__Stop), type))
		return soap->error;
	if (a->_tptz__Stop::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__Stop::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tptz:PanTilt", -1, &(a->_tptz__Stop::PanTilt), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tptz:Zoom", -1, &(a->_tptz__Stop::Zoom), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__Stop::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__Stop(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__Stop * SOAP_FMAC4 soap_in__tptz__Stop(struct soap *soap, const char *tag, _tptz__Stop *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__Stop *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__Stop, sizeof(_tptz__Stop), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__Stop)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__Stop *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PanTilt1 = 1;
	size_t soap_flag_Zoom1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__Stop::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PanTilt1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tptz:PanTilt", &(a->_tptz__Stop::PanTilt), "xsd:boolean"))
				{	soap_flag_PanTilt1--;
					continue;
				}
			if (soap_flag_Zoom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tptz:Zoom", &(a->_tptz__Stop::Zoom), "xsd:boolean"))
				{	soap_flag_Zoom1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__Stop *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__Stop, 0, sizeof(_tptz__Stop), 0, soap_copy__tptz__Stop);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__Stop::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__Stop);
	if (this->soap_out(soap, tag?tag:"tptz:Stop", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__Stop::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__Stop(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__Stop * SOAP_FMAC4 soap_get__tptz__Stop(struct soap *soap, _tptz__Stop *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__Stop(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__Stop * SOAP_FMAC2 soap_instantiate__tptz__Stop(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__Stop(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__Stop, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__Stop);
		if (size)
			*size = sizeof(_tptz__Stop);
		((_tptz__Stop*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__Stop, n);
		if (size)
			*size = n * sizeof(_tptz__Stop);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__Stop*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__Stop*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__Stop(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__Stop %p -> %p\n", q, p));
	*(_tptz__Stop*)p = *(_tptz__Stop*)q;
}

void _tptz__AbsoluteMoveResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__AbsoluteMoveResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__AbsoluteMoveResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__AbsoluteMoveResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__AbsoluteMoveResponse(struct soap *soap, const char *tag, int id, const _tptz__AbsoluteMoveResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__AbsoluteMoveResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__AbsoluteMoveResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__AbsoluteMoveResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__AbsoluteMoveResponse * SOAP_FMAC4 soap_in__tptz__AbsoluteMoveResponse(struct soap *soap, const char *tag, _tptz__AbsoluteMoveResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__AbsoluteMoveResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__AbsoluteMoveResponse, sizeof(_tptz__AbsoluteMoveResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__AbsoluteMoveResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__AbsoluteMoveResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__AbsoluteMoveResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__AbsoluteMoveResponse, 0, sizeof(_tptz__AbsoluteMoveResponse), 0, soap_copy__tptz__AbsoluteMoveResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__AbsoluteMoveResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__AbsoluteMoveResponse);
	if (this->soap_out(soap, tag?tag:"tptz:AbsoluteMoveResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__AbsoluteMoveResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__AbsoluteMoveResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__AbsoluteMoveResponse * SOAP_FMAC4 soap_get__tptz__AbsoluteMoveResponse(struct soap *soap, _tptz__AbsoluteMoveResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__AbsoluteMoveResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__AbsoluteMoveResponse * SOAP_FMAC2 soap_instantiate__tptz__AbsoluteMoveResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__AbsoluteMoveResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__AbsoluteMoveResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__AbsoluteMoveResponse);
		if (size)
			*size = sizeof(_tptz__AbsoluteMoveResponse);
		((_tptz__AbsoluteMoveResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__AbsoluteMoveResponse, n);
		if (size)
			*size = n * sizeof(_tptz__AbsoluteMoveResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__AbsoluteMoveResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__AbsoluteMoveResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__AbsoluteMoveResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__AbsoluteMoveResponse %p -> %p\n", q, p));
	*(_tptz__AbsoluteMoveResponse*)p = *(_tptz__AbsoluteMoveResponse*)q;
}

void _tptz__AbsoluteMove::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__AbsoluteMove::ProfileToken);
	this->_tptz__AbsoluteMove::Position = NULL;
	this->_tptz__AbsoluteMove::Speed = NULL;
	/* transient soap skipped */
}

void _tptz__AbsoluteMove::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__AbsoluteMove::ProfileToken);
	soap_serialize_PointerTott__PTZVector(soap, &this->_tptz__AbsoluteMove::Position);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->_tptz__AbsoluteMove::Speed);
	/* transient soap skipped */
#endif
}

int _tptz__AbsoluteMove::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__AbsoluteMove(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__AbsoluteMove(struct soap *soap, const char *tag, int id, const _tptz__AbsoluteMove *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__AbsoluteMove), type))
		return soap->error;
	if (a->_tptz__AbsoluteMove::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__AbsoluteMove::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__AbsoluteMove::Position)
	{	if (soap_out_PointerTott__PTZVector(soap, "tptz:Position", -1, &a->_tptz__AbsoluteMove::Position, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:Position"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tptz:Speed", -1, &(a->_tptz__AbsoluteMove::Speed), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__AbsoluteMove::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__AbsoluteMove(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__AbsoluteMove * SOAP_FMAC4 soap_in__tptz__AbsoluteMove(struct soap *soap, const char *tag, _tptz__AbsoluteMove *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__AbsoluteMove *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__AbsoluteMove, sizeof(_tptz__AbsoluteMove), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__AbsoluteMove)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__AbsoluteMove *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__AbsoluteMove::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tptz:Position", &(a->_tptz__AbsoluteMove::Position), "tt:PTZVector"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tptz:Speed", &(a->_tptz__AbsoluteMove::Speed), "tt:PTZSpeed"))
				{	soap_flag_Speed1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__AbsoluteMove *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__AbsoluteMove, 0, sizeof(_tptz__AbsoluteMove), 0, soap_copy__tptz__AbsoluteMove);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_Position1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__AbsoluteMove::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__AbsoluteMove);
	if (this->soap_out(soap, tag?tag:"tptz:AbsoluteMove", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__AbsoluteMove::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__AbsoluteMove(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__AbsoluteMove * SOAP_FMAC4 soap_get__tptz__AbsoluteMove(struct soap *soap, _tptz__AbsoluteMove *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__AbsoluteMove(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__AbsoluteMove * SOAP_FMAC2 soap_instantiate__tptz__AbsoluteMove(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__AbsoluteMove(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__AbsoluteMove, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__AbsoluteMove);
		if (size)
			*size = sizeof(_tptz__AbsoluteMove);
		((_tptz__AbsoluteMove*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__AbsoluteMove, n);
		if (size)
			*size = n * sizeof(_tptz__AbsoluteMove);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__AbsoluteMove*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__AbsoluteMove*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__AbsoluteMove(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__AbsoluteMove %p -> %p\n", q, p));
	*(_tptz__AbsoluteMove*)p = *(_tptz__AbsoluteMove*)q;
}

void _tptz__RelativeMoveResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__RelativeMoveResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__RelativeMoveResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RelativeMoveResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RelativeMoveResponse(struct soap *soap, const char *tag, int id, const _tptz__RelativeMoveResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RelativeMoveResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RelativeMoveResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RelativeMoveResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RelativeMoveResponse * SOAP_FMAC4 soap_in__tptz__RelativeMoveResponse(struct soap *soap, const char *tag, _tptz__RelativeMoveResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RelativeMoveResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RelativeMoveResponse, sizeof(_tptz__RelativeMoveResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RelativeMoveResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RelativeMoveResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__RelativeMoveResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RelativeMoveResponse, 0, sizeof(_tptz__RelativeMoveResponse), 0, soap_copy__tptz__RelativeMoveResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__RelativeMoveResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RelativeMoveResponse);
	if (this->soap_out(soap, tag?tag:"tptz:RelativeMoveResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RelativeMoveResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RelativeMoveResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RelativeMoveResponse * SOAP_FMAC4 soap_get__tptz__RelativeMoveResponse(struct soap *soap, _tptz__RelativeMoveResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RelativeMoveResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RelativeMoveResponse * SOAP_FMAC2 soap_instantiate__tptz__RelativeMoveResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RelativeMoveResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RelativeMoveResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RelativeMoveResponse);
		if (size)
			*size = sizeof(_tptz__RelativeMoveResponse);
		((_tptz__RelativeMoveResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RelativeMoveResponse, n);
		if (size)
			*size = n * sizeof(_tptz__RelativeMoveResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RelativeMoveResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RelativeMoveResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RelativeMoveResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RelativeMoveResponse %p -> %p\n", q, p));
	*(_tptz__RelativeMoveResponse*)p = *(_tptz__RelativeMoveResponse*)q;
}

void _tptz__RelativeMove::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__RelativeMove::ProfileToken);
	this->_tptz__RelativeMove::Translation = NULL;
	this->_tptz__RelativeMove::Speed = NULL;
	/* transient soap skipped */
}

void _tptz__RelativeMove::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__RelativeMove::ProfileToken);
	soap_serialize_PointerTott__PTZVector(soap, &this->_tptz__RelativeMove::Translation);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->_tptz__RelativeMove::Speed);
	/* transient soap skipped */
#endif
}

int _tptz__RelativeMove::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RelativeMove(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RelativeMove(struct soap *soap, const char *tag, int id, const _tptz__RelativeMove *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RelativeMove), type))
		return soap->error;
	if (a->_tptz__RelativeMove::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__RelativeMove::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__RelativeMove::Translation)
	{	if (soap_out_PointerTott__PTZVector(soap, "tptz:Translation", -1, &a->_tptz__RelativeMove::Translation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:Translation"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tptz:Speed", -1, &(a->_tptz__RelativeMove::Speed), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RelativeMove::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RelativeMove(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RelativeMove * SOAP_FMAC4 soap_in__tptz__RelativeMove(struct soap *soap, const char *tag, _tptz__RelativeMove *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RelativeMove *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RelativeMove, sizeof(_tptz__RelativeMove), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RelativeMove)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RelativeMove *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_Translation1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__RelativeMove::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_Translation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tptz:Translation", &(a->_tptz__RelativeMove::Translation), "tt:PTZVector"))
				{	soap_flag_Translation1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tptz:Speed", &(a->_tptz__RelativeMove::Speed), "tt:PTZSpeed"))
				{	soap_flag_Speed1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__RelativeMove *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RelativeMove, 0, sizeof(_tptz__RelativeMove), 0, soap_copy__tptz__RelativeMove);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_Translation1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__RelativeMove::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RelativeMove);
	if (this->soap_out(soap, tag?tag:"tptz:RelativeMove", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RelativeMove::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RelativeMove(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RelativeMove * SOAP_FMAC4 soap_get__tptz__RelativeMove(struct soap *soap, _tptz__RelativeMove *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RelativeMove(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RelativeMove * SOAP_FMAC2 soap_instantiate__tptz__RelativeMove(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RelativeMove(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RelativeMove, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RelativeMove);
		if (size)
			*size = sizeof(_tptz__RelativeMove);
		((_tptz__RelativeMove*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RelativeMove, n);
		if (size)
			*size = n * sizeof(_tptz__RelativeMove);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RelativeMove*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RelativeMove*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RelativeMove(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RelativeMove %p -> %p\n", q, p));
	*(_tptz__RelativeMove*)p = *(_tptz__RelativeMove*)q;
}

void _tptz__ContinuousMoveResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__ContinuousMoveResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__ContinuousMoveResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__ContinuousMoveResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__ContinuousMoveResponse(struct soap *soap, const char *tag, int id, const _tptz__ContinuousMoveResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__ContinuousMoveResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__ContinuousMoveResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__ContinuousMoveResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__ContinuousMoveResponse * SOAP_FMAC4 soap_in__tptz__ContinuousMoveResponse(struct soap *soap, const char *tag, _tptz__ContinuousMoveResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__ContinuousMoveResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__ContinuousMoveResponse, sizeof(_tptz__ContinuousMoveResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__ContinuousMoveResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__ContinuousMoveResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__ContinuousMoveResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__ContinuousMoveResponse, 0, sizeof(_tptz__ContinuousMoveResponse), 0, soap_copy__tptz__ContinuousMoveResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__ContinuousMoveResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__ContinuousMoveResponse);
	if (this->soap_out(soap, tag?tag:"tptz:ContinuousMoveResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__ContinuousMoveResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__ContinuousMoveResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__ContinuousMoveResponse * SOAP_FMAC4 soap_get__tptz__ContinuousMoveResponse(struct soap *soap, _tptz__ContinuousMoveResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__ContinuousMoveResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__ContinuousMoveResponse * SOAP_FMAC2 soap_instantiate__tptz__ContinuousMoveResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__ContinuousMoveResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__ContinuousMoveResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__ContinuousMoveResponse);
		if (size)
			*size = sizeof(_tptz__ContinuousMoveResponse);
		((_tptz__ContinuousMoveResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__ContinuousMoveResponse, n);
		if (size)
			*size = n * sizeof(_tptz__ContinuousMoveResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__ContinuousMoveResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__ContinuousMoveResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__ContinuousMoveResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__ContinuousMoveResponse %p -> %p\n", q, p));
	*(_tptz__ContinuousMoveResponse*)p = *(_tptz__ContinuousMoveResponse*)q;
}

void _tptz__ContinuousMove::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__ContinuousMove::ProfileToken);
	this->_tptz__ContinuousMove::Velocity = NULL;
	this->_tptz__ContinuousMove::Timeout = NULL;
	/* transient soap skipped */
}

void _tptz__ContinuousMove::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__ContinuousMove::ProfileToken);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->_tptz__ContinuousMove::Velocity);
	soap_serialize_PointerToxsd__duration(soap, &this->_tptz__ContinuousMove::Timeout);
	/* transient soap skipped */
#endif
}

int _tptz__ContinuousMove::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__ContinuousMove(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__ContinuousMove(struct soap *soap, const char *tag, int id, const _tptz__ContinuousMove *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__ContinuousMove), type))
		return soap->error;
	if (a->_tptz__ContinuousMove::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__ContinuousMove::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__ContinuousMove::Velocity)
	{	if (soap_out_PointerTott__PTZSpeed(soap, "tptz:Velocity", -1, &a->_tptz__ContinuousMove::Velocity, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:Velocity"))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tptz:Timeout", -1, &(a->_tptz__ContinuousMove::Timeout), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__ContinuousMove::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__ContinuousMove(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__ContinuousMove * SOAP_FMAC4 soap_in__tptz__ContinuousMove(struct soap *soap, const char *tag, _tptz__ContinuousMove *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__ContinuousMove *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__ContinuousMove, sizeof(_tptz__ContinuousMove), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__ContinuousMove)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__ContinuousMove *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_Velocity1 = 1;
	size_t soap_flag_Timeout1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__ContinuousMove::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_Velocity1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tptz:Velocity", &(a->_tptz__ContinuousMove::Velocity), "tt:PTZSpeed"))
				{	soap_flag_Velocity1--;
					continue;
				}
			if (soap_flag_Timeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tptz:Timeout", &(a->_tptz__ContinuousMove::Timeout), "xsd:duration"))
				{	soap_flag_Timeout1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__ContinuousMove *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__ContinuousMove, 0, sizeof(_tptz__ContinuousMove), 0, soap_copy__tptz__ContinuousMove);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_Velocity1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__ContinuousMove::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__ContinuousMove);
	if (this->soap_out(soap, tag?tag:"tptz:ContinuousMove", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__ContinuousMove::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__ContinuousMove(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__ContinuousMove * SOAP_FMAC4 soap_get__tptz__ContinuousMove(struct soap *soap, _tptz__ContinuousMove *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__ContinuousMove(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__ContinuousMove * SOAP_FMAC2 soap_instantiate__tptz__ContinuousMove(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__ContinuousMove(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__ContinuousMove, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__ContinuousMove);
		if (size)
			*size = sizeof(_tptz__ContinuousMove);
		((_tptz__ContinuousMove*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__ContinuousMove, n);
		if (size)
			*size = n * sizeof(_tptz__ContinuousMove);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__ContinuousMove*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__ContinuousMove*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__ContinuousMove(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__ContinuousMove %p -> %p\n", q, p));
	*(_tptz__ContinuousMove*)p = *(_tptz__ContinuousMove*)q;
}

void _tptz__SetHomePositionResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__SetHomePositionResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__SetHomePositionResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetHomePositionResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetHomePositionResponse(struct soap *soap, const char *tag, int id, const _tptz__SetHomePositionResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetHomePositionResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetHomePositionResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetHomePositionResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetHomePositionResponse * SOAP_FMAC4 soap_in__tptz__SetHomePositionResponse(struct soap *soap, const char *tag, _tptz__SetHomePositionResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetHomePositionResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetHomePositionResponse, sizeof(_tptz__SetHomePositionResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetHomePositionResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetHomePositionResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__SetHomePositionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetHomePositionResponse, 0, sizeof(_tptz__SetHomePositionResponse), 0, soap_copy__tptz__SetHomePositionResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__SetHomePositionResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetHomePositionResponse);
	if (this->soap_out(soap, tag?tag:"tptz:SetHomePositionResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetHomePositionResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetHomePositionResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetHomePositionResponse * SOAP_FMAC4 soap_get__tptz__SetHomePositionResponse(struct soap *soap, _tptz__SetHomePositionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetHomePositionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetHomePositionResponse * SOAP_FMAC2 soap_instantiate__tptz__SetHomePositionResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetHomePositionResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetHomePositionResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetHomePositionResponse);
		if (size)
			*size = sizeof(_tptz__SetHomePositionResponse);
		((_tptz__SetHomePositionResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetHomePositionResponse, n);
		if (size)
			*size = n * sizeof(_tptz__SetHomePositionResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetHomePositionResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetHomePositionResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetHomePositionResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetHomePositionResponse %p -> %p\n", q, p));
	*(_tptz__SetHomePositionResponse*)p = *(_tptz__SetHomePositionResponse*)q;
}

void _tptz__SetHomePosition::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__SetHomePosition::ProfileToken);
	/* transient soap skipped */
}

void _tptz__SetHomePosition::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__SetHomePosition::ProfileToken);
	/* transient soap skipped */
#endif
}

int _tptz__SetHomePosition::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetHomePosition(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetHomePosition(struct soap *soap, const char *tag, int id, const _tptz__SetHomePosition *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetHomePosition), type))
		return soap->error;
	if (a->_tptz__SetHomePosition::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__SetHomePosition::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetHomePosition::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetHomePosition(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetHomePosition * SOAP_FMAC4 soap_in__tptz__SetHomePosition(struct soap *soap, const char *tag, _tptz__SetHomePosition *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetHomePosition *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetHomePosition, sizeof(_tptz__SetHomePosition), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetHomePosition)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetHomePosition *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__SetHomePosition::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__SetHomePosition *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetHomePosition, 0, sizeof(_tptz__SetHomePosition), 0, soap_copy__tptz__SetHomePosition);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SetHomePosition::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetHomePosition);
	if (this->soap_out(soap, tag?tag:"tptz:SetHomePosition", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetHomePosition::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetHomePosition(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetHomePosition * SOAP_FMAC4 soap_get__tptz__SetHomePosition(struct soap *soap, _tptz__SetHomePosition *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetHomePosition(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetHomePosition * SOAP_FMAC2 soap_instantiate__tptz__SetHomePosition(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetHomePosition(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetHomePosition, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetHomePosition);
		if (size)
			*size = sizeof(_tptz__SetHomePosition);
		((_tptz__SetHomePosition*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetHomePosition, n);
		if (size)
			*size = n * sizeof(_tptz__SetHomePosition);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetHomePosition*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetHomePosition*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetHomePosition(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetHomePosition %p -> %p\n", q, p));
	*(_tptz__SetHomePosition*)p = *(_tptz__SetHomePosition*)q;
}

void _tptz__GotoHomePositionResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__GotoHomePositionResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__GotoHomePositionResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GotoHomePositionResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GotoHomePositionResponse(struct soap *soap, const char *tag, int id, const _tptz__GotoHomePositionResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GotoHomePositionResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GotoHomePositionResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GotoHomePositionResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GotoHomePositionResponse * SOAP_FMAC4 soap_in__tptz__GotoHomePositionResponse(struct soap *soap, const char *tag, _tptz__GotoHomePositionResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GotoHomePositionResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GotoHomePositionResponse, sizeof(_tptz__GotoHomePositionResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GotoHomePositionResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GotoHomePositionResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__GotoHomePositionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GotoHomePositionResponse, 0, sizeof(_tptz__GotoHomePositionResponse), 0, soap_copy__tptz__GotoHomePositionResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GotoHomePositionResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GotoHomePositionResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GotoHomePositionResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GotoHomePositionResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GotoHomePositionResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GotoHomePositionResponse * SOAP_FMAC4 soap_get__tptz__GotoHomePositionResponse(struct soap *soap, _tptz__GotoHomePositionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GotoHomePositionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GotoHomePositionResponse * SOAP_FMAC2 soap_instantiate__tptz__GotoHomePositionResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GotoHomePositionResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GotoHomePositionResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GotoHomePositionResponse);
		if (size)
			*size = sizeof(_tptz__GotoHomePositionResponse);
		((_tptz__GotoHomePositionResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GotoHomePositionResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GotoHomePositionResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GotoHomePositionResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GotoHomePositionResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GotoHomePositionResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GotoHomePositionResponse %p -> %p\n", q, p));
	*(_tptz__GotoHomePositionResponse*)p = *(_tptz__GotoHomePositionResponse*)q;
}

void _tptz__GotoHomePosition::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GotoHomePosition::ProfileToken);
	this->_tptz__GotoHomePosition::Speed = NULL;
	/* transient soap skipped */
}

void _tptz__GotoHomePosition::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GotoHomePosition::ProfileToken);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->_tptz__GotoHomePosition::Speed);
	/* transient soap skipped */
#endif
}

int _tptz__GotoHomePosition::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GotoHomePosition(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GotoHomePosition(struct soap *soap, const char *tag, int id, const _tptz__GotoHomePosition *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GotoHomePosition), type))
		return soap->error;
	if (a->_tptz__GotoHomePosition::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GotoHomePosition::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tptz:Speed", -1, &(a->_tptz__GotoHomePosition::Speed), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GotoHomePosition::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GotoHomePosition(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GotoHomePosition * SOAP_FMAC4 soap_in__tptz__GotoHomePosition(struct soap *soap, const char *tag, _tptz__GotoHomePosition *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GotoHomePosition *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GotoHomePosition, sizeof(_tptz__GotoHomePosition), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GotoHomePosition)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GotoHomePosition *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GotoHomePosition::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tptz:Speed", &(a->_tptz__GotoHomePosition::Speed), "tt:PTZSpeed"))
				{	soap_flag_Speed1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GotoHomePosition *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GotoHomePosition, 0, sizeof(_tptz__GotoHomePosition), 0, soap_copy__tptz__GotoHomePosition);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GotoHomePosition::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GotoHomePosition);
	if (this->soap_out(soap, tag?tag:"tptz:GotoHomePosition", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GotoHomePosition::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GotoHomePosition(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GotoHomePosition * SOAP_FMAC4 soap_get__tptz__GotoHomePosition(struct soap *soap, _tptz__GotoHomePosition *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GotoHomePosition(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GotoHomePosition * SOAP_FMAC2 soap_instantiate__tptz__GotoHomePosition(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GotoHomePosition(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GotoHomePosition, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GotoHomePosition);
		if (size)
			*size = sizeof(_tptz__GotoHomePosition);
		((_tptz__GotoHomePosition*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GotoHomePosition, n);
		if (size)
			*size = n * sizeof(_tptz__GotoHomePosition);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GotoHomePosition*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GotoHomePosition*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GotoHomePosition(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GotoHomePosition %p -> %p\n", q, p));
	*(_tptz__GotoHomePosition*)p = *(_tptz__GotoHomePosition*)q;
}

void _tptz__GetStatusResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetStatusResponse::PTZStatus = NULL;
	/* transient soap skipped */
}

void _tptz__GetStatusResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZStatus(soap, &this->_tptz__GetStatusResponse::PTZStatus);
	/* transient soap skipped */
#endif
}

int _tptz__GetStatusResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetStatusResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetStatusResponse(struct soap *soap, const char *tag, int id, const _tptz__GetStatusResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetStatusResponse), type))
		return soap->error;
	if (a->PTZStatus)
		soap_element_result(soap, "tptz:PTZStatus");
	if (a->_tptz__GetStatusResponse::PTZStatus)
	{	if (soap_out_PointerTott__PTZStatus(soap, "tptz:PTZStatus", -1, &a->_tptz__GetStatusResponse::PTZStatus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZStatus"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetStatusResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetStatusResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetStatusResponse * SOAP_FMAC4 soap_in__tptz__GetStatusResponse(struct soap *soap, const char *tag, _tptz__GetStatusResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetStatusResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetStatusResponse, sizeof(_tptz__GetStatusResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetStatusResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetStatusResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZStatus1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatus(soap, "tptz:PTZStatus", &(a->_tptz__GetStatusResponse::PTZStatus), "tt:PTZStatus"))
				{	soap_flag_PTZStatus1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PTZStatus");
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
	{	a = (_tptz__GetStatusResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetStatusResponse, 0, sizeof(_tptz__GetStatusResponse), 0, soap_copy__tptz__GetStatusResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZStatus1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetStatusResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetStatusResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetStatusResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetStatusResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetStatusResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetStatusResponse * SOAP_FMAC4 soap_get__tptz__GetStatusResponse(struct soap *soap, _tptz__GetStatusResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetStatusResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetStatusResponse * SOAP_FMAC2 soap_instantiate__tptz__GetStatusResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetStatusResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetStatusResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetStatusResponse);
		if (size)
			*size = sizeof(_tptz__GetStatusResponse);
		((_tptz__GetStatusResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetStatusResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetStatusResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetStatusResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetStatusResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetStatusResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetStatusResponse %p -> %p\n", q, p));
	*(_tptz__GetStatusResponse*)p = *(_tptz__GetStatusResponse*)q;
}

void _tptz__GetStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetStatus::ProfileToken);
	/* transient soap skipped */
}

void _tptz__GetStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetStatus::ProfileToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetStatus(struct soap *soap, const char *tag, int id, const _tptz__GetStatus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetStatus), type))
		return soap->error;
	if (a->_tptz__GetStatus::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GetStatus::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetStatus(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetStatus * SOAP_FMAC4 soap_in__tptz__GetStatus(struct soap *soap, const char *tag, _tptz__GetStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetStatus, sizeof(_tptz__GetStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetStatus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GetStatus::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetStatus, 0, sizeof(_tptz__GetStatus), 0, soap_copy__tptz__GetStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetStatus);
	if (this->soap_out(soap, tag?tag:"tptz:GetStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetStatus(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetStatus * SOAP_FMAC4 soap_get__tptz__GetStatus(struct soap *soap, _tptz__GetStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetStatus * SOAP_FMAC2 soap_instantiate__tptz__GetStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetStatus);
		if (size)
			*size = sizeof(_tptz__GetStatus);
		((_tptz__GetStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetStatus, n);
		if (size)
			*size = n * sizeof(_tptz__GetStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetStatus %p -> %p\n", q, p));
	*(_tptz__GetStatus*)p = *(_tptz__GetStatus*)q;
}

void _tptz__GotoPresetResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__GotoPresetResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__GotoPresetResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GotoPresetResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GotoPresetResponse(struct soap *soap, const char *tag, int id, const _tptz__GotoPresetResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GotoPresetResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GotoPresetResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GotoPresetResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GotoPresetResponse * SOAP_FMAC4 soap_in__tptz__GotoPresetResponse(struct soap *soap, const char *tag, _tptz__GotoPresetResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GotoPresetResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GotoPresetResponse, sizeof(_tptz__GotoPresetResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GotoPresetResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GotoPresetResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__GotoPresetResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GotoPresetResponse, 0, sizeof(_tptz__GotoPresetResponse), 0, soap_copy__tptz__GotoPresetResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GotoPresetResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GotoPresetResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GotoPresetResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GotoPresetResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GotoPresetResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GotoPresetResponse * SOAP_FMAC4 soap_get__tptz__GotoPresetResponse(struct soap *soap, _tptz__GotoPresetResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GotoPresetResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GotoPresetResponse * SOAP_FMAC2 soap_instantiate__tptz__GotoPresetResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GotoPresetResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GotoPresetResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GotoPresetResponse);
		if (size)
			*size = sizeof(_tptz__GotoPresetResponse);
		((_tptz__GotoPresetResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GotoPresetResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GotoPresetResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GotoPresetResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GotoPresetResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GotoPresetResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GotoPresetResponse %p -> %p\n", q, p));
	*(_tptz__GotoPresetResponse*)p = *(_tptz__GotoPresetResponse*)q;
}

void _tptz__GotoPreset::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GotoPreset::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GotoPreset::PresetToken);
	this->_tptz__GotoPreset::Speed = NULL;
	/* transient soap skipped */
}

void _tptz__GotoPreset::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GotoPreset::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GotoPreset::PresetToken);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->_tptz__GotoPreset::Speed);
	/* transient soap skipped */
#endif
}

int _tptz__GotoPreset::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GotoPreset(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GotoPreset(struct soap *soap, const char *tag, int id, const _tptz__GotoPreset *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GotoPreset), type))
		return soap->error;
	if (a->_tptz__GotoPreset::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GotoPreset::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__GotoPreset::PresetToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetToken", -1, &a->_tptz__GotoPreset::PresetToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetToken"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tptz:Speed", -1, &(a->_tptz__GotoPreset::Speed), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GotoPreset::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GotoPreset(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GotoPreset * SOAP_FMAC4 soap_in__tptz__GotoPreset(struct soap *soap, const char *tag, _tptz__GotoPreset *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GotoPreset *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GotoPreset, sizeof(_tptz__GotoPreset), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GotoPreset)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GotoPreset *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetToken1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GotoPreset::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetToken", &(a->_tptz__GotoPreset::PresetToken), "tt:ReferenceToken"))
				{	soap_flag_PresetToken1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tptz:Speed", &(a->_tptz__GotoPreset::Speed), "tt:PTZSpeed"))
				{	soap_flag_Speed1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GotoPreset *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GotoPreset, 0, sizeof(_tptz__GotoPreset), 0, soap_copy__tptz__GotoPreset);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GotoPreset::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GotoPreset);
	if (this->soap_out(soap, tag?tag:"tptz:GotoPreset", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GotoPreset::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GotoPreset(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GotoPreset * SOAP_FMAC4 soap_get__tptz__GotoPreset(struct soap *soap, _tptz__GotoPreset *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GotoPreset(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GotoPreset * SOAP_FMAC2 soap_instantiate__tptz__GotoPreset(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GotoPreset(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GotoPreset, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GotoPreset);
		if (size)
			*size = sizeof(_tptz__GotoPreset);
		((_tptz__GotoPreset*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GotoPreset, n);
		if (size)
			*size = n * sizeof(_tptz__GotoPreset);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GotoPreset*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GotoPreset*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GotoPreset(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GotoPreset %p -> %p\n", q, p));
	*(_tptz__GotoPreset*)p = *(_tptz__GotoPreset*)q;
}

void _tptz__RemovePresetResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__RemovePresetResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__RemovePresetResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RemovePresetResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RemovePresetResponse(struct soap *soap, const char *tag, int id, const _tptz__RemovePresetResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RemovePresetResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RemovePresetResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RemovePresetResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RemovePresetResponse * SOAP_FMAC4 soap_in__tptz__RemovePresetResponse(struct soap *soap, const char *tag, _tptz__RemovePresetResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RemovePresetResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RemovePresetResponse, sizeof(_tptz__RemovePresetResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RemovePresetResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RemovePresetResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__RemovePresetResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RemovePresetResponse, 0, sizeof(_tptz__RemovePresetResponse), 0, soap_copy__tptz__RemovePresetResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__RemovePresetResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RemovePresetResponse);
	if (this->soap_out(soap, tag?tag:"tptz:RemovePresetResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RemovePresetResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RemovePresetResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RemovePresetResponse * SOAP_FMAC4 soap_get__tptz__RemovePresetResponse(struct soap *soap, _tptz__RemovePresetResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RemovePresetResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RemovePresetResponse * SOAP_FMAC2 soap_instantiate__tptz__RemovePresetResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RemovePresetResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RemovePresetResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RemovePresetResponse);
		if (size)
			*size = sizeof(_tptz__RemovePresetResponse);
		((_tptz__RemovePresetResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RemovePresetResponse, n);
		if (size)
			*size = n * sizeof(_tptz__RemovePresetResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RemovePresetResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RemovePresetResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RemovePresetResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RemovePresetResponse %p -> %p\n", q, p));
	*(_tptz__RemovePresetResponse*)p = *(_tptz__RemovePresetResponse*)q;
}

void _tptz__RemovePreset::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__RemovePreset::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__RemovePreset::PresetToken);
	/* transient soap skipped */
}

void _tptz__RemovePreset::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__RemovePreset::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__RemovePreset::PresetToken);
	/* transient soap skipped */
#endif
}

int _tptz__RemovePreset::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__RemovePreset(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__RemovePreset(struct soap *soap, const char *tag, int id, const _tptz__RemovePreset *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__RemovePreset), type))
		return soap->error;
	if (a->_tptz__RemovePreset::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__RemovePreset::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__RemovePreset::PresetToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetToken", -1, &a->_tptz__RemovePreset::PresetToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__RemovePreset::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__RemovePreset(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__RemovePreset * SOAP_FMAC4 soap_in__tptz__RemovePreset(struct soap *soap, const char *tag, _tptz__RemovePreset *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__RemovePreset *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__RemovePreset, sizeof(_tptz__RemovePreset), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__RemovePreset)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__RemovePreset *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__RemovePreset::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetToken", &(a->_tptz__RemovePreset::PresetToken), "tt:ReferenceToken"))
				{	soap_flag_PresetToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__RemovePreset *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__RemovePreset, 0, sizeof(_tptz__RemovePreset), 0, soap_copy__tptz__RemovePreset);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_PresetToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__RemovePreset::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__RemovePreset);
	if (this->soap_out(soap, tag?tag:"tptz:RemovePreset", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__RemovePreset::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__RemovePreset(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__RemovePreset * SOAP_FMAC4 soap_get__tptz__RemovePreset(struct soap *soap, _tptz__RemovePreset *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__RemovePreset(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__RemovePreset * SOAP_FMAC2 soap_instantiate__tptz__RemovePreset(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__RemovePreset(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__RemovePreset, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__RemovePreset);
		if (size)
			*size = sizeof(_tptz__RemovePreset);
		((_tptz__RemovePreset*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__RemovePreset, n);
		if (size)
			*size = n * sizeof(_tptz__RemovePreset);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__RemovePreset*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__RemovePreset*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__RemovePreset(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__RemovePreset %p -> %p\n", q, p));
	*(_tptz__RemovePreset*)p = *(_tptz__RemovePreset*)q;
}

void _tptz__SetPresetResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__SetPresetResponse::PresetToken);
	/* transient soap skipped */
}

void _tptz__SetPresetResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__SetPresetResponse::PresetToken);
	/* transient soap skipped */
#endif
}

int _tptz__SetPresetResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetPresetResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetPresetResponse(struct soap *soap, const char *tag, int id, const _tptz__SetPresetResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetPresetResponse), type))
		return soap->error;
	if (a->PresetToken)
		soap_element_result(soap, "tptz:PresetToken");
	if (a->_tptz__SetPresetResponse::PresetToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetToken", -1, &a->_tptz__SetPresetResponse::PresetToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PresetToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetPresetResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetPresetResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetPresetResponse * SOAP_FMAC4 soap_in__tptz__SetPresetResponse(struct soap *soap, const char *tag, _tptz__SetPresetResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetPresetResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetPresetResponse, sizeof(_tptz__SetPresetResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetPresetResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetPresetResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PresetToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PresetToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetToken", &(a->_tptz__SetPresetResponse::PresetToken), "tt:ReferenceToken"))
				{	soap_flag_PresetToken1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PresetToken");
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
	{	a = (_tptz__SetPresetResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetPresetResponse, 0, sizeof(_tptz__SetPresetResponse), 0, soap_copy__tptz__SetPresetResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SetPresetResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetPresetResponse);
	if (this->soap_out(soap, tag?tag:"tptz:SetPresetResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetPresetResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetPresetResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetPresetResponse * SOAP_FMAC4 soap_get__tptz__SetPresetResponse(struct soap *soap, _tptz__SetPresetResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetPresetResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetPresetResponse * SOAP_FMAC2 soap_instantiate__tptz__SetPresetResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetPresetResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetPresetResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetPresetResponse);
		if (size)
			*size = sizeof(_tptz__SetPresetResponse);
		((_tptz__SetPresetResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetPresetResponse, n);
		if (size)
			*size = n * sizeof(_tptz__SetPresetResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetPresetResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetPresetResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetPresetResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetPresetResponse %p -> %p\n", q, p));
	*(_tptz__SetPresetResponse*)p = *(_tptz__SetPresetResponse*)q;
}

void _tptz__SetPreset::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__SetPreset::ProfileToken);
	soap_default_string(soap, &this->_tptz__SetPreset::PresetName);
	soap_default_tt__ReferenceToken(soap, &this->_tptz__SetPreset::PresetToken);
	/* transient soap skipped */
}

void _tptz__SetPreset::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__SetPreset::ProfileToken);
	soap_serialize_string(soap, &this->_tptz__SetPreset::PresetName);
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__SetPreset::PresetToken);
	/* transient soap skipped */
#endif
}

int _tptz__SetPreset::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetPreset(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetPreset(struct soap *soap, const char *tag, int id, const _tptz__SetPreset *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetPreset), type))
		return soap->error;
	if (a->_tptz__SetPreset::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__SetPreset::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (soap_out_string(soap, "tptz:PresetName", -1, &(a->_tptz__SetPreset::PresetName), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tptz:PresetToken", -1, &(a->_tptz__SetPreset::PresetToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetPreset::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetPreset(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetPreset * SOAP_FMAC4 soap_in__tptz__SetPreset(struct soap *soap, const char *tag, _tptz__SetPreset *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetPreset *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetPreset, sizeof(_tptz__SetPreset), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetPreset)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetPreset *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_PresetName1 = 1;
	size_t soap_flag_PresetToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__SetPreset::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_PresetName1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tptz:PresetName", &(a->_tptz__SetPreset::PresetName), "xsd:string"))
				{	soap_flag_PresetName1--;
					continue;
				}
			if (soap_flag_PresetToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PresetToken", &(a->_tptz__SetPreset::PresetToken), "tt:ReferenceToken"))
				{	soap_flag_PresetToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__SetPreset *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetPreset, 0, sizeof(_tptz__SetPreset), 0, soap_copy__tptz__SetPreset);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SetPreset::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetPreset);
	if (this->soap_out(soap, tag?tag:"tptz:SetPreset", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetPreset::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetPreset(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetPreset * SOAP_FMAC4 soap_get__tptz__SetPreset(struct soap *soap, _tptz__SetPreset *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetPreset(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetPreset * SOAP_FMAC2 soap_instantiate__tptz__SetPreset(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetPreset(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetPreset, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetPreset);
		if (size)
			*size = sizeof(_tptz__SetPreset);
		((_tptz__SetPreset*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetPreset, n);
		if (size)
			*size = n * sizeof(_tptz__SetPreset);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetPreset*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetPreset*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetPreset(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetPreset %p -> %p\n", q, p));
	*(_tptz__SetPreset*)p = *(_tptz__SetPreset*)q;
}

void _tptz__GetPresetsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetPresetsResponse::__sizePreset = 0;
	this->_tptz__GetPresetsResponse::Preset = NULL;
	/* transient soap skipped */
}

void _tptz__GetPresetsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tptz__GetPresetsResponse::Preset)
	{	int i;
		for (i = 0; i < this->_tptz__GetPresetsResponse::__sizePreset; i++)
		{
			soap_serialize_PointerTott__PTZPreset(soap, this->_tptz__GetPresetsResponse::Preset + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tptz__GetPresetsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresetsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresetsResponse(struct soap *soap, const char *tag, int id, const _tptz__GetPresetsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresetsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizePreset");
	if (a->_tptz__GetPresetsResponse::Preset)
	{	int i;
		for (i = 0; i < a->_tptz__GetPresetsResponse::__sizePreset; i++)
			if (soap_out_PointerTott__PTZPreset(soap, "tptz:Preset", -1, a->_tptz__GetPresetsResponse::Preset + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresetsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresetsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresetsResponse * SOAP_FMAC4 soap_in__tptz__GetPresetsResponse(struct soap *soap, const char *tag, _tptz__GetPresetsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresetsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresetsResponse, sizeof(_tptz__GetPresetsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresetsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresetsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Preset1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tptz:Preset", 1, NULL))
			{	if (a->_tptz__GetPresetsResponse::Preset == NULL)
				{	if (soap_blist_Preset1 == NULL)
						soap_blist_Preset1 = soap_new_block(soap);
					a->_tptz__GetPresetsResponse::Preset = (tt__PTZPreset **)soap_push_block(soap, soap_blist_Preset1, sizeof(tt__PTZPreset *));
					if (a->_tptz__GetPresetsResponse::Preset == NULL)
						return NULL;
					*a->_tptz__GetPresetsResponse::Preset = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PTZPreset(soap, "tptz:Preset", a->_tptz__GetPresetsResponse::Preset, "tt:PTZPreset"))
				{	a->_tptz__GetPresetsResponse::__sizePreset++;
					a->_tptz__GetPresetsResponse::Preset = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizePreset");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tptz__GetPresetsResponse::Preset)
			soap_pop_block(soap, soap_blist_Preset1);
		if (a->_tptz__GetPresetsResponse::__sizePreset)
			a->_tptz__GetPresetsResponse::Preset = (tt__PTZPreset **)soap_save_block(soap, soap_blist_Preset1, NULL, 1);
		else
		{	a->_tptz__GetPresetsResponse::Preset = NULL;
			if (soap_blist_Preset1)
				soap_end_block(soap, soap_blist_Preset1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tptz__GetPresetsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresetsResponse, 0, sizeof(_tptz__GetPresetsResponse), 0, soap_copy__tptz__GetPresetsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetPresetsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresetsResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresetsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresetsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresetsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresetsResponse * SOAP_FMAC4 soap_get__tptz__GetPresetsResponse(struct soap *soap, _tptz__GetPresetsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresetsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresetsResponse * SOAP_FMAC2 soap_instantiate__tptz__GetPresetsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresetsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresetsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresetsResponse);
		if (size)
			*size = sizeof(_tptz__GetPresetsResponse);
		((_tptz__GetPresetsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresetsResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresetsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresetsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresetsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresetsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresetsResponse %p -> %p\n", q, p));
	*(_tptz__GetPresetsResponse*)p = *(_tptz__GetPresetsResponse*)q;
}

void _tptz__GetPresets::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetPresets::ProfileToken);
	/* transient soap skipped */
}

void _tptz__GetPresets::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetPresets::ProfileToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetPresets::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetPresets(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetPresets(struct soap *soap, const char *tag, int id, const _tptz__GetPresets *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetPresets), type))
		return soap->error;
	if (a->_tptz__GetPresets::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__GetPresets::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetPresets::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetPresets(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetPresets * SOAP_FMAC4 soap_in__tptz__GetPresets(struct soap *soap, const char *tag, _tptz__GetPresets *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetPresets *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetPresets, sizeof(_tptz__GetPresets), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetPresets)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetPresets *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__GetPresets::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetPresets *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetPresets, 0, sizeof(_tptz__GetPresets), 0, soap_copy__tptz__GetPresets);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetPresets::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetPresets);
	if (this->soap_out(soap, tag?tag:"tptz:GetPresets", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetPresets::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetPresets(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetPresets * SOAP_FMAC4 soap_get__tptz__GetPresets(struct soap *soap, _tptz__GetPresets *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetPresets(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetPresets * SOAP_FMAC2 soap_instantiate__tptz__GetPresets(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetPresets(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetPresets, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetPresets);
		if (size)
			*size = sizeof(_tptz__GetPresets);
		((_tptz__GetPresets*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetPresets, n);
		if (size)
			*size = n * sizeof(_tptz__GetPresets);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetPresets*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetPresets*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetPresets(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetPresets %p -> %p\n", q, p));
	*(_tptz__GetPresets*)p = *(_tptz__GetPresets*)q;
}

void _tptz__SendAuxiliaryCommandResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__AuxiliaryData(soap, &this->_tptz__SendAuxiliaryCommandResponse::AuxiliaryResponse);
	/* transient soap skipped */
}

void _tptz__SendAuxiliaryCommandResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__AuxiliaryData(soap, &this->_tptz__SendAuxiliaryCommandResponse::AuxiliaryResponse);
	/* transient soap skipped */
#endif
}

int _tptz__SendAuxiliaryCommandResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SendAuxiliaryCommandResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SendAuxiliaryCommandResponse(struct soap *soap, const char *tag, int id, const _tptz__SendAuxiliaryCommandResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SendAuxiliaryCommandResponse), type))
		return soap->error;
	if (a->AuxiliaryResponse)
		soap_element_result(soap, "tptz:AuxiliaryResponse");
	if (a->_tptz__SendAuxiliaryCommandResponse::AuxiliaryResponse)
	{	if (soap_out_tt__AuxiliaryData(soap, "tptz:AuxiliaryResponse", -1, &a->_tptz__SendAuxiliaryCommandResponse::AuxiliaryResponse, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:AuxiliaryResponse"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SendAuxiliaryCommandResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SendAuxiliaryCommandResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SendAuxiliaryCommandResponse * SOAP_FMAC4 soap_in__tptz__SendAuxiliaryCommandResponse(struct soap *soap, const char *tag, _tptz__SendAuxiliaryCommandResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SendAuxiliaryCommandResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SendAuxiliaryCommandResponse, sizeof(_tptz__SendAuxiliaryCommandResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SendAuxiliaryCommandResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SendAuxiliaryCommandResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_AuxiliaryResponse1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AuxiliaryResponse1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__AuxiliaryData(soap, "tptz:AuxiliaryResponse", &(a->_tptz__SendAuxiliaryCommandResponse::AuxiliaryResponse), "tt:AuxiliaryData"))
				{	soap_flag_AuxiliaryResponse1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:AuxiliaryResponse");
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
	{	a = (_tptz__SendAuxiliaryCommandResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SendAuxiliaryCommandResponse, 0, sizeof(_tptz__SendAuxiliaryCommandResponse), 0, soap_copy__tptz__SendAuxiliaryCommandResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AuxiliaryResponse1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SendAuxiliaryCommandResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SendAuxiliaryCommandResponse);
	if (this->soap_out(soap, tag?tag:"tptz:SendAuxiliaryCommandResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SendAuxiliaryCommandResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SendAuxiliaryCommandResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SendAuxiliaryCommandResponse * SOAP_FMAC4 soap_get__tptz__SendAuxiliaryCommandResponse(struct soap *soap, _tptz__SendAuxiliaryCommandResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SendAuxiliaryCommandResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SendAuxiliaryCommandResponse * SOAP_FMAC2 soap_instantiate__tptz__SendAuxiliaryCommandResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SendAuxiliaryCommandResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SendAuxiliaryCommandResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SendAuxiliaryCommandResponse);
		if (size)
			*size = sizeof(_tptz__SendAuxiliaryCommandResponse);
		((_tptz__SendAuxiliaryCommandResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SendAuxiliaryCommandResponse, n);
		if (size)
			*size = n * sizeof(_tptz__SendAuxiliaryCommandResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SendAuxiliaryCommandResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SendAuxiliaryCommandResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SendAuxiliaryCommandResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SendAuxiliaryCommandResponse %p -> %p\n", q, p));
	*(_tptz__SendAuxiliaryCommandResponse*)p = *(_tptz__SendAuxiliaryCommandResponse*)q;
}

void _tptz__SendAuxiliaryCommand::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__SendAuxiliaryCommand::ProfileToken);
	soap_default_tt__AuxiliaryData(soap, &this->_tptz__SendAuxiliaryCommand::AuxiliaryData);
	/* transient soap skipped */
}

void _tptz__SendAuxiliaryCommand::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__SendAuxiliaryCommand::ProfileToken);
	soap_serialize_tt__AuxiliaryData(soap, &this->_tptz__SendAuxiliaryCommand::AuxiliaryData);
	/* transient soap skipped */
#endif
}

int _tptz__SendAuxiliaryCommand::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SendAuxiliaryCommand(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SendAuxiliaryCommand(struct soap *soap, const char *tag, int id, const _tptz__SendAuxiliaryCommand *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SendAuxiliaryCommand), type))
		return soap->error;
	if (a->_tptz__SendAuxiliaryCommand::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ProfileToken", -1, &a->_tptz__SendAuxiliaryCommand::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ProfileToken"))
		return soap->error;
	if (a->_tptz__SendAuxiliaryCommand::AuxiliaryData)
	{	if (soap_out_tt__AuxiliaryData(soap, "tptz:AuxiliaryData", -1, &a->_tptz__SendAuxiliaryCommand::AuxiliaryData, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:AuxiliaryData"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SendAuxiliaryCommand::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SendAuxiliaryCommand(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SendAuxiliaryCommand * SOAP_FMAC4 soap_in__tptz__SendAuxiliaryCommand(struct soap *soap, const char *tag, _tptz__SendAuxiliaryCommand *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SendAuxiliaryCommand *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SendAuxiliaryCommand, sizeof(_tptz__SendAuxiliaryCommand), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SendAuxiliaryCommand)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SendAuxiliaryCommand *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_AuxiliaryData1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ProfileToken", &(a->_tptz__SendAuxiliaryCommand::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_AuxiliaryData1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__AuxiliaryData(soap, "tptz:AuxiliaryData", &(a->_tptz__SendAuxiliaryCommand::AuxiliaryData), "tt:AuxiliaryData"))
				{	soap_flag_AuxiliaryData1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__SendAuxiliaryCommand *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SendAuxiliaryCommand, 0, sizeof(_tptz__SendAuxiliaryCommand), 0, soap_copy__tptz__SendAuxiliaryCommand);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_AuxiliaryData1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SendAuxiliaryCommand::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SendAuxiliaryCommand);
	if (this->soap_out(soap, tag?tag:"tptz:SendAuxiliaryCommand", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SendAuxiliaryCommand::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SendAuxiliaryCommand(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SendAuxiliaryCommand * SOAP_FMAC4 soap_get__tptz__SendAuxiliaryCommand(struct soap *soap, _tptz__SendAuxiliaryCommand *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SendAuxiliaryCommand(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SendAuxiliaryCommand * SOAP_FMAC2 soap_instantiate__tptz__SendAuxiliaryCommand(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SendAuxiliaryCommand(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SendAuxiliaryCommand, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SendAuxiliaryCommand);
		if (size)
			*size = sizeof(_tptz__SendAuxiliaryCommand);
		((_tptz__SendAuxiliaryCommand*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SendAuxiliaryCommand, n);
		if (size)
			*size = n * sizeof(_tptz__SendAuxiliaryCommand);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SendAuxiliaryCommand*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SendAuxiliaryCommand*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SendAuxiliaryCommand(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SendAuxiliaryCommand %p -> %p\n", q, p));
	*(_tptz__SendAuxiliaryCommand*)p = *(_tptz__SendAuxiliaryCommand*)q;
}

void _tptz__GetConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetConfigurationOptionsResponse::PTZConfigurationOptions = NULL;
	/* transient soap skipped */
}

void _tptz__GetConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZConfigurationOptions(soap, &this->_tptz__GetConfigurationOptionsResponse::PTZConfigurationOptions);
	/* transient soap skipped */
#endif
}

int _tptz__GetConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _tptz__GetConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfigurationOptionsResponse), type))
		return soap->error;
	if (a->PTZConfigurationOptions)
		soap_element_result(soap, "tptz:PTZConfigurationOptions");
	if (a->_tptz__GetConfigurationOptionsResponse::PTZConfigurationOptions)
	{	if (soap_out_PointerTott__PTZConfigurationOptions(soap, "tptz:PTZConfigurationOptions", -1, &a->_tptz__GetConfigurationOptionsResponse::PTZConfigurationOptions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfigurationOptionsResponse * SOAP_FMAC4 soap_in__tptz__GetConfigurationOptionsResponse(struct soap *soap, const char *tag, _tptz__GetConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfigurationOptionsResponse, sizeof(_tptz__GetConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZConfigurationOptions1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZConfigurationOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationOptions(soap, "tptz:PTZConfigurationOptions", &(a->_tptz__GetConfigurationOptionsResponse::PTZConfigurationOptions), "tt:PTZConfigurationOptions"))
				{	soap_flag_PTZConfigurationOptions1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PTZConfigurationOptions");
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
	{	a = (_tptz__GetConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfigurationOptionsResponse, 0, sizeof(_tptz__GetConfigurationOptionsResponse), 0, soap_copy__tptz__GetConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZConfigurationOptions1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfigurationOptionsResponse * SOAP_FMAC4 soap_get__tptz__GetConfigurationOptionsResponse(struct soap *soap, _tptz__GetConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__tptz__GetConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_tptz__GetConfigurationOptionsResponse);
		((_tptz__GetConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_tptz__GetConfigurationOptionsResponse*)p = *(_tptz__GetConfigurationOptionsResponse*)q;
}

void _tptz__GetConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetConfigurationOptions::ConfigurationToken);
	/* transient soap skipped */
}

void _tptz__GetConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetConfigurationOptions::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfigurationOptions(struct soap *soap, const char *tag, int id, const _tptz__GetConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfigurationOptions), type))
		return soap->error;
	if (a->_tptz__GetConfigurationOptions::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:ConfigurationToken", -1, &a->_tptz__GetConfigurationOptions::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfigurationOptions * SOAP_FMAC4 soap_in__tptz__GetConfigurationOptions(struct soap *soap, const char *tag, _tptz__GetConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfigurationOptions, sizeof(_tptz__GetConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:ConfigurationToken", &(a->_tptz__GetConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfigurationOptions, 0, sizeof(_tptz__GetConfigurationOptions), 0, soap_copy__tptz__GetConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfigurationOptions * SOAP_FMAC4 soap_get__tptz__GetConfigurationOptions(struct soap *soap, _tptz__GetConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfigurationOptions * SOAP_FMAC2 soap_instantiate__tptz__GetConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfigurationOptions);
		if (size)
			*size = sizeof(_tptz__GetConfigurationOptions);
		((_tptz__GetConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfigurationOptions %p -> %p\n", q, p));
	*(_tptz__GetConfigurationOptions*)p = *(_tptz__GetConfigurationOptions*)q;
}

void _tptz__SetConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__SetConfigurationResponse::__size_SetConfigurationResponse_sequence = 0;
	this->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence = NULL;
	/* transient soap skipped */
}

void _tptz__SetConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence)
	{	int i;
		for (i = 0; i < this->_tptz__SetConfigurationResponse::__size_SetConfigurationResponse_sequence; i++)
		{
			this->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence[i].soap_serialize(soap);
		}
	}
	/* transient soap skipped */
#endif
}

int _tptz__SetConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetConfigurationResponse(struct soap *soap, const char *tag, int id, const _tptz__SetConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetConfigurationResponse), type))
		return soap->error;
	soap_element_result(soap, "-size-SetConfigurationResponse-sequence");
	if (a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence)
	{	int i;
		for (i = 0; i < a->_tptz__SetConfigurationResponse::__size_SetConfigurationResponse_sequence; i++)
			if (a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence[i].soap_out(soap, "-SetConfigurationResponse-sequence", -1, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetConfigurationResponse * SOAP_FMAC4 soap_in__tptz__SetConfigurationResponse(struct soap *soap, const char *tag, _tptz__SetConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetConfigurationResponse, sizeof(_tptz__SetConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___SetConfigurationResponse_sequence1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence == NULL)
				{	if (soap_blist___SetConfigurationResponse_sequence1 == NULL)
						soap_blist___SetConfigurationResponse_sequence1 = soap_new_block(soap);
					a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence = (__tptz__SetConfigurationResponse_sequence *)soap_push_block(soap, soap_blist___SetConfigurationResponse_sequence1, sizeof(__tptz__SetConfigurationResponse_sequence));
					if (a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence, __tptz__SetConfigurationResponse_sequence);
					a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence->soap_default(soap);
				}
				if (soap_in___tptz__SetConfigurationResponse_sequence(soap, "-SetConfigurationResponse-sequence", a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence, "-tptz:SetConfigurationResponse-sequence"))
				{	a->_tptz__SetConfigurationResponse::__size_SetConfigurationResponse_sequence++;
					a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size-SetConfigurationResponse-sequence");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence)
			soap_pop_block(soap, soap_blist___SetConfigurationResponse_sequence1);
		if (a->_tptz__SetConfigurationResponse::__size_SetConfigurationResponse_sequence)
			a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence = (__tptz__SetConfigurationResponse_sequence *)soap_save_block(soap, soap_blist___SetConfigurationResponse_sequence1, NULL, 1);
		else
		{	a->_tptz__SetConfigurationResponse::__SetConfigurationResponse_sequence = NULL;
			if (soap_blist___SetConfigurationResponse_sequence1)
				soap_end_block(soap, soap_blist___SetConfigurationResponse_sequence1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tptz__SetConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetConfigurationResponse, 0, sizeof(_tptz__SetConfigurationResponse), 0, soap_copy__tptz__SetConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__SetConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"tptz:SetConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetConfigurationResponse * SOAP_FMAC4 soap_get__tptz__SetConfigurationResponse(struct soap *soap, _tptz__SetConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetConfigurationResponse * SOAP_FMAC2 soap_instantiate__tptz__SetConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetConfigurationResponse);
		if (size)
			*size = sizeof(_tptz__SetConfigurationResponse);
		((_tptz__SetConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_tptz__SetConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetConfigurationResponse %p -> %p\n", q, p));
	*(_tptz__SetConfigurationResponse*)p = *(_tptz__SetConfigurationResponse*)q;
}

void _tptz__SetConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__SetConfiguration::PTZConfiguration = NULL;
	soap_default_bool(soap, &this->_tptz__SetConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _tptz__SetConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZConfiguration(soap, &this->_tptz__SetConfiguration::PTZConfiguration);
	soap_embedded(soap, &this->_tptz__SetConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _tptz__SetConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__SetConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__SetConfiguration(struct soap *soap, const char *tag, int id, const _tptz__SetConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__SetConfiguration), type))
		return soap->error;
	if (a->_tptz__SetConfiguration::PTZConfiguration)
	{	if (soap_out_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", -1, &a->_tptz__SetConfiguration::PTZConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZConfiguration"))
		return soap->error;
	if (soap_out_bool(soap, "tptz:ForcePersistence", -1, &(a->_tptz__SetConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__SetConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__SetConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__SetConfiguration * SOAP_FMAC4 soap_in__tptz__SetConfiguration(struct soap *soap, const char *tag, _tptz__SetConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__SetConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__SetConfiguration, sizeof(_tptz__SetConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__SetConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__SetConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZConfiguration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", &(a->_tptz__SetConfiguration::PTZConfiguration), "tt:PTZConfiguration"))
				{	soap_flag_PTZConfiguration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tptz:ForcePersistence", &(a->_tptz__SetConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__SetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__SetConfiguration, 0, sizeof(_tptz__SetConfiguration), 0, soap_copy__tptz__SetConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZConfiguration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__SetConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__SetConfiguration);
	if (this->soap_out(soap, tag?tag:"tptz:SetConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__SetConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__SetConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__SetConfiguration * SOAP_FMAC4 soap_get__tptz__SetConfiguration(struct soap *soap, _tptz__SetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__SetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__SetConfiguration * SOAP_FMAC2 soap_instantiate__tptz__SetConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__SetConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__SetConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__SetConfiguration);
		if (size)
			*size = sizeof(_tptz__SetConfiguration);
		((_tptz__SetConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__SetConfiguration, n);
		if (size)
			*size = n * sizeof(_tptz__SetConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__SetConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__SetConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__SetConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__SetConfiguration %p -> %p\n", q, p));
	*(_tptz__SetConfiguration*)p = *(_tptz__SetConfiguration*)q;
}

void _tptz__GetConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetConfigurationResponse::PTZConfiguration = NULL;
	/* transient soap skipped */
}

void _tptz__GetConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZConfiguration(soap, &this->_tptz__GetConfigurationResponse::PTZConfiguration);
	/* transient soap skipped */
#endif
}

int _tptz__GetConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfigurationResponse(struct soap *soap, const char *tag, int id, const _tptz__GetConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfigurationResponse), type))
		return soap->error;
	if (a->PTZConfiguration)
		soap_element_result(soap, "tptz:PTZConfiguration");
	if (a->_tptz__GetConfigurationResponse::PTZConfiguration)
	{	if (soap_out_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", -1, &a->_tptz__GetConfigurationResponse::PTZConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZConfiguration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfigurationResponse * SOAP_FMAC4 soap_in__tptz__GetConfigurationResponse(struct soap *soap, const char *tag, _tptz__GetConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfigurationResponse, sizeof(_tptz__GetConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZConfiguration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", &(a->_tptz__GetConfigurationResponse::PTZConfiguration), "tt:PTZConfiguration"))
				{	soap_flag_PTZConfiguration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PTZConfiguration");
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
	{	a = (_tptz__GetConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfigurationResponse, 0, sizeof(_tptz__GetConfigurationResponse), 0, soap_copy__tptz__GetConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZConfiguration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfigurationResponse * SOAP_FMAC4 soap_get__tptz__GetConfigurationResponse(struct soap *soap, _tptz__GetConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfigurationResponse * SOAP_FMAC2 soap_instantiate__tptz__GetConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfigurationResponse);
		if (size)
			*size = sizeof(_tptz__GetConfigurationResponse);
		((_tptz__GetConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfigurationResponse %p -> %p\n", q, p));
	*(_tptz__GetConfigurationResponse*)p = *(_tptz__GetConfigurationResponse*)q;
}

void _tptz__GetConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetConfiguration::PTZConfigurationToken);
	/* transient soap skipped */
}

void _tptz__GetConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetConfiguration::PTZConfigurationToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfiguration(struct soap *soap, const char *tag, int id, const _tptz__GetConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfiguration), type))
		return soap->error;
	if (a->_tptz__GetConfiguration::PTZConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:PTZConfigurationToken", -1, &a->_tptz__GetConfiguration::PTZConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfiguration * SOAP_FMAC4 soap_in__tptz__GetConfiguration(struct soap *soap, const char *tag, _tptz__GetConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfiguration, sizeof(_tptz__GetConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:PTZConfigurationToken", &(a->_tptz__GetConfiguration::PTZConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_PTZConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfiguration, 0, sizeof(_tptz__GetConfiguration), 0, soap_copy__tptz__GetConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfiguration);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfiguration * SOAP_FMAC4 soap_get__tptz__GetConfiguration(struct soap *soap, _tptz__GetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfiguration * SOAP_FMAC2 soap_instantiate__tptz__GetConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfiguration);
		if (size)
			*size = sizeof(_tptz__GetConfiguration);
		((_tptz__GetConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfiguration, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfiguration %p -> %p\n", q, p));
	*(_tptz__GetConfiguration*)p = *(_tptz__GetConfiguration*)q;
}

void _tptz__GetConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetConfigurationsResponse::__sizePTZConfiguration = 0;
	this->_tptz__GetConfigurationsResponse::PTZConfiguration = NULL;
	/* transient soap skipped */
}

void _tptz__GetConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tptz__GetConfigurationsResponse::PTZConfiguration)
	{	int i;
		for (i = 0; i < this->_tptz__GetConfigurationsResponse::__sizePTZConfiguration; i++)
		{
			soap_serialize_PointerTott__PTZConfiguration(soap, this->_tptz__GetConfigurationsResponse::PTZConfiguration + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tptz__GetConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfigurationsResponse(struct soap *soap, const char *tag, int id, const _tptz__GetConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizePTZConfiguration");
	if (a->_tptz__GetConfigurationsResponse::PTZConfiguration)
	{	int i;
		for (i = 0; i < a->_tptz__GetConfigurationsResponse::__sizePTZConfiguration; i++)
			if (soap_out_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", -1, a->_tptz__GetConfigurationsResponse::PTZConfiguration + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfigurationsResponse * SOAP_FMAC4 soap_in__tptz__GetConfigurationsResponse(struct soap *soap, const char *tag, _tptz__GetConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfigurationsResponse, sizeof(_tptz__GetConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_PTZConfiguration1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tptz:PTZConfiguration", 1, NULL))
			{	if (a->_tptz__GetConfigurationsResponse::PTZConfiguration == NULL)
				{	if (soap_blist_PTZConfiguration1 == NULL)
						soap_blist_PTZConfiguration1 = soap_new_block(soap);
					a->_tptz__GetConfigurationsResponse::PTZConfiguration = (tt__PTZConfiguration **)soap_push_block(soap, soap_blist_PTZConfiguration1, sizeof(tt__PTZConfiguration *));
					if (a->_tptz__GetConfigurationsResponse::PTZConfiguration == NULL)
						return NULL;
					*a->_tptz__GetConfigurationsResponse::PTZConfiguration = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PTZConfiguration(soap, "tptz:PTZConfiguration", a->_tptz__GetConfigurationsResponse::PTZConfiguration, "tt:PTZConfiguration"))
				{	a->_tptz__GetConfigurationsResponse::__sizePTZConfiguration++;
					a->_tptz__GetConfigurationsResponse::PTZConfiguration = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizePTZConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tptz__GetConfigurationsResponse::PTZConfiguration)
			soap_pop_block(soap, soap_blist_PTZConfiguration1);
		if (a->_tptz__GetConfigurationsResponse::__sizePTZConfiguration)
			a->_tptz__GetConfigurationsResponse::PTZConfiguration = (tt__PTZConfiguration **)soap_save_block(soap, soap_blist_PTZConfiguration1, NULL, 1);
		else
		{	a->_tptz__GetConfigurationsResponse::PTZConfiguration = NULL;
			if (soap_blist_PTZConfiguration1)
				soap_end_block(soap, soap_blist_PTZConfiguration1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tptz__GetConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfigurationsResponse, 0, sizeof(_tptz__GetConfigurationsResponse), 0, soap_copy__tptz__GetConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfigurationsResponse * SOAP_FMAC4 soap_get__tptz__GetConfigurationsResponse(struct soap *soap, _tptz__GetConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfigurationsResponse * SOAP_FMAC2 soap_instantiate__tptz__GetConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfigurationsResponse);
		if (size)
			*size = sizeof(_tptz__GetConfigurationsResponse);
		((_tptz__GetConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfigurationsResponse %p -> %p\n", q, p));
	*(_tptz__GetConfigurationsResponse*)p = *(_tptz__GetConfigurationsResponse*)q;
}

void _tptz__GetConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__GetConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__GetConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetConfigurations(struct soap *soap, const char *tag, int id, const _tptz__GetConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetConfigurations * SOAP_FMAC4 soap_in__tptz__GetConfigurations(struct soap *soap, const char *tag, _tptz__GetConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetConfigurations, sizeof(_tptz__GetConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__GetConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetConfigurations, 0, sizeof(_tptz__GetConfigurations), 0, soap_copy__tptz__GetConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetConfigurations);
	if (this->soap_out(soap, tag?tag:"tptz:GetConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetConfigurations * SOAP_FMAC4 soap_get__tptz__GetConfigurations(struct soap *soap, _tptz__GetConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetConfigurations * SOAP_FMAC2 soap_instantiate__tptz__GetConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetConfigurations);
		if (size)
			*size = sizeof(_tptz__GetConfigurations);
		((_tptz__GetConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetConfigurations, n);
		if (size)
			*size = n * sizeof(_tptz__GetConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetConfigurations %p -> %p\n", q, p));
	*(_tptz__GetConfigurations*)p = *(_tptz__GetConfigurations*)q;
}

void _tptz__GetNodeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetNodeResponse::PTZNode = NULL;
	/* transient soap skipped */
}

void _tptz__GetNodeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZNode(soap, &this->_tptz__GetNodeResponse::PTZNode);
	/* transient soap skipped */
#endif
}

int _tptz__GetNodeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetNodeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetNodeResponse(struct soap *soap, const char *tag, int id, const _tptz__GetNodeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetNodeResponse), type))
		return soap->error;
	if (a->PTZNode)
		soap_element_result(soap, "tptz:PTZNode");
	if (a->_tptz__GetNodeResponse::PTZNode)
	{	if (soap_out_PointerTott__PTZNode(soap, "tptz:PTZNode", -1, &a->_tptz__GetNodeResponse::PTZNode, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:PTZNode"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetNodeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetNodeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetNodeResponse * SOAP_FMAC4 soap_in__tptz__GetNodeResponse(struct soap *soap, const char *tag, _tptz__GetNodeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetNodeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetNodeResponse, sizeof(_tptz__GetNodeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetNodeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetNodeResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_PTZNode1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PTZNode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZNode(soap, "tptz:PTZNode", &(a->_tptz__GetNodeResponse::PTZNode), "tt:PTZNode"))
				{	soap_flag_PTZNode1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:PTZNode");
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
	{	a = (_tptz__GetNodeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetNodeResponse, 0, sizeof(_tptz__GetNodeResponse), 0, soap_copy__tptz__GetNodeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZNode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetNodeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetNodeResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetNodeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetNodeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetNodeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetNodeResponse * SOAP_FMAC4 soap_get__tptz__GetNodeResponse(struct soap *soap, _tptz__GetNodeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetNodeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetNodeResponse * SOAP_FMAC2 soap_instantiate__tptz__GetNodeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetNodeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetNodeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetNodeResponse);
		if (size)
			*size = sizeof(_tptz__GetNodeResponse);
		((_tptz__GetNodeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetNodeResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetNodeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetNodeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetNodeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetNodeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetNodeResponse %p -> %p\n", q, p));
	*(_tptz__GetNodeResponse*)p = *(_tptz__GetNodeResponse*)q;
}

void _tptz__GetNode::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_tptz__GetNode::NodeToken);
	/* transient soap skipped */
}

void _tptz__GetNode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_tptz__GetNode::NodeToken);
	/* transient soap skipped */
#endif
}

int _tptz__GetNode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetNode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetNode(struct soap *soap, const char *tag, int id, const _tptz__GetNode *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetNode), type))
		return soap->error;
	if (a->_tptz__GetNode::NodeToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tptz:NodeToken", -1, &a->_tptz__GetNode::NodeToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:NodeToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetNode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetNode(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetNode * SOAP_FMAC4 soap_in__tptz__GetNode(struct soap *soap, const char *tag, _tptz__GetNode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetNode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetNode, sizeof(_tptz__GetNode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetNode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetNode *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_NodeToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_NodeToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tptz:NodeToken", &(a->_tptz__GetNode::NodeToken), "tt:ReferenceToken"))
				{	soap_flag_NodeToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_tptz__GetNode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetNode, 0, sizeof(_tptz__GetNode), 0, soap_copy__tptz__GetNode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_NodeToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetNode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetNode);
	if (this->soap_out(soap, tag?tag:"tptz:GetNode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetNode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetNode(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetNode * SOAP_FMAC4 soap_get__tptz__GetNode(struct soap *soap, _tptz__GetNode *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetNode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetNode * SOAP_FMAC2 soap_instantiate__tptz__GetNode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetNode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetNode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetNode);
		if (size)
			*size = sizeof(_tptz__GetNode);
		((_tptz__GetNode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetNode, n);
		if (size)
			*size = n * sizeof(_tptz__GetNode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetNode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetNode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetNode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetNode %p -> %p\n", q, p));
	*(_tptz__GetNode*)p = *(_tptz__GetNode*)q;
}

void _tptz__GetNodesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetNodesResponse::__sizePTZNode = 0;
	this->_tptz__GetNodesResponse::PTZNode = NULL;
	/* transient soap skipped */
}

void _tptz__GetNodesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tptz__GetNodesResponse::PTZNode)
	{	int i;
		for (i = 0; i < this->_tptz__GetNodesResponse::__sizePTZNode; i++)
		{
			soap_serialize_PointerTott__PTZNode(soap, this->_tptz__GetNodesResponse::PTZNode + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tptz__GetNodesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetNodesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetNodesResponse(struct soap *soap, const char *tag, int id, const _tptz__GetNodesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetNodesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizePTZNode");
	if (a->_tptz__GetNodesResponse::PTZNode)
	{	int i;
		for (i = 0; i < a->_tptz__GetNodesResponse::__sizePTZNode; i++)
			if (soap_out_PointerTott__PTZNode(soap, "tptz:PTZNode", -1, a->_tptz__GetNodesResponse::PTZNode + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetNodesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetNodesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetNodesResponse * SOAP_FMAC4 soap_in__tptz__GetNodesResponse(struct soap *soap, const char *tag, _tptz__GetNodesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetNodesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetNodesResponse, sizeof(_tptz__GetNodesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetNodesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetNodesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_PTZNode1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tptz:PTZNode", 1, NULL))
			{	if (a->_tptz__GetNodesResponse::PTZNode == NULL)
				{	if (soap_blist_PTZNode1 == NULL)
						soap_blist_PTZNode1 = soap_new_block(soap);
					a->_tptz__GetNodesResponse::PTZNode = (tt__PTZNode **)soap_push_block(soap, soap_blist_PTZNode1, sizeof(tt__PTZNode *));
					if (a->_tptz__GetNodesResponse::PTZNode == NULL)
						return NULL;
					*a->_tptz__GetNodesResponse::PTZNode = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PTZNode(soap, "tptz:PTZNode", a->_tptz__GetNodesResponse::PTZNode, "tt:PTZNode"))
				{	a->_tptz__GetNodesResponse::__sizePTZNode++;
					a->_tptz__GetNodesResponse::PTZNode = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizePTZNode");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tptz__GetNodesResponse::PTZNode)
			soap_pop_block(soap, soap_blist_PTZNode1);
		if (a->_tptz__GetNodesResponse::__sizePTZNode)
			a->_tptz__GetNodesResponse::PTZNode = (tt__PTZNode **)soap_save_block(soap, soap_blist_PTZNode1, NULL, 1);
		else
		{	a->_tptz__GetNodesResponse::PTZNode = NULL;
			if (soap_blist_PTZNode1)
				soap_end_block(soap, soap_blist_PTZNode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tptz__GetNodesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetNodesResponse, 0, sizeof(_tptz__GetNodesResponse), 0, soap_copy__tptz__GetNodesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetNodesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetNodesResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetNodesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetNodesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetNodesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetNodesResponse * SOAP_FMAC4 soap_get__tptz__GetNodesResponse(struct soap *soap, _tptz__GetNodesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetNodesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetNodesResponse * SOAP_FMAC2 soap_instantiate__tptz__GetNodesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetNodesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetNodesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetNodesResponse);
		if (size)
			*size = sizeof(_tptz__GetNodesResponse);
		((_tptz__GetNodesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetNodesResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetNodesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetNodesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetNodesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetNodesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetNodesResponse %p -> %p\n", q, p));
	*(_tptz__GetNodesResponse*)p = *(_tptz__GetNodesResponse*)q;
}

void _tptz__GetNodes::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__GetNodes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__GetNodes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetNodes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetNodes(struct soap *soap, const char *tag, int id, const _tptz__GetNodes *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetNodes), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetNodes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetNodes(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetNodes * SOAP_FMAC4 soap_in__tptz__GetNodes(struct soap *soap, const char *tag, _tptz__GetNodes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetNodes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetNodes, sizeof(_tptz__GetNodes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetNodes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetNodes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__GetNodes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetNodes, 0, sizeof(_tptz__GetNodes), 0, soap_copy__tptz__GetNodes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetNodes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetNodes);
	if (this->soap_out(soap, tag?tag:"tptz:GetNodes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetNodes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetNodes(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetNodes * SOAP_FMAC4 soap_get__tptz__GetNodes(struct soap *soap, _tptz__GetNodes *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetNodes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetNodes * SOAP_FMAC2 soap_instantiate__tptz__GetNodes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetNodes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetNodes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetNodes);
		if (size)
			*size = sizeof(_tptz__GetNodes);
		((_tptz__GetNodes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetNodes, n);
		if (size)
			*size = n * sizeof(_tptz__GetNodes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetNodes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetNodes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetNodes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetNodes %p -> %p\n", q, p));
	*(_tptz__GetNodes*)p = *(_tptz__GetNodes*)q;
}

void _tptz__GetServiceCapabilitiesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tptz__GetServiceCapabilitiesResponse::Capabilities = NULL;
	/* transient soap skipped */
}

void _tptz__GetServiceCapabilitiesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotptz__Capabilities(soap, &this->_tptz__GetServiceCapabilitiesResponse::Capabilities);
	/* transient soap skipped */
#endif
}

int _tptz__GetServiceCapabilitiesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetServiceCapabilitiesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const _tptz__GetServiceCapabilitiesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tptz:Capabilities");
	if (a->_tptz__GetServiceCapabilitiesResponse::Capabilities)
	{	if (soap_out_PointerTotptz__Capabilities(soap, "tptz:Capabilities", -1, &a->_tptz__GetServiceCapabilitiesResponse::Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tptz:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetServiceCapabilitiesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetServiceCapabilitiesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__tptz__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, _tptz__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetServiceCapabilitiesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetServiceCapabilitiesResponse, sizeof(_tptz__GetServiceCapabilitiesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetServiceCapabilitiesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetServiceCapabilitiesResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Capabilities1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotptz__Capabilities(soap, "tptz:Capabilities", &(a->_tptz__GetServiceCapabilitiesResponse::Capabilities), "tptz:Capabilities"))
				{	soap_flag_Capabilities1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tptz:Capabilities");
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
	{	a = (_tptz__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetServiceCapabilitiesResponse, 0, sizeof(_tptz__GetServiceCapabilitiesResponse), 0, soap_copy__tptz__GetServiceCapabilitiesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tptz__GetServiceCapabilitiesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetServiceCapabilitiesResponse);
	if (this->soap_out(soap, tag?tag:"tptz:GetServiceCapabilitiesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetServiceCapabilitiesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetServiceCapabilitiesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__tptz__GetServiceCapabilitiesResponse(struct soap *soap, _tptz__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetServiceCapabilitiesResponse * SOAP_FMAC2 soap_instantiate__tptz__GetServiceCapabilitiesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetServiceCapabilitiesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetServiceCapabilitiesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetServiceCapabilitiesResponse);
		if (size)
			*size = sizeof(_tptz__GetServiceCapabilitiesResponse);
		((_tptz__GetServiceCapabilitiesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetServiceCapabilitiesResponse, n);
		if (size)
			*size = n * sizeof(_tptz__GetServiceCapabilitiesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetServiceCapabilitiesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetServiceCapabilitiesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetServiceCapabilitiesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetServiceCapabilitiesResponse %p -> %p\n", q, p));
	*(_tptz__GetServiceCapabilitiesResponse*)p = *(_tptz__GetServiceCapabilitiesResponse*)q;
}

void _tptz__GetServiceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tptz__GetServiceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tptz__GetServiceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tptz__GetServiceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tptz__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const _tptz__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tptz__GetServiceCapabilities), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tptz__GetServiceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tptz__GetServiceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 _tptz__GetServiceCapabilities * SOAP_FMAC4 soap_in__tptz__GetServiceCapabilities(struct soap *soap, const char *tag, _tptz__GetServiceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tptz__GetServiceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tptz__GetServiceCapabilities, sizeof(_tptz__GetServiceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tptz__GetServiceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tptz__GetServiceCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_tptz__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tptz__GetServiceCapabilities, 0, sizeof(_tptz__GetServiceCapabilities), 0, soap_copy__tptz__GetServiceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tptz__GetServiceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tptz__GetServiceCapabilities);
	if (this->soap_out(soap, tag?tag:"tptz:GetServiceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tptz__GetServiceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tptz__GetServiceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 _tptz__GetServiceCapabilities * SOAP_FMAC4 soap_get__tptz__GetServiceCapabilities(struct soap *soap, _tptz__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tptz__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tptz__GetServiceCapabilities * SOAP_FMAC2 soap_instantiate__tptz__GetServiceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tptz__GetServiceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tptz__GetServiceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tptz__GetServiceCapabilities);
		if (size)
			*size = sizeof(_tptz__GetServiceCapabilities);
		((_tptz__GetServiceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tptz__GetServiceCapabilities, n);
		if (size)
			*size = n * sizeof(_tptz__GetServiceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tptz__GetServiceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tptz__GetServiceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tptz__GetServiceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tptz__GetServiceCapabilities %p -> %p\n", q, p));
	*(_tptz__GetServiceCapabilities*)p = *(_tptz__GetServiceCapabilities*)q;
}

void tptz__Capabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tptz__Capabilities::__size = 0;
	this->tptz__Capabilities::__any = NULL;
	this->tptz__Capabilities::EFlip = NULL;
	this->tptz__Capabilities::Reverse = NULL;
	this->tptz__Capabilities::__anyAttribute = NULL;
}

void tptz__Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tptz__Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tptz__Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tptz__Capabilities(struct soap *soap, const char *tag, int id, const tptz__Capabilities *a, const char *type)
{
	if (((tptz__Capabilities*)a)->EFlip)
		soap_set_attr(soap, "EFlip", soap_bool2s(soap, *((tptz__Capabilities*)a)->EFlip), 1);
	if (((tptz__Capabilities*)a)->Reverse)
		soap_set_attr(soap, "Reverse", soap_bool2s(soap, *((tptz__Capabilities*)a)->Reverse), 1);
	if (((tptz__Capabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tptz__Capabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tptz__Capabilities), "tptz:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tptz__Capabilities::__any)
	{	int i;
		for (i = 0; i < a->tptz__Capabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tptz__Capabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tptz__Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tptz__Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 tptz__Capabilities * SOAP_FMAC4 soap_in_tptz__Capabilities(struct soap *soap, const char *tag, tptz__Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tptz__Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tptz__Capabilities, sizeof(tptz__Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tptz__Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tptz__Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "EFlip", 0);
		if (t)
		{
			if (!(((tptz__Capabilities*)a)->EFlip = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tptz__Capabilities*)a)->EFlip))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "Reverse", 0);
		if (t)
		{
			if (!(((tptz__Capabilities*)a)->Reverse = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tptz__Capabilities*)a)->Reverse))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tptz__Capabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tptz__Capabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tptz__Capabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tptz__Capabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tptz__Capabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tptz__Capabilities::__any, "xsd:byte"))
				{	a->tptz__Capabilities::__size++;
					a->tptz__Capabilities::__any = NULL;
					continue;
				}
			}
			if (soap_flag___item2 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->tptz__Capabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tptz__Capabilities::__size)
			a->tptz__Capabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tptz__Capabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tptz__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tptz__Capabilities, 0, sizeof(tptz__Capabilities), 0, soap_copy_tptz__Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tptz__Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tptz__Capabilities);
	if (this->soap_out(soap, tag?tag:"tptz:Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tptz__Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tptz__Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 tptz__Capabilities * SOAP_FMAC4 soap_get_tptz__Capabilities(struct soap *soap, tptz__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tptz__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tptz__Capabilities * SOAP_FMAC2 soap_instantiate_tptz__Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tptz__Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tptz__Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tptz__Capabilities);
		if (size)
			*size = sizeof(tptz__Capabilities);
		((tptz__Capabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tptz__Capabilities, n);
		if (size)
			*size = n * sizeof(tptz__Capabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tptz__Capabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tptz__Capabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tptz__Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tptz__Capabilities %p -> %p\n", q, p));
	*(tptz__Capabilities*)p = *(tptz__Capabilities*)q;
}

void _trt__GetSnapshotUriResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetSnapshotUriResponse::MediaUri = NULL;
	/* transient soap skipped */
}

void _trt__GetSnapshotUriResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MediaUri(soap, &this->_trt__GetSnapshotUriResponse::MediaUri);
	/* transient soap skipped */
#endif
}

int _trt__GetSnapshotUriResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetSnapshotUriResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetSnapshotUriResponse(struct soap *soap, const char *tag, int id, const _trt__GetSnapshotUriResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetSnapshotUriResponse), type))
		return soap->error;
	if (a->MediaUri)
		soap_element_result(soap, "trt:MediaUri");
	if (a->_trt__GetSnapshotUriResponse::MediaUri)
	{	if (soap_out_PointerTott__MediaUri(soap, "trt:MediaUri", -1, &a->_trt__GetSnapshotUriResponse::MediaUri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:MediaUri"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetSnapshotUriResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetSnapshotUriResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetSnapshotUriResponse * SOAP_FMAC4 soap_in__trt__GetSnapshotUriResponse(struct soap *soap, const char *tag, _trt__GetSnapshotUriResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetSnapshotUriResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetSnapshotUriResponse, sizeof(_trt__GetSnapshotUriResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetSnapshotUriResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetSnapshotUriResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_MediaUri1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MediaUri1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaUri(soap, "trt:MediaUri", &(a->_trt__GetSnapshotUriResponse::MediaUri), "tt:MediaUri"))
				{	soap_flag_MediaUri1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:MediaUri");
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
	{	a = (_trt__GetSnapshotUriResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetSnapshotUriResponse, 0, sizeof(_trt__GetSnapshotUriResponse), 0, soap_copy__trt__GetSnapshotUriResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MediaUri1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetSnapshotUriResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetSnapshotUriResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetSnapshotUriResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetSnapshotUriResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetSnapshotUriResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetSnapshotUriResponse * SOAP_FMAC4 soap_get__trt__GetSnapshotUriResponse(struct soap *soap, _trt__GetSnapshotUriResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetSnapshotUriResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetSnapshotUriResponse * SOAP_FMAC2 soap_instantiate__trt__GetSnapshotUriResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetSnapshotUriResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetSnapshotUriResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetSnapshotUriResponse);
		if (size)
			*size = sizeof(_trt__GetSnapshotUriResponse);
		((_trt__GetSnapshotUriResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetSnapshotUriResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetSnapshotUriResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetSnapshotUriResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetSnapshotUriResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetSnapshotUriResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetSnapshotUriResponse %p -> %p\n", q, p));
	*(_trt__GetSnapshotUriResponse*)p = *(_trt__GetSnapshotUriResponse*)q;
}

void _trt__GetSnapshotUri::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetSnapshotUri::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetSnapshotUri::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetSnapshotUri::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetSnapshotUri::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetSnapshotUri(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetSnapshotUri(struct soap *soap, const char *tag, int id, const _trt__GetSnapshotUri *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetSnapshotUri), type))
		return soap->error;
	if (a->_trt__GetSnapshotUri::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetSnapshotUri::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetSnapshotUri::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetSnapshotUri(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetSnapshotUri * SOAP_FMAC4 soap_in__trt__GetSnapshotUri(struct soap *soap, const char *tag, _trt__GetSnapshotUri *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetSnapshotUri *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetSnapshotUri, sizeof(_trt__GetSnapshotUri), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetSnapshotUri)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetSnapshotUri *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetSnapshotUri::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetSnapshotUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetSnapshotUri, 0, sizeof(_trt__GetSnapshotUri), 0, soap_copy__trt__GetSnapshotUri);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetSnapshotUri::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetSnapshotUri);
	if (this->soap_out(soap, tag?tag:"trt:GetSnapshotUri", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetSnapshotUri::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetSnapshotUri(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetSnapshotUri * SOAP_FMAC4 soap_get__trt__GetSnapshotUri(struct soap *soap, _trt__GetSnapshotUri *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetSnapshotUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetSnapshotUri * SOAP_FMAC2 soap_instantiate__trt__GetSnapshotUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetSnapshotUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetSnapshotUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetSnapshotUri);
		if (size)
			*size = sizeof(_trt__GetSnapshotUri);
		((_trt__GetSnapshotUri*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetSnapshotUri, n);
		if (size)
			*size = n * sizeof(_trt__GetSnapshotUri);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetSnapshotUri*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetSnapshotUri*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetSnapshotUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetSnapshotUri %p -> %p\n", q, p));
	*(_trt__GetSnapshotUri*)p = *(_trt__GetSnapshotUri*)q;
}

void _trt__SetSynchronizationPointResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetSynchronizationPointResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetSynchronizationPointResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetSynchronizationPointResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetSynchronizationPointResponse(struct soap *soap, const char *tag, int id, const _trt__SetSynchronizationPointResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetSynchronizationPointResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetSynchronizationPointResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetSynchronizationPointResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetSynchronizationPointResponse * SOAP_FMAC4 soap_in__trt__SetSynchronizationPointResponse(struct soap *soap, const char *tag, _trt__SetSynchronizationPointResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetSynchronizationPointResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetSynchronizationPointResponse, sizeof(_trt__SetSynchronizationPointResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetSynchronizationPointResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetSynchronizationPointResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetSynchronizationPointResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetSynchronizationPointResponse, 0, sizeof(_trt__SetSynchronizationPointResponse), 0, soap_copy__trt__SetSynchronizationPointResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetSynchronizationPointResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetSynchronizationPointResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetSynchronizationPointResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetSynchronizationPointResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetSynchronizationPointResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetSynchronizationPointResponse * SOAP_FMAC4 soap_get__trt__SetSynchronizationPointResponse(struct soap *soap, _trt__SetSynchronizationPointResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetSynchronizationPointResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetSynchronizationPointResponse * SOAP_FMAC2 soap_instantiate__trt__SetSynchronizationPointResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetSynchronizationPointResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetSynchronizationPointResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetSynchronizationPointResponse);
		if (size)
			*size = sizeof(_trt__SetSynchronizationPointResponse);
		((_trt__SetSynchronizationPointResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetSynchronizationPointResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetSynchronizationPointResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetSynchronizationPointResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetSynchronizationPointResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetSynchronizationPointResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetSynchronizationPointResponse %p -> %p\n", q, p));
	*(_trt__SetSynchronizationPointResponse*)p = *(_trt__SetSynchronizationPointResponse*)q;
}

void _trt__SetSynchronizationPoint::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__SetSynchronizationPoint::ProfileToken);
	/* transient soap skipped */
}

void _trt__SetSynchronizationPoint::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__SetSynchronizationPoint::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__SetSynchronizationPoint::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetSynchronizationPoint(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetSynchronizationPoint(struct soap *soap, const char *tag, int id, const _trt__SetSynchronizationPoint *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetSynchronizationPoint), type))
		return soap->error;
	if (a->_trt__SetSynchronizationPoint::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__SetSynchronizationPoint::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetSynchronizationPoint::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetSynchronizationPoint(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetSynchronizationPoint * SOAP_FMAC4 soap_in__trt__SetSynchronizationPoint(struct soap *soap, const char *tag, _trt__SetSynchronizationPoint *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetSynchronizationPoint *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetSynchronizationPoint, sizeof(_trt__SetSynchronizationPoint), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetSynchronizationPoint)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetSynchronizationPoint *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__SetSynchronizationPoint::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetSynchronizationPoint *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetSynchronizationPoint, 0, sizeof(_trt__SetSynchronizationPoint), 0, soap_copy__trt__SetSynchronizationPoint);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetSynchronizationPoint::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetSynchronizationPoint);
	if (this->soap_out(soap, tag?tag:"trt:SetSynchronizationPoint", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetSynchronizationPoint::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetSynchronizationPoint(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetSynchronizationPoint * SOAP_FMAC4 soap_get__trt__SetSynchronizationPoint(struct soap *soap, _trt__SetSynchronizationPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetSynchronizationPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetSynchronizationPoint * SOAP_FMAC2 soap_instantiate__trt__SetSynchronizationPoint(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetSynchronizationPoint(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetSynchronizationPoint, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetSynchronizationPoint);
		if (size)
			*size = sizeof(_trt__SetSynchronizationPoint);
		((_trt__SetSynchronizationPoint*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetSynchronizationPoint, n);
		if (size)
			*size = n * sizeof(_trt__SetSynchronizationPoint);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetSynchronizationPoint*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetSynchronizationPoint*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetSynchronizationPoint(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetSynchronizationPoint %p -> %p\n", q, p));
	*(_trt__SetSynchronizationPoint*)p = *(_trt__SetSynchronizationPoint*)q;
}

void _trt__StopMulticastStreamingResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__StopMulticastStreamingResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__StopMulticastStreamingResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__StopMulticastStreamingResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__StopMulticastStreamingResponse(struct soap *soap, const char *tag, int id, const _trt__StopMulticastStreamingResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__StopMulticastStreamingResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__StopMulticastStreamingResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__StopMulticastStreamingResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__StopMulticastStreamingResponse * SOAP_FMAC4 soap_in__trt__StopMulticastStreamingResponse(struct soap *soap, const char *tag, _trt__StopMulticastStreamingResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__StopMulticastStreamingResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__StopMulticastStreamingResponse, sizeof(_trt__StopMulticastStreamingResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__StopMulticastStreamingResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__StopMulticastStreamingResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__StopMulticastStreamingResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__StopMulticastStreamingResponse, 0, sizeof(_trt__StopMulticastStreamingResponse), 0, soap_copy__trt__StopMulticastStreamingResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__StopMulticastStreamingResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__StopMulticastStreamingResponse);
	if (this->soap_out(soap, tag?tag:"trt:StopMulticastStreamingResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__StopMulticastStreamingResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__StopMulticastStreamingResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__StopMulticastStreamingResponse * SOAP_FMAC4 soap_get__trt__StopMulticastStreamingResponse(struct soap *soap, _trt__StopMulticastStreamingResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__StopMulticastStreamingResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__StopMulticastStreamingResponse * SOAP_FMAC2 soap_instantiate__trt__StopMulticastStreamingResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__StopMulticastStreamingResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__StopMulticastStreamingResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__StopMulticastStreamingResponse);
		if (size)
			*size = sizeof(_trt__StopMulticastStreamingResponse);
		((_trt__StopMulticastStreamingResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__StopMulticastStreamingResponse, n);
		if (size)
			*size = n * sizeof(_trt__StopMulticastStreamingResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__StopMulticastStreamingResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__StopMulticastStreamingResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__StopMulticastStreamingResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__StopMulticastStreamingResponse %p -> %p\n", q, p));
	*(_trt__StopMulticastStreamingResponse*)p = *(_trt__StopMulticastStreamingResponse*)q;
}

void _trt__StopMulticastStreaming::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__StopMulticastStreaming::ProfileToken);
	/* transient soap skipped */
}

void _trt__StopMulticastStreaming::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__StopMulticastStreaming::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__StopMulticastStreaming::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__StopMulticastStreaming(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__StopMulticastStreaming(struct soap *soap, const char *tag, int id, const _trt__StopMulticastStreaming *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__StopMulticastStreaming), type))
		return soap->error;
	if (a->_trt__StopMulticastStreaming::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__StopMulticastStreaming::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__StopMulticastStreaming::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__StopMulticastStreaming(soap, tag, this, type);
}

SOAP_FMAC3 _trt__StopMulticastStreaming * SOAP_FMAC4 soap_in__trt__StopMulticastStreaming(struct soap *soap, const char *tag, _trt__StopMulticastStreaming *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__StopMulticastStreaming *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__StopMulticastStreaming, sizeof(_trt__StopMulticastStreaming), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__StopMulticastStreaming)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__StopMulticastStreaming *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__StopMulticastStreaming::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__StopMulticastStreaming *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__StopMulticastStreaming, 0, sizeof(_trt__StopMulticastStreaming), 0, soap_copy__trt__StopMulticastStreaming);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__StopMulticastStreaming::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__StopMulticastStreaming);
	if (this->soap_out(soap, tag?tag:"trt:StopMulticastStreaming", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__StopMulticastStreaming::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__StopMulticastStreaming(soap, this, tag, type);
}

SOAP_FMAC3 _trt__StopMulticastStreaming * SOAP_FMAC4 soap_get__trt__StopMulticastStreaming(struct soap *soap, _trt__StopMulticastStreaming *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__StopMulticastStreaming(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__StopMulticastStreaming * SOAP_FMAC2 soap_instantiate__trt__StopMulticastStreaming(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__StopMulticastStreaming(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__StopMulticastStreaming, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__StopMulticastStreaming);
		if (size)
			*size = sizeof(_trt__StopMulticastStreaming);
		((_trt__StopMulticastStreaming*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__StopMulticastStreaming, n);
		if (size)
			*size = n * sizeof(_trt__StopMulticastStreaming);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__StopMulticastStreaming*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__StopMulticastStreaming*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__StopMulticastStreaming(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__StopMulticastStreaming %p -> %p\n", q, p));
	*(_trt__StopMulticastStreaming*)p = *(_trt__StopMulticastStreaming*)q;
}

void _trt__StartMulticastStreamingResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__StartMulticastStreamingResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__StartMulticastStreamingResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__StartMulticastStreamingResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__StartMulticastStreamingResponse(struct soap *soap, const char *tag, int id, const _trt__StartMulticastStreamingResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__StartMulticastStreamingResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__StartMulticastStreamingResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__StartMulticastStreamingResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__StartMulticastStreamingResponse * SOAP_FMAC4 soap_in__trt__StartMulticastStreamingResponse(struct soap *soap, const char *tag, _trt__StartMulticastStreamingResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__StartMulticastStreamingResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__StartMulticastStreamingResponse, sizeof(_trt__StartMulticastStreamingResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__StartMulticastStreamingResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__StartMulticastStreamingResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__StartMulticastStreamingResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__StartMulticastStreamingResponse, 0, sizeof(_trt__StartMulticastStreamingResponse), 0, soap_copy__trt__StartMulticastStreamingResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__StartMulticastStreamingResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__StartMulticastStreamingResponse);
	if (this->soap_out(soap, tag?tag:"trt:StartMulticastStreamingResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__StartMulticastStreamingResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__StartMulticastStreamingResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__StartMulticastStreamingResponse * SOAP_FMAC4 soap_get__trt__StartMulticastStreamingResponse(struct soap *soap, _trt__StartMulticastStreamingResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__StartMulticastStreamingResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__StartMulticastStreamingResponse * SOAP_FMAC2 soap_instantiate__trt__StartMulticastStreamingResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__StartMulticastStreamingResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__StartMulticastStreamingResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__StartMulticastStreamingResponse);
		if (size)
			*size = sizeof(_trt__StartMulticastStreamingResponse);
		((_trt__StartMulticastStreamingResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__StartMulticastStreamingResponse, n);
		if (size)
			*size = n * sizeof(_trt__StartMulticastStreamingResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__StartMulticastStreamingResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__StartMulticastStreamingResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__StartMulticastStreamingResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__StartMulticastStreamingResponse %p -> %p\n", q, p));
	*(_trt__StartMulticastStreamingResponse*)p = *(_trt__StartMulticastStreamingResponse*)q;
}

void _trt__StartMulticastStreaming::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__StartMulticastStreaming::ProfileToken);
	/* transient soap skipped */
}

void _trt__StartMulticastStreaming::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__StartMulticastStreaming::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__StartMulticastStreaming::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__StartMulticastStreaming(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__StartMulticastStreaming(struct soap *soap, const char *tag, int id, const _trt__StartMulticastStreaming *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__StartMulticastStreaming), type))
		return soap->error;
	if (a->_trt__StartMulticastStreaming::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__StartMulticastStreaming::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__StartMulticastStreaming::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__StartMulticastStreaming(soap, tag, this, type);
}

SOAP_FMAC3 _trt__StartMulticastStreaming * SOAP_FMAC4 soap_in__trt__StartMulticastStreaming(struct soap *soap, const char *tag, _trt__StartMulticastStreaming *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__StartMulticastStreaming *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__StartMulticastStreaming, sizeof(_trt__StartMulticastStreaming), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__StartMulticastStreaming)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__StartMulticastStreaming *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__StartMulticastStreaming::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__StartMulticastStreaming *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__StartMulticastStreaming, 0, sizeof(_trt__StartMulticastStreaming), 0, soap_copy__trt__StartMulticastStreaming);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__StartMulticastStreaming::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__StartMulticastStreaming);
	if (this->soap_out(soap, tag?tag:"trt:StartMulticastStreaming", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__StartMulticastStreaming::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__StartMulticastStreaming(soap, this, tag, type);
}

SOAP_FMAC3 _trt__StartMulticastStreaming * SOAP_FMAC4 soap_get__trt__StartMulticastStreaming(struct soap *soap, _trt__StartMulticastStreaming *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__StartMulticastStreaming(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__StartMulticastStreaming * SOAP_FMAC2 soap_instantiate__trt__StartMulticastStreaming(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__StartMulticastStreaming(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__StartMulticastStreaming, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__StartMulticastStreaming);
		if (size)
			*size = sizeof(_trt__StartMulticastStreaming);
		((_trt__StartMulticastStreaming*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__StartMulticastStreaming, n);
		if (size)
			*size = n * sizeof(_trt__StartMulticastStreaming);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__StartMulticastStreaming*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__StartMulticastStreaming*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__StartMulticastStreaming(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__StartMulticastStreaming %p -> %p\n", q, p));
	*(_trt__StartMulticastStreaming*)p = *(_trt__StartMulticastStreaming*)q;
}

void _trt__GetStreamUriResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetStreamUriResponse::MediaUri = NULL;
	/* transient soap skipped */
}

void _trt__GetStreamUriResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MediaUri(soap, &this->_trt__GetStreamUriResponse::MediaUri);
	/* transient soap skipped */
#endif
}

int _trt__GetStreamUriResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetStreamUriResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetStreamUriResponse(struct soap *soap, const char *tag, int id, const _trt__GetStreamUriResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetStreamUriResponse), type))
		return soap->error;
	if (a->MediaUri)
		soap_element_result(soap, "trt:MediaUri");
	if (a->_trt__GetStreamUriResponse::MediaUri)
	{	if (soap_out_PointerTott__MediaUri(soap, "trt:MediaUri", -1, &a->_trt__GetStreamUriResponse::MediaUri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:MediaUri"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetStreamUriResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetStreamUriResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetStreamUriResponse * SOAP_FMAC4 soap_in__trt__GetStreamUriResponse(struct soap *soap, const char *tag, _trt__GetStreamUriResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetStreamUriResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetStreamUriResponse, sizeof(_trt__GetStreamUriResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetStreamUriResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetStreamUriResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_MediaUri1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MediaUri1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaUri(soap, "trt:MediaUri", &(a->_trt__GetStreamUriResponse::MediaUri), "tt:MediaUri"))
				{	soap_flag_MediaUri1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:MediaUri");
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
	{	a = (_trt__GetStreamUriResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetStreamUriResponse, 0, sizeof(_trt__GetStreamUriResponse), 0, soap_copy__trt__GetStreamUriResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MediaUri1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetStreamUriResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetStreamUriResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetStreamUriResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetStreamUriResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetStreamUriResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetStreamUriResponse * SOAP_FMAC4 soap_get__trt__GetStreamUriResponse(struct soap *soap, _trt__GetStreamUriResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetStreamUriResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetStreamUriResponse * SOAP_FMAC2 soap_instantiate__trt__GetStreamUriResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetStreamUriResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetStreamUriResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetStreamUriResponse);
		if (size)
			*size = sizeof(_trt__GetStreamUriResponse);
		((_trt__GetStreamUriResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetStreamUriResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetStreamUriResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetStreamUriResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetStreamUriResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetStreamUriResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetStreamUriResponse %p -> %p\n", q, p));
	*(_trt__GetStreamUriResponse*)p = *(_trt__GetStreamUriResponse*)q;
}

void _trt__GetStreamUri::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetStreamUri::StreamSetup = NULL;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetStreamUri::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetStreamUri::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__StreamSetup(soap, &this->_trt__GetStreamUri::StreamSetup);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetStreamUri::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetStreamUri::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetStreamUri(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetStreamUri(struct soap *soap, const char *tag, int id, const _trt__GetStreamUri *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetStreamUri), type))
		return soap->error;
	if (a->_trt__GetStreamUri::StreamSetup)
	{	if (soap_out_PointerTott__StreamSetup(soap, "trt:StreamSetup", -1, &a->_trt__GetStreamUri::StreamSetup, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:StreamSetup"))
		return soap->error;
	if (a->_trt__GetStreamUri::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetStreamUri::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetStreamUri::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetStreamUri(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetStreamUri * SOAP_FMAC4 soap_in__trt__GetStreamUri(struct soap *soap, const char *tag, _trt__GetStreamUri *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetStreamUri *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetStreamUri, sizeof(_trt__GetStreamUri), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetStreamUri)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetStreamUri *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_StreamSetup1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_StreamSetup1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__StreamSetup(soap, "trt:StreamSetup", &(a->_trt__GetStreamUri::StreamSetup), "tt:StreamSetup"))
				{	soap_flag_StreamSetup1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetStreamUri::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetStreamUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetStreamUri, 0, sizeof(_trt__GetStreamUri), 0, soap_copy__trt__GetStreamUri);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_StreamSetup1 > 0 || soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetStreamUri::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetStreamUri);
	if (this->soap_out(soap, tag?tag:"trt:GetStreamUri", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetStreamUri::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetStreamUri(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetStreamUri * SOAP_FMAC4 soap_get__trt__GetStreamUri(struct soap *soap, _trt__GetStreamUri *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetStreamUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetStreamUri * SOAP_FMAC2 soap_instantiate__trt__GetStreamUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetStreamUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetStreamUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetStreamUri);
		if (size)
			*size = sizeof(_trt__GetStreamUri);
		((_trt__GetStreamUri*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetStreamUri, n);
		if (size)
			*size = n * sizeof(_trt__GetStreamUri);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetStreamUri*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetStreamUri*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetStreamUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetStreamUri %p -> %p\n", q, p));
	*(_trt__GetStreamUri*)p = *(_trt__GetStreamUri*)q;
}

void _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_int(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::TotalNumber);
	this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::JPEG = NULL;
	this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::H264 = NULL;
	this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::MPEG4 = NULL;
	/* transient soap skipped */
}

void _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::TotalNumber, SOAP_TYPE_int);
	soap_serialize_PointerToint(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::JPEG);
	soap_serialize_PointerToint(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::H264);
	soap_serialize_PointerToint(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::MPEG4);
	/* transient soap skipped */
#endif
}

int _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(struct soap *soap, const char *tag, int id, const _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse), type))
		return soap->error;
	soap_element_result(soap, "trt:TotalNumber");
	if (soap_out_int(soap, "trt:TotalNumber", -1, &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::TotalNumber), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "trt:JPEG", -1, &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::JPEG), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "trt:H264", -1, &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::H264), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "trt:MPEG4", -1, &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::MPEG4), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse * SOAP_FMAC4 soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(struct soap *soap, const char *tag, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse, sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_TotalNumber1 = 1;
	size_t soap_flag_JPEG1 = 1;
	size_t soap_flag_H2641 = 1;
	size_t soap_flag_MPEG41 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TotalNumber1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "trt:TotalNumber", &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::TotalNumber), "xsd:int"))
				{	soap_flag_TotalNumber1--;
					continue;
				}
			if (soap_flag_JPEG1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "trt:JPEG", &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::JPEG), "xsd:int"))
				{	soap_flag_JPEG1--;
					continue;
				}
			if (soap_flag_H2641 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "trt:H264", &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::H264), "xsd:int"))
				{	soap_flag_H2641--;
					continue;
				}
			if (soap_flag_MPEG41 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "trt:MPEG4", &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::MPEG4), "xsd:int"))
				{	soap_flag_MPEG41--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:TotalNumber");
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
	{	a = (_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse, 0, sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse), 0, soap_copy__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TotalNumber1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetGuaranteedNumberOfVideoEncoderInstancesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse * SOAP_FMAC4 soap_get__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(struct soap *soap, _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse * SOAP_FMAC2 soap_instantiate__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
		if (size)
			*size = sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
		((_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse %p -> %p\n", q, p));
	*(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)p = *(_trt__GetGuaranteedNumberOfVideoEncoderInstancesResponse*)q;
}

void _trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstances::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetGuaranteedNumberOfVideoEncoderInstances::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const char *tag, int id, const _trt__GetGuaranteedNumberOfVideoEncoderInstances *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances), type))
		return soap->error;
	if (a->_trt__GetGuaranteedNumberOfVideoEncoderInstances::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetGuaranteedNumberOfVideoEncoderInstances::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC4 soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const char *tag, _trt__GetGuaranteedNumberOfVideoEncoderInstances *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetGuaranteedNumberOfVideoEncoderInstances *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances, sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstances), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetGuaranteedNumberOfVideoEncoderInstances *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetGuaranteedNumberOfVideoEncoderInstances::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetGuaranteedNumberOfVideoEncoderInstances *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances, 0, sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstances), 0, soap_copy__trt__GetGuaranteedNumberOfVideoEncoderInstances);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances);
	if (this->soap_out(soap, tag?tag:"trt:GetGuaranteedNumberOfVideoEncoderInstances", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetGuaranteedNumberOfVideoEncoderInstances::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC4 soap_get__trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, _trt__GetGuaranteedNumberOfVideoEncoderInstances *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC2 soap_instantiate__trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetGuaranteedNumberOfVideoEncoderInstances(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetGuaranteedNumberOfVideoEncoderInstances, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetGuaranteedNumberOfVideoEncoderInstances);
		if (size)
			*size = sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstances);
		((_trt__GetGuaranteedNumberOfVideoEncoderInstances*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetGuaranteedNumberOfVideoEncoderInstances, n);
		if (size)
			*size = n * sizeof(_trt__GetGuaranteedNumberOfVideoEncoderInstances);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetGuaranteedNumberOfVideoEncoderInstances*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetGuaranteedNumberOfVideoEncoderInstances*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetGuaranteedNumberOfVideoEncoderInstances %p -> %p\n", q, p));
	*(_trt__GetGuaranteedNumberOfVideoEncoderInstances*)p = *(_trt__GetGuaranteedNumberOfVideoEncoderInstances*)q;
}

void _trt__GetAudioDecoderConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioDecoderConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioDecoderConfigurationOptions(soap, &this->_trt__GetAudioDecoderConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetAudioDecoderConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__AudioDecoderConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetAudioDecoderConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse, sizeof(_trt__GetAudioDecoderConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfigurationOptions(soap, "trt:Options", &(a->_trt__GetAudioDecoderConfigurationOptionsResponse::Options), "tt:AudioDecoderConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetAudioDecoderConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse, 0, sizeof(_trt__GetAudioDecoderConfigurationOptionsResponse), 0, soap_copy__trt__GetAudioDecoderConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfigurationOptionsResponse(struct soap *soap, _trt__GetAudioDecoderConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfigurationOptionsResponse);
		((_trt__GetAudioDecoderConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfigurationOptionsResponse*)p = *(_trt__GetAudioDecoderConfigurationOptionsResponse*)q;
}

void _trt__GetAudioDecoderConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetAudioDecoderConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetAudioDecoderConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions, sizeof(_trt__GetAudioDecoderConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioDecoderConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetAudioDecoderConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioDecoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions, 0, sizeof(_trt__GetAudioDecoderConfigurationOptions), 0, soap_copy__trt__GetAudioDecoderConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfigurationOptions(struct soap *soap, _trt__GetAudioDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfigurationOptions);
		((_trt__GetAudioDecoderConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfigurationOptions*)p = *(_trt__GetAudioDecoderConfigurationOptions*)q;
}

void _trt__GetAudioOutputConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioOutputConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioOutputConfigurationOptions(soap, &this->_trt__GetAudioOutputConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetAudioOutputConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__AudioOutputConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetAudioOutputConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetAudioOutputConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse, sizeof(_trt__GetAudioOutputConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioOutputConfigurationOptions(soap, "trt:Options", &(a->_trt__GetAudioOutputConfigurationOptionsResponse::Options), "tt:AudioOutputConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetAudioOutputConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse, 0, sizeof(_trt__GetAudioOutputConfigurationOptionsResponse), 0, soap_copy__trt__GetAudioOutputConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfigurationOptionsResponse(struct soap *soap, _trt__GetAudioOutputConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfigurationOptionsResponse);
		((_trt__GetAudioOutputConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfigurationOptionsResponse*)p = *(_trt__GetAudioOutputConfigurationOptionsResponse*)q;
}

void _trt__GetAudioOutputConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetAudioOutputConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetAudioOutputConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfigurationOptions(struct soap *soap, const char *tag, _trt__GetAudioOutputConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationOptions, sizeof(_trt__GetAudioOutputConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioOutputConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetAudioOutputConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioOutputConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfigurationOptions, 0, sizeof(_trt__GetAudioOutputConfigurationOptions), 0, soap_copy__trt__GetAudioOutputConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfigurationOptions(struct soap *soap, _trt__GetAudioOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfigurationOptions);
		((_trt__GetAudioOutputConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfigurationOptions*)p = *(_trt__GetAudioOutputConfigurationOptions*)q;
}

void _trt__GetMetadataConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetMetadataConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetMetadataConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MetadataConfigurationOptions(soap, &this->_trt__GetMetadataConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetMetadataConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__MetadataConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetMetadataConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetMetadataConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetMetadataConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse, sizeof(_trt__GetMetadataConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfigurationOptions(soap, "trt:Options", &(a->_trt__GetMetadataConfigurationOptionsResponse::Options), "tt:MetadataConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetMetadataConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse, 0, sizeof(_trt__GetMetadataConfigurationOptionsResponse), 0, soap_copy__trt__GetMetadataConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetMetadataConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetMetadataConfigurationOptionsResponse(struct soap *soap, _trt__GetMetadataConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetMetadataConfigurationOptionsResponse);
		((_trt__GetMetadataConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetMetadataConfigurationOptionsResponse*)p = *(_trt__GetMetadataConfigurationOptionsResponse*)q;
}

void _trt__GetMetadataConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetMetadataConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetMetadataConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetMetadataConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetMetadataConfigurationOptions(struct soap *soap, const char *tag, _trt__GetMetadataConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfigurationOptions, sizeof(_trt__GetMetadataConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetMetadataConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetMetadataConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetMetadataConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfigurationOptions, 0, sizeof(_trt__GetMetadataConfigurationOptions), 0, soap_copy__trt__GetMetadataConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetMetadataConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetMetadataConfigurationOptions(struct soap *soap, _trt__GetMetadataConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetMetadataConfigurationOptions);
		((_trt__GetMetadataConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetMetadataConfigurationOptions*)p = *(_trt__GetMetadataConfigurationOptions*)q;
}

void _trt__GetAudioEncoderConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioEncoderConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioEncoderConfigurationOptions(soap, &this->_trt__GetAudioEncoderConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetAudioEncoderConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__AudioEncoderConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetAudioEncoderConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse, sizeof(_trt__GetAudioEncoderConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfigurationOptions(soap, "trt:Options", &(a->_trt__GetAudioEncoderConfigurationOptionsResponse::Options), "tt:AudioEncoderConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetAudioEncoderConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse, 0, sizeof(_trt__GetAudioEncoderConfigurationOptionsResponse), 0, soap_copy__trt__GetAudioEncoderConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfigurationOptionsResponse(struct soap *soap, _trt__GetAudioEncoderConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfigurationOptionsResponse);
		((_trt__GetAudioEncoderConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfigurationOptionsResponse*)p = *(_trt__GetAudioEncoderConfigurationOptionsResponse*)q;
}

void _trt__GetAudioEncoderConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetAudioEncoderConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetAudioEncoderConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfigurationOptions(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions, sizeof(_trt__GetAudioEncoderConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioEncoderConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetAudioEncoderConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioEncoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions, 0, sizeof(_trt__GetAudioEncoderConfigurationOptions), 0, soap_copy__trt__GetAudioEncoderConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfigurationOptions(struct soap *soap, _trt__GetAudioEncoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfigurationOptions);
		((_trt__GetAudioEncoderConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfigurationOptions*)p = *(_trt__GetAudioEncoderConfigurationOptions*)q;
}

void _trt__GetAudioSourceConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioSourceConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioSourceConfigurationOptions(soap, &this->_trt__GetAudioSourceConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetAudioSourceConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__AudioSourceConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetAudioSourceConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetAudioSourceConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse, sizeof(_trt__GetAudioSourceConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceConfigurationOptions(soap, "trt:Options", &(a->_trt__GetAudioSourceConfigurationOptionsResponse::Options), "tt:AudioSourceConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetAudioSourceConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse, 0, sizeof(_trt__GetAudioSourceConfigurationOptionsResponse), 0, soap_copy__trt__GetAudioSourceConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfigurationOptionsResponse(struct soap *soap, _trt__GetAudioSourceConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfigurationOptionsResponse);
		((_trt__GetAudioSourceConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfigurationOptionsResponse*)p = *(_trt__GetAudioSourceConfigurationOptionsResponse*)q;
}

void _trt__GetAudioSourceConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetAudioSourceConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetAudioSourceConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfigurationOptions(struct soap *soap, const char *tag, _trt__GetAudioSourceConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationOptions, sizeof(_trt__GetAudioSourceConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioSourceConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetAudioSourceConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioSourceConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfigurationOptions, 0, sizeof(_trt__GetAudioSourceConfigurationOptions), 0, soap_copy__trt__GetAudioSourceConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfigurationOptions(struct soap *soap, _trt__GetAudioSourceConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfigurationOptions);
		((_trt__GetAudioSourceConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfigurationOptions*)p = *(_trt__GetAudioSourceConfigurationOptions*)q;
}

void _trt__GetVideoEncoderConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoEncoderConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoEncoderConfigurationOptions(soap, &this->_trt__GetVideoEncoderConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetVideoEncoderConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__VideoEncoderConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetVideoEncoderConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse, sizeof(_trt__GetVideoEncoderConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfigurationOptions(soap, "trt:Options", &(a->_trt__GetVideoEncoderConfigurationOptionsResponse::Options), "tt:VideoEncoderConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetVideoEncoderConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse, 0, sizeof(_trt__GetVideoEncoderConfigurationOptionsResponse), 0, soap_copy__trt__GetVideoEncoderConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfigurationOptionsResponse(struct soap *soap, _trt__GetVideoEncoderConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfigurationOptionsResponse);
		((_trt__GetVideoEncoderConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfigurationOptionsResponse*)p = *(_trt__GetVideoEncoderConfigurationOptionsResponse*)q;
}

void _trt__GetVideoEncoderConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetVideoEncoderConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetVideoEncoderConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfigurationOptions(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions, sizeof(_trt__GetVideoEncoderConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetVideoEncoderConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetVideoEncoderConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetVideoEncoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions, 0, sizeof(_trt__GetVideoEncoderConfigurationOptions), 0, soap_copy__trt__GetVideoEncoderConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfigurationOptions(struct soap *soap, _trt__GetVideoEncoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfigurationOptions);
		((_trt__GetVideoEncoderConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfigurationOptions*)p = *(_trt__GetVideoEncoderConfigurationOptions*)q;
}

void _trt__GetVideoSourceConfigurationOptionsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoSourceConfigurationOptionsResponse::Options = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfigurationOptionsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoSourceConfigurationOptions(soap, &this->_trt__GetVideoSourceConfigurationOptionsResponse::Options);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfigurationOptionsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfigurationOptionsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfigurationOptionsResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfigurationOptionsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse), type))
		return soap->error;
	if (a->Options)
		soap_element_result(soap, "trt:Options");
	if (a->_trt__GetVideoSourceConfigurationOptionsResponse::Options)
	{	if (soap_out_PointerTott__VideoSourceConfigurationOptions(soap, "trt:Options", -1, &a->_trt__GetVideoSourceConfigurationOptionsResponse::Options, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Options"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfigurationOptionsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfigurationOptionsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationOptionsResponse * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfigurationOptionsResponse(struct soap *soap, const char *tag, _trt__GetVideoSourceConfigurationOptionsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfigurationOptionsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse, sizeof(_trt__GetVideoSourceConfigurationOptionsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfigurationOptionsResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Options1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Options1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfigurationOptions(soap, "trt:Options", &(a->_trt__GetVideoSourceConfigurationOptionsResponse::Options), "tt:VideoSourceConfigurationOptions"))
				{	soap_flag_Options1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Options");
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
	{	a = (_trt__GetVideoSourceConfigurationOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse, 0, sizeof(_trt__GetVideoSourceConfigurationOptionsResponse), 0, soap_copy__trt__GetVideoSourceConfigurationOptionsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Options1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfigurationOptionsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfigurationOptionsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfigurationOptionsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfigurationOptionsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationOptionsResponse * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfigurationOptionsResponse(struct soap *soap, _trt__GetVideoSourceConfigurationOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfigurationOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfigurationOptionsResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfigurationOptionsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfigurationOptionsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfigurationOptionsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfigurationOptionsResponse);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfigurationOptionsResponse);
		((_trt__GetVideoSourceConfigurationOptionsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfigurationOptionsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfigurationOptionsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfigurationOptionsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfigurationOptionsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfigurationOptionsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfigurationOptionsResponse %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfigurationOptionsResponse*)p = *(_trt__GetVideoSourceConfigurationOptionsResponse*)q;
}

void _trt__GetVideoSourceConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfigurationOptions::ConfigurationToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfigurationOptions::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfigurationOptions::ConfigurationToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfigurationOptions::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfigurationOptions(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfigurationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &(a->_trt__GetVideoSourceConfigurationOptions::ConfigurationToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &(a->_trt__GetVideoSourceConfigurationOptions::ProfileToken), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationOptions * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfigurationOptions(struct soap *soap, const char *tag, _trt__GetVideoSourceConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationOptions, sizeof(_trt__GetVideoSourceConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetVideoSourceConfigurationOptions::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetVideoSourceConfigurationOptions::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetVideoSourceConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfigurationOptions, 0, sizeof(_trt__GetVideoSourceConfigurationOptions), 0, soap_copy__trt__GetVideoSourceConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationOptions * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfigurationOptions(struct soap *soap, _trt__GetVideoSourceConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfigurationOptions * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfigurationOptions);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfigurationOptions);
		((_trt__GetVideoSourceConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfigurationOptions, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfigurationOptions %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfigurationOptions*)p = *(_trt__GetVideoSourceConfigurationOptions*)q;
}

void _trt__SetAudioDecoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetAudioDecoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetAudioDecoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioDecoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetAudioDecoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioDecoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioDecoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, _trt__SetAudioDecoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioDecoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse, sizeof(_trt__SetAudioDecoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioDecoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioDecoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse, 0, sizeof(_trt__SetAudioDecoderConfigurationResponse), 0, soap_copy__trt__SetAudioDecoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetAudioDecoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioDecoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioDecoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioDecoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetAudioDecoderConfigurationResponse(struct soap *soap, _trt__SetAudioDecoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioDecoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioDecoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetAudioDecoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioDecoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioDecoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioDecoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetAudioDecoderConfigurationResponse);
		((_trt__SetAudioDecoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioDecoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioDecoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioDecoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioDecoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioDecoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioDecoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetAudioDecoderConfigurationResponse*)p = *(_trt__SetAudioDecoderConfigurationResponse*)q;
}

void _trt__SetAudioDecoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetAudioDecoderConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetAudioDecoderConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetAudioDecoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioDecoderConfiguration(soap, &this->_trt__SetAudioDecoderConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetAudioDecoderConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetAudioDecoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioDecoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetAudioDecoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioDecoderConfiguration), type))
		return soap->error;
	if (a->_trt__SetAudioDecoderConfiguration::Configuration)
	{	if (soap_out_PointerTott__AudioDecoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetAudioDecoderConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetAudioDecoderConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioDecoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioDecoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioDecoderConfiguration * SOAP_FMAC4 soap_in__trt__SetAudioDecoderConfiguration(struct soap *soap, const char *tag, _trt__SetAudioDecoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioDecoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioDecoderConfiguration, sizeof(_trt__SetAudioDecoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioDecoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioDecoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfiguration(soap, "trt:Configuration", &(a->_trt__SetAudioDecoderConfiguration::Configuration), "tt:AudioDecoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetAudioDecoderConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioDecoderConfiguration, 0, sizeof(_trt__SetAudioDecoderConfiguration), 0, soap_copy__trt__SetAudioDecoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetAudioDecoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioDecoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioDecoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioDecoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioDecoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioDecoderConfiguration * SOAP_FMAC4 soap_get__trt__SetAudioDecoderConfiguration(struct soap *soap, _trt__SetAudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioDecoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetAudioDecoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioDecoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioDecoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioDecoderConfiguration);
		if (size)
			*size = sizeof(_trt__SetAudioDecoderConfiguration);
		((_trt__SetAudioDecoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioDecoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioDecoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioDecoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioDecoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioDecoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioDecoderConfiguration %p -> %p\n", q, p));
	*(_trt__SetAudioDecoderConfiguration*)p = *(_trt__SetAudioDecoderConfiguration*)q;
}

void _trt__SetAudioOutputConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetAudioOutputConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetAudioOutputConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioOutputConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetAudioOutputConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioOutputConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioOutputConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioOutputConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, _trt__SetAudioOutputConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioOutputConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioOutputConfigurationResponse, sizeof(_trt__SetAudioOutputConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioOutputConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioOutputConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioOutputConfigurationResponse, 0, sizeof(_trt__SetAudioOutputConfigurationResponse), 0, soap_copy__trt__SetAudioOutputConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetAudioOutputConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioOutputConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioOutputConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioOutputConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioOutputConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetAudioOutputConfigurationResponse(struct soap *soap, _trt__SetAudioOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioOutputConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetAudioOutputConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioOutputConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioOutputConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioOutputConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetAudioOutputConfigurationResponse);
		((_trt__SetAudioOutputConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioOutputConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioOutputConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioOutputConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioOutputConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioOutputConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioOutputConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetAudioOutputConfigurationResponse*)p = *(_trt__SetAudioOutputConfigurationResponse*)q;
}

void _trt__SetAudioOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetAudioOutputConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetAudioOutputConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetAudioOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioOutputConfiguration(soap, &this->_trt__SetAudioOutputConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetAudioOutputConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetAudioOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioOutputConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetAudioOutputConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioOutputConfiguration), type))
		return soap->error;
	if (a->_trt__SetAudioOutputConfiguration::Configuration)
	{	if (soap_out_PointerTott__AudioOutputConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetAudioOutputConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetAudioOutputConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioOutputConfiguration * SOAP_FMAC4 soap_in__trt__SetAudioOutputConfiguration(struct soap *soap, const char *tag, _trt__SetAudioOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioOutputConfiguration, sizeof(_trt__SetAudioOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "trt:Configuration", &(a->_trt__SetAudioOutputConfiguration::Configuration), "tt:AudioOutputConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetAudioOutputConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioOutputConfiguration, 0, sizeof(_trt__SetAudioOutputConfiguration), 0, soap_copy__trt__SetAudioOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetAudioOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioOutputConfiguration * SOAP_FMAC4 soap_get__trt__SetAudioOutputConfiguration(struct soap *soap, _trt__SetAudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioOutputConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetAudioOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioOutputConfiguration);
		if (size)
			*size = sizeof(_trt__SetAudioOutputConfiguration);
		((_trt__SetAudioOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioOutputConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioOutputConfiguration %p -> %p\n", q, p));
	*(_trt__SetAudioOutputConfiguration*)p = *(_trt__SetAudioOutputConfiguration*)q;
}

void _trt__SetMetadataConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetMetadataConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetMetadataConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetMetadataConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetMetadataConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetMetadataConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetMetadataConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetMetadataConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetMetadataConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetMetadataConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetMetadataConfigurationResponse(struct soap *soap, const char *tag, _trt__SetMetadataConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetMetadataConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetMetadataConfigurationResponse, sizeof(_trt__SetMetadataConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetMetadataConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetMetadataConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetMetadataConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetMetadataConfigurationResponse, 0, sizeof(_trt__SetMetadataConfigurationResponse), 0, soap_copy__trt__SetMetadataConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetMetadataConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetMetadataConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetMetadataConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetMetadataConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetMetadataConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetMetadataConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetMetadataConfigurationResponse(struct soap *soap, _trt__SetMetadataConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetMetadataConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetMetadataConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetMetadataConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetMetadataConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetMetadataConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetMetadataConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetMetadataConfigurationResponse);
		((_trt__SetMetadataConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetMetadataConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetMetadataConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetMetadataConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetMetadataConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetMetadataConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetMetadataConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetMetadataConfigurationResponse*)p = *(_trt__SetMetadataConfigurationResponse*)q;
}

void _trt__SetMetadataConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetMetadataConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetMetadataConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetMetadataConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MetadataConfiguration(soap, &this->_trt__SetMetadataConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetMetadataConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetMetadataConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetMetadataConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetMetadataConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetMetadataConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetMetadataConfiguration), type))
		return soap->error;
	if (a->_trt__SetMetadataConfiguration::Configuration)
	{	if (soap_out_PointerTott__MetadataConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetMetadataConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetMetadataConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetMetadataConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetMetadataConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetMetadataConfiguration * SOAP_FMAC4 soap_in__trt__SetMetadataConfiguration(struct soap *soap, const char *tag, _trt__SetMetadataConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetMetadataConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetMetadataConfiguration, sizeof(_trt__SetMetadataConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetMetadataConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetMetadataConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfiguration(soap, "trt:Configuration", &(a->_trt__SetMetadataConfiguration::Configuration), "tt:MetadataConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetMetadataConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetMetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetMetadataConfiguration, 0, sizeof(_trt__SetMetadataConfiguration), 0, soap_copy__trt__SetMetadataConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetMetadataConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetMetadataConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetMetadataConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetMetadataConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetMetadataConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetMetadataConfiguration * SOAP_FMAC4 soap_get__trt__SetMetadataConfiguration(struct soap *soap, _trt__SetMetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetMetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetMetadataConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetMetadataConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetMetadataConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetMetadataConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetMetadataConfiguration);
		if (size)
			*size = sizeof(_trt__SetMetadataConfiguration);
		((_trt__SetMetadataConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetMetadataConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetMetadataConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetMetadataConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetMetadataConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetMetadataConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetMetadataConfiguration %p -> %p\n", q, p));
	*(_trt__SetMetadataConfiguration*)p = *(_trt__SetMetadataConfiguration*)q;
}

void _trt__SetVideoAnalyticsConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetVideoAnalyticsConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetVideoAnalyticsConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoAnalyticsConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoAnalyticsConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoAnalyticsConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, _trt__SetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoAnalyticsConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse, sizeof(_trt__SetVideoAnalyticsConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoAnalyticsConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse, 0, sizeof(_trt__SetVideoAnalyticsConfigurationResponse), 0, soap_copy__trt__SetVideoAnalyticsConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetVideoAnalyticsConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoAnalyticsConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoAnalyticsConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoAnalyticsConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetVideoAnalyticsConfigurationResponse(struct soap *soap, _trt__SetVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoAnalyticsConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetVideoAnalyticsConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoAnalyticsConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoAnalyticsConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoAnalyticsConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetVideoAnalyticsConfigurationResponse);
		((_trt__SetVideoAnalyticsConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoAnalyticsConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoAnalyticsConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoAnalyticsConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoAnalyticsConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoAnalyticsConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoAnalyticsConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetVideoAnalyticsConfigurationResponse*)p = *(_trt__SetVideoAnalyticsConfigurationResponse*)q;
}

void _trt__SetVideoAnalyticsConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetVideoAnalyticsConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetVideoAnalyticsConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetVideoAnalyticsConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &this->_trt__SetVideoAnalyticsConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetVideoAnalyticsConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetVideoAnalyticsConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoAnalyticsConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetVideoAnalyticsConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->_trt__SetVideoAnalyticsConfiguration::Configuration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetVideoAnalyticsConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetVideoAnalyticsConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoAnalyticsConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoAnalyticsConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__trt__SetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, _trt__SetVideoAnalyticsConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoAnalyticsConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoAnalyticsConfiguration, sizeof(_trt__SetVideoAnalyticsConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoAnalyticsConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoAnalyticsConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configuration", &(a->_trt__SetVideoAnalyticsConfiguration::Configuration), "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetVideoAnalyticsConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoAnalyticsConfiguration, 0, sizeof(_trt__SetVideoAnalyticsConfiguration), 0, soap_copy__trt__SetVideoAnalyticsConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetVideoAnalyticsConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoAnalyticsConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoAnalyticsConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoAnalyticsConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoAnalyticsConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__trt__SetVideoAnalyticsConfiguration(struct soap *soap, _trt__SetVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoAnalyticsConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetVideoAnalyticsConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoAnalyticsConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoAnalyticsConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoAnalyticsConfiguration);
		if (size)
			*size = sizeof(_trt__SetVideoAnalyticsConfiguration);
		((_trt__SetVideoAnalyticsConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoAnalyticsConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoAnalyticsConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoAnalyticsConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoAnalyticsConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoAnalyticsConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoAnalyticsConfiguration %p -> %p\n", q, p));
	*(_trt__SetVideoAnalyticsConfiguration*)p = *(_trt__SetVideoAnalyticsConfiguration*)q;
}

void _trt__SetAudioSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetAudioSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetAudioSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetAudioSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__SetAudioSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioSourceConfigurationResponse, sizeof(_trt__SetAudioSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioSourceConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioSourceConfigurationResponse, 0, sizeof(_trt__SetAudioSourceConfigurationResponse), 0, soap_copy__trt__SetAudioSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetAudioSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetAudioSourceConfigurationResponse(struct soap *soap, _trt__SetAudioSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetAudioSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetAudioSourceConfigurationResponse);
		((_trt__SetAudioSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetAudioSourceConfigurationResponse*)p = *(_trt__SetAudioSourceConfigurationResponse*)q;
}

void _trt__SetAudioSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetAudioSourceConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetAudioSourceConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetAudioSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioSourceConfiguration(soap, &this->_trt__SetAudioSourceConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetAudioSourceConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetAudioSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetAudioSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioSourceConfiguration), type))
		return soap->error;
	if (a->_trt__SetAudioSourceConfiguration::Configuration)
	{	if (soap_out_PointerTott__AudioSourceConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetAudioSourceConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetAudioSourceConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioSourceConfiguration * SOAP_FMAC4 soap_in__trt__SetAudioSourceConfiguration(struct soap *soap, const char *tag, _trt__SetAudioSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioSourceConfiguration, sizeof(_trt__SetAudioSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "trt:Configuration", &(a->_trt__SetAudioSourceConfiguration::Configuration), "tt:AudioSourceConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetAudioSourceConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioSourceConfiguration, 0, sizeof(_trt__SetAudioSourceConfiguration), 0, soap_copy__trt__SetAudioSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetAudioSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioSourceConfiguration * SOAP_FMAC4 soap_get__trt__SetAudioSourceConfiguration(struct soap *soap, _trt__SetAudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetAudioSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioSourceConfiguration);
		if (size)
			*size = sizeof(_trt__SetAudioSourceConfiguration);
		((_trt__SetAudioSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioSourceConfiguration %p -> %p\n", q, p));
	*(_trt__SetAudioSourceConfiguration*)p = *(_trt__SetAudioSourceConfiguration*)q;
}

void _trt__SetAudioEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetAudioEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetAudioEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetAudioEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__SetAudioEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse, sizeof(_trt__SetAudioEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse, 0, sizeof(_trt__SetAudioEncoderConfigurationResponse), 0, soap_copy__trt__SetAudioEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetAudioEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetAudioEncoderConfigurationResponse(struct soap *soap, _trt__SetAudioEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetAudioEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetAudioEncoderConfigurationResponse);
		((_trt__SetAudioEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetAudioEncoderConfigurationResponse*)p = *(_trt__SetAudioEncoderConfigurationResponse*)q;
}

void _trt__SetAudioEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetAudioEncoderConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetAudioEncoderConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetAudioEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioEncoderConfiguration(soap, &this->_trt__SetAudioEncoderConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetAudioEncoderConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetAudioEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetAudioEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetAudioEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetAudioEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetAudioEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__SetAudioEncoderConfiguration::Configuration)
	{	if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetAudioEncoderConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetAudioEncoderConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetAudioEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetAudioEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetAudioEncoderConfiguration * SOAP_FMAC4 soap_in__trt__SetAudioEncoderConfiguration(struct soap *soap, const char *tag, _trt__SetAudioEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetAudioEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetAudioEncoderConfiguration, sizeof(_trt__SetAudioEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetAudioEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetAudioEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "trt:Configuration", &(a->_trt__SetAudioEncoderConfiguration::Configuration), "tt:AudioEncoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetAudioEncoderConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetAudioEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetAudioEncoderConfiguration, 0, sizeof(_trt__SetAudioEncoderConfiguration), 0, soap_copy__trt__SetAudioEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetAudioEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetAudioEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetAudioEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetAudioEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetAudioEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetAudioEncoderConfiguration * SOAP_FMAC4 soap_get__trt__SetAudioEncoderConfiguration(struct soap *soap, _trt__SetAudioEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetAudioEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetAudioEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetAudioEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetAudioEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetAudioEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetAudioEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__SetAudioEncoderConfiguration);
		((_trt__SetAudioEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetAudioEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetAudioEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetAudioEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetAudioEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetAudioEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetAudioEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__SetAudioEncoderConfiguration*)p = *(_trt__SetAudioEncoderConfiguration*)q;
}

void _trt__SetVideoSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetVideoSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetVideoSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetVideoSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__SetVideoSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoSourceConfigurationResponse, sizeof(_trt__SetVideoSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoSourceConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoSourceConfigurationResponse, 0, sizeof(_trt__SetVideoSourceConfigurationResponse), 0, soap_copy__trt__SetVideoSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetVideoSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetVideoSourceConfigurationResponse(struct soap *soap, _trt__SetVideoSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetVideoSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetVideoSourceConfigurationResponse);
		((_trt__SetVideoSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetVideoSourceConfigurationResponse*)p = *(_trt__SetVideoSourceConfigurationResponse*)q;
}

void _trt__SetVideoSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetVideoSourceConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetVideoSourceConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetVideoSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoSourceConfiguration(soap, &this->_trt__SetVideoSourceConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetVideoSourceConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetVideoSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetVideoSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoSourceConfiguration), type))
		return soap->error;
	if (a->_trt__SetVideoSourceConfiguration::Configuration)
	{	if (soap_out_PointerTott__VideoSourceConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetVideoSourceConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetVideoSourceConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoSourceConfiguration * SOAP_FMAC4 soap_in__trt__SetVideoSourceConfiguration(struct soap *soap, const char *tag, _trt__SetVideoSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoSourceConfiguration, sizeof(_trt__SetVideoSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "trt:Configuration", &(a->_trt__SetVideoSourceConfiguration::Configuration), "tt:VideoSourceConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetVideoSourceConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoSourceConfiguration, 0, sizeof(_trt__SetVideoSourceConfiguration), 0, soap_copy__trt__SetVideoSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetVideoSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoSourceConfiguration * SOAP_FMAC4 soap_get__trt__SetVideoSourceConfiguration(struct soap *soap, _trt__SetVideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetVideoSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoSourceConfiguration);
		if (size)
			*size = sizeof(_trt__SetVideoSourceConfiguration);
		((_trt__SetVideoSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoSourceConfiguration %p -> %p\n", q, p));
	*(_trt__SetVideoSourceConfiguration*)p = *(_trt__SetVideoSourceConfiguration*)q;
}

void _trt__SetVideoEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__SetVideoEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__SetVideoEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__SetVideoEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__SetVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__SetVideoEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse, sizeof(_trt__SetVideoEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse, 0, sizeof(_trt__SetVideoEncoderConfigurationResponse), 0, soap_copy__trt__SetVideoEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__SetVideoEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__SetVideoEncoderConfigurationResponse(struct soap *soap, _trt__SetVideoEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__SetVideoEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__SetVideoEncoderConfigurationResponse);
		((_trt__SetVideoEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__SetVideoEncoderConfigurationResponse*)p = *(_trt__SetVideoEncoderConfigurationResponse*)q;
}

void _trt__SetVideoEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__SetVideoEncoderConfiguration::Configuration = NULL;
	soap_default_bool(soap, &this->_trt__SetVideoEncoderConfiguration::ForcePersistence);
	/* transient soap skipped */
}

void _trt__SetVideoEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoEncoderConfiguration(soap, &this->_trt__SetVideoEncoderConfiguration::Configuration);
	soap_embedded(soap, &this->_trt__SetVideoEncoderConfiguration::ForcePersistence, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _trt__SetVideoEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__SetVideoEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__SetVideoEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__SetVideoEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__SetVideoEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__SetVideoEncoderConfiguration::Configuration)
	{	if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__SetVideoEncoderConfiguration::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	if (soap_out_bool(soap, "trt:ForcePersistence", -1, &(a->_trt__SetVideoEncoderConfiguration::ForcePersistence), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__SetVideoEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__SetVideoEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__SetVideoEncoderConfiguration * SOAP_FMAC4 soap_in__trt__SetVideoEncoderConfiguration(struct soap *soap, const char *tag, _trt__SetVideoEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__SetVideoEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__SetVideoEncoderConfiguration, sizeof(_trt__SetVideoEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__SetVideoEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__SetVideoEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_ForcePersistence1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "trt:Configuration", &(a->_trt__SetVideoEncoderConfiguration::Configuration), "tt:VideoEncoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_ForcePersistence1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "trt:ForcePersistence", &(a->_trt__SetVideoEncoderConfiguration::ForcePersistence), "xsd:boolean"))
				{	soap_flag_ForcePersistence1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__SetVideoEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__SetVideoEncoderConfiguration, 0, sizeof(_trt__SetVideoEncoderConfiguration), 0, soap_copy__trt__SetVideoEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0 || soap_flag_ForcePersistence1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__SetVideoEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__SetVideoEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:SetVideoEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__SetVideoEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__SetVideoEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__SetVideoEncoderConfiguration * SOAP_FMAC4 soap_get__trt__SetVideoEncoderConfiguration(struct soap *soap, _trt__SetVideoEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__SetVideoEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__SetVideoEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__SetVideoEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__SetVideoEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__SetVideoEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__SetVideoEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__SetVideoEncoderConfiguration);
		((_trt__SetVideoEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__SetVideoEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__SetVideoEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__SetVideoEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__SetVideoEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__SetVideoEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__SetVideoEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__SetVideoEncoderConfiguration*)p = *(_trt__SetVideoEncoderConfiguration*)q;
}

void _trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleAudioDecoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleAudioDecoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioDecoderConfiguration(soap, this->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioDecoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioDecoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioDecoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioDecoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioDecoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioDecoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioDecoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleAudioDecoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioDecoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse, sizeof(_trt__GetCompatibleAudioDecoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioDecoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = (tt__AudioDecoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioDecoderConfiguration *));
					if (a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioDecoderConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations, "tt:AudioDecoderConfiguration"))
				{	a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = (tt__AudioDecoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleAudioDecoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleAudioDecoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse, 0, sizeof(_trt__GetCompatibleAudioDecoderConfigurationsResponse), 0, soap_copy__trt__GetCompatibleAudioDecoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioDecoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioDecoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioDecoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioDecoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioDecoderConfigurationsResponse(struct soap *soap, _trt__GetCompatibleAudioDecoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioDecoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioDecoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioDecoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioDecoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioDecoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioDecoderConfigurationsResponse);
		((_trt__GetCompatibleAudioDecoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioDecoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioDecoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioDecoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioDecoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioDecoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioDecoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioDecoderConfigurationsResponse*)p = *(_trt__GetCompatibleAudioDecoderConfigurationsResponse*)q;
}

void _trt__GetCompatibleAudioDecoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioDecoderConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioDecoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioDecoderConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioDecoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioDecoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioDecoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioDecoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleAudioDecoderConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleAudioDecoderConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioDecoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioDecoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioDecoderConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioDecoderConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleAudioDecoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioDecoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations, sizeof(_trt__GetCompatibleAudioDecoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioDecoderConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleAudioDecoderConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleAudioDecoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations, 0, sizeof(_trt__GetCompatibleAudioDecoderConfigurations), 0, soap_copy__trt__GetCompatibleAudioDecoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioDecoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioDecoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioDecoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioDecoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioDecoderConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioDecoderConfigurations(struct soap *soap, _trt__GetCompatibleAudioDecoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioDecoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioDecoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioDecoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioDecoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioDecoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioDecoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioDecoderConfigurations);
		((_trt__GetCompatibleAudioDecoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioDecoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioDecoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioDecoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioDecoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioDecoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioDecoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioDecoderConfigurations*)p = *(_trt__GetCompatibleAudioDecoderConfigurations*)q;
}

void _trt__GetCompatibleAudioOutputConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleAudioOutputConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioOutputConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleAudioOutputConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioOutputConfiguration(soap, this->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioOutputConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioOutputConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioOutputConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioOutputConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleAudioOutputConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioOutputConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioOutputConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioOutputConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioOutputConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioOutputConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleAudioOutputConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioOutputConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse, sizeof(_trt__GetCompatibleAudioOutputConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioOutputConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = (tt__AudioOutputConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioOutputConfiguration *));
					if (a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations, "tt:AudioOutputConfiguration"))
				{	a->_trt__GetCompatibleAudioOutputConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleAudioOutputConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = (tt__AudioOutputConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleAudioOutputConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleAudioOutputConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse, 0, sizeof(_trt__GetCompatibleAudioOutputConfigurationsResponse), 0, soap_copy__trt__GetCompatibleAudioOutputConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioOutputConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioOutputConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioOutputConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioOutputConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioOutputConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioOutputConfigurationsResponse(struct soap *soap, _trt__GetCompatibleAudioOutputConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioOutputConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioOutputConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioOutputConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioOutputConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioOutputConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioOutputConfigurationsResponse);
		((_trt__GetCompatibleAudioOutputConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioOutputConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioOutputConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioOutputConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioOutputConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioOutputConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioOutputConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioOutputConfigurationsResponse*)p = *(_trt__GetCompatibleAudioOutputConfigurationsResponse*)q;
}

void _trt__GetCompatibleAudioOutputConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioOutputConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioOutputConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioOutputConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioOutputConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioOutputConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioOutputConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioOutputConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleAudioOutputConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleAudioOutputConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioOutputConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioOutputConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioOutputConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioOutputConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleAudioOutputConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioOutputConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations, sizeof(_trt__GetCompatibleAudioOutputConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioOutputConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleAudioOutputConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleAudioOutputConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations, 0, sizeof(_trt__GetCompatibleAudioOutputConfigurations), 0, soap_copy__trt__GetCompatibleAudioOutputConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioOutputConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioOutputConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioOutputConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioOutputConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioOutputConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioOutputConfigurations(struct soap *soap, _trt__GetCompatibleAudioOutputConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioOutputConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioOutputConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioOutputConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioOutputConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioOutputConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioOutputConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioOutputConfigurations);
		((_trt__GetCompatibleAudioOutputConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioOutputConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioOutputConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioOutputConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioOutputConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioOutputConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioOutputConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioOutputConfigurations*)p = *(_trt__GetCompatibleAudioOutputConfigurations*)q;
}

void _trt__GetCompatibleMetadataConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleMetadataConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleMetadataConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleMetadataConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__MetadataConfiguration(soap, this->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleMetadataConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleMetadataConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleMetadataConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleMetadataConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleMetadataConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__MetadataConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleMetadataConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleMetadataConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleMetadataConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleMetadataConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleMetadataConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleMetadataConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse, sizeof(_trt__GetCompatibleMetadataConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleMetadataConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = (tt__MetadataConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__MetadataConfiguration *));
					if (a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__MetadataConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations, "tt:MetadataConfiguration"))
				{	a->_trt__GetCompatibleMetadataConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleMetadataConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = (tt__MetadataConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleMetadataConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleMetadataConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse, 0, sizeof(_trt__GetCompatibleMetadataConfigurationsResponse), 0, soap_copy__trt__GetCompatibleMetadataConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleMetadataConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleMetadataConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleMetadataConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleMetadataConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleMetadataConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleMetadataConfigurationsResponse(struct soap *soap, _trt__GetCompatibleMetadataConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleMetadataConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleMetadataConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleMetadataConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleMetadataConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleMetadataConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleMetadataConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleMetadataConfigurationsResponse);
		((_trt__GetCompatibleMetadataConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleMetadataConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleMetadataConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleMetadataConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleMetadataConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleMetadataConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleMetadataConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleMetadataConfigurationsResponse*)p = *(_trt__GetCompatibleMetadataConfigurationsResponse*)q;
}

void _trt__GetCompatibleMetadataConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleMetadataConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleMetadataConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleMetadataConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleMetadataConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleMetadataConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleMetadataConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleMetadataConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleMetadataConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleMetadataConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleMetadataConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleMetadataConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleMetadataConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleMetadataConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleMetadataConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleMetadataConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleMetadataConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleMetadataConfigurations, sizeof(_trt__GetCompatibleMetadataConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleMetadataConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleMetadataConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleMetadataConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleMetadataConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleMetadataConfigurations, 0, sizeof(_trt__GetCompatibleMetadataConfigurations), 0, soap_copy__trt__GetCompatibleMetadataConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleMetadataConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleMetadataConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleMetadataConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleMetadataConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleMetadataConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleMetadataConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleMetadataConfigurations(struct soap *soap, _trt__GetCompatibleMetadataConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleMetadataConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleMetadataConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleMetadataConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleMetadataConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleMetadataConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleMetadataConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleMetadataConfigurations);
		((_trt__GetCompatibleMetadataConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleMetadataConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleMetadataConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleMetadataConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleMetadataConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleMetadataConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleMetadataConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleMetadataConfigurations*)p = *(_trt__GetCompatibleMetadataConfigurations*)q;
}

void _trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, this->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoAnalyticsConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoAnalyticsConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoAnalyticsConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse, sizeof(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoAnalyticsConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = (tt__VideoAnalyticsConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoAnalyticsConfiguration *));
					if (a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations, "tt:VideoAnalyticsConfiguration"))
				{	a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = (tt__VideoAnalyticsConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleVideoAnalyticsConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse, 0, sizeof(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse), 0, soap_copy__trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoAnalyticsConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoAnalyticsConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoAnalyticsConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(struct soap *soap, _trt__GetCompatibleVideoAnalyticsConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoAnalyticsConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
		((_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoAnalyticsConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoAnalyticsConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)p = *(_trt__GetCompatibleVideoAnalyticsConfigurationsResponse*)q;
}

void _trt__GetCompatibleVideoAnalyticsConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoAnalyticsConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoAnalyticsConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoAnalyticsConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoAnalyticsConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoAnalyticsConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoAnalyticsConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoAnalyticsConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleVideoAnalyticsConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleVideoAnalyticsConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoAnalyticsConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoAnalyticsConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoAnalyticsConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoAnalyticsConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleVideoAnalyticsConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoAnalyticsConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations, sizeof(_trt__GetCompatibleVideoAnalyticsConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoAnalyticsConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleVideoAnalyticsConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleVideoAnalyticsConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations, 0, sizeof(_trt__GetCompatibleVideoAnalyticsConfigurations), 0, soap_copy__trt__GetCompatibleVideoAnalyticsConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoAnalyticsConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoAnalyticsConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoAnalyticsConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoAnalyticsConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoAnalyticsConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoAnalyticsConfigurations(struct soap *soap, _trt__GetCompatibleVideoAnalyticsConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoAnalyticsConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoAnalyticsConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoAnalyticsConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoAnalyticsConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoAnalyticsConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoAnalyticsConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoAnalyticsConfigurations);
		((_trt__GetCompatibleVideoAnalyticsConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoAnalyticsConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoAnalyticsConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoAnalyticsConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoAnalyticsConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoAnalyticsConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoAnalyticsConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoAnalyticsConfigurations*)p = *(_trt__GetCompatibleVideoAnalyticsConfigurations*)q;
}

void _trt__GetCompatibleAudioSourceConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleAudioSourceConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioSourceConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleAudioSourceConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioSourceConfiguration(soap, this->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioSourceConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioSourceConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioSourceConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioSourceConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleAudioSourceConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioSourceConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioSourceConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioSourceConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioSourceConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioSourceConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleAudioSourceConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioSourceConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse, sizeof(_trt__GetCompatibleAudioSourceConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioSourceConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = (tt__AudioSourceConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioSourceConfiguration *));
					if (a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations, "tt:AudioSourceConfiguration"))
				{	a->_trt__GetCompatibleAudioSourceConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleAudioSourceConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = (tt__AudioSourceConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleAudioSourceConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleAudioSourceConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse, 0, sizeof(_trt__GetCompatibleAudioSourceConfigurationsResponse), 0, soap_copy__trt__GetCompatibleAudioSourceConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioSourceConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioSourceConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioSourceConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioSourceConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioSourceConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioSourceConfigurationsResponse(struct soap *soap, _trt__GetCompatibleAudioSourceConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioSourceConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioSourceConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioSourceConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioSourceConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioSourceConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioSourceConfigurationsResponse);
		((_trt__GetCompatibleAudioSourceConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioSourceConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioSourceConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioSourceConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioSourceConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioSourceConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioSourceConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioSourceConfigurationsResponse*)p = *(_trt__GetCompatibleAudioSourceConfigurationsResponse*)q;
}

void _trt__GetCompatibleAudioSourceConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioSourceConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioSourceConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioSourceConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioSourceConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioSourceConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioSourceConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioSourceConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleAudioSourceConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleAudioSourceConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioSourceConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioSourceConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioSourceConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioSourceConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleAudioSourceConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioSourceConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations, sizeof(_trt__GetCompatibleAudioSourceConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioSourceConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleAudioSourceConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleAudioSourceConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations, 0, sizeof(_trt__GetCompatibleAudioSourceConfigurations), 0, soap_copy__trt__GetCompatibleAudioSourceConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioSourceConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioSourceConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioSourceConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioSourceConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioSourceConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioSourceConfigurations(struct soap *soap, _trt__GetCompatibleAudioSourceConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioSourceConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioSourceConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioSourceConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioSourceConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioSourceConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioSourceConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioSourceConfigurations);
		((_trt__GetCompatibleAudioSourceConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioSourceConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioSourceConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioSourceConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioSourceConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioSourceConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioSourceConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioSourceConfigurations*)p = *(_trt__GetCompatibleAudioSourceConfigurations*)q;
}

void _trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleAudioEncoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleAudioEncoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioEncoderConfiguration(soap, this->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioEncoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioEncoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioEncoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioEncoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioEncoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioEncoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleAudioEncoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioEncoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse, sizeof(_trt__GetCompatibleAudioEncoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioEncoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = (tt__AudioEncoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioEncoderConfiguration *));
					if (a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations, "tt:AudioEncoderConfiguration"))
				{	a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = (tt__AudioEncoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleAudioEncoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleAudioEncoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse, 0, sizeof(_trt__GetCompatibleAudioEncoderConfigurationsResponse), 0, soap_copy__trt__GetCompatibleAudioEncoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioEncoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioEncoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioEncoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioEncoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioEncoderConfigurationsResponse(struct soap *soap, _trt__GetCompatibleAudioEncoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioEncoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioEncoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioEncoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioEncoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioEncoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioEncoderConfigurationsResponse);
		((_trt__GetCompatibleAudioEncoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioEncoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioEncoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioEncoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioEncoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioEncoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioEncoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioEncoderConfigurationsResponse*)p = *(_trt__GetCompatibleAudioEncoderConfigurationsResponse*)q;
}

void _trt__GetCompatibleAudioEncoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioEncoderConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleAudioEncoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleAudioEncoderConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleAudioEncoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleAudioEncoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleAudioEncoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleAudioEncoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleAudioEncoderConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleAudioEncoderConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleAudioEncoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleAudioEncoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioEncoderConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleAudioEncoderConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleAudioEncoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleAudioEncoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations, sizeof(_trt__GetCompatibleAudioEncoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleAudioEncoderConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleAudioEncoderConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleAudioEncoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations, 0, sizeof(_trt__GetCompatibleAudioEncoderConfigurations), 0, soap_copy__trt__GetCompatibleAudioEncoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleAudioEncoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleAudioEncoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleAudioEncoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleAudioEncoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleAudioEncoderConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleAudioEncoderConfigurations(struct soap *soap, _trt__GetCompatibleAudioEncoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleAudioEncoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleAudioEncoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleAudioEncoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleAudioEncoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleAudioEncoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleAudioEncoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleAudioEncoderConfigurations);
		((_trt__GetCompatibleAudioEncoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleAudioEncoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleAudioEncoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleAudioEncoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleAudioEncoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleAudioEncoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleAudioEncoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleAudioEncoderConfigurations*)p = *(_trt__GetCompatibleAudioEncoderConfigurations*)q;
}

void _trt__GetCompatibleVideoSourceConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleVideoSourceConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoSourceConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleVideoSourceConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoSourceConfiguration(soap, this->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoSourceConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoSourceConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoSourceConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoSourceConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleVideoSourceConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoSourceConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoSourceConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoSourceConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoSourceConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoSourceConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleVideoSourceConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoSourceConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse, sizeof(_trt__GetCompatibleVideoSourceConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoSourceConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = (tt__VideoSourceConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoSourceConfiguration *));
					if (a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations, "tt:VideoSourceConfiguration"))
				{	a->_trt__GetCompatibleVideoSourceConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleVideoSourceConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = (tt__VideoSourceConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleVideoSourceConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleVideoSourceConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse, 0, sizeof(_trt__GetCompatibleVideoSourceConfigurationsResponse), 0, soap_copy__trt__GetCompatibleVideoSourceConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoSourceConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoSourceConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoSourceConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoSourceConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoSourceConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoSourceConfigurationsResponse(struct soap *soap, _trt__GetCompatibleVideoSourceConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoSourceConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoSourceConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoSourceConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoSourceConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoSourceConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoSourceConfigurationsResponse);
		((_trt__GetCompatibleVideoSourceConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoSourceConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoSourceConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoSourceConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoSourceConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoSourceConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoSourceConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoSourceConfigurationsResponse*)p = *(_trt__GetCompatibleVideoSourceConfigurationsResponse*)q;
}

void _trt__GetCompatibleVideoSourceConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoSourceConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoSourceConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoSourceConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoSourceConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoSourceConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoSourceConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoSourceConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleVideoSourceConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleVideoSourceConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoSourceConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoSourceConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoSourceConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoSourceConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleVideoSourceConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoSourceConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations, sizeof(_trt__GetCompatibleVideoSourceConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoSourceConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleVideoSourceConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleVideoSourceConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations, 0, sizeof(_trt__GetCompatibleVideoSourceConfigurations), 0, soap_copy__trt__GetCompatibleVideoSourceConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoSourceConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoSourceConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoSourceConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoSourceConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoSourceConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoSourceConfigurations(struct soap *soap, _trt__GetCompatibleVideoSourceConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoSourceConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoSourceConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoSourceConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoSourceConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoSourceConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoSourceConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoSourceConfigurations);
		((_trt__GetCompatibleVideoSourceConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoSourceConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoSourceConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoSourceConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoSourceConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoSourceConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoSourceConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoSourceConfigurations*)p = *(_trt__GetCompatibleVideoSourceConfigurations*)q;
}

void _trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetCompatibleVideoEncoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetCompatibleVideoEncoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoEncoderConfiguration(soap, this->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoEncoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoEncoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoEncoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoEncoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoEncoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoEncoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetCompatibleVideoEncoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoEncoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse, sizeof(_trt__GetCompatibleVideoEncoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoEncoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = (tt__VideoEncoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoEncoderConfiguration *));
					if (a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "trt:Configurations", a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations, "tt:VideoEncoderConfiguration"))
				{	a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeConfigurations");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = (tt__VideoEncoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetCompatibleVideoEncoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetCompatibleVideoEncoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse, 0, sizeof(_trt__GetCompatibleVideoEncoderConfigurationsResponse), 0, soap_copy__trt__GetCompatibleVideoEncoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoEncoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoEncoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoEncoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoEncoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoEncoderConfigurationsResponse(struct soap *soap, _trt__GetCompatibleVideoEncoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoEncoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoEncoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoEncoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoEncoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoEncoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoEncoderConfigurationsResponse);
		((_trt__GetCompatibleVideoEncoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoEncoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoEncoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoEncoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoEncoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoEncoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoEncoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoEncoderConfigurationsResponse*)p = *(_trt__GetCompatibleVideoEncoderConfigurationsResponse*)q;
}

void _trt__GetCompatibleVideoEncoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoEncoderConfigurations::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetCompatibleVideoEncoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetCompatibleVideoEncoderConfigurations::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetCompatibleVideoEncoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetCompatibleVideoEncoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetCompatibleVideoEncoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetCompatibleVideoEncoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations), type))
		return soap->error;
	if (a->_trt__GetCompatibleVideoEncoderConfigurations::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetCompatibleVideoEncoderConfigurations::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetCompatibleVideoEncoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetCompatibleVideoEncoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoEncoderConfigurations * SOAP_FMAC4 soap_in__trt__GetCompatibleVideoEncoderConfigurations(struct soap *soap, const char *tag, _trt__GetCompatibleVideoEncoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetCompatibleVideoEncoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations, sizeof(_trt__GetCompatibleVideoEncoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetCompatibleVideoEncoderConfigurations *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetCompatibleVideoEncoderConfigurations::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetCompatibleVideoEncoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations, 0, sizeof(_trt__GetCompatibleVideoEncoderConfigurations), 0, soap_copy__trt__GetCompatibleVideoEncoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetCompatibleVideoEncoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetCompatibleVideoEncoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetCompatibleVideoEncoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetCompatibleVideoEncoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetCompatibleVideoEncoderConfigurations * SOAP_FMAC4 soap_get__trt__GetCompatibleVideoEncoderConfigurations(struct soap *soap, _trt__GetCompatibleVideoEncoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetCompatibleVideoEncoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetCompatibleVideoEncoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetCompatibleVideoEncoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetCompatibleVideoEncoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetCompatibleVideoEncoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetCompatibleVideoEncoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetCompatibleVideoEncoderConfigurations);
		((_trt__GetCompatibleVideoEncoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetCompatibleVideoEncoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetCompatibleVideoEncoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetCompatibleVideoEncoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetCompatibleVideoEncoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetCompatibleVideoEncoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetCompatibleVideoEncoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetCompatibleVideoEncoderConfigurations*)p = *(_trt__GetCompatibleVideoEncoderConfigurations*)q;
}

void _trt__GetAudioDecoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioDecoderConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioDecoderConfiguration(soap, &this->_trt__GetAudioDecoderConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetAudioDecoderConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__AudioDecoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetAudioDecoderConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse, sizeof(_trt__GetAudioDecoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfiguration(soap, "trt:Configuration", &(a->_trt__GetAudioDecoderConfigurationResponse::Configuration), "tt:AudioDecoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetAudioDecoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse, 0, sizeof(_trt__GetAudioDecoderConfigurationResponse), 0, soap_copy__trt__GetAudioDecoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfigurationResponse(struct soap *soap, _trt__GetAudioDecoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfigurationResponse);
		((_trt__GetAudioDecoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfigurationResponse*)p = *(_trt__GetAudioDecoderConfigurationResponse*)q;
}

void _trt__GetAudioDecoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioDecoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfiguration), type))
		return soap->error;
	if (a->_trt__GetAudioDecoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetAudioDecoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfiguration * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfiguration(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfiguration, sizeof(_trt__GetAudioDecoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioDecoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfiguration, 0, sizeof(_trt__GetAudioDecoderConfiguration), 0, soap_copy__trt__GetAudioDecoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfiguration * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfiguration(struct soap *soap, _trt__GetAudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfiguration);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfiguration);
		((_trt__GetAudioDecoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfiguration %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfiguration*)p = *(_trt__GetAudioDecoderConfiguration*)q;
}

void _trt__GetAudioOutputConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioOutputConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioOutputConfiguration(soap, &this->_trt__GetAudioOutputConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetAudioOutputConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__AudioOutputConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetAudioOutputConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, _trt__GetAudioOutputConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationResponse, sizeof(_trt__GetAudioOutputConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "trt:Configuration", &(a->_trt__GetAudioOutputConfigurationResponse::Configuration), "tt:AudioOutputConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetAudioOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfigurationResponse, 0, sizeof(_trt__GetAudioOutputConfigurationResponse), 0, soap_copy__trt__GetAudioOutputConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfigurationResponse(struct soap *soap, _trt__GetAudioOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfigurationResponse);
		((_trt__GetAudioOutputConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfigurationResponse*)p = *(_trt__GetAudioOutputConfigurationResponse*)q;
}

void _trt__GetAudioOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioOutputConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfiguration), type))
		return soap->error;
	if (a->_trt__GetAudioOutputConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetAudioOutputConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfiguration * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfiguration(struct soap *soap, const char *tag, _trt__GetAudioOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfiguration, sizeof(_trt__GetAudioOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioOutputConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfiguration, 0, sizeof(_trt__GetAudioOutputConfiguration), 0, soap_copy__trt__GetAudioOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfiguration * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfiguration(struct soap *soap, _trt__GetAudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfiguration);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfiguration);
		((_trt__GetAudioOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfiguration %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfiguration*)p = *(_trt__GetAudioOutputConfiguration*)q;
}

void _trt__GetMetadataConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetMetadataConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetMetadataConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MetadataConfiguration(soap, &this->_trt__GetMetadataConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetMetadataConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__MetadataConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetMetadataConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetMetadataConfigurationResponse(struct soap *soap, const char *tag, _trt__GetMetadataConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfigurationResponse, sizeof(_trt__GetMetadataConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfiguration(soap, "trt:Configuration", &(a->_trt__GetMetadataConfigurationResponse::Configuration), "tt:MetadataConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetMetadataConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfigurationResponse, 0, sizeof(_trt__GetMetadataConfigurationResponse), 0, soap_copy__trt__GetMetadataConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetMetadataConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetMetadataConfigurationResponse(struct soap *soap, _trt__GetMetadataConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetMetadataConfigurationResponse);
		((_trt__GetMetadataConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetMetadataConfigurationResponse*)p = *(_trt__GetMetadataConfigurationResponse*)q;
}

void _trt__GetMetadataConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetMetadataConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetMetadataConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfiguration), type))
		return soap->error;
	if (a->_trt__GetMetadataConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetMetadataConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfiguration * SOAP_FMAC4 soap_in__trt__GetMetadataConfiguration(struct soap *soap, const char *tag, _trt__GetMetadataConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfiguration, sizeof(_trt__GetMetadataConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetMetadataConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetMetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfiguration, 0, sizeof(_trt__GetMetadataConfiguration), 0, soap_copy__trt__GetMetadataConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetMetadataConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfiguration * SOAP_FMAC4 soap_get__trt__GetMetadataConfiguration(struct soap *soap, _trt__GetMetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfiguration);
		if (size)
			*size = sizeof(_trt__GetMetadataConfiguration);
		((_trt__GetMetadataConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfiguration %p -> %p\n", q, p));
	*(_trt__GetMetadataConfiguration*)p = *(_trt__GetMetadataConfiguration*)q;
}

void _trt__GetVideoAnalyticsConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoAnalyticsConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoAnalyticsConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &this->_trt__GetVideoAnalyticsConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoAnalyticsConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoAnalyticsConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetVideoAnalyticsConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetVideoAnalyticsConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoAnalyticsConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoAnalyticsConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, _trt__GetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoAnalyticsConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse, sizeof(_trt__GetVideoAnalyticsConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoAnalyticsConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configuration", &(a->_trt__GetVideoAnalyticsConfigurationResponse::Configuration), "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse, 0, sizeof(_trt__GetVideoAnalyticsConfigurationResponse), 0, soap_copy__trt__GetVideoAnalyticsConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoAnalyticsConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoAnalyticsConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoAnalyticsConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoAnalyticsConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetVideoAnalyticsConfigurationResponse(struct soap *soap, _trt__GetVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoAnalyticsConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoAnalyticsConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoAnalyticsConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoAnalyticsConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetVideoAnalyticsConfigurationResponse);
		((_trt__GetVideoAnalyticsConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoAnalyticsConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoAnalyticsConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoAnalyticsConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoAnalyticsConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoAnalyticsConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoAnalyticsConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetVideoAnalyticsConfigurationResponse*)p = *(_trt__GetVideoAnalyticsConfigurationResponse*)q;
}

void _trt__GetVideoAnalyticsConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoAnalyticsConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetVideoAnalyticsConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoAnalyticsConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoAnalyticsConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoAnalyticsConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetVideoAnalyticsConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->_trt__GetVideoAnalyticsConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetVideoAnalyticsConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoAnalyticsConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoAnalyticsConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__trt__GetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, _trt__GetVideoAnalyticsConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoAnalyticsConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfiguration, sizeof(_trt__GetVideoAnalyticsConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoAnalyticsConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoAnalyticsConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetVideoAnalyticsConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoAnalyticsConfiguration, 0, sizeof(_trt__GetVideoAnalyticsConfiguration), 0, soap_copy__trt__GetVideoAnalyticsConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoAnalyticsConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoAnalyticsConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoAnalyticsConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoAnalyticsConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoAnalyticsConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__trt__GetVideoAnalyticsConfiguration(struct soap *soap, _trt__GetVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoAnalyticsConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetVideoAnalyticsConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoAnalyticsConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoAnalyticsConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoAnalyticsConfiguration);
		if (size)
			*size = sizeof(_trt__GetVideoAnalyticsConfiguration);
		((_trt__GetVideoAnalyticsConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoAnalyticsConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoAnalyticsConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoAnalyticsConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoAnalyticsConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoAnalyticsConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoAnalyticsConfiguration %p -> %p\n", q, p));
	*(_trt__GetVideoAnalyticsConfiguration*)p = *(_trt__GetVideoAnalyticsConfiguration*)q;
}

void _trt__GetAudioEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioEncoderConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioEncoderConfiguration(soap, &this->_trt__GetAudioEncoderConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetAudioEncoderConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetAudioEncoderConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse, sizeof(_trt__GetAudioEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "trt:Configuration", &(a->_trt__GetAudioEncoderConfigurationResponse::Configuration), "tt:AudioEncoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetAudioEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse, 0, sizeof(_trt__GetAudioEncoderConfigurationResponse), 0, soap_copy__trt__GetAudioEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfigurationResponse(struct soap *soap, _trt__GetAudioEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfigurationResponse);
		((_trt__GetAudioEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfigurationResponse*)p = *(_trt__GetAudioEncoderConfigurationResponse*)q;
}

void _trt__GetAudioEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__GetAudioEncoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetAudioEncoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfiguration * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfiguration(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfiguration, sizeof(_trt__GetAudioEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioEncoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfiguration, 0, sizeof(_trt__GetAudioEncoderConfiguration), 0, soap_copy__trt__GetAudioEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfiguration * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfiguration(struct soap *soap, _trt__GetAudioEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfiguration);
		((_trt__GetAudioEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfiguration*)p = *(_trt__GetAudioEncoderConfiguration*)q;
}

void _trt__GetAudioSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioSourceConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioSourceConfiguration(soap, &this->_trt__GetAudioSourceConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetAudioSourceConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__AudioSourceConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetAudioSourceConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__GetAudioSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationResponse, sizeof(_trt__GetAudioSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "trt:Configuration", &(a->_trt__GetAudioSourceConfigurationResponse::Configuration), "tt:AudioSourceConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetAudioSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfigurationResponse, 0, sizeof(_trt__GetAudioSourceConfigurationResponse), 0, soap_copy__trt__GetAudioSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfigurationResponse(struct soap *soap, _trt__GetAudioSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfigurationResponse);
		((_trt__GetAudioSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfigurationResponse*)p = *(_trt__GetAudioSourceConfigurationResponse*)q;
}

void _trt__GetAudioSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetAudioSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfiguration), type))
		return soap->error;
	if (a->_trt__GetAudioSourceConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetAudioSourceConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfiguration * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfiguration(struct soap *soap, const char *tag, _trt__GetAudioSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfiguration, sizeof(_trt__GetAudioSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetAudioSourceConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetAudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfiguration, 0, sizeof(_trt__GetAudioSourceConfiguration), 0, soap_copy__trt__GetAudioSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfiguration * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfiguration(struct soap *soap, _trt__GetAudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfiguration);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfiguration);
		((_trt__GetAudioSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfiguration %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfiguration*)p = *(_trt__GetAudioSourceConfiguration*)q;
}

void _trt__GetVideoEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoEncoderConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoEncoderConfiguration(soap, &this->_trt__GetVideoEncoderConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetVideoEncoderConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetVideoEncoderConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse, sizeof(_trt__GetVideoEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "trt:Configuration", &(a->_trt__GetVideoEncoderConfigurationResponse::Configuration), "tt:VideoEncoderConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Configuration");
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
	{	a = (_trt__GetVideoEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse, 0, sizeof(_trt__GetVideoEncoderConfigurationResponse), 0, soap_copy__trt__GetVideoEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfigurationResponse(struct soap *soap, _trt__GetVideoEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfigurationResponse);
		((_trt__GetVideoEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfigurationResponse*)p = *(_trt__GetVideoEncoderConfigurationResponse*)q;
}

void _trt__GetVideoEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__GetVideoEncoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetVideoEncoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfiguration * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfiguration(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfiguration, sizeof(_trt__GetVideoEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetVideoEncoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken1--;
					continue;
				}
			/* transient soap skipped */
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
	{	a = (_trt__GetVideoEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfiguration, 0, sizeof(_trt__GetVideoEncoderConfiguration), 0, soap_copy__trt__GetVideoEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfiguration * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfiguration(struct soap *soap, _trt__GetVideoEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfiguration);
		((_trt__GetVideoEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfiguration*)p = *(_trt__GetVideoEncoderConfiguration*)q;
}

void _trt__GetVideoSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoSourceConfigurationResponse::Configuration = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoSourceConfiguration(soap, &this->_trt__GetVideoSourceConfigurationResponse::Configuration);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfigurationResponse(soap, tag, id, this, type);
}

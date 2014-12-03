#include "soapH.h"

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusOptions20 %p -> %p\n", q, p));
	*(tt__FocusOptions20*)p = *(tt__FocusOptions20*)q;
}

void tt__WhiteBalanceOptions20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WhiteBalanceOptions20Extension::__size = 0;
	this->tt__WhiteBalanceOptions20Extension::__any = NULL;
}

void tt__WhiteBalanceOptions20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalanceOptions20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalanceOptions20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions20Extension(struct soap *soap, const char *tag, int id, const tt__WhiteBalanceOptions20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions20Extension), "tt:WhiteBalanceOptions20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WhiteBalanceOptions20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__WhiteBalanceOptions20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__WhiteBalanceOptions20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalanceOptions20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalanceOptions20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions20Extension * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions20Extension(struct soap *soap, const char *tag, tt__WhiteBalanceOptions20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalanceOptions20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions20Extension, sizeof(tt__WhiteBalanceOptions20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalanceOptions20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalanceOptions20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__WhiteBalanceOptions20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__WhiteBalanceOptions20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__WhiteBalanceOptions20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__WhiteBalanceOptions20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__WhiteBalanceOptions20Extension::__any, "xsd:byte"))
				{	a->tt__WhiteBalanceOptions20Extension::__size++;
					a->tt__WhiteBalanceOptions20Extension::__any = NULL;
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
		if (a->tt__WhiteBalanceOptions20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__WhiteBalanceOptions20Extension::__size)
			a->tt__WhiteBalanceOptions20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__WhiteBalanceOptions20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalanceOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions20Extension, 0, sizeof(tt__WhiteBalanceOptions20Extension), 0, soap_copy_tt__WhiteBalanceOptions20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__WhiteBalanceOptions20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions20Extension);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalanceOptions20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalanceOptions20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalanceOptions20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions20Extension * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions20Extension(struct soap *soap, tt__WhiteBalanceOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalanceOptions20Extension * SOAP_FMAC2 soap_instantiate_tt__WhiteBalanceOptions20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalanceOptions20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalanceOptions20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalanceOptions20Extension);
		if (size)
			*size = sizeof(tt__WhiteBalanceOptions20Extension);
		((tt__WhiteBalanceOptions20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalanceOptions20Extension, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalanceOptions20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalanceOptions20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalanceOptions20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalanceOptions20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalanceOptions20Extension %p -> %p\n", q, p));
	*(tt__WhiteBalanceOptions20Extension*)p = *(tt__WhiteBalanceOptions20Extension*)q;
}

void tt__WhiteBalanceOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WhiteBalanceOptions20::__sizeMode = 0;
	this->tt__WhiteBalanceOptions20::Mode = NULL;
	this->tt__WhiteBalanceOptions20::YrGain = NULL;
	this->tt__WhiteBalanceOptions20::YbGain = NULL;
	this->tt__WhiteBalanceOptions20::Extension = NULL;
}

void tt__WhiteBalanceOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__WhiteBalanceOptions20::Mode)
	{	int i;
		for (i = 0; i < this->tt__WhiteBalanceOptions20::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__WhiteBalanceOptions20::Mode + i, SOAP_TYPE_tt__WhiteBalanceMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WhiteBalanceOptions20::YrGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WhiteBalanceOptions20::YbGain);
	soap_serialize_PointerTott__WhiteBalanceOptions20Extension(soap, &this->tt__WhiteBalanceOptions20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalanceOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalanceOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions20(struct soap *soap, const char *tag, int id, const tt__WhiteBalanceOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions20), "tt:WhiteBalanceOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WhiteBalanceOptions20::Mode)
	{	int i;
		for (i = 0; i < a->tt__WhiteBalanceOptions20::__sizeMode; i++)
			if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, a->tt__WhiteBalanceOptions20::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:YrGain", -1, &(a->tt__WhiteBalanceOptions20::YrGain), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:YbGain", -1, &(a->tt__WhiteBalanceOptions20::YbGain), ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalanceOptions20Extension(soap, "tt:Extension", -1, &(a->tt__WhiteBalanceOptions20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalanceOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalanceOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions20 * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions20(struct soap *soap, const char *tag, tt__WhiteBalanceOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalanceOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions20, sizeof(tt__WhiteBalanceOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalanceOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalanceOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_YrGain1 = 1;
	size_t soap_flag_YbGain1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__WhiteBalanceOptions20::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__WhiteBalanceOptions20::Mode = (enum tt__WhiteBalanceMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__WhiteBalanceMode));
					if (a->tt__WhiteBalanceOptions20::Mode == NULL)
						return NULL;
					soap_default_tt__WhiteBalanceMode(soap, a->tt__WhiteBalanceOptions20::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", a->tt__WhiteBalanceOptions20::Mode, "tt:WhiteBalanceMode"))
				{	a->tt__WhiteBalanceOptions20::__sizeMode++;
					a->tt__WhiteBalanceOptions20::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_YrGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YrGain", &(a->tt__WhiteBalanceOptions20::YrGain), "tt:FloatRange"))
				{	soap_flag_YrGain1--;
					continue;
				}
			if (soap_flag_YbGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YbGain", &(a->tt__WhiteBalanceOptions20::YbGain), "tt:FloatRange"))
				{	soap_flag_YbGain1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions20Extension(soap, "tt:Extension", &(a->tt__WhiteBalanceOptions20::Extension), "tt:WhiteBalanceOptions20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__WhiteBalanceOptions20::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__WhiteBalanceOptions20::__sizeMode)
			a->tt__WhiteBalanceOptions20::Mode = (enum tt__WhiteBalanceMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__WhiteBalanceOptions20::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalanceOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions20, 0, sizeof(tt__WhiteBalanceOptions20), 0, soap_copy_tt__WhiteBalanceOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__WhiteBalanceOptions20::__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WhiteBalanceOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions20);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalanceOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalanceOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalanceOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions20 * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions20(struct soap *soap, tt__WhiteBalanceOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalanceOptions20 * SOAP_FMAC2 soap_instantiate_tt__WhiteBalanceOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalanceOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalanceOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalanceOptions20);
		if (size)
			*size = sizeof(tt__WhiteBalanceOptions20);
		((tt__WhiteBalanceOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalanceOptions20, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalanceOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalanceOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalanceOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalanceOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalanceOptions20 %p -> %p\n", q, p));
	*(tt__WhiteBalanceOptions20*)p = *(tt__WhiteBalanceOptions20*)q;
}

void tt__FocusConfiguration20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusConfiguration20Extension::__size = 0;
	this->tt__FocusConfiguration20Extension::__any = NULL;
}

void tt__FocusConfiguration20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusConfiguration20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusConfiguration20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration20Extension(struct soap *soap, const char *tag, int id, const tt__FocusConfiguration20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration20Extension), "tt:FocusConfiguration20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FocusConfiguration20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__FocusConfiguration20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FocusConfiguration20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FocusConfiguration20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusConfiguration20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusConfiguration20Extension * SOAP_FMAC4 soap_in_tt__FocusConfiguration20Extension(struct soap *soap, const char *tag, tt__FocusConfiguration20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusConfiguration20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration20Extension, sizeof(tt__FocusConfiguration20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusConfiguration20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusConfiguration20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FocusConfiguration20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FocusConfiguration20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FocusConfiguration20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FocusConfiguration20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FocusConfiguration20Extension::__any, "xsd:byte"))
				{	a->tt__FocusConfiguration20Extension::__size++;
					a->tt__FocusConfiguration20Extension::__any = NULL;
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
		if (a->tt__FocusConfiguration20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FocusConfiguration20Extension::__size)
			a->tt__FocusConfiguration20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FocusConfiguration20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusConfiguration20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration20Extension, 0, sizeof(tt__FocusConfiguration20Extension), 0, soap_copy_tt__FocusConfiguration20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FocusConfiguration20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration20Extension);
	if (this->soap_out(soap, tag?tag:"tt:FocusConfiguration20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusConfiguration20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusConfiguration20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusConfiguration20Extension * SOAP_FMAC4 soap_get_tt__FocusConfiguration20Extension(struct soap *soap, tt__FocusConfiguration20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusConfiguration20Extension * SOAP_FMAC2 soap_instantiate_tt__FocusConfiguration20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusConfiguration20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusConfiguration20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusConfiguration20Extension);
		if (size)
			*size = sizeof(tt__FocusConfiguration20Extension);
		((tt__FocusConfiguration20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusConfiguration20Extension, n);
		if (size)
			*size = n * sizeof(tt__FocusConfiguration20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusConfiguration20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusConfiguration20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusConfiguration20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusConfiguration20Extension %p -> %p\n", q, p));
	*(tt__FocusConfiguration20Extension*)p = *(tt__FocusConfiguration20Extension*)q;
}

void tt__FocusConfiguration20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__AutoFocusMode(soap, &this->tt__FocusConfiguration20::AutoFocusMode);
	this->tt__FocusConfiguration20::DefaultSpeed = NULL;
	this->tt__FocusConfiguration20::NearLimit = NULL;
	this->tt__FocusConfiguration20::FarLimit = NULL;
	this->tt__FocusConfiguration20::Extension = NULL;
	this->tt__FocusConfiguration20::__anyAttribute = NULL;
}

void tt__FocusConfiguration20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__FocusConfiguration20::AutoFocusMode, SOAP_TYPE_tt__AutoFocusMode);
	soap_serialize_PointerTofloat(soap, &this->tt__FocusConfiguration20::DefaultSpeed);
	soap_serialize_PointerTofloat(soap, &this->tt__FocusConfiguration20::NearLimit);
	soap_serialize_PointerTofloat(soap, &this->tt__FocusConfiguration20::FarLimit);
	soap_serialize_PointerTott__FocusConfiguration20Extension(soap, &this->tt__FocusConfiguration20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusConfiguration20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusConfiguration20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration20(struct soap *soap, const char *tag, int id, const tt__FocusConfiguration20 *a, const char *type)
{
	if (((tt__FocusConfiguration20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FocusConfiguration20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration20), "tt:FocusConfiguration20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusMode", -1, &(a->tt__FocusConfiguration20::AutoFocusMode), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:DefaultSpeed", -1, &(a->tt__FocusConfiguration20::DefaultSpeed), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:NearLimit", -1, &(a->tt__FocusConfiguration20::NearLimit), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:FarLimit", -1, &(a->tt__FocusConfiguration20::FarLimit), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration20Extension(soap, "tt:Extension", -1, &(a->tt__FocusConfiguration20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FocusConfiguration20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusConfiguration20(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusConfiguration20 * SOAP_FMAC4 soap_in_tt__FocusConfiguration20(struct soap *soap, const char *tag, tt__FocusConfiguration20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusConfiguration20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration20, sizeof(tt__FocusConfiguration20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusConfiguration20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusConfiguration20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FocusConfiguration20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AutoFocusMode1 = 1;
	size_t soap_flag_DefaultSpeed1 = 1;
	size_t soap_flag_NearLimit1 = 1;
	size_t soap_flag_FarLimit1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AutoFocusMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusMode", &(a->tt__FocusConfiguration20::AutoFocusMode), "tt:AutoFocusMode"))
				{	soap_flag_AutoFocusMode1--;
					continue;
				}
			if (soap_flag_DefaultSpeed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:DefaultSpeed", &(a->tt__FocusConfiguration20::DefaultSpeed), "xsd:float"))
				{	soap_flag_DefaultSpeed1--;
					continue;
				}
			if (soap_flag_NearLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:NearLimit", &(a->tt__FocusConfiguration20::NearLimit), "xsd:float"))
				{	soap_flag_NearLimit1--;
					continue;
				}
			if (soap_flag_FarLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:FarLimit", &(a->tt__FocusConfiguration20::FarLimit), "xsd:float"))
				{	soap_flag_FarLimit1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration20Extension(soap, "tt:Extension", &(a->tt__FocusConfiguration20::Extension), "tt:FocusConfiguration20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusConfiguration20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration20, 0, sizeof(tt__FocusConfiguration20), 0, soap_copy_tt__FocusConfiguration20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoFocusMode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FocusConfiguration20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration20);
	if (this->soap_out(soap, tag?tag:"tt:FocusConfiguration20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusConfiguration20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusConfiguration20(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusConfiguration20 * SOAP_FMAC4 soap_get_tt__FocusConfiguration20(struct soap *soap, tt__FocusConfiguration20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusConfiguration20 * SOAP_FMAC2 soap_instantiate_tt__FocusConfiguration20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusConfiguration20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusConfiguration20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusConfiguration20);
		if (size)
			*size = sizeof(tt__FocusConfiguration20);
		((tt__FocusConfiguration20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusConfiguration20, n);
		if (size)
			*size = n * sizeof(tt__FocusConfiguration20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusConfiguration20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusConfiguration20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusConfiguration20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusConfiguration20 %p -> %p\n", q, p));
	*(tt__FocusConfiguration20*)p = *(tt__FocusConfiguration20*)q;
}

void tt__WhiteBalance20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WhiteBalance20Extension::__size = 0;
	this->tt__WhiteBalance20Extension::__any = NULL;
}

void tt__WhiteBalance20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalance20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalance20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance20Extension(struct soap *soap, const char *tag, int id, const tt__WhiteBalance20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance20Extension), "tt:WhiteBalance20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WhiteBalance20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__WhiteBalance20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__WhiteBalance20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalance20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalance20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalance20Extension * SOAP_FMAC4 soap_in_tt__WhiteBalance20Extension(struct soap *soap, const char *tag, tt__WhiteBalance20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalance20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance20Extension, sizeof(tt__WhiteBalance20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalance20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalance20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__WhiteBalance20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__WhiteBalance20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__WhiteBalance20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__WhiteBalance20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__WhiteBalance20Extension::__any, "xsd:byte"))
				{	a->tt__WhiteBalance20Extension::__size++;
					a->tt__WhiteBalance20Extension::__any = NULL;
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
		if (a->tt__WhiteBalance20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__WhiteBalance20Extension::__size)
			a->tt__WhiteBalance20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__WhiteBalance20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalance20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance20Extension, 0, sizeof(tt__WhiteBalance20Extension), 0, soap_copy_tt__WhiteBalance20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__WhiteBalance20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance20Extension);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalance20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalance20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalance20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalance20Extension * SOAP_FMAC4 soap_get_tt__WhiteBalance20Extension(struct soap *soap, tt__WhiteBalance20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalance20Extension * SOAP_FMAC2 soap_instantiate_tt__WhiteBalance20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalance20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalance20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalance20Extension);
		if (size)
			*size = sizeof(tt__WhiteBalance20Extension);
		((tt__WhiteBalance20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalance20Extension, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalance20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalance20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalance20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalance20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalance20Extension %p -> %p\n", q, p));
	*(tt__WhiteBalance20Extension*)p = *(tt__WhiteBalance20Extension*)q;
}

void tt__WhiteBalance20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WhiteBalanceMode(soap, &this->tt__WhiteBalance20::Mode);
	this->tt__WhiteBalance20::CrGain = NULL;
	this->tt__WhiteBalance20::CbGain = NULL;
	this->tt__WhiteBalance20::Extension = NULL;
	this->tt__WhiteBalance20::__anyAttribute = NULL;
}

void tt__WhiteBalance20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WhiteBalance20::Mode, SOAP_TYPE_tt__WhiteBalanceMode);
	soap_serialize_PointerTofloat(soap, &this->tt__WhiteBalance20::CrGain);
	soap_serialize_PointerTofloat(soap, &this->tt__WhiteBalance20::CbGain);
	soap_serialize_PointerTott__WhiteBalance20Extension(soap, &this->tt__WhiteBalance20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalance20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalance20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance20(struct soap *soap, const char *tag, int id, const tt__WhiteBalance20 *a, const char *type)
{
	if (((tt__WhiteBalance20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__WhiteBalance20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance20), "tt:WhiteBalance20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, &(a->tt__WhiteBalance20::Mode), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:CrGain", -1, &(a->tt__WhiteBalance20::CrGain), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:CbGain", -1, &(a->tt__WhiteBalance20::CbGain), ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance20Extension(soap, "tt:Extension", -1, &(a->tt__WhiteBalance20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalance20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalance20(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalance20 * SOAP_FMAC4 soap_in_tt__WhiteBalance20(struct soap *soap, const char *tag, tt__WhiteBalance20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalance20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance20, sizeof(tt__WhiteBalance20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalance20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalance20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__WhiteBalance20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_CrGain1 = 1;
	size_t soap_flag_CbGain1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", &(a->tt__WhiteBalance20::Mode), "tt:WhiteBalanceMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_CrGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:CrGain", &(a->tt__WhiteBalance20::CrGain), "xsd:float"))
				{	soap_flag_CrGain1--;
					continue;
				}
			if (soap_flag_CbGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:CbGain", &(a->tt__WhiteBalance20::CbGain), "xsd:float"))
				{	soap_flag_CbGain1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance20Extension(soap, "tt:Extension", &(a->tt__WhiteBalance20::Extension), "tt:WhiteBalance20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalance20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance20, 0, sizeof(tt__WhiteBalance20), 0, soap_copy_tt__WhiteBalance20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WhiteBalance20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance20);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalance20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalance20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalance20(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalance20 * SOAP_FMAC4 soap_get_tt__WhiteBalance20(struct soap *soap, tt__WhiteBalance20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalance20 * SOAP_FMAC2 soap_instantiate_tt__WhiteBalance20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalance20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalance20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalance20);
		if (size)
			*size = sizeof(tt__WhiteBalance20);
		((tt__WhiteBalance20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalance20, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalance20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalance20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalance20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalance20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalance20 %p -> %p\n", q, p));
	*(tt__WhiteBalance20*)p = *(tt__WhiteBalance20*)q;
}

void tt__RelativeFocusOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RelativeFocusOptions20::Distance = NULL;
	this->tt__RelativeFocusOptions20::Speed = NULL;
}

void tt__RelativeFocusOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__RelativeFocusOptions20::Distance);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__RelativeFocusOptions20::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelativeFocusOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelativeFocusOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocusOptions20(struct soap *soap, const char *tag, int id, const tt__RelativeFocusOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocusOptions20), "tt:RelativeFocusOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RelativeFocusOptions20::Distance)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Distance", -1, &a->tt__RelativeFocusOptions20::Distance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Distance"))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &(a->tt__RelativeFocusOptions20::Speed), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RelativeFocusOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelativeFocusOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelativeFocusOptions20 * SOAP_FMAC4 soap_in_tt__RelativeFocusOptions20(struct soap *soap, const char *tag, tt__RelativeFocusOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RelativeFocusOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocusOptions20, sizeof(tt__RelativeFocusOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelativeFocusOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RelativeFocusOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Distance1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Distance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Distance", &(a->tt__RelativeFocusOptions20::Distance), "tt:FloatRange"))
				{	soap_flag_Distance1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &(a->tt__RelativeFocusOptions20::Speed), "tt:FloatRange"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RelativeFocusOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocusOptions20, 0, sizeof(tt__RelativeFocusOptions20), 0, soap_copy_tt__RelativeFocusOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RelativeFocusOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocusOptions20);
	if (this->soap_out(soap, tag?tag:"tt:RelativeFocusOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelativeFocusOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelativeFocusOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelativeFocusOptions20 * SOAP_FMAC4 soap_get_tt__RelativeFocusOptions20(struct soap *soap, tt__RelativeFocusOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocusOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelativeFocusOptions20 * SOAP_FMAC2 soap_instantiate_tt__RelativeFocusOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelativeFocusOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelativeFocusOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelativeFocusOptions20);
		if (size)
			*size = sizeof(tt__RelativeFocusOptions20);
		((tt__RelativeFocusOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelativeFocusOptions20, n);
		if (size)
			*size = n * sizeof(tt__RelativeFocusOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelativeFocusOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelativeFocusOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelativeFocusOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelativeFocusOptions20 %p -> %p\n", q, p));
	*(tt__RelativeFocusOptions20*)p = *(tt__RelativeFocusOptions20*)q;
}

void tt__MoveOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MoveOptions20::Absolute = NULL;
	this->tt__MoveOptions20::Relative = NULL;
	this->tt__MoveOptions20::Continuous = NULL;
}

void tt__MoveOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocusOptions(soap, &this->tt__MoveOptions20::Absolute);
	soap_serialize_PointerTott__RelativeFocusOptions20(soap, &this->tt__MoveOptions20::Relative);
	soap_serialize_PointerTott__ContinuousFocusOptions(soap, &this->tt__MoveOptions20::Continuous);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MoveOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MoveOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveOptions20(struct soap *soap, const char *tag, int id, const tt__MoveOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MoveOptions20), "tt:MoveOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", -1, &(a->tt__MoveOptions20::Absolute), ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocusOptions20(soap, "tt:Relative", -1, &(a->tt__MoveOptions20::Relative), ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", -1, &(a->tt__MoveOptions20::Continuous), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MoveOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MoveOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__MoveOptions20 * SOAP_FMAC4 soap_in_tt__MoveOptions20(struct soap *soap, const char *tag, tt__MoveOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MoveOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveOptions20, sizeof(tt__MoveOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MoveOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MoveOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Absolute1 = 1;
	size_t soap_flag_Relative1 = 1;
	size_t soap_flag_Continuous1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Absolute1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", &(a->tt__MoveOptions20::Absolute), "tt:AbsoluteFocusOptions"))
				{	soap_flag_Absolute1--;
					continue;
				}
			if (soap_flag_Relative1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocusOptions20(soap, "tt:Relative", &(a->tt__MoveOptions20::Relative), "tt:RelativeFocusOptions20"))
				{	soap_flag_Relative1--;
					continue;
				}
			if (soap_flag_Continuous1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", &(a->tt__MoveOptions20::Continuous), "tt:ContinuousFocusOptions"))
				{	soap_flag_Continuous1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MoveOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MoveOptions20, 0, sizeof(tt__MoveOptions20), 0, soap_copy_tt__MoveOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MoveOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MoveOptions20);
	if (this->soap_out(soap, tag?tag:"tt:MoveOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MoveOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MoveOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__MoveOptions20 * SOAP_FMAC4 soap_get_tt__MoveOptions20(struct soap *soap, tt__MoveOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MoveOptions20 * SOAP_FMAC2 soap_instantiate_tt__MoveOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MoveOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MoveOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MoveOptions20);
		if (size)
			*size = sizeof(tt__MoveOptions20);
		((tt__MoveOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MoveOptions20, n);
		if (size)
			*size = n * sizeof(tt__MoveOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MoveOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MoveOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MoveOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MoveOptions20 %p -> %p\n", q, p));
	*(tt__MoveOptions20*)p = *(tt__MoveOptions20*)q;
}

void tt__ExposureOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ExposureOptions20::__sizeMode = 0;
	this->tt__ExposureOptions20::Mode = NULL;
	this->tt__ExposureOptions20::__sizePriority = 0;
	this->tt__ExposureOptions20::Priority = NULL;
	this->tt__ExposureOptions20::MinExposureTime = NULL;
	this->tt__ExposureOptions20::MaxExposureTime = NULL;
	this->tt__ExposureOptions20::MinGain = NULL;
	this->tt__ExposureOptions20::MaxGain = NULL;
	this->tt__ExposureOptions20::MinIris = NULL;
	this->tt__ExposureOptions20::MaxIris = NULL;
	this->tt__ExposureOptions20::ExposureTime = NULL;
	this->tt__ExposureOptions20::Gain = NULL;
	this->tt__ExposureOptions20::Iris = NULL;
}

void tt__ExposureOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ExposureOptions20::Mode)
	{	int i;
		for (i = 0; i < this->tt__ExposureOptions20::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__ExposureOptions20::Mode + i, SOAP_TYPE_tt__ExposureMode);
		}
	}
	if (this->tt__ExposureOptions20::Priority)
	{	int i;
		for (i = 0; i < this->tt__ExposureOptions20::__sizePriority; i++)
		{
			soap_embedded(soap, this->tt__ExposureOptions20::Priority + i, SOAP_TYPE_tt__ExposurePriority);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MinExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MaxExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MinGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MaxGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MinIris);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::MaxIris);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::ExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::Gain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions20::Iris);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ExposureOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ExposureOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureOptions20(struct soap *soap, const char *tag, int id, const tt__ExposureOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposureOptions20), "tt:ExposureOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ExposureOptions20::Mode)
	{	int i;
		for (i = 0; i < a->tt__ExposureOptions20::__sizeMode; i++)
			if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, a->tt__ExposureOptions20::Mode + i, ""))
				return soap->error;
	}
	if (a->tt__ExposureOptions20::Priority)
	{	int i;
		for (i = 0; i < a->tt__ExposureOptions20::__sizePriority; i++)
			if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, a->tt__ExposureOptions20::Priority + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinExposureTime", -1, &(a->tt__ExposureOptions20::MinExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxExposureTime", -1, &(a->tt__ExposureOptions20::MaxExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinGain", -1, &(a->tt__ExposureOptions20::MinGain), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxGain", -1, &(a->tt__ExposureOptions20::MaxGain), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MinIris", -1, &(a->tt__ExposureOptions20::MinIris), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxIris", -1, &(a->tt__ExposureOptions20::MaxIris), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:ExposureTime", -1, &(a->tt__ExposureOptions20::ExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Gain", -1, &(a->tt__ExposureOptions20::Gain), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Iris", -1, &(a->tt__ExposureOptions20::Iris), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ExposureOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ExposureOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__ExposureOptions20 * SOAP_FMAC4 soap_in_tt__ExposureOptions20(struct soap *soap, const char *tag, tt__ExposureOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ExposureOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureOptions20, sizeof(tt__ExposureOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ExposureOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ExposureOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	struct soap_blist *soap_blist_Priority1 = NULL;
	size_t soap_flag_MinExposureTime1 = 1;
	size_t soap_flag_MaxExposureTime1 = 1;
	size_t soap_flag_MinGain1 = 1;
	size_t soap_flag_MaxGain1 = 1;
	size_t soap_flag_MinIris1 = 1;
	size_t soap_flag_MaxIris1 = 1;
	size_t soap_flag_ExposureTime1 = 1;
	size_t soap_flag_Gain1 = 1;
	size_t soap_flag_Iris1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__ExposureOptions20::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__ExposureOptions20::Mode = (enum tt__ExposureMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__ExposureMode));
					if (a->tt__ExposureOptions20::Mode == NULL)
						return NULL;
					soap_default_tt__ExposureMode(soap, a->tt__ExposureOptions20::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", a->tt__ExposureOptions20::Mode, "tt:ExposureMode"))
				{	a->tt__ExposureOptions20::__sizeMode++;
					a->tt__ExposureOptions20::Mode = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Priority", 1, NULL))
			{	if (a->tt__ExposureOptions20::Priority == NULL)
				{	if (soap_blist_Priority1 == NULL)
						soap_blist_Priority1 = soap_new_block(soap);
					a->tt__ExposureOptions20::Priority = (enum tt__ExposurePriority *)soap_push_block(soap, soap_blist_Priority1, sizeof(enum tt__ExposurePriority));
					if (a->tt__ExposureOptions20::Priority == NULL)
						return NULL;
					soap_default_tt__ExposurePriority(soap, a->tt__ExposureOptions20::Priority);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", a->tt__ExposureOptions20::Priority, "tt:ExposurePriority"))
				{	a->tt__ExposureOptions20::__sizePriority++;
					a->tt__ExposureOptions20::Priority = NULL;
					continue;
				}
			}
			if (soap_flag_MinExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinExposureTime", &(a->tt__ExposureOptions20::MinExposureTime), "tt:FloatRange"))
				{	soap_flag_MinExposureTime1--;
					continue;
				}
			if (soap_flag_MaxExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxExposureTime", &(a->tt__ExposureOptions20::MaxExposureTime), "tt:FloatRange"))
				{	soap_flag_MaxExposureTime1--;
					continue;
				}
			if (soap_flag_MinGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinGain", &(a->tt__ExposureOptions20::MinGain), "tt:FloatRange"))
				{	soap_flag_MinGain1--;
					continue;
				}
			if (soap_flag_MaxGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxGain", &(a->tt__ExposureOptions20::MaxGain), "tt:FloatRange"))
				{	soap_flag_MaxGain1--;
					continue;
				}
			if (soap_flag_MinIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinIris", &(a->tt__ExposureOptions20::MinIris), "tt:FloatRange"))
				{	soap_flag_MinIris1--;
					continue;
				}
			if (soap_flag_MaxIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxIris", &(a->tt__ExposureOptions20::MaxIris), "tt:FloatRange"))
				{	soap_flag_MaxIris1--;
					continue;
				}
			if (soap_flag_ExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ExposureTime", &(a->tt__ExposureOptions20::ExposureTime), "tt:FloatRange"))
				{	soap_flag_ExposureTime1--;
					continue;
				}
			if (soap_flag_Gain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Gain", &(a->tt__ExposureOptions20::Gain), "tt:FloatRange"))
				{	soap_flag_Gain1--;
					continue;
				}
			if (soap_flag_Iris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Iris", &(a->tt__ExposureOptions20::Iris), "tt:FloatRange"))
				{	soap_flag_Iris1--;
					continue;
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
		if (a->tt__ExposureOptions20::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__ExposureOptions20::__sizeMode)
			a->tt__ExposureOptions20::Mode = (enum tt__ExposureMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__ExposureOptions20::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (a->tt__ExposureOptions20::Priority)
			soap_pop_block(soap, soap_blist_Priority1);
		if (a->tt__ExposureOptions20::__sizePriority)
			a->tt__ExposureOptions20::Priority = (enum tt__ExposurePriority *)soap_save_block(soap, soap_blist_Priority1, NULL, 1);
		else
		{	a->tt__ExposureOptions20::Priority = NULL;
			if (soap_blist_Priority1)
				soap_end_block(soap, soap_blist_Priority1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ExposureOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposureOptions20, 0, sizeof(tt__ExposureOptions20), 0, soap_copy_tt__ExposureOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__ExposureOptions20::__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ExposureOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ExposureOptions20);
	if (this->soap_out(soap, tag?tag:"tt:ExposureOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ExposureOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ExposureOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__ExposureOptions20 * SOAP_FMAC4 soap_get_tt__ExposureOptions20(struct soap *soap, tt__ExposureOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ExposureOptions20 * SOAP_FMAC2 soap_instantiate_tt__ExposureOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ExposureOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ExposureOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ExposureOptions20);
		if (size)
			*size = sizeof(tt__ExposureOptions20);
		((tt__ExposureOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ExposureOptions20, n);
		if (size)
			*size = n * sizeof(tt__ExposureOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ExposureOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ExposureOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ExposureOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ExposureOptions20 %p -> %p\n", q, p));
	*(tt__ExposureOptions20*)p = *(tt__ExposureOptions20*)q;
}

void tt__BacklightCompensationOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__BacklightCompensationOptions20::__sizeMode = 0;
	this->tt__BacklightCompensationOptions20::Mode = NULL;
	this->tt__BacklightCompensationOptions20::Level = NULL;
}

void tt__BacklightCompensationOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__BacklightCompensationOptions20::Mode)
	{	int i;
		for (i = 0; i < this->tt__BacklightCompensationOptions20::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__BacklightCompensationOptions20::Mode + i, SOAP_TYPE_tt__BacklightCompensationMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__BacklightCompensationOptions20::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BacklightCompensationOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BacklightCompensationOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationOptions20(struct soap *soap, const char *tag, int id, const tt__BacklightCompensationOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensationOptions20), "tt:BacklightCompensationOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__BacklightCompensationOptions20::Mode)
	{	int i;
		for (i = 0; i < a->tt__BacklightCompensationOptions20::__sizeMode; i++)
			if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, a->tt__BacklightCompensationOptions20::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &(a->tt__BacklightCompensationOptions20::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BacklightCompensationOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BacklightCompensationOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__BacklightCompensationOptions20 * SOAP_FMAC4 soap_in_tt__BacklightCompensationOptions20(struct soap *soap, const char *tag, tt__BacklightCompensationOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BacklightCompensationOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationOptions20, sizeof(tt__BacklightCompensationOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BacklightCompensationOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BacklightCompensationOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__BacklightCompensationOptions20::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__BacklightCompensationOptions20::Mode = (enum tt__BacklightCompensationMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__BacklightCompensationMode));
					if (a->tt__BacklightCompensationOptions20::Mode == NULL)
						return NULL;
					soap_default_tt__BacklightCompensationMode(soap, a->tt__BacklightCompensationOptions20::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", a->tt__BacklightCompensationOptions20::Mode, "tt:BacklightCompensationMode"))
				{	a->tt__BacklightCompensationOptions20::__sizeMode++;
					a->tt__BacklightCompensationOptions20::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &(a->tt__BacklightCompensationOptions20::Level), "tt:FloatRange"))
				{	soap_flag_Level1--;
					continue;
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
		if (a->tt__BacklightCompensationOptions20::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__BacklightCompensationOptions20::__sizeMode)
			a->tt__BacklightCompensationOptions20::Mode = (enum tt__BacklightCompensationMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__BacklightCompensationOptions20::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__BacklightCompensationOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensationOptions20, 0, sizeof(tt__BacklightCompensationOptions20), 0, soap_copy_tt__BacklightCompensationOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__BacklightCompensationOptions20::__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BacklightCompensationOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationOptions20);
	if (this->soap_out(soap, tag?tag:"tt:BacklightCompensationOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BacklightCompensationOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BacklightCompensationOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__BacklightCompensationOptions20 * SOAP_FMAC4 soap_get_tt__BacklightCompensationOptions20(struct soap *soap, tt__BacklightCompensationOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BacklightCompensationOptions20 * SOAP_FMAC2 soap_instantiate_tt__BacklightCompensationOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BacklightCompensationOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BacklightCompensationOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BacklightCompensationOptions20);
		if (size)
			*size = sizeof(tt__BacklightCompensationOptions20);
		((tt__BacklightCompensationOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BacklightCompensationOptions20, n);
		if (size)
			*size = n * sizeof(tt__BacklightCompensationOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BacklightCompensationOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BacklightCompensationOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BacklightCompensationOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BacklightCompensationOptions20 %p -> %p\n", q, p));
	*(tt__BacklightCompensationOptions20*)p = *(tt__BacklightCompensationOptions20*)q;
}

void tt__WideDynamicRangeOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WideDynamicRangeOptions20::__sizeMode = 0;
	this->tt__WideDynamicRangeOptions20::Mode = NULL;
	this->tt__WideDynamicRangeOptions20::Level = NULL;
}

void tt__WideDynamicRangeOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__WideDynamicRangeOptions20::Mode)
	{	int i;
		for (i = 0; i < this->tt__WideDynamicRangeOptions20::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__WideDynamicRangeOptions20::Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WideDynamicRangeOptions20::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WideDynamicRangeOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WideDynamicRangeOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRangeOptions20(struct soap *soap, const char *tag, int id, const tt__WideDynamicRangeOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRangeOptions20), "tt:WideDynamicRangeOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WideDynamicRangeOptions20::Mode)
	{	int i;
		for (i = 0; i < a->tt__WideDynamicRangeOptions20::__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->tt__WideDynamicRangeOptions20::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &(a->tt__WideDynamicRangeOptions20::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WideDynamicRangeOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WideDynamicRangeOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__WideDynamicRangeOptions20 * SOAP_FMAC4 soap_in_tt__WideDynamicRangeOptions20(struct soap *soap, const char *tag, tt__WideDynamicRangeOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WideDynamicRangeOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRangeOptions20, sizeof(tt__WideDynamicRangeOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WideDynamicRangeOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WideDynamicRangeOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__WideDynamicRangeOptions20::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__WideDynamicRangeOptions20::Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__WideDynamicMode));
					if (a->tt__WideDynamicRangeOptions20::Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->tt__WideDynamicRangeOptions20::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->tt__WideDynamicRangeOptions20::Mode, "tt:WideDynamicMode"))
				{	a->tt__WideDynamicRangeOptions20::__sizeMode++;
					a->tt__WideDynamicRangeOptions20::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &(a->tt__WideDynamicRangeOptions20::Level), "tt:FloatRange"))
				{	soap_flag_Level1--;
					continue;
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
		if (a->tt__WideDynamicRangeOptions20::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__WideDynamicRangeOptions20::__sizeMode)
			a->tt__WideDynamicRangeOptions20::Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__WideDynamicRangeOptions20::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WideDynamicRangeOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRangeOptions20, 0, sizeof(tt__WideDynamicRangeOptions20), 0, soap_copy_tt__WideDynamicRangeOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__WideDynamicRangeOptions20::__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WideDynamicRangeOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRangeOptions20);
	if (this->soap_out(soap, tag?tag:"tt:WideDynamicRangeOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WideDynamicRangeOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WideDynamicRangeOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__WideDynamicRangeOptions20 * SOAP_FMAC4 soap_get_tt__WideDynamicRangeOptions20(struct soap *soap, tt__WideDynamicRangeOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRangeOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WideDynamicRangeOptions20 * SOAP_FMAC2 soap_instantiate_tt__WideDynamicRangeOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WideDynamicRangeOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WideDynamicRangeOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WideDynamicRangeOptions20);
		if (size)
			*size = sizeof(tt__WideDynamicRangeOptions20);
		((tt__WideDynamicRangeOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WideDynamicRangeOptions20, n);
		if (size)
			*size = n * sizeof(tt__WideDynamicRangeOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WideDynamicRangeOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WideDynamicRangeOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WideDynamicRangeOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WideDynamicRangeOptions20 %p -> %p\n", q, p));
	*(tt__WideDynamicRangeOptions20*)p = *(tt__WideDynamicRangeOptions20*)q;
}

void tt__ImageStabilizationOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImageStabilizationOptionsExtension::__size = 0;
	this->tt__ImageStabilizationOptionsExtension::__any = NULL;
}

void tt__ImageStabilizationOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImageStabilizationOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImageStabilizationOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationOptionsExtension(struct soap *soap, const char *tag, int id, const tt__ImageStabilizationOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationOptionsExtension), "tt:ImageStabilizationOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImageStabilizationOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ImageStabilizationOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImageStabilizationOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImageStabilizationOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImageStabilizationOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImageStabilizationOptionsExtension * SOAP_FMAC4 soap_in_tt__ImageStabilizationOptionsExtension(struct soap *soap, const char *tag, tt__ImageStabilizationOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImageStabilizationOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationOptionsExtension, sizeof(tt__ImageStabilizationOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImageStabilizationOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImageStabilizationOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImageStabilizationOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImageStabilizationOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImageStabilizationOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImageStabilizationOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImageStabilizationOptionsExtension::__any, "xsd:byte"))
				{	a->tt__ImageStabilizationOptionsExtension::__size++;
					a->tt__ImageStabilizationOptionsExtension::__any = NULL;
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
		if (a->tt__ImageStabilizationOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImageStabilizationOptionsExtension::__size)
			a->tt__ImageStabilizationOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImageStabilizationOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImageStabilizationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationOptionsExtension, 0, sizeof(tt__ImageStabilizationOptionsExtension), 0, soap_copy_tt__ImageStabilizationOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImageStabilizationOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:ImageStabilizationOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImageStabilizationOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImageStabilizationOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImageStabilizationOptionsExtension * SOAP_FMAC4 soap_get_tt__ImageStabilizationOptionsExtension(struct soap *soap, tt__ImageStabilizationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImageStabilizationOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__ImageStabilizationOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImageStabilizationOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImageStabilizationOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImageStabilizationOptionsExtension);
		if (size)
			*size = sizeof(tt__ImageStabilizationOptionsExtension);
		((tt__ImageStabilizationOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImageStabilizationOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__ImageStabilizationOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImageStabilizationOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImageStabilizationOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImageStabilizationOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImageStabilizationOptionsExtension %p -> %p\n", q, p));
	*(tt__ImageStabilizationOptionsExtension*)p = *(tt__ImageStabilizationOptionsExtension*)q;
}

void tt__ImageStabilizationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImageStabilizationOptions::__sizeMode = 0;
	this->tt__ImageStabilizationOptions::Mode = NULL;
	this->tt__ImageStabilizationOptions::Level = NULL;
	this->tt__ImageStabilizationOptions::Extension = NULL;
	this->tt__ImageStabilizationOptions::__anyAttribute = NULL;
}

void tt__ImageStabilizationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ImageStabilizationOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__ImageStabilizationOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__ImageStabilizationOptions::Mode + i, SOAP_TYPE_tt__ImageStabilizationMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImageStabilizationOptions::Level);
	soap_serialize_PointerTott__ImageStabilizationOptionsExtension(soap, &this->tt__ImageStabilizationOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImageStabilizationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImageStabilizationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationOptions(struct soap *soap, const char *tag, int id, const tt__ImageStabilizationOptions *a, const char *type)
{
	if (((tt__ImageStabilizationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImageStabilizationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationOptions), "tt:ImageStabilizationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImageStabilizationOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__ImageStabilizationOptions::__sizeMode; i++)
			if (soap_out_tt__ImageStabilizationMode(soap, "tt:Mode", -1, a->tt__ImageStabilizationOptions::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &(a->tt__ImageStabilizationOptions::Level), ""))
		return soap->error;
	if (soap_out_PointerTott__ImageStabilizationOptionsExtension(soap, "tt:Extension", -1, &(a->tt__ImageStabilizationOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImageStabilizationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImageStabilizationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImageStabilizationOptions * SOAP_FMAC4 soap_in_tt__ImageStabilizationOptions(struct soap *soap, const char *tag, tt__ImageStabilizationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImageStabilizationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationOptions, sizeof(tt__ImageStabilizationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImageStabilizationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImageStabilizationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImageStabilizationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Level1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__ImageStabilizationOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__ImageStabilizationOptions::Mode = (enum tt__ImageStabilizationMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__ImageStabilizationMode));
					if (a->tt__ImageStabilizationOptions::Mode == NULL)
						return NULL;
					soap_default_tt__ImageStabilizationMode(soap, a->tt__ImageStabilizationOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ImageStabilizationMode(soap, "tt:Mode", a->tt__ImageStabilizationOptions::Mode, "tt:ImageStabilizationMode"))
				{	a->tt__ImageStabilizationOptions::__sizeMode++;
					a->tt__ImageStabilizationOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &(a->tt__ImageStabilizationOptions::Level), "tt:FloatRange"))
				{	soap_flag_Level1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationOptionsExtension(soap, "tt:Extension", &(a->tt__ImageStabilizationOptions::Extension), "tt:ImageStabilizationOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__ImageStabilizationOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__ImageStabilizationOptions::__sizeMode)
			a->tt__ImageStabilizationOptions::Mode = (enum tt__ImageStabilizationMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__ImageStabilizationOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImageStabilizationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationOptions, 0, sizeof(tt__ImageStabilizationOptions), 0, soap_copy_tt__ImageStabilizationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__ImageStabilizationOptions::__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ImageStabilizationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationOptions);
	if (this->soap_out(soap, tag?tag:"tt:ImageStabilizationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImageStabilizationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImageStabilizationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImageStabilizationOptions * SOAP_FMAC4 soap_get_tt__ImageStabilizationOptions(struct soap *soap, tt__ImageStabilizationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImageStabilizationOptions * SOAP_FMAC2 soap_instantiate_tt__ImageStabilizationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImageStabilizationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImageStabilizationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImageStabilizationOptions);
		if (size)
			*size = sizeof(tt__ImageStabilizationOptions);
		((tt__ImageStabilizationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImageStabilizationOptions, n);
		if (size)
			*size = n * sizeof(tt__ImageStabilizationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImageStabilizationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImageStabilizationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImageStabilizationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImageStabilizationOptions %p -> %p\n", q, p));
	*(tt__ImageStabilizationOptions*)p = *(tt__ImageStabilizationOptions*)q;
}

void tt__ImagingOptions20Extension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingOptions20Extension2::__size = 0;
	this->tt__ImagingOptions20Extension2::__any = NULL;
}

void tt__ImagingOptions20Extension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingOptions20Extension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingOptions20Extension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20Extension2(struct soap *soap, const char *tag, int id, const tt__ImagingOptions20Extension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20Extension2), "tt:ImagingOptions20Extension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingOptions20Extension2::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingOptions20Extension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingOptions20Extension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingOptions20Extension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingOptions20Extension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingOptions20Extension2 * SOAP_FMAC4 soap_in_tt__ImagingOptions20Extension2(struct soap *soap, const char *tag, tt__ImagingOptions20Extension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingOptions20Extension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20Extension2, sizeof(tt__ImagingOptions20Extension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingOptions20Extension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingOptions20Extension2 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingOptions20Extension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingOptions20Extension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingOptions20Extension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingOptions20Extension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingOptions20Extension2::__any, "xsd:byte"))
				{	a->tt__ImagingOptions20Extension2::__size++;
					a->tt__ImagingOptions20Extension2::__any = NULL;
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
		if (a->tt__ImagingOptions20Extension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingOptions20Extension2::__size)
			a->tt__ImagingOptions20Extension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingOptions20Extension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingOptions20Extension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20Extension2, 0, sizeof(tt__ImagingOptions20Extension2), 0, soap_copy_tt__ImagingOptions20Extension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingOptions20Extension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20Extension2);
	if (this->soap_out(soap, tag?tag:"tt:ImagingOptions20Extension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingOptions20Extension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingOptions20Extension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingOptions20Extension2 * SOAP_FMAC4 soap_get_tt__ImagingOptions20Extension2(struct soap *soap, tt__ImagingOptions20Extension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20Extension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingOptions20Extension2 * SOAP_FMAC2 soap_instantiate_tt__ImagingOptions20Extension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingOptions20Extension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingOptions20Extension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingOptions20Extension2);
		if (size)
			*size = sizeof(tt__ImagingOptions20Extension2);
		((tt__ImagingOptions20Extension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingOptions20Extension2, n);
		if (size)
			*size = n * sizeof(tt__ImagingOptions20Extension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingOptions20Extension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingOptions20Extension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingOptions20Extension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingOptions20Extension2 %p -> %p\n", q, p));
	*(tt__ImagingOptions20Extension2*)p = *(tt__ImagingOptions20Extension2*)q;
}

void tt__ImagingOptions20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingOptions20Extension::__size = 0;
	this->tt__ImagingOptions20Extension::__any = NULL;
	this->tt__ImagingOptions20Extension::ImageStabilization = NULL;
	this->tt__ImagingOptions20Extension::Extension = NULL;
}

void tt__ImagingOptions20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImageStabilizationOptions(soap, &this->tt__ImagingOptions20Extension::ImageStabilization);
	soap_serialize_PointerTott__ImagingOptions20Extension2(soap, &this->tt__ImagingOptions20Extension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingOptions20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingOptions20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20Extension(struct soap *soap, const char *tag, int id, const tt__ImagingOptions20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20Extension), "tt:ImagingOptions20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingOptions20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingOptions20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingOptions20Extension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ImageStabilizationOptions(soap, "tt:ImageStabilization", -1, &(a->tt__ImagingOptions20Extension::ImageStabilization), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingOptions20Extension2(soap, "tt:Extension", -1, &(a->tt__ImagingOptions20Extension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingOptions20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingOptions20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingOptions20Extension * SOAP_FMAC4 soap_in_tt__ImagingOptions20Extension(struct soap *soap, const char *tag, tt__ImagingOptions20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingOptions20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20Extension, sizeof(tt__ImagingOptions20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingOptions20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingOptions20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_ImageStabilization1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_ImageStabilization1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationOptions(soap, "tt:ImageStabilization", &(a->tt__ImagingOptions20Extension::ImageStabilization), "tt:ImageStabilizationOptions"))
				{	soap_flag_ImageStabilization1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingOptions20Extension2(soap, "tt:Extension", &(a->tt__ImagingOptions20Extension::Extension), "tt:ImagingOptions20Extension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingOptions20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingOptions20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingOptions20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingOptions20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingOptions20Extension::__any, "xsd:byte"))
				{	a->tt__ImagingOptions20Extension::__size++;
					a->tt__ImagingOptions20Extension::__any = NULL;
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
		if (a->tt__ImagingOptions20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingOptions20Extension::__size)
			a->tt__ImagingOptions20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingOptions20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20Extension, 0, sizeof(tt__ImagingOptions20Extension), 0, soap_copy_tt__ImagingOptions20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingOptions20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20Extension);
	if (this->soap_out(soap, tag?tag:"tt:ImagingOptions20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingOptions20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingOptions20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingOptions20Extension * SOAP_FMAC4 soap_get_tt__ImagingOptions20Extension(struct soap *soap, tt__ImagingOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingOptions20Extension * SOAP_FMAC2 soap_instantiate_tt__ImagingOptions20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingOptions20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingOptions20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingOptions20Extension);
		if (size)
			*size = sizeof(tt__ImagingOptions20Extension);
		((tt__ImagingOptions20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingOptions20Extension, n);
		if (size)
			*size = n * sizeof(tt__ImagingOptions20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingOptions20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingOptions20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingOptions20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingOptions20Extension %p -> %p\n", q, p));
	*(tt__ImagingOptions20Extension*)p = *(tt__ImagingOptions20Extension*)q;
}

void tt__ImagingOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingOptions20::BacklightCompensation = NULL;
	this->tt__ImagingOptions20::Brightness = NULL;
	this->tt__ImagingOptions20::ColorSaturation = NULL;
	this->tt__ImagingOptions20::Contrast = NULL;
	this->tt__ImagingOptions20::Exposure = NULL;
	this->tt__ImagingOptions20::Focus = NULL;
	this->tt__ImagingOptions20::__sizeIrCutFilterModes = 0;
	this->tt__ImagingOptions20::IrCutFilterModes = NULL;
	this->tt__ImagingOptions20::Sharpness = NULL;
	this->tt__ImagingOptions20::WideDynamicRange = NULL;
	this->tt__ImagingOptions20::WhiteBalance = NULL;
	this->tt__ImagingOptions20::Extension = NULL;
	this->tt__ImagingOptions20::__anyAttribute = NULL;
}

void tt__ImagingOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensationOptions20(soap, &this->tt__ImagingOptions20::BacklightCompensation);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions20::Brightness);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions20::ColorSaturation);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions20::Contrast);
	soap_serialize_PointerTott__ExposureOptions20(soap, &this->tt__ImagingOptions20::Exposure);
	soap_serialize_PointerTott__FocusOptions20(soap, &this->tt__ImagingOptions20::Focus);
	if (this->tt__ImagingOptions20::IrCutFilterModes)
	{	int i;
		for (i = 0; i < this->tt__ImagingOptions20::__sizeIrCutFilterModes; i++)
		{
			soap_embedded(soap, this->tt__ImagingOptions20::IrCutFilterModes + i, SOAP_TYPE_tt__IrCutFilterMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions20::Sharpness);
	soap_serialize_PointerTott__WideDynamicRangeOptions20(soap, &this->tt__ImagingOptions20::WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalanceOptions20(soap, &this->tt__ImagingOptions20::WhiteBalance);
	soap_serialize_PointerTott__ImagingOptions20Extension(soap, &this->tt__ImagingOptions20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions20(struct soap *soap, const char *tag, int id, const tt__ImagingOptions20 *a, const char *type)
{
	if (((tt__ImagingOptions20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingOptions20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions20), "tt:ImagingOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__BacklightCompensationOptions20(soap, "tt:BacklightCompensation", -1, &(a->tt__ImagingOptions20::BacklightCompensation), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Brightness", -1, &(a->tt__ImagingOptions20::Brightness), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:ColorSaturation", -1, &(a->tt__ImagingOptions20::ColorSaturation), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Contrast", -1, &(a->tt__ImagingOptions20::Contrast), ""))
		return soap->error;
	if (soap_out_PointerTott__ExposureOptions20(soap, "tt:Exposure", -1, &(a->tt__ImagingOptions20::Exposure), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusOptions20(soap, "tt:Focus", -1, &(a->tt__ImagingOptions20::Focus), ""))
		return soap->error;
	if (a->tt__ImagingOptions20::IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->tt__ImagingOptions20::__sizeIrCutFilterModes; i++)
			if (soap_out_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", -1, a->tt__ImagingOptions20::IrCutFilterModes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:Sharpness", -1, &(a->tt__ImagingOptions20::Sharpness), ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRangeOptions20(soap, "tt:WideDynamicRange", -1, &(a->tt__ImagingOptions20::WideDynamicRange), ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalanceOptions20(soap, "tt:WhiteBalance", -1, &(a->tt__ImagingOptions20::WhiteBalance), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingOptions20Extension(soap, "tt:Extension", -1, &(a->tt__ImagingOptions20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingOptions20 * SOAP_FMAC4 soap_in_tt__ImagingOptions20(struct soap *soap, const char *tag, tt__ImagingOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions20, sizeof(tt__ImagingOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingOptions20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_BacklightCompensation1 = 1;
	size_t soap_flag_Brightness1 = 1;
	size_t soap_flag_ColorSaturation1 = 1;
	size_t soap_flag_Contrast1 = 1;
	size_t soap_flag_Exposure1 = 1;
	size_t soap_flag_Focus1 = 1;
	struct soap_blist *soap_blist_IrCutFilterModes1 = NULL;
	size_t soap_flag_Sharpness1 = 1;
	size_t soap_flag_WideDynamicRange1 = 1;
	size_t soap_flag_WhiteBalance1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_BacklightCompensation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensationOptions20(soap, "tt:BacklightCompensation", &(a->tt__ImagingOptions20::BacklightCompensation), "tt:BacklightCompensationOptions20"))
				{	soap_flag_BacklightCompensation1--;
					continue;
				}
			if (soap_flag_Brightness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Brightness", &(a->tt__ImagingOptions20::Brightness), "tt:FloatRange"))
				{	soap_flag_Brightness1--;
					continue;
				}
			if (soap_flag_ColorSaturation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ColorSaturation", &(a->tt__ImagingOptions20::ColorSaturation), "tt:FloatRange"))
				{	soap_flag_ColorSaturation1--;
					continue;
				}
			if (soap_flag_Contrast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Contrast", &(a->tt__ImagingOptions20::Contrast), "tt:FloatRange"))
				{	soap_flag_Contrast1--;
					continue;
				}
			if (soap_flag_Exposure1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposureOptions20(soap, "tt:Exposure", &(a->tt__ImagingOptions20::Exposure), "tt:ExposureOptions20"))
				{	soap_flag_Exposure1--;
					continue;
				}
			if (soap_flag_Focus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions20(soap, "tt:Focus", &(a->tt__ImagingOptions20::Focus), "tt:FocusOptions20"))
				{	soap_flag_Focus1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IrCutFilterModes", 1, NULL))
			{	if (a->tt__ImagingOptions20::IrCutFilterModes == NULL)
				{	if (soap_blist_IrCutFilterModes1 == NULL)
						soap_blist_IrCutFilterModes1 = soap_new_block(soap);
					a->tt__ImagingOptions20::IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_push_block(soap, soap_blist_IrCutFilterModes1, sizeof(enum tt__IrCutFilterMode));
					if (a->tt__ImagingOptions20::IrCutFilterModes == NULL)
						return NULL;
					soap_default_tt__IrCutFilterMode(soap, a->tt__ImagingOptions20::IrCutFilterModes);
				}
				soap_revert(soap);
				if (soap_in_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", a->tt__ImagingOptions20::IrCutFilterModes, "tt:IrCutFilterMode"))
				{	a->tt__ImagingOptions20::__sizeIrCutFilterModes++;
					a->tt__ImagingOptions20::IrCutFilterModes = NULL;
					continue;
				}
			}
			if (soap_flag_Sharpness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Sharpness", &(a->tt__ImagingOptions20::Sharpness), "tt:FloatRange"))
				{	soap_flag_Sharpness1--;
					continue;
				}
			if (soap_flag_WideDynamicRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRangeOptions20(soap, "tt:WideDynamicRange", &(a->tt__ImagingOptions20::WideDynamicRange), "tt:WideDynamicRangeOptions20"))
				{	soap_flag_WideDynamicRange1--;
					continue;
				}
			if (soap_flag_WhiteBalance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions20(soap, "tt:WhiteBalance", &(a->tt__ImagingOptions20::WhiteBalance), "tt:WhiteBalanceOptions20"))
				{	soap_flag_WhiteBalance1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingOptions20Extension(soap, "tt:Extension", &(a->tt__ImagingOptions20::Extension), "tt:ImagingOptions20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__ImagingOptions20::IrCutFilterModes)
			soap_pop_block(soap, soap_blist_IrCutFilterModes1);
		if (a->tt__ImagingOptions20::__sizeIrCutFilterModes)
			a->tt__ImagingOptions20::IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_save_block(soap, soap_blist_IrCutFilterModes1, NULL, 1);
		else
		{	a->tt__ImagingOptions20::IrCutFilterModes = NULL;
			if (soap_blist_IrCutFilterModes1)
				soap_end_block(soap, soap_blist_IrCutFilterModes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions20, 0, sizeof(tt__ImagingOptions20), 0, soap_copy_tt__ImagingOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions20);
	if (this->soap_out(soap, tag?tag:"tt:ImagingOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingOptions20 * SOAP_FMAC4 soap_get_tt__ImagingOptions20(struct soap *soap, tt__ImagingOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingOptions20 * SOAP_FMAC2 soap_instantiate_tt__ImagingOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingOptions20);
		if (size)
			*size = sizeof(tt__ImagingOptions20);
		((tt__ImagingOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingOptions20, n);
		if (size)
			*size = n * sizeof(tt__ImagingOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingOptions20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingOptions20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingOptions20 %p -> %p\n", q, p));
	*(tt__ImagingOptions20*)p = *(tt__ImagingOptions20*)q;
}

void tt__Exposure20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ExposureMode(soap, &this->tt__Exposure20::Mode);
	this->tt__Exposure20::Priority = NULL;
	this->tt__Exposure20::Window = NULL;
	this->tt__Exposure20::MinExposureTime = NULL;
	this->tt__Exposure20::MaxExposureTime = NULL;
	this->tt__Exposure20::MinGain = NULL;
	this->tt__Exposure20::MaxGain = NULL;
	this->tt__Exposure20::MinIris = NULL;
	this->tt__Exposure20::MaxIris = NULL;
	this->tt__Exposure20::ExposureTime = NULL;
	this->tt__Exposure20::Gain = NULL;
	this->tt__Exposure20::Iris = NULL;
}

void tt__Exposure20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Exposure20::Mode, SOAP_TYPE_tt__ExposureMode);
	soap_serialize_PointerTott__ExposurePriority(soap, &this->tt__Exposure20::Priority);
	soap_serialize_PointerTott__Rectangle(soap, &this->tt__Exposure20::Window);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MinExposureTime);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MaxExposureTime);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MinGain);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MaxGain);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MinIris);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::MaxIris);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::ExposureTime);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::Gain);
	soap_serialize_PointerTofloat(soap, &this->tt__Exposure20::Iris);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Exposure20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Exposure20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Exposure20(struct soap *soap, const char *tag, int id, const tt__Exposure20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Exposure20), "tt:Exposure20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, &(a->tt__Exposure20::Mode), ""))
		return soap->error;
	if (soap_out_PointerTott__ExposurePriority(soap, "tt:Priority", -1, &(a->tt__Exposure20::Priority), ""))
		return soap->error;
	if (soap_out_PointerTott__Rectangle(soap, "tt:Window", -1, &(a->tt__Exposure20::Window), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinExposureTime", -1, &(a->tt__Exposure20::MinExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxExposureTime", -1, &(a->tt__Exposure20::MaxExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinGain", -1, &(a->tt__Exposure20::MinGain), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxGain", -1, &(a->tt__Exposure20::MaxGain), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MinIris", -1, &(a->tt__Exposure20::MinIris), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:MaxIris", -1, &(a->tt__Exposure20::MaxIris), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ExposureTime", -1, &(a->tt__Exposure20::ExposureTime), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Gain", -1, &(a->tt__Exposure20::Gain), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Iris", -1, &(a->tt__Exposure20::Iris), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Exposure20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Exposure20(soap, tag, this, type);
}

SOAP_FMAC3 tt__Exposure20 * SOAP_FMAC4 soap_in_tt__Exposure20(struct soap *soap, const char *tag, tt__Exposure20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Exposure20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Exposure20, sizeof(tt__Exposure20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Exposure20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Exposure20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Priority1 = 1;
	size_t soap_flag_Window1 = 1;
	size_t soap_flag_MinExposureTime1 = 1;
	size_t soap_flag_MaxExposureTime1 = 1;
	size_t soap_flag_MinGain1 = 1;
	size_t soap_flag_MaxGain1 = 1;
	size_t soap_flag_MinIris1 = 1;
	size_t soap_flag_MaxIris1 = 1;
	size_t soap_flag_ExposureTime1 = 1;
	size_t soap_flag_Gain1 = 1;
	size_t soap_flag_Iris1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", &(a->tt__Exposure20::Mode), "tt:ExposureMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Priority1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposurePriority(soap, "tt:Priority", &(a->tt__Exposure20::Priority), "tt:ExposurePriority"))
				{	soap_flag_Priority1--;
					continue;
				}
			if (soap_flag_Window1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Window", &(a->tt__Exposure20::Window), "tt:Rectangle"))
				{	soap_flag_Window1--;
					continue;
				}
			if (soap_flag_MinExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinExposureTime", &(a->tt__Exposure20::MinExposureTime), "xsd:float"))
				{	soap_flag_MinExposureTime1--;
					continue;
				}
			if (soap_flag_MaxExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxExposureTime", &(a->tt__Exposure20::MaxExposureTime), "xsd:float"))
				{	soap_flag_MaxExposureTime1--;
					continue;
				}
			if (soap_flag_MinGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinGain", &(a->tt__Exposure20::MinGain), "xsd:float"))
				{	soap_flag_MinGain1--;
					continue;
				}
			if (soap_flag_MaxGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxGain", &(a->tt__Exposure20::MaxGain), "xsd:float"))
				{	soap_flag_MaxGain1--;
					continue;
				}
			if (soap_flag_MinIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MinIris", &(a->tt__Exposure20::MinIris), "xsd:float"))
				{	soap_flag_MinIris1--;
					continue;
				}
			if (soap_flag_MaxIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:MaxIris", &(a->tt__Exposure20::MaxIris), "xsd:float"))
				{	soap_flag_MaxIris1--;
					continue;
				}
			if (soap_flag_ExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:ExposureTime", &(a->tt__Exposure20::ExposureTime), "xsd:float"))
				{	soap_flag_ExposureTime1--;
					continue;
				}
			if (soap_flag_Gain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Gain", &(a->tt__Exposure20::Gain), "xsd:float"))
				{	soap_flag_Gain1--;
					continue;
				}
			if (soap_flag_Iris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Iris", &(a->tt__Exposure20::Iris), "xsd:float"))
				{	soap_flag_Iris1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Exposure20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Exposure20, 0, sizeof(tt__Exposure20), 0, soap_copy_tt__Exposure20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Exposure20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Exposure20);
	if (this->soap_out(soap, tag?tag:"tt:Exposure20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Exposure20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Exposure20(soap, this, tag, type);
}

SOAP_FMAC3 tt__Exposure20 * SOAP_FMAC4 soap_get_tt__Exposure20(struct soap *soap, tt__Exposure20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Exposure20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Exposure20 * SOAP_FMAC2 soap_instantiate_tt__Exposure20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Exposure20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Exposure20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Exposure20);
		if (size)
			*size = sizeof(tt__Exposure20);
		((tt__Exposure20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Exposure20, n);
		if (size)
			*size = n * sizeof(tt__Exposure20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Exposure20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Exposure20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Exposure20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Exposure20 %p -> %p\n", q, p));
	*(tt__Exposure20*)p = *(tt__Exposure20*)q;
}

void tt__BacklightCompensation20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__BacklightCompensationMode(soap, &this->tt__BacklightCompensation20::Mode);
	this->tt__BacklightCompensation20::Level = NULL;
}

void tt__BacklightCompensation20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__BacklightCompensation20::Mode, SOAP_TYPE_tt__BacklightCompensationMode);
	soap_serialize_PointerTofloat(soap, &this->tt__BacklightCompensation20::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BacklightCompensation20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BacklightCompensation20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensation20(struct soap *soap, const char *tag, int id, const tt__BacklightCompensation20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensation20), "tt:BacklightCompensation20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, &(a->tt__BacklightCompensation20::Mode), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &(a->tt__BacklightCompensation20::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BacklightCompensation20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BacklightCompensation20(soap, tag, this, type);
}

SOAP_FMAC3 tt__BacklightCompensation20 * SOAP_FMAC4 soap_in_tt__BacklightCompensation20(struct soap *soap, const char *tag, tt__BacklightCompensation20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BacklightCompensation20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensation20, sizeof(tt__BacklightCompensation20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BacklightCompensation20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BacklightCompensation20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", &(a->tt__BacklightCompensation20::Mode), "tt:BacklightCompensationMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &(a->tt__BacklightCompensation20::Level), "xsd:float"))
				{	soap_flag_Level1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__BacklightCompensation20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensation20, 0, sizeof(tt__BacklightCompensation20), 0, soap_copy_tt__BacklightCompensation20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BacklightCompensation20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensation20);
	if (this->soap_out(soap, tag?tag:"tt:BacklightCompensation20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BacklightCompensation20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BacklightCompensation20(soap, this, tag, type);
}

SOAP_FMAC3 tt__BacklightCompensation20 * SOAP_FMAC4 soap_get_tt__BacklightCompensation20(struct soap *soap, tt__BacklightCompensation20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensation20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BacklightCompensation20 * SOAP_FMAC2 soap_instantiate_tt__BacklightCompensation20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BacklightCompensation20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BacklightCompensation20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BacklightCompensation20);
		if (size)
			*size = sizeof(tt__BacklightCompensation20);
		((tt__BacklightCompensation20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BacklightCompensation20, n);
		if (size)
			*size = n * sizeof(tt__BacklightCompensation20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BacklightCompensation20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BacklightCompensation20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BacklightCompensation20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BacklightCompensation20 %p -> %p\n", q, p));
	*(tt__BacklightCompensation20*)p = *(tt__BacklightCompensation20*)q;
}

void tt__WideDynamicRange20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WideDynamicMode(soap, &this->tt__WideDynamicRange20::Mode);
	this->tt__WideDynamicRange20::Level = NULL;
}

void tt__WideDynamicRange20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WideDynamicRange20::Mode, SOAP_TYPE_tt__WideDynamicMode);
	soap_serialize_PointerTofloat(soap, &this->tt__WideDynamicRange20::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WideDynamicRange20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WideDynamicRange20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRange20(struct soap *soap, const char *tag, int id, const tt__WideDynamicRange20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRange20), "tt:WideDynamicRange20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, &(a->tt__WideDynamicRange20::Mode), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &(a->tt__WideDynamicRange20::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WideDynamicRange20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WideDynamicRange20(soap, tag, this, type);
}

SOAP_FMAC3 tt__WideDynamicRange20 * SOAP_FMAC4 soap_in_tt__WideDynamicRange20(struct soap *soap, const char *tag, tt__WideDynamicRange20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WideDynamicRange20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRange20, sizeof(tt__WideDynamicRange20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WideDynamicRange20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WideDynamicRange20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", &(a->tt__WideDynamicRange20::Mode), "tt:WideDynamicMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &(a->tt__WideDynamicRange20::Level), "xsd:float"))
				{	soap_flag_Level1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WideDynamicRange20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRange20, 0, sizeof(tt__WideDynamicRange20), 0, soap_copy_tt__WideDynamicRange20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WideDynamicRange20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRange20);
	if (this->soap_out(soap, tag?tag:"tt:WideDynamicRange20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WideDynamicRange20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WideDynamicRange20(soap, this, tag, type);
}

SOAP_FMAC3 tt__WideDynamicRange20 * SOAP_FMAC4 soap_get_tt__WideDynamicRange20(struct soap *soap, tt__WideDynamicRange20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRange20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WideDynamicRange20 * SOAP_FMAC2 soap_instantiate_tt__WideDynamicRange20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WideDynamicRange20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WideDynamicRange20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WideDynamicRange20);
		if (size)
			*size = sizeof(tt__WideDynamicRange20);
		((tt__WideDynamicRange20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WideDynamicRange20, n);
		if (size)
			*size = n * sizeof(tt__WideDynamicRange20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WideDynamicRange20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WideDynamicRange20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WideDynamicRange20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WideDynamicRange20 %p -> %p\n", q, p));
	*(tt__WideDynamicRange20*)p = *(tt__WideDynamicRange20*)q;
}

void tt__ImageStabilizationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImageStabilizationExtension::__size = 0;
	this->tt__ImageStabilizationExtension::__any = NULL;
}

void tt__ImageStabilizationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImageStabilizationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImageStabilizationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilizationExtension(struct soap *soap, const char *tag, int id, const tt__ImageStabilizationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilizationExtension), "tt:ImageStabilizationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImageStabilizationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ImageStabilizationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImageStabilizationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImageStabilizationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImageStabilizationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImageStabilizationExtension * SOAP_FMAC4 soap_in_tt__ImageStabilizationExtension(struct soap *soap, const char *tag, tt__ImageStabilizationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImageStabilizationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilizationExtension, sizeof(tt__ImageStabilizationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImageStabilizationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImageStabilizationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImageStabilizationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImageStabilizationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImageStabilizationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImageStabilizationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImageStabilizationExtension::__any, "xsd:byte"))
				{	a->tt__ImageStabilizationExtension::__size++;
					a->tt__ImageStabilizationExtension::__any = NULL;
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
		if (a->tt__ImageStabilizationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImageStabilizationExtension::__size)
			a->tt__ImageStabilizationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImageStabilizationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImageStabilizationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilizationExtension, 0, sizeof(tt__ImageStabilizationExtension), 0, soap_copy_tt__ImageStabilizationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImageStabilizationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilizationExtension);
	if (this->soap_out(soap, tag?tag:"tt:ImageStabilizationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImageStabilizationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImageStabilizationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImageStabilizationExtension * SOAP_FMAC4 soap_get_tt__ImageStabilizationExtension(struct soap *soap, tt__ImageStabilizationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilizationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImageStabilizationExtension * SOAP_FMAC2 soap_instantiate_tt__ImageStabilizationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImageStabilizationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImageStabilizationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImageStabilizationExtension);
		if (size)
			*size = sizeof(tt__ImageStabilizationExtension);
		((tt__ImageStabilizationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImageStabilizationExtension, n);
		if (size)
			*size = n * sizeof(tt__ImageStabilizationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImageStabilizationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImageStabilizationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImageStabilizationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImageStabilizationExtension %p -> %p\n", q, p));
	*(tt__ImageStabilizationExtension*)p = *(tt__ImageStabilizationExtension*)q;
}

void tt__ImageStabilization::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ImageStabilizationMode(soap, &this->tt__ImageStabilization::Mode);
	this->tt__ImageStabilization::Level = NULL;
	this->tt__ImageStabilization::Extension = NULL;
	this->tt__ImageStabilization::__anyAttribute = NULL;
}

void tt__ImageStabilization::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ImageStabilization::Mode, SOAP_TYPE_tt__ImageStabilizationMode);
	soap_serialize_PointerTofloat(soap, &this->tt__ImageStabilization::Level);
	soap_serialize_PointerTott__ImageStabilizationExtension(soap, &this->tt__ImageStabilization::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImageStabilization::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImageStabilization(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImageStabilization(struct soap *soap, const char *tag, int id, const tt__ImageStabilization *a, const char *type)
{
	if (((tt__ImageStabilization*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImageStabilization*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImageStabilization), "tt:ImageStabilization"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ImageStabilizationMode(soap, "tt:Mode", -1, &(a->tt__ImageStabilization::Mode), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Level", -1, &(a->tt__ImageStabilization::Level), ""))
		return soap->error;
	if (soap_out_PointerTott__ImageStabilizationExtension(soap, "tt:Extension", -1, &(a->tt__ImageStabilization::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImageStabilization::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImageStabilization(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImageStabilization * SOAP_FMAC4 soap_in_tt__ImageStabilization(struct soap *soap, const char *tag, tt__ImageStabilization *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImageStabilization *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImageStabilization, sizeof(tt__ImageStabilization), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImageStabilization)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImageStabilization *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImageStabilization*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Level1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ImageStabilizationMode(soap, "tt:Mode", &(a->tt__ImageStabilization::Mode), "tt:ImageStabilizationMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Level", &(a->tt__ImageStabilization::Level), "xsd:float"))
				{	soap_flag_Level1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilizationExtension(soap, "tt:Extension", &(a->tt__ImageStabilization::Extension), "tt:ImageStabilizationExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImageStabilization *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImageStabilization, 0, sizeof(tt__ImageStabilization), 0, soap_copy_tt__ImageStabilization);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ImageStabilization::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImageStabilization);
	if (this->soap_out(soap, tag?tag:"tt:ImageStabilization", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImageStabilization::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImageStabilization(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImageStabilization * SOAP_FMAC4 soap_get_tt__ImageStabilization(struct soap *soap, tt__ImageStabilization *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImageStabilization(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImageStabilization * SOAP_FMAC2 soap_instantiate_tt__ImageStabilization(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImageStabilization(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImageStabilization, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImageStabilization);
		if (size)
			*size = sizeof(tt__ImageStabilization);
		((tt__ImageStabilization*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImageStabilization, n);
		if (size)
			*size = n * sizeof(tt__ImageStabilization);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImageStabilization*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImageStabilization*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImageStabilization(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImageStabilization %p -> %p\n", q, p));
	*(tt__ImageStabilization*)p = *(tt__ImageStabilization*)q;
}

void tt__ImagingSettingsExtension202::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingSettingsExtension202::__size = 0;
	this->tt__ImagingSettingsExtension202::__any = NULL;
}

void tt__ImagingSettingsExtension202::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingSettingsExtension202::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingSettingsExtension202(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension202(struct soap *soap, const char *tag, int id, const tt__ImagingSettingsExtension202 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension202), "tt:ImagingSettingsExtension202"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingSettingsExtension202::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingSettingsExtension202::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingSettingsExtension202::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingSettingsExtension202::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingSettingsExtension202(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension202 * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension202(struct soap *soap, const char *tag, tt__ImagingSettingsExtension202 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingSettingsExtension202 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension202, sizeof(tt__ImagingSettingsExtension202), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingSettingsExtension202)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingSettingsExtension202 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingSettingsExtension202::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingSettingsExtension202::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingSettingsExtension202::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingSettingsExtension202::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingSettingsExtension202::__any, "xsd:byte"))
				{	a->tt__ImagingSettingsExtension202::__size++;
					a->tt__ImagingSettingsExtension202::__any = NULL;
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
		if (a->tt__ImagingSettingsExtension202::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingSettingsExtension202::__size)
			a->tt__ImagingSettingsExtension202::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingSettingsExtension202::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingSettingsExtension202 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension202, 0, sizeof(tt__ImagingSettingsExtension202), 0, soap_copy_tt__ImagingSettingsExtension202);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingSettingsExtension202::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension202);
	if (this->soap_out(soap, tag?tag:"tt:ImagingSettingsExtension202", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingSettingsExtension202::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingSettingsExtension202(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension202 * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension202(struct soap *soap, tt__ImagingSettingsExtension202 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension202(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingSettingsExtension202 * SOAP_FMAC2 soap_instantiate_tt__ImagingSettingsExtension202(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingSettingsExtension202(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingSettingsExtension202, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingSettingsExtension202);
		if (size)
			*size = sizeof(tt__ImagingSettingsExtension202);
		((tt__ImagingSettingsExtension202*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingSettingsExtension202, n);
		if (size)
			*size = n * sizeof(tt__ImagingSettingsExtension202);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingSettingsExtension202*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingSettingsExtension202*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingSettingsExtension202(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingSettingsExtension202 %p -> %p\n", q, p));
	*(tt__ImagingSettingsExtension202*)p = *(tt__ImagingSettingsExtension202*)q;
}

void tt__ImagingSettingsExtension20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingSettingsExtension20::__size = 0;
	this->tt__ImagingSettingsExtension20::__any = NULL;
	this->tt__ImagingSettingsExtension20::ImageStabilization = NULL;
	this->tt__ImagingSettingsExtension20::Extension = NULL;
}

void tt__ImagingSettingsExtension20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ImageStabilization(soap, &this->tt__ImagingSettingsExtension20::ImageStabilization);
	soap_serialize_PointerTott__ImagingSettingsExtension202(soap, &this->tt__ImagingSettingsExtension20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingSettingsExtension20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingSettingsExtension20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension20(struct soap *soap, const char *tag, int id, const tt__ImagingSettingsExtension20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension20), "tt:ImagingSettingsExtension20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingSettingsExtension20::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingSettingsExtension20::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingSettingsExtension20::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ImageStabilization(soap, "tt:ImageStabilization", -1, &(a->tt__ImagingSettingsExtension20::ImageStabilization), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension202(soap, "tt:Extension", -1, &(a->tt__ImagingSettingsExtension20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingSettingsExtension20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingSettingsExtension20(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension20 * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension20(struct soap *soap, const char *tag, tt__ImagingSettingsExtension20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingSettingsExtension20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension20, sizeof(tt__ImagingSettingsExtension20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingSettingsExtension20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingSettingsExtension20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_ImageStabilization1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_ImageStabilization1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImageStabilization(soap, "tt:ImageStabilization", &(a->tt__ImagingSettingsExtension20::ImageStabilization), "tt:ImageStabilization"))
				{	soap_flag_ImageStabilization1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension202(soap, "tt:Extension", &(a->tt__ImagingSettingsExtension20::Extension), "tt:ImagingSettingsExtension202"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingSettingsExtension20::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingSettingsExtension20::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingSettingsExtension20::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingSettingsExtension20::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingSettingsExtension20::__any, "xsd:byte"))
				{	a->tt__ImagingSettingsExtension20::__size++;
					a->tt__ImagingSettingsExtension20::__any = NULL;
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
		if (a->tt__ImagingSettingsExtension20::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingSettingsExtension20::__size)
			a->tt__ImagingSettingsExtension20::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingSettingsExtension20::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingSettingsExtension20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension20, 0, sizeof(tt__ImagingSettingsExtension20), 0, soap_copy_tt__ImagingSettingsExtension20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingSettingsExtension20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension20);
	if (this->soap_out(soap, tag?tag:"tt:ImagingSettingsExtension20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingSettingsExtension20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingSettingsExtension20(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension20 * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension20(struct soap *soap, tt__ImagingSettingsExtension20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingSettingsExtension20 * SOAP_FMAC2 soap_instantiate_tt__ImagingSettingsExtension20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingSettingsExtension20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingSettingsExtension20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingSettingsExtension20);
		if (size)
			*size = sizeof(tt__ImagingSettingsExtension20);
		((tt__ImagingSettingsExtension20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingSettingsExtension20, n);
		if (size)
			*size = n * sizeof(tt__ImagingSettingsExtension20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingSettingsExtension20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingSettingsExtension20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingSettingsExtension20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingSettingsExtension20 %p -> %p\n", q, p));
	*(tt__ImagingSettingsExtension20*)p = *(tt__ImagingSettingsExtension20*)q;
}

void tt__ImagingSettings20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingSettings20::BacklightCompensation = NULL;
	this->tt__ImagingSettings20::Brightness = NULL;
	this->tt__ImagingSettings20::ColorSaturation = NULL;
	this->tt__ImagingSettings20::Contrast = NULL;
	this->tt__ImagingSettings20::Exposure = NULL;
	this->tt__ImagingSettings20::Focus = NULL;
	this->tt__ImagingSettings20::IrCutFilter = NULL;
	this->tt__ImagingSettings20::Sharpness = NULL;
	this->tt__ImagingSettings20::WideDynamicRange = NULL;
	this->tt__ImagingSettings20::WhiteBalance = NULL;
	this->tt__ImagingSettings20::Extension = NULL;
	this->tt__ImagingSettings20::__anyAttribute = NULL;
}

void tt__ImagingSettings20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensation20(soap, &this->tt__ImagingSettings20::BacklightCompensation);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings20::Brightness);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings20::ColorSaturation);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings20::Contrast);
	soap_serialize_PointerTott__Exposure20(soap, &this->tt__ImagingSettings20::Exposure);
	soap_serialize_PointerTott__FocusConfiguration20(soap, &this->tt__ImagingSettings20::Focus);
	soap_serialize_PointerTott__IrCutFilterMode(soap, &this->tt__ImagingSettings20::IrCutFilter);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings20::Sharpness);
	soap_serialize_PointerTott__WideDynamicRange20(soap, &this->tt__ImagingSettings20::WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalance20(soap, &this->tt__ImagingSettings20::WhiteBalance);
	soap_serialize_PointerTott__ImagingSettingsExtension20(soap, &this->tt__ImagingSettings20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingSettings20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingSettings20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettings20(struct soap *soap, const char *tag, int id, const tt__ImagingSettings20 *a, const char *type)
{
	if (((tt__ImagingSettings20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingSettings20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettings20), "tt:ImagingSettings20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__BacklightCompensation20(soap, "tt:BacklightCompensation", -1, &(a->tt__ImagingSettings20::BacklightCompensation), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Brightness", -1, &(a->tt__ImagingSettings20::Brightness), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ColorSaturation", -1, &(a->tt__ImagingSettings20::ColorSaturation), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Contrast", -1, &(a->tt__ImagingSettings20::Contrast), ""))
		return soap->error;
	if (soap_out_PointerTott__Exposure20(soap, "tt:Exposure", -1, &(a->tt__ImagingSettings20::Exposure), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration20(soap, "tt:Focus", -1, &(a->tt__ImagingSettings20::Focus), ""))
		return soap->error;
	if (soap_out_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", -1, &(a->tt__ImagingSettings20::IrCutFilter), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Sharpness", -1, &(a->tt__ImagingSettings20::Sharpness), ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRange20(soap, "tt:WideDynamicRange", -1, &(a->tt__ImagingSettings20::WideDynamicRange), ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance20(soap, "tt:WhiteBalance", -1, &(a->tt__ImagingSettings20::WhiteBalance), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension20(soap, "tt:Extension", -1, &(a->tt__ImagingSettings20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingSettings20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingSettings20(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingSettings20 * SOAP_FMAC4 soap_in_tt__ImagingSettings20(struct soap *soap, const char *tag, tt__ImagingSettings20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingSettings20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettings20, sizeof(tt__ImagingSettings20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingSettings20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingSettings20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingSettings20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_BacklightCompensation1 = 1;
	size_t soap_flag_Brightness1 = 1;
	size_t soap_flag_ColorSaturation1 = 1;
	size_t soap_flag_Contrast1 = 1;
	size_t soap_flag_Exposure1 = 1;
	size_t soap_flag_Focus1 = 1;
	size_t soap_flag_IrCutFilter1 = 1;
	size_t soap_flag_Sharpness1 = 1;
	size_t soap_flag_WideDynamicRange1 = 1;
	size_t soap_flag_WhiteBalance1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_BacklightCompensation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensation20(soap, "tt:BacklightCompensation", &(a->tt__ImagingSettings20::BacklightCompensation), "tt:BacklightCompensation20"))
				{	soap_flag_BacklightCompensation1--;
					continue;
				}
			if (soap_flag_Brightness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Brightness", &(a->tt__ImagingSettings20::Brightness), "xsd:float"))
				{	soap_flag_Brightness1--;
					continue;
				}
			if (soap_flag_ColorSaturation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:ColorSaturation", &(a->tt__ImagingSettings20::ColorSaturation), "xsd:float"))
				{	soap_flag_ColorSaturation1--;
					continue;
				}
			if (soap_flag_Contrast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Contrast", &(a->tt__ImagingSettings20::Contrast), "xsd:float"))
				{	soap_flag_Contrast1--;
					continue;
				}
			if (soap_flag_Exposure1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Exposure20(soap, "tt:Exposure", &(a->tt__ImagingSettings20::Exposure), "tt:Exposure20"))
				{	soap_flag_Exposure1--;
					continue;
				}
			if (soap_flag_Focus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration20(soap, "tt:Focus", &(a->tt__ImagingSettings20::Focus), "tt:FocusConfiguration20"))
				{	soap_flag_Focus1--;
					continue;
				}
			if (soap_flag_IrCutFilter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", &(a->tt__ImagingSettings20::IrCutFilter), "tt:IrCutFilterMode"))
				{	soap_flag_IrCutFilter1--;
					continue;
				}
			if (soap_flag_Sharpness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Sharpness", &(a->tt__ImagingSettings20::Sharpness), "xsd:float"))
				{	soap_flag_Sharpness1--;
					continue;
				}
			if (soap_flag_WideDynamicRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRange20(soap, "tt:WideDynamicRange", &(a->tt__ImagingSettings20::WideDynamicRange), "tt:WideDynamicRange20"))
				{	soap_flag_WideDynamicRange1--;
					continue;
				}
			if (soap_flag_WhiteBalance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance20(soap, "tt:WhiteBalance", &(a->tt__ImagingSettings20::WhiteBalance), "tt:WhiteBalance20"))
				{	soap_flag_WhiteBalance1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension20(soap, "tt:Extension", &(a->tt__ImagingSettings20::Extension), "tt:ImagingSettingsExtension20"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingSettings20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettings20, 0, sizeof(tt__ImagingSettings20), 0, soap_copy_tt__ImagingSettings20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingSettings20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettings20);
	if (this->soap_out(soap, tag?tag:"tt:ImagingSettings20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingSettings20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingSettings20(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingSettings20 * SOAP_FMAC4 soap_get_tt__ImagingSettings20(struct soap *soap, tt__ImagingSettings20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettings20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingSettings20 * SOAP_FMAC2 soap_instantiate_tt__ImagingSettings20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingSettings20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingSettings20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingSettings20);
		if (size)
			*size = sizeof(tt__ImagingSettings20);
		((tt__ImagingSettings20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingSettings20, n);
		if (size)
			*size = n * sizeof(tt__ImagingSettings20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingSettings20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingSettings20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingSettings20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingSettings20 %p -> %p\n", q, p));
	*(tt__ImagingSettings20*)p = *(tt__ImagingSettings20*)q;
}

void tt__FocusStatus20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusStatus20Extension::__size = 0;
	this->tt__FocusStatus20Extension::__any = NULL;
}

void tt__FocusStatus20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusStatus20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusStatus20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus20Extension(struct soap *soap, const char *tag, int id, const tt__FocusStatus20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus20Extension), "tt:FocusStatus20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FocusStatus20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__FocusStatus20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FocusStatus20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FocusStatus20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusStatus20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusStatus20Extension * SOAP_FMAC4 soap_in_tt__FocusStatus20Extension(struct soap *soap, const char *tag, tt__FocusStatus20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusStatus20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus20Extension, sizeof(tt__FocusStatus20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusStatus20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusStatus20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FocusStatus20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FocusStatus20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FocusStatus20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FocusStatus20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FocusStatus20Extension::__any, "xsd:byte"))
				{	a->tt__FocusStatus20Extension::__size++;
					a->tt__FocusStatus20Extension::__any = NULL;
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
		if (a->tt__FocusStatus20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FocusStatus20Extension::__size)
			a->tt__FocusStatus20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FocusStatus20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusStatus20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus20Extension, 0, sizeof(tt__FocusStatus20Extension), 0, soap_copy_tt__FocusStatus20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FocusStatus20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus20Extension);
	if (this->soap_out(soap, tag?tag:"tt:FocusStatus20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusStatus20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusStatus20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusStatus20Extension * SOAP_FMAC4 soap_get_tt__FocusStatus20Extension(struct soap *soap, tt__FocusStatus20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusStatus20Extension * SOAP_FMAC2 soap_instantiate_tt__FocusStatus20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusStatus20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusStatus20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusStatus20Extension);
		if (size)
			*size = sizeof(tt__FocusStatus20Extension);
		((tt__FocusStatus20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusStatus20Extension, n);
		if (size)
			*size = n * sizeof(tt__FocusStatus20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusStatus20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusStatus20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusStatus20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusStatus20Extension %p -> %p\n", q, p));
	*(tt__FocusStatus20Extension*)p = *(tt__FocusStatus20Extension*)q;
}

void tt__FocusStatus20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__FocusStatus20::Position);
	soap_default_tt__MoveStatus(soap, &this->tt__FocusStatus20::MoveStatus);
	soap_default_string(soap, &this->tt__FocusStatus20::Error);
	this->tt__FocusStatus20::Extension = NULL;
	this->tt__FocusStatus20::__anyAttribute = NULL;
}

void tt__FocusStatus20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__FocusStatus20::Position, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__FocusStatus20::MoveStatus, SOAP_TYPE_tt__MoveStatus);
	soap_serialize_string(soap, &this->tt__FocusStatus20::Error);
	soap_serialize_PointerTott__FocusStatus20Extension(soap, &this->tt__FocusStatus20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusStatus20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusStatus20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus20(struct soap *soap, const char *tag, int id, const tt__FocusStatus20 *a, const char *type)
{
	if (((tt__FocusStatus20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FocusStatus20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus20), "tt:FocusStatus20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_float(soap, "tt:Position", -1, &(a->tt__FocusStatus20::Position), ""))
		return soap->error;
	if (soap_out_tt__MoveStatus(soap, "tt:MoveStatus", -1, &(a->tt__FocusStatus20::MoveStatus), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &(a->tt__FocusStatus20::Error), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusStatus20Extension(soap, "tt:Extension", -1, &(a->tt__FocusStatus20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FocusStatus20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusStatus20(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusStatus20 * SOAP_FMAC4 soap_in_tt__FocusStatus20(struct soap *soap, const char *tag, tt__FocusStatus20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusStatus20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus20, sizeof(tt__FocusStatus20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusStatus20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusStatus20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FocusStatus20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_MoveStatus1 = 1;
	size_t soap_flag_Error1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &(a->tt__FocusStatus20::Position), "xsd:float"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_MoveStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__MoveStatus(soap, "tt:MoveStatus", &(a->tt__FocusStatus20::MoveStatus), "tt:MoveStatus"))
				{	soap_flag_MoveStatus1--;
					continue;
				}
			if (soap_flag_Error1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &(a->tt__FocusStatus20::Error), "xsd:string"))
				{	soap_flag_Error1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus20Extension(soap, "tt:Extension", &(a->tt__FocusStatus20::Extension), "tt:FocusStatus20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusStatus20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus20, 0, sizeof(tt__FocusStatus20), 0, soap_copy_tt__FocusStatus20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position1 > 0 || soap_flag_MoveStatus1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FocusStatus20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus20);
	if (this->soap_out(soap, tag?tag:"tt:FocusStatus20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusStatus20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusStatus20(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusStatus20 * SOAP_FMAC4 soap_get_tt__FocusStatus20(struct soap *soap, tt__FocusStatus20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusStatus20 * SOAP_FMAC2 soap_instantiate_tt__FocusStatus20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusStatus20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusStatus20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusStatus20);
		if (size)
			*size = sizeof(tt__FocusStatus20);
		((tt__FocusStatus20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusStatus20, n);
		if (size)
			*size = n * sizeof(tt__FocusStatus20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusStatus20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusStatus20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusStatus20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusStatus20 %p -> %p\n", q, p));
	*(tt__FocusStatus20*)p = *(tt__FocusStatus20*)q;
}

void tt__ImagingStatus20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingStatus20Extension::__size = 0;
	this->tt__ImagingStatus20Extension::__any = NULL;
}

void tt__ImagingStatus20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingStatus20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingStatus20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus20Extension(struct soap *soap, const char *tag, int id, const tt__ImagingStatus20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus20Extension), "tt:ImagingStatus20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingStatus20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingStatus20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingStatus20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingStatus20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingStatus20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingStatus20Extension * SOAP_FMAC4 soap_in_tt__ImagingStatus20Extension(struct soap *soap, const char *tag, tt__ImagingStatus20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingStatus20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus20Extension, sizeof(tt__ImagingStatus20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingStatus20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingStatus20Extension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingStatus20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingStatus20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingStatus20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingStatus20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingStatus20Extension::__any, "xsd:byte"))
				{	a->tt__ImagingStatus20Extension::__size++;
					a->tt__ImagingStatus20Extension::__any = NULL;
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
		if (a->tt__ImagingStatus20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingStatus20Extension::__size)
			a->tt__ImagingStatus20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingStatus20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingStatus20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus20Extension, 0, sizeof(tt__ImagingStatus20Extension), 0, soap_copy_tt__ImagingStatus20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingStatus20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus20Extension);
	if (this->soap_out(soap, tag?tag:"tt:ImagingStatus20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingStatus20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingStatus20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingStatus20Extension * SOAP_FMAC4 soap_get_tt__ImagingStatus20Extension(struct soap *soap, tt__ImagingStatus20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingStatus20Extension * SOAP_FMAC2 soap_instantiate_tt__ImagingStatus20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingStatus20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingStatus20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingStatus20Extension);
		if (size)
			*size = sizeof(tt__ImagingStatus20Extension);
		((tt__ImagingStatus20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingStatus20Extension, n);
		if (size)
			*size = n * sizeof(tt__ImagingStatus20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingStatus20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingStatus20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingStatus20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingStatus20Extension %p -> %p\n", q, p));
	*(tt__ImagingStatus20Extension*)p = *(tt__ImagingStatus20Extension*)q;
}

void tt__ImagingStatus20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingStatus20::FocusStatus20 = NULL;
	this->tt__ImagingStatus20::Extension = NULL;
	this->tt__ImagingStatus20::__anyAttribute = NULL;
}

void tt__ImagingStatus20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FocusStatus20(soap, &this->tt__ImagingStatus20::FocusStatus20);
	soap_serialize_PointerTott__ImagingStatus20Extension(soap, &this->tt__ImagingStatus20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingStatus20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingStatus20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus20(struct soap *soap, const char *tag, int id, const tt__ImagingStatus20 *a, const char *type)
{
	if (((tt__ImagingStatus20*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingStatus20*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus20), "tt:ImagingStatus20"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__FocusStatus20(soap, "tt:FocusStatus20", -1, &(a->tt__ImagingStatus20::FocusStatus20), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingStatus20Extension(soap, "tt:Extension", -1, &(a->tt__ImagingStatus20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingStatus20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingStatus20(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingStatus20 * SOAP_FMAC4 soap_in_tt__ImagingStatus20(struct soap *soap, const char *tag, tt__ImagingStatus20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingStatus20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus20, sizeof(tt__ImagingStatus20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingStatus20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingStatus20 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingStatus20*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_FocusStatus201 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_FocusStatus201 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus20(soap, "tt:FocusStatus20", &(a->tt__ImagingStatus20::FocusStatus20), "tt:FocusStatus20"))
				{	soap_flag_FocusStatus201--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingStatus20Extension(soap, "tt:Extension", &(a->tt__ImagingStatus20::Extension), "tt:ImagingStatus20Extension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingStatus20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus20, 0, sizeof(tt__ImagingStatus20), 0, soap_copy_tt__ImagingStatus20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingStatus20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus20);
	if (this->soap_out(soap, tag?tag:"tt:ImagingStatus20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingStatus20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingStatus20(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingStatus20 * SOAP_FMAC4 soap_get_tt__ImagingStatus20(struct soap *soap, tt__ImagingStatus20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingStatus20 * SOAP_FMAC2 soap_instantiate_tt__ImagingStatus20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingStatus20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingStatus20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingStatus20);
		if (size)
			*size = sizeof(tt__ImagingStatus20);
		((tt__ImagingStatus20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingStatus20, n);
		if (size)
			*size = n * sizeof(tt__ImagingStatus20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingStatus20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingStatus20*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingStatus20(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingStatus20 %p -> %p\n", q, p));
	*(tt__ImagingStatus20*)p = *(tt__ImagingStatus20*)q;
}

void tt__WhiteBalance::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WhiteBalanceMode(soap, &this->tt__WhiteBalance::Mode);
	soap_default_float(soap, &this->tt__WhiteBalance::CrGain);
	soap_default_float(soap, &this->tt__WhiteBalance::CbGain);
	this->tt__WhiteBalance::__size = 0;
	this->tt__WhiteBalance::__any = NULL;
	this->tt__WhiteBalance::__anyAttribute = NULL;
}

void tt__WhiteBalance::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WhiteBalance::Mode, SOAP_TYPE_tt__WhiteBalanceMode);
	soap_embedded(soap, &this->tt__WhiteBalance::CrGain, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__WhiteBalance::CbGain, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalance::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalance(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalance(struct soap *soap, const char *tag, int id, const tt__WhiteBalance *a, const char *type)
{
	if (((tt__WhiteBalance*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__WhiteBalance*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalance), "tt:WhiteBalance"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, &(a->tt__WhiteBalance::Mode), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:CrGain", -1, &(a->tt__WhiteBalance::CrGain), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:CbGain", -1, &(a->tt__WhiteBalance::CbGain), ""))
		return soap->error;
	if (a->tt__WhiteBalance::__any)
	{	int i;
		for (i = 0; i < a->tt__WhiteBalance::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__WhiteBalance::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalance::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalance(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalance * SOAP_FMAC4 soap_in_tt__WhiteBalance(struct soap *soap, const char *tag, tt__WhiteBalance *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalance *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalance, sizeof(tt__WhiteBalance), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalance)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalance *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__WhiteBalance*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_CrGain1 = 1;
	size_t soap_flag_CbGain1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", &(a->tt__WhiteBalance::Mode), "tt:WhiteBalanceMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_CrGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:CrGain", &(a->tt__WhiteBalance::CrGain), "xsd:float"))
				{	soap_flag_CrGain1--;
					continue;
				}
			if (soap_flag_CbGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:CbGain", &(a->tt__WhiteBalance::CbGain), "xsd:float"))
				{	soap_flag_CbGain1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__WhiteBalance::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__WhiteBalance::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__WhiteBalance::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__WhiteBalance::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__WhiteBalance::__any, "xsd:byte"))
				{	a->tt__WhiteBalance::__size++;
					a->tt__WhiteBalance::__any = NULL;
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
		if (a->tt__WhiteBalance::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__WhiteBalance::__size)
			a->tt__WhiteBalance::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__WhiteBalance::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalance *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalance, 0, sizeof(tt__WhiteBalance), 0, soap_copy_tt__WhiteBalance);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_CrGain1 > 0 || soap_flag_CbGain1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WhiteBalance::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalance);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalance", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalance::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalance(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalance * SOAP_FMAC4 soap_get_tt__WhiteBalance(struct soap *soap, tt__WhiteBalance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalance * SOAP_FMAC2 soap_instantiate_tt__WhiteBalance(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalance(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalance, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalance);
		if (size)
			*size = sizeof(tt__WhiteBalance);
		((tt__WhiteBalance*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalance, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalance);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalance*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalance*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalance(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalance %p -> %p\n", q, p));
	*(tt__WhiteBalance*)p = *(tt__WhiteBalance*)q;
}

void tt__ContinuousFocusOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ContinuousFocusOptions::Speed = NULL;
}

void tt__ContinuousFocusOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ContinuousFocusOptions::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ContinuousFocusOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ContinuousFocusOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ContinuousFocusOptions(struct soap *soap, const char *tag, int id, const tt__ContinuousFocusOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ContinuousFocusOptions), "tt:ContinuousFocusOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ContinuousFocusOptions::Speed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->tt__ContinuousFocusOptions::Speed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Speed"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ContinuousFocusOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ContinuousFocusOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__ContinuousFocusOptions * SOAP_FMAC4 soap_in_tt__ContinuousFocusOptions(struct soap *soap, const char *tag, tt__ContinuousFocusOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ContinuousFocusOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ContinuousFocusOptions, sizeof(tt__ContinuousFocusOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ContinuousFocusOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ContinuousFocusOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &(a->tt__ContinuousFocusOptions::Speed), "tt:FloatRange"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ContinuousFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ContinuousFocusOptions, 0, sizeof(tt__ContinuousFocusOptions), 0, soap_copy_tt__ContinuousFocusOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Speed1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ContinuousFocusOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ContinuousFocusOptions);
	if (this->soap_out(soap, tag?tag:"tt:ContinuousFocusOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ContinuousFocusOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ContinuousFocusOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__ContinuousFocusOptions * SOAP_FMAC4 soap_get_tt__ContinuousFocusOptions(struct soap *soap, tt__ContinuousFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ContinuousFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ContinuousFocusOptions * SOAP_FMAC2 soap_instantiate_tt__ContinuousFocusOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ContinuousFocusOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ContinuousFocusOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ContinuousFocusOptions);
		if (size)
			*size = sizeof(tt__ContinuousFocusOptions);
		((tt__ContinuousFocusOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ContinuousFocusOptions, n);
		if (size)
			*size = n * sizeof(tt__ContinuousFocusOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ContinuousFocusOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ContinuousFocusOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ContinuousFocusOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ContinuousFocusOptions %p -> %p\n", q, p));
	*(tt__ContinuousFocusOptions*)p = *(tt__ContinuousFocusOptions*)q;
}

void tt__RelativeFocusOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RelativeFocusOptions::Distance = NULL;
	this->tt__RelativeFocusOptions::Speed = NULL;
}

void tt__RelativeFocusOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__RelativeFocusOptions::Distance);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__RelativeFocusOptions::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelativeFocusOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelativeFocusOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocusOptions(struct soap *soap, const char *tag, int id, const tt__RelativeFocusOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocusOptions), "tt:RelativeFocusOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RelativeFocusOptions::Distance)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Distance", -1, &a->tt__RelativeFocusOptions::Distance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Distance"))
		return soap->error;
	if (a->tt__RelativeFocusOptions::Speed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &a->tt__RelativeFocusOptions::Speed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Speed"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RelativeFocusOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelativeFocusOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelativeFocusOptions * SOAP_FMAC4 soap_in_tt__RelativeFocusOptions(struct soap *soap, const char *tag, tt__RelativeFocusOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RelativeFocusOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocusOptions, sizeof(tt__RelativeFocusOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelativeFocusOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RelativeFocusOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Distance1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Distance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Distance", &(a->tt__RelativeFocusOptions::Distance), "tt:FloatRange"))
				{	soap_flag_Distance1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &(a->tt__RelativeFocusOptions::Speed), "tt:FloatRange"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RelativeFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocusOptions, 0, sizeof(tt__RelativeFocusOptions), 0, soap_copy_tt__RelativeFocusOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance1 > 0 || soap_flag_Speed1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RelativeFocusOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocusOptions);
	if (this->soap_out(soap, tag?tag:"tt:RelativeFocusOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelativeFocusOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelativeFocusOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelativeFocusOptions * SOAP_FMAC4 soap_get_tt__RelativeFocusOptions(struct soap *soap, tt__RelativeFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelativeFocusOptions * SOAP_FMAC2 soap_instantiate_tt__RelativeFocusOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelativeFocusOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelativeFocusOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelativeFocusOptions);
		if (size)
			*size = sizeof(tt__RelativeFocusOptions);
		((tt__RelativeFocusOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelativeFocusOptions, n);
		if (size)
			*size = n * sizeof(tt__RelativeFocusOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelativeFocusOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelativeFocusOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelativeFocusOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelativeFocusOptions %p -> %p\n", q, p));
	*(tt__RelativeFocusOptions*)p = *(tt__RelativeFocusOptions*)q;
}

void tt__AbsoluteFocusOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AbsoluteFocusOptions::Position = NULL;
	this->tt__AbsoluteFocusOptions::Speed = NULL;
}

void tt__AbsoluteFocusOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__AbsoluteFocusOptions::Position);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__AbsoluteFocusOptions::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AbsoluteFocusOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AbsoluteFocusOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AbsoluteFocusOptions(struct soap *soap, const char *tag, int id, const tt__AbsoluteFocusOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AbsoluteFocusOptions), "tt:AbsoluteFocusOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AbsoluteFocusOptions::Position)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Position", -1, &a->tt__AbsoluteFocusOptions::Position, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Position"))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:Speed", -1, &(a->tt__AbsoluteFocusOptions::Speed), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AbsoluteFocusOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AbsoluteFocusOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__AbsoluteFocusOptions * SOAP_FMAC4 soap_in_tt__AbsoluteFocusOptions(struct soap *soap, const char *tag, tt__AbsoluteFocusOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AbsoluteFocusOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AbsoluteFocusOptions, sizeof(tt__AbsoluteFocusOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AbsoluteFocusOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AbsoluteFocusOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Position", &(a->tt__AbsoluteFocusOptions::Position), "tt:FloatRange"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Speed", &(a->tt__AbsoluteFocusOptions::Speed), "tt:FloatRange"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AbsoluteFocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AbsoluteFocusOptions, 0, sizeof(tt__AbsoluteFocusOptions), 0, soap_copy_tt__AbsoluteFocusOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AbsoluteFocusOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AbsoluteFocusOptions);
	if (this->soap_out(soap, tag?tag:"tt:AbsoluteFocusOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AbsoluteFocusOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AbsoluteFocusOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__AbsoluteFocusOptions * SOAP_FMAC4 soap_get_tt__AbsoluteFocusOptions(struct soap *soap, tt__AbsoluteFocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AbsoluteFocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AbsoluteFocusOptions * SOAP_FMAC2 soap_instantiate_tt__AbsoluteFocusOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AbsoluteFocusOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AbsoluteFocusOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AbsoluteFocusOptions);
		if (size)
			*size = sizeof(tt__AbsoluteFocusOptions);
		((tt__AbsoluteFocusOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AbsoluteFocusOptions, n);
		if (size)
			*size = n * sizeof(tt__AbsoluteFocusOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AbsoluteFocusOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AbsoluteFocusOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AbsoluteFocusOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AbsoluteFocusOptions %p -> %p\n", q, p));
	*(tt__AbsoluteFocusOptions*)p = *(tt__AbsoluteFocusOptions*)q;
}

void tt__MoveOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MoveOptions::Absolute = NULL;
	this->tt__MoveOptions::Relative = NULL;
	this->tt__MoveOptions::Continuous = NULL;
}

void tt__MoveOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocusOptions(soap, &this->tt__MoveOptions::Absolute);
	soap_serialize_PointerTott__RelativeFocusOptions(soap, &this->tt__MoveOptions::Relative);
	soap_serialize_PointerTott__ContinuousFocusOptions(soap, &this->tt__MoveOptions::Continuous);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MoveOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MoveOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MoveOptions(struct soap *soap, const char *tag, int id, const tt__MoveOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MoveOptions), "tt:MoveOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", -1, &(a->tt__MoveOptions::Absolute), ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocusOptions(soap, "tt:Relative", -1, &(a->tt__MoveOptions::Relative), ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", -1, &(a->tt__MoveOptions::Continuous), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MoveOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MoveOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__MoveOptions * SOAP_FMAC4 soap_in_tt__MoveOptions(struct soap *soap, const char *tag, tt__MoveOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MoveOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MoveOptions, sizeof(tt__MoveOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MoveOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MoveOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Absolute1 = 1;
	size_t soap_flag_Relative1 = 1;
	size_t soap_flag_Continuous1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Absolute1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocusOptions(soap, "tt:Absolute", &(a->tt__MoveOptions::Absolute), "tt:AbsoluteFocusOptions"))
				{	soap_flag_Absolute1--;
					continue;
				}
			if (soap_flag_Relative1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocusOptions(soap, "tt:Relative", &(a->tt__MoveOptions::Relative), "tt:RelativeFocusOptions"))
				{	soap_flag_Relative1--;
					continue;
				}
			if (soap_flag_Continuous1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocusOptions(soap, "tt:Continuous", &(a->tt__MoveOptions::Continuous), "tt:ContinuousFocusOptions"))
				{	soap_flag_Continuous1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MoveOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MoveOptions, 0, sizeof(tt__MoveOptions), 0, soap_copy_tt__MoveOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MoveOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MoveOptions);
	if (this->soap_out(soap, tag?tag:"tt:MoveOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MoveOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MoveOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__MoveOptions * SOAP_FMAC4 soap_get_tt__MoveOptions(struct soap *soap, tt__MoveOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MoveOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MoveOptions * SOAP_FMAC2 soap_instantiate_tt__MoveOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MoveOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MoveOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MoveOptions);
		if (size)
			*size = sizeof(tt__MoveOptions);
		((tt__MoveOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MoveOptions, n);
		if (size)
			*size = n * sizeof(tt__MoveOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MoveOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MoveOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MoveOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MoveOptions %p -> %p\n", q, p));
	*(tt__MoveOptions*)p = *(tt__MoveOptions*)q;
}

void tt__ContinuousFocus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__ContinuousFocus::Speed);
}

void tt__ContinuousFocus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ContinuousFocus::Speed, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ContinuousFocus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ContinuousFocus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ContinuousFocus(struct soap *soap, const char *tag, int id, const tt__ContinuousFocus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ContinuousFocus), "tt:ContinuousFocus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_float(soap, "tt:Speed", -1, &(a->tt__ContinuousFocus::Speed), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ContinuousFocus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ContinuousFocus(soap, tag, this, type);
}

SOAP_FMAC3 tt__ContinuousFocus * SOAP_FMAC4 soap_in_tt__ContinuousFocus(struct soap *soap, const char *tag, tt__ContinuousFocus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ContinuousFocus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ContinuousFocus, sizeof(tt__ContinuousFocus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ContinuousFocus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ContinuousFocus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Speed", &(a->tt__ContinuousFocus::Speed), "xsd:float"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ContinuousFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ContinuousFocus, 0, sizeof(tt__ContinuousFocus), 0, soap_copy_tt__ContinuousFocus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Speed1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ContinuousFocus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ContinuousFocus);
	if (this->soap_out(soap, tag?tag:"tt:ContinuousFocus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ContinuousFocus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ContinuousFocus(soap, this, tag, type);
}

SOAP_FMAC3 tt__ContinuousFocus * SOAP_FMAC4 soap_get_tt__ContinuousFocus(struct soap *soap, tt__ContinuousFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ContinuousFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ContinuousFocus * SOAP_FMAC2 soap_instantiate_tt__ContinuousFocus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ContinuousFocus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ContinuousFocus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ContinuousFocus);
		if (size)
			*size = sizeof(tt__ContinuousFocus);
		((tt__ContinuousFocus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ContinuousFocus, n);
		if (size)
			*size = n * sizeof(tt__ContinuousFocus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ContinuousFocus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ContinuousFocus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ContinuousFocus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ContinuousFocus %p -> %p\n", q, p));
	*(tt__ContinuousFocus*)p = *(tt__ContinuousFocus*)q;
}

void tt__RelativeFocus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__RelativeFocus::Distance);
	this->tt__RelativeFocus::Speed = NULL;
}

void tt__RelativeFocus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__RelativeFocus::Distance, SOAP_TYPE_float);
	soap_serialize_PointerTofloat(soap, &this->tt__RelativeFocus::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelativeFocus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelativeFocus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelativeFocus(struct soap *soap, const char *tag, int id, const tt__RelativeFocus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelativeFocus), "tt:RelativeFocus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_float(soap, "tt:Distance", -1, &(a->tt__RelativeFocus::Distance), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Speed", -1, &(a->tt__RelativeFocus::Speed), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RelativeFocus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelativeFocus(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelativeFocus * SOAP_FMAC4 soap_in_tt__RelativeFocus(struct soap *soap, const char *tag, tt__RelativeFocus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RelativeFocus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelativeFocus, sizeof(tt__RelativeFocus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelativeFocus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RelativeFocus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Distance1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Distance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Distance", &(a->tt__RelativeFocus::Distance), "xsd:float"))
				{	soap_flag_Distance1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Speed", &(a->tt__RelativeFocus::Speed), "xsd:float"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RelativeFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelativeFocus, 0, sizeof(tt__RelativeFocus), 0, soap_copy_tt__RelativeFocus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Distance1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RelativeFocus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelativeFocus);
	if (this->soap_out(soap, tag?tag:"tt:RelativeFocus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelativeFocus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelativeFocus(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelativeFocus * SOAP_FMAC4 soap_get_tt__RelativeFocus(struct soap *soap, tt__RelativeFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelativeFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelativeFocus * SOAP_FMAC2 soap_instantiate_tt__RelativeFocus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelativeFocus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelativeFocus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelativeFocus);
		if (size)
			*size = sizeof(tt__RelativeFocus);
		((tt__RelativeFocus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelativeFocus, n);
		if (size)
			*size = n * sizeof(tt__RelativeFocus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelativeFocus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelativeFocus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelativeFocus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelativeFocus %p -> %p\n", q, p));
	*(tt__RelativeFocus*)p = *(tt__RelativeFocus*)q;
}

void tt__AbsoluteFocus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__AbsoluteFocus::Position);
	this->tt__AbsoluteFocus::Speed = NULL;
}

void tt__AbsoluteFocus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__AbsoluteFocus::Position, SOAP_TYPE_float);
	soap_serialize_PointerTofloat(soap, &this->tt__AbsoluteFocus::Speed);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AbsoluteFocus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AbsoluteFocus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AbsoluteFocus(struct soap *soap, const char *tag, int id, const tt__AbsoluteFocus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AbsoluteFocus), "tt:AbsoluteFocus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_float(soap, "tt:Position", -1, &(a->tt__AbsoluteFocus::Position), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Speed", -1, &(a->tt__AbsoluteFocus::Speed), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AbsoluteFocus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AbsoluteFocus(soap, tag, this, type);
}

SOAP_FMAC3 tt__AbsoluteFocus * SOAP_FMAC4 soap_in_tt__AbsoluteFocus(struct soap *soap, const char *tag, tt__AbsoluteFocus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AbsoluteFocus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AbsoluteFocus, sizeof(tt__AbsoluteFocus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AbsoluteFocus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AbsoluteFocus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_Speed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &(a->tt__AbsoluteFocus::Position), "xsd:float"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Speed", &(a->tt__AbsoluteFocus::Speed), "xsd:float"))
				{	soap_flag_Speed1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AbsoluteFocus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AbsoluteFocus, 0, sizeof(tt__AbsoluteFocus), 0, soap_copy_tt__AbsoluteFocus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AbsoluteFocus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AbsoluteFocus);
	if (this->soap_out(soap, tag?tag:"tt:AbsoluteFocus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AbsoluteFocus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AbsoluteFocus(soap, this, tag, type);
}

SOAP_FMAC3 tt__AbsoluteFocus * SOAP_FMAC4 soap_get_tt__AbsoluteFocus(struct soap *soap, tt__AbsoluteFocus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AbsoluteFocus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AbsoluteFocus * SOAP_FMAC2 soap_instantiate_tt__AbsoluteFocus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AbsoluteFocus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AbsoluteFocus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AbsoluteFocus);
		if (size)
			*size = sizeof(tt__AbsoluteFocus);
		((tt__AbsoluteFocus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AbsoluteFocus, n);
		if (size)
			*size = n * sizeof(tt__AbsoluteFocus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AbsoluteFocus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AbsoluteFocus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AbsoluteFocus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AbsoluteFocus %p -> %p\n", q, p));
	*(tt__AbsoluteFocus*)p = *(tt__AbsoluteFocus*)q;
}

void tt__FocusMove::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusMove::Absolute = NULL;
	this->tt__FocusMove::Relative = NULL;
	this->tt__FocusMove::Continuous = NULL;
}

void tt__FocusMove::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AbsoluteFocus(soap, &this->tt__FocusMove::Absolute);
	soap_serialize_PointerTott__RelativeFocus(soap, &this->tt__FocusMove::Relative);
	soap_serialize_PointerTott__ContinuousFocus(soap, &this->tt__FocusMove::Continuous);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusMove::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusMove(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusMove(struct soap *soap, const char *tag, int id, const tt__FocusMove *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusMove), "tt:FocusMove"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AbsoluteFocus(soap, "tt:Absolute", -1, &(a->tt__FocusMove::Absolute), ""))
		return soap->error;
	if (soap_out_PointerTott__RelativeFocus(soap, "tt:Relative", -1, &(a->tt__FocusMove::Relative), ""))
		return soap->error;
	if (soap_out_PointerTott__ContinuousFocus(soap, "tt:Continuous", -1, &(a->tt__FocusMove::Continuous), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FocusMove::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusMove(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusMove * SOAP_FMAC4 soap_in_tt__FocusMove(struct soap *soap, const char *tag, tt__FocusMove *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusMove *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusMove, sizeof(tt__FocusMove), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusMove)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusMove *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Absolute1 = 1;
	size_t soap_flag_Relative1 = 1;
	size_t soap_flag_Continuous1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Absolute1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AbsoluteFocus(soap, "tt:Absolute", &(a->tt__FocusMove::Absolute), "tt:AbsoluteFocus"))
				{	soap_flag_Absolute1--;
					continue;
				}
			if (soap_flag_Relative1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelativeFocus(soap, "tt:Relative", &(a->tt__FocusMove::Relative), "tt:RelativeFocus"))
				{	soap_flag_Relative1--;
					continue;
				}
			if (soap_flag_Continuous1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ContinuousFocus(soap, "tt:Continuous", &(a->tt__FocusMove::Continuous), "tt:ContinuousFocus"))
				{	soap_flag_Continuous1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusMove *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusMove, 0, sizeof(tt__FocusMove), 0, soap_copy_tt__FocusMove);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FocusMove::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusMove);
	if (this->soap_out(soap, tag?tag:"tt:FocusMove", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusMove::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusMove(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusMove * SOAP_FMAC4 soap_get_tt__FocusMove(struct soap *soap, tt__FocusMove *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusMove(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusMove * SOAP_FMAC2 soap_instantiate_tt__FocusMove(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusMove(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusMove, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusMove);
		if (size)
			*size = sizeof(tt__FocusMove);
		((tt__FocusMove*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusMove, n);
		if (size)
			*size = n * sizeof(tt__FocusMove);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusMove*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusMove*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusMove(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusMove %p -> %p\n", q, p));
	*(tt__FocusMove*)p = *(tt__FocusMove*)q;
}

void tt__WhiteBalanceOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WhiteBalanceOptions::__sizeMode = 0;
	this->tt__WhiteBalanceOptions::Mode = NULL;
	this->tt__WhiteBalanceOptions::YrGain = NULL;
	this->tt__WhiteBalanceOptions::YbGain = NULL;
}

void tt__WhiteBalanceOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__WhiteBalanceOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__WhiteBalanceOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__WhiteBalanceOptions::Mode + i, SOAP_TYPE_tt__WhiteBalanceMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WhiteBalanceOptions::YrGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WhiteBalanceOptions::YbGain);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WhiteBalanceOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WhiteBalanceOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WhiteBalanceOptions(struct soap *soap, const char *tag, int id, const tt__WhiteBalanceOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WhiteBalanceOptions), "tt:WhiteBalanceOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WhiteBalanceOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__WhiteBalanceOptions::__sizeMode; i++)
			if (soap_out_tt__WhiteBalanceMode(soap, "tt:Mode", -1, a->tt__WhiteBalanceOptions::Mode + i, ""))
				return soap->error;
	}
	if (a->tt__WhiteBalanceOptions::YrGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YrGain", -1, &a->tt__WhiteBalanceOptions::YrGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YrGain"))
		return soap->error;
	if (a->tt__WhiteBalanceOptions::YbGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YbGain", -1, &a->tt__WhiteBalanceOptions::YbGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YbGain"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WhiteBalanceOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WhiteBalanceOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions * SOAP_FMAC4 soap_in_tt__WhiteBalanceOptions(struct soap *soap, const char *tag, tt__WhiteBalanceOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WhiteBalanceOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WhiteBalanceOptions, sizeof(tt__WhiteBalanceOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WhiteBalanceOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WhiteBalanceOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_YrGain1 = 1;
	size_t soap_flag_YbGain1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__WhiteBalanceOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__WhiteBalanceOptions::Mode = (enum tt__WhiteBalanceMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__WhiteBalanceMode));
					if (a->tt__WhiteBalanceOptions::Mode == NULL)
						return NULL;
					soap_default_tt__WhiteBalanceMode(soap, a->tt__WhiteBalanceOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WhiteBalanceMode(soap, "tt:Mode", a->tt__WhiteBalanceOptions::Mode, "tt:WhiteBalanceMode"))
				{	a->tt__WhiteBalanceOptions::__sizeMode++;
					a->tt__WhiteBalanceOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_YrGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YrGain", &(a->tt__WhiteBalanceOptions::YrGain), "tt:FloatRange"))
				{	soap_flag_YrGain1--;
					continue;
				}
			if (soap_flag_YbGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YbGain", &(a->tt__WhiteBalanceOptions::YbGain), "tt:FloatRange"))
				{	soap_flag_YbGain1--;
					continue;
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
		if (a->tt__WhiteBalanceOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__WhiteBalanceOptions::__sizeMode)
			a->tt__WhiteBalanceOptions::Mode = (enum tt__WhiteBalanceMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__WhiteBalanceOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WhiteBalanceOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WhiteBalanceOptions, 0, sizeof(tt__WhiteBalanceOptions), 0, soap_copy_tt__WhiteBalanceOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__WhiteBalanceOptions::__sizeMode < 1 || soap_flag_YrGain1 > 0 || soap_flag_YbGain1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WhiteBalanceOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WhiteBalanceOptions);
	if (this->soap_out(soap, tag?tag:"tt:WhiteBalanceOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WhiteBalanceOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WhiteBalanceOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__WhiteBalanceOptions * SOAP_FMAC4 soap_get_tt__WhiteBalanceOptions(struct soap *soap, tt__WhiteBalanceOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WhiteBalanceOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WhiteBalanceOptions * SOAP_FMAC2 soap_instantiate_tt__WhiteBalanceOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WhiteBalanceOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WhiteBalanceOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WhiteBalanceOptions);
		if (size)
			*size = sizeof(tt__WhiteBalanceOptions);
		((tt__WhiteBalanceOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WhiteBalanceOptions, n);
		if (size)
			*size = n * sizeof(tt__WhiteBalanceOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WhiteBalanceOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WhiteBalanceOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WhiteBalanceOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WhiteBalanceOptions %p -> %p\n", q, p));
	*(tt__WhiteBalanceOptions*)p = *(tt__WhiteBalanceOptions*)q;
}

void tt__ExposureOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ExposureOptions::__sizeMode = 0;
	this->tt__ExposureOptions::Mode = NULL;
	this->tt__ExposureOptions::__sizePriority = 0;
	this->tt__ExposureOptions::Priority = NULL;
	this->tt__ExposureOptions::MinExposureTime = NULL;
	this->tt__ExposureOptions::MaxExposureTime = NULL;
	this->tt__ExposureOptions::MinGain = NULL;
	this->tt__ExposureOptions::MaxGain = NULL;
	this->tt__ExposureOptions::MinIris = NULL;
	this->tt__ExposureOptions::MaxIris = NULL;
	this->tt__ExposureOptions::ExposureTime = NULL;
	this->tt__ExposureOptions::Gain = NULL;
	this->tt__ExposureOptions::Iris = NULL;
}

void tt__ExposureOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ExposureOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__ExposureOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__ExposureOptions::Mode + i, SOAP_TYPE_tt__ExposureMode);
		}
	}
	if (this->tt__ExposureOptions::Priority)
	{	int i;
		for (i = 0; i < this->tt__ExposureOptions::__sizePriority; i++)
		{
			soap_embedded(soap, this->tt__ExposureOptions::Priority + i, SOAP_TYPE_tt__ExposurePriority);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MinExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MaxExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MinGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MaxGain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MinIris);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::MaxIris);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::ExposureTime);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::Gain);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ExposureOptions::Iris);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ExposureOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ExposureOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ExposureOptions(struct soap *soap, const char *tag, int id, const tt__ExposureOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ExposureOptions), "tt:ExposureOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ExposureOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__ExposureOptions::__sizeMode; i++)
			if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, a->tt__ExposureOptions::Mode + i, ""))
				return soap->error;
	}
	if (a->tt__ExposureOptions::Priority)
	{	int i;
		for (i = 0; i < a->tt__ExposureOptions::__sizePriority; i++)
			if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, a->tt__ExposureOptions::Priority + i, ""))
				return soap->error;
	}
	if (a->tt__ExposureOptions::MinExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinExposureTime", -1, &a->tt__ExposureOptions::MinExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinExposureTime"))
		return soap->error;
	if (a->tt__ExposureOptions::MaxExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxExposureTime", -1, &a->tt__ExposureOptions::MaxExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxExposureTime"))
		return soap->error;
	if (a->tt__ExposureOptions::MinGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinGain", -1, &a->tt__ExposureOptions::MinGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinGain"))
		return soap->error;
	if (a->tt__ExposureOptions::MaxGain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxGain", -1, &a->tt__ExposureOptions::MaxGain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxGain"))
		return soap->error;
	if (a->tt__ExposureOptions::MinIris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MinIris", -1, &a->tt__ExposureOptions::MinIris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinIris"))
		return soap->error;
	if (a->tt__ExposureOptions::MaxIris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:MaxIris", -1, &a->tt__ExposureOptions::MaxIris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxIris"))
		return soap->error;
	if (a->tt__ExposureOptions::ExposureTime)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:ExposureTime", -1, &a->tt__ExposureOptions::ExposureTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ExposureTime"))
		return soap->error;
	if (a->tt__ExposureOptions::Gain)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Gain", -1, &a->tt__ExposureOptions::Gain, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Gain"))
		return soap->error;
	if (a->tt__ExposureOptions::Iris)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Iris", -1, &a->tt__ExposureOptions::Iris, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Iris"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ExposureOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ExposureOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__ExposureOptions * SOAP_FMAC4 soap_in_tt__ExposureOptions(struct soap *soap, const char *tag, tt__ExposureOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ExposureOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ExposureOptions, sizeof(tt__ExposureOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ExposureOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ExposureOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	struct soap_blist *soap_blist_Priority1 = NULL;
	size_t soap_flag_MinExposureTime1 = 1;
	size_t soap_flag_MaxExposureTime1 = 1;
	size_t soap_flag_MinGain1 = 1;
	size_t soap_flag_MaxGain1 = 1;
	size_t soap_flag_MinIris1 = 1;
	size_t soap_flag_MaxIris1 = 1;
	size_t soap_flag_ExposureTime1 = 1;
	size_t soap_flag_Gain1 = 1;
	size_t soap_flag_Iris1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__ExposureOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__ExposureOptions::Mode = (enum tt__ExposureMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__ExposureMode));
					if (a->tt__ExposureOptions::Mode == NULL)
						return NULL;
					soap_default_tt__ExposureMode(soap, a->tt__ExposureOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", a->tt__ExposureOptions::Mode, "tt:ExposureMode"))
				{	a->tt__ExposureOptions::__sizeMode++;
					a->tt__ExposureOptions::Mode = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Priority", 1, NULL))
			{	if (a->tt__ExposureOptions::Priority == NULL)
				{	if (soap_blist_Priority1 == NULL)
						soap_blist_Priority1 = soap_new_block(soap);
					a->tt__ExposureOptions::Priority = (enum tt__ExposurePriority *)soap_push_block(soap, soap_blist_Priority1, sizeof(enum tt__ExposurePriority));
					if (a->tt__ExposureOptions::Priority == NULL)
						return NULL;
					soap_default_tt__ExposurePriority(soap, a->tt__ExposureOptions::Priority);
				}
				soap_revert(soap);
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", a->tt__ExposureOptions::Priority, "tt:ExposurePriority"))
				{	a->tt__ExposureOptions::__sizePriority++;
					a->tt__ExposureOptions::Priority = NULL;
					continue;
				}
			}
			if (soap_flag_MinExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinExposureTime", &(a->tt__ExposureOptions::MinExposureTime), "tt:FloatRange"))
				{	soap_flag_MinExposureTime1--;
					continue;
				}
			if (soap_flag_MaxExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxExposureTime", &(a->tt__ExposureOptions::MaxExposureTime), "tt:FloatRange"))
				{	soap_flag_MaxExposureTime1--;
					continue;
				}
			if (soap_flag_MinGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinGain", &(a->tt__ExposureOptions::MinGain), "tt:FloatRange"))
				{	soap_flag_MinGain1--;
					continue;
				}
			if (soap_flag_MaxGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxGain", &(a->tt__ExposureOptions::MaxGain), "tt:FloatRange"))
				{	soap_flag_MaxGain1--;
					continue;
				}
			if (soap_flag_MinIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MinIris", &(a->tt__ExposureOptions::MinIris), "tt:FloatRange"))
				{	soap_flag_MinIris1--;
					continue;
				}
			if (soap_flag_MaxIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:MaxIris", &(a->tt__ExposureOptions::MaxIris), "tt:FloatRange"))
				{	soap_flag_MaxIris1--;
					continue;
				}
			if (soap_flag_ExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ExposureTime", &(a->tt__ExposureOptions::ExposureTime), "tt:FloatRange"))
				{	soap_flag_ExposureTime1--;
					continue;
				}
			if (soap_flag_Gain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Gain", &(a->tt__ExposureOptions::Gain), "tt:FloatRange"))
				{	soap_flag_Gain1--;
					continue;
				}
			if (soap_flag_Iris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Iris", &(a->tt__ExposureOptions::Iris), "tt:FloatRange"))
				{	soap_flag_Iris1--;
					continue;
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
		if (a->tt__ExposureOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__ExposureOptions::__sizeMode)
			a->tt__ExposureOptions::Mode = (enum tt__ExposureMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__ExposureOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (a->tt__ExposureOptions::Priority)
			soap_pop_block(soap, soap_blist_Priority1);
		if (a->tt__ExposureOptions::__sizePriority)
			a->tt__ExposureOptions::Priority = (enum tt__ExposurePriority *)soap_save_block(soap, soap_blist_Priority1, NULL, 1);
		else
		{	a->tt__ExposureOptions::Priority = NULL;
			if (soap_blist_Priority1)
				soap_end_block(soap, soap_blist_Priority1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ExposureOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ExposureOptions, 0, sizeof(tt__ExposureOptions), 0, soap_copy_tt__ExposureOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__ExposureOptions::__sizeMode < 1 || a->tt__ExposureOptions::__sizePriority < 1 || soap_flag_MinExposureTime1 > 0 || soap_flag_MaxExposureTime1 > 0 || soap_flag_MinGain1 > 0 || soap_flag_MaxGain1 > 0 || soap_flag_MinIris1 > 0 || soap_flag_MaxIris1 > 0 || soap_flag_ExposureTime1 > 0 || soap_flag_Gain1 > 0 || soap_flag_Iris1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ExposureOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ExposureOptions);
	if (this->soap_out(soap, tag?tag:"tt:ExposureOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ExposureOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ExposureOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__ExposureOptions * SOAP_FMAC4 soap_get_tt__ExposureOptions(struct soap *soap, tt__ExposureOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ExposureOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ExposureOptions * SOAP_FMAC2 soap_instantiate_tt__ExposureOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ExposureOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ExposureOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ExposureOptions);
		if (size)
			*size = sizeof(tt__ExposureOptions);
		((tt__ExposureOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ExposureOptions, n);
		if (size)
			*size = n * sizeof(tt__ExposureOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ExposureOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ExposureOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ExposureOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ExposureOptions %p -> %p\n", q, p));
	*(tt__ExposureOptions*)p = *(tt__ExposureOptions*)q;
}

void tt__FocusOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusOptions::__sizeAutoFocusModes = 0;
	this->tt__FocusOptions::AutoFocusModes = NULL;
	this->tt__FocusOptions::DefaultSpeed = NULL;
	this->tt__FocusOptions::NearLimit = NULL;
	this->tt__FocusOptions::FarLimit = NULL;
}

void tt__FocusOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FocusOptions::AutoFocusModes)
	{	int i;
		for (i = 0; i < this->tt__FocusOptions::__sizeAutoFocusModes; i++)
		{
			soap_embedded(soap, this->tt__FocusOptions::AutoFocusModes + i, SOAP_TYPE_tt__AutoFocusMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions::DefaultSpeed);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions::NearLimit);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions::FarLimit);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions(struct soap *soap, const char *tag, int id, const tt__FocusOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions), "tt:FocusOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FocusOptions::AutoFocusModes)
	{	int i;
		for (i = 0; i < a->tt__FocusOptions::__sizeAutoFocusModes; i++)
			if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusModes", -1, a->tt__FocusOptions::AutoFocusModes + i, ""))
				return soap->error;
	}
	if (a->tt__FocusOptions::DefaultSpeed)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:DefaultSpeed", -1, &a->tt__FocusOptions::DefaultSpeed, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:DefaultSpeed"))
		return soap->error;
	if (a->tt__FocusOptions::NearLimit)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:NearLimit", -1, &a->tt__FocusOptions::NearLimit, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:NearLimit"))
		return soap->error;
	if (a->tt__FocusOptions::FarLimit)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:FarLimit", -1, &a->tt__FocusOptions::FarLimit, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FarLimit"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FocusOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusOptions * SOAP_FMAC4 soap_in_tt__FocusOptions(struct soap *soap, const char *tag, tt__FocusOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions, sizeof(tt__FocusOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_AutoFocusModes1 = NULL;
	size_t soap_flag_DefaultSpeed1 = 1;
	size_t soap_flag_NearLimit1 = 1;
	size_t soap_flag_FarLimit1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AutoFocusModes", 1, NULL))
			{	if (a->tt__FocusOptions::AutoFocusModes == NULL)
				{	if (soap_blist_AutoFocusModes1 == NULL)
						soap_blist_AutoFocusModes1 = soap_new_block(soap);
					a->tt__FocusOptions::AutoFocusModes = (enum tt__AutoFocusMode *)soap_push_block(soap, soap_blist_AutoFocusModes1, sizeof(enum tt__AutoFocusMode));
					if (a->tt__FocusOptions::AutoFocusModes == NULL)
						return NULL;
					soap_default_tt__AutoFocusMode(soap, a->tt__FocusOptions::AutoFocusModes);
				}
				soap_revert(soap);
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusModes", a->tt__FocusOptions::AutoFocusModes, "tt:AutoFocusMode"))
				{	a->tt__FocusOptions::__sizeAutoFocusModes++;
					a->tt__FocusOptions::AutoFocusModes = NULL;
					continue;
				}
			}
			if (soap_flag_DefaultSpeed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:DefaultSpeed", &(a->tt__FocusOptions::DefaultSpeed), "tt:FloatRange"))
				{	soap_flag_DefaultSpeed1--;
					continue;
				}
			if (soap_flag_NearLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:NearLimit", &(a->tt__FocusOptions::NearLimit), "tt:FloatRange"))
				{	soap_flag_NearLimit1--;
					continue;
				}
			if (soap_flag_FarLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:FarLimit", &(a->tt__FocusOptions::FarLimit), "tt:FloatRange"))
				{	soap_flag_FarLimit1--;
					continue;
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
		if (a->tt__FocusOptions::AutoFocusModes)
			soap_pop_block(soap, soap_blist_AutoFocusModes1);
		if (a->tt__FocusOptions::__sizeAutoFocusModes)
			a->tt__FocusOptions::AutoFocusModes = (enum tt__AutoFocusMode *)soap_save_block(soap, soap_blist_AutoFocusModes1, NULL, 1);
		else
		{	a->tt__FocusOptions::AutoFocusModes = NULL;
			if (soap_blist_AutoFocusModes1)
				soap_end_block(soap, soap_blist_AutoFocusModes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions, 0, sizeof(tt__FocusOptions), 0, soap_copy_tt__FocusOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DefaultSpeed1 > 0 || soap_flag_NearLimit1 > 0 || soap_flag_FarLimit1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FocusOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions);
	if (this->soap_out(soap, tag?tag:"tt:FocusOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusOptions * SOAP_FMAC4 soap_get_tt__FocusOptions(struct soap *soap, tt__FocusOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusOptions * SOAP_FMAC2 soap_instantiate_tt__FocusOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusOptions);
		if (size)
			*size = sizeof(tt__FocusOptions);
		((tt__FocusOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusOptions, n);
		if (size)
			*size = n * sizeof(tt__FocusOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusOptions %p -> %p\n", q, p));
	*(tt__FocusOptions*)p = *(tt__FocusOptions*)q;
}

void tt__BacklightCompensationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__BacklightCompensationOptions::__sizeMode = 0;
	this->tt__BacklightCompensationOptions::Mode = NULL;
	this->tt__BacklightCompensationOptions::Level = NULL;
}

void tt__BacklightCompensationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__BacklightCompensationOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__BacklightCompensationOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__BacklightCompensationOptions::Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__BacklightCompensationOptions::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BacklightCompensationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BacklightCompensationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensationOptions(struct soap *soap, const char *tag, int id, const tt__BacklightCompensationOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensationOptions), "tt:BacklightCompensationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__BacklightCompensationOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__BacklightCompensationOptions::__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->tt__BacklightCompensationOptions::Mode + i, ""))
				return soap->error;
	}
	if (a->tt__BacklightCompensationOptions::Level)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->tt__BacklightCompensationOptions::Level, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Level"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BacklightCompensationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BacklightCompensationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__BacklightCompensationOptions * SOAP_FMAC4 soap_in_tt__BacklightCompensationOptions(struct soap *soap, const char *tag, tt__BacklightCompensationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BacklightCompensationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensationOptions, sizeof(tt__BacklightCompensationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BacklightCompensationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BacklightCompensationOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__BacklightCompensationOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__BacklightCompensationOptions::Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__WideDynamicMode));
					if (a->tt__BacklightCompensationOptions::Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->tt__BacklightCompensationOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->tt__BacklightCompensationOptions::Mode, "tt:WideDynamicMode"))
				{	a->tt__BacklightCompensationOptions::__sizeMode++;
					a->tt__BacklightCompensationOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &(a->tt__BacklightCompensationOptions::Level), "tt:FloatRange"))
				{	soap_flag_Level1--;
					continue;
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
		if (a->tt__BacklightCompensationOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__BacklightCompensationOptions::__sizeMode)
			a->tt__BacklightCompensationOptions::Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__BacklightCompensationOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__BacklightCompensationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensationOptions, 0, sizeof(tt__BacklightCompensationOptions), 0, soap_copy_tt__BacklightCompensationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__BacklightCompensationOptions::__sizeMode < 1 || soap_flag_Level1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BacklightCompensationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensationOptions);
	if (this->soap_out(soap, tag?tag:"tt:BacklightCompensationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BacklightCompensationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BacklightCompensationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__BacklightCompensationOptions * SOAP_FMAC4 soap_get_tt__BacklightCompensationOptions(struct soap *soap, tt__BacklightCompensationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BacklightCompensationOptions * SOAP_FMAC2 soap_instantiate_tt__BacklightCompensationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BacklightCompensationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BacklightCompensationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BacklightCompensationOptions);
		if (size)
			*size = sizeof(tt__BacklightCompensationOptions);
		((tt__BacklightCompensationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BacklightCompensationOptions, n);
		if (size)
			*size = n * sizeof(tt__BacklightCompensationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BacklightCompensationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BacklightCompensationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BacklightCompensationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BacklightCompensationOptions %p -> %p\n", q, p));
	*(tt__BacklightCompensationOptions*)p = *(tt__BacklightCompensationOptions*)q;
}

void tt__WideDynamicRangeOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__WideDynamicRangeOptions::__sizeMode = 0;
	this->tt__WideDynamicRangeOptions::Mode = NULL;
	this->tt__WideDynamicRangeOptions::Level = NULL;
}

void tt__WideDynamicRangeOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__WideDynamicRangeOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__WideDynamicRangeOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__WideDynamicRangeOptions::Mode + i, SOAP_TYPE_tt__WideDynamicMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__WideDynamicRangeOptions::Level);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WideDynamicRangeOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WideDynamicRangeOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRangeOptions(struct soap *soap, const char *tag, int id, const tt__WideDynamicRangeOptions *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRangeOptions), "tt:WideDynamicRangeOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__WideDynamicRangeOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__WideDynamicRangeOptions::__sizeMode; i++)
			if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, a->tt__WideDynamicRangeOptions::Mode + i, ""))
				return soap->error;
	}
	if (a->tt__WideDynamicRangeOptions::Level)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Level", -1, &a->tt__WideDynamicRangeOptions::Level, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Level"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WideDynamicRangeOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WideDynamicRangeOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__WideDynamicRangeOptions * SOAP_FMAC4 soap_in_tt__WideDynamicRangeOptions(struct soap *soap, const char *tag, tt__WideDynamicRangeOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WideDynamicRangeOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRangeOptions, sizeof(tt__WideDynamicRangeOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WideDynamicRangeOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WideDynamicRangeOptions *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__WideDynamicRangeOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__WideDynamicRangeOptions::Mode = (enum tt__WideDynamicMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__WideDynamicMode));
					if (a->tt__WideDynamicRangeOptions::Mode == NULL)
						return NULL;
					soap_default_tt__WideDynamicMode(soap, a->tt__WideDynamicRangeOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", a->tt__WideDynamicRangeOptions::Mode, "tt:WideDynamicMode"))
				{	a->tt__WideDynamicRangeOptions::__sizeMode++;
					a->tt__WideDynamicRangeOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Level", &(a->tt__WideDynamicRangeOptions::Level), "tt:FloatRange"))
				{	soap_flag_Level1--;
					continue;
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
		if (a->tt__WideDynamicRangeOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__WideDynamicRangeOptions::__sizeMode)
			a->tt__WideDynamicRangeOptions::Mode = (enum tt__WideDynamicMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__WideDynamicRangeOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WideDynamicRangeOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRangeOptions, 0, sizeof(tt__WideDynamicRangeOptions), 0, soap_copy_tt__WideDynamicRangeOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__WideDynamicRangeOptions::__sizeMode < 1 || soap_flag_Level1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WideDynamicRangeOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRangeOptions);
	if (this->soap_out(soap, tag?tag:"tt:WideDynamicRangeOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WideDynamicRangeOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WideDynamicRangeOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__WideDynamicRangeOptions * SOAP_FMAC4 soap_get_tt__WideDynamicRangeOptions(struct soap *soap, tt__WideDynamicRangeOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRangeOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WideDynamicRangeOptions * SOAP_FMAC2 soap_instantiate_tt__WideDynamicRangeOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WideDynamicRangeOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WideDynamicRangeOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WideDynamicRangeOptions);
		if (size)
			*size = sizeof(tt__WideDynamicRangeOptions);
		((tt__WideDynamicRangeOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WideDynamicRangeOptions, n);
		if (size)
			*size = n * sizeof(tt__WideDynamicRangeOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WideDynamicRangeOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WideDynamicRangeOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WideDynamicRangeOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WideDynamicRangeOptions %p -> %p\n", q, p));
	*(tt__WideDynamicRangeOptions*)p = *(tt__WideDynamicRangeOptions*)q;
}

void tt__ImagingOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingOptions::BacklightCompensation = NULL;
	this->tt__ImagingOptions::Brightness = NULL;
	this->tt__ImagingOptions::ColorSaturation = NULL;
	this->tt__ImagingOptions::Contrast = NULL;
	this->tt__ImagingOptions::Exposure = NULL;
	this->tt__ImagingOptions::Focus = NULL;
	this->tt__ImagingOptions::__sizeIrCutFilterModes = 0;
	this->tt__ImagingOptions::IrCutFilterModes = NULL;
	this->tt__ImagingOptions::Sharpness = NULL;
	this->tt__ImagingOptions::WideDynamicRange = NULL;
	this->tt__ImagingOptions::WhiteBalance = NULL;
	this->tt__ImagingOptions::__size = 0;
	this->tt__ImagingOptions::__any = NULL;
	this->tt__ImagingOptions::__anyAttribute = NULL;
}

void tt__ImagingOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensationOptions(soap, &this->tt__ImagingOptions::BacklightCompensation);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions::Brightness);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions::ColorSaturation);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions::Contrast);
	soap_serialize_PointerTott__ExposureOptions(soap, &this->tt__ImagingOptions::Exposure);
	soap_serialize_PointerTott__FocusOptions(soap, &this->tt__ImagingOptions::Focus);
	if (this->tt__ImagingOptions::IrCutFilterModes)
	{	int i;
		for (i = 0; i < this->tt__ImagingOptions::__sizeIrCutFilterModes; i++)
		{
			soap_embedded(soap, this->tt__ImagingOptions::IrCutFilterModes + i, SOAP_TYPE_tt__IrCutFilterMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__ImagingOptions::Sharpness);
	soap_serialize_PointerTott__WideDynamicRangeOptions(soap, &this->tt__ImagingOptions::WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalanceOptions(soap, &this->tt__ImagingOptions::WhiteBalance);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingOptions(struct soap *soap, const char *tag, int id, const tt__ImagingOptions *a, const char *type)
{
	if (((tt__ImagingOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingOptions), "tt:ImagingOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingOptions::BacklightCompensation)
	{	if (soap_out_PointerTott__BacklightCompensationOptions(soap, "tt:BacklightCompensation", -1, &a->tt__ImagingOptions::BacklightCompensation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BacklightCompensation"))
		return soap->error;
	if (a->tt__ImagingOptions::Brightness)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Brightness", -1, &a->tt__ImagingOptions::Brightness, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Brightness"))
		return soap->error;
	if (a->tt__ImagingOptions::ColorSaturation)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:ColorSaturation", -1, &a->tt__ImagingOptions::ColorSaturation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ColorSaturation"))
		return soap->error;
	if (a->tt__ImagingOptions::Contrast)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Contrast", -1, &a->tt__ImagingOptions::Contrast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Contrast"))
		return soap->error;
	if (a->tt__ImagingOptions::Exposure)
	{	if (soap_out_PointerTott__ExposureOptions(soap, "tt:Exposure", -1, &a->tt__ImagingOptions::Exposure, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Exposure"))
		return soap->error;
	if (a->tt__ImagingOptions::Focus)
	{	if (soap_out_PointerTott__FocusOptions(soap, "tt:Focus", -1, &a->tt__ImagingOptions::Focus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Focus"))
		return soap->error;
	if (a->tt__ImagingOptions::IrCutFilterModes)
	{	int i;
		for (i = 0; i < a->tt__ImagingOptions::__sizeIrCutFilterModes; i++)
			if (soap_out_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", -1, a->tt__ImagingOptions::IrCutFilterModes + i, ""))
				return soap->error;
	}
	if (a->tt__ImagingOptions::Sharpness)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:Sharpness", -1, &a->tt__ImagingOptions::Sharpness, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Sharpness"))
		return soap->error;
	if (a->tt__ImagingOptions::WideDynamicRange)
	{	if (soap_out_PointerTott__WideDynamicRangeOptions(soap, "tt:WideDynamicRange", -1, &a->tt__ImagingOptions::WideDynamicRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:WideDynamicRange"))
		return soap->error;
	if (a->tt__ImagingOptions::WhiteBalance)
	{	if (soap_out_PointerTott__WhiteBalanceOptions(soap, "tt:WhiteBalance", -1, &a->tt__ImagingOptions::WhiteBalance, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:WhiteBalance"))
		return soap->error;
	if (a->tt__ImagingOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingOptions * SOAP_FMAC4 soap_in_tt__ImagingOptions(struct soap *soap, const char *tag, tt__ImagingOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingOptions, sizeof(tt__ImagingOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_BacklightCompensation1 = 1;
	size_t soap_flag_Brightness1 = 1;
	size_t soap_flag_ColorSaturation1 = 1;
	size_t soap_flag_Contrast1 = 1;
	size_t soap_flag_Exposure1 = 1;
	size_t soap_flag_Focus1 = 1;
	struct soap_blist *soap_blist_IrCutFilterModes1 = NULL;
	size_t soap_flag_Sharpness1 = 1;
	size_t soap_flag_WideDynamicRange1 = 1;
	size_t soap_flag_WhiteBalance1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_BacklightCompensation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensationOptions(soap, "tt:BacklightCompensation", &(a->tt__ImagingOptions::BacklightCompensation), "tt:BacklightCompensationOptions"))
				{	soap_flag_BacklightCompensation1--;
					continue;
				}
			if (soap_flag_Brightness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Brightness", &(a->tt__ImagingOptions::Brightness), "tt:FloatRange"))
				{	soap_flag_Brightness1--;
					continue;
				}
			if (soap_flag_ColorSaturation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:ColorSaturation", &(a->tt__ImagingOptions::ColorSaturation), "tt:FloatRange"))
				{	soap_flag_ColorSaturation1--;
					continue;
				}
			if (soap_flag_Contrast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Contrast", &(a->tt__ImagingOptions::Contrast), "tt:FloatRange"))
				{	soap_flag_Contrast1--;
					continue;
				}
			if (soap_flag_Exposure1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ExposureOptions(soap, "tt:Exposure", &(a->tt__ImagingOptions::Exposure), "tt:ExposureOptions"))
				{	soap_flag_Exposure1--;
					continue;
				}
			if (soap_flag_Focus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions(soap, "tt:Focus", &(a->tt__ImagingOptions::Focus), "tt:FocusOptions"))
				{	soap_flag_Focus1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IrCutFilterModes", 1, NULL))
			{	if (a->tt__ImagingOptions::IrCutFilterModes == NULL)
				{	if (soap_blist_IrCutFilterModes1 == NULL)
						soap_blist_IrCutFilterModes1 = soap_new_block(soap);
					a->tt__ImagingOptions::IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_push_block(soap, soap_blist_IrCutFilterModes1, sizeof(enum tt__IrCutFilterMode));
					if (a->tt__ImagingOptions::IrCutFilterModes == NULL)
						return NULL;
					soap_default_tt__IrCutFilterMode(soap, a->tt__ImagingOptions::IrCutFilterModes);
				}
				soap_revert(soap);
				if (soap_in_tt__IrCutFilterMode(soap, "tt:IrCutFilterModes", a->tt__ImagingOptions::IrCutFilterModes, "tt:IrCutFilterMode"))
				{	a->tt__ImagingOptions::__sizeIrCutFilterModes++;
					a->tt__ImagingOptions::IrCutFilterModes = NULL;
					continue;
				}
			}
			if (soap_flag_Sharpness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:Sharpness", &(a->tt__ImagingOptions::Sharpness), "tt:FloatRange"))
				{	soap_flag_Sharpness1--;
					continue;
				}
			if (soap_flag_WideDynamicRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRangeOptions(soap, "tt:WideDynamicRange", &(a->tt__ImagingOptions::WideDynamicRange), "tt:WideDynamicRangeOptions"))
				{	soap_flag_WideDynamicRange1--;
					continue;
				}
			if (soap_flag_WhiteBalance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalanceOptions(soap, "tt:WhiteBalance", &(a->tt__ImagingOptions::WhiteBalance), "tt:WhiteBalanceOptions"))
				{	soap_flag_WhiteBalance1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingOptions::__any, "xsd:byte"))
				{	a->tt__ImagingOptions::__size++;
					a->tt__ImagingOptions::__any = NULL;
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
		if (a->tt__ImagingOptions::IrCutFilterModes)
			soap_pop_block(soap, soap_blist_IrCutFilterModes1);
		if (a->tt__ImagingOptions::__sizeIrCutFilterModes)
			a->tt__ImagingOptions::IrCutFilterModes = (enum tt__IrCutFilterMode *)soap_save_block(soap, soap_blist_IrCutFilterModes1, NULL, 1);
		else
		{	a->tt__ImagingOptions::IrCutFilterModes = NULL;
			if (soap_blist_IrCutFilterModes1)
				soap_end_block(soap, soap_blist_IrCutFilterModes1);
		}
		if (a->tt__ImagingOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingOptions::__size)
			a->tt__ImagingOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingOptions, 0, sizeof(tt__ImagingOptions), 0, soap_copy_tt__ImagingOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BacklightCompensation1 > 0 || soap_flag_Brightness1 > 0 || soap_flag_ColorSaturation1 > 0 || soap_flag_Contrast1 > 0 || soap_flag_Exposure1 > 0 || soap_flag_Focus1 > 0 || a->tt__ImagingOptions::__sizeIrCutFilterModes < 1 || soap_flag_Sharpness1 > 0 || soap_flag_WideDynamicRange1 > 0 || soap_flag_WhiteBalance1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ImagingOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingOptions);
	if (this->soap_out(soap, tag?tag:"tt:ImagingOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingOptions * SOAP_FMAC4 soap_get_tt__ImagingOptions(struct soap *soap, tt__ImagingOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingOptions * SOAP_FMAC2 soap_instantiate_tt__ImagingOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingOptions);
		if (size)
			*size = sizeof(tt__ImagingOptions);
		((tt__ImagingOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingOptions, n);
		if (size)
			*size = n * sizeof(tt__ImagingOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingOptions %p -> %p\n", q, p));
	*(tt__ImagingOptions*)p = *(tt__ImagingOptions*)q;
}

void tt__BacklightCompensation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__BacklightCompensationMode(soap, &this->tt__BacklightCompensation::Mode);
	soap_default_float(soap, &this->tt__BacklightCompensation::Level);
}

void tt__BacklightCompensation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__BacklightCompensation::Mode, SOAP_TYPE_tt__BacklightCompensationMode);
	soap_embedded(soap, &this->tt__BacklightCompensation::Level, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BacklightCompensation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BacklightCompensation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BacklightCompensation(struct soap *soap, const char *tag, int id, const tt__BacklightCompensation *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BacklightCompensation), "tt:BacklightCompensation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__BacklightCompensationMode(soap, "tt:Mode", -1, &(a->tt__BacklightCompensation::Mode), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Level", -1, &(a->tt__BacklightCompensation::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BacklightCompensation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BacklightCompensation(soap, tag, this, type);
}

SOAP_FMAC3 tt__BacklightCompensation * SOAP_FMAC4 soap_in_tt__BacklightCompensation(struct soap *soap, const char *tag, tt__BacklightCompensation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BacklightCompensation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BacklightCompensation, sizeof(tt__BacklightCompensation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BacklightCompensation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BacklightCompensation *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__BacklightCompensationMode(soap, "tt:Mode", &(a->tt__BacklightCompensation::Mode), "tt:BacklightCompensationMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Level", &(a->tt__BacklightCompensation::Level), "xsd:float"))
				{	soap_flag_Level1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__BacklightCompensation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BacklightCompensation, 0, sizeof(tt__BacklightCompensation), 0, soap_copy_tt__BacklightCompensation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_Level1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BacklightCompensation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BacklightCompensation);
	if (this->soap_out(soap, tag?tag:"tt:BacklightCompensation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BacklightCompensation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BacklightCompensation(soap, this, tag, type);
}

SOAP_FMAC3 tt__BacklightCompensation * SOAP_FMAC4 soap_get_tt__BacklightCompensation(struct soap *soap, tt__BacklightCompensation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BacklightCompensation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BacklightCompensation * SOAP_FMAC2 soap_instantiate_tt__BacklightCompensation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BacklightCompensation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BacklightCompensation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BacklightCompensation);
		if (size)
			*size = sizeof(tt__BacklightCompensation);
		((tt__BacklightCompensation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BacklightCompensation, n);
		if (size)
			*size = n * sizeof(tt__BacklightCompensation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BacklightCompensation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BacklightCompensation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BacklightCompensation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BacklightCompensation %p -> %p\n", q, p));
	*(tt__BacklightCompensation*)p = *(tt__BacklightCompensation*)q;
}

void tt__WideDynamicRange::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__WideDynamicMode(soap, &this->tt__WideDynamicRange::Mode);
	soap_default_float(soap, &this->tt__WideDynamicRange::Level);
}

void tt__WideDynamicRange::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__WideDynamicRange::Mode, SOAP_TYPE_tt__WideDynamicMode);
	soap_embedded(soap, &this->tt__WideDynamicRange::Level, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__WideDynamicRange::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__WideDynamicRange(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__WideDynamicRange(struct soap *soap, const char *tag, int id, const tt__WideDynamicRange *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__WideDynamicRange), "tt:WideDynamicRange"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__WideDynamicMode(soap, "tt:Mode", -1, &(a->tt__WideDynamicRange::Mode), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Level", -1, &(a->tt__WideDynamicRange::Level), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__WideDynamicRange::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__WideDynamicRange(soap, tag, this, type);
}

SOAP_FMAC3 tt__WideDynamicRange * SOAP_FMAC4 soap_in_tt__WideDynamicRange(struct soap *soap, const char *tag, tt__WideDynamicRange *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__WideDynamicRange *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__WideDynamicRange, sizeof(tt__WideDynamicRange), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__WideDynamicRange)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__WideDynamicRange *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Level1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__WideDynamicMode(soap, "tt:Mode", &(a->tt__WideDynamicRange::Mode), "tt:WideDynamicMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Level1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Level", &(a->tt__WideDynamicRange::Level), "xsd:float"))
				{	soap_flag_Level1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__WideDynamicRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__WideDynamicRange, 0, sizeof(tt__WideDynamicRange), 0, soap_copy_tt__WideDynamicRange);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_Level1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__WideDynamicRange::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__WideDynamicRange);
	if (this->soap_out(soap, tag?tag:"tt:WideDynamicRange", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__WideDynamicRange::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__WideDynamicRange(soap, this, tag, type);
}

SOAP_FMAC3 tt__WideDynamicRange * SOAP_FMAC4 soap_get_tt__WideDynamicRange(struct soap *soap, tt__WideDynamicRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__WideDynamicRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__WideDynamicRange * SOAP_FMAC2 soap_instantiate_tt__WideDynamicRange(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__WideDynamicRange(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__WideDynamicRange, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__WideDynamicRange);
		if (size)
			*size = sizeof(tt__WideDynamicRange);
		((tt__WideDynamicRange*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__WideDynamicRange, n);
		if (size)
			*size = n * sizeof(tt__WideDynamicRange);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__WideDynamicRange*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__WideDynamicRange*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__WideDynamicRange(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__WideDynamicRange %p -> %p\n", q, p));
	*(tt__WideDynamicRange*)p = *(tt__WideDynamicRange*)q;
}

void tt__Exposure::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ExposureMode(soap, &this->tt__Exposure::Mode);
	soap_default_tt__ExposurePriority(soap, &this->tt__Exposure::Priority);
	this->tt__Exposure::Window = NULL;
	soap_default_float(soap, &this->tt__Exposure::MinExposureTime);
	soap_default_float(soap, &this->tt__Exposure::MaxExposureTime);
	soap_default_float(soap, &this->tt__Exposure::MinGain);
	soap_default_float(soap, &this->tt__Exposure::MaxGain);
	soap_default_float(soap, &this->tt__Exposure::MinIris);
	soap_default_float(soap, &this->tt__Exposure::MaxIris);
	soap_default_float(soap, &this->tt__Exposure::ExposureTime);
	soap_default_float(soap, &this->tt__Exposure::Gain);
	soap_default_float(soap, &this->tt__Exposure::Iris);
}

void tt__Exposure::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Exposure::Mode, SOAP_TYPE_tt__ExposureMode);
	soap_embedded(soap, &this->tt__Exposure::Priority, SOAP_TYPE_tt__ExposurePriority);
	soap_serialize_PointerTott__Rectangle(soap, &this->tt__Exposure::Window);
	soap_embedded(soap, &this->tt__Exposure::MinExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::MaxExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::MinGain, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::MaxGain, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::MinIris, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::MaxIris, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::ExposureTime, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::Gain, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__Exposure::Iris, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Exposure::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Exposure(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Exposure(struct soap *soap, const char *tag, int id, const tt__Exposure *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Exposure), "tt:Exposure"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ExposureMode(soap, "tt:Mode", -1, &(a->tt__Exposure::Mode), ""))
		return soap->error;
	if (soap_out_tt__ExposurePriority(soap, "tt:Priority", -1, &(a->tt__Exposure::Priority), ""))
		return soap->error;
	if (a->tt__Exposure::Window)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:Window", -1, &a->tt__Exposure::Window, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Window"))
		return soap->error;
	if (soap_out_float(soap, "tt:MinExposureTime", -1, &(a->tt__Exposure::MinExposureTime), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxExposureTime", -1, &(a->tt__Exposure::MaxExposureTime), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MinGain", -1, &(a->tt__Exposure::MinGain), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxGain", -1, &(a->tt__Exposure::MaxGain), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MinIris", -1, &(a->tt__Exposure::MinIris), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:MaxIris", -1, &(a->tt__Exposure::MaxIris), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:ExposureTime", -1, &(a->tt__Exposure::ExposureTime), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Gain", -1, &(a->tt__Exposure::Gain), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Iris", -1, &(a->tt__Exposure::Iris), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Exposure::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Exposure(soap, tag, this, type);
}

SOAP_FMAC3 tt__Exposure * SOAP_FMAC4 soap_in_tt__Exposure(struct soap *soap, const char *tag, tt__Exposure *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Exposure *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Exposure, sizeof(tt__Exposure), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Exposure)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Exposure *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Priority1 = 1;
	size_t soap_flag_Window1 = 1;
	size_t soap_flag_MinExposureTime1 = 1;
	size_t soap_flag_MaxExposureTime1 = 1;
	size_t soap_flag_MinGain1 = 1;
	size_t soap_flag_MaxGain1 = 1;
	size_t soap_flag_MinIris1 = 1;
	size_t soap_flag_MaxIris1 = 1;
	size_t soap_flag_ExposureTime1 = 1;
	size_t soap_flag_Gain1 = 1;
	size_t soap_flag_Iris1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposureMode(soap, "tt:Mode", &(a->tt__Exposure::Mode), "tt:ExposureMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Priority1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ExposurePriority(soap, "tt:Priority", &(a->tt__Exposure::Priority), "tt:ExposurePriority"))
				{	soap_flag_Priority1--;
					continue;
				}
			if (soap_flag_Window1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Window", &(a->tt__Exposure::Window), "tt:Rectangle"))
				{	soap_flag_Window1--;
					continue;
				}
			if (soap_flag_MinExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinExposureTime", &(a->tt__Exposure::MinExposureTime), "xsd:float"))
				{	soap_flag_MinExposureTime1--;
					continue;
				}
			if (soap_flag_MaxExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxExposureTime", &(a->tt__Exposure::MaxExposureTime), "xsd:float"))
				{	soap_flag_MaxExposureTime1--;
					continue;
				}
			if (soap_flag_MinGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinGain", &(a->tt__Exposure::MinGain), "xsd:float"))
				{	soap_flag_MinGain1--;
					continue;
				}
			if (soap_flag_MaxGain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxGain", &(a->tt__Exposure::MaxGain), "xsd:float"))
				{	soap_flag_MaxGain1--;
					continue;
				}
			if (soap_flag_MinIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MinIris", &(a->tt__Exposure::MinIris), "xsd:float"))
				{	soap_flag_MinIris1--;
					continue;
				}
			if (soap_flag_MaxIris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:MaxIris", &(a->tt__Exposure::MaxIris), "xsd:float"))
				{	soap_flag_MaxIris1--;
					continue;
				}
			if (soap_flag_ExposureTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:ExposureTime", &(a->tt__Exposure::ExposureTime), "xsd:float"))
				{	soap_flag_ExposureTime1--;
					continue;
				}
			if (soap_flag_Gain1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Gain", &(a->tt__Exposure::Gain), "xsd:float"))
				{	soap_flag_Gain1--;
					continue;
				}
			if (soap_flag_Iris1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Iris", &(a->tt__Exposure::Iris), "xsd:float"))
				{	soap_flag_Iris1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Exposure *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Exposure, 0, sizeof(tt__Exposure), 0, soap_copy_tt__Exposure);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_Priority1 > 0 || soap_flag_Window1 > 0 || soap_flag_MinExposureTime1 > 0 || soap_flag_MaxExposureTime1 > 0 || soap_flag_MinGain1 > 0 || soap_flag_MaxGain1 > 0 || soap_flag_MinIris1 > 0 || soap_flag_MaxIris1 > 0 || soap_flag_ExposureTime1 > 0 || soap_flag_Gain1 > 0 || soap_flag_Iris1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Exposure::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Exposure);
	if (this->soap_out(soap, tag?tag:"tt:Exposure", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Exposure::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Exposure(soap, this, tag, type);
}

SOAP_FMAC3 tt__Exposure * SOAP_FMAC4 soap_get_tt__Exposure(struct soap *soap, tt__Exposure *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Exposure(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Exposure * SOAP_FMAC2 soap_instantiate_tt__Exposure(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Exposure(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Exposure, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Exposure);
		if (size)
			*size = sizeof(tt__Exposure);
		((tt__Exposure*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Exposure, n);
		if (size)
			*size = n * sizeof(tt__Exposure);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Exposure*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Exposure*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Exposure(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Exposure %p -> %p\n", q, p));
	*(tt__Exposure*)p = *(tt__Exposure*)q;
}

void tt__ImagingSettingsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingSettingsExtension::__size = 0;
	this->tt__ImagingSettingsExtension::__any = NULL;
}

void tt__ImagingSettingsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingSettingsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingSettingsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettingsExtension(struct soap *soap, const char *tag, int id, const tt__ImagingSettingsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettingsExtension), "tt:ImagingSettingsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingSettingsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingSettingsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingSettingsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingSettingsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingSettingsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension * SOAP_FMAC4 soap_in_tt__ImagingSettingsExtension(struct soap *soap, const char *tag, tt__ImagingSettingsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingSettingsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettingsExtension, sizeof(tt__ImagingSettingsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingSettingsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingSettingsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingSettingsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingSettingsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingSettingsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingSettingsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingSettingsExtension::__any, "xsd:byte"))
				{	a->tt__ImagingSettingsExtension::__size++;
					a->tt__ImagingSettingsExtension::__any = NULL;
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
		if (a->tt__ImagingSettingsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingSettingsExtension::__size)
			a->tt__ImagingSettingsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingSettingsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingSettingsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettingsExtension, 0, sizeof(tt__ImagingSettingsExtension), 0, soap_copy_tt__ImagingSettingsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingSettingsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettingsExtension);
	if (this->soap_out(soap, tag?tag:"tt:ImagingSettingsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingSettingsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingSettingsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingSettingsExtension * SOAP_FMAC4 soap_get_tt__ImagingSettingsExtension(struct soap *soap, tt__ImagingSettingsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettingsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingSettingsExtension * SOAP_FMAC2 soap_instantiate_tt__ImagingSettingsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingSettingsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingSettingsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingSettingsExtension);
		if (size)
			*size = sizeof(tt__ImagingSettingsExtension);
		((tt__ImagingSettingsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingSettingsExtension, n);
		if (size)
			*size = n * sizeof(tt__ImagingSettingsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingSettingsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingSettingsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingSettingsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingSettingsExtension %p -> %p\n", q, p));
	*(tt__ImagingSettingsExtension*)p = *(tt__ImagingSettingsExtension*)q;
}

void tt__ImagingSettings::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingSettings::BacklightCompensation = NULL;
	this->tt__ImagingSettings::Brightness = NULL;
	this->tt__ImagingSettings::ColorSaturation = NULL;
	this->tt__ImagingSettings::Contrast = NULL;
	this->tt__ImagingSettings::Exposure = NULL;
	this->tt__ImagingSettings::Focus = NULL;
	this->tt__ImagingSettings::IrCutFilter = NULL;
	this->tt__ImagingSettings::Sharpness = NULL;
	this->tt__ImagingSettings::WideDynamicRange = NULL;
	this->tt__ImagingSettings::WhiteBalance = NULL;
	this->tt__ImagingSettings::Extension = NULL;
	this->tt__ImagingSettings::__anyAttribute = NULL;
}

void tt__ImagingSettings::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__BacklightCompensation(soap, &this->tt__ImagingSettings::BacklightCompensation);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings::Brightness);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings::ColorSaturation);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings::Contrast);
	soap_serialize_PointerTott__Exposure(soap, &this->tt__ImagingSettings::Exposure);
	soap_serialize_PointerTott__FocusConfiguration(soap, &this->tt__ImagingSettings::Focus);
	soap_serialize_PointerTott__IrCutFilterMode(soap, &this->tt__ImagingSettings::IrCutFilter);
	soap_serialize_PointerTofloat(soap, &this->tt__ImagingSettings::Sharpness);
	soap_serialize_PointerTott__WideDynamicRange(soap, &this->tt__ImagingSettings::WideDynamicRange);
	soap_serialize_PointerTott__WhiteBalance(soap, &this->tt__ImagingSettings::WhiteBalance);
	soap_serialize_PointerTott__ImagingSettingsExtension(soap, &this->tt__ImagingSettings::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingSettings::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingSettings(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingSettings(struct soap *soap, const char *tag, int id, const tt__ImagingSettings *a, const char *type)
{
	if (((tt__ImagingSettings*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingSettings*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingSettings), "tt:ImagingSettings"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__BacklightCompensation(soap, "tt:BacklightCompensation", -1, &(a->tt__ImagingSettings::BacklightCompensation), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Brightness", -1, &(a->tt__ImagingSettings::Brightness), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:ColorSaturation", -1, &(a->tt__ImagingSettings::ColorSaturation), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Contrast", -1, &(a->tt__ImagingSettings::Contrast), ""))
		return soap->error;
	if (soap_out_PointerTott__Exposure(soap, "tt:Exposure", -1, &(a->tt__ImagingSettings::Exposure), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusConfiguration(soap, "tt:Focus", -1, &(a->tt__ImagingSettings::Focus), ""))
		return soap->error;
	if (soap_out_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", -1, &(a->tt__ImagingSettings::IrCutFilter), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:Sharpness", -1, &(a->tt__ImagingSettings::Sharpness), ""))
		return soap->error;
	if (soap_out_PointerTott__WideDynamicRange(soap, "tt:WideDynamicRange", -1, &(a->tt__ImagingSettings::WideDynamicRange), ""))
		return soap->error;
	if (soap_out_PointerTott__WhiteBalance(soap, "tt:WhiteBalance", -1, &(a->tt__ImagingSettings::WhiteBalance), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingSettingsExtension(soap, "tt:Extension", -1, &(a->tt__ImagingSettings::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingSettings::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingSettings(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingSettings * SOAP_FMAC4 soap_in_tt__ImagingSettings(struct soap *soap, const char *tag, tt__ImagingSettings *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingSettings *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingSettings, sizeof(tt__ImagingSettings), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingSettings)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingSettings *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingSettings*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_BacklightCompensation1 = 1;
	size_t soap_flag_Brightness1 = 1;
	size_t soap_flag_ColorSaturation1 = 1;
	size_t soap_flag_Contrast1 = 1;
	size_t soap_flag_Exposure1 = 1;
	size_t soap_flag_Focus1 = 1;
	size_t soap_flag_IrCutFilter1 = 1;
	size_t soap_flag_Sharpness1 = 1;
	size_t soap_flag_WideDynamicRange1 = 1;
	size_t soap_flag_WhiteBalance1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_BacklightCompensation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BacklightCompensation(soap, "tt:BacklightCompensation", &(a->tt__ImagingSettings::BacklightCompensation), "tt:BacklightCompensation"))
				{	soap_flag_BacklightCompensation1--;
					continue;
				}
			if (soap_flag_Brightness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Brightness", &(a->tt__ImagingSettings::Brightness), "xsd:float"))
				{	soap_flag_Brightness1--;
					continue;
				}
			if (soap_flag_ColorSaturation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:ColorSaturation", &(a->tt__ImagingSettings::ColorSaturation), "xsd:float"))
				{	soap_flag_ColorSaturation1--;
					continue;
				}
			if (soap_flag_Contrast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Contrast", &(a->tt__ImagingSettings::Contrast), "xsd:float"))
				{	soap_flag_Contrast1--;
					continue;
				}
			if (soap_flag_Exposure1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Exposure(soap, "tt:Exposure", &(a->tt__ImagingSettings::Exposure), "tt:Exposure"))
				{	soap_flag_Exposure1--;
					continue;
				}
			if (soap_flag_Focus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusConfiguration(soap, "tt:Focus", &(a->tt__ImagingSettings::Focus), "tt:FocusConfiguration"))
				{	soap_flag_Focus1--;
					continue;
				}
			if (soap_flag_IrCutFilter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IrCutFilterMode(soap, "tt:IrCutFilter", &(a->tt__ImagingSettings::IrCutFilter), "tt:IrCutFilterMode"))
				{	soap_flag_IrCutFilter1--;
					continue;
				}
			if (soap_flag_Sharpness1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:Sharpness", &(a->tt__ImagingSettings::Sharpness), "xsd:float"))
				{	soap_flag_Sharpness1--;
					continue;
				}
			if (soap_flag_WideDynamicRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WideDynamicRange(soap, "tt:WideDynamicRange", &(a->tt__ImagingSettings::WideDynamicRange), "tt:WideDynamicRange"))
				{	soap_flag_WideDynamicRange1--;
					continue;
				}
			if (soap_flag_WhiteBalance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__WhiteBalance(soap, "tt:WhiteBalance", &(a->tt__ImagingSettings::WhiteBalance), "tt:WhiteBalance"))
				{	soap_flag_WhiteBalance1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingSettingsExtension(soap, "tt:Extension", &(a->tt__ImagingSettings::Extension), "tt:ImagingSettingsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingSettings, 0, sizeof(tt__ImagingSettings), 0, soap_copy_tt__ImagingSettings);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ImagingSettings::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingSettings);
	if (this->soap_out(soap, tag?tag:"tt:ImagingSettings", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingSettings::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingSettings(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingSettings * SOAP_FMAC4 soap_get_tt__ImagingSettings(struct soap *soap, tt__ImagingSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingSettings * SOAP_FMAC2 soap_instantiate_tt__ImagingSettings(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingSettings(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingSettings, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingSettings);
		if (size)
			*size = sizeof(tt__ImagingSettings);
		((tt__ImagingSettings*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingSettings, n);
		if (size)
			*size = n * sizeof(tt__ImagingSettings);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingSettings*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingSettings*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingSettings(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingSettings %p -> %p\n", q, p));
	*(tt__ImagingSettings*)p = *(tt__ImagingSettings*)q;
}

void tt__FocusConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__AutoFocusMode(soap, &this->tt__FocusConfiguration::AutoFocusMode);
	soap_default_float(soap, &this->tt__FocusConfiguration::DefaultSpeed);
	soap_default_float(soap, &this->tt__FocusConfiguration::NearLimit);
	soap_default_float(soap, &this->tt__FocusConfiguration::FarLimit);
	this->tt__FocusConfiguration::__size = 0;
	this->tt__FocusConfiguration::__any = NULL;
	this->tt__FocusConfiguration::__anyAttribute = NULL;
}

void tt__FocusConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__FocusConfiguration::AutoFocusMode, SOAP_TYPE_tt__AutoFocusMode);
	soap_embedded(soap, &this->tt__FocusConfiguration::DefaultSpeed, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__FocusConfiguration::NearLimit, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__FocusConfiguration::FarLimit, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusConfiguration(struct soap *soap, const char *tag, int id, const tt__FocusConfiguration *a, const char *type)
{
	if (((tt__FocusConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FocusConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusConfiguration), "tt:FocusConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusMode", -1, &(a->tt__FocusConfiguration::AutoFocusMode), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:DefaultSpeed", -1, &(a->tt__FocusConfiguration::DefaultSpeed), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:NearLimit", -1, &(a->tt__FocusConfiguration::NearLimit), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:FarLimit", -1, &(a->tt__FocusConfiguration::FarLimit), ""))
		return soap->error;
	if (a->tt__FocusConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__FocusConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FocusConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FocusConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusConfiguration * SOAP_FMAC4 soap_in_tt__FocusConfiguration(struct soap *soap, const char *tag, tt__FocusConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusConfiguration, sizeof(tt__FocusConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FocusConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AutoFocusMode1 = 1;
	size_t soap_flag_DefaultSpeed1 = 1;
	size_t soap_flag_NearLimit1 = 1;
	size_t soap_flag_FarLimit1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AutoFocusMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusMode", &(a->tt__FocusConfiguration::AutoFocusMode), "tt:AutoFocusMode"))
				{	soap_flag_AutoFocusMode1--;
					continue;
				}
			if (soap_flag_DefaultSpeed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:DefaultSpeed", &(a->tt__FocusConfiguration::DefaultSpeed), "xsd:float"))
				{	soap_flag_DefaultSpeed1--;
					continue;
				}
			if (soap_flag_NearLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:NearLimit", &(a->tt__FocusConfiguration::NearLimit), "xsd:float"))
				{	soap_flag_NearLimit1--;
					continue;
				}
			if (soap_flag_FarLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:FarLimit", &(a->tt__FocusConfiguration::FarLimit), "xsd:float"))
				{	soap_flag_FarLimit1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FocusConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FocusConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FocusConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FocusConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FocusConfiguration::__any, "xsd:byte"))
				{	a->tt__FocusConfiguration::__size++;
					a->tt__FocusConfiguration::__any = NULL;
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
		if (a->tt__FocusConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FocusConfiguration::__size)
			a->tt__FocusConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FocusConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusConfiguration, 0, sizeof(tt__FocusConfiguration), 0, soap_copy_tt__FocusConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoFocusMode1 > 0 || soap_flag_DefaultSpeed1 > 0 || soap_flag_NearLimit1 > 0 || soap_flag_FarLimit1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FocusConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:FocusConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusConfiguration * SOAP_FMAC4 soap_get_tt__FocusConfiguration(struct soap *soap, tt__FocusConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusConfiguration * SOAP_FMAC2 soap_instantiate_tt__FocusConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusConfiguration);
		if (size)
			*size = sizeof(tt__FocusConfiguration);
		((tt__FocusConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusConfiguration, n);
		if (size)
			*size = n * sizeof(tt__FocusConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusConfiguration %p -> %p\n", q, p));
	*(tt__FocusConfiguration*)p = *(tt__FocusConfiguration*)q;
}

void tt__FocusStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__FocusStatus::Position);
	soap_default_tt__MoveStatus(soap, &this->tt__FocusStatus::MoveStatus);
	soap_default_string(soap, &this->tt__FocusStatus::Error);
	this->tt__FocusStatus::__size = 0;
	this->tt__FocusStatus::__any = NULL;
	this->tt__FocusStatus::__anyAttribute = NULL;
}

void tt__FocusStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__FocusStatus::Position, SOAP_TYPE_float);
	soap_embedded(soap, &this->tt__FocusStatus::MoveStatus, SOAP_TYPE_tt__MoveStatus);
	soap_serialize_string(soap, &this->tt__FocusStatus::Error);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusStatus(struct soap *soap, const char *tag, int id, const tt__FocusStatus *a, const char *type)
{
	if (((tt__FocusStatus*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FocusStatus*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusStatus), "tt:FocusStatus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_float(soap, "tt:Position", -1, &(a->tt__FocusStatus::Position), ""))
		return soap->error;
	if (soap_out_tt__MoveStatus(soap, "tt:MoveStatus", -1, &(a->tt__FocusStatus::MoveStatus), ""))
		return soap->error;
	if (a->tt__FocusStatus::Error)
	{	if (soap_out_string(soap, "tt:Error", -1, &a->tt__FocusStatus::Error, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Error"))
		return soap->error;
	if (a->tt__FocusStatus::__any)
	{	int i;
		for (i = 0; i < a->tt__FocusStatus::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FocusStatus::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FocusStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusStatus * SOAP_FMAC4 soap_in_tt__FocusStatus(struct soap *soap, const char *tag, tt__FocusStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusStatus, sizeof(tt__FocusStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusStatus *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FocusStatus*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_MoveStatus1 = 1;
	size_t soap_flag_Error1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Position", &(a->tt__FocusStatus::Position), "xsd:float"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_MoveStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__MoveStatus(soap, "tt:MoveStatus", &(a->tt__FocusStatus::MoveStatus), "tt:MoveStatus"))
				{	soap_flag_MoveStatus1--;
					continue;
				}
			if (soap_flag_Error1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &(a->tt__FocusStatus::Error), "xsd:string"))
				{	soap_flag_Error1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FocusStatus::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FocusStatus::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FocusStatus::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FocusStatus::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FocusStatus::__any, "xsd:byte"))
				{	a->tt__FocusStatus::__size++;
					a->tt__FocusStatus::__any = NULL;
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
		if (a->tt__FocusStatus::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FocusStatus::__size)
			a->tt__FocusStatus::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FocusStatus::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusStatus, 0, sizeof(tt__FocusStatus), 0, soap_copy_tt__FocusStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Position1 > 0 || soap_flag_MoveStatus1 > 0 || soap_flag_Error1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FocusStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusStatus);
	if (this->soap_out(soap, tag?tag:"tt:FocusStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusStatus * SOAP_FMAC4 soap_get_tt__FocusStatus(struct soap *soap, tt__FocusStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusStatus * SOAP_FMAC2 soap_instantiate_tt__FocusStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusStatus);
		if (size)
			*size = sizeof(tt__FocusStatus);
		((tt__FocusStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusStatus, n);
		if (size)
			*size = n * sizeof(tt__FocusStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusStatus %p -> %p\n", q, p));
	*(tt__FocusStatus*)p = *(tt__FocusStatus*)q;
}

void tt__ImagingStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ImagingStatus::FocusStatus = NULL;
	this->tt__ImagingStatus::__size = 0;
	this->tt__ImagingStatus::__any = NULL;
	this->tt__ImagingStatus::__anyAttribute = NULL;
}

void tt__ImagingStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__FocusStatus(soap, &this->tt__ImagingStatus::FocusStatus);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingStatus(struct soap *soap, const char *tag, int id, const tt__ImagingStatus *a, const char *type)
{
	if (((tt__ImagingStatus*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingStatus*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingStatus), "tt:ImagingStatus"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingStatus::FocusStatus)
	{	if (soap_out_PointerTott__FocusStatus(soap, "tt:FocusStatus", -1, &a->tt__ImagingStatus::FocusStatus, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:FocusStatus"))
		return soap->error;
	if (a->tt__ImagingStatus::__any)
	{	int i;
		for (i = 0; i < a->tt__ImagingStatus::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ImagingStatus::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingStatus * SOAP_FMAC4 soap_in_tt__ImagingStatus(struct soap *soap, const char *tag, tt__ImagingStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingStatus, sizeof(tt__ImagingStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingStatus *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingStatus*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_FocusStatus1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_FocusStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusStatus(soap, "tt:FocusStatus", &(a->tt__ImagingStatus::FocusStatus), "tt:FocusStatus"))
				{	soap_flag_FocusStatus1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ImagingStatus::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ImagingStatus::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ImagingStatus::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ImagingStatus::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ImagingStatus::__any, "xsd:byte"))
				{	a->tt__ImagingStatus::__size++;
					a->tt__ImagingStatus::__any = NULL;
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
		if (a->tt__ImagingStatus::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ImagingStatus::__size)
			a->tt__ImagingStatus::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ImagingStatus::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ImagingStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingStatus, 0, sizeof(tt__ImagingStatus), 0, soap_copy_tt__ImagingStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FocusStatus1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ImagingStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingStatus);
	if (this->soap_out(soap, tag?tag:"tt:ImagingStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingStatus * SOAP_FMAC4 soap_get_tt__ImagingStatus(struct soap *soap, tt__ImagingStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingStatus * SOAP_FMAC2 soap_instantiate_tt__ImagingStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingStatus);
		if (size)
			*size = sizeof(tt__ImagingStatus);
		((tt__ImagingStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingStatus, n);
		if (size)
			*size = n * sizeof(tt__ImagingStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingStatus %p -> %p\n", q, p));
	*(tt__ImagingStatus*)p = *(tt__ImagingStatus*)q;
}

void tt__PTZPresetTourStartingConditionOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourStartingConditionOptionsExtension::__size = 0;
	this->tt__PTZPresetTourStartingConditionOptionsExtension::__any = NULL;
}

void tt__PTZPresetTourStartingConditionOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStartingConditionOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStartingConditionOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStartingConditionOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension), "tt:PTZPresetTourStartingConditionOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourStartingConditionOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourStartingConditionOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourStartingConditionOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStartingConditionOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStartingConditionOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, const char *tag, tt__PTZPresetTourStartingConditionOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStartingConditionOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension, sizeof(tt__PTZPresetTourStartingConditionOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStartingConditionOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourStartingConditionOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourStartingConditionOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourStartingConditionOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourStartingConditionOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourStartingConditionOptionsExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourStartingConditionOptionsExtension::__size++;
					a->tt__PTZPresetTourStartingConditionOptionsExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourStartingConditionOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourStartingConditionOptionsExtension::__size)
			a->tt__PTZPresetTourStartingConditionOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourStartingConditionOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStartingConditionOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension, 0, sizeof(tt__PTZPresetTourStartingConditionOptionsExtension), 0, soap_copy_tt__PTZPresetTourStartingConditionOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourStartingConditionOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStartingConditionOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStartingConditionOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStartingConditionOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, tt__PTZPresetTourStartingConditionOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStartingConditionOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStartingConditionOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStartingConditionOptionsExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourStartingConditionOptionsExtension);
		((tt__PTZPresetTourStartingConditionOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStartingConditionOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStartingConditionOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStartingConditionOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStartingConditionOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStartingConditionOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStartingConditionOptionsExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourStartingConditionOptionsExtension*)p = *(tt__PTZPresetTourStartingConditionOptionsExtension*)q;
}

void tt__PTZPresetTourStartingConditionOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourStartingConditionOptions::RecurringTime = NULL;
	this->tt__PTZPresetTourStartingConditionOptions::RecurringDuration = NULL;
	this->tt__PTZPresetTourStartingConditionOptions::__sizeDirection = 0;
	this->tt__PTZPresetTourStartingConditionOptions::Direction = NULL;
	this->tt__PTZPresetTourStartingConditionOptions::Extension = NULL;
	this->tt__PTZPresetTourStartingConditionOptions::__anyAttribute = NULL;
}

void tt__PTZPresetTourStartingConditionOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntRange(soap, &this->tt__PTZPresetTourStartingConditionOptions::RecurringTime);
	soap_serialize_PointerTott__DurationRange(soap, &this->tt__PTZPresetTourStartingConditionOptions::RecurringDuration);
	if (this->tt__PTZPresetTourStartingConditionOptions::Direction)
	{	int i;
		for (i = 0; i < this->tt__PTZPresetTourStartingConditionOptions::__sizeDirection; i++)
		{
			soap_embedded(soap, this->tt__PTZPresetTourStartingConditionOptions::Direction + i, SOAP_TYPE_tt__PTZPresetTourDirection);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, &this->tt__PTZPresetTourStartingConditionOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStartingConditionOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStartingConditionOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStartingConditionOptions *a, const char *type)
{
	if (((tt__PTZPresetTourStartingConditionOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourStartingConditionOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions), "tt:PTZPresetTourStartingConditionOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__IntRange(soap, "tt:RecurringTime", -1, &(a->tt__PTZPresetTourStartingConditionOptions::RecurringTime), ""))
		return soap->error;
	if (soap_out_PointerTott__DurationRange(soap, "tt:RecurringDuration", -1, &(a->tt__PTZPresetTourStartingConditionOptions::RecurringDuration), ""))
		return soap->error;
	if (a->tt__PTZPresetTourStartingConditionOptions::Direction)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourStartingConditionOptions::__sizeDirection; i++)
			if (soap_out_tt__PTZPresetTourDirection(soap, "tt:Direction", -1, a->tt__PTZPresetTourStartingConditionOptions::Direction + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourStartingConditionOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStartingConditionOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStartingConditionOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, const char *tag, tt__PTZPresetTourStartingConditionOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStartingConditionOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions, sizeof(tt__PTZPresetTourStartingConditionOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStartingConditionOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourStartingConditionOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecurringTime1 = 1;
	size_t soap_flag_RecurringDuration1 = 1;
	struct soap_blist *soap_blist_Direction1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecurringTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:RecurringTime", &(a->tt__PTZPresetTourStartingConditionOptions::RecurringTime), "tt:IntRange"))
				{	soap_flag_RecurringTime1--;
					continue;
				}
			if (soap_flag_RecurringDuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:RecurringDuration", &(a->tt__PTZPresetTourStartingConditionOptions::RecurringDuration), "tt:DurationRange"))
				{	soap_flag_RecurringDuration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Direction", 1, NULL))
			{	if (a->tt__PTZPresetTourStartingConditionOptions::Direction == NULL)
				{	if (soap_blist_Direction1 == NULL)
						soap_blist_Direction1 = soap_new_block(soap);
					a->tt__PTZPresetTourStartingConditionOptions::Direction = (enum tt__PTZPresetTourDirection *)soap_push_block(soap, soap_blist_Direction1, sizeof(enum tt__PTZPresetTourDirection));
					if (a->tt__PTZPresetTourStartingConditionOptions::Direction == NULL)
						return NULL;
					soap_default_tt__PTZPresetTourDirection(soap, a->tt__PTZPresetTourStartingConditionOptions::Direction);
				}
				soap_revert(soap);
				if (soap_in_tt__PTZPresetTourDirection(soap, "tt:Direction", a->tt__PTZPresetTourStartingConditionOptions::Direction, "tt:PTZPresetTourDirection"))
				{	a->tt__PTZPresetTourStartingConditionOptions::__sizeDirection++;
					a->tt__PTZPresetTourStartingConditionOptions::Direction = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionOptionsExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourStartingConditionOptions::Extension), "tt:PTZPresetTourStartingConditionOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__PTZPresetTourStartingConditionOptions::Direction)
			soap_pop_block(soap, soap_blist_Direction1);
		if (a->tt__PTZPresetTourStartingConditionOptions::__sizeDirection)
			a->tt__PTZPresetTourStartingConditionOptions::Direction = (enum tt__PTZPresetTourDirection *)soap_save_block(soap, soap_blist_Direction1, NULL, 1);
		else
		{	a->tt__PTZPresetTourStartingConditionOptions::Direction = NULL;
			if (soap_blist_Direction1)
				soap_end_block(soap, soap_blist_Direction1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStartingConditionOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions, 0, sizeof(tt__PTZPresetTourStartingConditionOptions), 0, soap_copy_tt__PTZPresetTourStartingConditionOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourStartingConditionOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStartingConditionOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStartingConditionOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStartingConditionOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, tt__PTZPresetTourStartingConditionOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStartingConditionOptions * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStartingConditionOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStartingConditionOptions);
		if (size)
			*size = sizeof(tt__PTZPresetTourStartingConditionOptions);
		((tt__PTZPresetTourStartingConditionOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStartingConditionOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStartingConditionOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStartingConditionOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStartingConditionOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStartingConditionOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStartingConditionOptions %p -> %p\n", q, p));
	*(tt__PTZPresetTourStartingConditionOptions*)p = *(tt__PTZPresetTourStartingConditionOptions*)q;
}

void tt__PTZPresetTourPresetDetailOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourPresetDetailOptionsExtension::__size = 0;
	this->tt__PTZPresetTourPresetDetailOptionsExtension::__any = NULL;
}

void tt__PTZPresetTourPresetDetailOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourPresetDetailOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourPresetDetailOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourPresetDetailOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension), "tt:PTZPresetTourPresetDetailOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourPresetDetailOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourPresetDetailOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourPresetDetailOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourPresetDetailOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourPresetDetailOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetailOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, const char *tag, tt__PTZPresetTourPresetDetailOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourPresetDetailOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension, sizeof(tt__PTZPresetTourPresetDetailOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourPresetDetailOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourPresetDetailOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourPresetDetailOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourPresetDetailOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourPresetDetailOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourPresetDetailOptionsExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourPresetDetailOptionsExtension::__size++;
					a->tt__PTZPresetTourPresetDetailOptionsExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourPresetDetailOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourPresetDetailOptionsExtension::__size)
			a->tt__PTZPresetTourPresetDetailOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourPresetDetailOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourPresetDetailOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension, 0, sizeof(tt__PTZPresetTourPresetDetailOptionsExtension), 0, soap_copy_tt__PTZPresetTourPresetDetailOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourPresetDetailOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourPresetDetailOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourPresetDetailOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourPresetDetailOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetailOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, tt__PTZPresetTourPresetDetailOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetailOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourPresetDetailOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourPresetDetailOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourPresetDetailOptionsExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourPresetDetailOptionsExtension);
		((tt__PTZPresetTourPresetDetailOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourPresetDetailOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourPresetDetailOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourPresetDetailOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourPresetDetailOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourPresetDetailOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourPresetDetailOptionsExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourPresetDetailOptionsExtension*)p = *(tt__PTZPresetTourPresetDetailOptionsExtension*)q;
}

void tt__PTZPresetTourPresetDetailOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourPresetDetailOptions::__sizePresetToken = 0;
	this->tt__PTZPresetTourPresetDetailOptions::PresetToken = NULL;
	this->tt__PTZPresetTourPresetDetailOptions::Home = NULL;
	this->tt__PTZPresetTourPresetDetailOptions::PanTiltPositionSpace = NULL;
	this->tt__PTZPresetTourPresetDetailOptions::ZoomPositionSpace = NULL;
	this->tt__PTZPresetTourPresetDetailOptions::Extension = NULL;
	this->tt__PTZPresetTourPresetDetailOptions::__anyAttribute = NULL;
}

void tt__PTZPresetTourPresetDetailOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__PTZPresetTourPresetDetailOptions::PresetToken)
	{	int i;
		for (i = 0; i < this->tt__PTZPresetTourPresetDetailOptions::__sizePresetToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, this->tt__PTZPresetTourPresetDetailOptions::PresetToken + i);
		}
	}
	soap_serialize_PointerTobool(soap, &this->tt__PTZPresetTourPresetDetailOptions::Home);
	soap_serialize_PointerTott__Space2DDescription(soap, &this->tt__PTZPresetTourPresetDetailOptions::PanTiltPositionSpace);
	soap_serialize_PointerTott__Space1DDescription(soap, &this->tt__PTZPresetTourPresetDetailOptions::ZoomPositionSpace);
	soap_serialize_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, &this->tt__PTZPresetTourPresetDetailOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourPresetDetailOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourPresetDetailOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourPresetDetailOptions *a, const char *type)
{
	if (((tt__PTZPresetTourPresetDetailOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourPresetDetailOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions), "tt:PTZPresetTourPresetDetailOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourPresetDetailOptions::PresetToken)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourPresetDetailOptions::__sizePresetToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:PresetToken", -1, a->tt__PTZPresetTourPresetDetailOptions::PresetToken + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:Home", -1, &(a->tt__PTZPresetTourPresetDetailOptions::Home), ""))
		return soap->error;
	if (soap_out_PointerTott__Space2DDescription(soap, "tt:PanTiltPositionSpace", -1, &(a->tt__PTZPresetTourPresetDetailOptions::PanTiltPositionSpace), ""))
		return soap->error;
	if (soap_out_PointerTott__Space1DDescription(soap, "tt:ZoomPositionSpace", -1, &(a->tt__PTZPresetTourPresetDetailOptions::ZoomPositionSpace), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourPresetDetailOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourPresetDetailOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourPresetDetailOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetailOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, const char *tag, tt__PTZPresetTourPresetDetailOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourPresetDetailOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions, sizeof(tt__PTZPresetTourPresetDetailOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourPresetDetailOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourPresetDetailOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_PresetToken1 = NULL;
	size_t soap_flag_Home1 = 1;
	size_t soap_flag_PanTiltPositionSpace1 = 1;
	size_t soap_flag_ZoomPositionSpace1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PresetToken", 1, NULL))
			{	if (a->tt__PTZPresetTourPresetDetailOptions::PresetToken == NULL)
				{	if (soap_blist_PresetToken1 == NULL)
						soap_blist_PresetToken1 = soap_new_block(soap);
					a->tt__PTZPresetTourPresetDetailOptions::PresetToken = (char **)soap_push_block(soap, soap_blist_PresetToken1, sizeof(char *));
					if (a->tt__PTZPresetTourPresetDetailOptions::PresetToken == NULL)
						return NULL;
					*a->tt__PTZPresetTourPresetDetailOptions::PresetToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:PresetToken", a->tt__PTZPresetTourPresetDetailOptions::PresetToken, "tt:ReferenceToken"))
				{	a->tt__PTZPresetTourPresetDetailOptions::__sizePresetToken++;
					a->tt__PTZPresetTourPresetDetailOptions::PresetToken = NULL;
					continue;
				}
			}
			if (soap_flag_Home1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Home", &(a->tt__PTZPresetTourPresetDetailOptions::Home), "xsd:boolean"))
				{	soap_flag_Home1--;
					continue;
				}
			if (soap_flag_PanTiltPositionSpace1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:PanTiltPositionSpace", &(a->tt__PTZPresetTourPresetDetailOptions::PanTiltPositionSpace), "tt:Space2DDescription"))
				{	soap_flag_PanTiltPositionSpace1--;
					continue;
				}
			if (soap_flag_ZoomPositionSpace1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:ZoomPositionSpace", &(a->tt__PTZPresetTourPresetDetailOptions::ZoomPositionSpace), "tt:Space1DDescription"))
				{	soap_flag_ZoomPositionSpace1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetailOptionsExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourPresetDetailOptions::Extension), "tt:PTZPresetTourPresetDetailOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__PTZPresetTourPresetDetailOptions::PresetToken)
			soap_pop_block(soap, soap_blist_PresetToken1);
		if (a->tt__PTZPresetTourPresetDetailOptions::__sizePresetToken)
			a->tt__PTZPresetTourPresetDetailOptions::PresetToken = (char **)soap_save_block(soap, soap_blist_PresetToken1, NULL, 1);
		else
		{	a->tt__PTZPresetTourPresetDetailOptions::PresetToken = NULL;
			if (soap_blist_PresetToken1)
				soap_end_block(soap, soap_blist_PresetToken1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourPresetDetailOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions, 0, sizeof(tt__PTZPresetTourPresetDetailOptions), 0, soap_copy_tt__PTZPresetTourPresetDetailOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourPresetDetailOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourPresetDetailOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourPresetDetailOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourPresetDetailOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetailOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, tt__PTZPresetTourPresetDetailOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetailOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourPresetDetailOptions * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourPresetDetailOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourPresetDetailOptions);
		if (size)
			*size = sizeof(tt__PTZPresetTourPresetDetailOptions);
		((tt__PTZPresetTourPresetDetailOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourPresetDetailOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourPresetDetailOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourPresetDetailOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourPresetDetailOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourPresetDetailOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourPresetDetailOptions %p -> %p\n", q, p));
	*(tt__PTZPresetTourPresetDetailOptions*)p = *(tt__PTZPresetTourPresetDetailOptions*)q;
}

void tt__PTZPresetTourSpotOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourSpotOptions::PresetDetail = NULL;
	this->tt__PTZPresetTourSpotOptions::StayTime = NULL;
	this->tt__PTZPresetTourSpotOptions::__size = 0;
	this->tt__PTZPresetTourSpotOptions::__any = NULL;
	this->tt__PTZPresetTourSpotOptions::__anyAttribute = NULL;
}

void tt__PTZPresetTourSpotOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourPresetDetailOptions(soap, &this->tt__PTZPresetTourSpotOptions::PresetDetail);
	soap_serialize_PointerTott__DurationRange(soap, &this->tt__PTZPresetTourSpotOptions::StayTime);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourSpotOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourSpotOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpotOptions(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourSpotOptions *a, const char *type)
{
	if (((tt__PTZPresetTourSpotOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourSpotOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpotOptions), "tt:PTZPresetTourSpotOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourSpotOptions::PresetDetail)
	{	if (soap_out_PointerTott__PTZPresetTourPresetDetailOptions(soap, "tt:PresetDetail", -1, &a->tt__PTZPresetTourSpotOptions::PresetDetail, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PresetDetail"))
		return soap->error;
	if (a->tt__PTZPresetTourSpotOptions::StayTime)
	{	if (soap_out_PointerTott__DurationRange(soap, "tt:StayTime", -1, &a->tt__PTZPresetTourSpotOptions::StayTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StayTime"))
		return soap->error;
	if (a->tt__PTZPresetTourSpotOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourSpotOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourSpotOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourSpotOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourSpotOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpotOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpotOptions(struct soap *soap, const char *tag, tt__PTZPresetTourSpotOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourSpotOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpotOptions, sizeof(tt__PTZPresetTourSpotOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourSpotOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourSpotOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourSpotOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PresetDetail1 = 1;
	size_t soap_flag_StayTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PresetDetail1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetailOptions(soap, "tt:PresetDetail", &(a->tt__PTZPresetTourSpotOptions::PresetDetail), "tt:PTZPresetTourPresetDetailOptions"))
				{	soap_flag_PresetDetail1--;
					continue;
				}
			if (soap_flag_StayTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:StayTime", &(a->tt__PTZPresetTourSpotOptions::StayTime), "tt:DurationRange"))
				{	soap_flag_StayTime1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourSpotOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourSpotOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourSpotOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourSpotOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourSpotOptions::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourSpotOptions::__size++;
					a->tt__PTZPresetTourSpotOptions::__any = NULL;
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
		if (a->tt__PTZPresetTourSpotOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourSpotOptions::__size)
			a->tt__PTZPresetTourSpotOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourSpotOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourSpotOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpotOptions, 0, sizeof(tt__PTZPresetTourSpotOptions), 0, soap_copy_tt__PTZPresetTourSpotOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetDetail1 > 0 || soap_flag_StayTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourSpotOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpotOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourSpotOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourSpotOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourSpotOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpotOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpotOptions(struct soap *soap, tt__PTZPresetTourSpotOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpotOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourSpotOptions * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourSpotOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourSpotOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourSpotOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourSpotOptions);
		if (size)
			*size = sizeof(tt__PTZPresetTourSpotOptions);
		((tt__PTZPresetTourSpotOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourSpotOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourSpotOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourSpotOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourSpotOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourSpotOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourSpotOptions %p -> %p\n", q, p));
	*(tt__PTZPresetTourSpotOptions*)p = *(tt__PTZPresetTourSpotOptions*)q;
}

void tt__PTZPresetTourOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__PTZPresetTourOptions::AutoStart);
	this->tt__PTZPresetTourOptions::StartingCondition = NULL;
	this->tt__PTZPresetTourOptions::TourSpot = NULL;
	this->tt__PTZPresetTourOptions::__size = 0;
	this->tt__PTZPresetTourOptions::__any = NULL;
	this->tt__PTZPresetTourOptions::__anyAttribute = NULL;
}

void tt__PTZPresetTourOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZPresetTourOptions::AutoStart, SOAP_TYPE_bool);
	soap_serialize_PointerTott__PTZPresetTourStartingConditionOptions(soap, &this->tt__PTZPresetTourOptions::StartingCondition);
	soap_serialize_PointerTott__PTZPresetTourSpotOptions(soap, &this->tt__PTZPresetTourOptions::TourSpot);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourOptions(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourOptions *a, const char *type)
{
	if (((tt__PTZPresetTourOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourOptions), "tt:PTZPresetTourOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:AutoStart", -1, &(a->tt__PTZPresetTourOptions::AutoStart), ""))
		return soap->error;
	if (a->tt__PTZPresetTourOptions::StartingCondition)
	{	if (soap_out_PointerTott__PTZPresetTourStartingConditionOptions(soap, "tt:StartingCondition", -1, &a->tt__PTZPresetTourOptions::StartingCondition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StartingCondition"))
		return soap->error;
	if (a->tt__PTZPresetTourOptions::TourSpot)
	{	if (soap_out_PointerTott__PTZPresetTourSpotOptions(soap, "tt:TourSpot", -1, &a->tt__PTZPresetTourOptions::TourSpot, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TourSpot"))
		return soap->error;
	if (a->tt__PTZPresetTourOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourOptions * SOAP_FMAC4 soap_in_tt__PTZPresetTourOptions(struct soap *soap, const char *tag, tt__PTZPresetTourOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourOptions, sizeof(tt__PTZPresetTourOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AutoStart1 = 1;
	size_t soap_flag_StartingCondition1 = 1;
	size_t soap_flag_TourSpot1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AutoStart1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AutoStart", &(a->tt__PTZPresetTourOptions::AutoStart), "xsd:boolean"))
				{	soap_flag_AutoStart1--;
					continue;
				}
			if (soap_flag_StartingCondition1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionOptions(soap, "tt:StartingCondition", &(a->tt__PTZPresetTourOptions::StartingCondition), "tt:PTZPresetTourStartingConditionOptions"))
				{	soap_flag_StartingCondition1--;
					continue;
				}
			if (soap_flag_TourSpot1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpotOptions(soap, "tt:TourSpot", &(a->tt__PTZPresetTourOptions::TourSpot), "tt:PTZPresetTourSpotOptions"))
				{	soap_flag_TourSpot1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourOptions::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourOptions::__size++;
					a->tt__PTZPresetTourOptions::__any = NULL;
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
		if (a->tt__PTZPresetTourOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourOptions::__size)
			a->tt__PTZPresetTourOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourOptions, 0, sizeof(tt__PTZPresetTourOptions), 0, soap_copy_tt__PTZPresetTourOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoStart1 > 0 || soap_flag_StartingCondition1 > 0 || soap_flag_TourSpot1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourOptions * SOAP_FMAC4 soap_get_tt__PTZPresetTourOptions(struct soap *soap, tt__PTZPresetTourOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourOptions * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourOptions);
		if (size)
			*size = sizeof(tt__PTZPresetTourOptions);
		((tt__PTZPresetTourOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourOptions %p -> %p\n", q, p));
	*(tt__PTZPresetTourOptions*)p = *(tt__PTZPresetTourOptions*)q;
}

void tt__PTZPresetTourStartingConditionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourStartingConditionExtension::__size = 0;
	this->tt__PTZPresetTourStartingConditionExtension::__any = NULL;
}

void tt__PTZPresetTourStartingConditionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStartingConditionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStartingConditionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStartingConditionExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension), "tt:PTZPresetTourStartingConditionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourStartingConditionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourStartingConditionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourStartingConditionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStartingConditionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStartingConditionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, const char *tag, tt__PTZPresetTourStartingConditionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStartingConditionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension, sizeof(tt__PTZPresetTourStartingConditionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStartingConditionExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourStartingConditionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourStartingConditionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourStartingConditionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourStartingConditionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourStartingConditionExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourStartingConditionExtension::__size++;
					a->tt__PTZPresetTourStartingConditionExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourStartingConditionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourStartingConditionExtension::__size)
			a->tt__PTZPresetTourStartingConditionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourStartingConditionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStartingConditionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension, 0, sizeof(tt__PTZPresetTourStartingConditionExtension), 0, soap_copy_tt__PTZPresetTourStartingConditionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourStartingConditionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStartingConditionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStartingConditionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStartingConditionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingConditionExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, tt__PTZPresetTourStartingConditionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingConditionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStartingConditionExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStartingConditionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStartingConditionExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourStartingConditionExtension);
		((tt__PTZPresetTourStartingConditionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStartingConditionExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStartingConditionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStartingConditionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStartingConditionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStartingConditionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStartingConditionExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourStartingConditionExtension*)p = *(tt__PTZPresetTourStartingConditionExtension*)q;
}

void tt__PTZPresetTourStartingCondition::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourStartingCondition::RecurringTime = NULL;
	this->tt__PTZPresetTourStartingCondition::RecurringDuration = NULL;
	this->tt__PTZPresetTourStartingCondition::Direction = NULL;
	this->tt__PTZPresetTourStartingCondition::Extension = NULL;
	this->tt__PTZPresetTourStartingCondition::__anyAttribute = NULL;
}

void tt__PTZPresetTourStartingCondition::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &this->tt__PTZPresetTourStartingCondition::RecurringTime);
	soap_serialize_PointerToxsd__duration(soap, &this->tt__PTZPresetTourStartingCondition::RecurringDuration);
	soap_serialize_PointerTott__PTZPresetTourDirection(soap, &this->tt__PTZPresetTourStartingCondition::Direction);
	soap_serialize_PointerTott__PTZPresetTourStartingConditionExtension(soap, &this->tt__PTZPresetTourStartingCondition::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStartingCondition::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStartingCondition(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStartingCondition(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStartingCondition *a, const char *type)
{
	if (((tt__PTZPresetTourStartingCondition*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourStartingCondition*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStartingCondition), "tt:PTZPresetTourStartingCondition"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerToint(soap, "tt:RecurringTime", -1, &(a->tt__PTZPresetTourStartingCondition::RecurringTime), ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:RecurringDuration", -1, &(a->tt__PTZPresetTourStartingCondition::RecurringDuration), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourDirection(soap, "tt:Direction", -1, &(a->tt__PTZPresetTourStartingCondition::Direction), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourStartingConditionExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourStartingCondition::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStartingCondition::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStartingCondition(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingCondition * SOAP_FMAC4 soap_in_tt__PTZPresetTourStartingCondition(struct soap *soap, const char *tag, tt__PTZPresetTourStartingCondition *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStartingCondition *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStartingCondition, sizeof(tt__PTZPresetTourStartingCondition), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStartingCondition)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStartingCondition *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourStartingCondition*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecurringTime1 = 1;
	size_t soap_flag_RecurringDuration1 = 1;
	size_t soap_flag_Direction1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecurringTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:RecurringTime", &(a->tt__PTZPresetTourStartingCondition::RecurringTime), "xsd:int"))
				{	soap_flag_RecurringTime1--;
					continue;
				}
			if (soap_flag_RecurringDuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:RecurringDuration", &(a->tt__PTZPresetTourStartingCondition::RecurringDuration), "xsd:duration"))
				{	soap_flag_RecurringDuration1--;
					continue;
				}
			if (soap_flag_Direction1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourDirection(soap, "tt:Direction", &(a->tt__PTZPresetTourStartingCondition::Direction), "tt:PTZPresetTourDirection"))
				{	soap_flag_Direction1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingConditionExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourStartingCondition::Extension), "tt:PTZPresetTourStartingConditionExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStartingCondition *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStartingCondition, 0, sizeof(tt__PTZPresetTourStartingCondition), 0, soap_copy_tt__PTZPresetTourStartingCondition);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourStartingCondition::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStartingCondition);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStartingCondition", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStartingCondition::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStartingCondition(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStartingCondition * SOAP_FMAC4 soap_get_tt__PTZPresetTourStartingCondition(struct soap *soap, tt__PTZPresetTourStartingCondition *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStartingCondition(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStartingCondition * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStartingCondition(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStartingCondition(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStartingCondition, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStartingCondition);
		if (size)
			*size = sizeof(tt__PTZPresetTourStartingCondition);
		((tt__PTZPresetTourStartingCondition*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStartingCondition, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStartingCondition);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStartingCondition*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStartingCondition*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStartingCondition(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStartingCondition %p -> %p\n", q, p));
	*(tt__PTZPresetTourStartingCondition*)p = *(tt__PTZPresetTourStartingCondition*)q;
}

void tt__PTZPresetTourStatusExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourStatusExtension::__size = 0;
	this->tt__PTZPresetTourStatusExtension::__any = NULL;
}

void tt__PTZPresetTourStatusExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStatusExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStatusExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStatusExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStatusExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStatusExtension), "tt:PTZPresetTourStatusExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourStatusExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourStatusExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourStatusExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStatusExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStatusExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStatusExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourStatusExtension(struct soap *soap, const char *tag, tt__PTZPresetTourStatusExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStatusExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStatusExtension, sizeof(tt__PTZPresetTourStatusExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStatusExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStatusExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourStatusExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourStatusExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourStatusExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourStatusExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourStatusExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourStatusExtension::__size++;
					a->tt__PTZPresetTourStatusExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourStatusExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourStatusExtension::__size)
			a->tt__PTZPresetTourStatusExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourStatusExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStatusExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStatusExtension, 0, sizeof(tt__PTZPresetTourStatusExtension), 0, soap_copy_tt__PTZPresetTourStatusExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourStatusExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStatusExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStatusExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStatusExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStatusExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStatusExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourStatusExtension(struct soap *soap, tt__PTZPresetTourStatusExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStatusExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStatusExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStatusExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStatusExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStatusExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStatusExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourStatusExtension);
		((tt__PTZPresetTourStatusExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStatusExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStatusExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStatusExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStatusExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStatusExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStatusExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourStatusExtension*)p = *(tt__PTZPresetTourStatusExtension*)q;
}

void tt__PTZPresetTourStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__PTZPresetTourState(soap, &this->tt__PTZPresetTourStatus::State);
	this->tt__PTZPresetTourStatus::CurrentTourSpot = NULL;
	this->tt__PTZPresetTourStatus::Extension = NULL;
	this->tt__PTZPresetTourStatus::__anyAttribute = NULL;
}

void tt__PTZPresetTourStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourSpot(soap, &this->tt__PTZPresetTourStatus::CurrentTourSpot);
	soap_serialize_PointerTott__PTZPresetTourStatusExtension(soap, &this->tt__PTZPresetTourStatus::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourStatus(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourStatus *a, const char *type)
{
	if (((tt__PTZPresetTourStatus*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourStatus*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourStatus), "tt:PTZPresetTourStatus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__PTZPresetTourState(soap, "tt:State", -1, &(a->tt__PTZPresetTourStatus::State), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourSpot(soap, "tt:CurrentTourSpot", -1, &(a->tt__PTZPresetTourStatus::CurrentTourSpot), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourStatusExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourStatus::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourStatus * SOAP_FMAC4 soap_in_tt__PTZPresetTourStatus(struct soap *soap, const char *tag, tt__PTZPresetTourStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourStatus, sizeof(tt__PTZPresetTourStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourStatus *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourStatus*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_State1 = 1;
	size_t soap_flag_CurrentTourSpot1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_State1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__PTZPresetTourState(soap, "tt:State", &(a->tt__PTZPresetTourStatus::State), "tt:PTZPresetTourState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap_flag_CurrentTourSpot1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpot(soap, "tt:CurrentTourSpot", &(a->tt__PTZPresetTourStatus::CurrentTourSpot), "tt:PTZPresetTourSpot"))
				{	soap_flag_CurrentTourSpot1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStatusExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourStatus::Extension), "tt:PTZPresetTourStatusExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourStatus, 0, sizeof(tt__PTZPresetTourStatus), 0, soap_copy_tt__PTZPresetTourStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourStatus);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourStatus * SOAP_FMAC4 soap_get_tt__PTZPresetTourStatus(struct soap *soap, tt__PTZPresetTourStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourStatus * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourStatus);
		if (size)
			*size = sizeof(tt__PTZPresetTourStatus);
		((tt__PTZPresetTourStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourStatus, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourStatus %p -> %p\n", q, p));
	*(tt__PTZPresetTourStatus*)p = *(tt__PTZPresetTourStatus*)q;
}

void tt__PTZPresetTourTypeExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourTypeExtension::__size = 0;
	this->tt__PTZPresetTourTypeExtension::__any = NULL;
}

void tt__PTZPresetTourTypeExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourTypeExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourTypeExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourTypeExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourTypeExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourTypeExtension), "tt:PTZPresetTourTypeExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourTypeExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourTypeExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourTypeExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourTypeExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourTypeExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourTypeExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourTypeExtension(struct soap *soap, const char *tag, tt__PTZPresetTourTypeExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourTypeExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourTypeExtension, sizeof(tt__PTZPresetTourTypeExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourTypeExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourTypeExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourTypeExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourTypeExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourTypeExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourTypeExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourTypeExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourTypeExtension::__size++;
					a->tt__PTZPresetTourTypeExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourTypeExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourTypeExtension::__size)
			a->tt__PTZPresetTourTypeExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourTypeExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourTypeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourTypeExtension, 0, sizeof(tt__PTZPresetTourTypeExtension), 0, soap_copy_tt__PTZPresetTourTypeExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourTypeExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourTypeExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourTypeExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourTypeExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourTypeExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourTypeExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourTypeExtension(struct soap *soap, tt__PTZPresetTourTypeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourTypeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourTypeExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourTypeExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourTypeExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourTypeExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourTypeExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourTypeExtension);
		((tt__PTZPresetTourTypeExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourTypeExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourTypeExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourTypeExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourTypeExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourTypeExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourTypeExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourTypeExtension*)p = *(tt__PTZPresetTourTypeExtension*)q;
}

void tt__PTZPresetTourPresetDetail::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourPresetDetail::__union_PTZPresetTourPresetDetail = 0;
	this->tt__PTZPresetTourPresetDetail::__size = 0;
	this->tt__PTZPresetTourPresetDetail::__any = NULL;
	this->tt__PTZPresetTourPresetDetail::__anyAttribute = NULL;
}

void tt__PTZPresetTourPresetDetail::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__tt__union_PTZPresetTourPresetDetail(soap, this->tt__PTZPresetTourPresetDetail::__union_PTZPresetTourPresetDetail, &this->tt__PTZPresetTourPresetDetail::union_PTZPresetTourPresetDetail);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourPresetDetail::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourPresetDetail(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourPresetDetail(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourPresetDetail *a, const char *type)
{
	if (((tt__PTZPresetTourPresetDetail*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourPresetDetail*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetail), "tt:PTZPresetTourPresetDetail"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out__tt__union_PTZPresetTourPresetDetail(soap, a->tt__PTZPresetTourPresetDetail::__union_PTZPresetTourPresetDetail, &a->tt__PTZPresetTourPresetDetail::union_PTZPresetTourPresetDetail))
		return soap->error;
	if (a->tt__PTZPresetTourPresetDetail::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourPresetDetail::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourPresetDetail::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourPresetDetail::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourPresetDetail(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetail * SOAP_FMAC4 soap_in_tt__PTZPresetTourPresetDetail(struct soap *soap, const char *tag, tt__PTZPresetTourPresetDetail *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourPresetDetail *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourPresetDetail, sizeof(tt__PTZPresetTourPresetDetail), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourPresetDetail)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourPresetDetail *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourPresetDetail*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_union_PTZPresetTourPresetDetail1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_union_PTZPresetTourPresetDetail1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__tt__union_PTZPresetTourPresetDetail(soap, &a->tt__PTZPresetTourPresetDetail::__union_PTZPresetTourPresetDetail, &a->tt__PTZPresetTourPresetDetail::union_PTZPresetTourPresetDetail))
				{	soap_flag_union_PTZPresetTourPresetDetail1 = 0;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourPresetDetail::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourPresetDetail::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourPresetDetail::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourPresetDetail::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourPresetDetail::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourPresetDetail::__size++;
					a->tt__PTZPresetTourPresetDetail::__any = NULL;
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
		if (a->tt__PTZPresetTourPresetDetail::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourPresetDetail::__size)
			a->tt__PTZPresetTourPresetDetail::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourPresetDetail::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourPresetDetail *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourPresetDetail, 0, sizeof(tt__PTZPresetTourPresetDetail), 0, soap_copy_tt__PTZPresetTourPresetDetail);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_union_PTZPresetTourPresetDetail1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourPresetDetail::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourPresetDetail);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourPresetDetail", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourPresetDetail::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourPresetDetail(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourPresetDetail * SOAP_FMAC4 soap_get_tt__PTZPresetTourPresetDetail(struct soap *soap, tt__PTZPresetTourPresetDetail *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourPresetDetail(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourPresetDetail * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourPresetDetail(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourPresetDetail(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourPresetDetail, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourPresetDetail);
		if (size)
			*size = sizeof(tt__PTZPresetTourPresetDetail);
		((tt__PTZPresetTourPresetDetail*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourPresetDetail, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourPresetDetail);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourPresetDetail*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourPresetDetail*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourPresetDetail(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourPresetDetail %p -> %p\n", q, p));
	*(tt__PTZPresetTourPresetDetail*)p = *(tt__PTZPresetTourPresetDetail*)q;
}

void tt__PTZPresetTourSpotExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourSpotExtension::__size = 0;
	this->tt__PTZPresetTourSpotExtension::__any = NULL;
}

void tt__PTZPresetTourSpotExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourSpotExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourSpotExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpotExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourSpotExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpotExtension), "tt:PTZPresetTourSpotExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourSpotExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourSpotExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourSpotExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourSpotExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourSpotExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpotExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpotExtension(struct soap *soap, const char *tag, tt__PTZPresetTourSpotExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourSpotExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpotExtension, sizeof(tt__PTZPresetTourSpotExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourSpotExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourSpotExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourSpotExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourSpotExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourSpotExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourSpotExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourSpotExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourSpotExtension::__size++;
					a->tt__PTZPresetTourSpotExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourSpotExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourSpotExtension::__size)
			a->tt__PTZPresetTourSpotExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourSpotExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourSpotExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpotExtension, 0, sizeof(tt__PTZPresetTourSpotExtension), 0, soap_copy_tt__PTZPresetTourSpotExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourSpotExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpotExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourSpotExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourSpotExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourSpotExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpotExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpotExtension(struct soap *soap, tt__PTZPresetTourSpotExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpotExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourSpotExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourSpotExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourSpotExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourSpotExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourSpotExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourSpotExtension);
		((tt__PTZPresetTourSpotExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourSpotExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourSpotExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourSpotExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourSpotExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourSpotExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourSpotExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourSpotExtension*)p = *(tt__PTZPresetTourSpotExtension*)q;
}

void tt__PTZPresetTourSpot::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourSpot::PresetDetail = NULL;
	this->tt__PTZPresetTourSpot::Speed = NULL;
	this->tt__PTZPresetTourSpot::StayTime = NULL;
	this->tt__PTZPresetTourSpot::Extension = NULL;
	this->tt__PTZPresetTourSpot::__anyAttribute = NULL;
}

void tt__PTZPresetTourSpot::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourPresetDetail(soap, &this->tt__PTZPresetTourSpot::PresetDetail);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->tt__PTZPresetTourSpot::Speed);
	soap_serialize_PointerToxsd__duration(soap, &this->tt__PTZPresetTourSpot::StayTime);
	soap_serialize_PointerTott__PTZPresetTourSpotExtension(soap, &this->tt__PTZPresetTourSpot::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourSpot::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourSpot(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSpot(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourSpot *a, const char *type)
{
	if (((tt__PTZPresetTourSpot*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourSpot*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSpot), "tt:PTZPresetTourSpot"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourSpot::PresetDetail)
	{	if (soap_out_PointerTott__PTZPresetTourPresetDetail(soap, "tt:PresetDetail", -1, &a->tt__PTZPresetTourSpot::PresetDetail, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PresetDetail"))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tt:Speed", -1, &(a->tt__PTZPresetTourSpot::Speed), ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:StayTime", -1, &(a->tt__PTZPresetTourSpot::StayTime), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZPresetTourSpotExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourSpot::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourSpot::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourSpot(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpot * SOAP_FMAC4 soap_in_tt__PTZPresetTourSpot(struct soap *soap, const char *tag, tt__PTZPresetTourSpot *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourSpot *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSpot, sizeof(tt__PTZPresetTourSpot), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourSpot)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourSpot *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourSpot*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PresetDetail1 = 1;
	size_t soap_flag_Speed1 = 1;
	size_t soap_flag_StayTime1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PresetDetail1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourPresetDetail(soap, "tt:PresetDetail", &(a->tt__PTZPresetTourSpot::PresetDetail), "tt:PTZPresetTourPresetDetail"))
				{	soap_flag_PresetDetail1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tt:Speed", &(a->tt__PTZPresetTourSpot::Speed), "tt:PTZSpeed"))
				{	soap_flag_Speed1--;
					continue;
				}
			if (soap_flag_StayTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:StayTime", &(a->tt__PTZPresetTourSpot::StayTime), "xsd:duration"))
				{	soap_flag_StayTime1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSpotExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourSpot::Extension), "tt:PTZPresetTourSpotExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourSpot *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSpot, 0, sizeof(tt__PTZPresetTourSpot), 0, soap_copy_tt__PTZPresetTourSpot);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PresetDetail1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourSpot::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSpot);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourSpot", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourSpot::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourSpot(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourSpot * SOAP_FMAC4 soap_get_tt__PTZPresetTourSpot(struct soap *soap, tt__PTZPresetTourSpot *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSpot(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourSpot * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourSpot(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourSpot(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourSpot, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourSpot);
		if (size)
			*size = sizeof(tt__PTZPresetTourSpot);
		((tt__PTZPresetTourSpot*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourSpot, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourSpot);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourSpot*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourSpot*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourSpot(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourSpot %p -> %p\n", q, p));
	*(tt__PTZPresetTourSpot*)p = *(tt__PTZPresetTourSpot*)q;
}

void tt__PTZPresetTourExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourExtension::__size = 0;
	this->tt__PTZPresetTourExtension::__any = NULL;
}

void tt__PTZPresetTourExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourExtension), "tt:PTZPresetTourExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourExtension(struct soap *soap, const char *tag, tt__PTZPresetTourExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourExtension, sizeof(tt__PTZPresetTourExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourExtension::__size++;
					a->tt__PTZPresetTourExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourExtension::__size)
			a->tt__PTZPresetTourExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourExtension, 0, sizeof(tt__PTZPresetTourExtension), 0, soap_copy_tt__PTZPresetTourExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourExtension(struct soap *soap, tt__PTZPresetTourExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourExtension);
		((tt__PTZPresetTourExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourExtension*)p = *(tt__PTZPresetTourExtension*)q;
}

void tt__PresetTour::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Name(soap, &this->tt__PresetTour::Name);
	this->tt__PresetTour::Status = NULL;
	soap_default_bool(soap, &this->tt__PresetTour::AutoStart);
	this->tt__PresetTour::StartingCondition = NULL;
	this->tt__PresetTour::__sizeTourSpot = 0;
	this->tt__PresetTour::TourSpot = NULL;
	this->tt__PresetTour::Extension = NULL;
	soap_default_tt__ReferenceToken(soap, &this->tt__PresetTour::token);
	this->tt__PresetTour::__anyAttribute = NULL;
}

void tt__PresetTour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &this->tt__PresetTour::Name);
	soap_serialize_PointerTott__PTZPresetTourStatus(soap, &this->tt__PresetTour::Status);
	soap_embedded(soap, &this->tt__PresetTour::AutoStart, SOAP_TYPE_bool);
	soap_serialize_PointerTott__PTZPresetTourStartingCondition(soap, &this->tt__PresetTour::StartingCondition);
	if (this->tt__PresetTour::TourSpot)
	{	int i;
		for (i = 0; i < this->tt__PresetTour::__sizeTourSpot; i++)
		{
			soap_serialize_PointerTott__PTZPresetTourSpot(soap, this->tt__PresetTour::TourSpot + i);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourExtension(soap, &this->tt__PresetTour::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PresetTour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PresetTour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PresetTour(struct soap *soap, const char *tag, int id, const tt__PresetTour *a, const char *type)
{
	if (((tt__PresetTour*)a)->token)
		soap_set_attr(soap, "token", ((tt__PresetTour*)a)->token, 1);
	if (((tt__PresetTour*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PresetTour*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PresetTour), "tt:PresetTour"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Name(soap, "tt:Name", -1, &(a->tt__PresetTour::Name), ""))
		return soap->error;
	if (a->tt__PresetTour::Status)
	{	if (soap_out_PointerTott__PTZPresetTourStatus(soap, "tt:Status", -1, &a->tt__PresetTour::Status, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Status"))
		return soap->error;
	if (soap_out_bool(soap, "tt:AutoStart", -1, &(a->tt__PresetTour::AutoStart), ""))
		return soap->error;
	if (a->tt__PresetTour::StartingCondition)
	{	if (soap_out_PointerTott__PTZPresetTourStartingCondition(soap, "tt:StartingCondition", -1, &a->tt__PresetTour::StartingCondition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StartingCondition"))
		return soap->error;
	if (a->tt__PresetTour::TourSpot)
	{	int i;
		for (i = 0; i < a->tt__PresetTour::__sizeTourSpot; i++)
			if (soap_out_PointerTott__PTZPresetTourSpot(soap, "tt:TourSpot", -1, a->tt__PresetTour::TourSpot + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourExtension(soap, "tt:Extension", -1, &(a->tt__PresetTour::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PresetTour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PresetTour(soap, tag, this, type);
}

SOAP_FMAC3 tt__PresetTour * SOAP_FMAC4 soap_in_tt__PresetTour(struct soap *soap, const char *tag, tt__PresetTour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PresetTour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PresetTour, sizeof(tt__PresetTour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PresetTour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PresetTour *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "token", 0), &((tt__PresetTour*)a)->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PresetTour*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Status1 = 1;
	size_t soap_flag_AutoStart1 = 1;
	size_t soap_flag_StartingCondition1 = 1;
	struct soap_blist *soap_blist_TourSpot1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &(a->tt__PresetTour::Name), "tt:Name"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Status1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStatus(soap, "tt:Status", &(a->tt__PresetTour::Status), "tt:PTZPresetTourStatus"))
				{	soap_flag_Status1--;
					continue;
				}
			if (soap_flag_AutoStart1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AutoStart", &(a->tt__PresetTour::AutoStart), "xsd:boolean"))
				{	soap_flag_AutoStart1--;
					continue;
				}
			if (soap_flag_StartingCondition1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourStartingCondition(soap, "tt:StartingCondition", &(a->tt__PresetTour::StartingCondition), "tt:PTZPresetTourStartingCondition"))
				{	soap_flag_StartingCondition1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:TourSpot", 1, NULL))
			{	if (a->tt__PresetTour::TourSpot == NULL)
				{	if (soap_blist_TourSpot1 == NULL)
						soap_blist_TourSpot1 = soap_new_block(soap);
					a->tt__PresetTour::TourSpot = (tt__PTZPresetTourSpot **)soap_push_block(soap, soap_blist_TourSpot1, sizeof(tt__PTZPresetTourSpot *));
					if (a->tt__PresetTour::TourSpot == NULL)
						return NULL;
					*a->tt__PresetTour::TourSpot = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PTZPresetTourSpot(soap, "tt:TourSpot", a->tt__PresetTour::TourSpot, "tt:PTZPresetTourSpot"))
				{	a->tt__PresetTour::__sizeTourSpot++;
					a->tt__PresetTour::TourSpot = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourExtension(soap, "tt:Extension", &(a->tt__PresetTour::Extension), "tt:PTZPresetTourExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__PresetTour::TourSpot)
			soap_pop_block(soap, soap_blist_TourSpot1);
		if (a->tt__PresetTour::__sizeTourSpot)
			a->tt__PresetTour::TourSpot = (tt__PTZPresetTourSpot **)soap_save_block(soap, soap_blist_TourSpot1, NULL, 1);
		else
		{	a->tt__PresetTour::TourSpot = NULL;
			if (soap_blist_TourSpot1)
				soap_end_block(soap, soap_blist_TourSpot1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PresetTour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PresetTour, 0, sizeof(tt__PresetTour), 0, soap_copy_tt__PresetTour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Status1 > 0 || soap_flag_AutoStart1 > 0 || soap_flag_StartingCondition1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PresetTour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PresetTour);
	if (this->soap_out(soap, tag?tag:"tt:PresetTour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PresetTour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PresetTour(soap, this, tag, type);
}

SOAP_FMAC3 tt__PresetTour * SOAP_FMAC4 soap_get_tt__PresetTour(struct soap *soap, tt__PresetTour *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PresetTour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PresetTour * SOAP_FMAC2 soap_instantiate_tt__PresetTour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PresetTour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PresetTour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PresetTour);
		if (size)
			*size = sizeof(tt__PresetTour);
		((tt__PresetTour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PresetTour, n);
		if (size)
			*size = n * sizeof(tt__PresetTour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PresetTour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PresetTour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PresetTour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PresetTour %p -> %p\n", q, p));
	*(tt__PresetTour*)p = *(tt__PresetTour*)q;
}

void tt__PTZMoveStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZMoveStatus::PanTilt = NULL;
	this->tt__PTZMoveStatus::Zoom = NULL;
}

void tt__PTZMoveStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MoveStatus(soap, &this->tt__PTZMoveStatus::PanTilt);
	soap_serialize_PointerTott__MoveStatus(soap, &this->tt__PTZMoveStatus::Zoom);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZMoveStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZMoveStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZMoveStatus(struct soap *soap, const char *tag, int id, const tt__PTZMoveStatus *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZMoveStatus), "tt:PTZMoveStatus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__MoveStatus(soap, "tt:PanTilt", -1, &(a->tt__PTZMoveStatus::PanTilt), ""))
		return soap->error;
	if (soap_out_PointerTott__MoveStatus(soap, "tt:Zoom", -1, &(a->tt__PTZMoveStatus::Zoom), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZMoveStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZMoveStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZMoveStatus * SOAP_FMAC4 soap_in_tt__PTZMoveStatus(struct soap *soap, const char *tag, tt__PTZMoveStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZMoveStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZMoveStatus, sizeof(tt__PTZMoveStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZMoveStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZMoveStatus *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PanTilt1 = 1;
	size_t soap_flag_Zoom1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PanTilt1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MoveStatus(soap, "tt:PanTilt", &(a->tt__PTZMoveStatus::PanTilt), "tt:MoveStatus"))
				{	soap_flag_PanTilt1--;
					continue;
				}
			if (soap_flag_Zoom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MoveStatus(soap, "tt:Zoom", &(a->tt__PTZMoveStatus::Zoom), "tt:MoveStatus"))
				{	soap_flag_Zoom1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZMoveStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZMoveStatus, 0, sizeof(tt__PTZMoveStatus), 0, soap_copy_tt__PTZMoveStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZMoveStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZMoveStatus);
	if (this->soap_out(soap, tag?tag:"tt:PTZMoveStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZMoveStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZMoveStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZMoveStatus * SOAP_FMAC4 soap_get_tt__PTZMoveStatus(struct soap *soap, tt__PTZMoveStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZMoveStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZMoveStatus * SOAP_FMAC2 soap_instantiate_tt__PTZMoveStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZMoveStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZMoveStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZMoveStatus);
		if (size)
			*size = sizeof(tt__PTZMoveStatus);
		((tt__PTZMoveStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZMoveStatus, n);
		if (size)
			*size = n * sizeof(tt__PTZMoveStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZMoveStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZMoveStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZMoveStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZMoveStatus %p -> %p\n", q, p));
	*(tt__PTZMoveStatus*)p = *(tt__PTZMoveStatus*)q;
}

void tt__PTZPreset::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Name(soap, &this->tt__PTZPreset::Name);
	this->tt__PTZPreset::PTZPosition = NULL;
	soap_default_tt__ReferenceToken(soap, &this->tt__PTZPreset::token);
	this->tt__PTZPreset::__anyAttribute = NULL;
}

void tt__PTZPreset::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &this->tt__PTZPreset::Name);
	soap_serialize_PointerTott__PTZVector(soap, &this->tt__PTZPreset::PTZPosition);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPreset::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPreset(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPreset(struct soap *soap, const char *tag, int id, const tt__PTZPreset *a, const char *type)
{
	if (((tt__PTZPreset*)a)->token)
		soap_set_attr(soap, "token", ((tt__PTZPreset*)a)->token, 1);
	if (((tt__PTZPreset*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPreset*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPreset), "tt:PTZPreset"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Name(soap, "tt:Name", -1, &(a->tt__PTZPreset::Name), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZVector(soap, "tt:PTZPosition", -1, &(a->tt__PTZPreset::PTZPosition), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPreset::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPreset(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPreset * SOAP_FMAC4 soap_in_tt__PTZPreset(struct soap *soap, const char *tag, tt__PTZPreset *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPreset *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPreset, sizeof(tt__PTZPreset), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPreset)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPreset *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "token", 0), &((tt__PTZPreset*)a)->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPreset*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_PTZPosition1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &(a->tt__PTZPreset::Name), "tt:Name"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_PTZPosition1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:PTZPosition", &(a->tt__PTZPreset::PTZPosition), "tt:PTZVector"))
				{	soap_flag_PTZPosition1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPreset *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPreset, 0, sizeof(tt__PTZPreset), 0, soap_copy_tt__PTZPreset);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPreset::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPreset);
	if (this->soap_out(soap, tag?tag:"tt:PTZPreset", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPreset::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPreset(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPreset * SOAP_FMAC4 soap_get_tt__PTZPreset(struct soap *soap, tt__PTZPreset *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPreset(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPreset * SOAP_FMAC2 soap_instantiate_tt__PTZPreset(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPreset(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPreset, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPreset);
		if (size)
			*size = sizeof(tt__PTZPreset);
		((tt__PTZPreset*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPreset, n);
		if (size)
			*size = n * sizeof(tt__PTZPreset);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPreset*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPreset*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPreset(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPreset %p -> %p\n", q, p));
	*(tt__PTZPreset*)p = *(tt__PTZPreset*)q;
}

void tt__PTZStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZStatus::Position = NULL;
	this->tt__PTZStatus::MoveStatus = NULL;
	soap_default_string(soap, &this->tt__PTZStatus::Error);
	soap_default_time(soap, &this->tt__PTZStatus::UtcTime);
	this->tt__PTZStatus::__size = 0;
	this->tt__PTZStatus::__any = NULL;
	this->tt__PTZStatus::__anyAttribute = NULL;
}

void tt__PTZStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZVector(soap, &this->tt__PTZStatus::Position);
	soap_serialize_PointerTott__PTZMoveStatus(soap, &this->tt__PTZStatus::MoveStatus);
	soap_serialize_string(soap, &this->tt__PTZStatus::Error);
	soap_embedded(soap, &this->tt__PTZStatus::UtcTime, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatus(struct soap *soap, const char *tag, int id, const tt__PTZStatus *a, const char *type)
{
	if (((tt__PTZStatus*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZStatus*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatus), "tt:PTZStatus"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__PTZVector(soap, "tt:Position", -1, &(a->tt__PTZStatus::Position), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZMoveStatus(soap, "tt:MoveStatus", -1, &(a->tt__PTZStatus::MoveStatus), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &(a->tt__PTZStatus::Error), ""))
		return soap->error;
	if (soap_out_time(soap, "tt:UtcTime", -1, &(a->tt__PTZStatus::UtcTime), ""))
		return soap->error;
	if (a->tt__PTZStatus::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZStatus::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZStatus::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZStatus * SOAP_FMAC4 soap_in_tt__PTZStatus(struct soap *soap, const char *tag, tt__PTZStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatus, sizeof(tt__PTZStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZStatus *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZStatus*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Position1 = 1;
	size_t soap_flag_MoveStatus1 = 1;
	size_t soap_flag_Error1 = 1;
	size_t soap_flag_UtcTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:Position", &(a->tt__PTZStatus::Position), "tt:PTZVector"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap_flag_MoveStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZMoveStatus(soap, "tt:MoveStatus", &(a->tt__PTZStatus::MoveStatus), "tt:PTZMoveStatus"))
				{	soap_flag_MoveStatus1--;
					continue;
				}
			if (soap_flag_Error1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &(a->tt__PTZStatus::Error), "xsd:string"))
				{	soap_flag_Error1--;
					continue;
				}
			if (soap_flag_UtcTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:UtcTime", &(a->tt__PTZStatus::UtcTime), "xsd:dateTime"))
				{	soap_flag_UtcTime1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZStatus::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZStatus::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZStatus::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZStatus::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZStatus::__any, "xsd:byte"))
				{	a->tt__PTZStatus::__size++;
					a->tt__PTZStatus::__any = NULL;
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
		if (a->tt__PTZStatus::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZStatus::__size)
			a->tt__PTZStatus::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZStatus::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatus, 0, sizeof(tt__PTZStatus), 0, soap_copy_tt__PTZStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_UtcTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZStatus);
	if (this->soap_out(soap, tag?tag:"tt:PTZStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZStatus * SOAP_FMAC4 soap_get_tt__PTZStatus(struct soap *soap, tt__PTZStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZStatus * SOAP_FMAC2 soap_instantiate_tt__PTZStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZStatus);
		if (size)
			*size = sizeof(tt__PTZStatus);
		((tt__PTZStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZStatus, n);
		if (size)
			*size = n * sizeof(tt__PTZStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZStatus %p -> %p\n", q, p));
	*(tt__PTZStatus*)p = *(tt__PTZStatus*)q;
}

void tt__PTZSpeed::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZSpeed::PanTilt = NULL;
	this->tt__PTZSpeed::Zoom = NULL;
}

void tt__PTZSpeed::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector2D(soap, &this->tt__PTZSpeed::PanTilt);
	soap_serialize_PointerTott__Vector1D(soap, &this->tt__PTZSpeed::Zoom);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZSpeed::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZSpeed(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpeed(struct soap *soap, const char *tag, int id, const tt__PTZSpeed *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpeed), "tt:PTZSpeed"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Vector2D(soap, "tt:PanTilt", -1, &(a->tt__PTZSpeed::PanTilt), ""))
		return soap->error;
	if (soap_out_PointerTott__Vector1D(soap, "tt:Zoom", -1, &(a->tt__PTZSpeed::Zoom), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZSpeed::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZSpeed(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZSpeed * SOAP_FMAC4 soap_in_tt__PTZSpeed(struct soap *soap, const char *tag, tt__PTZSpeed *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZSpeed *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpeed, sizeof(tt__PTZSpeed), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZSpeed)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZSpeed *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PanTilt1 = 1;
	size_t soap_flag_Zoom1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PanTilt1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector2D(soap, "tt:PanTilt", &(a->tt__PTZSpeed::PanTilt), "tt:Vector2D"))
				{	soap_flag_PanTilt1--;
					continue;
				}
			if (soap_flag_Zoom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector1D(soap, "tt:Zoom", &(a->tt__PTZSpeed::Zoom), "tt:Vector1D"))
				{	soap_flag_Zoom1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZSpeed *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpeed, 0, sizeof(tt__PTZSpeed), 0, soap_copy_tt__PTZSpeed);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZSpeed::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZSpeed);
	if (this->soap_out(soap, tag?tag:"tt:PTZSpeed", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZSpeed::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZSpeed(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZSpeed * SOAP_FMAC4 soap_get_tt__PTZSpeed(struct soap *soap, tt__PTZSpeed *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpeed(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZSpeed * SOAP_FMAC2 soap_instantiate_tt__PTZSpeed(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZSpeed(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZSpeed, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZSpeed);
		if (size)
			*size = sizeof(tt__PTZSpeed);
		((tt__PTZSpeed*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZSpeed, n);
		if (size)
			*size = n * sizeof(tt__PTZSpeed);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZSpeed*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZSpeed*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZSpeed(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZSpeed %p -> %p\n", q, p));
	*(tt__PTZSpeed*)p = *(tt__PTZSpeed*)q;
}

void tt__PTZVector::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZVector::PanTilt = NULL;
	this->tt__PTZVector::Zoom = NULL;
}

void tt__PTZVector::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector2D(soap, &this->tt__PTZVector::PanTilt);
	soap_serialize_PointerTott__Vector1D(soap, &this->tt__PTZVector::Zoom);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZVector::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZVector(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZVector(struct soap *soap, const char *tag, int id, const tt__PTZVector *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZVector), "tt:PTZVector"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Vector2D(soap, "tt:PanTilt", -1, &(a->tt__PTZVector::PanTilt), ""))
		return soap->error;
	if (soap_out_PointerTott__Vector1D(soap, "tt:Zoom", -1, &(a->tt__PTZVector::Zoom), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZVector::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZVector(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZVector * SOAP_FMAC4 soap_in_tt__PTZVector(struct soap *soap, const char *tag, tt__PTZVector *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZVector *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZVector, sizeof(tt__PTZVector), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZVector)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZVector *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PanTilt1 = 1;
	size_t soap_flag_Zoom1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PanTilt1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector2D(soap, "tt:PanTilt", &(a->tt__PTZVector::PanTilt), "tt:Vector2D"))
				{	soap_flag_PanTilt1--;
					continue;
				}
			if (soap_flag_Zoom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector1D(soap, "tt:Zoom", &(a->tt__PTZVector::Zoom), "tt:Vector1D"))
				{	soap_flag_Zoom1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZVector *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZVector, 0, sizeof(tt__PTZVector), 0, soap_copy_tt__PTZVector);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZVector::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZVector);
	if (this->soap_out(soap, tag?tag:"tt:PTZVector", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZVector::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZVector(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZVector * SOAP_FMAC4 soap_get_tt__PTZVector(struct soap *soap, tt__PTZVector *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZVector(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZVector * SOAP_FMAC2 soap_instantiate_tt__PTZVector(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZVector(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZVector, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZVector);
		if (size)
			*size = sizeof(tt__PTZVector);
		((tt__PTZVector*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZVector, n);
		if (size)
			*size = n * sizeof(tt__PTZVector);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZVector*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZVector*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZVector(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZVector %p -> %p\n", q, p));
	*(tt__PTZVector*)p = *(tt__PTZVector*)q;
}

void tt__Vector1D::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__Vector1D::x);
	soap_default_xsd__anyURI(soap, &this->tt__Vector1D::space);
}

void tt__Vector1D::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Vector1D::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Vector1D(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector1D(struct soap *soap, const char *tag, int id, const tt__Vector1D *a, const char *type)
{
	soap_set_attr(soap, "x", soap_float2s(soap, ((tt__Vector1D*)a)->x), 1);
	if (((tt__Vector1D*)a)->space)
		soap_set_attr(soap, "space", ((tt__Vector1D*)a)->space, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:Vector1D");
}

void *tt__Vector1D::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Vector1D(soap, tag, this, type);
}

SOAP_FMAC3 tt__Vector1D * SOAP_FMAC4 soap_in_tt__Vector1D(struct soap *soap, const char *tag, tt__Vector1D *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Vector1D *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector1D, sizeof(tt__Vector1D), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Vector1D)
			return (tt__Vector1D *)a->soap_in(soap, tag, type);
	}
	if (soap_s2float(soap, soap_attr_value(soap, "x", 1), &((tt__Vector1D*)a)->x))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "space", 0), &((tt__Vector1D*)a)->space, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__Vector1D::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Vector1D);
	if (this->soap_out(soap, tag?tag:"tt:Vector1D", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Vector1D::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Vector1D(soap, this, tag, type);
}

SOAP_FMAC3 tt__Vector1D * SOAP_FMAC4 soap_get_tt__Vector1D(struct soap *soap, tt__Vector1D *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector1D(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Vector1D * SOAP_FMAC2 soap_instantiate_tt__Vector1D(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Vector1D(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Vector1D, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Vector1D);
		if (size)
			*size = sizeof(tt__Vector1D);
		((tt__Vector1D*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Vector1D, n);
		if (size)
			*size = n * sizeof(tt__Vector1D);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Vector1D*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Vector1D*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Vector1D(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Vector1D %p -> %p\n", q, p));
	*(tt__Vector1D*)p = *(tt__Vector1D*)q;
}

void tt__Vector2D::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__Vector2D::x);
	soap_default_float(soap, &this->tt__Vector2D::y);
	soap_default_xsd__anyURI(soap, &this->tt__Vector2D::space);
}

void tt__Vector2D::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Vector2D::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Vector2D(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector2D(struct soap *soap, const char *tag, int id, const tt__Vector2D *a, const char *type)
{
	soap_set_attr(soap, "x", soap_float2s(soap, ((tt__Vector2D*)a)->x), 1);
	soap_set_attr(soap, "y", soap_float2s(soap, ((tt__Vector2D*)a)->y), 1);
	if (((tt__Vector2D*)a)->space)
		soap_set_attr(soap, "space", ((tt__Vector2D*)a)->space, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:Vector2D");
}

void *tt__Vector2D::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Vector2D(soap, tag, this, type);
}

SOAP_FMAC3 tt__Vector2D * SOAP_FMAC4 soap_in_tt__Vector2D(struct soap *soap, const char *tag, tt__Vector2D *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Vector2D *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector2D, sizeof(tt__Vector2D), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Vector2D)
			return (tt__Vector2D *)a->soap_in(soap, tag, type);
	}
	if (soap_s2float(soap, soap_attr_value(soap, "x", 1), &((tt__Vector2D*)a)->x))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "y", 1), &((tt__Vector2D*)a)->y))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "space", 0), &((tt__Vector2D*)a)->space, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__Vector2D::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Vector2D);
	if (this->soap_out(soap, tag?tag:"tt:Vector2D", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Vector2D::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Vector2D(soap, this, tag, type);
}

SOAP_FMAC3 tt__Vector2D * SOAP_FMAC4 soap_get_tt__Vector2D(struct soap *soap, tt__Vector2D *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector2D(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Vector2D * SOAP_FMAC2 soap_instantiate_tt__Vector2D(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Vector2D(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Vector2D, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Vector2D);
		if (size)
			*size = sizeof(tt__Vector2D);
		((tt__Vector2D*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Vector2D, n);
		if (size)
			*size = n * sizeof(tt__Vector2D);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Vector2D*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Vector2D*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Vector2D(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Vector2D %p -> %p\n", q, p));
	*(tt__Vector2D*)p = *(tt__Vector2D*)q;
}

void tt__Space1DDescription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__Space1DDescription::URI);
	this->tt__Space1DDescription::XRange = NULL;
}

void tt__Space1DDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__Space1DDescription::URI);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__Space1DDescription::XRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Space1DDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Space1DDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Space1DDescription(struct soap *soap, const char *tag, int id, const tt__Space1DDescription *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Space1DDescription), "tt:Space1DDescription"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Space1DDescription::URI)
	{	if (soap_out_xsd__anyURI(soap, "tt:URI", -1, &a->tt__Space1DDescription::URI, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:URI"))
		return soap->error;
	if (a->tt__Space1DDescription::XRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:XRange", -1, &a->tt__Space1DDescription::XRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Space1DDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Space1DDescription(soap, tag, this, type);
}

SOAP_FMAC3 tt__Space1DDescription * SOAP_FMAC4 soap_in_tt__Space1DDescription(struct soap *soap, const char *tag, tt__Space1DDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Space1DDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Space1DDescription, sizeof(tt__Space1DDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Space1DDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Space1DDescription *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_URI1 = 1;
	size_t soap_flag_XRange1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_URI1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:URI", &(a->tt__Space1DDescription::URI), "xsd:anyURI"))
				{	soap_flag_URI1--;
					continue;
				}
			if (soap_flag_XRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:XRange", &(a->tt__Space1DDescription::XRange), "tt:FloatRange"))
				{	soap_flag_XRange1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Space1DDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Space1DDescription, 0, sizeof(tt__Space1DDescription), 0, soap_copy_tt__Space1DDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_URI1 > 0 || soap_flag_XRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Space1DDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Space1DDescription);
	if (this->soap_out(soap, tag?tag:"tt:Space1DDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Space1DDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Space1DDescription(soap, this, tag, type);
}

SOAP_FMAC3 tt__Space1DDescription * SOAP_FMAC4 soap_get_tt__Space1DDescription(struct soap *soap, tt__Space1DDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Space1DDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Space1DDescription * SOAP_FMAC2 soap_instantiate_tt__Space1DDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Space1DDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Space1DDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Space1DDescription);
		if (size)
			*size = sizeof(tt__Space1DDescription);
		((tt__Space1DDescription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Space1DDescription, n);
		if (size)
			*size = n * sizeof(tt__Space1DDescription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Space1DDescription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Space1DDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Space1DDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Space1DDescription %p -> %p\n", q, p));
	*(tt__Space1DDescription*)p = *(tt__Space1DDescription*)q;
}

void tt__Space2DDescription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__Space2DDescription::URI);
	this->tt__Space2DDescription::XRange = NULL;
	this->tt__Space2DDescription::YRange = NULL;
}

void tt__Space2DDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__Space2DDescription::URI);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__Space2DDescription::XRange);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__Space2DDescription::YRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Space2DDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Space2DDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Space2DDescription(struct soap *soap, const char *tag, int id, const tt__Space2DDescription *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Space2DDescription), "tt:Space2DDescription"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Space2DDescription::URI)
	{	if (soap_out_xsd__anyURI(soap, "tt:URI", -1, &a->tt__Space2DDescription::URI, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:URI"))
		return soap->error;
	if (a->tt__Space2DDescription::XRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:XRange", -1, &a->tt__Space2DDescription::XRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XRange"))
		return soap->error;
	if (a->tt__Space2DDescription::YRange)
	{	if (soap_out_PointerTott__FloatRange(soap, "tt:YRange", -1, &a->tt__Space2DDescription::YRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:YRange"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Space2DDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Space2DDescription(soap, tag, this, type);
}

SOAP_FMAC3 tt__Space2DDescription * SOAP_FMAC4 soap_in_tt__Space2DDescription(struct soap *soap, const char *tag, tt__Space2DDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Space2DDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Space2DDescription, sizeof(tt__Space2DDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Space2DDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Space2DDescription *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_URI1 = 1;
	size_t soap_flag_XRange1 = 1;
	size_t soap_flag_YRange1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_URI1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:URI", &(a->tt__Space2DDescription::URI), "xsd:anyURI"))
				{	soap_flag_URI1--;
					continue;
				}
			if (soap_flag_XRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:XRange", &(a->tt__Space2DDescription::XRange), "tt:FloatRange"))
				{	soap_flag_XRange1--;
					continue;
				}
			if (soap_flag_YRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:YRange", &(a->tt__Space2DDescription::YRange), "tt:FloatRange"))
				{	soap_flag_YRange1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Space2DDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Space2DDescription, 0, sizeof(tt__Space2DDescription), 0, soap_copy_tt__Space2DDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_URI1 > 0 || soap_flag_XRange1 > 0 || soap_flag_YRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Space2DDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Space2DDescription);
	if (this->soap_out(soap, tag?tag:"tt:Space2DDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Space2DDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Space2DDescription(soap, this, tag, type);
}

SOAP_FMAC3 tt__Space2DDescription * SOAP_FMAC4 soap_get_tt__Space2DDescription(struct soap *soap, tt__Space2DDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Space2DDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Space2DDescription * SOAP_FMAC2 soap_instantiate_tt__Space2DDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Space2DDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Space2DDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Space2DDescription);
		if (size)
			*size = sizeof(tt__Space2DDescription);
		((tt__Space2DDescription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Space2DDescription, n);
		if (size)
			*size = n * sizeof(tt__Space2DDescription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Space2DDescription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Space2DDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Space2DDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Space2DDescription %p -> %p\n", q, p));
	*(tt__Space2DDescription*)p = *(tt__Space2DDescription*)q;
}

void tt__PTZSpacesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZSpacesExtension::__size = 0;
	this->tt__PTZSpacesExtension::__any = NULL;
}

void tt__PTZSpacesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZSpacesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZSpacesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpacesExtension(struct soap *soap, const char *tag, int id, const tt__PTZSpacesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpacesExtension), "tt:PTZSpacesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZSpacesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZSpacesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZSpacesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZSpacesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZSpacesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZSpacesExtension * SOAP_FMAC4 soap_in_tt__PTZSpacesExtension(struct soap *soap, const char *tag, tt__PTZSpacesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZSpacesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpacesExtension, sizeof(tt__PTZSpacesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZSpacesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZSpacesExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZSpacesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZSpacesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZSpacesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZSpacesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZSpacesExtension::__any, "xsd:byte"))
				{	a->tt__PTZSpacesExtension::__size++;
					a->tt__PTZSpacesExtension::__any = NULL;
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
		if (a->tt__PTZSpacesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZSpacesExtension::__size)
			a->tt__PTZSpacesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZSpacesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZSpacesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpacesExtension, 0, sizeof(tt__PTZSpacesExtension), 0, soap_copy_tt__PTZSpacesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZSpacesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZSpacesExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZSpacesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZSpacesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZSpacesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZSpacesExtension * SOAP_FMAC4 soap_get_tt__PTZSpacesExtension(struct soap *soap, tt__PTZSpacesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpacesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZSpacesExtension * SOAP_FMAC2 soap_instantiate_tt__PTZSpacesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZSpacesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZSpacesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZSpacesExtension);
		if (size)
			*size = sizeof(tt__PTZSpacesExtension);
		((tt__PTZSpacesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZSpacesExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZSpacesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZSpacesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZSpacesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZSpacesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZSpacesExtension %p -> %p\n", q, p));
	*(tt__PTZSpacesExtension*)p = *(tt__PTZSpacesExtension*)q;
}

void tt__PTZSpaces::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZSpaces::__sizeAbsolutePanTiltPositionSpace = 0;
	this->tt__PTZSpaces::AbsolutePanTiltPositionSpace = NULL;
	this->tt__PTZSpaces::__sizeAbsoluteZoomPositionSpace = 0;
	this->tt__PTZSpaces::AbsoluteZoomPositionSpace = NULL;
	this->tt__PTZSpaces::__sizeRelativePanTiltTranslationSpace = 0;
	this->tt__PTZSpaces::RelativePanTiltTranslationSpace = NULL;
	this->tt__PTZSpaces::__sizeRelativeZoomTranslationSpace = 0;
	this->tt__PTZSpaces::RelativeZoomTranslationSpace = NULL;
	this->tt__PTZSpaces::__sizeContinuousPanTiltVelocitySpace = 0;
	this->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = NULL;
	this->tt__PTZSpaces::__sizeContinuousZoomVelocitySpace = 0;
	this->tt__PTZSpaces::ContinuousZoomVelocitySpace = NULL;
	this->tt__PTZSpaces::__sizePanTiltSpeedSpace = 0;
	this->tt__PTZSpaces::PanTiltSpeedSpace = NULL;
	this->tt__PTZSpaces::__sizeZoomSpeedSpace = 0;
	this->tt__PTZSpaces::ZoomSpeedSpace = NULL;
	this->tt__PTZSpaces::Extension = NULL;
	this->tt__PTZSpaces::__anyAttribute = NULL;
}

void tt__PTZSpaces::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__PTZSpaces::AbsolutePanTiltPositionSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeAbsolutePanTiltPositionSpace; i++)
		{
			soap_serialize_PointerTott__Space2DDescription(soap, this->tt__PTZSpaces::AbsolutePanTiltPositionSpace + i);
		}
	}
	if (this->tt__PTZSpaces::AbsoluteZoomPositionSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeAbsoluteZoomPositionSpace; i++)
		{
			soap_serialize_PointerTott__Space1DDescription(soap, this->tt__PTZSpaces::AbsoluteZoomPositionSpace + i);
		}
	}
	if (this->tt__PTZSpaces::RelativePanTiltTranslationSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeRelativePanTiltTranslationSpace; i++)
		{
			soap_serialize_PointerTott__Space2DDescription(soap, this->tt__PTZSpaces::RelativePanTiltTranslationSpace + i);
		}
	}
	if (this->tt__PTZSpaces::RelativeZoomTranslationSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeRelativeZoomTranslationSpace; i++)
		{
			soap_serialize_PointerTott__Space1DDescription(soap, this->tt__PTZSpaces::RelativeZoomTranslationSpace + i);
		}
	}
	if (this->tt__PTZSpaces::ContinuousPanTiltVelocitySpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeContinuousPanTiltVelocitySpace; i++)
		{
			soap_serialize_PointerTott__Space2DDescription(soap, this->tt__PTZSpaces::ContinuousPanTiltVelocitySpace + i);
		}
	}
	if (this->tt__PTZSpaces::ContinuousZoomVelocitySpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeContinuousZoomVelocitySpace; i++)
		{
			soap_serialize_PointerTott__Space1DDescription(soap, this->tt__PTZSpaces::ContinuousZoomVelocitySpace + i);
		}
	}
	if (this->tt__PTZSpaces::PanTiltSpeedSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizePanTiltSpeedSpace; i++)
		{
			soap_serialize_PointerTott__Space1DDescription(soap, this->tt__PTZSpaces::PanTiltSpeedSpace + i);
		}
	}
	if (this->tt__PTZSpaces::ZoomSpeedSpace)
	{	int i;
		for (i = 0; i < this->tt__PTZSpaces::__sizeZoomSpeedSpace; i++)
		{
			soap_serialize_PointerTott__Space1DDescription(soap, this->tt__PTZSpaces::ZoomSpeedSpace + i);
		}
	}
	soap_serialize_PointerTott__PTZSpacesExtension(soap, &this->tt__PTZSpaces::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZSpaces::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZSpaces(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZSpaces(struct soap *soap, const char *tag, int id, const tt__PTZSpaces *a, const char *type)
{
	if (((tt__PTZSpaces*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZSpaces*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZSpaces), "tt:PTZSpaces"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZSpaces::AbsolutePanTiltPositionSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeAbsolutePanTiltPositionSpace; i++)
			if (soap_out_PointerTott__Space2DDescription(soap, "tt:AbsolutePanTiltPositionSpace", -1, a->tt__PTZSpaces::AbsolutePanTiltPositionSpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::AbsoluteZoomPositionSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeAbsoluteZoomPositionSpace; i++)
			if (soap_out_PointerTott__Space1DDescription(soap, "tt:AbsoluteZoomPositionSpace", -1, a->tt__PTZSpaces::AbsoluteZoomPositionSpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::RelativePanTiltTranslationSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeRelativePanTiltTranslationSpace; i++)
			if (soap_out_PointerTott__Space2DDescription(soap, "tt:RelativePanTiltTranslationSpace", -1, a->tt__PTZSpaces::RelativePanTiltTranslationSpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::RelativeZoomTranslationSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeRelativeZoomTranslationSpace; i++)
			if (soap_out_PointerTott__Space1DDescription(soap, "tt:RelativeZoomTranslationSpace", -1, a->tt__PTZSpaces::RelativeZoomTranslationSpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeContinuousPanTiltVelocitySpace; i++)
			if (soap_out_PointerTott__Space2DDescription(soap, "tt:ContinuousPanTiltVelocitySpace", -1, a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::ContinuousZoomVelocitySpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeContinuousZoomVelocitySpace; i++)
			if (soap_out_PointerTott__Space1DDescription(soap, "tt:ContinuousZoomVelocitySpace", -1, a->tt__PTZSpaces::ContinuousZoomVelocitySpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::PanTiltSpeedSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizePanTiltSpeedSpace; i++)
			if (soap_out_PointerTott__Space1DDescription(soap, "tt:PanTiltSpeedSpace", -1, a->tt__PTZSpaces::PanTiltSpeedSpace + i, ""))
				return soap->error;
	}
	if (a->tt__PTZSpaces::ZoomSpeedSpace)
	{	int i;
		for (i = 0; i < a->tt__PTZSpaces::__sizeZoomSpeedSpace; i++)
			if (soap_out_PointerTott__Space1DDescription(soap, "tt:ZoomSpeedSpace", -1, a->tt__PTZSpaces::ZoomSpeedSpace + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZSpacesExtension(soap, "tt:Extension", -1, &(a->tt__PTZSpaces::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZSpaces::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZSpaces(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZSpaces * SOAP_FMAC4 soap_in_tt__PTZSpaces(struct soap *soap, const char *tag, tt__PTZSpaces *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZSpaces *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZSpaces, sizeof(tt__PTZSpaces), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZSpaces)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZSpaces *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZSpaces*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_AbsolutePanTiltPositionSpace1 = NULL;
	struct soap_blist *soap_blist_AbsoluteZoomPositionSpace1 = NULL;
	struct soap_blist *soap_blist_RelativePanTiltTranslationSpace1 = NULL;
	struct soap_blist *soap_blist_RelativeZoomTranslationSpace1 = NULL;
	struct soap_blist *soap_blist_ContinuousPanTiltVelocitySpace1 = NULL;
	struct soap_blist *soap_blist_ContinuousZoomVelocitySpace1 = NULL;
	struct soap_blist *soap_blist_PanTiltSpeedSpace1 = NULL;
	struct soap_blist *soap_blist_ZoomSpeedSpace1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AbsolutePanTiltPositionSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::AbsolutePanTiltPositionSpace == NULL)
				{	if (soap_blist_AbsolutePanTiltPositionSpace1 == NULL)
						soap_blist_AbsolutePanTiltPositionSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::AbsolutePanTiltPositionSpace = (tt__Space2DDescription **)soap_push_block(soap, soap_blist_AbsolutePanTiltPositionSpace1, sizeof(tt__Space2DDescription *));
					if (a->tt__PTZSpaces::AbsolutePanTiltPositionSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::AbsolutePanTiltPositionSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:AbsolutePanTiltPositionSpace", a->tt__PTZSpaces::AbsolutePanTiltPositionSpace, "tt:Space2DDescription"))
				{	a->tt__PTZSpaces::__sizeAbsolutePanTiltPositionSpace++;
					a->tt__PTZSpaces::AbsolutePanTiltPositionSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AbsoluteZoomPositionSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::AbsoluteZoomPositionSpace == NULL)
				{	if (soap_blist_AbsoluteZoomPositionSpace1 == NULL)
						soap_blist_AbsoluteZoomPositionSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::AbsoluteZoomPositionSpace = (tt__Space1DDescription **)soap_push_block(soap, soap_blist_AbsoluteZoomPositionSpace1, sizeof(tt__Space1DDescription *));
					if (a->tt__PTZSpaces::AbsoluteZoomPositionSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::AbsoluteZoomPositionSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:AbsoluteZoomPositionSpace", a->tt__PTZSpaces::AbsoluteZoomPositionSpace, "tt:Space1DDescription"))
				{	a->tt__PTZSpaces::__sizeAbsoluteZoomPositionSpace++;
					a->tt__PTZSpaces::AbsoluteZoomPositionSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RelativePanTiltTranslationSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::RelativePanTiltTranslationSpace == NULL)
				{	if (soap_blist_RelativePanTiltTranslationSpace1 == NULL)
						soap_blist_RelativePanTiltTranslationSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::RelativePanTiltTranslationSpace = (tt__Space2DDescription **)soap_push_block(soap, soap_blist_RelativePanTiltTranslationSpace1, sizeof(tt__Space2DDescription *));
					if (a->tt__PTZSpaces::RelativePanTiltTranslationSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::RelativePanTiltTranslationSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:RelativePanTiltTranslationSpace", a->tt__PTZSpaces::RelativePanTiltTranslationSpace, "tt:Space2DDescription"))
				{	a->tt__PTZSpaces::__sizeRelativePanTiltTranslationSpace++;
					a->tt__PTZSpaces::RelativePanTiltTranslationSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RelativeZoomTranslationSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::RelativeZoomTranslationSpace == NULL)
				{	if (soap_blist_RelativeZoomTranslationSpace1 == NULL)
						soap_blist_RelativeZoomTranslationSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::RelativeZoomTranslationSpace = (tt__Space1DDescription **)soap_push_block(soap, soap_blist_RelativeZoomTranslationSpace1, sizeof(tt__Space1DDescription *));
					if (a->tt__PTZSpaces::RelativeZoomTranslationSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::RelativeZoomTranslationSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:RelativeZoomTranslationSpace", a->tt__PTZSpaces::RelativeZoomTranslationSpace, "tt:Space1DDescription"))
				{	a->tt__PTZSpaces::__sizeRelativeZoomTranslationSpace++;
					a->tt__PTZSpaces::RelativeZoomTranslationSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ContinuousPanTiltVelocitySpace", 1, NULL))
			{	if (a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace == NULL)
				{	if (soap_blist_ContinuousPanTiltVelocitySpace1 == NULL)
						soap_blist_ContinuousPanTiltVelocitySpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = (tt__Space2DDescription **)soap_push_block(soap, soap_blist_ContinuousPanTiltVelocitySpace1, sizeof(tt__Space2DDescription *));
					if (a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:ContinuousPanTiltVelocitySpace", a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace, "tt:Space2DDescription"))
				{	a->tt__PTZSpaces::__sizeContinuousPanTiltVelocitySpace++;
					a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ContinuousZoomVelocitySpace", 1, NULL))
			{	if (a->tt__PTZSpaces::ContinuousZoomVelocitySpace == NULL)
				{	if (soap_blist_ContinuousZoomVelocitySpace1 == NULL)
						soap_blist_ContinuousZoomVelocitySpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::ContinuousZoomVelocitySpace = (tt__Space1DDescription **)soap_push_block(soap, soap_blist_ContinuousZoomVelocitySpace1, sizeof(tt__Space1DDescription *));
					if (a->tt__PTZSpaces::ContinuousZoomVelocitySpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::ContinuousZoomVelocitySpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:ContinuousZoomVelocitySpace", a->tt__PTZSpaces::ContinuousZoomVelocitySpace, "tt:Space1DDescription"))
				{	a->tt__PTZSpaces::__sizeContinuousZoomVelocitySpace++;
					a->tt__PTZSpaces::ContinuousZoomVelocitySpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PanTiltSpeedSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::PanTiltSpeedSpace == NULL)
				{	if (soap_blist_PanTiltSpeedSpace1 == NULL)
						soap_blist_PanTiltSpeedSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::PanTiltSpeedSpace = (tt__Space1DDescription **)soap_push_block(soap, soap_blist_PanTiltSpeedSpace1, sizeof(tt__Space1DDescription *));
					if (a->tt__PTZSpaces::PanTiltSpeedSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::PanTiltSpeedSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:PanTiltSpeedSpace", a->tt__PTZSpaces::PanTiltSpeedSpace, "tt:Space1DDescription"))
				{	a->tt__PTZSpaces::__sizePanTiltSpeedSpace++;
					a->tt__PTZSpaces::PanTiltSpeedSpace = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ZoomSpeedSpace", 1, NULL))
			{	if (a->tt__PTZSpaces::ZoomSpeedSpace == NULL)
				{	if (soap_blist_ZoomSpeedSpace1 == NULL)
						soap_blist_ZoomSpeedSpace1 = soap_new_block(soap);
					a->tt__PTZSpaces::ZoomSpeedSpace = (tt__Space1DDescription **)soap_push_block(soap, soap_blist_ZoomSpeedSpace1, sizeof(tt__Space1DDescription *));
					if (a->tt__PTZSpaces::ZoomSpeedSpace == NULL)
						return NULL;
					*a->tt__PTZSpaces::ZoomSpeedSpace = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:ZoomSpeedSpace", a->tt__PTZSpaces::ZoomSpeedSpace, "tt:Space1DDescription"))
				{	a->tt__PTZSpaces::__sizeZoomSpeedSpace++;
					a->tt__PTZSpaces::ZoomSpeedSpace = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpacesExtension(soap, "tt:Extension", &(a->tt__PTZSpaces::Extension), "tt:PTZSpacesExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__PTZSpaces::AbsolutePanTiltPositionSpace)
			soap_pop_block(soap, soap_blist_AbsolutePanTiltPositionSpace1);
		if (a->tt__PTZSpaces::__sizeAbsolutePanTiltPositionSpace)
			a->tt__PTZSpaces::AbsolutePanTiltPositionSpace = (tt__Space2DDescription **)soap_save_block(soap, soap_blist_AbsolutePanTiltPositionSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::AbsolutePanTiltPositionSpace = NULL;
			if (soap_blist_AbsolutePanTiltPositionSpace1)
				soap_end_block(soap, soap_blist_AbsolutePanTiltPositionSpace1);
		}
		if (a->tt__PTZSpaces::AbsoluteZoomPositionSpace)
			soap_pop_block(soap, soap_blist_AbsoluteZoomPositionSpace1);
		if (a->tt__PTZSpaces::__sizeAbsoluteZoomPositionSpace)
			a->tt__PTZSpaces::AbsoluteZoomPositionSpace = (tt__Space1DDescription **)soap_save_block(soap, soap_blist_AbsoluteZoomPositionSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::AbsoluteZoomPositionSpace = NULL;
			if (soap_blist_AbsoluteZoomPositionSpace1)
				soap_end_block(soap, soap_blist_AbsoluteZoomPositionSpace1);
		}
		if (a->tt__PTZSpaces::RelativePanTiltTranslationSpace)
			soap_pop_block(soap, soap_blist_RelativePanTiltTranslationSpace1);
		if (a->tt__PTZSpaces::__sizeRelativePanTiltTranslationSpace)
			a->tt__PTZSpaces::RelativePanTiltTranslationSpace = (tt__Space2DDescription **)soap_save_block(soap, soap_blist_RelativePanTiltTranslationSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::RelativePanTiltTranslationSpace = NULL;
			if (soap_blist_RelativePanTiltTranslationSpace1)
				soap_end_block(soap, soap_blist_RelativePanTiltTranslationSpace1);
		}
		if (a->tt__PTZSpaces::RelativeZoomTranslationSpace)
			soap_pop_block(soap, soap_blist_RelativeZoomTranslationSpace1);
		if (a->tt__PTZSpaces::__sizeRelativeZoomTranslationSpace)
			a->tt__PTZSpaces::RelativeZoomTranslationSpace = (tt__Space1DDescription **)soap_save_block(soap, soap_blist_RelativeZoomTranslationSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::RelativeZoomTranslationSpace = NULL;
			if (soap_blist_RelativeZoomTranslationSpace1)
				soap_end_block(soap, soap_blist_RelativeZoomTranslationSpace1);
		}
		if (a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace)
			soap_pop_block(soap, soap_blist_ContinuousPanTiltVelocitySpace1);
		if (a->tt__PTZSpaces::__sizeContinuousPanTiltVelocitySpace)
			a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = (tt__Space2DDescription **)soap_save_block(soap, soap_blist_ContinuousPanTiltVelocitySpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::ContinuousPanTiltVelocitySpace = NULL;
			if (soap_blist_ContinuousPanTiltVelocitySpace1)
				soap_end_block(soap, soap_blist_ContinuousPanTiltVelocitySpace1);
		}
		if (a->tt__PTZSpaces::ContinuousZoomVelocitySpace)
			soap_pop_block(soap, soap_blist_ContinuousZoomVelocitySpace1);
		if (a->tt__PTZSpaces::__sizeContinuousZoomVelocitySpace)
			a->tt__PTZSpaces::ContinuousZoomVelocitySpace = (tt__Space1DDescription **)soap_save_block(soap, soap_blist_ContinuousZoomVelocitySpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::ContinuousZoomVelocitySpace = NULL;
			if (soap_blist_ContinuousZoomVelocitySpace1)
				soap_end_block(soap, soap_blist_ContinuousZoomVelocitySpace1);
		}
		if (a->tt__PTZSpaces::PanTiltSpeedSpace)
			soap_pop_block(soap, soap_blist_PanTiltSpeedSpace1);
		if (a->tt__PTZSpaces::__sizePanTiltSpeedSpace)
			a->tt__PTZSpaces::PanTiltSpeedSpace = (tt__Space1DDescription **)soap_save_block(soap, soap_blist_PanTiltSpeedSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::PanTiltSpeedSpace = NULL;
			if (soap_blist_PanTiltSpeedSpace1)
				soap_end_block(soap, soap_blist_PanTiltSpeedSpace1);
		}
		if (a->tt__PTZSpaces::ZoomSpeedSpace)
			soap_pop_block(soap, soap_blist_ZoomSpeedSpace1);
		if (a->tt__PTZSpaces::__sizeZoomSpeedSpace)
			a->tt__PTZSpaces::ZoomSpeedSpace = (tt__Space1DDescription **)soap_save_block(soap, soap_blist_ZoomSpeedSpace1, NULL, 1);
		else
		{	a->tt__PTZSpaces::ZoomSpeedSpace = NULL;
			if (soap_blist_ZoomSpeedSpace1)
				soap_end_block(soap, soap_blist_ZoomSpeedSpace1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZSpaces *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZSpaces, 0, sizeof(tt__PTZSpaces), 0, soap_copy_tt__PTZSpaces);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZSpaces::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZSpaces);
	if (this->soap_out(soap, tag?tag:"tt:PTZSpaces", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZSpaces::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZSpaces(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZSpaces * SOAP_FMAC4 soap_get_tt__PTZSpaces(struct soap *soap, tt__PTZSpaces *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZSpaces(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZSpaces * SOAP_FMAC2 soap_instantiate_tt__PTZSpaces(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZSpaces(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZSpaces, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZSpaces);
		if (size)
			*size = sizeof(tt__PTZSpaces);
		((tt__PTZSpaces*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZSpaces, n);
		if (size)
			*size = n * sizeof(tt__PTZSpaces);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZSpaces*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZSpaces*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZSpaces(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZSpaces %p -> %p\n", q, p));
	*(tt__PTZSpaces*)p = *(tt__PTZSpaces*)q;
}

void tt__ZoomLimits::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ZoomLimits::Range = NULL;
}

void tt__ZoomLimits::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Space1DDescription(soap, &this->tt__ZoomLimits::Range);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ZoomLimits::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ZoomLimits(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ZoomLimits(struct soap *soap, const char *tag, int id, const tt__ZoomLimits *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ZoomLimits), "tt:ZoomLimits"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ZoomLimits::Range)
	{	if (soap_out_PointerTott__Space1DDescription(soap, "tt:Range", -1, &a->tt__ZoomLimits::Range, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Range"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ZoomLimits::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ZoomLimits(soap, tag, this, type);
}

SOAP_FMAC3 tt__ZoomLimits * SOAP_FMAC4 soap_in_tt__ZoomLimits(struct soap *soap, const char *tag, tt__ZoomLimits *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ZoomLimits *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ZoomLimits, sizeof(tt__ZoomLimits), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ZoomLimits)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ZoomLimits *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Range1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Range1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space1DDescription(soap, "tt:Range", &(a->tt__ZoomLimits::Range), "tt:Space1DDescription"))
				{	soap_flag_Range1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ZoomLimits *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ZoomLimits, 0, sizeof(tt__ZoomLimits), 0, soap_copy_tt__ZoomLimits);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Range1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ZoomLimits::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ZoomLimits);
	if (this->soap_out(soap, tag?tag:"tt:ZoomLimits", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ZoomLimits::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ZoomLimits(soap, this, tag, type);
}

SOAP_FMAC3 tt__ZoomLimits * SOAP_FMAC4 soap_get_tt__ZoomLimits(struct soap *soap, tt__ZoomLimits *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ZoomLimits(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ZoomLimits * SOAP_FMAC2 soap_instantiate_tt__ZoomLimits(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ZoomLimits(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ZoomLimits, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ZoomLimits);
		if (size)
			*size = sizeof(tt__ZoomLimits);
		((tt__ZoomLimits*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ZoomLimits, n);
		if (size)
			*size = n * sizeof(tt__ZoomLimits);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ZoomLimits*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ZoomLimits*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ZoomLimits(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ZoomLimits %p -> %p\n", q, p));
	*(tt__ZoomLimits*)p = *(tt__ZoomLimits*)q;
}

void tt__PanTiltLimits::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PanTiltLimits::Range = NULL;
}

void tt__PanTiltLimits::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Space2DDescription(soap, &this->tt__PanTiltLimits::Range);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PanTiltLimits::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PanTiltLimits(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PanTiltLimits(struct soap *soap, const char *tag, int id, const tt__PanTiltLimits *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PanTiltLimits), "tt:PanTiltLimits"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PanTiltLimits::Range)
	{	if (soap_out_PointerTott__Space2DDescription(soap, "tt:Range", -1, &a->tt__PanTiltLimits::Range, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Range"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PanTiltLimits::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PanTiltLimits(soap, tag, this, type);
}

SOAP_FMAC3 tt__PanTiltLimits * SOAP_FMAC4 soap_in_tt__PanTiltLimits(struct soap *soap, const char *tag, tt__PanTiltLimits *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PanTiltLimits *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PanTiltLimits, sizeof(tt__PanTiltLimits), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PanTiltLimits)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PanTiltLimits *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Range1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Range1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Space2DDescription(soap, "tt:Range", &(a->tt__PanTiltLimits::Range), "tt:Space2DDescription"))
				{	soap_flag_Range1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PanTiltLimits *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PanTiltLimits, 0, sizeof(tt__PanTiltLimits), 0, soap_copy_tt__PanTiltLimits);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Range1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PanTiltLimits::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PanTiltLimits);
	if (this->soap_out(soap, tag?tag:"tt:PanTiltLimits", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PanTiltLimits::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PanTiltLimits(soap, this, tag, type);
}

SOAP_FMAC3 tt__PanTiltLimits * SOAP_FMAC4 soap_get_tt__PanTiltLimits(struct soap *soap, tt__PanTiltLimits *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PanTiltLimits(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PanTiltLimits * SOAP_FMAC2 soap_instantiate_tt__PanTiltLimits(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PanTiltLimits(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PanTiltLimits, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PanTiltLimits);
		if (size)
			*size = sizeof(tt__PanTiltLimits);
		((tt__PanTiltLimits*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PanTiltLimits, n);
		if (size)
			*size = n * sizeof(tt__PanTiltLimits);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PanTiltLimits*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PanTiltLimits*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PanTiltLimits(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PanTiltLimits %p -> %p\n", q, p));
	*(tt__PanTiltLimits*)p = *(tt__PanTiltLimits*)q;
}

void tt__ReverseOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ReverseOptionsExtension::__size = 0;
	this->tt__ReverseOptionsExtension::__any = NULL;
}

void tt__ReverseOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReverseOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReverseOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseOptionsExtension(struct soap *soap, const char *tag, int id, const tt__ReverseOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReverseOptionsExtension), "tt:ReverseOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ReverseOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ReverseOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReverseOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReverseOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReverseOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReverseOptionsExtension * SOAP_FMAC4 soap_in_tt__ReverseOptionsExtension(struct soap *soap, const char *tag, tt__ReverseOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReverseOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseOptionsExtension, sizeof(tt__ReverseOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReverseOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReverseOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReverseOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReverseOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReverseOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReverseOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReverseOptionsExtension::__any, "xsd:byte"))
				{	a->tt__ReverseOptionsExtension::__size++;
					a->tt__ReverseOptionsExtension::__any = NULL;
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
		if (a->tt__ReverseOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReverseOptionsExtension::__size)
			a->tt__ReverseOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReverseOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReverseOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReverseOptionsExtension, 0, sizeof(tt__ReverseOptionsExtension), 0, soap_copy_tt__ReverseOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ReverseOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReverseOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:ReverseOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReverseOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReverseOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReverseOptionsExtension * SOAP_FMAC4 soap_get_tt__ReverseOptionsExtension(struct soap *soap, tt__ReverseOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReverseOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__ReverseOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReverseOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReverseOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReverseOptionsExtension);
		if (size)
			*size = sizeof(tt__ReverseOptionsExtension);
		((tt__ReverseOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReverseOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__ReverseOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReverseOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReverseOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReverseOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReverseOptionsExtension %p -> %p\n", q, p));
	*(tt__ReverseOptionsExtension*)p = *(tt__ReverseOptionsExtension*)q;
}

void tt__ReverseOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ReverseOptions::__sizeMode = 0;
	this->tt__ReverseOptions::Mode = NULL;
	this->tt__ReverseOptions::Extension = NULL;
	this->tt__ReverseOptions::__anyAttribute = NULL;
}

void tt__ReverseOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ReverseOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__ReverseOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__ReverseOptions::Mode + i, SOAP_TYPE_tt__ReverseMode);
		}
	}
	soap_serialize_PointerTott__ReverseOptionsExtension(soap, &this->tt__ReverseOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReverseOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReverseOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReverseOptions(struct soap *soap, const char *tag, int id, const tt__ReverseOptions *a, const char *type)
{
	if (((tt__ReverseOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReverseOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReverseOptions), "tt:ReverseOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ReverseOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__ReverseOptions::__sizeMode; i++)
			if (soap_out_tt__ReverseMode(soap, "tt:Mode", -1, a->tt__ReverseOptions::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ReverseOptionsExtension(soap, "tt:Extension", -1, &(a->tt__ReverseOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ReverseOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReverseOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReverseOptions * SOAP_FMAC4 soap_in_tt__ReverseOptions(struct soap *soap, const char *tag, tt__ReverseOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReverseOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReverseOptions, sizeof(tt__ReverseOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReverseOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReverseOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReverseOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__ReverseOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__ReverseOptions::Mode = (enum tt__ReverseMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__ReverseMode));
					if (a->tt__ReverseOptions::Mode == NULL)
						return NULL;
					soap_default_tt__ReverseMode(soap, a->tt__ReverseOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__ReverseMode(soap, "tt:Mode", a->tt__ReverseOptions::Mode, "tt:ReverseMode"))
				{	a->tt__ReverseOptions::__sizeMode++;
					a->tt__ReverseOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReverseOptionsExtension(soap, "tt:Extension", &(a->tt__ReverseOptions::Extension), "tt:ReverseOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__ReverseOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__ReverseOptions::__sizeMode)
			a->tt__ReverseOptions::Mode = (enum tt__ReverseMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__ReverseOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReverseOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReverseOptions, 0, sizeof(tt__ReverseOptions), 0, soap_copy_tt__ReverseOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ReverseOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReverseOptions);
	if (this->soap_out(soap, tag?tag:"tt:ReverseOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReverseOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReverseOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReverseOptions * SOAP_FMAC4 soap_get_tt__ReverseOptions(struct soap *soap, tt__ReverseOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReverseOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReverseOptions * SOAP_FMAC2 soap_instantiate_tt__ReverseOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReverseOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReverseOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReverseOptions);
		if (size)
			*size = sizeof(tt__ReverseOptions);
		((tt__ReverseOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReverseOptions, n);
		if (size)
			*size = n * sizeof(tt__ReverseOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReverseOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReverseOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReverseOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReverseOptions %p -> %p\n", q, p));
	*(tt__ReverseOptions*)p = *(tt__ReverseOptions*)q;
}

void tt__EFlipOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EFlipOptionsExtension::__size = 0;
	this->tt__EFlipOptionsExtension::__any = NULL;
}

void tt__EFlipOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EFlipOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EFlipOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipOptionsExtension(struct soap *soap, const char *tag, int id, const tt__EFlipOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlipOptionsExtension), "tt:EFlipOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EFlipOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__EFlipOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EFlipOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EFlipOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EFlipOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__EFlipOptionsExtension * SOAP_FMAC4 soap_in_tt__EFlipOptionsExtension(struct soap *soap, const char *tag, tt__EFlipOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EFlipOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipOptionsExtension, sizeof(tt__EFlipOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EFlipOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EFlipOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EFlipOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EFlipOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EFlipOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EFlipOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EFlipOptionsExtension::__any, "xsd:byte"))
				{	a->tt__EFlipOptionsExtension::__size++;
					a->tt__EFlipOptionsExtension::__any = NULL;
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
		if (a->tt__EFlipOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EFlipOptionsExtension::__size)
			a->tt__EFlipOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EFlipOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EFlipOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlipOptionsExtension, 0, sizeof(tt__EFlipOptionsExtension), 0, soap_copy_tt__EFlipOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EFlipOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EFlipOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:EFlipOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EFlipOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EFlipOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__EFlipOptionsExtension * SOAP_FMAC4 soap_get_tt__EFlipOptionsExtension(struct soap *soap, tt__EFlipOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EFlipOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__EFlipOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EFlipOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EFlipOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EFlipOptionsExtension);
		if (size)
			*size = sizeof(tt__EFlipOptionsExtension);
		((tt__EFlipOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EFlipOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__EFlipOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EFlipOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EFlipOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EFlipOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EFlipOptionsExtension %p -> %p\n", q, p));
	*(tt__EFlipOptionsExtension*)p = *(tt__EFlipOptionsExtension*)q;
}

void tt__EFlipOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EFlipOptions::__sizeMode = 0;
	this->tt__EFlipOptions::Mode = NULL;
	this->tt__EFlipOptions::Extension = NULL;
	this->tt__EFlipOptions::__anyAttribute = NULL;
}

void tt__EFlipOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__EFlipOptions::Mode)
	{	int i;
		for (i = 0; i < this->tt__EFlipOptions::__sizeMode; i++)
		{
			soap_embedded(soap, this->tt__EFlipOptions::Mode + i, SOAP_TYPE_tt__EFlipMode);
		}
	}
	soap_serialize_PointerTott__EFlipOptionsExtension(soap, &this->tt__EFlipOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EFlipOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EFlipOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlipOptions(struct soap *soap, const char *tag, int id, const tt__EFlipOptions *a, const char *type)
{
	if (((tt__EFlipOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EFlipOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlipOptions), "tt:EFlipOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EFlipOptions::Mode)
	{	int i;
		for (i = 0; i < a->tt__EFlipOptions::__sizeMode; i++)
			if (soap_out_tt__EFlipMode(soap, "tt:Mode", -1, a->tt__EFlipOptions::Mode + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__EFlipOptionsExtension(soap, "tt:Extension", -1, &(a->tt__EFlipOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__EFlipOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EFlipOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__EFlipOptions * SOAP_FMAC4 soap_in_tt__EFlipOptions(struct soap *soap, const char *tag, tt__EFlipOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EFlipOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlipOptions, sizeof(tt__EFlipOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EFlipOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EFlipOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EFlipOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Mode1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Mode", 1, NULL))
			{	if (a->tt__EFlipOptions::Mode == NULL)
				{	if (soap_blist_Mode1 == NULL)
						soap_blist_Mode1 = soap_new_block(soap);
					a->tt__EFlipOptions::Mode = (enum tt__EFlipMode *)soap_push_block(soap, soap_blist_Mode1, sizeof(enum tt__EFlipMode));
					if (a->tt__EFlipOptions::Mode == NULL)
						return NULL;
					soap_default_tt__EFlipMode(soap, a->tt__EFlipOptions::Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__EFlipMode(soap, "tt:Mode", a->tt__EFlipOptions::Mode, "tt:EFlipMode"))
				{	a->tt__EFlipOptions::__sizeMode++;
					a->tt__EFlipOptions::Mode = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlipOptionsExtension(soap, "tt:Extension", &(a->tt__EFlipOptions::Extension), "tt:EFlipOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__EFlipOptions::Mode)
			soap_pop_block(soap, soap_blist_Mode1);
		if (a->tt__EFlipOptions::__sizeMode)
			a->tt__EFlipOptions::Mode = (enum tt__EFlipMode *)soap_save_block(soap, soap_blist_Mode1, NULL, 1);
		else
		{	a->tt__EFlipOptions::Mode = NULL;
			if (soap_blist_Mode1)
				soap_end_block(soap, soap_blist_Mode1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EFlipOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlipOptions, 0, sizeof(tt__EFlipOptions), 0, soap_copy_tt__EFlipOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EFlipOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EFlipOptions);
	if (this->soap_out(soap, tag?tag:"tt:EFlipOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EFlipOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EFlipOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__EFlipOptions * SOAP_FMAC4 soap_get_tt__EFlipOptions(struct soap *soap, tt__EFlipOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlipOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EFlipOptions * SOAP_FMAC2 soap_instantiate_tt__EFlipOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EFlipOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EFlipOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EFlipOptions);
		if (size)
			*size = sizeof(tt__EFlipOptions);
		((tt__EFlipOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EFlipOptions, n);
		if (size)
			*size = n * sizeof(tt__EFlipOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EFlipOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EFlipOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EFlipOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EFlipOptions %p -> %p\n", q, p));
	*(tt__EFlipOptions*)p = *(tt__EFlipOptions*)q;
}

void tt__PTControlDirectionOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTControlDirectionOptionsExtension::__size = 0;
	this->tt__PTControlDirectionOptionsExtension::__any = NULL;
}

void tt__PTControlDirectionOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTControlDirectionOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTControlDirectionOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionOptionsExtension(struct soap *soap, const char *tag, int id, const tt__PTControlDirectionOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionOptionsExtension), "tt:PTControlDirectionOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTControlDirectionOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTControlDirectionOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTControlDirectionOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTControlDirectionOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTControlDirectionOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTControlDirectionOptionsExtension * SOAP_FMAC4 soap_in_tt__PTControlDirectionOptionsExtension(struct soap *soap, const char *tag, tt__PTControlDirectionOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTControlDirectionOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionOptionsExtension, sizeof(tt__PTControlDirectionOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTControlDirectionOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTControlDirectionOptionsExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTControlDirectionOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTControlDirectionOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTControlDirectionOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTControlDirectionOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTControlDirectionOptionsExtension::__any, "xsd:byte"))
				{	a->tt__PTControlDirectionOptionsExtension::__size++;
					a->tt__PTControlDirectionOptionsExtension::__any = NULL;
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
		if (a->tt__PTControlDirectionOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTControlDirectionOptionsExtension::__size)
			a->tt__PTControlDirectionOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTControlDirectionOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTControlDirectionOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionOptionsExtension, 0, sizeof(tt__PTControlDirectionOptionsExtension), 0, soap_copy_tt__PTControlDirectionOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTControlDirectionOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTControlDirectionOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTControlDirectionOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTControlDirectionOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTControlDirectionOptionsExtension * SOAP_FMAC4 soap_get_tt__PTControlDirectionOptionsExtension(struct soap *soap, tt__PTControlDirectionOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTControlDirectionOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__PTControlDirectionOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTControlDirectionOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTControlDirectionOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTControlDirectionOptionsExtension);
		if (size)
			*size = sizeof(tt__PTControlDirectionOptionsExtension);
		((tt__PTControlDirectionOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTControlDirectionOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__PTControlDirectionOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTControlDirectionOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTControlDirectionOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTControlDirectionOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTControlDirectionOptionsExtension %p -> %p\n", q, p));
	*(tt__PTControlDirectionOptionsExtension*)p = *(tt__PTControlDirectionOptionsExtension*)q;
}

void tt__PTControlDirectionOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTControlDirectionOptions::EFlip = NULL;
	this->tt__PTControlDirectionOptions::Reverse = NULL;
	this->tt__PTControlDirectionOptions::Extension = NULL;
	this->tt__PTControlDirectionOptions::__anyAttribute = NULL;
}

void tt__PTControlDirectionOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__EFlipOptions(soap, &this->tt__PTControlDirectionOptions::EFlip);
	soap_serialize_PointerTott__ReverseOptions(soap, &this->tt__PTControlDirectionOptions::Reverse);
	soap_serialize_PointerTott__PTControlDirectionOptionsExtension(soap, &this->tt__PTControlDirectionOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTControlDirectionOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTControlDirectionOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionOptions(struct soap *soap, const char *tag, int id, const tt__PTControlDirectionOptions *a, const char *type)
{
	if (((tt__PTControlDirectionOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTControlDirectionOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionOptions), "tt:PTControlDirectionOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__EFlipOptions(soap, "tt:EFlip", -1, &(a->tt__PTControlDirectionOptions::EFlip), ""))
		return soap->error;
	if (soap_out_PointerTott__ReverseOptions(soap, "tt:Reverse", -1, &(a->tt__PTControlDirectionOptions::Reverse), ""))
		return soap->error;
	if (soap_out_PointerTott__PTControlDirectionOptionsExtension(soap, "tt:Extension", -1, &(a->tt__PTControlDirectionOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTControlDirectionOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTControlDirectionOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTControlDirectionOptions * SOAP_FMAC4 soap_in_tt__PTControlDirectionOptions(struct soap *soap, const char *tag, tt__PTControlDirectionOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTControlDirectionOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionOptions, sizeof(tt__PTControlDirectionOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTControlDirectionOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTControlDirectionOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTControlDirectionOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_EFlip1 = 1;
	size_t soap_flag_Reverse1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_EFlip1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlipOptions(soap, "tt:EFlip", &(a->tt__PTControlDirectionOptions::EFlip), "tt:EFlipOptions"))
				{	soap_flag_EFlip1--;
					continue;
				}
			if (soap_flag_Reverse1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReverseOptions(soap, "tt:Reverse", &(a->tt__PTControlDirectionOptions::Reverse), "tt:ReverseOptions"))
				{	soap_flag_Reverse1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionOptionsExtension(soap, "tt:Extension", &(a->tt__PTControlDirectionOptions::Extension), "tt:PTControlDirectionOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTControlDirectionOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionOptions, 0, sizeof(tt__PTControlDirectionOptions), 0, soap_copy_tt__PTControlDirectionOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTControlDirectionOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTControlDirectionOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTControlDirectionOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTControlDirectionOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTControlDirectionOptions * SOAP_FMAC4 soap_get_tt__PTControlDirectionOptions(struct soap *soap, tt__PTControlDirectionOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTControlDirectionOptions * SOAP_FMAC2 soap_instantiate_tt__PTControlDirectionOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTControlDirectionOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTControlDirectionOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTControlDirectionOptions);
		if (size)
			*size = sizeof(tt__PTControlDirectionOptions);
		((tt__PTControlDirectionOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTControlDirectionOptions, n);
		if (size)
			*size = n * sizeof(tt__PTControlDirectionOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTControlDirectionOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTControlDirectionOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTControlDirectionOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTControlDirectionOptions %p -> %p\n", q, p));
	*(tt__PTControlDirectionOptions*)p = *(tt__PTControlDirectionOptions*)q;
}

void tt__PTZConfigurationOptions2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZConfigurationOptions2::__size = 0;
	this->tt__PTZConfigurationOptions2::__any = NULL;
}

void tt__PTZConfigurationOptions2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZConfigurationOptions2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZConfigurationOptions2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationOptions2(struct soap *soap, const char *tag, int id, const tt__PTZConfigurationOptions2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationOptions2), "tt:PTZConfigurationOptions2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZConfigurationOptions2::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZConfigurationOptions2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZConfigurationOptions2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZConfigurationOptions2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZConfigurationOptions2(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZConfigurationOptions2 * SOAP_FMAC4 soap_in_tt__PTZConfigurationOptions2(struct soap *soap, const char *tag, tt__PTZConfigurationOptions2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZConfigurationOptions2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationOptions2, sizeof(tt__PTZConfigurationOptions2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZConfigurationOptions2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZConfigurationOptions2 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZConfigurationOptions2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZConfigurationOptions2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZConfigurationOptions2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZConfigurationOptions2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZConfigurationOptions2::__any, "xsd:byte"))
				{	a->tt__PTZConfigurationOptions2::__size++;
					a->tt__PTZConfigurationOptions2::__any = NULL;
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
		if (a->tt__PTZConfigurationOptions2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZConfigurationOptions2::__size)
			a->tt__PTZConfigurationOptions2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZConfigurationOptions2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZConfigurationOptions2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationOptions2, 0, sizeof(tt__PTZConfigurationOptions2), 0, soap_copy_tt__PTZConfigurationOptions2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZConfigurationOptions2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationOptions2);
	if (this->soap_out(soap, tag?tag:"tt:PTZConfigurationOptions2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZConfigurationOptions2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZConfigurationOptions2(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZConfigurationOptions2 * SOAP_FMAC4 soap_get_tt__PTZConfigurationOptions2(struct soap *soap, tt__PTZConfigurationOptions2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationOptions2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZConfigurationOptions2 * SOAP_FMAC2 soap_instantiate_tt__PTZConfigurationOptions2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZConfigurationOptions2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZConfigurationOptions2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZConfigurationOptions2);
		if (size)
			*size = sizeof(tt__PTZConfigurationOptions2);
		((tt__PTZConfigurationOptions2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZConfigurationOptions2, n);
		if (size)
			*size = n * sizeof(tt__PTZConfigurationOptions2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZConfigurationOptions2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZConfigurationOptions2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZConfigurationOptions2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZConfigurationOptions2 %p -> %p\n", q, p));
	*(tt__PTZConfigurationOptions2*)p = *(tt__PTZConfigurationOptions2*)q;
}

void tt__PTZConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZConfigurationOptions::Spaces = NULL;
	this->tt__PTZConfigurationOptions::PTZTimeout = NULL;
	this->tt__PTZConfigurationOptions::__size = 0;
	this->tt__PTZConfigurationOptions::__any = NULL;
	this->tt__PTZConfigurationOptions::PTControlDirection = NULL;
	this->tt__PTZConfigurationOptions::Extension = NULL;
	this->tt__PTZConfigurationOptions::__anyAttribute = NULL;
}

void tt__PTZConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZSpaces(soap, &this->tt__PTZConfigurationOptions::Spaces);
	soap_serialize_PointerTott__DurationRange(soap, &this->tt__PTZConfigurationOptions::PTZTimeout);
	soap_serialize_PointerTott__PTControlDirectionOptions(soap, &this->tt__PTZConfigurationOptions::PTControlDirection);
	soap_serialize_PointerTott__PTZConfigurationOptions2(soap, &this->tt__PTZConfigurationOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__PTZConfigurationOptions *a, const char *type)
{
	if (((tt__PTZConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationOptions), "tt:PTZConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZConfigurationOptions::Spaces)
	{	if (soap_out_PointerTott__PTZSpaces(soap, "tt:Spaces", -1, &a->tt__PTZConfigurationOptions::Spaces, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Spaces"))
		return soap->error;
	if (a->tt__PTZConfigurationOptions::PTZTimeout)
	{	if (soap_out_PointerTott__DurationRange(soap, "tt:PTZTimeout", -1, &a->tt__PTZConfigurationOptions::PTZTimeout, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PTZTimeout"))
		return soap->error;
	if (a->tt__PTZConfigurationOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZConfigurationOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZConfigurationOptions::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTControlDirectionOptions(soap, "tt:PTControlDirection", -1, &(a->tt__PTZConfigurationOptions::PTControlDirection), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationOptions2(soap, "tt:Extension", -1, &(a->tt__PTZConfigurationOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZConfigurationOptions * SOAP_FMAC4 soap_in_tt__PTZConfigurationOptions(struct soap *soap, const char *tag, tt__PTZConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationOptions, sizeof(tt__PTZConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Spaces1 = 1;
	size_t soap_flag_PTZTimeout1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_PTControlDirection1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Spaces1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpaces(soap, "tt:Spaces", &(a->tt__PTZConfigurationOptions::Spaces), "tt:PTZSpaces"))
				{	soap_flag_Spaces1--;
					continue;
				}
			if (soap_flag_PTZTimeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DurationRange(soap, "tt:PTZTimeout", &(a->tt__PTZConfigurationOptions::PTZTimeout), "tt:DurationRange"))
				{	soap_flag_PTZTimeout1--;
					continue;
				}
			if (soap_flag_PTControlDirection1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionOptions(soap, "tt:PTControlDirection", &(a->tt__PTZConfigurationOptions::PTControlDirection), "tt:PTControlDirectionOptions"))
				{	soap_flag_PTControlDirection1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationOptions2(soap, "tt:Extension", &(a->tt__PTZConfigurationOptions::Extension), "tt:PTZConfigurationOptions2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZConfigurationOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZConfigurationOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZConfigurationOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZConfigurationOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZConfigurationOptions::__any, "xsd:byte"))
				{	a->tt__PTZConfigurationOptions::__size++;
					a->tt__PTZConfigurationOptions::__any = NULL;
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
		if (a->tt__PTZConfigurationOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZConfigurationOptions::__size)
			a->tt__PTZConfigurationOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZConfigurationOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationOptions, 0, sizeof(tt__PTZConfigurationOptions), 0, soap_copy_tt__PTZConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Spaces1 > 0 || soap_flag_PTZTimeout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZConfigurationOptions * SOAP_FMAC4 soap_get_tt__PTZConfigurationOptions(struct soap *soap, tt__PTZConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__PTZConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZConfigurationOptions);
		if (size)
			*size = sizeof(tt__PTZConfigurationOptions);
		((tt__PTZConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZConfigurationOptions %p -> %p\n", q, p));
	*(tt__PTZConfigurationOptions*)p = *(tt__PTZConfigurationOptions*)q;
}

void tt__Reverse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReverseMode(soap, &this->tt__Reverse::Mode);
	this->tt__Reverse::__size = 0;
	this->tt__Reverse::__any = NULL;
	this->tt__Reverse::__anyAttribute = NULL;
}

void tt__Reverse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Reverse::Mode, SOAP_TYPE_tt__ReverseMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Reverse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Reverse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Reverse(struct soap *soap, const char *tag, int id, const tt__Reverse *a, const char *type)
{
	if (((tt__Reverse*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Reverse*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Reverse), "tt:Reverse"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ReverseMode(soap, "tt:Mode", -1, &(a->tt__Reverse::Mode), ""))
		return soap->error;
	if (a->tt__Reverse::__any)
	{	int i;
		for (i = 0; i < a->tt__Reverse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Reverse::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Reverse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Reverse(soap, tag, this, type);
}

SOAP_FMAC3 tt__Reverse * SOAP_FMAC4 soap_in_tt__Reverse(struct soap *soap, const char *tag, tt__Reverse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Reverse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Reverse, sizeof(tt__Reverse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Reverse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Reverse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Reverse*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReverseMode(soap, "tt:Mode", &(a->tt__Reverse::Mode), "tt:ReverseMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Reverse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Reverse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Reverse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Reverse::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Reverse::__any, "xsd:byte"))
				{	a->tt__Reverse::__size++;
					a->tt__Reverse::__any = NULL;
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
		if (a->tt__Reverse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Reverse::__size)
			a->tt__Reverse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Reverse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Reverse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Reverse, 0, sizeof(tt__Reverse), 0, soap_copy_tt__Reverse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Reverse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Reverse);
	if (this->soap_out(soap, tag?tag:"tt:Reverse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Reverse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Reverse(soap, this, tag, type);
}

SOAP_FMAC3 tt__Reverse * SOAP_FMAC4 soap_get_tt__Reverse(struct soap *soap, tt__Reverse *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Reverse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Reverse * SOAP_FMAC2 soap_instantiate_tt__Reverse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Reverse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Reverse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Reverse);
		if (size)
			*size = sizeof(tt__Reverse);
		((tt__Reverse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Reverse, n);
		if (size)
			*size = n * sizeof(tt__Reverse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Reverse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Reverse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Reverse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Reverse %p -> %p\n", q, p));
	*(tt__Reverse*)p = *(tt__Reverse*)q;
}

void tt__EFlip::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__EFlipMode(soap, &this->tt__EFlip::Mode);
	this->tt__EFlip::__size = 0;
	this->tt__EFlip::__any = NULL;
	this->tt__EFlip::__anyAttribute = NULL;
}

void tt__EFlip::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__EFlip::Mode, SOAP_TYPE_tt__EFlipMode);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EFlip::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EFlip(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EFlip(struct soap *soap, const char *tag, int id, const tt__EFlip *a, const char *type)
{
	if (((tt__EFlip*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EFlip*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EFlip), "tt:EFlip"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__EFlipMode(soap, "tt:Mode", -1, &(a->tt__EFlip::Mode), ""))
		return soap->error;
	if (a->tt__EFlip::__any)
	{	int i;
		for (i = 0; i < a->tt__EFlip::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EFlip::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EFlip::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EFlip(soap, tag, this, type);
}

SOAP_FMAC3 tt__EFlip * SOAP_FMAC4 soap_in_tt__EFlip(struct soap *soap, const char *tag, tt__EFlip *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EFlip *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EFlip, sizeof(tt__EFlip), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EFlip)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EFlip *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EFlip*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__EFlipMode(soap, "tt:Mode", &(a->tt__EFlip::Mode), "tt:EFlipMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EFlip::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EFlip::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EFlip::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EFlip::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EFlip::__any, "xsd:byte"))
				{	a->tt__EFlip::__size++;
					a->tt__EFlip::__any = NULL;
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
		if (a->tt__EFlip::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EFlip::__size)
			a->tt__EFlip::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EFlip::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EFlip *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EFlip, 0, sizeof(tt__EFlip), 0, soap_copy_tt__EFlip);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__EFlip::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EFlip);
	if (this->soap_out(soap, tag?tag:"tt:EFlip", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EFlip::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EFlip(soap, this, tag, type);
}

SOAP_FMAC3 tt__EFlip * SOAP_FMAC4 soap_get_tt__EFlip(struct soap *soap, tt__EFlip *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EFlip(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EFlip * SOAP_FMAC2 soap_instantiate_tt__EFlip(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EFlip(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EFlip, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EFlip);
		if (size)
			*size = sizeof(tt__EFlip);
		((tt__EFlip*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EFlip, n);
		if (size)
			*size = n * sizeof(tt__EFlip);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EFlip*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EFlip*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EFlip(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EFlip %p -> %p\n", q, p));
	*(tt__EFlip*)p = *(tt__EFlip*)q;
}

void tt__PTControlDirectionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTControlDirectionExtension::__size = 0;
	this->tt__PTControlDirectionExtension::__any = NULL;
	this->tt__PTControlDirectionExtension::__anyAttribute = NULL;
}

void tt__PTControlDirectionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTControlDirectionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTControlDirectionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirectionExtension(struct soap *soap, const char *tag, int id, const tt__PTControlDirectionExtension *a, const char *type)
{
	if (((tt__PTControlDirectionExtension*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTControlDirectionExtension*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirectionExtension), "tt:PTControlDirectionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTControlDirectionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTControlDirectionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTControlDirectionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTControlDirectionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTControlDirectionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTControlDirectionExtension * SOAP_FMAC4 soap_in_tt__PTControlDirectionExtension(struct soap *soap, const char *tag, tt__PTControlDirectionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTControlDirectionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirectionExtension, sizeof(tt__PTControlDirectionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTControlDirectionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTControlDirectionExtension *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTControlDirectionExtension*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTControlDirectionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTControlDirectionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTControlDirectionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTControlDirectionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTControlDirectionExtension::__any, "xsd:byte"))
				{	a->tt__PTControlDirectionExtension::__size++;
					a->tt__PTControlDirectionExtension::__any = NULL;
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
		if (a->tt__PTControlDirectionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTControlDirectionExtension::__size)
			a->tt__PTControlDirectionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTControlDirectionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTControlDirectionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirectionExtension, 0, sizeof(tt__PTControlDirectionExtension), 0, soap_copy_tt__PTControlDirectionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTControlDirectionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirectionExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTControlDirectionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTControlDirectionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTControlDirectionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTControlDirectionExtension * SOAP_FMAC4 soap_get_tt__PTControlDirectionExtension(struct soap *soap, tt__PTControlDirectionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirectionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTControlDirectionExtension * SOAP_FMAC2 soap_instantiate_tt__PTControlDirectionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTControlDirectionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTControlDirectionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTControlDirectionExtension);
		if (size)
			*size = sizeof(tt__PTControlDirectionExtension);
		((tt__PTControlDirectionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTControlDirectionExtension, n);
		if (size)
			*size = n * sizeof(tt__PTControlDirectionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTControlDirectionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTControlDirectionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTControlDirectionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTControlDirectionExtension %p -> %p\n", q, p));
	*(tt__PTControlDirectionExtension*)p = *(tt__PTControlDirectionExtension*)q;
}

void tt__PTControlDirection::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTControlDirection::EFlip = NULL;
	this->tt__PTControlDirection::Reverse = NULL;
	this->tt__PTControlDirection::Extension = NULL;
	this->tt__PTControlDirection::__anyAttribute = NULL;
}

void tt__PTControlDirection::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__EFlip(soap, &this->tt__PTControlDirection::EFlip);
	soap_serialize_PointerTott__Reverse(soap, &this->tt__PTControlDirection::Reverse);
	soap_serialize_PointerTott__PTControlDirectionExtension(soap, &this->tt__PTControlDirection::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTControlDirection::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTControlDirection(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTControlDirection(struct soap *soap, const char *tag, int id, const tt__PTControlDirection *a, const char *type)
{
	if (((tt__PTControlDirection*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTControlDirection*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTControlDirection), "tt:PTControlDirection"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__EFlip(soap, "tt:EFlip", -1, &(a->tt__PTControlDirection::EFlip), ""))
		return soap->error;
	if (soap_out_PointerTott__Reverse(soap, "tt:Reverse", -1, &(a->tt__PTControlDirection::Reverse), ""))
		return soap->error;
	if (soap_out_PointerTott__PTControlDirectionExtension(soap, "tt:Extension", -1, &(a->tt__PTControlDirection::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTControlDirection::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTControlDirection(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTControlDirection * SOAP_FMAC4 soap_in_tt__PTControlDirection(struct soap *soap, const char *tag, tt__PTControlDirection *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTControlDirection *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTControlDirection, sizeof(tt__PTControlDirection), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTControlDirection)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTControlDirection *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTControlDirection*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_EFlip1 = 1;
	size_t soap_flag_Reverse1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_EFlip1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EFlip(soap, "tt:EFlip", &(a->tt__PTControlDirection::EFlip), "tt:EFlip"))
				{	soap_flag_EFlip1--;
					continue;
				}
			if (soap_flag_Reverse1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Reverse(soap, "tt:Reverse", &(a->tt__PTControlDirection::Reverse), "tt:Reverse"))
				{	soap_flag_Reverse1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirectionExtension(soap, "tt:Extension", &(a->tt__PTControlDirection::Extension), "tt:PTControlDirectionExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTControlDirection *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTControlDirection, 0, sizeof(tt__PTControlDirection), 0, soap_copy_tt__PTControlDirection);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTControlDirection::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTControlDirection);
	if (this->soap_out(soap, tag?tag:"tt:PTControlDirection", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTControlDirection::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTControlDirection(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTControlDirection * SOAP_FMAC4 soap_get_tt__PTControlDirection(struct soap *soap, tt__PTControlDirection *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTControlDirection(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTControlDirection * SOAP_FMAC2 soap_instantiate_tt__PTControlDirection(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTControlDirection(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTControlDirection, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTControlDirection);
		if (size)
			*size = sizeof(tt__PTControlDirection);
		((tt__PTControlDirection*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTControlDirection, n);
		if (size)
			*size = n * sizeof(tt__PTControlDirection);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTControlDirection*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTControlDirection*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTControlDirection(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTControlDirection %p -> %p\n", q, p));
	*(tt__PTControlDirection*)p = *(tt__PTControlDirection*)q;
}

void tt__PTZConfigurationExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZConfigurationExtension2::__size = 0;
	this->tt__PTZConfigurationExtension2::__any = NULL;
}

void tt__PTZConfigurationExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZConfigurationExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZConfigurationExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationExtension2(struct soap *soap, const char *tag, int id, const tt__PTZConfigurationExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationExtension2), "tt:PTZConfigurationExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZConfigurationExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZConfigurationExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZConfigurationExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZConfigurationExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZConfigurationExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__PTZConfigurationExtension2(struct soap *soap, const char *tag, tt__PTZConfigurationExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZConfigurationExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationExtension2, sizeof(tt__PTZConfigurationExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZConfigurationExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZConfigurationExtension2 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZConfigurationExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZConfigurationExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZConfigurationExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZConfigurationExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZConfigurationExtension2::__any, "xsd:byte"))
				{	a->tt__PTZConfigurationExtension2::__size++;
					a->tt__PTZConfigurationExtension2::__any = NULL;
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
		if (a->tt__PTZConfigurationExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZConfigurationExtension2::__size)
			a->tt__PTZConfigurationExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZConfigurationExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationExtension2, 0, sizeof(tt__PTZConfigurationExtension2), 0, soap_copy_tt__PTZConfigurationExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZConfigurationExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationExtension2);
	if (this->soap_out(soap, tag?tag:"tt:PTZConfigurationExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZConfigurationExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZConfigurationExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__PTZConfigurationExtension2(struct soap *soap, tt__PTZConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZConfigurationExtension2 * SOAP_FMAC2 soap_instantiate_tt__PTZConfigurationExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZConfigurationExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZConfigurationExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZConfigurationExtension2);
		if (size)
			*size = sizeof(tt__PTZConfigurationExtension2);
		((tt__PTZConfigurationExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZConfigurationExtension2, n);
		if (size)
			*size = n * sizeof(tt__PTZConfigurationExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZConfigurationExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZConfigurationExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZConfigurationExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZConfigurationExtension2 %p -> %p\n", q, p));
	*(tt__PTZConfigurationExtension2*)p = *(tt__PTZConfigurationExtension2*)q;
}

void tt__PTZConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZConfigurationExtension::__size = 0;
	this->tt__PTZConfigurationExtension::__any = NULL;
	this->tt__PTZConfigurationExtension::PTControlDirection = NULL;
	this->tt__PTZConfigurationExtension::Extension = NULL;
}

void tt__PTZConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTControlDirection(soap, &this->tt__PTZConfigurationExtension::PTControlDirection);
	soap_serialize_PointerTott__PTZConfigurationExtension2(soap, &this->tt__PTZConfigurationExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__PTZConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfigurationExtension), "tt:PTZConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTControlDirection(soap, "tt:PTControlDirection", -1, &(a->tt__PTZConfigurationExtension::PTControlDirection), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationExtension2(soap, "tt:Extension", -1, &(a->tt__PTZConfigurationExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZConfigurationExtension * SOAP_FMAC4 soap_in_tt__PTZConfigurationExtension(struct soap *soap, const char *tag, tt__PTZConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfigurationExtension, sizeof(tt__PTZConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_PTControlDirection1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PTControlDirection1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTControlDirection(soap, "tt:PTControlDirection", &(a->tt__PTZConfigurationExtension::PTControlDirection), "tt:PTControlDirection"))
				{	soap_flag_PTControlDirection1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationExtension2(soap, "tt:Extension", &(a->tt__PTZConfigurationExtension::Extension), "tt:PTZConfigurationExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__PTZConfigurationExtension::__size++;
					a->tt__PTZConfigurationExtension::__any = NULL;
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
		if (a->tt__PTZConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZConfigurationExtension::__size)
			a->tt__PTZConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfigurationExtension, 0, sizeof(tt__PTZConfigurationExtension), 0, soap_copy_tt__PTZConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZConfigurationExtension * SOAP_FMAC4 soap_get_tt__PTZConfigurationExtension(struct soap *soap, tt__PTZConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__PTZConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZConfigurationExtension);
		if (size)
			*size = sizeof(tt__PTZConfigurationExtension);
		((tt__PTZConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZConfigurationExtension %p -> %p\n", q, p));
	*(tt__PTZConfigurationExtension*)p = *(tt__PTZConfigurationExtension*)q;
}

void tt__PTZConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__PTZConfiguration::NodeToken);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultAbsolutePantTiltPositionSpace);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultAbsoluteZoomPositionSpace);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultRelativePanTiltTranslationSpace);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultRelativeZoomTranslationSpace);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultContinuousPanTiltVelocitySpace);
	soap_default_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultContinuousZoomVelocitySpace);
	this->tt__PTZConfiguration::DefaultPTZSpeed = NULL;
	this->tt__PTZConfiguration::DefaultPTZTimeout = NULL;
	this->tt__PTZConfiguration::PanTiltLimits = NULL;
	this->tt__PTZConfiguration::ZoomLimits = NULL;
	this->tt__PTZConfiguration::Extension = NULL;
	this->tt__PTZConfiguration::__anyAttribute = NULL;
}

void tt__PTZConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PTZConfiguration::NodeToken);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultAbsolutePantTiltPositionSpace);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultAbsoluteZoomPositionSpace);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultRelativePanTiltTranslationSpace);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultRelativeZoomTranslationSpace);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultContinuousPanTiltVelocitySpace);
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZConfiguration::DefaultContinuousZoomVelocitySpace);
	soap_serialize_PointerTott__PTZSpeed(soap, &this->tt__PTZConfiguration::DefaultPTZSpeed);
	soap_serialize_PointerToxsd__duration(soap, &this->tt__PTZConfiguration::DefaultPTZTimeout);
	soap_serialize_PointerTott__PanTiltLimits(soap, &this->tt__PTZConfiguration::PanTiltLimits);
	soap_serialize_PointerTott__ZoomLimits(soap, &this->tt__PTZConfiguration::ZoomLimits);
	soap_serialize_PointerTott__PTZConfigurationExtension(soap, &this->tt__PTZConfiguration::Extension);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZConfiguration(struct soap *soap, const char *tag, int id, const tt__PTZConfiguration *a, const char *type)
{
	if (((tt__PTZConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZConfiguration), "tt:PTZConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ConfigurationEntity::Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->tt__ConfigurationEntity::Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &(a->tt__ConfigurationEntity::UseCount), ""))
		return soap->error;
	if (a->tt__PTZConfiguration::NodeToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:NodeToken", -1, &a->tt__PTZConfiguration::NodeToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:NodeToken"))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultAbsolutePantTiltPositionSpace", -1, &(a->tt__PTZConfiguration::DefaultAbsolutePantTiltPositionSpace), ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultAbsoluteZoomPositionSpace", -1, &(a->tt__PTZConfiguration::DefaultAbsoluteZoomPositionSpace), ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultRelativePanTiltTranslationSpace", -1, &(a->tt__PTZConfiguration::DefaultRelativePanTiltTranslationSpace), ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultRelativeZoomTranslationSpace", -1, &(a->tt__PTZConfiguration::DefaultRelativeZoomTranslationSpace), ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultContinuousPanTiltVelocitySpace", -1, &(a->tt__PTZConfiguration::DefaultContinuousPanTiltVelocitySpace), ""))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:DefaultContinuousZoomVelocitySpace", -1, &(a->tt__PTZConfiguration::DefaultContinuousZoomVelocitySpace), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZSpeed(soap, "tt:DefaultPTZSpeed", -1, &(a->tt__PTZConfiguration::DefaultPTZSpeed), ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:DefaultPTZTimeout", -1, &(a->tt__PTZConfiguration::DefaultPTZTimeout), ""))
		return soap->error;
	if (soap_out_PointerTott__PanTiltLimits(soap, "tt:PanTiltLimits", -1, &(a->tt__PTZConfiguration::PanTiltLimits), ""))
		return soap->error;
	if (soap_out_PointerTott__ZoomLimits(soap, "tt:ZoomLimits", -1, &(a->tt__PTZConfiguration::ZoomLimits), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__PTZConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZConfiguration * SOAP_FMAC4 soap_in_tt__PTZConfiguration(struct soap *soap, const char *tag, tt__PTZConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZConfiguration, sizeof(tt__PTZConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_NodeToken1 = 1;
	size_t soap_flag_DefaultAbsolutePantTiltPositionSpace1 = 1;
	size_t soap_flag_DefaultAbsoluteZoomPositionSpace1 = 1;
	size_t soap_flag_DefaultRelativePanTiltTranslationSpace1 = 1;
	size_t soap_flag_DefaultRelativeZoomTranslationSpace1 = 1;
	size_t soap_flag_DefaultContinuousPanTiltVelocitySpace1 = 1;
	size_t soap_flag_DefaultContinuousZoomVelocitySpace1 = 1;
	size_t soap_flag_DefaultPTZSpeed1 = 1;
	size_t soap_flag_DefaultPTZTimeout1 = 1;
	size_t soap_flag_PanTiltLimits1 = 1;
	size_t soap_flag_ZoomLimits1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name2 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &(a->tt__ConfigurationEntity::Name), "tt:Name"))
				{	soap_flag_Name2--;
					continue;
				}
			if (soap_flag_UseCount2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:UseCount", &(a->tt__ConfigurationEntity::UseCount), "xsd:int"))
				{	soap_flag_UseCount2--;
					continue;
				}
			if (soap_flag_NodeToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:NodeToken", &(a->tt__PTZConfiguration::NodeToken), "tt:ReferenceToken"))
				{	soap_flag_NodeToken1--;
					continue;
				}
			if (soap_flag_DefaultAbsolutePantTiltPositionSpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultAbsolutePantTiltPositionSpace", &(a->tt__PTZConfiguration::DefaultAbsolutePantTiltPositionSpace), "xsd:anyURI"))
				{	soap_flag_DefaultAbsolutePantTiltPositionSpace1--;
					continue;
				}
			if (soap_flag_DefaultAbsoluteZoomPositionSpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultAbsoluteZoomPositionSpace", &(a->tt__PTZConfiguration::DefaultAbsoluteZoomPositionSpace), "xsd:anyURI"))
				{	soap_flag_DefaultAbsoluteZoomPositionSpace1--;
					continue;
				}
			if (soap_flag_DefaultRelativePanTiltTranslationSpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultRelativePanTiltTranslationSpace", &(a->tt__PTZConfiguration::DefaultRelativePanTiltTranslationSpace), "xsd:anyURI"))
				{	soap_flag_DefaultRelativePanTiltTranslationSpace1--;
					continue;
				}
			if (soap_flag_DefaultRelativeZoomTranslationSpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultRelativeZoomTranslationSpace", &(a->tt__PTZConfiguration::DefaultRelativeZoomTranslationSpace), "xsd:anyURI"))
				{	soap_flag_DefaultRelativeZoomTranslationSpace1--;
					continue;
				}
			if (soap_flag_DefaultContinuousPanTiltVelocitySpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultContinuousPanTiltVelocitySpace", &(a->tt__PTZConfiguration::DefaultContinuousPanTiltVelocitySpace), "xsd:anyURI"))
				{	soap_flag_DefaultContinuousPanTiltVelocitySpace1--;
					continue;
				}
			if (soap_flag_DefaultContinuousZoomVelocitySpace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:DefaultContinuousZoomVelocitySpace", &(a->tt__PTZConfiguration::DefaultContinuousZoomVelocitySpace), "xsd:anyURI"))
				{	soap_flag_DefaultContinuousZoomVelocitySpace1--;
					continue;
				}
			if (soap_flag_DefaultPTZSpeed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpeed(soap, "tt:DefaultPTZSpeed", &(a->tt__PTZConfiguration::DefaultPTZSpeed), "tt:PTZSpeed"))
				{	soap_flag_DefaultPTZSpeed1--;
					continue;
				}
			if (soap_flag_DefaultPTZTimeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:DefaultPTZTimeout", &(a->tt__PTZConfiguration::DefaultPTZTimeout), "xsd:duration"))
				{	soap_flag_DefaultPTZTimeout1--;
					continue;
				}
			if (soap_flag_PanTiltLimits1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PanTiltLimits(soap, "tt:PanTiltLimits", &(a->tt__PTZConfiguration::PanTiltLimits), "tt:PanTiltLimits"))
				{	soap_flag_PanTiltLimits1--;
					continue;
				}
			if (soap_flag_ZoomLimits1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ZoomLimits(soap, "tt:ZoomLimits", &(a->tt__PTZConfiguration::ZoomLimits), "tt:ZoomLimits"))
				{	soap_flag_ZoomLimits1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZConfigurationExtension(soap, "tt:Extension", &(a->tt__PTZConfiguration::Extension), "tt:PTZConfigurationExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap_flag___item3 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item3--;
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
	{	a = (tt__PTZConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZConfiguration, 0, sizeof(tt__PTZConfiguration), 0, soap_copy_tt__PTZConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_NodeToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:PTZConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZConfiguration * SOAP_FMAC4 soap_get_tt__PTZConfiguration(struct soap *soap, tt__PTZConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZConfiguration * SOAP_FMAC2 soap_instantiate_tt__PTZConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZConfiguration);
		if (size)
			*size = sizeof(tt__PTZConfiguration);
		((tt__PTZConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZConfiguration, n);
		if (size)
			*size = n * sizeof(tt__PTZConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZConfiguration %p -> %p\n", q, p));
	*(tt__PTZConfiguration*)p = *(tt__PTZConfiguration*)q;
}

void tt__PTZPresetTourSupportedExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPresetTourSupportedExtension::__size = 0;
	this->tt__PTZPresetTourSupportedExtension::__any = NULL;
}

void tt__PTZPresetTourSupportedExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourSupportedExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourSupportedExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSupportedExtension(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourSupportedExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSupportedExtension), "tt:PTZPresetTourSupportedExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPresetTourSupportedExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourSupportedExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPresetTourSupportedExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourSupportedExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourSupportedExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourSupportedExtension * SOAP_FMAC4 soap_in_tt__PTZPresetTourSupportedExtension(struct soap *soap, const char *tag, tt__PTZPresetTourSupportedExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourSupportedExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSupportedExtension, sizeof(tt__PTZPresetTourSupportedExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourSupportedExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourSupportedExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPresetTourSupportedExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPresetTourSupportedExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPresetTourSupportedExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPresetTourSupportedExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPresetTourSupportedExtension::__any, "xsd:byte"))
				{	a->tt__PTZPresetTourSupportedExtension::__size++;
					a->tt__PTZPresetTourSupportedExtension::__any = NULL;
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
		if (a->tt__PTZPresetTourSupportedExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPresetTourSupportedExtension::__size)
			a->tt__PTZPresetTourSupportedExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPresetTourSupportedExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourSupportedExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSupportedExtension, 0, sizeof(tt__PTZPresetTourSupportedExtension), 0, soap_copy_tt__PTZPresetTourSupportedExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZPresetTourSupportedExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSupportedExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourSupportedExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourSupportedExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourSupportedExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourSupportedExtension * SOAP_FMAC4 soap_get_tt__PTZPresetTourSupportedExtension(struct soap *soap, tt__PTZPresetTourSupportedExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSupportedExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourSupportedExtension * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourSupportedExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourSupportedExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourSupportedExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourSupportedExtension);
		if (size)
			*size = sizeof(tt__PTZPresetTourSupportedExtension);
		((tt__PTZPresetTourSupportedExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourSupportedExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourSupportedExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourSupportedExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourSupportedExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourSupportedExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourSupportedExtension %p -> %p\n", q, p));
	*(tt__PTZPresetTourSupportedExtension*)p = *(tt__PTZPresetTourSupportedExtension*)q;
}

void tt__PTZPresetTourSupported::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->tt__PTZPresetTourSupported::MaximumNumberOfPresetTours);
	this->tt__PTZPresetTourSupported::__sizePTZPresetTourOperation = 0;
	this->tt__PTZPresetTourSupported::PTZPresetTourOperation = NULL;
	this->tt__PTZPresetTourSupported::Extension = NULL;
	this->tt__PTZPresetTourSupported::__anyAttribute = NULL;
}

void tt__PTZPresetTourSupported::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZPresetTourSupported::MaximumNumberOfPresetTours, SOAP_TYPE_int);
	if (this->tt__PTZPresetTourSupported::PTZPresetTourOperation)
	{	int i;
		for (i = 0; i < this->tt__PTZPresetTourSupported::__sizePTZPresetTourOperation; i++)
		{
			soap_embedded(soap, this->tt__PTZPresetTourSupported::PTZPresetTourOperation + i, SOAP_TYPE_tt__PTZPresetTourOperation);
		}
	}
	soap_serialize_PointerTott__PTZPresetTourSupportedExtension(soap, &this->tt__PTZPresetTourSupported::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPresetTourSupported::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPresetTourSupported(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPresetTourSupported(struct soap *soap, const char *tag, int id, const tt__PTZPresetTourSupported *a, const char *type)
{
	if (((tt__PTZPresetTourSupported*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPresetTourSupported*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPresetTourSupported), "tt:PTZPresetTourSupported"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_int(soap, "tt:MaximumNumberOfPresetTours", -1, &(a->tt__PTZPresetTourSupported::MaximumNumberOfPresetTours), ""))
		return soap->error;
	if (a->tt__PTZPresetTourSupported::PTZPresetTourOperation)
	{	int i;
		for (i = 0; i < a->tt__PTZPresetTourSupported::__sizePTZPresetTourOperation; i++)
			if (soap_out_tt__PTZPresetTourOperation(soap, "tt:PTZPresetTourOperation", -1, a->tt__PTZPresetTourSupported::PTZPresetTourOperation + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZPresetTourSupportedExtension(soap, "tt:Extension", -1, &(a->tt__PTZPresetTourSupported::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPresetTourSupported::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPresetTourSupported(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPresetTourSupported * SOAP_FMAC4 soap_in_tt__PTZPresetTourSupported(struct soap *soap, const char *tag, tt__PTZPresetTourSupported *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPresetTourSupported *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPresetTourSupported, sizeof(tt__PTZPresetTourSupported), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPresetTourSupported)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPresetTourSupported *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPresetTourSupported*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_MaximumNumberOfPresetTours1 = 1;
	struct soap_blist *soap_blist_PTZPresetTourOperation1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MaximumNumberOfPresetTours1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumNumberOfPresetTours", &(a->tt__PTZPresetTourSupported::MaximumNumberOfPresetTours), "xsd:int"))
				{	soap_flag_MaximumNumberOfPresetTours1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PTZPresetTourOperation", 1, NULL))
			{	if (a->tt__PTZPresetTourSupported::PTZPresetTourOperation == NULL)
				{	if (soap_blist_PTZPresetTourOperation1 == NULL)
						soap_blist_PTZPresetTourOperation1 = soap_new_block(soap);
					a->tt__PTZPresetTourSupported::PTZPresetTourOperation = (enum tt__PTZPresetTourOperation *)soap_push_block(soap, soap_blist_PTZPresetTourOperation1, sizeof(enum tt__PTZPresetTourOperation));
					if (a->tt__PTZPresetTourSupported::PTZPresetTourOperation == NULL)
						return NULL;
					soap_default_tt__PTZPresetTourOperation(soap, a->tt__PTZPresetTourSupported::PTZPresetTourOperation);
				}
				soap_revert(soap);
				if (soap_in_tt__PTZPresetTourOperation(soap, "tt:PTZPresetTourOperation", a->tt__PTZPresetTourSupported::PTZPresetTourOperation, "tt:PTZPresetTourOperation"))
				{	a->tt__PTZPresetTourSupported::__sizePTZPresetTourOperation++;
					a->tt__PTZPresetTourSupported::PTZPresetTourOperation = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSupportedExtension(soap, "tt:Extension", &(a->tt__PTZPresetTourSupported::Extension), "tt:PTZPresetTourSupportedExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__PTZPresetTourSupported::PTZPresetTourOperation)
			soap_pop_block(soap, soap_blist_PTZPresetTourOperation1);
		if (a->tt__PTZPresetTourSupported::__sizePTZPresetTourOperation)
			a->tt__PTZPresetTourSupported::PTZPresetTourOperation = (enum tt__PTZPresetTourOperation *)soap_save_block(soap, soap_blist_PTZPresetTourOperation1, NULL, 1);
		else
		{	a->tt__PTZPresetTourSupported::PTZPresetTourOperation = NULL;
			if (soap_blist_PTZPresetTourOperation1)
				soap_end_block(soap, soap_blist_PTZPresetTourOperation1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPresetTourSupported *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPresetTourSupported, 0, sizeof(tt__PTZPresetTourSupported), 0, soap_copy_tt__PTZPresetTourSupported);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MaximumNumberOfPresetTours1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPresetTourSupported::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPresetTourSupported);
	if (this->soap_out(soap, tag?tag:"tt:PTZPresetTourSupported", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPresetTourSupported::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPresetTourSupported(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPresetTourSupported * SOAP_FMAC4 soap_get_tt__PTZPresetTourSupported(struct soap *soap, tt__PTZPresetTourSupported *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPresetTourSupported(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPresetTourSupported * SOAP_FMAC2 soap_instantiate_tt__PTZPresetTourSupported(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPresetTourSupported(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPresetTourSupported, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPresetTourSupported);
		if (size)
			*size = sizeof(tt__PTZPresetTourSupported);
		((tt__PTZPresetTourSupported*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPresetTourSupported, n);
		if (size)
			*size = n * sizeof(tt__PTZPresetTourSupported);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPresetTourSupported*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPresetTourSupported*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPresetTourSupported(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPresetTourSupported %p -> %p\n", q, p));
	*(tt__PTZPresetTourSupported*)p = *(tt__PTZPresetTourSupported*)q;
}

void tt__PTZNodeExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZNodeExtension2::__size = 0;
	this->tt__PTZNodeExtension2::__any = NULL;
}

void tt__PTZNodeExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZNodeExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZNodeExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZNodeExtension2(struct soap *soap, const char *tag, int id, const tt__PTZNodeExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZNodeExtension2), "tt:PTZNodeExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZNodeExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZNodeExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZNodeExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZNodeExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZNodeExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZNodeExtension2 * SOAP_FMAC4 soap_in_tt__PTZNodeExtension2(struct soap *soap, const char *tag, tt__PTZNodeExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZNodeExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZNodeExtension2, sizeof(tt__PTZNodeExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZNodeExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZNodeExtension2 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZNodeExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZNodeExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZNodeExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZNodeExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZNodeExtension2::__any, "xsd:byte"))
				{	a->tt__PTZNodeExtension2::__size++;
					a->tt__PTZNodeExtension2::__any = NULL;
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
		if (a->tt__PTZNodeExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZNodeExtension2::__size)
			a->tt__PTZNodeExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZNodeExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZNodeExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZNodeExtension2, 0, sizeof(tt__PTZNodeExtension2), 0, soap_copy_tt__PTZNodeExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZNodeExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZNodeExtension2);
	if (this->soap_out(soap, tag?tag:"tt:PTZNodeExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZNodeExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZNodeExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZNodeExtension2 * SOAP_FMAC4 soap_get_tt__PTZNodeExtension2(struct soap *soap, tt__PTZNodeExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZNodeExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZNodeExtension2 * SOAP_FMAC2 soap_instantiate_tt__PTZNodeExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZNodeExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZNodeExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZNodeExtension2);
		if (size)
			*size = sizeof(tt__PTZNodeExtension2);
		((tt__PTZNodeExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZNodeExtension2, n);
		if (size)
			*size = n * sizeof(tt__PTZNodeExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZNodeExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZNodeExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZNodeExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZNodeExtension2 %p -> %p\n", q, p));
	*(tt__PTZNodeExtension2*)p = *(tt__PTZNodeExtension2*)q;
}

void tt__PTZNodeExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZNodeExtension::__size = 0;
	this->tt__PTZNodeExtension::__any = NULL;
	this->tt__PTZNodeExtension::SupportedPresetTour = NULL;
	this->tt__PTZNodeExtension::Extension = NULL;
}

void tt__PTZNodeExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZPresetTourSupported(soap, &this->tt__PTZNodeExtension::SupportedPresetTour);
	soap_serialize_PointerTott__PTZNodeExtension2(soap, &this->tt__PTZNodeExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZNodeExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZNodeExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZNodeExtension(struct soap *soap, const char *tag, int id, const tt__PTZNodeExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZNodeExtension), "tt:PTZNodeExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZNodeExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZNodeExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZNodeExtension::__any + i, ""))
				return soap->error;
	}
	if (a->tt__PTZNodeExtension::SupportedPresetTour)
	{	if (soap_out_PointerTott__PTZPresetTourSupported(soap, "tt:SupportedPresetTour", -1, &a->tt__PTZNodeExtension::SupportedPresetTour, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedPresetTour"))
		return soap->error;
	if (soap_out_PointerTott__PTZNodeExtension2(soap, "tt:Extension", -1, &(a->tt__PTZNodeExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZNodeExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZNodeExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZNodeExtension * SOAP_FMAC4 soap_in_tt__PTZNodeExtension(struct soap *soap, const char *tag, tt__PTZNodeExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZNodeExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZNodeExtension, sizeof(tt__PTZNodeExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZNodeExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZNodeExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_SupportedPresetTour1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SupportedPresetTour1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZPresetTourSupported(soap, "tt:SupportedPresetTour", &(a->tt__PTZNodeExtension::SupportedPresetTour), "tt:PTZPresetTourSupported"))
				{	soap_flag_SupportedPresetTour1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZNodeExtension2(soap, "tt:Extension", &(a->tt__PTZNodeExtension::Extension), "tt:PTZNodeExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZNodeExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZNodeExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZNodeExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZNodeExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZNodeExtension::__any, "xsd:byte"))
				{	a->tt__PTZNodeExtension::__size++;
					a->tt__PTZNodeExtension::__any = NULL;
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
		if (a->tt__PTZNodeExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZNodeExtension::__size)
			a->tt__PTZNodeExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZNodeExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZNodeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZNodeExtension, 0, sizeof(tt__PTZNodeExtension), 0, soap_copy_tt__PTZNodeExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedPresetTour1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZNodeExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZNodeExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZNodeExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZNodeExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZNodeExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZNodeExtension * SOAP_FMAC4 soap_get_tt__PTZNodeExtension(struct soap *soap, tt__PTZNodeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZNodeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZNodeExtension * SOAP_FMAC2 soap_instantiate_tt__PTZNodeExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZNodeExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZNodeExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZNodeExtension);
		if (size)
			*size = sizeof(tt__PTZNodeExtension);
		((tt__PTZNodeExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZNodeExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZNodeExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZNodeExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZNodeExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZNodeExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZNodeExtension %p -> %p\n", q, p));
	*(tt__PTZNodeExtension*)p = *(tt__PTZNodeExtension*)q;
}

void tt__PTZNode::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Name(soap, &this->tt__PTZNode::Name);
	this->tt__PTZNode::SupportedPTZSpaces = NULL;
	soap_default_int(soap, &this->tt__PTZNode::MaximumNumberOfPresets);
	soap_default_bool(soap, &this->tt__PTZNode::HomeSupported);
	this->tt__PTZNode::__sizeAuxiliaryCommands = 0;
	this->tt__PTZNode::AuxiliaryCommands = NULL;
	this->tt__PTZNode::Extension = NULL;
	this->tt__PTZNode::FixedHomePosition = NULL;
	this->tt__PTZNode::__anyAttribute = NULL;
}

void tt__PTZNode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &this->tt__PTZNode::Name);
	soap_serialize_PointerTott__PTZSpaces(soap, &this->tt__PTZNode::SupportedPTZSpaces);
	soap_embedded(soap, &this->tt__PTZNode::MaximumNumberOfPresets, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__PTZNode::HomeSupported, SOAP_TYPE_bool);
	if (this->tt__PTZNode::AuxiliaryCommands)
	{	int i;
		for (i = 0; i < this->tt__PTZNode::__sizeAuxiliaryCommands; i++)
		{
			soap_serialize_tt__AuxiliaryData(soap, this->tt__PTZNode::AuxiliaryCommands + i);
		}
	}
	soap_serialize_PointerTott__PTZNodeExtension(soap, &this->tt__PTZNode::Extension);
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZNode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZNode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZNode(struct soap *soap, const char *tag, int id, const tt__PTZNode *a, const char *type)
{
	if (((tt__PTZNode*)a)->FixedHomePosition)
		soap_set_attr(soap, "FixedHomePosition", soap_bool2s(soap, *((tt__PTZNode*)a)->FixedHomePosition), 1);
	if (((tt__PTZNode*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZNode*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZNode), "tt:PTZNode"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Name(soap, "tt:Name", -1, &(a->tt__PTZNode::Name), ""))
		return soap->error;
	if (a->tt__PTZNode::SupportedPTZSpaces)
	{	if (soap_out_PointerTott__PTZSpaces(soap, "tt:SupportedPTZSpaces", -1, &a->tt__PTZNode::SupportedPTZSpaces, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedPTZSpaces"))
		return soap->error;
	if (soap_out_int(soap, "tt:MaximumNumberOfPresets", -1, &(a->tt__PTZNode::MaximumNumberOfPresets), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:HomeSupported", -1, &(a->tt__PTZNode::HomeSupported), ""))
		return soap->error;
	if (a->tt__PTZNode::AuxiliaryCommands)
	{	int i;
		for (i = 0; i < a->tt__PTZNode::__sizeAuxiliaryCommands; i++)
			if (soap_out_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", -1, a->tt__PTZNode::AuxiliaryCommands + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PTZNodeExtension(soap, "tt:Extension", -1, &(a->tt__PTZNode::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZNode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZNode(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZNode * SOAP_FMAC4 soap_in_tt__PTZNode(struct soap *soap, const char *tag, tt__PTZNode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZNode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZNode, sizeof(tt__PTZNode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZNode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZNode *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "FixedHomePosition", 0);
		if (t)
		{
			if (!(((tt__PTZNode*)a)->FixedHomePosition = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tt__PTZNode*)a)->FixedHomePosition))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZNode*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__DeviceEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_SupportedPTZSpaces1 = 1;
	size_t soap_flag_MaximumNumberOfPresets1 = 1;
	size_t soap_flag_HomeSupported1 = 1;
	struct soap_blist *soap_blist_AuxiliaryCommands1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &(a->tt__PTZNode::Name), "tt:Name"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_SupportedPTZSpaces1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZSpaces(soap, "tt:SupportedPTZSpaces", &(a->tt__PTZNode::SupportedPTZSpaces), "tt:PTZSpaces"))
				{	soap_flag_SupportedPTZSpaces1--;
					continue;
				}
			if (soap_flag_MaximumNumberOfPresets1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumNumberOfPresets", &(a->tt__PTZNode::MaximumNumberOfPresets), "xsd:int"))
				{	soap_flag_MaximumNumberOfPresets1--;
					continue;
				}
			if (soap_flag_HomeSupported1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:HomeSupported", &(a->tt__PTZNode::HomeSupported), "xsd:boolean"))
				{	soap_flag_HomeSupported1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuxiliaryCommands", 1, NULL))
			{	if (a->tt__PTZNode::AuxiliaryCommands == NULL)
				{	if (soap_blist_AuxiliaryCommands1 == NULL)
						soap_blist_AuxiliaryCommands1 = soap_new_block(soap);
					a->tt__PTZNode::AuxiliaryCommands = (char **)soap_push_block(soap, soap_blist_AuxiliaryCommands1, sizeof(char *));
					if (a->tt__PTZNode::AuxiliaryCommands == NULL)
						return NULL;
					*a->tt__PTZNode::AuxiliaryCommands = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", a->tt__PTZNode::AuxiliaryCommands, "tt:AuxiliaryData"))
				{	a->tt__PTZNode::__sizeAuxiliaryCommands++;
					a->tt__PTZNode::AuxiliaryCommands = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZNodeExtension(soap, "tt:Extension", &(a->tt__PTZNode::Extension), "tt:PTZNodeExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap_flag___item3 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item3--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->tt__PTZNode::AuxiliaryCommands)
			soap_pop_block(soap, soap_blist_AuxiliaryCommands1);
		if (a->tt__PTZNode::__sizeAuxiliaryCommands)
			a->tt__PTZNode::AuxiliaryCommands = (char **)soap_save_block(soap, soap_blist_AuxiliaryCommands1, NULL, 1);
		else
		{	a->tt__PTZNode::AuxiliaryCommands = NULL;
			if (soap_blist_AuxiliaryCommands1)
				soap_end_block(soap, soap_blist_AuxiliaryCommands1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZNode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZNode, 0, sizeof(tt__PTZNode), 0, soap_copy_tt__PTZNode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedPTZSpaces1 > 0 || soap_flag_MaximumNumberOfPresets1 > 0 || soap_flag_HomeSupported1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZNode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZNode);
	if (this->soap_out(soap, tag?tag:"tt:PTZNode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZNode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZNode(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZNode * SOAP_FMAC4 soap_get_tt__PTZNode(struct soap *soap, tt__PTZNode *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZNode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZNode * SOAP_FMAC2 soap_instantiate_tt__PTZNode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZNode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZNode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZNode);
		if (size)
			*size = sizeof(tt__PTZNode);
		((tt__PTZNode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZNode, n);
		if (size)
			*size = n * sizeof(tt__PTZNode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZNode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZNode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZNode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZNode %p -> %p\n", q, p));
	*(tt__PTZNode*)p = *(tt__PTZNode*)q;
}

void tt__DigitalInput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__DigitalInput::__size = 0;
	this->tt__DigitalInput::__any = NULL;
	this->tt__DigitalInput::__anyAttribute = NULL;
}

void tt__DigitalInput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DigitalInput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DigitalInput(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DigitalInput(struct soap *soap, const char *tag, int id, const tt__DigitalInput *a, const char *type)
{
	if (((tt__DigitalInput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DigitalInput*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DigitalInput), "tt:DigitalInput"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DigitalInput::__any)
	{	int i;
		for (i = 0; i < a->tt__DigitalInput::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DigitalInput::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DigitalInput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DigitalInput(soap, tag, this, type);
}

SOAP_FMAC3 tt__DigitalInput * SOAP_FMAC4 soap_in_tt__DigitalInput(struct soap *soap, const char *tag, tt__DigitalInput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DigitalInput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DigitalInput, sizeof(tt__DigitalInput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DigitalInput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DigitalInput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DigitalInput*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__DeviceEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__DigitalInput::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DigitalInput::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DigitalInput::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DigitalInput::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DigitalInput::__any, "xsd:byte"))
				{	a->tt__DigitalInput::__size++;
					a->tt__DigitalInput::__any = NULL;
					continue;
				}
			}
			if (soap_flag___item3 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item3--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->tt__DigitalInput::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DigitalInput::__size)
			a->tt__DigitalInput::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DigitalInput::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DigitalInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DigitalInput, 0, sizeof(tt__DigitalInput), 0, soap_copy_tt__DigitalInput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__DigitalInput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DigitalInput);
	if (this->soap_out(soap, tag?tag:"tt:DigitalInput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DigitalInput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DigitalInput(soap, this, tag, type);
}

SOAP_FMAC3 tt__DigitalInput * SOAP_FMAC4 soap_get_tt__DigitalInput(struct soap *soap, tt__DigitalInput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DigitalInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DigitalInput * SOAP_FMAC2 soap_instantiate_tt__DigitalInput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DigitalInput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DigitalInput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DigitalInput);
		if (size)
			*size = sizeof(tt__DigitalInput);
		((tt__DigitalInput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DigitalInput, n);
		if (size)
			*size = n * sizeof(tt__DigitalInput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DigitalInput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DigitalInput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DigitalInput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DigitalInput %p -> %p\n", q, p));
	*(tt__DigitalInput*)p = *(tt__DigitalInput*)q;
}

void tt__RelayOutput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__RelayOutput::Properties = NULL;
	this->tt__RelayOutput::__size = 0;
	this->tt__RelayOutput::__any = NULL;
	this->tt__RelayOutput::__anyAttribute = NULL;
}

void tt__RelayOutput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RelayOutputSettings(soap, &this->tt__RelayOutput::Properties);
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelayOutput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelayOutput(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayOutput(struct soap *soap, const char *tag, int id, const tt__RelayOutput *a, const char *type)
{
	if (((tt__RelayOutput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RelayOutput*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayOutput), "tt:RelayOutput"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RelayOutput::Properties)
	{	if (soap_out_PointerTott__RelayOutputSettings(soap, "tt:Properties", -1, &a->tt__RelayOutput::Properties, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Properties"))
		return soap->error;
	if (a->tt__RelayOutput::__any)
	{	int i;
		for (i = 0; i < a->tt__RelayOutput::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RelayOutput::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RelayOutput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelayOutput(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelayOutput * SOAP_FMAC4 soap_in_tt__RelayOutput(struct soap *soap, const char *tag, tt__RelayOutput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RelayOutput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayOutput, sizeof(tt__RelayOutput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelayOutput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RelayOutput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RelayOutput*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__DeviceEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Properties1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Properties1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RelayOutputSettings(soap, "tt:Properties", &(a->tt__RelayOutput::Properties), "tt:RelayOutputSettings"))
				{	soap_flag_Properties1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RelayOutput::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RelayOutput::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RelayOutput::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RelayOutput::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RelayOutput::__any, "xsd:byte"))
				{	a->tt__RelayOutput::__size++;
					a->tt__RelayOutput::__any = NULL;
					continue;
				}
			}
			if (soap_flag___item3 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item3--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->tt__RelayOutput::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RelayOutput::__size)
			a->tt__RelayOutput::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RelayOutput::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RelayOutput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayOutput, 0, sizeof(tt__RelayOutput), 0, soap_copy_tt__RelayOutput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Properties1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RelayOutput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelayOutput);
	if (this->soap_out(soap, tag?tag:"tt:RelayOutput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelayOutput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelayOutput(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelayOutput * SOAP_FMAC4 soap_get_tt__RelayOutput(struct soap *soap, tt__RelayOutput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayOutput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelayOutput * SOAP_FMAC2 soap_instantiate_tt__RelayOutput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelayOutput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelayOutput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelayOutput);
		if (size)
			*size = sizeof(tt__RelayOutput);
		((tt__RelayOutput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelayOutput, n);
		if (size)
			*size = n * sizeof(tt__RelayOutput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelayOutput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelayOutput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelayOutput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelayOutput %p -> %p\n", q, p));
	*(tt__RelayOutput*)p = *(tt__RelayOutput*)q;
}

void tt__RelayOutputSettings::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RelayMode(soap, &this->tt__RelayOutputSettings::Mode);
	soap_default_xsd__duration(soap, &this->tt__RelayOutputSettings::DelayTime);
	soap_default_tt__RelayIdleState(soap, &this->tt__RelayOutputSettings::IdleState);
}

void tt__RelayOutputSettings::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__RelayOutputSettings::DelayTime, SOAP_TYPE_xsd__duration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RelayOutputSettings::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RelayOutputSettings(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RelayOutputSettings(struct soap *soap, const char *tag, int id, const tt__RelayOutputSettings *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RelayOutputSettings), "tt:RelayOutputSettings"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__RelayMode(soap, "tt:Mode", -1, &(a->tt__RelayOutputSettings::Mode), ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:DelayTime", -1, &(a->tt__RelayOutputSettings::DelayTime), ""))
		return soap->error;
	if (soap_out_tt__RelayIdleState(soap, "tt:IdleState", -1, &(a->tt__RelayOutputSettings::IdleState), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RelayOutputSettings::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RelayOutputSettings(soap, tag, this, type);
}

SOAP_FMAC3 tt__RelayOutputSettings * SOAP_FMAC4 soap_in_tt__RelayOutputSettings(struct soap *soap, const char *tag, tt__RelayOutputSettings *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RelayOutputSettings *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RelayOutputSettings, sizeof(tt__RelayOutputSettings), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RelayOutputSettings)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RelayOutputSettings *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_DelayTime1 = 1;
	size_t soap_flag_IdleState1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RelayMode(soap, "tt:Mode", &(a->tt__RelayOutputSettings::Mode), "tt:RelayMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_DelayTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:DelayTime", &(a->tt__RelayOutputSettings::DelayTime), "xsd:duration"))
				{	soap_flag_DelayTime1--;
					continue;
				}
			if (soap_flag_IdleState1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RelayIdleState(soap, "tt:IdleState", &(a->tt__RelayOutputSettings::IdleState), "tt:RelayIdleState"))
				{	soap_flag_IdleState1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RelayOutputSettings *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RelayOutputSettings, 0, sizeof(tt__RelayOutputSettings), 0, soap_copy_tt__RelayOutputSettings);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_DelayTime1 > 0 || soap_flag_IdleState1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RelayOutputSettings::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RelayOutputSettings);
	if (this->soap_out(soap, tag?tag:"tt:RelayOutputSettings", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RelayOutputSettings::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RelayOutputSettings(soap, this, tag, type);
}

SOAP_FMAC3 tt__RelayOutputSettings * SOAP_FMAC4 soap_get_tt__RelayOutputSettings(struct soap *soap, tt__RelayOutputSettings *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RelayOutputSettings(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RelayOutputSettings * SOAP_FMAC2 soap_instantiate_tt__RelayOutputSettings(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RelayOutputSettings(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RelayOutputSettings, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RelayOutputSettings);
		if (size)
			*size = sizeof(tt__RelayOutputSettings);
		((tt__RelayOutputSettings*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RelayOutputSettings, n);
		if (size)
			*size = n * sizeof(tt__RelayOutputSettings);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RelayOutputSettings*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RelayOutputSettings*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RelayOutputSettings(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RelayOutputSettings %p -> %p\n", q, p));
	*(tt__RelayOutputSettings*)p = *(tt__RelayOutputSettings*)q;
}

void tt__GenericEapPwdConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__GenericEapPwdConfigurationExtension::__size = 0;
	this->tt__GenericEapPwdConfigurationExtension::__any = NULL;
}

void tt__GenericEapPwdConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__GenericEapPwdConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__GenericEapPwdConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__GenericEapPwdConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension), "tt:GenericEapPwdConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__GenericEapPwdConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__GenericEapPwdConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__GenericEapPwdConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__GenericEapPwdConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__GenericEapPwdConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__GenericEapPwdConfigurationExtension * SOAP_FMAC4 soap_in_tt__GenericEapPwdConfigurationExtension(struct soap *soap, const char *tag, tt__GenericEapPwdConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__GenericEapPwdConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension, sizeof(tt__GenericEapPwdConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__GenericEapPwdConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__GenericEapPwdConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__GenericEapPwdConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__GenericEapPwdConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__GenericEapPwdConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__GenericEapPwdConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__GenericEapPwdConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__GenericEapPwdConfigurationExtension::__size++;
					a->tt__GenericEapPwdConfigurationExtension::__any = NULL;
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
		if (a->tt__GenericEapPwdConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__GenericEapPwdConfigurationExtension::__size)
			a->tt__GenericEapPwdConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__GenericEapPwdConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__GenericEapPwdConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension, 0, sizeof(tt__GenericEapPwdConfigurationExtension), 0, soap_copy_tt__GenericEapPwdConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__GenericEapPwdConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:GenericEapPwdConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__GenericEapPwdConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__GenericEapPwdConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__GenericEapPwdConfigurationExtension * SOAP_FMAC4 soap_get_tt__GenericEapPwdConfigurationExtension(struct soap *soap, tt__GenericEapPwdConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GenericEapPwdConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__GenericEapPwdConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__GenericEapPwdConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__GenericEapPwdConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__GenericEapPwdConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__GenericEapPwdConfigurationExtension);
		if (size)
			*size = sizeof(tt__GenericEapPwdConfigurationExtension);
		((tt__GenericEapPwdConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__GenericEapPwdConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__GenericEapPwdConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__GenericEapPwdConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__GenericEapPwdConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__GenericEapPwdConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__GenericEapPwdConfigurationExtension %p -> %p\n", q, p));
	*(tt__GenericEapPwdConfigurationExtension*)p = *(tt__GenericEapPwdConfigurationExtension*)q;
}

void tt__TLSConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__TLSConfiguration::CertificateID);
	this->tt__TLSConfiguration::__size = 0;
	this->tt__TLSConfiguration::__any = NULL;
	this->tt__TLSConfiguration::__anyAttribute = NULL;
}

void tt__TLSConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__TLSConfiguration::CertificateID);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TLSConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TLSConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TLSConfiguration(struct soap *soap, const char *tag, int id, const tt__TLSConfiguration *a, const char *type)
{
	if (((tt__TLSConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__TLSConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TLSConfiguration), "tt:TLSConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TLSConfiguration::CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->tt__TLSConfiguration::CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (a->tt__TLSConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__TLSConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__TLSConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__TLSConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TLSConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__TLSConfiguration * SOAP_FMAC4 soap_in_tt__TLSConfiguration(struct soap *soap, const char *tag, tt__TLSConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TLSConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TLSConfiguration, sizeof(tt__TLSConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TLSConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TLSConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__TLSConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__TLSConfiguration::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__TLSConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__TLSConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__TLSConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__TLSConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__TLSConfiguration::__any, "xsd:byte"))
				{	a->tt__TLSConfiguration::__size++;
					a->tt__TLSConfiguration::__any = NULL;
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
		if (a->tt__TLSConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__TLSConfiguration::__size)
			a->tt__TLSConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__TLSConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TLSConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TLSConfiguration, 0, sizeof(tt__TLSConfiguration), 0, soap_copy_tt__TLSConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__TLSConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TLSConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:TLSConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TLSConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TLSConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__TLSConfiguration * SOAP_FMAC4 soap_get_tt__TLSConfiguration(struct soap *soap, tt__TLSConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TLSConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TLSConfiguration * SOAP_FMAC2 soap_instantiate_tt__TLSConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TLSConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TLSConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TLSConfiguration);
		if (size)
			*size = sizeof(tt__TLSConfiguration);
		((tt__TLSConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TLSConfiguration, n);
		if (size)
			*size = n * sizeof(tt__TLSConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TLSConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TLSConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TLSConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TLSConfiguration %p -> %p\n", q, p));
	*(tt__TLSConfiguration*)p = *(tt__TLSConfiguration*)q;
}

void tt__EapMethodExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EapMethodExtension::__size = 0;
	this->tt__EapMethodExtension::__any = NULL;
}

void tt__EapMethodExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EapMethodExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EapMethodExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EapMethodExtension(struct soap *soap, const char *tag, int id, const tt__EapMethodExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EapMethodExtension), "tt:EapMethodExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EapMethodExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__EapMethodExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EapMethodExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EapMethodExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EapMethodExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__EapMethodExtension * SOAP_FMAC4 soap_in_tt__EapMethodExtension(struct soap *soap, const char *tag, tt__EapMethodExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EapMethodExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EapMethodExtension, sizeof(tt__EapMethodExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EapMethodExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EapMethodExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EapMethodExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EapMethodExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EapMethodExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EapMethodExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EapMethodExtension::__any, "xsd:byte"))
				{	a->tt__EapMethodExtension::__size++;
					a->tt__EapMethodExtension::__any = NULL;
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
		if (a->tt__EapMethodExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EapMethodExtension::__size)
			a->tt__EapMethodExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EapMethodExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EapMethodExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EapMethodExtension, 0, sizeof(tt__EapMethodExtension), 0, soap_copy_tt__EapMethodExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EapMethodExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EapMethodExtension);
	if (this->soap_out(soap, tag?tag:"tt:EapMethodExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EapMethodExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EapMethodExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__EapMethodExtension * SOAP_FMAC4 soap_get_tt__EapMethodExtension(struct soap *soap, tt__EapMethodExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EapMethodExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EapMethodExtension * SOAP_FMAC2 soap_instantiate_tt__EapMethodExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EapMethodExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EapMethodExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EapMethodExtension);
		if (size)
			*size = sizeof(tt__EapMethodExtension);
		((tt__EapMethodExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EapMethodExtension, n);
		if (size)
			*size = n * sizeof(tt__EapMethodExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EapMethodExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EapMethodExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EapMethodExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EapMethodExtension %p -> %p\n", q, p));
	*(tt__EapMethodExtension*)p = *(tt__EapMethodExtension*)q;
}

void tt__EAPMethodConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EAPMethodConfiguration::TLSConfiguration = NULL;
	soap_default_string(soap, &this->tt__EAPMethodConfiguration::Password);
	this->tt__EAPMethodConfiguration::Extension = NULL;
	this->tt__EAPMethodConfiguration::__anyAttribute = NULL;
}

void tt__EAPMethodConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__TLSConfiguration(soap, &this->tt__EAPMethodConfiguration::TLSConfiguration);
	soap_serialize_string(soap, &this->tt__EAPMethodConfiguration::Password);
	soap_serialize_PointerTott__EapMethodExtension(soap, &this->tt__EAPMethodConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EAPMethodConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EAPMethodConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EAPMethodConfiguration(struct soap *soap, const char *tag, int id, const tt__EAPMethodConfiguration *a, const char *type)
{
	if (((tt__EAPMethodConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EAPMethodConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EAPMethodConfiguration), "tt:EAPMethodConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__TLSConfiguration(soap, "tt:TLSConfiguration", -1, &(a->tt__EAPMethodConfiguration::TLSConfiguration), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &(a->tt__EAPMethodConfiguration::Password), ""))
		return soap->error;
	if (soap_out_PointerTott__EapMethodExtension(soap, "tt:Extension", -1, &(a->tt__EAPMethodConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__EAPMethodConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EAPMethodConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__EAPMethodConfiguration * SOAP_FMAC4 soap_in_tt__EAPMethodConfiguration(struct soap *soap, const char *tag, tt__EAPMethodConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EAPMethodConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EAPMethodConfiguration, sizeof(tt__EAPMethodConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EAPMethodConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EAPMethodConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EAPMethodConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TLSConfiguration1 = 1;
	size_t soap_flag_Password1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TLSConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TLSConfiguration(soap, "tt:TLSConfiguration", &(a->tt__EAPMethodConfiguration::TLSConfiguration), "tt:TLSConfiguration"))
				{	soap_flag_TLSConfiguration1--;
					continue;
				}
			if (soap_flag_Password1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &(a->tt__EAPMethodConfiguration::Password), "xsd:string"))
				{	soap_flag_Password1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EapMethodExtension(soap, "tt:Extension", &(a->tt__EAPMethodConfiguration::Extension), "tt:EapMethodExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EAPMethodConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EAPMethodConfiguration, 0, sizeof(tt__EAPMethodConfiguration), 0, soap_copy_tt__EAPMethodConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EAPMethodConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EAPMethodConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:EAPMethodConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EAPMethodConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EAPMethodConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__EAPMethodConfiguration * SOAP_FMAC4 soap_get_tt__EAPMethodConfiguration(struct soap *soap, tt__EAPMethodConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EAPMethodConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EAPMethodConfiguration * SOAP_FMAC2 soap_instantiate_tt__EAPMethodConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EAPMethodConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EAPMethodConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EAPMethodConfiguration);
		if (size)
			*size = sizeof(tt__EAPMethodConfiguration);
		((tt__EAPMethodConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EAPMethodConfiguration, n);
		if (size)
			*size = n * sizeof(tt__EAPMethodConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EAPMethodConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EAPMethodConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EAPMethodConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EAPMethodConfiguration %p -> %p\n", q, p));
	*(tt__EAPMethodConfiguration*)p = *(tt__EAPMethodConfiguration*)q;
}

void tt__Dot1XConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot1XConfigurationExtension::__size = 0;
	this->tt__Dot1XConfigurationExtension::__any = NULL;
}

void tt__Dot1XConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot1XConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot1XConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot1XConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__Dot1XConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot1XConfigurationExtension), "tt:Dot1XConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot1XConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot1XConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot1XConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot1XConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot1XConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot1XConfigurationExtension * SOAP_FMAC4 soap_in_tt__Dot1XConfigurationExtension(struct soap *soap, const char *tag, tt__Dot1XConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot1XConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot1XConfigurationExtension, sizeof(tt__Dot1XConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot1XConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot1XConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot1XConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot1XConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot1XConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot1XConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot1XConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__Dot1XConfigurationExtension::__size++;
					a->tt__Dot1XConfigurationExtension::__any = NULL;
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
		if (a->tt__Dot1XConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot1XConfigurationExtension::__size)
			a->tt__Dot1XConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot1XConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot1XConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot1XConfigurationExtension, 0, sizeof(tt__Dot1XConfigurationExtension), 0, soap_copy_tt__Dot1XConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot1XConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot1XConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:Dot1XConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot1XConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot1XConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot1XConfigurationExtension * SOAP_FMAC4 soap_get_tt__Dot1XConfigurationExtension(struct soap *soap, tt__Dot1XConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot1XConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot1XConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__Dot1XConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot1XConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot1XConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot1XConfigurationExtension);
		if (size)
			*size = sizeof(tt__Dot1XConfigurationExtension);
		((tt__Dot1XConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot1XConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__Dot1XConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot1XConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot1XConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot1XConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot1XConfigurationExtension %p -> %p\n", q, p));
	*(tt__Dot1XConfigurationExtension*)p = *(tt__Dot1XConfigurationExtension*)q;
}

void tt__Dot1XConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__Dot1XConfiguration::Dot1XConfigurationToken);
	soap_default_string(soap, &this->tt__Dot1XConfiguration::Identity);
	soap_default_string(soap, &this->tt__Dot1XConfiguration::AnonymousID);
	soap_default_int(soap, &this->tt__Dot1XConfiguration::EAPMethod);
	this->tt__Dot1XConfiguration::__sizeCACertificateID = 0;
	this->tt__Dot1XConfiguration::CACertificateID = NULL;
	this->tt__Dot1XConfiguration::EAPMethodConfiguration = NULL;
	this->tt__Dot1XConfiguration::Extension = NULL;
	this->tt__Dot1XConfiguration::__anyAttribute = NULL;
}

void tt__Dot1XConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__Dot1XConfiguration::Dot1XConfigurationToken);
	soap_serialize_string(soap, &this->tt__Dot1XConfiguration::Identity);
	soap_serialize_string(soap, &this->tt__Dot1XConfiguration::AnonymousID);
	soap_embedded(soap, &this->tt__Dot1XConfiguration::EAPMethod, SOAP_TYPE_int);
	if (this->tt__Dot1XConfiguration::CACertificateID)
	{	int i;
		for (i = 0; i < this->tt__Dot1XConfiguration::__sizeCACertificateID; i++)
		{
			soap_serialize_xsd__token(soap, this->tt__Dot1XConfiguration::CACertificateID + i);
		}
	}
	soap_serialize_PointerTott__EAPMethodConfiguration(soap, &this->tt__Dot1XConfiguration::EAPMethodConfiguration);
	soap_serialize_PointerTott__Dot1XConfigurationExtension(soap, &this->tt__Dot1XConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot1XConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot1XConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot1XConfiguration(struct soap *soap, const char *tag, int id, const tt__Dot1XConfiguration *a, const char *type)
{
	if (((tt__Dot1XConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot1XConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot1XConfiguration), "tt:Dot1XConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot1XConfiguration::Dot1XConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Dot1XConfigurationToken", -1, &a->tt__Dot1XConfiguration::Dot1XConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Dot1XConfigurationToken"))
		return soap->error;
	if (a->tt__Dot1XConfiguration::Identity)
	{	if (soap_out_string(soap, "tt:Identity", -1, &a->tt__Dot1XConfiguration::Identity, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Identity"))
		return soap->error;
	if (soap_out_string(soap, "tt:AnonymousID", -1, &(a->tt__Dot1XConfiguration::AnonymousID), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:EAPMethod", -1, &(a->tt__Dot1XConfiguration::EAPMethod), ""))
		return soap->error;
	if (a->tt__Dot1XConfiguration::CACertificateID)
	{	int i;
		for (i = 0; i < a->tt__Dot1XConfiguration::__sizeCACertificateID; i++)
			if (soap_out_xsd__token(soap, "tt:CACertificateID", -1, a->tt__Dot1XConfiguration::CACertificateID + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__EAPMethodConfiguration(soap, "tt:EAPMethodConfiguration", -1, &(a->tt__Dot1XConfiguration::EAPMethodConfiguration), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot1XConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__Dot1XConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Dot1XConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot1XConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot1XConfiguration * SOAP_FMAC4 soap_in_tt__Dot1XConfiguration(struct soap *soap, const char *tag, tt__Dot1XConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot1XConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot1XConfiguration, sizeof(tt__Dot1XConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot1XConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot1XConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot1XConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Dot1XConfigurationToken1 = 1;
	size_t soap_flag_Identity1 = 1;
	size_t soap_flag_AnonymousID1 = 1;
	size_t soap_flag_EAPMethod1 = 1;
	struct soap_blist *soap_blist_CACertificateID1 = NULL;
	size_t soap_flag_EAPMethodConfiguration1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Dot1XConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Dot1XConfigurationToken", &(a->tt__Dot1XConfiguration::Dot1XConfigurationToken), "tt:ReferenceToken"))
				{	soap_flag_Dot1XConfigurationToken1--;
					continue;
				}
			if (soap_flag_Identity1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Identity", &(a->tt__Dot1XConfiguration::Identity), "xsd:string"))
				{	soap_flag_Identity1--;
					continue;
				}
			if (soap_flag_AnonymousID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:AnonymousID", &(a->tt__Dot1XConfiguration::AnonymousID), "xsd:string"))
				{	soap_flag_AnonymousID1--;
					continue;
				}
			if (soap_flag_EAPMethod1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:EAPMethod", &(a->tt__Dot1XConfiguration::EAPMethod), "xsd:int"))
				{	soap_flag_EAPMethod1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:CACertificateID", 1, NULL))
			{	if (a->tt__Dot1XConfiguration::CACertificateID == NULL)
				{	if (soap_blist_CACertificateID1 == NULL)
						soap_blist_CACertificateID1 = soap_new_block(soap);
					a->tt__Dot1XConfiguration::CACertificateID = (char **)soap_push_block(soap, soap_blist_CACertificateID1, sizeof(char *));
					if (a->tt__Dot1XConfiguration::CACertificateID == NULL)
						return NULL;
					*a->tt__Dot1XConfiguration::CACertificateID = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__token(soap, "tt:CACertificateID", a->tt__Dot1XConfiguration::CACertificateID, "xsd:token"))
				{	a->tt__Dot1XConfiguration::__sizeCACertificateID++;
					a->tt__Dot1XConfiguration::CACertificateID = NULL;
					continue;
				}
			}
			if (soap_flag_EAPMethodConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EAPMethodConfiguration(soap, "tt:EAPMethodConfiguration", &(a->tt__Dot1XConfiguration::EAPMethodConfiguration), "tt:EAPMethodConfiguration"))
				{	soap_flag_EAPMethodConfiguration1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot1XConfigurationExtension(soap, "tt:Extension", &(a->tt__Dot1XConfiguration::Extension), "tt:Dot1XConfigurationExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (a->tt__Dot1XConfiguration::CACertificateID)
			soap_pop_block(soap, soap_blist_CACertificateID1);
		if (a->tt__Dot1XConfiguration::__sizeCACertificateID)
			a->tt__Dot1XConfiguration::CACertificateID = (char **)soap_save_block(soap, soap_blist_CACertificateID1, NULL, 1);
		else
		{	a->tt__Dot1XConfiguration::CACertificateID = NULL;
			if (soap_blist_CACertificateID1)
				soap_end_block(soap, soap_blist_CACertificateID1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot1XConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot1XConfiguration, 0, sizeof(tt__Dot1XConfiguration), 0, soap_copy_tt__Dot1XConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Dot1XConfigurationToken1 > 0 || soap_flag_Identity1 > 0 || soap_flag_EAPMethod1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot1XConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot1XConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:Dot1XConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot1XConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot1XConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot1XConfiguration * SOAP_FMAC4 soap_get_tt__Dot1XConfiguration(struct soap *soap, tt__Dot1XConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot1XConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot1XConfiguration * SOAP_FMAC2 soap_instantiate_tt__Dot1XConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot1XConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot1XConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot1XConfiguration);
		if (size)
			*size = sizeof(tt__Dot1XConfiguration);
		((tt__Dot1XConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot1XConfiguration, n);
		if (size)
			*size = n * sizeof(tt__Dot1XConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot1XConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot1XConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot1XConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot1XConfiguration %p -> %p\n", q, p));
	*(tt__Dot1XConfiguration*)p = *(tt__Dot1XConfiguration*)q;
}

void tt__CertificateInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CertificateInformationExtension::__size = 0;
	this->tt__CertificateInformationExtension::__any = NULL;
}

void tt__CertificateInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateInformationExtension(struct soap *soap, const char *tag, int id, const tt__CertificateInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateInformationExtension), "tt:CertificateInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CertificateInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__CertificateInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CertificateInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateInformationExtension * SOAP_FMAC4 soap_in_tt__CertificateInformationExtension(struct soap *soap, const char *tag, tt__CertificateInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateInformationExtension, sizeof(tt__CertificateInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateInformationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CertificateInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CertificateInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CertificateInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CertificateInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CertificateInformationExtension::__any, "xsd:byte"))
				{	a->tt__CertificateInformationExtension::__size++;
					a->tt__CertificateInformationExtension::__any = NULL;
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
		if (a->tt__CertificateInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CertificateInformationExtension::__size)
			a->tt__CertificateInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CertificateInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateInformationExtension, 0, sizeof(tt__CertificateInformationExtension), 0, soap_copy_tt__CertificateInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__CertificateInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:CertificateInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateInformationExtension * SOAP_FMAC4 soap_get_tt__CertificateInformationExtension(struct soap *soap, tt__CertificateInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateInformationExtension * SOAP_FMAC2 soap_instantiate_tt__CertificateInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateInformationExtension);
		if (size)
			*size = sizeof(tt__CertificateInformationExtension);
		((tt__CertificateInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__CertificateInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateInformationExtension %p -> %p\n", q, p));
	*(tt__CertificateInformationExtension*)p = *(tt__CertificateInformationExtension*)q;
}

void tt__CertificateUsage::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__CertificateUsage::__item);
	soap_default_bool(soap, &this->tt__CertificateUsage::Critical);
}

void tt__CertificateUsage::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__CertificateUsage::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateUsage::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateUsage(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateUsage(struct soap *soap, const char *tag, int id, const tt__CertificateUsage *a, const char *type)
{
	soap_set_attr(soap, "Critical", soap_bool2s(soap, ((tt__CertificateUsage*)a)->Critical), 1);
	return soap_out_string(soap, tag, id, &(a->tt__CertificateUsage::__item), "tt:CertificateUsage");
}

void *tt__CertificateUsage::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateUsage(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateUsage * SOAP_FMAC4 soap_in_tt__CertificateUsage(struct soap *soap, const char *tag, tt__CertificateUsage *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__CertificateUsage *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateUsage, sizeof(tt__CertificateUsage), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateUsage)
			return (tt__CertificateUsage *)a->soap_in(soap, tag, type);
	}
	if (soap_s2bool(soap, soap_attr_value(soap, "Critical", 1), &((tt__CertificateUsage*)a)->Critical))
		return NULL;
	if (!soap_in_string(soap, tag, &(a->tt__CertificateUsage::__item), "tt:CertificateUsage"))
		return NULL;
	return a;
}

int tt__CertificateUsage::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateUsage);
	if (this->soap_out(soap, tag?tag:"tt:CertificateUsage", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateUsage::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateUsage(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateUsage * SOAP_FMAC4 soap_get_tt__CertificateUsage(struct soap *soap, tt__CertificateUsage *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateUsage(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateUsage * SOAP_FMAC2 soap_instantiate_tt__CertificateUsage(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateUsage(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateUsage, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateUsage);
		if (size)
			*size = sizeof(tt__CertificateUsage);
		((tt__CertificateUsage*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateUsage, n);
		if (size)
			*size = n * sizeof(tt__CertificateUsage);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateUsage*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateUsage*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateUsage(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateUsage %p -> %p\n", q, p));
	*(tt__CertificateUsage*)p = *(tt__CertificateUsage*)q;
}

void tt__CertificateInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__CertificateInformation::CertificateID);
	soap_default_string(soap, &this->tt__CertificateInformation::IssuerDN);
	soap_default_string(soap, &this->tt__CertificateInformation::SubjectDN);
	this->tt__CertificateInformation::KeyUsage = NULL;
	this->tt__CertificateInformation::ExtendedKeyUsage = NULL;
	this->tt__CertificateInformation::KeyLength = NULL;
	soap_default_string(soap, &this->tt__CertificateInformation::Version);
	soap_default_string(soap, &this->tt__CertificateInformation::SerialNum);
	soap_default_string(soap, &this->tt__CertificateInformation::SignatureAlgorithm);
	this->tt__CertificateInformation::Validity = NULL;
	this->tt__CertificateInformation::Extension = NULL;
	this->tt__CertificateInformation::__anyAttribute = NULL;
}

void tt__CertificateInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__CertificateInformation::CertificateID);
	soap_serialize_string(soap, &this->tt__CertificateInformation::IssuerDN);
	soap_serialize_string(soap, &this->tt__CertificateInformation::SubjectDN);
	soap_serialize_PointerTott__CertificateUsage(soap, &this->tt__CertificateInformation::KeyUsage);
	soap_serialize_PointerTott__CertificateUsage(soap, &this->tt__CertificateInformation::ExtendedKeyUsage);
	soap_serialize_PointerToint(soap, &this->tt__CertificateInformation::KeyLength);
	soap_serialize_string(soap, &this->tt__CertificateInformation::Version);
	soap_serialize_string(soap, &this->tt__CertificateInformation::SerialNum);
	soap_serialize_string(soap, &this->tt__CertificateInformation::SignatureAlgorithm);
	soap_serialize_PointerTott__DateTimeRange(soap, &this->tt__CertificateInformation::Validity);
	soap_serialize_PointerTott__CertificateInformationExtension(soap, &this->tt__CertificateInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateInformation(struct soap *soap, const char *tag, int id, const tt__CertificateInformation *a, const char *type)
{
	if (((tt__CertificateInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CertificateInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateInformation), "tt:CertificateInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CertificateInformation::CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->tt__CertificateInformation::CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (soap_out_string(soap, "tt:IssuerDN", -1, &(a->tt__CertificateInformation::IssuerDN), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SubjectDN", -1, &(a->tt__CertificateInformation::SubjectDN), ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateUsage(soap, "tt:KeyUsage", -1, &(a->tt__CertificateInformation::KeyUsage), ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateUsage(soap, "tt:ExtendedKeyUsage", -1, &(a->tt__CertificateInformation::ExtendedKeyUsage), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:KeyLength", -1, &(a->tt__CertificateInformation::KeyLength), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Version", -1, &(a->tt__CertificateInformation::Version), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SerialNum", -1, &(a->tt__CertificateInformation::SerialNum), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:SignatureAlgorithm", -1, &(a->tt__CertificateInformation::SignatureAlgorithm), ""))
		return soap->error;
	if (soap_out_PointerTott__DateTimeRange(soap, "tt:Validity", -1, &(a->tt__CertificateInformation::Validity), ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateInformationExtension(soap, "tt:Extension", -1, &(a->tt__CertificateInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateInformation * SOAP_FMAC4 soap_in_tt__CertificateInformation(struct soap *soap, const char *tag, tt__CertificateInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateInformation, sizeof(tt__CertificateInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CertificateInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	size_t soap_flag_IssuerDN1 = 1;
	size_t soap_flag_SubjectDN1 = 1;
	size_t soap_flag_KeyUsage1 = 1;
	size_t soap_flag_ExtendedKeyUsage1 = 1;
	size_t soap_flag_KeyLength1 = 1;
	size_t soap_flag_Version1 = 1;
	size_t soap_flag_SerialNum1 = 1;
	size_t soap_flag_SignatureAlgorithm1 = 1;
	size_t soap_flag_Validity1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__CertificateInformation::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap_flag_IssuerDN1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:IssuerDN", &(a->tt__CertificateInformation::IssuerDN), "xsd:string"))
				{	soap_flag_IssuerDN1--;
					continue;
				}
			if (soap_flag_SubjectDN1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SubjectDN", &(a->tt__CertificateInformation::SubjectDN), "xsd:string"))
				{	soap_flag_SubjectDN1--;
					continue;
				}
			if (soap_flag_KeyUsage1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateUsage(soap, "tt:KeyUsage", &(a->tt__CertificateInformation::KeyUsage), "tt:CertificateUsage"))
				{	soap_flag_KeyUsage1--;
					continue;
				}
			if (soap_flag_ExtendedKeyUsage1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateUsage(soap, "tt:ExtendedKeyUsage", &(a->tt__CertificateInformation::ExtendedKeyUsage), "tt:CertificateUsage"))
				{	soap_flag_ExtendedKeyUsage1--;
					continue;
				}
			if (soap_flag_KeyLength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:KeyLength", &(a->tt__CertificateInformation::KeyLength), "xsd:int"))
				{	soap_flag_KeyLength1--;
					continue;
				}
			if (soap_flag_Version1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Version", &(a->tt__CertificateInformation::Version), "xsd:string"))
				{	soap_flag_Version1--;
					continue;
				}
			if (soap_flag_SerialNum1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SerialNum", &(a->tt__CertificateInformation::SerialNum), "xsd:string"))
				{	soap_flag_SerialNum1--;
					continue;
				}
			if (soap_flag_SignatureAlgorithm1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SignatureAlgorithm", &(a->tt__CertificateInformation::SignatureAlgorithm), "xsd:string"))
				{	soap_flag_SignatureAlgorithm1--;
					continue;
				}
			if (soap_flag_Validity1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTimeRange(soap, "tt:Validity", &(a->tt__CertificateInformation::Validity), "tt:DateTimeRange"))
				{	soap_flag_Validity1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateInformationExtension(soap, "tt:Extension", &(a->tt__CertificateInformation::Extension), "tt:CertificateInformationExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateInformation, 0, sizeof(tt__CertificateInformation), 0, soap_copy_tt__CertificateInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__CertificateInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateInformation);
	if (this->soap_out(soap, tag?tag:"tt:CertificateInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateInformation * SOAP_FMAC4 soap_get_tt__CertificateInformation(struct soap *soap, tt__CertificateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateInformation * SOAP_FMAC2 soap_instantiate_tt__CertificateInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateInformation);
		if (size)
			*size = sizeof(tt__CertificateInformation);
		((tt__CertificateInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateInformation, n);
		if (size)
			*size = n * sizeof(tt__CertificateInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateInformation %p -> %p\n", q, p));
	*(tt__CertificateInformation*)p = *(tt__CertificateInformation*)q;
}

void tt__CertificateWithPrivateKey::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__CertificateWithPrivateKey::CertificateID);
	this->tt__CertificateWithPrivateKey::Certificate = NULL;
	this->tt__CertificateWithPrivateKey::PrivateKey = NULL;
	this->tt__CertificateWithPrivateKey::__size = 0;
	this->tt__CertificateWithPrivateKey::__any = NULL;
	this->tt__CertificateWithPrivateKey::__anyAttribute = NULL;
}

void tt__CertificateWithPrivateKey::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__CertificateWithPrivateKey::CertificateID);
	soap_serialize_PointerTott__BinaryData(soap, &this->tt__CertificateWithPrivateKey::Certificate);
	soap_serialize_PointerTott__BinaryData(soap, &this->tt__CertificateWithPrivateKey::PrivateKey);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateWithPrivateKey::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateWithPrivateKey(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateWithPrivateKey(struct soap *soap, const char *tag, int id, const tt__CertificateWithPrivateKey *a, const char *type)
{
	if (((tt__CertificateWithPrivateKey*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CertificateWithPrivateKey*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateWithPrivateKey), "tt:CertificateWithPrivateKey"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &(a->tt__CertificateWithPrivateKey::CertificateID), ""))
		return soap->error;
	if (a->tt__CertificateWithPrivateKey::Certificate)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:Certificate", -1, &a->tt__CertificateWithPrivateKey::Certificate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Certificate"))
		return soap->error;
	if (a->tt__CertificateWithPrivateKey::PrivateKey)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:PrivateKey", -1, &a->tt__CertificateWithPrivateKey::PrivateKey, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PrivateKey"))
		return soap->error;
	if (a->tt__CertificateWithPrivateKey::__any)
	{	int i;
		for (i = 0; i < a->tt__CertificateWithPrivateKey::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CertificateWithPrivateKey::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateWithPrivateKey::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateWithPrivateKey(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateWithPrivateKey * SOAP_FMAC4 soap_in_tt__CertificateWithPrivateKey(struct soap *soap, const char *tag, tt__CertificateWithPrivateKey *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateWithPrivateKey *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateWithPrivateKey, sizeof(tt__CertificateWithPrivateKey), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateWithPrivateKey)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateWithPrivateKey *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CertificateWithPrivateKey*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	size_t soap_flag_Certificate1 = 1;
	size_t soap_flag_PrivateKey1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__CertificateWithPrivateKey::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap_flag_Certificate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:Certificate", &(a->tt__CertificateWithPrivateKey::Certificate), "tt:BinaryData"))
				{	soap_flag_Certificate1--;
					continue;
				}
			if (soap_flag_PrivateKey1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:PrivateKey", &(a->tt__CertificateWithPrivateKey::PrivateKey), "tt:BinaryData"))
				{	soap_flag_PrivateKey1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CertificateWithPrivateKey::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CertificateWithPrivateKey::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CertificateWithPrivateKey::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CertificateWithPrivateKey::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CertificateWithPrivateKey::__any, "xsd:byte"))
				{	a->tt__CertificateWithPrivateKey::__size++;
					a->tt__CertificateWithPrivateKey::__any = NULL;
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
		if (a->tt__CertificateWithPrivateKey::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CertificateWithPrivateKey::__size)
			a->tt__CertificateWithPrivateKey::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CertificateWithPrivateKey::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateWithPrivateKey *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateWithPrivateKey, 0, sizeof(tt__CertificateWithPrivateKey), 0, soap_copy_tt__CertificateWithPrivateKey);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Certificate1 > 0 || soap_flag_PrivateKey1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__CertificateWithPrivateKey::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateWithPrivateKey);
	if (this->soap_out(soap, tag?tag:"tt:CertificateWithPrivateKey", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateWithPrivateKey::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateWithPrivateKey(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateWithPrivateKey * SOAP_FMAC4 soap_get_tt__CertificateWithPrivateKey(struct soap *soap, tt__CertificateWithPrivateKey *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateWithPrivateKey(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateWithPrivateKey * SOAP_FMAC2 soap_instantiate_tt__CertificateWithPrivateKey(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateWithPrivateKey(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateWithPrivateKey, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateWithPrivateKey);
		if (size)
			*size = sizeof(tt__CertificateWithPrivateKey);
		((tt__CertificateWithPrivateKey*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateWithPrivateKey, n);
		if (size)
			*size = n * sizeof(tt__CertificateWithPrivateKey);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateWithPrivateKey*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateWithPrivateKey*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateWithPrivateKey(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateWithPrivateKey %p -> %p\n", q, p));
	*(tt__CertificateWithPrivateKey*)p = *(tt__CertificateWithPrivateKey*)q;
}

void tt__CertificateStatus::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__CertificateStatus::CertificateID);
	soap_default_bool(soap, &this->tt__CertificateStatus::Status);
	this->tt__CertificateStatus::__size = 0;
	this->tt__CertificateStatus::__any = NULL;
	this->tt__CertificateStatus::__anyAttribute = NULL;
}

void tt__CertificateStatus::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__CertificateStatus::CertificateID);
	soap_embedded(soap, &this->tt__CertificateStatus::Status, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateStatus::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateStatus(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateStatus(struct soap *soap, const char *tag, int id, const tt__CertificateStatus *a, const char *type)
{
	if (((tt__CertificateStatus*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CertificateStatus*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateStatus), "tt:CertificateStatus"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CertificateStatus::CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->tt__CertificateStatus::CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (soap_out_bool(soap, "tt:Status", -1, &(a->tt__CertificateStatus::Status), ""))
		return soap->error;
	if (a->tt__CertificateStatus::__any)
	{	int i;
		for (i = 0; i < a->tt__CertificateStatus::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CertificateStatus::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateStatus::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateStatus(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateStatus * SOAP_FMAC4 soap_in_tt__CertificateStatus(struct soap *soap, const char *tag, tt__CertificateStatus *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateStatus *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateStatus, sizeof(tt__CertificateStatus), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateStatus)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateStatus *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CertificateStatus*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	size_t soap_flag_Status1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__CertificateStatus::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap_flag_Status1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Status", &(a->tt__CertificateStatus::Status), "xsd:boolean"))
				{	soap_flag_Status1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CertificateStatus::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CertificateStatus::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CertificateStatus::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CertificateStatus::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CertificateStatus::__any, "xsd:byte"))
				{	a->tt__CertificateStatus::__size++;
					a->tt__CertificateStatus::__any = NULL;
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
		if (a->tt__CertificateStatus::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CertificateStatus::__size)
			a->tt__CertificateStatus::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CertificateStatus::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateStatus *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateStatus, 0, sizeof(tt__CertificateStatus), 0, soap_copy_tt__CertificateStatus);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID1 > 0 || soap_flag_Status1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__CertificateStatus::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateStatus);
	if (this->soap_out(soap, tag?tag:"tt:CertificateStatus", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateStatus::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateStatus(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateStatus * SOAP_FMAC4 soap_get_tt__CertificateStatus(struct soap *soap, tt__CertificateStatus *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateStatus(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateStatus * SOAP_FMAC2 soap_instantiate_tt__CertificateStatus(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateStatus(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateStatus, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateStatus);
		if (size)
			*size = sizeof(tt__CertificateStatus);
		((tt__CertificateStatus*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateStatus, n);
		if (size)
			*size = n * sizeof(tt__CertificateStatus);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateStatus*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateStatus*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateStatus(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateStatus %p -> %p\n", q, p));
	*(tt__CertificateStatus*)p = *(tt__CertificateStatus*)q;
}

void tt__Certificate::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__Certificate::CertificateID);
	this->tt__Certificate::Certificate = NULL;
}

void tt__Certificate::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__Certificate::CertificateID);
	soap_serialize_PointerTott__BinaryData(soap, &this->tt__Certificate::Certificate);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Certificate::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Certificate(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Certificate(struct soap *soap, const char *tag, int id, const tt__Certificate *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Certificate), "tt:Certificate"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Certificate::CertificateID)
	{	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &a->tt__Certificate::CertificateID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CertificateID"))
		return soap->error;
	if (a->tt__Certificate::Certificate)
	{	if (soap_out_PointerTott__BinaryData(soap, "tt:Certificate", -1, &a->tt__Certificate::Certificate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Certificate"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Certificate::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Certificate(soap, tag, this, type);
}

SOAP_FMAC3 tt__Certificate * SOAP_FMAC4 soap_in_tt__Certificate(struct soap *soap, const char *tag, tt__Certificate *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Certificate *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Certificate, sizeof(tt__Certificate), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Certificate)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Certificate *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	size_t soap_flag_Certificate1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__Certificate::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap_flag_Certificate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BinaryData(soap, "tt:Certificate", &(a->tt__Certificate::Certificate), "tt:BinaryData"))
				{	soap_flag_Certificate1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Certificate *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Certificate, 0, sizeof(tt__Certificate), 0, soap_copy_tt__Certificate);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CertificateID1 > 0 || soap_flag_Certificate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Certificate::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Certificate);
	if (this->soap_out(soap, tag?tag:"tt:Certificate", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Certificate::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Certificate(soap, this, tag, type);
}

SOAP_FMAC3 tt__Certificate * SOAP_FMAC4 soap_get_tt__Certificate(struct soap *soap, tt__Certificate *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Certificate(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Certificate * SOAP_FMAC2 soap_instantiate_tt__Certificate(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Certificate(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Certificate, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Certificate);
		if (size)
			*size = sizeof(tt__Certificate);
		((tt__Certificate*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Certificate, n);
		if (size)
			*size = n * sizeof(tt__Certificate);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Certificate*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Certificate*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Certificate(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Certificate %p -> %p\n", q, p));
	*(tt__Certificate*)p = *(tt__Certificate*)q;
}

void tt__CertificateGenerationParametersExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CertificateGenerationParametersExtension::__size = 0;
	this->tt__CertificateGenerationParametersExtension::__any = NULL;
}

void tt__CertificateGenerationParametersExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateGenerationParametersExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateGenerationParametersExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateGenerationParametersExtension(struct soap *soap, const char *tag, int id, const tt__CertificateGenerationParametersExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateGenerationParametersExtension), "tt:CertificateGenerationParametersExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CertificateGenerationParametersExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__CertificateGenerationParametersExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CertificateGenerationParametersExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateGenerationParametersExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateGenerationParametersExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateGenerationParametersExtension * SOAP_FMAC4 soap_in_tt__CertificateGenerationParametersExtension(struct soap *soap, const char *tag, tt__CertificateGenerationParametersExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateGenerationParametersExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateGenerationParametersExtension, sizeof(tt__CertificateGenerationParametersExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateGenerationParametersExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateGenerationParametersExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CertificateGenerationParametersExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CertificateGenerationParametersExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CertificateGenerationParametersExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CertificateGenerationParametersExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CertificateGenerationParametersExtension::__any, "xsd:byte"))
				{	a->tt__CertificateGenerationParametersExtension::__size++;
					a->tt__CertificateGenerationParametersExtension::__any = NULL;
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
		if (a->tt__CertificateGenerationParametersExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CertificateGenerationParametersExtension::__size)
			a->tt__CertificateGenerationParametersExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CertificateGenerationParametersExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateGenerationParametersExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateGenerationParametersExtension, 0, sizeof(tt__CertificateGenerationParametersExtension), 0, soap_copy_tt__CertificateGenerationParametersExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__CertificateGenerationParametersExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateGenerationParametersExtension);
	if (this->soap_out(soap, tag?tag:"tt:CertificateGenerationParametersExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateGenerationParametersExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateGenerationParametersExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateGenerationParametersExtension * SOAP_FMAC4 soap_get_tt__CertificateGenerationParametersExtension(struct soap *soap, tt__CertificateGenerationParametersExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateGenerationParametersExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateGenerationParametersExtension * SOAP_FMAC2 soap_instantiate_tt__CertificateGenerationParametersExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateGenerationParametersExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateGenerationParametersExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateGenerationParametersExtension);
		if (size)
			*size = sizeof(tt__CertificateGenerationParametersExtension);
		((tt__CertificateGenerationParametersExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateGenerationParametersExtension, n);
		if (size)
			*size = n * sizeof(tt__CertificateGenerationParametersExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateGenerationParametersExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateGenerationParametersExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateGenerationParametersExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateGenerationParametersExtension %p -> %p\n", q, p));
	*(tt__CertificateGenerationParametersExtension*)p = *(tt__CertificateGenerationParametersExtension*)q;
}

void tt__CertificateGenerationParameters::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__CertificateGenerationParameters::CertificateID);
	soap_default_string(soap, &this->tt__CertificateGenerationParameters::Subject);
	soap_default_xsd__token(soap, &this->tt__CertificateGenerationParameters::ValidNotBefore);
	soap_default_xsd__token(soap, &this->tt__CertificateGenerationParameters::ValidNotAfter);
	this->tt__CertificateGenerationParameters::Extension = NULL;
	this->tt__CertificateGenerationParameters::__anyAttribute = NULL;
}

void tt__CertificateGenerationParameters::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__CertificateGenerationParameters::CertificateID);
	soap_serialize_string(soap, &this->tt__CertificateGenerationParameters::Subject);
	soap_serialize_xsd__token(soap, &this->tt__CertificateGenerationParameters::ValidNotBefore);
	soap_serialize_xsd__token(soap, &this->tt__CertificateGenerationParameters::ValidNotAfter);
	soap_serialize_PointerTott__CertificateGenerationParametersExtension(soap, &this->tt__CertificateGenerationParameters::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CertificateGenerationParameters::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CertificateGenerationParameters(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CertificateGenerationParameters(struct soap *soap, const char *tag, int id, const tt__CertificateGenerationParameters *a, const char *type)
{
	if (((tt__CertificateGenerationParameters*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CertificateGenerationParameters*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CertificateGenerationParameters), "tt:CertificateGenerationParameters"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_xsd__token(soap, "tt:CertificateID", -1, &(a->tt__CertificateGenerationParameters::CertificateID), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:Subject", -1, &(a->tt__CertificateGenerationParameters::Subject), ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:ValidNotBefore", -1, &(a->tt__CertificateGenerationParameters::ValidNotBefore), ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:ValidNotAfter", -1, &(a->tt__CertificateGenerationParameters::ValidNotAfter), ""))
		return soap->error;
	if (soap_out_PointerTott__CertificateGenerationParametersExtension(soap, "tt:Extension", -1, &(a->tt__CertificateGenerationParameters::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__CertificateGenerationParameters::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CertificateGenerationParameters(soap, tag, this, type);
}

SOAP_FMAC3 tt__CertificateGenerationParameters * SOAP_FMAC4 soap_in_tt__CertificateGenerationParameters(struct soap *soap, const char *tag, tt__CertificateGenerationParameters *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CertificateGenerationParameters *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CertificateGenerationParameters, sizeof(tt__CertificateGenerationParameters), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CertificateGenerationParameters)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CertificateGenerationParameters *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CertificateGenerationParameters*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CertificateID1 = 1;
	size_t soap_flag_Subject1 = 1;
	size_t soap_flag_ValidNotBefore1 = 1;
	size_t soap_flag_ValidNotAfter1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CertificateID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:CertificateID", &(a->tt__CertificateGenerationParameters::CertificateID), "xsd:token"))
				{	soap_flag_CertificateID1--;
					continue;
				}
			if (soap_flag_Subject1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Subject", &(a->tt__CertificateGenerationParameters::Subject), "xsd:string"))
				{	soap_flag_Subject1--;
					continue;
				}
			if (soap_flag_ValidNotBefore1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:ValidNotBefore", &(a->tt__CertificateGenerationParameters::ValidNotBefore), "xsd:token"))
				{	soap_flag_ValidNotBefore1--;
					continue;
				}
			if (soap_flag_ValidNotAfter1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:ValidNotAfter", &(a->tt__CertificateGenerationParameters::ValidNotAfter), "xsd:token"))
				{	soap_flag_ValidNotAfter1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CertificateGenerationParametersExtension(soap, "tt:Extension", &(a->tt__CertificateGenerationParameters::Extension), "tt:CertificateGenerationParametersExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CertificateGenerationParameters *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CertificateGenerationParameters, 0, sizeof(tt__CertificateGenerationParameters), 0, soap_copy_tt__CertificateGenerationParameters);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__CertificateGenerationParameters::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CertificateGenerationParameters);
	if (this->soap_out(soap, tag?tag:"tt:CertificateGenerationParameters", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CertificateGenerationParameters::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CertificateGenerationParameters(soap, this, tag, type);
}

SOAP_FMAC3 tt__CertificateGenerationParameters * SOAP_FMAC4 soap_get_tt__CertificateGenerationParameters(struct soap *soap, tt__CertificateGenerationParameters *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CertificateGenerationParameters(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CertificateGenerationParameters * SOAP_FMAC2 soap_instantiate_tt__CertificateGenerationParameters(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CertificateGenerationParameters(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CertificateGenerationParameters, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CertificateGenerationParameters);
		if (size)
			*size = sizeof(tt__CertificateGenerationParameters);
		((tt__CertificateGenerationParameters*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CertificateGenerationParameters, n);
		if (size)
			*size = n * sizeof(tt__CertificateGenerationParameters);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CertificateGenerationParameters*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CertificateGenerationParameters*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CertificateGenerationParameters(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CertificateGenerationParameters %p -> %p\n", q, p));
	*(tt__CertificateGenerationParameters*)p = *(tt__CertificateGenerationParameters*)q;
}

void tt__UserExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__UserExtension::__size = 0;
	this->tt__UserExtension::__any = NULL;
}

void tt__UserExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__UserExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__UserExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__UserExtension(struct soap *soap, const char *tag, int id, const tt__UserExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__UserExtension), "tt:UserExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__UserExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__UserExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__UserExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__UserExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__UserExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__UserExtension * SOAP_FMAC4 soap_in_tt__UserExtension(struct soap *soap, const char *tag, tt__UserExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__UserExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__UserExtension, sizeof(tt__UserExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__UserExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__UserExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__UserExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__UserExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__UserExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__UserExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__UserExtension::__any, "xsd:byte"))
				{	a->tt__UserExtension::__size++;
					a->tt__UserExtension::__any = NULL;
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
		if (a->tt__UserExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__UserExtension::__size)
			a->tt__UserExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__UserExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__UserExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__UserExtension, 0, sizeof(tt__UserExtension), 0, soap_copy_tt__UserExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__UserExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__UserExtension);
	if (this->soap_out(soap, tag?tag:"tt:UserExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__UserExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__UserExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__UserExtension * SOAP_FMAC4 soap_get_tt__UserExtension(struct soap *soap, tt__UserExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__UserExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__UserExtension * SOAP_FMAC2 soap_instantiate_tt__UserExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__UserExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__UserExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__UserExtension);
		if (size)
			*size = sizeof(tt__UserExtension);
		((tt__UserExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__UserExtension, n);
		if (size)
			*size = n * sizeof(tt__UserExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__UserExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__UserExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__UserExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__UserExtension %p -> %p\n", q, p));
	*(tt__UserExtension*)p = *(tt__UserExtension*)q;
}

void tt__User::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__User::Username);
	soap_default_string(soap, &this->tt__User::Password);
	soap_default_tt__UserLevel(soap, &this->tt__User::UserLevel);
	this->tt__User::Extension = NULL;
	this->tt__User::__anyAttribute = NULL;
}

void tt__User::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__User::Username);
	soap_serialize_string(soap, &this->tt__User::Password);
	soap_serialize_PointerTott__UserExtension(soap, &this->tt__User::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__User::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__User(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__User(struct soap *soap, const char *tag, int id, const tt__User *a, const char *type)
{
	if (((tt__User*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__User*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__User), "tt:User"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__User::Username)
	{	if (soap_out_string(soap, "tt:Username", -1, &a->tt__User::Username, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Username"))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &(a->tt__User::Password), ""))
		return soap->error;
	if (soap_out_tt__UserLevel(soap, "tt:UserLevel", -1, &(a->tt__User::UserLevel), ""))
		return soap->error;
	if (soap_out_PointerTott__UserExtension(soap, "tt:Extension", -1, &(a->tt__User::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__User::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__User(soap, tag, this, type);
}

SOAP_FMAC3 tt__User * SOAP_FMAC4 soap_in_tt__User(struct soap *soap, const char *tag, tt__User *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__User *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__User, sizeof(tt__User), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__User)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__User *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__User*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Username1 = 1;
	size_t soap_flag_Password1 = 1;
	size_t soap_flag_UserLevel1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Username1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Username", &(a->tt__User::Username), "xsd:string"))
				{	soap_flag_Username1--;
					continue;
				}
			if (soap_flag_Password1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &(a->tt__User::Password), "xsd:string"))
				{	soap_flag_Password1--;
					continue;
				}
			if (soap_flag_UserLevel1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__UserLevel(soap, "tt:UserLevel", &(a->tt__User::UserLevel), "tt:UserLevel"))
				{	soap_flag_UserLevel1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__UserExtension(soap, "tt:Extension", &(a->tt__User::Extension), "tt:UserExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__User *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__User, 0, sizeof(tt__User), 0, soap_copy_tt__User);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Username1 > 0 || soap_flag_UserLevel1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__User::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__User);
	if (this->soap_out(soap, tag?tag:"tt:User", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__User::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__User(soap, this, tag, type);
}

SOAP_FMAC3 tt__User * SOAP_FMAC4 soap_get_tt__User(struct soap *soap, tt__User *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__User(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__User * SOAP_FMAC2 soap_instantiate_tt__User(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__User(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__User, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__User);
		if (size)
			*size = sizeof(tt__User);
		((tt__User*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__User, n);
		if (size)
			*size = n * sizeof(tt__User);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__User*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__User*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__User(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__User %p -> %p\n", q, p));
	*(tt__User*)p = *(tt__User*)q;
}

void tt__RemoteUser::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__RemoteUser::Username);
	soap_default_string(soap, &this->tt__RemoteUser::Password);
	soap_default_bool(soap, &this->tt__RemoteUser::UseDerivedPassword);
	this->tt__RemoteUser::__size = 0;
	this->tt__RemoteUser::__any = NULL;
	this->tt__RemoteUser::__anyAttribute = NULL;
}

void tt__RemoteUser::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__RemoteUser::Username);
	soap_serialize_string(soap, &this->tt__RemoteUser::Password);
	soap_embedded(soap, &this->tt__RemoteUser::UseDerivedPassword, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RemoteUser::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RemoteUser(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RemoteUser(struct soap *soap, const char *tag, int id, const tt__RemoteUser *a, const char *type)
{
	if (((tt__RemoteUser*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RemoteUser*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RemoteUser), "tt:RemoteUser"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RemoteUser::Username)
	{	if (soap_out_string(soap, "tt:Username", -1, &a->tt__RemoteUser::Username, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Username"))
		return soap->error;
	if (soap_out_string(soap, "tt:Password", -1, &(a->tt__RemoteUser::Password), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:UseDerivedPassword", -1, &(a->tt__RemoteUser::UseDerivedPassword), ""))
		return soap->error;
	if (a->tt__RemoteUser::__any)
	{	int i;
		for (i = 0; i < a->tt__RemoteUser::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RemoteUser::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RemoteUser::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RemoteUser(soap, tag, this, type);
}

SOAP_FMAC3 tt__RemoteUser * SOAP_FMAC4 soap_in_tt__RemoteUser(struct soap *soap, const char *tag, tt__RemoteUser *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RemoteUser *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RemoteUser, sizeof(tt__RemoteUser), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RemoteUser)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RemoteUser *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RemoteUser*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Username1 = 1;
	size_t soap_flag_Password1 = 1;
	size_t soap_flag_UseDerivedPassword1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Username1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Username", &(a->tt__RemoteUser::Username), "xsd:string"))
				{	soap_flag_Username1--;
					continue;
				}
			if (soap_flag_Password1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Password", &(a->tt__RemoteUser::Password), "xsd:string"))
				{	soap_flag_Password1--;
					continue;
				}
			if (soap_flag_UseDerivedPassword1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:UseDerivedPassword", &(a->tt__RemoteUser::UseDerivedPassword), "xsd:boolean"))
				{	soap_flag_UseDerivedPassword1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RemoteUser::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RemoteUser::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RemoteUser::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RemoteUser::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RemoteUser::__any, "xsd:byte"))
				{	a->tt__RemoteUser::__size++;
					a->tt__RemoteUser::__any = NULL;
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
		if (a->tt__RemoteUser::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RemoteUser::__size)
			a->tt__RemoteUser::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RemoteUser::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RemoteUser *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RemoteUser, 0, sizeof(tt__RemoteUser), 0, soap_copy_tt__RemoteUser);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Username1 > 0 || soap_flag_UseDerivedPassword1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RemoteUser::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RemoteUser);
	if (this->soap_out(soap, tag?tag:"tt:RemoteUser", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RemoteUser::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RemoteUser(soap, this, tag, type);
}

SOAP_FMAC3 tt__RemoteUser * SOAP_FMAC4 soap_get_tt__RemoteUser(struct soap *soap, tt__RemoteUser *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RemoteUser(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RemoteUser * SOAP_FMAC2 soap_instantiate_tt__RemoteUser(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RemoteUser(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RemoteUser, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RemoteUser);
		if (size)
			*size = sizeof(tt__RemoteUser);
		((tt__RemoteUser*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RemoteUser, n);
		if (size)
			*size = n * sizeof(tt__RemoteUser);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RemoteUser*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RemoteUser*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RemoteUser(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RemoteUser %p -> %p\n", q, p));
	*(tt__RemoteUser*)p = *(tt__RemoteUser*)q;
}

void tt__TimeZone::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->tt__TimeZone::TZ);
}

void tt__TimeZone::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->tt__TimeZone::TZ);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TimeZone::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TimeZone(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TimeZone(struct soap *soap, const char *tag, int id, const tt__TimeZone *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TimeZone), "tt:TimeZone"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TimeZone::TZ)
	{	if (soap_out_xsd__token(soap, "tt:TZ", -1, &a->tt__TimeZone::TZ, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TZ"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__TimeZone::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TimeZone(soap, tag, this, type);
}

SOAP_FMAC3 tt__TimeZone * SOAP_FMAC4 soap_in_tt__TimeZone(struct soap *soap, const char *tag, tt__TimeZone *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TimeZone *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TimeZone, sizeof(tt__TimeZone), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TimeZone)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TimeZone *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TZ1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TZ1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:TZ", &(a->tt__TimeZone::TZ), "xsd:token"))
				{	soap_flag_TZ1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TimeZone *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TimeZone, 0, sizeof(tt__TimeZone), 0, soap_copy_tt__TimeZone);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TZ1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__TimeZone::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TimeZone);
	if (this->soap_out(soap, tag?tag:"tt:TimeZone", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TimeZone::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TimeZone(soap, this, tag, type);
}

SOAP_FMAC3 tt__TimeZone * SOAP_FMAC4 soap_get_tt__TimeZone(struct soap *soap, tt__TimeZone *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TimeZone(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TimeZone * SOAP_FMAC2 soap_instantiate_tt__TimeZone(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TimeZone(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TimeZone, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TimeZone);
		if (size)
			*size = sizeof(tt__TimeZone);
		((tt__TimeZone*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TimeZone, n);
		if (size)
			*size = n * sizeof(tt__TimeZone);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TimeZone*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TimeZone*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TimeZone(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TimeZone %p -> %p\n", q, p));
	*(tt__TimeZone*)p = *(tt__TimeZone*)q;
}

void tt__Time::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->tt__Time::Hour);
	soap_default_int(soap, &this->tt__Time::Minute);
	soap_default_int(soap, &this->tt__Time::Second);
}

void tt__Time::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Time::Hour, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__Time::Minute, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__Time::Second, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Time::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Time(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Time(struct soap *soap, const char *tag, int id, const tt__Time *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Time), "tt:Time"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_int(soap, "tt:Hour", -1, &(a->tt__Time::Hour), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Minute", -1, &(a->tt__Time::Minute), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Second", -1, &(a->tt__Time::Second), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Time::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Time(soap, tag, this, type);
}

SOAP_FMAC3 tt__Time * SOAP_FMAC4 soap_in_tt__Time(struct soap *soap, const char *tag, tt__Time *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Time *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Time, sizeof(tt__Time), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Time)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Time *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Hour1 = 1;
	size_t soap_flag_Minute1 = 1;
	size_t soap_flag_Second1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Hour1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Hour", &(a->tt__Time::Hour), "xsd:int"))
				{	soap_flag_Hour1--;
					continue;
				}
			if (soap_flag_Minute1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Minute", &(a->tt__Time::Minute), "xsd:int"))
				{	soap_flag_Minute1--;
					continue;
				}
			if (soap_flag_Second1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Second", &(a->tt__Time::Second), "xsd:int"))
				{	soap_flag_Second1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Time *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Time, 0, sizeof(tt__Time), 0, soap_copy_tt__Time);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Hour1 > 0 || soap_flag_Minute1 > 0 || soap_flag_Second1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Time::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Time);
	if (this->soap_out(soap, tag?tag:"tt:Time", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Time::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Time(soap, this, tag, type);
}

SOAP_FMAC3 tt__Time * SOAP_FMAC4 soap_get_tt__Time(struct soap *soap, tt__Time *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Time(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Time * SOAP_FMAC2 soap_instantiate_tt__Time(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Time(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Time, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Time);
		if (size)
			*size = sizeof(tt__Time);
		((tt__Time*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Time, n);
		if (size)
			*size = n * sizeof(tt__Time);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Time*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Time*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Time(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Time %p -> %p\n", q, p));
	*(tt__Time*)p = *(tt__Time*)q;
}

void tt__Date::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->tt__Date::Year);
	soap_default_int(soap, &this->tt__Date::Month);
	soap_default_int(soap, &this->tt__Date::Day);
}

void tt__Date::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Date::Year, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__Date::Month, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__Date::Day, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Date::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Date(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Date(struct soap *soap, const char *tag, int id, const tt__Date *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Date), "tt:Date"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_int(soap, "tt:Year", -1, &(a->tt__Date::Year), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Month", -1, &(a->tt__Date::Month), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Day", -1, &(a->tt__Date::Day), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Date::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Date(soap, tag, this, type);
}

SOAP_FMAC3 tt__Date * SOAP_FMAC4 soap_in_tt__Date(struct soap *soap, const char *tag, tt__Date *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Date *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Date, sizeof(tt__Date), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Date)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Date *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Year1 = 1;
	size_t soap_flag_Month1 = 1;
	size_t soap_flag_Day1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Year1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Year", &(a->tt__Date::Year), "xsd:int"))
				{	soap_flag_Year1--;
					continue;
				}
			if (soap_flag_Month1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Month", &(a->tt__Date::Month), "xsd:int"))
				{	soap_flag_Month1--;
					continue;
				}
			if (soap_flag_Day1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Day", &(a->tt__Date::Day), "xsd:int"))
				{	soap_flag_Day1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Date *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Date, 0, sizeof(tt__Date), 0, soap_copy_tt__Date);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Year1 > 0 || soap_flag_Month1 > 0 || soap_flag_Day1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Date::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Date);
	if (this->soap_out(soap, tag?tag:"tt:Date", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Date::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Date(soap, this, tag, type);
}

SOAP_FMAC3 tt__Date * SOAP_FMAC4 soap_get_tt__Date(struct soap *soap, tt__Date *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Date(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Date * SOAP_FMAC2 soap_instantiate_tt__Date(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Date(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Date, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Date);
		if (size)
			*size = sizeof(tt__Date);
		((tt__Date*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Date, n);
		if (size)
			*size = n * sizeof(tt__Date);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Date*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Date*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Date(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Date %p -> %p\n", q, p));
	*(tt__Date*)p = *(tt__Date*)q;
}

void tt__DateTime::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__DateTime::Time = NULL;
	this->tt__DateTime::Date = NULL;
}

void tt__DateTime::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Time(soap, &this->tt__DateTime::Time);
	soap_serialize_PointerTott__Date(soap, &this->tt__DateTime::Date);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DateTime::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DateTime(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DateTime(struct soap *soap, const char *tag, int id, const tt__DateTime *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DateTime), "tt:DateTime"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DateTime::Time)
	{	if (soap_out_PointerTott__Time(soap, "tt:Time", -1, &a->tt__DateTime::Time, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Time"))
		return soap->error;
	if (a->tt__DateTime::Date)
	{	if (soap_out_PointerTott__Date(soap, "tt:Date", -1, &a->tt__DateTime::Date, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Date"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__DateTime::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DateTime(soap, tag, this, type);
}

SOAP_FMAC3 tt__DateTime * SOAP_FMAC4 soap_in_tt__DateTime(struct soap *soap, const char *tag, tt__DateTime *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DateTime *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DateTime, sizeof(tt__DateTime), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DateTime)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DateTime *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Time1 = 1;
	size_t soap_flag_Date1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Time1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Time(soap, "tt:Time", &(a->tt__DateTime::Time), "tt:Time"))
				{	soap_flag_Time1--;
					continue;
				}
			if (soap_flag_Date1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Date(soap, "tt:Date", &(a->tt__DateTime::Date), "tt:Date"))
				{	soap_flag_Date1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DateTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DateTime, 0, sizeof(tt__DateTime), 0, soap_copy_tt__DateTime);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Time1 > 0 || soap_flag_Date1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DateTime::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DateTime);
	if (this->soap_out(soap, tag?tag:"tt:DateTime", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DateTime::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DateTime(soap, this, tag, type);
}

SOAP_FMAC3 tt__DateTime * SOAP_FMAC4 soap_get_tt__DateTime(struct soap *soap, tt__DateTime *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DateTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DateTime * SOAP_FMAC2 soap_instantiate_tt__DateTime(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DateTime(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DateTime, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DateTime);
		if (size)
			*size = sizeof(tt__DateTime);
		((tt__DateTime*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DateTime, n);
		if (size)
			*size = n * sizeof(tt__DateTime);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DateTime*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DateTime*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DateTime(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DateTime %p -> %p\n", q, p));
	*(tt__DateTime*)p = *(tt__DateTime*)q;
}

void tt__SystemDateTimeExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SystemDateTimeExtension::__size = 0;
	this->tt__SystemDateTimeExtension::__any = NULL;
}

void tt__SystemDateTimeExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemDateTimeExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemDateTimeExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemDateTimeExtension(struct soap *soap, const char *tag, int id, const tt__SystemDateTimeExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemDateTimeExtension), "tt:SystemDateTimeExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SystemDateTimeExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SystemDateTimeExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SystemDateTimeExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SystemDateTimeExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemDateTimeExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemDateTimeExtension * SOAP_FMAC4 soap_in_tt__SystemDateTimeExtension(struct soap *soap, const char *tag, tt__SystemDateTimeExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemDateTimeExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemDateTimeExtension, sizeof(tt__SystemDateTimeExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemDateTimeExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemDateTimeExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SystemDateTimeExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SystemDateTimeExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SystemDateTimeExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SystemDateTimeExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SystemDateTimeExtension::__any, "xsd:byte"))
				{	a->tt__SystemDateTimeExtension::__size++;
					a->tt__SystemDateTimeExtension::__any = NULL;
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
		if (a->tt__SystemDateTimeExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SystemDateTimeExtension::__size)
			a->tt__SystemDateTimeExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SystemDateTimeExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemDateTimeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemDateTimeExtension, 0, sizeof(tt__SystemDateTimeExtension), 0, soap_copy_tt__SystemDateTimeExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SystemDateTimeExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemDateTimeExtension);
	if (this->soap_out(soap, tag?tag:"tt:SystemDateTimeExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemDateTimeExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemDateTimeExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemDateTimeExtension * SOAP_FMAC4 soap_get_tt__SystemDateTimeExtension(struct soap *soap, tt__SystemDateTimeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemDateTimeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemDateTimeExtension * SOAP_FMAC2 soap_instantiate_tt__SystemDateTimeExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemDateTimeExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemDateTimeExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemDateTimeExtension);
		if (size)
			*size = sizeof(tt__SystemDateTimeExtension);
		((tt__SystemDateTimeExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemDateTimeExtension, n);
		if (size)
			*size = n * sizeof(tt__SystemDateTimeExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemDateTimeExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemDateTimeExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemDateTimeExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemDateTimeExtension %p -> %p\n", q, p));
	*(tt__SystemDateTimeExtension*)p = *(tt__SystemDateTimeExtension*)q;
}

void tt__SystemDateTime::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SetDateTimeType(soap, &this->tt__SystemDateTime::DateTimeType);
	soap_default_bool(soap, &this->tt__SystemDateTime::DaylightSavings);
	this->tt__SystemDateTime::TimeZone = NULL;
	this->tt__SystemDateTime::UTCDateTime = NULL;
	this->tt__SystemDateTime::LocalDateTime = NULL;
	this->tt__SystemDateTime::Extension = NULL;
	this->tt__SystemDateTime::__anyAttribute = NULL;
}

void tt__SystemDateTime::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__SystemDateTime::DaylightSavings, SOAP_TYPE_bool);
	soap_serialize_PointerTott__TimeZone(soap, &this->tt__SystemDateTime::TimeZone);
	soap_serialize_PointerTott__DateTime(soap, &this->tt__SystemDateTime::UTCDateTime);
	soap_serialize_PointerTott__DateTime(soap, &this->tt__SystemDateTime::LocalDateTime);
	soap_serialize_PointerTott__SystemDateTimeExtension(soap, &this->tt__SystemDateTime::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemDateTime::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemDateTime(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemDateTime(struct soap *soap, const char *tag, int id, const tt__SystemDateTime *a, const char *type)
{
	if (((tt__SystemDateTime*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SystemDateTime*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemDateTime), "tt:SystemDateTime"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SetDateTimeType(soap, "tt:DateTimeType", -1, &(a->tt__SystemDateTime::DateTimeType), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:DaylightSavings", -1, &(a->tt__SystemDateTime::DaylightSavings), ""))
		return soap->error;
	if (soap_out_PointerTott__TimeZone(soap, "tt:TimeZone", -1, &(a->tt__SystemDateTime::TimeZone), ""))
		return soap->error;
	if (soap_out_PointerTott__DateTime(soap, "tt:UTCDateTime", -1, &(a->tt__SystemDateTime::UTCDateTime), ""))
		return soap->error;
	if (soap_out_PointerTott__DateTime(soap, "tt:LocalDateTime", -1, &(a->tt__SystemDateTime::LocalDateTime), ""))
		return soap->error;
	if (soap_out_PointerTott__SystemDateTimeExtension(soap, "tt:Extension", -1, &(a->tt__SystemDateTime::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SystemDateTime::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemDateTime(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemDateTime * SOAP_FMAC4 soap_in_tt__SystemDateTime(struct soap *soap, const char *tag, tt__SystemDateTime *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemDateTime *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemDateTime, sizeof(tt__SystemDateTime), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemDateTime)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemDateTime *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SystemDateTime*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_DateTimeType1 = 1;
	size_t soap_flag_DaylightSavings1 = 1;
	size_t soap_flag_TimeZone1 = 1;
	size_t soap_flag_UTCDateTime1 = 1;
	size_t soap_flag_LocalDateTime1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_DateTimeType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SetDateTimeType(soap, "tt:DateTimeType", &(a->tt__SystemDateTime::DateTimeType), "tt:SetDateTimeType"))
				{	soap_flag_DateTimeType1--;
					continue;
				}
			if (soap_flag_DaylightSavings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DaylightSavings", &(a->tt__SystemDateTime::DaylightSavings), "xsd:boolean"))
				{	soap_flag_DaylightSavings1--;
					continue;
				}
			if (soap_flag_TimeZone1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TimeZone(soap, "tt:TimeZone", &(a->tt__SystemDateTime::TimeZone), "tt:TimeZone"))
				{	soap_flag_TimeZone1--;
					continue;
				}
			if (soap_flag_UTCDateTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTime(soap, "tt:UTCDateTime", &(a->tt__SystemDateTime::UTCDateTime), "tt:DateTime"))
				{	soap_flag_UTCDateTime1--;
					continue;
				}
			if (soap_flag_LocalDateTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTime(soap, "tt:LocalDateTime", &(a->tt__SystemDateTime::LocalDateTime), "tt:DateTime"))
				{	soap_flag_LocalDateTime1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemDateTimeExtension(soap, "tt:Extension", &(a->tt__SystemDateTime::Extension), "tt:SystemDateTimeExtension"))
				{	soap_flag_Extension1--;
					continue;
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
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemDateTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemDateTime, 0, sizeof(tt__SystemDateTime), 0, soap_copy_tt__SystemDateTime);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DateTimeType1 > 0 || soap_flag_DaylightSavings1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SystemDateTime::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemDateTime);
	if (this->soap_out(soap, tag?tag:"tt:SystemDateTime", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemDateTime::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemDateTime(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemDateTime * SOAP_FMAC4 soap_get_tt__SystemDateTime(struct soap *soap, tt__SystemDateTime *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemDateTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemDateTime * SOAP_FMAC2 soap_instantiate_tt__SystemDateTime(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemDateTime(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemDateTime, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemDateTime);
		if (size)
			*size = sizeof(tt__SystemDateTime);
		((tt__SystemDateTime*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemDateTime, n);
		if (size)
			*size = n * sizeof(tt__SystemDateTime);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemDateTime*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemDateTime*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemDateTime(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemDateTime %p -> %p\n", q, p));
	*(tt__SystemDateTime*)p = *(tt__SystemDateTime*)q;
}

void tt__SystemLogUri::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SystemLogType(soap, &this->tt__SystemLogUri::Type);
	soap_default_xsd__anyURI(soap, &this->tt__SystemLogUri::Uri);
	this->tt__SystemLogUri::__size = 0;
	this->tt__SystemLogUri::__any = NULL;
	this->tt__SystemLogUri::__anyAttribute = NULL;
}

void tt__SystemLogUri::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__SystemLogUri::Uri);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemLogUri::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemLogUri(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogUri(struct soap *soap, const char *tag, int id, const tt__SystemLogUri *a, const char *type)
{
	if (((tt__SystemLogUri*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SystemLogUri*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLogUri), "tt:SystemLogUri"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SystemLogType(soap, "tt:Type", -1, &(a->tt__SystemLogUri::Type), ""))
		return soap->error;
	if (a->tt__SystemLogUri::Uri)
	{	if (soap_out_xsd__anyURI(soap, "tt:Uri", -1, &a->tt__SystemLogUri::Uri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Uri"))
		return soap->error;
	if (a->tt__SystemLogUri::__any)
	{	int i;
		for (i = 0; i < a->tt__SystemLogUri::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SystemLogUri::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SystemLogUri::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemLogUri(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemLogUri * SOAP_FMAC4 soap_in_tt__SystemLogUri(struct soap *soap, const char *tag, tt__SystemLogUri *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemLogUri *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogUri, sizeof(tt__SystemLogUri), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemLogUri)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemLogUri *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SystemLogUri*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_Uri1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SystemLogType(soap, "tt:Type", &(a->tt__SystemLogUri::Type), "tt:SystemLogType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_Uri1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Uri", &(a->tt__SystemLogUri::Uri), "xsd:anyURI"))
				{	soap_flag_Uri1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SystemLogUri::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SystemLogUri::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SystemLogUri::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SystemLogUri::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SystemLogUri::__any, "xsd:byte"))
				{	a->tt__SystemLogUri::__size++;
					a->tt__SystemLogUri::__any = NULL;
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
		if (a->tt__SystemLogUri::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SystemLogUri::__size)
			a->tt__SystemLogUri::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SystemLogUri::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemLogUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLogUri, 0, sizeof(tt__SystemLogUri), 0, soap_copy_tt__SystemLogUri);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0 || soap_flag_Uri1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SystemLogUri::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemLogUri);
	if (this->soap_out(soap, tag?tag:"tt:SystemLogUri", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemLogUri::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemLogUri(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemLogUri * SOAP_FMAC4 soap_get_tt__SystemLogUri(struct soap *soap, tt__SystemLogUri *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemLogUri * SOAP_FMAC2 soap_instantiate_tt__SystemLogUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemLogUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemLogUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemLogUri);
		if (size)
			*size = sizeof(tt__SystemLogUri);
		((tt__SystemLogUri*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemLogUri, n);
		if (size)
			*size = n * sizeof(tt__SystemLogUri);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemLogUri*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemLogUri*)cp->ptr;
}

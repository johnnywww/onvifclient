#include "soapH.h"


SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataInput(struct soap *soap, const char *tag, int id, const tt__MetadataInput *a, const char *type)
{
	if (((tt__MetadataInput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataInput*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataInput), "tt:MetadataInput"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataInput::MetadataConfig)
	{	int i;
		for (i = 0; i < a->tt__MetadataInput::__sizeMetadataConfig; i++)
			if (soap_out_PointerTott__Config(soap, "tt:MetadataConfig", -1, a->tt__MetadataInput::MetadataConfig + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MetadataInputExtension(soap, "tt:Extension", -1, &(a->tt__MetadataInput::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataInput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataInput(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataInput * SOAP_FMAC4 soap_in_tt__MetadataInput(struct soap *soap, const char *tag, tt__MetadataInput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataInput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataInput, sizeof(tt__MetadataInput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataInput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataInput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataInput*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_MetadataConfig1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:MetadataConfig", 1, NULL))
			{	if (a->tt__MetadataInput::MetadataConfig == NULL)
				{	if (soap_blist_MetadataConfig1 == NULL)
						soap_blist_MetadataConfig1 = soap_new_block(soap);
					a->tt__MetadataInput::MetadataConfig = (tt__Config **)soap_push_block(soap, soap_blist_MetadataConfig1, sizeof(tt__Config *));
					if (a->tt__MetadataInput::MetadataConfig == NULL)
						return NULL;
					*a->tt__MetadataInput::MetadataConfig = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Config(soap, "tt:MetadataConfig", a->tt__MetadataInput::MetadataConfig, "tt:Config"))
				{	a->tt__MetadataInput::__sizeMetadataConfig++;
					a->tt__MetadataInput::MetadataConfig = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataInputExtension(soap, "tt:Extension", &(a->tt__MetadataInput::Extension), "tt:MetadataInputExtension"))
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
		if (a->tt__MetadataInput::MetadataConfig)
			soap_pop_block(soap, soap_blist_MetadataConfig1);
		if (a->tt__MetadataInput::__sizeMetadataConfig)
			a->tt__MetadataInput::MetadataConfig = (tt__Config **)soap_save_block(soap, soap_blist_MetadataConfig1, NULL, 1);
		else
		{	a->tt__MetadataInput::MetadataConfig = NULL;
			if (soap_blist_MetadataConfig1)
				soap_end_block(soap, soap_blist_MetadataConfig1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataInput, 0, sizeof(tt__MetadataInput), 0, soap_copy_tt__MetadataInput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MetadataInput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataInput);
	if (this->soap_out(soap, tag?tag:"tt:MetadataInput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataInput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataInput(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataInput * SOAP_FMAC4 soap_get_tt__MetadataInput(struct soap *soap, tt__MetadataInput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataInput * SOAP_FMAC2 soap_instantiate_tt__MetadataInput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataInput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataInput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataInput);
		if (size)
			*size = sizeof(tt__MetadataInput);
		((tt__MetadataInput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataInput, n);
		if (size)
			*size = n * sizeof(tt__MetadataInput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataInput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataInput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataInput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataInput %p -> %p\n", q, p));
	*(tt__MetadataInput*)p = *(tt__MetadataInput*)q;
}

void tt__SourceIdentificationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SourceIdentificationExtension::__size = 0;
	this->tt__SourceIdentificationExtension::__any = NULL;
}

void tt__SourceIdentificationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SourceIdentificationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SourceIdentificationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceIdentificationExtension(struct soap *soap, const char *tag, int id, const tt__SourceIdentificationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceIdentificationExtension), "tt:SourceIdentificationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SourceIdentificationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SourceIdentificationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SourceIdentificationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SourceIdentificationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SourceIdentificationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SourceIdentificationExtension * SOAP_FMAC4 soap_in_tt__SourceIdentificationExtension(struct soap *soap, const char *tag, tt__SourceIdentificationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SourceIdentificationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceIdentificationExtension, sizeof(tt__SourceIdentificationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SourceIdentificationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SourceIdentificationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__SourceIdentificationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SourceIdentificationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SourceIdentificationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SourceIdentificationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SourceIdentificationExtension::__any, "xsd:byte"))
				{	a->tt__SourceIdentificationExtension::__size++;
					a->tt__SourceIdentificationExtension::__any = NULL;
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
		if (a->tt__SourceIdentificationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SourceIdentificationExtension::__size)
			a->tt__SourceIdentificationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SourceIdentificationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SourceIdentificationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceIdentificationExtension, 0, sizeof(tt__SourceIdentificationExtension), 0, soap_copy_tt__SourceIdentificationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SourceIdentificationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SourceIdentificationExtension);
	if (this->soap_out(soap, tag?tag:"tt:SourceIdentificationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SourceIdentificationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SourceIdentificationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SourceIdentificationExtension * SOAP_FMAC4 soap_get_tt__SourceIdentificationExtension(struct soap *soap, tt__SourceIdentificationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceIdentificationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SourceIdentificationExtension * SOAP_FMAC2 soap_instantiate_tt__SourceIdentificationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SourceIdentificationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SourceIdentificationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SourceIdentificationExtension);
		if (size)
			*size = sizeof(tt__SourceIdentificationExtension);
		((tt__SourceIdentificationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SourceIdentificationExtension, n);
		if (size)
			*size = n * sizeof(tt__SourceIdentificationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SourceIdentificationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SourceIdentificationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SourceIdentificationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SourceIdentificationExtension %p -> %p\n", q, p));
	*(tt__SourceIdentificationExtension*)p = *(tt__SourceIdentificationExtension*)q;
}

void tt__SourceIdentification::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__SourceIdentification::Name);
	this->tt__SourceIdentification::__sizeToken = 0;
	this->tt__SourceIdentification::Token = NULL;
	this->tt__SourceIdentification::Extension = NULL;
	this->tt__SourceIdentification::__anyAttribute = NULL;
}

void tt__SourceIdentification::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__SourceIdentification::Name);
	if (this->tt__SourceIdentification::Token)
	{	int i;
		for (i = 0; i < this->tt__SourceIdentification::__sizeToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, this->tt__SourceIdentification::Token + i);
		}
	}
	soap_serialize_PointerTott__SourceIdentificationExtension(soap, &this->tt__SourceIdentification::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SourceIdentification::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SourceIdentification(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceIdentification(struct soap *soap, const char *tag, int id, const tt__SourceIdentification *a, const char *type)
{
	if (((tt__SourceIdentification*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SourceIdentification*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceIdentification), "tt:SourceIdentification"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SourceIdentification::Name)
	{	if (soap_out_string(soap, "tt:Name", -1, &a->tt__SourceIdentification::Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->tt__SourceIdentification::Token)
	{	int i;
		for (i = 0; i < a->tt__SourceIdentification::__sizeToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, a->tt__SourceIdentification::Token + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SourceIdentificationExtension(soap, "tt:Extension", -1, &(a->tt__SourceIdentification::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SourceIdentification::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SourceIdentification(soap, tag, this, type);
}

SOAP_FMAC3 tt__SourceIdentification * SOAP_FMAC4 soap_in_tt__SourceIdentification(struct soap *soap, const char *tag, tt__SourceIdentification *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SourceIdentification *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceIdentification, sizeof(tt__SourceIdentification), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SourceIdentification)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SourceIdentification *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SourceIdentification*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	struct soap_blist *soap_blist_Token1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &(a->tt__SourceIdentification::Name), "xsd:string"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Token", 1, NULL))
			{	if (a->tt__SourceIdentification::Token == NULL)
				{	if (soap_blist_Token1 == NULL)
						soap_blist_Token1 = soap_new_block(soap);
					a->tt__SourceIdentification::Token = (char **)soap_push_block(soap, soap_blist_Token1, sizeof(char *));
					if (a->tt__SourceIdentification::Token == NULL)
						return NULL;
					*a->tt__SourceIdentification::Token = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", a->tt__SourceIdentification::Token, "tt:ReferenceToken"))
				{	a->tt__SourceIdentification::__sizeToken++;
					a->tt__SourceIdentification::Token = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceIdentificationExtension(soap, "tt:Extension", &(a->tt__SourceIdentification::Extension), "tt:SourceIdentificationExtension"))
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
		if (a->tt__SourceIdentification::Token)
			soap_pop_block(soap, soap_blist_Token1);
		if (a->tt__SourceIdentification::__sizeToken)
			a->tt__SourceIdentification::Token = (char **)soap_save_block(soap, soap_blist_Token1, NULL, 1);
		else
		{	a->tt__SourceIdentification::Token = NULL;
			if (soap_blist_Token1)
				soap_end_block(soap, soap_blist_Token1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SourceIdentification *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceIdentification, 0, sizeof(tt__SourceIdentification), 0, soap_copy_tt__SourceIdentification);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name1 > 0 || a->tt__SourceIdentification::__sizeToken < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SourceIdentification::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SourceIdentification);
	if (this->soap_out(soap, tag?tag:"tt:SourceIdentification", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SourceIdentification::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SourceIdentification(soap, this, tag, type);
}

SOAP_FMAC3 tt__SourceIdentification * SOAP_FMAC4 soap_get_tt__SourceIdentification(struct soap *soap, tt__SourceIdentification *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceIdentification(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SourceIdentification * SOAP_FMAC2 soap_instantiate_tt__SourceIdentification(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SourceIdentification(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SourceIdentification, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SourceIdentification);
		if (size)
			*size = sizeof(tt__SourceIdentification);
		((tt__SourceIdentification*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SourceIdentification, n);
		if (size)
			*size = n * sizeof(tt__SourceIdentification);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SourceIdentification*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SourceIdentification*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SourceIdentification(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SourceIdentification %p -> %p\n", q, p));
	*(tt__SourceIdentification*)p = *(tt__SourceIdentification*)q;
}

void tt__AnalyticsEngineInput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngineInput::SourceIdentification = NULL;
	this->tt__AnalyticsEngineInput::VideoInput = NULL;
	this->tt__AnalyticsEngineInput::MetadataInput = NULL;
	this->tt__AnalyticsEngineInput::__size = 0;
	this->tt__AnalyticsEngineInput::__any = NULL;
	this->tt__AnalyticsEngineInput::__anyAttribute = NULL;
}

void tt__AnalyticsEngineInput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SourceIdentification(soap, &this->tt__AnalyticsEngineInput::SourceIdentification);
	soap_serialize_PointerTott__VideoEncoderConfiguration(soap, &this->tt__AnalyticsEngineInput::VideoInput);
	soap_serialize_PointerTott__MetadataInput(soap, &this->tt__AnalyticsEngineInput::MetadataInput);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineInput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineInput(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInput(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineInput *a, const char *type)
{
	if (((tt__AnalyticsEngineInput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsEngineInput*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInput), "tt:AnalyticsEngineInput"))
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
	if (a->tt__AnalyticsEngineInput::SourceIdentification)
	{	if (soap_out_PointerTott__SourceIdentification(soap, "tt:SourceIdentification", -1, &a->tt__AnalyticsEngineInput::SourceIdentification, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceIdentification"))
		return soap->error;
	if (a->tt__AnalyticsEngineInput::VideoInput)
	{	if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoInput", -1, &a->tt__AnalyticsEngineInput::VideoInput, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoInput"))
		return soap->error;
	if (a->tt__AnalyticsEngineInput::MetadataInput)
	{	if (soap_out_PointerTott__MetadataInput(soap, "tt:MetadataInput", -1, &a->tt__AnalyticsEngineInput::MetadataInput, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MetadataInput"))
		return soap->error;
	if (a->tt__AnalyticsEngineInput::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineInput::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsEngineInput::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineInput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineInput(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInput * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInput(struct soap *soap, const char *tag, tt__AnalyticsEngineInput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineInput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInput, sizeof(tt__AnalyticsEngineInput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineInput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineInput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsEngineInput*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_SourceIdentification1 = 1;
	size_t soap_flag_VideoInput1 = 1;
	size_t soap_flag_MetadataInput1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
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
			if (soap_flag_SourceIdentification1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceIdentification(soap, "tt:SourceIdentification", &(a->tt__AnalyticsEngineInput::SourceIdentification), "tt:SourceIdentification"))
				{	soap_flag_SourceIdentification1--;
					continue;
				}
			if (soap_flag_VideoInput1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoInput", &(a->tt__AnalyticsEngineInput::VideoInput), "tt:VideoEncoderConfiguration"))
				{	soap_flag_VideoInput1--;
					continue;
				}
			if (soap_flag_MetadataInput1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataInput(soap, "tt:MetadataInput", &(a->tt__AnalyticsEngineInput::MetadataInput), "tt:MetadataInput"))
				{	soap_flag_MetadataInput1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsEngineInput::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsEngineInput::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsEngineInput::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsEngineInput::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsEngineInput::__any, "xsd:byte"))
				{	a->tt__AnalyticsEngineInput::__size++;
					a->tt__AnalyticsEngineInput::__any = NULL;
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
		if (a->tt__AnalyticsEngineInput::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsEngineInput::__size)
			a->tt__AnalyticsEngineInput::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineInput::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngineInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInput, 0, sizeof(tt__AnalyticsEngineInput), 0, soap_copy_tt__AnalyticsEngineInput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_SourceIdentification1 > 0 || soap_flag_VideoInput1 > 0 || soap_flag_MetadataInput1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsEngineInput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInput);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineInput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineInput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineInput(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInput * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInput(struct soap *soap, tt__AnalyticsEngineInput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineInput * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineInput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineInput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineInput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineInput);
		if (size)
			*size = sizeof(tt__AnalyticsEngineInput);
		((tt__AnalyticsEngineInput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineInput, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngineInput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngineInput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngineInput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineInput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineInput %p -> %p\n", q, p));
	*(tt__AnalyticsEngineInput*)p = *(tt__AnalyticsEngineInput*)q;
}

void tt__AnalyticsEngineInputInfoExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngineInputInfoExtension::__size = 0;
	this->tt__AnalyticsEngineInputInfoExtension::__any = NULL;
}

void tt__AnalyticsEngineInputInfoExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineInputInfoExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineInputInfoExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineInputInfoExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension), "tt:AnalyticsEngineInputInfoExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsEngineInputInfoExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineInputInfoExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsEngineInputInfoExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineInputInfoExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineInputInfoExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInputInfoExtension * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const char *tag, tt__AnalyticsEngineInputInfoExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineInputInfoExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension, sizeof(tt__AnalyticsEngineInputInfoExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineInputInfoExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AnalyticsEngineInputInfoExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsEngineInputInfoExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsEngineInputInfoExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsEngineInputInfoExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsEngineInputInfoExtension::__any, "xsd:byte"))
				{	a->tt__AnalyticsEngineInputInfoExtension::__size++;
					a->tt__AnalyticsEngineInputInfoExtension::__any = NULL;
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
		if (a->tt__AnalyticsEngineInputInfoExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsEngineInputInfoExtension::__size)
			a->tt__AnalyticsEngineInputInfoExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineInputInfoExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngineInputInfoExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension, 0, sizeof(tt__AnalyticsEngineInputInfoExtension), 0, soap_copy_tt__AnalyticsEngineInputInfoExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsEngineInputInfoExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineInputInfoExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineInputInfoExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineInputInfoExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInputInfoExtension * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, tt__AnalyticsEngineInputInfoExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInputInfoExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineInputInfoExtension * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineInputInfoExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineInputInfoExtension);
		if (size)
			*size = sizeof(tt__AnalyticsEngineInputInfoExtension);
		((tt__AnalyticsEngineInputInfoExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineInputInfoExtension, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngineInputInfoExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngineInputInfoExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngineInputInfoExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineInputInfoExtension %p -> %p\n", q, p));
	*(tt__AnalyticsEngineInputInfoExtension*)p = *(tt__AnalyticsEngineInputInfoExtension*)q;
}

void tt__AnalyticsEngineInputInfo::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngineInputInfo::InputInfo = NULL;
	this->tt__AnalyticsEngineInputInfo::Extension = NULL;
	this->tt__AnalyticsEngineInputInfo::__anyAttribute = NULL;
}

void tt__AnalyticsEngineInputInfo::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Config(soap, &this->tt__AnalyticsEngineInputInfo::InputInfo);
	soap_serialize_PointerTott__AnalyticsEngineInputInfoExtension(soap, &this->tt__AnalyticsEngineInputInfo::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineInputInfo::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineInputInfo(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInputInfo(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineInputInfo *a, const char *type)
{
	if (((tt__AnalyticsEngineInputInfo*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsEngineInputInfo*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfo), "tt:AnalyticsEngineInputInfo"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Config(soap, "tt:InputInfo", -1, &(a->tt__AnalyticsEngineInputInfo::InputInfo), ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsEngineInputInfoExtension(soap, "tt:Extension", -1, &(a->tt__AnalyticsEngineInputInfo::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineInputInfo::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineInputInfo(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInputInfo * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInputInfo(struct soap *soap, const char *tag, tt__AnalyticsEngineInputInfo *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineInputInfo *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfo, sizeof(tt__AnalyticsEngineInputInfo), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineInputInfo)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineInputInfo *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsEngineInputInfo*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_InputInfo1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_InputInfo1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Config(soap, "tt:InputInfo", &(a->tt__AnalyticsEngineInputInfo::InputInfo), "tt:Config"))
				{	soap_flag_InputInfo1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInputInfoExtension(soap, "tt:Extension", &(a->tt__AnalyticsEngineInputInfo::Extension), "tt:AnalyticsEngineInputInfoExtension"))
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
	{	a = (tt__AnalyticsEngineInputInfo *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInputInfo, 0, sizeof(tt__AnalyticsEngineInputInfo), 0, soap_copy_tt__AnalyticsEngineInputInfo);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsEngineInputInfo::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInputInfo);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineInputInfo", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineInputInfo::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineInputInfo(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineInputInfo * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInputInfo(struct soap *soap, tt__AnalyticsEngineInputInfo *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInputInfo(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineInputInfo * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineInputInfo(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineInputInfo(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineInputInfo, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineInputInfo);
		if (size)
			*size = sizeof(tt__AnalyticsEngineInputInfo);
		((tt__AnalyticsEngineInputInfo*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineInputInfo, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngineInputInfo);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngineInputInfo*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngineInputInfo*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineInputInfo(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineInputInfo %p -> %p\n", q, p));
	*(tt__AnalyticsEngineInputInfo*)p = *(tt__AnalyticsEngineInputInfo*)q;
}

void tt__EngineConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EngineConfiguration::VideoAnalyticsConfiguration = NULL;
	this->tt__EngineConfiguration::AnalyticsEngineInputInfo = NULL;
	this->tt__EngineConfiguration::__size = 0;
	this->tt__EngineConfiguration::__any = NULL;
	this->tt__EngineConfiguration::__anyAttribute = NULL;
}

void tt__EngineConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &this->tt__EngineConfiguration::VideoAnalyticsConfiguration);
	soap_serialize_PointerTott__AnalyticsEngineInputInfo(soap, &this->tt__EngineConfiguration::AnalyticsEngineInputInfo);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EngineConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EngineConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EngineConfiguration(struct soap *soap, const char *tag, int id, const tt__EngineConfiguration *a, const char *type)
{
	if (((tt__EngineConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EngineConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EngineConfiguration), "tt:EngineConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EngineConfiguration::VideoAnalyticsConfiguration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", -1, &a->tt__EngineConfiguration::VideoAnalyticsConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoAnalyticsConfiguration"))
		return soap->error;
	if (a->tt__EngineConfiguration::AnalyticsEngineInputInfo)
	{	if (soap_out_PointerTott__AnalyticsEngineInputInfo(soap, "tt:AnalyticsEngineInputInfo", -1, &a->tt__EngineConfiguration::AnalyticsEngineInputInfo, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineInputInfo"))
		return soap->error;
	if (a->tt__EngineConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__EngineConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EngineConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EngineConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EngineConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__EngineConfiguration * SOAP_FMAC4 soap_in_tt__EngineConfiguration(struct soap *soap, const char *tag, tt__EngineConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EngineConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EngineConfiguration, sizeof(tt__EngineConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EngineConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EngineConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EngineConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_VideoAnalyticsConfiguration1 = 1;
	size_t soap_flag_AnalyticsEngineInputInfo1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_VideoAnalyticsConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", &(a->tt__EngineConfiguration::VideoAnalyticsConfiguration), "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_VideoAnalyticsConfiguration1--;
					continue;
				}
			if (soap_flag_AnalyticsEngineInputInfo1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInputInfo(soap, "tt:AnalyticsEngineInputInfo", &(a->tt__EngineConfiguration::AnalyticsEngineInputInfo), "tt:AnalyticsEngineInputInfo"))
				{	soap_flag_AnalyticsEngineInputInfo1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EngineConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EngineConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EngineConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EngineConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EngineConfiguration::__any, "xsd:byte"))
				{	a->tt__EngineConfiguration::__size++;
					a->tt__EngineConfiguration::__any = NULL;
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
		if (a->tt__EngineConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EngineConfiguration::__size)
			a->tt__EngineConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EngineConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EngineConfiguration, 0, sizeof(tt__EngineConfiguration), 0, soap_copy_tt__EngineConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoAnalyticsConfiguration1 > 0 || soap_flag_AnalyticsEngineInputInfo1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__EngineConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EngineConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:EngineConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EngineConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EngineConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__EngineConfiguration * SOAP_FMAC4 soap_get_tt__EngineConfiguration(struct soap *soap, tt__EngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EngineConfiguration * SOAP_FMAC2 soap_instantiate_tt__EngineConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EngineConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EngineConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EngineConfiguration);
		if (size)
			*size = sizeof(tt__EngineConfiguration);
		((tt__EngineConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EngineConfiguration, n);
		if (size)
			*size = n * sizeof(tt__EngineConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EngineConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EngineConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EngineConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EngineConfiguration %p -> %p\n", q, p));
	*(tt__EngineConfiguration*)p = *(tt__EngineConfiguration*)q;
}

void tt__AnalyticsDeviceEngineConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsDeviceEngineConfigurationExtension::__size = 0;
	this->tt__AnalyticsDeviceEngineConfigurationExtension::__any = NULL;
}

void tt__AnalyticsDeviceEngineConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsDeviceEngineConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsDeviceEngineConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__AnalyticsDeviceEngineConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension), "tt:AnalyticsDeviceEngineConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsDeviceEngineConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsDeviceEngineConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsDeviceEngineConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsDeviceEngineConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsDeviceEngineConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const char *tag, tt__AnalyticsDeviceEngineConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsDeviceEngineConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension, sizeof(tt__AnalyticsDeviceEngineConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsDeviceEngineConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AnalyticsDeviceEngineConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsDeviceEngineConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsDeviceEngineConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsDeviceEngineConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsDeviceEngineConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__AnalyticsDeviceEngineConfigurationExtension::__size++;
					a->tt__AnalyticsDeviceEngineConfigurationExtension::__any = NULL;
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
		if (a->tt__AnalyticsDeviceEngineConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsDeviceEngineConfigurationExtension::__size)
			a->tt__AnalyticsDeviceEngineConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsDeviceEngineConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsDeviceEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension, 0, sizeof(tt__AnalyticsDeviceEngineConfigurationExtension), 0, soap_copy_tt__AnalyticsDeviceEngineConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsDeviceEngineConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsDeviceEngineConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsDeviceEngineConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsDeviceEngineConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, tt__AnalyticsDeviceEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsDeviceEngineConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsDeviceEngineConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsDeviceEngineConfigurationExtension);
		if (size)
			*size = sizeof(tt__AnalyticsDeviceEngineConfigurationExtension);
		((tt__AnalyticsDeviceEngineConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsDeviceEngineConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsDeviceEngineConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsDeviceEngineConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsDeviceEngineConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsDeviceEngineConfigurationExtension %p -> %p\n", q, p));
	*(tt__AnalyticsDeviceEngineConfigurationExtension*)p = *(tt__AnalyticsDeviceEngineConfigurationExtension*)q;
}

void tt__AnalyticsDeviceEngineConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration = 0;
	this->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = NULL;
	this->tt__AnalyticsDeviceEngineConfiguration::Extension = NULL;
	this->tt__AnalyticsDeviceEngineConfiguration::__anyAttribute = NULL;
}

void tt__AnalyticsDeviceEngineConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration)
	{	int i;
		for (i = 0; i < this->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration; i++)
		{
			soap_serialize_PointerTott__EngineConfiguration(soap, this->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration + i);
		}
	}
	soap_serialize_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, &this->tt__AnalyticsDeviceEngineConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsDeviceEngineConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsDeviceEngineConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const char *tag, int id, const tt__AnalyticsDeviceEngineConfiguration *a, const char *type)
{
	if (((tt__AnalyticsDeviceEngineConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsDeviceEngineConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration), "tt:AnalyticsDeviceEngineConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration; i++)
			if (soap_out_PointerTott__EngineConfiguration(soap, "tt:EngineConfiguration", -1, a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__AnalyticsDeviceEngineConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsDeviceEngineConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsDeviceEngineConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceEngineConfiguration * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const char *tag, tt__AnalyticsDeviceEngineConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsDeviceEngineConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration, sizeof(tt__AnalyticsDeviceEngineConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsDeviceEngineConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsDeviceEngineConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_EngineConfiguration1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:EngineConfiguration", 1, NULL))
			{	if (a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration == NULL)
				{	if (soap_blist_EngineConfiguration1 == NULL)
						soap_blist_EngineConfiguration1 = soap_new_block(soap);
					a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = (tt__EngineConfiguration **)soap_push_block(soap, soap_blist_EngineConfiguration1, sizeof(tt__EngineConfiguration *));
					if (a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration == NULL)
						return NULL;
					*a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__EngineConfiguration(soap, "tt:EngineConfiguration", a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration, "tt:EngineConfiguration"))
				{	a->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration++;
					a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, "tt:Extension", &(a->tt__AnalyticsDeviceEngineConfiguration::Extension), "tt:AnalyticsDeviceEngineConfigurationExtension"))
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
		if (a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration)
			soap_pop_block(soap, soap_blist_EngineConfiguration1);
		if (a->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration)
			a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = (tt__EngineConfiguration **)soap_save_block(soap, soap_blist_EngineConfiguration1, NULL, 1);
		else
		{	a->tt__AnalyticsDeviceEngineConfiguration::EngineConfiguration = NULL;
			if (soap_blist_EngineConfiguration1)
				soap_end_block(soap, soap_blist_EngineConfiguration1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsDeviceEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration, 0, sizeof(tt__AnalyticsDeviceEngineConfiguration), 0, soap_copy_tt__AnalyticsDeviceEngineConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__AnalyticsDeviceEngineConfiguration::__sizeEngineConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsDeviceEngineConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsDeviceEngineConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsDeviceEngineConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsDeviceEngineConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceEngineConfiguration * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, tt__AnalyticsDeviceEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsDeviceEngineConfiguration * SOAP_FMAC2 soap_instantiate_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsDeviceEngineConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsDeviceEngineConfiguration);
		if (size)
			*size = sizeof(tt__AnalyticsDeviceEngineConfiguration);
		((tt__AnalyticsDeviceEngineConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsDeviceEngineConfiguration, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsDeviceEngineConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsDeviceEngineConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsDeviceEngineConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsDeviceEngineConfiguration %p -> %p\n", q, p));
	*(tt__AnalyticsDeviceEngineConfiguration*)p = *(tt__AnalyticsDeviceEngineConfiguration*)q;
}

void tt__AnalyticsEngine::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngine::AnalyticsEngineConfiguration = NULL;
	this->tt__AnalyticsEngine::__size = 0;
	this->tt__AnalyticsEngine::__any = NULL;
	this->tt__AnalyticsEngine::__anyAttribute = NULL;
}

void tt__AnalyticsEngine::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsDeviceEngineConfiguration(soap, &this->tt__AnalyticsEngine::AnalyticsEngineConfiguration);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngine::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngine(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngine(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngine *a, const char *type)
{
	if (((tt__AnalyticsEngine*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsEngine*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngine), "tt:AnalyticsEngine"))
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
	if (a->tt__AnalyticsEngine::AnalyticsEngineConfiguration)
	{	if (soap_out_PointerTott__AnalyticsDeviceEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &a->tt__AnalyticsEngine::AnalyticsEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineConfiguration"))
		return soap->error;
	if (a->tt__AnalyticsEngine::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngine::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsEngine::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngine::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngine(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngine * SOAP_FMAC4 soap_in_tt__AnalyticsEngine(struct soap *soap, const char *tag, tt__AnalyticsEngine *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngine *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngine, sizeof(tt__AnalyticsEngine), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngine)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngine *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsEngine*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_AnalyticsEngineConfiguration1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
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
			if (soap_flag_AnalyticsEngineConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &(a->tt__AnalyticsEngine::AnalyticsEngineConfiguration), "tt:AnalyticsDeviceEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsEngine::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsEngine::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsEngine::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsEngine::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsEngine::__any, "xsd:byte"))
				{	a->tt__AnalyticsEngine::__size++;
					a->tt__AnalyticsEngine::__any = NULL;
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
		if (a->tt__AnalyticsEngine::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsEngine::__size)
			a->tt__AnalyticsEngine::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsEngine::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngine *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngine, 0, sizeof(tt__AnalyticsEngine), 0, soap_copy_tt__AnalyticsEngine);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_AnalyticsEngineConfiguration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsEngine::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngine);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngine", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngine::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngine(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngine * SOAP_FMAC4 soap_get_tt__AnalyticsEngine(struct soap *soap, tt__AnalyticsEngine *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngine(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngine * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngine(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngine(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngine, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngine);
		if (size)
			*size = sizeof(tt__AnalyticsEngine);
		((tt__AnalyticsEngine*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngine, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngine);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngine*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngine*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngine(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngine %p -> %p\n", q, p));
	*(tt__AnalyticsEngine*)p = *(tt__AnalyticsEngine*)q;
}

void tt__ReplayConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__duration(soap, &this->tt__ReplayConfiguration::SessionTimeout);
	this->tt__ReplayConfiguration::__size = 0;
	this->tt__ReplayConfiguration::__any = NULL;
	this->tt__ReplayConfiguration::__anyAttribute = NULL;
}

void tt__ReplayConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ReplayConfiguration::SessionTimeout, SOAP_TYPE_xsd__duration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReplayConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReplayConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReplayConfiguration(struct soap *soap, const char *tag, int id, const tt__ReplayConfiguration *a, const char *type)
{
	if (((tt__ReplayConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReplayConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReplayConfiguration), "tt:ReplayConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_xsd__duration(soap, "tt:SessionTimeout", -1, &(a->tt__ReplayConfiguration::SessionTimeout), ""))
		return soap->error;
	if (a->tt__ReplayConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__ReplayConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReplayConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReplayConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReplayConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReplayConfiguration * SOAP_FMAC4 soap_in_tt__ReplayConfiguration(struct soap *soap, const char *tag, tt__ReplayConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReplayConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReplayConfiguration, sizeof(tt__ReplayConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReplayConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReplayConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReplayConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SessionTimeout1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SessionTimeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:SessionTimeout", &(a->tt__ReplayConfiguration::SessionTimeout), "xsd:duration"))
				{	soap_flag_SessionTimeout1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReplayConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReplayConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReplayConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReplayConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReplayConfiguration::__any, "xsd:byte"))
				{	a->tt__ReplayConfiguration::__size++;
					a->tt__ReplayConfiguration::__any = NULL;
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
		if (a->tt__ReplayConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReplayConfiguration::__size)
			a->tt__ReplayConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReplayConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReplayConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReplayConfiguration, 0, sizeof(tt__ReplayConfiguration), 0, soap_copy_tt__ReplayConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SessionTimeout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ReplayConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReplayConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:ReplayConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReplayConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReplayConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReplayConfiguration * SOAP_FMAC4 soap_get_tt__ReplayConfiguration(struct soap *soap, tt__ReplayConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReplayConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReplayConfiguration * SOAP_FMAC2 soap_instantiate_tt__ReplayConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReplayConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReplayConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReplayConfiguration);
		if (size)
			*size = sizeof(tt__ReplayConfiguration);
		((tt__ReplayConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReplayConfiguration, n);
		if (size)
			*size = n * sizeof(tt__ReplayConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReplayConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReplayConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReplayConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReplayConfiguration %p -> %p\n", q, p));
	*(tt__ReplayConfiguration*)p = *(tt__ReplayConfiguration*)q;
}

void tt__GetRecordingJobsResponseItem::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingJobReference(soap, &this->tt__GetRecordingJobsResponseItem::JobToken);
	this->tt__GetRecordingJobsResponseItem::JobConfiguration = NULL;
	this->tt__GetRecordingJobsResponseItem::__size = 0;
	this->tt__GetRecordingJobsResponseItem::__any = NULL;
	this->tt__GetRecordingJobsResponseItem::__anyAttribute = NULL;
}

void tt__GetRecordingJobsResponseItem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingJobReference(soap, &this->tt__GetRecordingJobsResponseItem::JobToken);
	soap_serialize_PointerTott__RecordingJobConfiguration(soap, &this->tt__GetRecordingJobsResponseItem::JobConfiguration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__GetRecordingJobsResponseItem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__GetRecordingJobsResponseItem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetRecordingJobsResponseItem(struct soap *soap, const char *tag, int id, const tt__GetRecordingJobsResponseItem *a, const char *type)
{
	if (((tt__GetRecordingJobsResponseItem*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__GetRecordingJobsResponseItem*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetRecordingJobsResponseItem), "tt:GetRecordingJobsResponseItem"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__GetRecordingJobsResponseItem::JobToken)
	{	if (soap_out_tt__RecordingJobReference(soap, "tt:JobToken", -1, &a->tt__GetRecordingJobsResponseItem::JobToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:JobToken"))
		return soap->error;
	if (a->tt__GetRecordingJobsResponseItem::JobConfiguration)
	{	if (soap_out_PointerTott__RecordingJobConfiguration(soap, "tt:JobConfiguration", -1, &a->tt__GetRecordingJobsResponseItem::JobConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:JobConfiguration"))
		return soap->error;
	if (a->tt__GetRecordingJobsResponseItem::__any)
	{	int i;
		for (i = 0; i < a->tt__GetRecordingJobsResponseItem::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__GetRecordingJobsResponseItem::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__GetRecordingJobsResponseItem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__GetRecordingJobsResponseItem(soap, tag, this, type);
}

SOAP_FMAC3 tt__GetRecordingJobsResponseItem * SOAP_FMAC4 soap_in_tt__GetRecordingJobsResponseItem(struct soap *soap, const char *tag, tt__GetRecordingJobsResponseItem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__GetRecordingJobsResponseItem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetRecordingJobsResponseItem, sizeof(tt__GetRecordingJobsResponseItem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__GetRecordingJobsResponseItem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__GetRecordingJobsResponseItem *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__GetRecordingJobsResponseItem*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_JobToken1 = 1;
	size_t soap_flag_JobConfiguration1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_JobToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobReference(soap, "tt:JobToken", &(a->tt__GetRecordingJobsResponseItem::JobToken), "tt:RecordingJobReference"))
				{	soap_flag_JobToken1--;
					continue;
				}
			if (soap_flag_JobConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobConfiguration(soap, "tt:JobConfiguration", &(a->tt__GetRecordingJobsResponseItem::JobConfiguration), "tt:RecordingJobConfiguration"))
				{	soap_flag_JobConfiguration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__GetRecordingJobsResponseItem::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__GetRecordingJobsResponseItem::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__GetRecordingJobsResponseItem::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__GetRecordingJobsResponseItem::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__GetRecordingJobsResponseItem::__any, "xsd:byte"))
				{	a->tt__GetRecordingJobsResponseItem::__size++;
					a->tt__GetRecordingJobsResponseItem::__any = NULL;
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
		if (a->tt__GetRecordingJobsResponseItem::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__GetRecordingJobsResponseItem::__size)
			a->tt__GetRecordingJobsResponseItem::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__GetRecordingJobsResponseItem::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__GetRecordingJobsResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetRecordingJobsResponseItem, 0, sizeof(tt__GetRecordingJobsResponseItem), 0, soap_copy_tt__GetRecordingJobsResponseItem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_JobToken1 > 0 || soap_flag_JobConfiguration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__GetRecordingJobsResponseItem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__GetRecordingJobsResponseItem);
	if (this->soap_out(soap, tag?tag:"tt:GetRecordingJobsResponseItem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__GetRecordingJobsResponseItem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__GetRecordingJobsResponseItem(soap, this, tag, type);
}

SOAP_FMAC3 tt__GetRecordingJobsResponseItem * SOAP_FMAC4 soap_get_tt__GetRecordingJobsResponseItem(struct soap *soap, tt__GetRecordingJobsResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetRecordingJobsResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__GetRecordingJobsResponseItem * SOAP_FMAC2 soap_instantiate_tt__GetRecordingJobsResponseItem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__GetRecordingJobsResponseItem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__GetRecordingJobsResponseItem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__GetRecordingJobsResponseItem);
		if (size)
			*size = sizeof(tt__GetRecordingJobsResponseItem);
		((tt__GetRecordingJobsResponseItem*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__GetRecordingJobsResponseItem, n);
		if (size)
			*size = n * sizeof(tt__GetRecordingJobsResponseItem);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__GetRecordingJobsResponseItem*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__GetRecordingJobsResponseItem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__GetRecordingJobsResponseItem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__GetRecordingJobsResponseItem %p -> %p\n", q, p));
	*(tt__GetRecordingJobsResponseItem*)p = *(tt__GetRecordingJobsResponseItem*)q;
}

void tt__RecordingJobStateTrack::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__RecordingJobStateTrack::SourceTag);
	soap_default_tt__TrackReference(soap, &this->tt__RecordingJobStateTrack::Destination);
	soap_default_string(soap, &this->tt__RecordingJobStateTrack::Error);
	soap_default_tt__RecordingJobState(soap, &this->tt__RecordingJobStateTrack::State);
	this->tt__RecordingJobStateTrack::__size = 0;
	this->tt__RecordingJobStateTrack::__any = NULL;
	this->tt__RecordingJobStateTrack::__anyAttribute = NULL;
}

void tt__RecordingJobStateTrack::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__RecordingJobStateTrack::SourceTag);
	soap_serialize_tt__TrackReference(soap, &this->tt__RecordingJobStateTrack::Destination);
	soap_serialize_string(soap, &this->tt__RecordingJobStateTrack::Error);
	soap_serialize_tt__RecordingJobState(soap, &this->tt__RecordingJobStateTrack::State);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobStateTrack::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobStateTrack(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateTrack(struct soap *soap, const char *tag, int id, const tt__RecordingJobStateTrack *a, const char *type)
{
	if (((tt__RecordingJobStateTrack*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobStateTrack*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateTrack), "tt:RecordingJobStateTrack"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobStateTrack::SourceTag)
	{	if (soap_out_string(soap, "tt:SourceTag", -1, &a->tt__RecordingJobStateTrack::SourceTag, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceTag"))
		return soap->error;
	if (a->tt__RecordingJobStateTrack::Destination)
	{	if (soap_out_tt__TrackReference(soap, "tt:Destination", -1, &a->tt__RecordingJobStateTrack::Destination, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Destination"))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &(a->tt__RecordingJobStateTrack::Error), ""))
		return soap->error;
	if (a->tt__RecordingJobStateTrack::State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->tt__RecordingJobStateTrack::State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->tt__RecordingJobStateTrack::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobStateTrack::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobStateTrack::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobStateTrack::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobStateTrack(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobStateTrack * SOAP_FMAC4 soap_in_tt__RecordingJobStateTrack(struct soap *soap, const char *tag, tt__RecordingJobStateTrack *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobStateTrack *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateTrack, sizeof(tt__RecordingJobStateTrack), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobStateTrack)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobStateTrack *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobStateTrack*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SourceTag1 = 1;
	size_t soap_flag_Destination1 = 1;
	size_t soap_flag_Error1 = 1;
	size_t soap_flag_State1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SourceTag1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SourceTag", &(a->tt__RecordingJobStateTrack::SourceTag), "xsd:string"))
				{	soap_flag_SourceTag1--;
					continue;
				}
			if (soap_flag_Destination1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:Destination", &(a->tt__RecordingJobStateTrack::Destination), "tt:TrackReference"))
				{	soap_flag_Destination1--;
					continue;
				}
			if (soap_flag_Error1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &(a->tt__RecordingJobStateTrack::Error), "xsd:string"))
				{	soap_flag_Error1--;
					continue;
				}
			if (soap_flag_State1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &(a->tt__RecordingJobStateTrack::State), "tt:RecordingJobState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingJobStateTrack::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobStateTrack::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobStateTrack::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobStateTrack::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobStateTrack::__any, "xsd:byte"))
				{	a->tt__RecordingJobStateTrack::__size++;
					a->tt__RecordingJobStateTrack::__any = NULL;
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
		if (a->tt__RecordingJobStateTrack::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobStateTrack::__size)
			a->tt__RecordingJobStateTrack::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobStateTrack::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobStateTrack *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateTrack, 0, sizeof(tt__RecordingJobStateTrack), 0, soap_copy_tt__RecordingJobStateTrack);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceTag1 > 0 || soap_flag_Destination1 > 0 || soap_flag_State1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingJobStateTrack::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateTrack);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobStateTrack", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobStateTrack::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobStateTrack(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobStateTrack * SOAP_FMAC4 soap_get_tt__RecordingJobStateTrack(struct soap *soap, tt__RecordingJobStateTrack *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateTrack(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobStateTrack * SOAP_FMAC2 soap_instantiate_tt__RecordingJobStateTrack(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobStateTrack(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobStateTrack, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobStateTrack);
		if (size)
			*size = sizeof(tt__RecordingJobStateTrack);
		((tt__RecordingJobStateTrack*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobStateTrack, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobStateTrack);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobStateTrack*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobStateTrack*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobStateTrack(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobStateTrack %p -> %p\n", q, p));
	*(tt__RecordingJobStateTrack*)p = *(tt__RecordingJobStateTrack*)q;
}

void tt__RecordingJobStateTracks::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobStateTracks::__sizeTrack = 0;
	this->tt__RecordingJobStateTracks::Track = NULL;
	this->tt__RecordingJobStateTracks::__anyAttribute = NULL;
}

void tt__RecordingJobStateTracks::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__RecordingJobStateTracks::Track)
	{	int i;
		for (i = 0; i < this->tt__RecordingJobStateTracks::__sizeTrack; i++)
		{
			soap_serialize_PointerTott__RecordingJobStateTrack(soap, this->tt__RecordingJobStateTracks::Track + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobStateTracks::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobStateTracks(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateTracks(struct soap *soap, const char *tag, int id, const tt__RecordingJobStateTracks *a, const char *type)
{
	if (((tt__RecordingJobStateTracks*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobStateTracks*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateTracks), "tt:RecordingJobStateTracks"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobStateTracks::Track)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobStateTracks::__sizeTrack; i++)
			if (soap_out_PointerTott__RecordingJobStateTrack(soap, "tt:Track", -1, a->tt__RecordingJobStateTracks::Track + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobStateTracks::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobStateTracks(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobStateTracks * SOAP_FMAC4 soap_in_tt__RecordingJobStateTracks(struct soap *soap, const char *tag, tt__RecordingJobStateTracks *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobStateTracks *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateTracks, sizeof(tt__RecordingJobStateTracks), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobStateTracks)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobStateTracks *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobStateTracks*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Track1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->tt__RecordingJobStateTracks::Track == NULL)
				{	if (soap_blist_Track1 == NULL)
						soap_blist_Track1 = soap_new_block(soap);
					a->tt__RecordingJobStateTracks::Track = (tt__RecordingJobStateTrack **)soap_push_block(soap, soap_blist_Track1, sizeof(tt__RecordingJobStateTrack *));
					if (a->tt__RecordingJobStateTracks::Track == NULL)
						return NULL;
					*a->tt__RecordingJobStateTracks::Track = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__RecordingJobStateTrack(soap, "tt:Track", a->tt__RecordingJobStateTracks::Track, "tt:RecordingJobStateTrack"))
				{	a->tt__RecordingJobStateTracks::__sizeTrack++;
					a->tt__RecordingJobStateTracks::Track = NULL;
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
		if (a->tt__RecordingJobStateTracks::Track)
			soap_pop_block(soap, soap_blist_Track1);
		if (a->tt__RecordingJobStateTracks::__sizeTrack)
			a->tt__RecordingJobStateTracks::Track = (tt__RecordingJobStateTrack **)soap_save_block(soap, soap_blist_Track1, NULL, 1);
		else
		{	a->tt__RecordingJobStateTracks::Track = NULL;
			if (soap_blist_Track1)
				soap_end_block(soap, soap_blist_Track1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobStateTracks *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateTracks, 0, sizeof(tt__RecordingJobStateTracks), 0, soap_copy_tt__RecordingJobStateTracks);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RecordingJobStateTracks::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateTracks);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobStateTracks", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobStateTracks::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobStateTracks(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobStateTracks * SOAP_FMAC4 soap_get_tt__RecordingJobStateTracks(struct soap *soap, tt__RecordingJobStateTracks *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateTracks(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobStateTracks * SOAP_FMAC2 soap_instantiate_tt__RecordingJobStateTracks(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobStateTracks(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobStateTracks, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobStateTracks);
		if (size)
			*size = sizeof(tt__RecordingJobStateTracks);
		((tt__RecordingJobStateTracks*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobStateTracks, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobStateTracks);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobStateTracks*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobStateTracks*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobStateTracks(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobStateTracks %p -> %p\n", q, p));
	*(tt__RecordingJobStateTracks*)p = *(tt__RecordingJobStateTracks*)q;
}

void tt__RecordingJobStateSource::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobStateSource::SourceToken = NULL;
	soap_default_tt__RecordingJobState(soap, &this->tt__RecordingJobStateSource::State);
	this->tt__RecordingJobStateSource::Tracks = NULL;
	this->tt__RecordingJobStateSource::__size = 0;
	this->tt__RecordingJobStateSource::__any = NULL;
	this->tt__RecordingJobStateSource::__anyAttribute = NULL;
}

void tt__RecordingJobStateSource::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SourceReference(soap, &this->tt__RecordingJobStateSource::SourceToken);
	soap_serialize_tt__RecordingJobState(soap, &this->tt__RecordingJobStateSource::State);
	soap_serialize_PointerTott__RecordingJobStateTracks(soap, &this->tt__RecordingJobStateSource::Tracks);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobStateSource::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobStateSource(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateSource(struct soap *soap, const char *tag, int id, const tt__RecordingJobStateSource *a, const char *type)
{
	if (((tt__RecordingJobStateSource*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobStateSource*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateSource), "tt:RecordingJobStateSource"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobStateSource::SourceToken)
	{	if (soap_out_PointerTott__SourceReference(soap, "tt:SourceToken", -1, &a->tt__RecordingJobStateSource::SourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceToken"))
		return soap->error;
	if (a->tt__RecordingJobStateSource::State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->tt__RecordingJobStateSource::State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->tt__RecordingJobStateSource::Tracks)
	{	if (soap_out_PointerTott__RecordingJobStateTracks(soap, "tt:Tracks", -1, &a->tt__RecordingJobStateSource::Tracks, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Tracks"))
		return soap->error;
	if (a->tt__RecordingJobStateSource::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobStateSource::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobStateSource::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobStateSource::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobStateSource(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobStateSource * SOAP_FMAC4 soap_in_tt__RecordingJobStateSource(struct soap *soap, const char *tag, tt__RecordingJobStateSource *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobStateSource *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateSource, sizeof(tt__RecordingJobStateSource), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobStateSource)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobStateSource *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobStateSource*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SourceToken1 = 1;
	size_t soap_flag_State1 = 1;
	size_t soap_flag_Tracks1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SourceToken1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceReference(soap, "tt:SourceToken", &(a->tt__RecordingJobStateSource::SourceToken), "tt:SourceReference"))
				{	soap_flag_SourceToken1--;
					continue;
				}
			if (soap_flag_State1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &(a->tt__RecordingJobStateSource::State), "tt:RecordingJobState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap_flag_Tracks1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobStateTracks(soap, "tt:Tracks", &(a->tt__RecordingJobStateSource::Tracks), "tt:RecordingJobStateTracks"))
				{	soap_flag_Tracks1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingJobStateSource::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobStateSource::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobStateSource::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobStateSource::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobStateSource::__any, "xsd:byte"))
				{	a->tt__RecordingJobStateSource::__size++;
					a->tt__RecordingJobStateSource::__any = NULL;
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
		if (a->tt__RecordingJobStateSource::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobStateSource::__size)
			a->tt__RecordingJobStateSource::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobStateSource::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobStateSource *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateSource, 0, sizeof(tt__RecordingJobStateSource), 0, soap_copy_tt__RecordingJobStateSource);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceToken1 > 0 || soap_flag_State1 > 0 || soap_flag_Tracks1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingJobStateSource::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateSource);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobStateSource", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobStateSource::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobStateSource(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobStateSource * SOAP_FMAC4 soap_get_tt__RecordingJobStateSource(struct soap *soap, tt__RecordingJobStateSource *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateSource(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobStateSource * SOAP_FMAC2 soap_instantiate_tt__RecordingJobStateSource(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobStateSource(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobStateSource, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobStateSource);
		if (size)
			*size = sizeof(tt__RecordingJobStateSource);
		((tt__RecordingJobStateSource*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobStateSource, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobStateSource);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobStateSource*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobStateSource*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobStateSource(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobStateSource %p -> %p\n", q, p));
	*(tt__RecordingJobStateSource*)p = *(tt__RecordingJobStateSource*)q;
}

void tt__RecordingJobStateInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobStateInformationExtension::__size = 0;
	this->tt__RecordingJobStateInformationExtension::__any = NULL;
}

void tt__RecordingJobStateInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobStateInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobStateInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateInformationExtension(struct soap *soap, const char *tag, int id, const tt__RecordingJobStateInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateInformationExtension), "tt:RecordingJobStateInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobStateInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobStateInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobStateInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobStateInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobStateInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobStateInformationExtension * SOAP_FMAC4 soap_in_tt__RecordingJobStateInformationExtension(struct soap *soap, const char *tag, tt__RecordingJobStateInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobStateInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateInformationExtension, sizeof(tt__RecordingJobStateInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobStateInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobStateInformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__RecordingJobStateInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobStateInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobStateInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobStateInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobStateInformationExtension::__any, "xsd:byte"))
				{	a->tt__RecordingJobStateInformationExtension::__size++;
					a->tt__RecordingJobStateInformationExtension::__any = NULL;
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
		if (a->tt__RecordingJobStateInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobStateInformationExtension::__size)
			a->tt__RecordingJobStateInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobStateInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobStateInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateInformationExtension, 0, sizeof(tt__RecordingJobStateInformationExtension), 0, soap_copy_tt__RecordingJobStateInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RecordingJobStateInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobStateInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobStateInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobStateInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobStateInformationExtension * SOAP_FMAC4 soap_get_tt__RecordingJobStateInformationExtension(struct soap *soap, tt__RecordingJobStateInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobStateInformationExtension * SOAP_FMAC2 soap_instantiate_tt__RecordingJobStateInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobStateInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobStateInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobStateInformationExtension);
		if (size)
			*size = sizeof(tt__RecordingJobStateInformationExtension);
		((tt__RecordingJobStateInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobStateInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobStateInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobStateInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobStateInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobStateInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobStateInformationExtension %p -> %p\n", q, p));
	*(tt__RecordingJobStateInformationExtension*)p = *(tt__RecordingJobStateInformationExtension*)q;
}

void tt__RecordingJobStateInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__RecordingJobStateInformation::RecordingToken);
	soap_default_tt__RecordingJobState(soap, &this->tt__RecordingJobStateInformation::State);
	this->tt__RecordingJobStateInformation::__sizeSources = 0;
	this->tt__RecordingJobStateInformation::Sources = NULL;
	this->tt__RecordingJobStateInformation::Extension = NULL;
	this->tt__RecordingJobStateInformation::__anyAttribute = NULL;
}

void tt__RecordingJobStateInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__RecordingJobStateInformation::RecordingToken);
	soap_serialize_tt__RecordingJobState(soap, &this->tt__RecordingJobStateInformation::State);
	if (this->tt__RecordingJobStateInformation::Sources)
	{	int i;
		for (i = 0; i < this->tt__RecordingJobStateInformation::__sizeSources; i++)
		{
			soap_serialize_PointerTott__RecordingJobStateSource(soap, this->tt__RecordingJobStateInformation::Sources + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobStateInformationExtension(soap, &this->tt__RecordingJobStateInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobStateInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobStateInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateInformation(struct soap *soap, const char *tag, int id, const tt__RecordingJobStateInformation *a, const char *type)
{
	if (((tt__RecordingJobStateInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobStateInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateInformation), "tt:RecordingJobStateInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobStateInformation::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__RecordingJobStateInformation::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__RecordingJobStateInformation::State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->tt__RecordingJobStateInformation::State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->tt__RecordingJobStateInformation::Sources)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobStateInformation::__sizeSources; i++)
			if (soap_out_PointerTott__RecordingJobStateSource(soap, "tt:Sources", -1, a->tt__RecordingJobStateInformation::Sources + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobStateInformationExtension(soap, "tt:Extension", -1, &(a->tt__RecordingJobStateInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobStateInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobStateInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobStateInformation * SOAP_FMAC4 soap_in_tt__RecordingJobStateInformation(struct soap *soap, const char *tag, tt__RecordingJobStateInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobStateInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateInformation, sizeof(tt__RecordingJobStateInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobStateInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobStateInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobStateInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_State1 = 1;
	struct soap_blist *soap_blist_Sources1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__RecordingJobStateInformation::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_State1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &(a->tt__RecordingJobStateInformation::State), "tt:RecordingJobState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Sources", 1, NULL))
			{	if (a->tt__RecordingJobStateInformation::Sources == NULL)
				{	if (soap_blist_Sources1 == NULL)
						soap_blist_Sources1 = soap_new_block(soap);
					a->tt__RecordingJobStateInformation::Sources = (tt__RecordingJobStateSource **)soap_push_block(soap, soap_blist_Sources1, sizeof(tt__RecordingJobStateSource *));
					if (a->tt__RecordingJobStateInformation::Sources == NULL)
						return NULL;
					*a->tt__RecordingJobStateInformation::Sources = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__RecordingJobStateSource(soap, "tt:Sources", a->tt__RecordingJobStateInformation::Sources, "tt:RecordingJobStateSource"))
				{	a->tt__RecordingJobStateInformation::__sizeSources++;
					a->tt__RecordingJobStateInformation::Sources = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobStateInformationExtension(soap, "tt:Extension", &(a->tt__RecordingJobStateInformation::Extension), "tt:RecordingJobStateInformationExtension"))
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
		if (a->tt__RecordingJobStateInformation::Sources)
			soap_pop_block(soap, soap_blist_Sources1);
		if (a->tt__RecordingJobStateInformation::__sizeSources)
			a->tt__RecordingJobStateInformation::Sources = (tt__RecordingJobStateSource **)soap_save_block(soap, soap_blist_Sources1, NULL, 1);
		else
		{	a->tt__RecordingJobStateInformation::Sources = NULL;
			if (soap_blist_Sources1)
				soap_end_block(soap, soap_blist_Sources1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateInformation, 0, sizeof(tt__RecordingJobStateInformation), 0, soap_copy_tt__RecordingJobStateInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_State1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingJobStateInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateInformation);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobStateInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobStateInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobStateInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobStateInformation * SOAP_FMAC4 soap_get_tt__RecordingJobStateInformation(struct soap *soap, tt__RecordingJobStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobStateInformation * SOAP_FMAC2 soap_instantiate_tt__RecordingJobStateInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobStateInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobStateInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobStateInformation);
		if (size)
			*size = sizeof(tt__RecordingJobStateInformation);
		((tt__RecordingJobStateInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobStateInformation, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobStateInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobStateInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobStateInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobStateInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobStateInformation %p -> %p\n", q, p));
	*(tt__RecordingJobStateInformation*)p = *(tt__RecordingJobStateInformation*)q;
}

void tt__RecordingJobTrack::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__RecordingJobTrack::SourceTag);
	soap_default_tt__TrackReference(soap, &this->tt__RecordingJobTrack::Destination);
	this->tt__RecordingJobTrack::__size = 0;
	this->tt__RecordingJobTrack::__any = NULL;
	this->tt__RecordingJobTrack::__anyAttribute = NULL;
}

void tt__RecordingJobTrack::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__RecordingJobTrack::SourceTag);
	soap_serialize_tt__TrackReference(soap, &this->tt__RecordingJobTrack::Destination);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobTrack::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobTrack(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobTrack(struct soap *soap, const char *tag, int id, const tt__RecordingJobTrack *a, const char *type)
{
	if (((tt__RecordingJobTrack*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobTrack*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobTrack), "tt:RecordingJobTrack"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobTrack::SourceTag)
	{	if (soap_out_string(soap, "tt:SourceTag", -1, &a->tt__RecordingJobTrack::SourceTag, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceTag"))
		return soap->error;
	if (a->tt__RecordingJobTrack::Destination)
	{	if (soap_out_tt__TrackReference(soap, "tt:Destination", -1, &a->tt__RecordingJobTrack::Destination, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Destination"))
		return soap->error;
	if (a->tt__RecordingJobTrack::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobTrack::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobTrack::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobTrack::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobTrack(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobTrack * SOAP_FMAC4 soap_in_tt__RecordingJobTrack(struct soap *soap, const char *tag, tt__RecordingJobTrack *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobTrack *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobTrack, sizeof(tt__RecordingJobTrack), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobTrack)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobTrack *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobTrack*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SourceTag1 = 1;
	size_t soap_flag_Destination1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SourceTag1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SourceTag", &(a->tt__RecordingJobTrack::SourceTag), "xsd:string"))
				{	soap_flag_SourceTag1--;
					continue;
				}
			if (soap_flag_Destination1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:Destination", &(a->tt__RecordingJobTrack::Destination), "tt:TrackReference"))
				{	soap_flag_Destination1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingJobTrack::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobTrack::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobTrack::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobTrack::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobTrack::__any, "xsd:byte"))
				{	a->tt__RecordingJobTrack::__size++;
					a->tt__RecordingJobTrack::__any = NULL;
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
		if (a->tt__RecordingJobTrack::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobTrack::__size)
			a->tt__RecordingJobTrack::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobTrack::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobTrack *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobTrack, 0, sizeof(tt__RecordingJobTrack), 0, soap_copy_tt__RecordingJobTrack);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceTag1 > 0 || soap_flag_Destination1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingJobTrack::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobTrack);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobTrack", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobTrack::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobTrack(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobTrack * SOAP_FMAC4 soap_get_tt__RecordingJobTrack(struct soap *soap, tt__RecordingJobTrack *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobTrack(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobTrack * SOAP_FMAC2 soap_instantiate_tt__RecordingJobTrack(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobTrack(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobTrack, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobTrack);
		if (size)
			*size = sizeof(tt__RecordingJobTrack);
		((tt__RecordingJobTrack*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobTrack, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobTrack);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobTrack*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobTrack*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobTrack(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobTrack %p -> %p\n", q, p));
	*(tt__RecordingJobTrack*)p = *(tt__RecordingJobTrack*)q;
}

void tt__RecordingJobSourceExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobSourceExtension::__size = 0;
	this->tt__RecordingJobSourceExtension::__any = NULL;
}

void tt__RecordingJobSourceExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobSourceExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobSourceExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobSourceExtension(struct soap *soap, const char *tag, int id, const tt__RecordingJobSourceExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobSourceExtension), "tt:RecordingJobSourceExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobSourceExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobSourceExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobSourceExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobSourceExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobSourceExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobSourceExtension * SOAP_FMAC4 soap_in_tt__RecordingJobSourceExtension(struct soap *soap, const char *tag, tt__RecordingJobSourceExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobSourceExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobSourceExtension, sizeof(tt__RecordingJobSourceExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobSourceExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobSourceExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__RecordingJobSourceExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobSourceExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobSourceExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobSourceExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobSourceExtension::__any, "xsd:byte"))
				{	a->tt__RecordingJobSourceExtension::__size++;
					a->tt__RecordingJobSourceExtension::__any = NULL;
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
		if (a->tt__RecordingJobSourceExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobSourceExtension::__size)
			a->tt__RecordingJobSourceExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobSourceExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobSourceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobSourceExtension, 0, sizeof(tt__RecordingJobSourceExtension), 0, soap_copy_tt__RecordingJobSourceExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RecordingJobSourceExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobSourceExtension);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobSourceExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobSourceExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobSourceExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobSourceExtension * SOAP_FMAC4 soap_get_tt__RecordingJobSourceExtension(struct soap *soap, tt__RecordingJobSourceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobSourceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobSourceExtension * SOAP_FMAC2 soap_instantiate_tt__RecordingJobSourceExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobSourceExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobSourceExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobSourceExtension);
		if (size)
			*size = sizeof(tt__RecordingJobSourceExtension);
		((tt__RecordingJobSourceExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobSourceExtension, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobSourceExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobSourceExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobSourceExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobSourceExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobSourceExtension %p -> %p\n", q, p));
	*(tt__RecordingJobSourceExtension*)p = *(tt__RecordingJobSourceExtension*)q;
}

void tt__RecordingJobSource::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobSource::SourceToken = NULL;
	this->tt__RecordingJobSource::AutoCreateReceiver = NULL;
	this->tt__RecordingJobSource::__sizeTracks = 0;
	this->tt__RecordingJobSource::Tracks = NULL;
	this->tt__RecordingJobSource::Extension = NULL;
	this->tt__RecordingJobSource::__anyAttribute = NULL;
}

void tt__RecordingJobSource::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SourceReference(soap, &this->tt__RecordingJobSource::SourceToken);
	soap_serialize_PointerTobool(soap, &this->tt__RecordingJobSource::AutoCreateReceiver);
	if (this->tt__RecordingJobSource::Tracks)
	{	int i;
		for (i = 0; i < this->tt__RecordingJobSource::__sizeTracks; i++)
		{
			soap_serialize_PointerTott__RecordingJobTrack(soap, this->tt__RecordingJobSource::Tracks + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobSourceExtension(soap, &this->tt__RecordingJobSource::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobSource::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobSource(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobSource(struct soap *soap, const char *tag, int id, const tt__RecordingJobSource *a, const char *type)
{
	if (((tt__RecordingJobSource*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobSource*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobSource), "tt:RecordingJobSource"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__SourceReference(soap, "tt:SourceToken", -1, &(a->tt__RecordingJobSource::SourceToken), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:AutoCreateReceiver", -1, &(a->tt__RecordingJobSource::AutoCreateReceiver), ""))
		return soap->error;
	if (a->tt__RecordingJobSource::Tracks)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobSource::__sizeTracks; i++)
			if (soap_out_PointerTott__RecordingJobTrack(soap, "tt:Tracks", -1, a->tt__RecordingJobSource::Tracks + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobSourceExtension(soap, "tt:Extension", -1, &(a->tt__RecordingJobSource::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobSource::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobSource(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobSource * SOAP_FMAC4 soap_in_tt__RecordingJobSource(struct soap *soap, const char *tag, tt__RecordingJobSource *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobSource *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobSource, sizeof(tt__RecordingJobSource), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobSource)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobSource *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobSource*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SourceToken1 = 1;
	size_t soap_flag_AutoCreateReceiver1 = 1;
	struct soap_blist *soap_blist_Tracks1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SourceToken1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceReference(soap, "tt:SourceToken", &(a->tt__RecordingJobSource::SourceToken), "tt:SourceReference"))
				{	soap_flag_SourceToken1--;
					continue;
				}
			if (soap_flag_AutoCreateReceiver1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:AutoCreateReceiver", &(a->tt__RecordingJobSource::AutoCreateReceiver), "xsd:boolean"))
				{	soap_flag_AutoCreateReceiver1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Tracks", 1, NULL))
			{	if (a->tt__RecordingJobSource::Tracks == NULL)
				{	if (soap_blist_Tracks1 == NULL)
						soap_blist_Tracks1 = soap_new_block(soap);
					a->tt__RecordingJobSource::Tracks = (tt__RecordingJobTrack **)soap_push_block(soap, soap_blist_Tracks1, sizeof(tt__RecordingJobTrack *));
					if (a->tt__RecordingJobSource::Tracks == NULL)
						return NULL;
					*a->tt__RecordingJobSource::Tracks = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__RecordingJobTrack(soap, "tt:Tracks", a->tt__RecordingJobSource::Tracks, "tt:RecordingJobTrack"))
				{	a->tt__RecordingJobSource::__sizeTracks++;
					a->tt__RecordingJobSource::Tracks = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobSourceExtension(soap, "tt:Extension", &(a->tt__RecordingJobSource::Extension), "tt:RecordingJobSourceExtension"))
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
		if (a->tt__RecordingJobSource::Tracks)
			soap_pop_block(soap, soap_blist_Tracks1);
		if (a->tt__RecordingJobSource::__sizeTracks)
			a->tt__RecordingJobSource::Tracks = (tt__RecordingJobTrack **)soap_save_block(soap, soap_blist_Tracks1, NULL, 1);
		else
		{	a->tt__RecordingJobSource::Tracks = NULL;
			if (soap_blist_Tracks1)
				soap_end_block(soap, soap_blist_Tracks1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobSource *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobSource, 0, sizeof(tt__RecordingJobSource), 0, soap_copy_tt__RecordingJobSource);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RecordingJobSource::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobSource);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobSource", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobSource::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobSource(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobSource * SOAP_FMAC4 soap_get_tt__RecordingJobSource(struct soap *soap, tt__RecordingJobSource *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobSource(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobSource * SOAP_FMAC2 soap_instantiate_tt__RecordingJobSource(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobSource(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobSource, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobSource);
		if (size)
			*size = sizeof(tt__RecordingJobSource);
		((tt__RecordingJobSource*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobSource, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobSource);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobSource*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobSource*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobSource(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobSource %p -> %p\n", q, p));
	*(tt__RecordingJobSource*)p = *(tt__RecordingJobSource*)q;
}

void tt__RecordingJobConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingJobConfigurationExtension::__size = 0;
	this->tt__RecordingJobConfigurationExtension::__any = NULL;
}

void tt__RecordingJobConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__RecordingJobConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobConfigurationExtension), "tt:RecordingJobConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingJobConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobConfigurationExtension * SOAP_FMAC4 soap_in_tt__RecordingJobConfigurationExtension(struct soap *soap, const char *tag, tt__RecordingJobConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobConfigurationExtension, sizeof(tt__RecordingJobConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__RecordingJobConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingJobConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingJobConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingJobConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingJobConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__RecordingJobConfigurationExtension::__size++;
					a->tt__RecordingJobConfigurationExtension::__any = NULL;
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
		if (a->tt__RecordingJobConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingJobConfigurationExtension::__size)
			a->tt__RecordingJobConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingJobConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobConfigurationExtension, 0, sizeof(tt__RecordingJobConfigurationExtension), 0, soap_copy_tt__RecordingJobConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RecordingJobConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobConfigurationExtension * SOAP_FMAC4 soap_get_tt__RecordingJobConfigurationExtension(struct soap *soap, tt__RecordingJobConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__RecordingJobConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobConfigurationExtension);
		if (size)
			*size = sizeof(tt__RecordingJobConfigurationExtension);
		((tt__RecordingJobConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobConfigurationExtension %p -> %p\n", q, p));
	*(tt__RecordingJobConfigurationExtension*)p = *(tt__RecordingJobConfigurationExtension*)q;
}

void tt__RecordingJobConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__RecordingJobConfiguration::RecordingToken);
	soap_default_tt__RecordingJobMode(soap, &this->tt__RecordingJobConfiguration::Mode);
	soap_default_int(soap, &this->tt__RecordingJobConfiguration::Priority);
	this->tt__RecordingJobConfiguration::__sizeSource = 0;
	this->tt__RecordingJobConfiguration::Source = NULL;
	this->tt__RecordingJobConfiguration::Extension = NULL;
	this->tt__RecordingJobConfiguration::__anyAttribute = NULL;
}

void tt__RecordingJobConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__RecordingJobConfiguration::RecordingToken);
	soap_serialize_tt__RecordingJobMode(soap, &this->tt__RecordingJobConfiguration::Mode);
	soap_embedded(soap, &this->tt__RecordingJobConfiguration::Priority, SOAP_TYPE_int);
	if (this->tt__RecordingJobConfiguration::Source)
	{	int i;
		for (i = 0; i < this->tt__RecordingJobConfiguration::__sizeSource; i++)
		{
			soap_serialize_PointerTott__RecordingJobSource(soap, this->tt__RecordingJobConfiguration::Source + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobConfigurationExtension(soap, &this->tt__RecordingJobConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingJobConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingJobConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobConfiguration(struct soap *soap, const char *tag, int id, const tt__RecordingJobConfiguration *a, const char *type)
{
	if (((tt__RecordingJobConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingJobConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobConfiguration), "tt:RecordingJobConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingJobConfiguration::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__RecordingJobConfiguration::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__RecordingJobConfiguration::Mode)
	{	if (soap_out_tt__RecordingJobMode(soap, "tt:Mode", -1, &a->tt__RecordingJobConfiguration::Mode, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Mode"))
		return soap->error;
	if (soap_out_int(soap, "tt:Priority", -1, &(a->tt__RecordingJobConfiguration::Priority), ""))
		return soap->error;
	if (a->tt__RecordingJobConfiguration::Source)
	{	int i;
		for (i = 0; i < a->tt__RecordingJobConfiguration::__sizeSource; i++)
			if (soap_out_PointerTott__RecordingJobSource(soap, "tt:Source", -1, a->tt__RecordingJobConfiguration::Source + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__RecordingJobConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingJobConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingJobConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingJobConfiguration * SOAP_FMAC4 soap_in_tt__RecordingJobConfiguration(struct soap *soap, const char *tag, tt__RecordingJobConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingJobConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobConfiguration, sizeof(tt__RecordingJobConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingJobConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingJobConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingJobConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Priority1 = 1;
	struct soap_blist *soap_blist_Source1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__RecordingJobConfiguration::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_Mode1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobMode(soap, "tt:Mode", &(a->tt__RecordingJobConfiguration::Mode), "tt:RecordingJobMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Priority1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Priority", &(a->tt__RecordingJobConfiguration::Priority), "xsd:int"))
				{	soap_flag_Priority1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Source", 1, NULL))
			{	if (a->tt__RecordingJobConfiguration::Source == NULL)
				{	if (soap_blist_Source1 == NULL)
						soap_blist_Source1 = soap_new_block(soap);
					a->tt__RecordingJobConfiguration::Source = (tt__RecordingJobSource **)soap_push_block(soap, soap_blist_Source1, sizeof(tt__RecordingJobSource *));
					if (a->tt__RecordingJobConfiguration::Source == NULL)
						return NULL;
					*a->tt__RecordingJobConfiguration::Source = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__RecordingJobSource(soap, "tt:Source", a->tt__RecordingJobConfiguration::Source, "tt:RecordingJobSource"))
				{	a->tt__RecordingJobConfiguration::__sizeSource++;
					a->tt__RecordingJobConfiguration::Source = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobConfigurationExtension(soap, "tt:Extension", &(a->tt__RecordingJobConfiguration::Extension), "tt:RecordingJobConfigurationExtension"))
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
		if (a->tt__RecordingJobConfiguration::Source)
			soap_pop_block(soap, soap_blist_Source1);
		if (a->tt__RecordingJobConfiguration::__sizeSource)
			a->tt__RecordingJobConfiguration::Source = (tt__RecordingJobSource **)soap_save_block(soap, soap_blist_Source1, NULL, 1);
		else
		{	a->tt__RecordingJobConfiguration::Source = NULL;
			if (soap_blist_Source1)
				soap_end_block(soap, soap_blist_Source1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingJobConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobConfiguration, 0, sizeof(tt__RecordingJobConfiguration), 0, soap_copy_tt__RecordingJobConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_Mode1 > 0 || soap_flag_Priority1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingJobConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:RecordingJobConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingJobConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingJobConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingJobConfiguration * SOAP_FMAC4 soap_get_tt__RecordingJobConfiguration(struct soap *soap, tt__RecordingJobConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingJobConfiguration * SOAP_FMAC2 soap_instantiate_tt__RecordingJobConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingJobConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingJobConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingJobConfiguration);
		if (size)
			*size = sizeof(tt__RecordingJobConfiguration);
		((tt__RecordingJobConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingJobConfiguration, n);
		if (size)
			*size = n * sizeof(tt__RecordingJobConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingJobConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingJobConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingJobConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingJobConfiguration %p -> %p\n", q, p));
	*(tt__RecordingJobConfiguration*)p = *(tt__RecordingJobConfiguration*)q;
}

void tt__GetTracksResponseItem::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TrackReference(soap, &this->tt__GetTracksResponseItem::TrackToken);
	this->tt__GetTracksResponseItem::Configuration = NULL;
	this->tt__GetTracksResponseItem::__size = 0;
	this->tt__GetTracksResponseItem::__any = NULL;
	this->tt__GetTracksResponseItem::__anyAttribute = NULL;
}

void tt__GetTracksResponseItem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__TrackReference(soap, &this->tt__GetTracksResponseItem::TrackToken);
	soap_serialize_PointerTott__TrackConfiguration(soap, &this->tt__GetTracksResponseItem::Configuration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__GetTracksResponseItem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__GetTracksResponseItem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetTracksResponseItem(struct soap *soap, const char *tag, int id, const tt__GetTracksResponseItem *a, const char *type)
{
	if (((tt__GetTracksResponseItem*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__GetTracksResponseItem*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetTracksResponseItem), "tt:GetTracksResponseItem"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__GetTracksResponseItem::TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->tt__GetTracksResponseItem::TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (a->tt__GetTracksResponseItem::Configuration)
	{	if (soap_out_PointerTott__TrackConfiguration(soap, "tt:Configuration", -1, &a->tt__GetTracksResponseItem::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->tt__GetTracksResponseItem::__any)
	{	int i;
		for (i = 0; i < a->tt__GetTracksResponseItem::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__GetTracksResponseItem::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__GetTracksResponseItem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__GetTracksResponseItem(soap, tag, this, type);
}

SOAP_FMAC3 tt__GetTracksResponseItem * SOAP_FMAC4 soap_in_tt__GetTracksResponseItem(struct soap *soap, const char *tag, tt__GetTracksResponseItem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__GetTracksResponseItem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetTracksResponseItem, sizeof(tt__GetTracksResponseItem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__GetTracksResponseItem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__GetTracksResponseItem *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__GetTracksResponseItem*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TrackToken1 = 1;
	size_t soap_flag_Configuration1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TrackToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &(a->tt__GetTracksResponseItem::TrackToken), "tt:TrackReference"))
				{	soap_flag_TrackToken1--;
					continue;
				}
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackConfiguration(soap, "tt:Configuration", &(a->tt__GetTracksResponseItem::Configuration), "tt:TrackConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__GetTracksResponseItem::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__GetTracksResponseItem::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__GetTracksResponseItem::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__GetTracksResponseItem::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__GetTracksResponseItem::__any, "xsd:byte"))
				{	a->tt__GetTracksResponseItem::__size++;
					a->tt__GetTracksResponseItem::__any = NULL;
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
		if (a->tt__GetTracksResponseItem::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__GetTracksResponseItem::__size)
			a->tt__GetTracksResponseItem::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__GetTracksResponseItem::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__GetTracksResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetTracksResponseItem, 0, sizeof(tt__GetTracksResponseItem), 0, soap_copy_tt__GetTracksResponseItem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackToken1 > 0 || soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__GetTracksResponseItem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__GetTracksResponseItem);
	if (this->soap_out(soap, tag?tag:"tt:GetTracksResponseItem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__GetTracksResponseItem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__GetTracksResponseItem(soap, this, tag, type);
}

SOAP_FMAC3 tt__GetTracksResponseItem * SOAP_FMAC4 soap_get_tt__GetTracksResponseItem(struct soap *soap, tt__GetTracksResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetTracksResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__GetTracksResponseItem * SOAP_FMAC2 soap_instantiate_tt__GetTracksResponseItem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__GetTracksResponseItem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__GetTracksResponseItem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__GetTracksResponseItem);
		if (size)
			*size = sizeof(tt__GetTracksResponseItem);
		((tt__GetTracksResponseItem*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__GetTracksResponseItem, n);
		if (size)
			*size = n * sizeof(tt__GetTracksResponseItem);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__GetTracksResponseItem*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__GetTracksResponseItem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__GetTracksResponseItem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__GetTracksResponseItem %p -> %p\n", q, p));
	*(tt__GetTracksResponseItem*)p = *(tt__GetTracksResponseItem*)q;
}

void tt__GetTracksResponseList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__GetTracksResponseList::__sizeTrack = 0;
	this->tt__GetTracksResponseList::Track = NULL;
	this->tt__GetTracksResponseList::__anyAttribute = NULL;
}

void tt__GetTracksResponseList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__GetTracksResponseList::Track)
	{	int i;
		for (i = 0; i < this->tt__GetTracksResponseList::__sizeTrack; i++)
		{
			soap_serialize_PointerTott__GetTracksResponseItem(soap, this->tt__GetTracksResponseList::Track + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__GetTracksResponseList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__GetTracksResponseList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetTracksResponseList(struct soap *soap, const char *tag, int id, const tt__GetTracksResponseList *a, const char *type)
{
	if (((tt__GetTracksResponseList*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__GetTracksResponseList*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetTracksResponseList), "tt:GetTracksResponseList"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__GetTracksResponseList::Track)
	{	int i;
		for (i = 0; i < a->tt__GetTracksResponseList::__sizeTrack; i++)
			if (soap_out_PointerTott__GetTracksResponseItem(soap, "tt:Track", -1, a->tt__GetTracksResponseList::Track + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__GetTracksResponseList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__GetTracksResponseList(soap, tag, this, type);
}

SOAP_FMAC3 tt__GetTracksResponseList * SOAP_FMAC4 soap_in_tt__GetTracksResponseList(struct soap *soap, const char *tag, tt__GetTracksResponseList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__GetTracksResponseList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetTracksResponseList, sizeof(tt__GetTracksResponseList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__GetTracksResponseList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__GetTracksResponseList *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__GetTracksResponseList*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Track1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->tt__GetTracksResponseList::Track == NULL)
				{	if (soap_blist_Track1 == NULL)
						soap_blist_Track1 = soap_new_block(soap);
					a->tt__GetTracksResponseList::Track = (tt__GetTracksResponseItem **)soap_push_block(soap, soap_blist_Track1, sizeof(tt__GetTracksResponseItem *));
					if (a->tt__GetTracksResponseList::Track == NULL)
						return NULL;
					*a->tt__GetTracksResponseList::Track = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__GetTracksResponseItem(soap, "tt:Track", a->tt__GetTracksResponseList::Track, "tt:GetTracksResponseItem"))
				{	a->tt__GetTracksResponseList::__sizeTrack++;
					a->tt__GetTracksResponseList::Track = NULL;
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
		if (a->tt__GetTracksResponseList::Track)
			soap_pop_block(soap, soap_blist_Track1);
		if (a->tt__GetTracksResponseList::__sizeTrack)
			a->tt__GetTracksResponseList::Track = (tt__GetTracksResponseItem **)soap_save_block(soap, soap_blist_Track1, NULL, 1);
		else
		{	a->tt__GetTracksResponseList::Track = NULL;
			if (soap_blist_Track1)
				soap_end_block(soap, soap_blist_Track1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__GetTracksResponseList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetTracksResponseList, 0, sizeof(tt__GetTracksResponseList), 0, soap_copy_tt__GetTracksResponseList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__GetTracksResponseList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__GetTracksResponseList);
	if (this->soap_out(soap, tag?tag:"tt:GetTracksResponseList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__GetTracksResponseList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__GetTracksResponseList(soap, this, tag, type);
}

SOAP_FMAC3 tt__GetTracksResponseList * SOAP_FMAC4 soap_get_tt__GetTracksResponseList(struct soap *soap, tt__GetTracksResponseList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetTracksResponseList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__GetTracksResponseList * SOAP_FMAC2 soap_instantiate_tt__GetTracksResponseList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__GetTracksResponseList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__GetTracksResponseList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__GetTracksResponseList);
		if (size)
			*size = sizeof(tt__GetTracksResponseList);
		((tt__GetTracksResponseList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__GetTracksResponseList, n);
		if (size)
			*size = n * sizeof(tt__GetTracksResponseList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__GetTracksResponseList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__GetTracksResponseList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__GetTracksResponseList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__GetTracksResponseList %p -> %p\n", q, p));
	*(tt__GetTracksResponseList*)p = *(tt__GetTracksResponseList*)q;
}

void tt__GetRecordingsResponseItem::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__GetRecordingsResponseItem::RecordingToken);
	this->tt__GetRecordingsResponseItem::Configuration = NULL;
	this->tt__GetRecordingsResponseItem::Tracks = NULL;
	this->tt__GetRecordingsResponseItem::__size = 0;
	this->tt__GetRecordingsResponseItem::__any = NULL;
	this->tt__GetRecordingsResponseItem::__anyAttribute = NULL;
}

void tt__GetRecordingsResponseItem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__GetRecordingsResponseItem::RecordingToken);
	soap_serialize_PointerTott__RecordingConfiguration(soap, &this->tt__GetRecordingsResponseItem::Configuration);
	soap_serialize_PointerTott__GetTracksResponseList(soap, &this->tt__GetRecordingsResponseItem::Tracks);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__GetRecordingsResponseItem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__GetRecordingsResponseItem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetRecordingsResponseItem(struct soap *soap, const char *tag, int id, const tt__GetRecordingsResponseItem *a, const char *type)
{
	if (((tt__GetRecordingsResponseItem*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__GetRecordingsResponseItem*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetRecordingsResponseItem), "tt:GetRecordingsResponseItem"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__GetRecordingsResponseItem::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__GetRecordingsResponseItem::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__GetRecordingsResponseItem::Configuration)
	{	if (soap_out_PointerTott__RecordingConfiguration(soap, "tt:Configuration", -1, &a->tt__GetRecordingsResponseItem::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->tt__GetRecordingsResponseItem::Tracks)
	{	if (soap_out_PointerTott__GetTracksResponseList(soap, "tt:Tracks", -1, &a->tt__GetRecordingsResponseItem::Tracks, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Tracks"))
		return soap->error;
	if (a->tt__GetRecordingsResponseItem::__any)
	{	int i;
		for (i = 0; i < a->tt__GetRecordingsResponseItem::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__GetRecordingsResponseItem::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__GetRecordingsResponseItem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__GetRecordingsResponseItem(soap, tag, this, type);
}

SOAP_FMAC3 tt__GetRecordingsResponseItem * SOAP_FMAC4 soap_in_tt__GetRecordingsResponseItem(struct soap *soap, const char *tag, tt__GetRecordingsResponseItem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__GetRecordingsResponseItem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetRecordingsResponseItem, sizeof(tt__GetRecordingsResponseItem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__GetRecordingsResponseItem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__GetRecordingsResponseItem *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__GetRecordingsResponseItem*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_Configuration1 = 1;
	size_t soap_flag_Tracks1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__GetRecordingsResponseItem::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingConfiguration(soap, "tt:Configuration", &(a->tt__GetRecordingsResponseItem::Configuration), "tt:RecordingConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap_flag_Tracks1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__GetTracksResponseList(soap, "tt:Tracks", &(a->tt__GetRecordingsResponseItem::Tracks), "tt:GetTracksResponseList"))
				{	soap_flag_Tracks1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__GetRecordingsResponseItem::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__GetRecordingsResponseItem::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__GetRecordingsResponseItem::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__GetRecordingsResponseItem::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__GetRecordingsResponseItem::__any, "xsd:byte"))
				{	a->tt__GetRecordingsResponseItem::__size++;
					a->tt__GetRecordingsResponseItem::__any = NULL;
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
		if (a->tt__GetRecordingsResponseItem::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__GetRecordingsResponseItem::__size)
			a->tt__GetRecordingsResponseItem::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__GetRecordingsResponseItem::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__GetRecordingsResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetRecordingsResponseItem, 0, sizeof(tt__GetRecordingsResponseItem), 0, soap_copy_tt__GetRecordingsResponseItem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_Configuration1 > 0 || soap_flag_Tracks1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__GetRecordingsResponseItem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__GetRecordingsResponseItem);
	if (this->soap_out(soap, tag?tag:"tt:GetRecordingsResponseItem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__GetRecordingsResponseItem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__GetRecordingsResponseItem(soap, this, tag, type);
}

SOAP_FMAC3 tt__GetRecordingsResponseItem * SOAP_FMAC4 soap_get_tt__GetRecordingsResponseItem(struct soap *soap, tt__GetRecordingsResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetRecordingsResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__GetRecordingsResponseItem * SOAP_FMAC2 soap_instantiate_tt__GetRecordingsResponseItem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__GetRecordingsResponseItem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__GetRecordingsResponseItem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__GetRecordingsResponseItem);
		if (size)
			*size = sizeof(tt__GetRecordingsResponseItem);
		((tt__GetRecordingsResponseItem*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__GetRecordingsResponseItem, n);
		if (size)
			*size = n * sizeof(tt__GetRecordingsResponseItem);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__GetRecordingsResponseItem*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__GetRecordingsResponseItem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__GetRecordingsResponseItem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__GetRecordingsResponseItem %p -> %p\n", q, p));
	*(tt__GetRecordingsResponseItem*)p = *(tt__GetRecordingsResponseItem*)q;
}

void tt__TrackConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TrackType(soap, &this->tt__TrackConfiguration::TrackType);
	soap_default_tt__Description(soap, &this->tt__TrackConfiguration::Description);
	this->tt__TrackConfiguration::__size = 0;
	this->tt__TrackConfiguration::__any = NULL;
	this->tt__TrackConfiguration::__anyAttribute = NULL;
}

void tt__TrackConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Description(soap, &this->tt__TrackConfiguration::Description);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackConfiguration(struct soap *soap, const char *tag, int id, const tt__TrackConfiguration *a, const char *type)
{
	if (((tt__TrackConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__TrackConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackConfiguration), "tt:TrackConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__TrackType(soap, "tt:TrackType", -1, &(a->tt__TrackConfiguration::TrackType), ""))
		return soap->error;
	if (a->tt__TrackConfiguration::Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->tt__TrackConfiguration::Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (a->tt__TrackConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__TrackConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__TrackConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__TrackConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackConfiguration * SOAP_FMAC4 soap_in_tt__TrackConfiguration(struct soap *soap, const char *tag, tt__TrackConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TrackConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackConfiguration, sizeof(tt__TrackConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TrackConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__TrackConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TrackType1 = 1;
	size_t soap_flag_Description1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TrackType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TrackType(soap, "tt:TrackType", &(a->tt__TrackConfiguration::TrackType), "tt:TrackType"))
				{	soap_flag_TrackType1--;
					continue;
				}
			if (soap_flag_Description1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &(a->tt__TrackConfiguration::Description), "tt:Description"))
				{	soap_flag_Description1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__TrackConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__TrackConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__TrackConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__TrackConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__TrackConfiguration::__any, "xsd:byte"))
				{	a->tt__TrackConfiguration::__size++;
					a->tt__TrackConfiguration::__any = NULL;
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
		if (a->tt__TrackConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__TrackConfiguration::__size)
			a->tt__TrackConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__TrackConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TrackConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackConfiguration, 0, sizeof(tt__TrackConfiguration), 0, soap_copy_tt__TrackConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackType1 > 0 || soap_flag_Description1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__TrackConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:TrackConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackConfiguration * SOAP_FMAC4 soap_get_tt__TrackConfiguration(struct soap *soap, tt__TrackConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackConfiguration * SOAP_FMAC2 soap_instantiate_tt__TrackConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackConfiguration);
		if (size)
			*size = sizeof(tt__TrackConfiguration);
		((tt__TrackConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackConfiguration, n);
		if (size)
			*size = n * sizeof(tt__TrackConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackConfiguration %p -> %p\n", q, p));
	*(tt__TrackConfiguration*)p = *(tt__TrackConfiguration*)q;
}

void tt__RecordingConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RecordingConfiguration::Source = NULL;
	soap_default_tt__Description(soap, &this->tt__RecordingConfiguration::Content);
	soap_default_xsd__duration(soap, &this->tt__RecordingConfiguration::MaximumRetentionTime);
	this->tt__RecordingConfiguration::__size = 0;
	this->tt__RecordingConfiguration::__any = NULL;
	this->tt__RecordingConfiguration::__anyAttribute = NULL;
}

void tt__RecordingConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RecordingSourceInformation(soap, &this->tt__RecordingConfiguration::Source);
	soap_serialize_tt__Description(soap, &this->tt__RecordingConfiguration::Content);
	soap_embedded(soap, &this->tt__RecordingConfiguration::MaximumRetentionTime, SOAP_TYPE_xsd__duration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingConfiguration(struct soap *soap, const char *tag, int id, const tt__RecordingConfiguration *a, const char *type)
{
	if (((tt__RecordingConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingConfiguration), "tt:RecordingConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingConfiguration::Source)
	{	if (soap_out_PointerTott__RecordingSourceInformation(soap, "tt:Source", -1, &a->tt__RecordingConfiguration::Source, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Source"))
		return soap->error;
	if (a->tt__RecordingConfiguration::Content)
	{	if (soap_out_tt__Description(soap, "tt:Content", -1, &a->tt__RecordingConfiguration::Content, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Content"))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:MaximumRetentionTime", -1, &(a->tt__RecordingConfiguration::MaximumRetentionTime), ""))
		return soap->error;
	if (a->tt__RecordingConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingConfiguration * SOAP_FMAC4 soap_in_tt__RecordingConfiguration(struct soap *soap, const char *tag, tt__RecordingConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingConfiguration, sizeof(tt__RecordingConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Source1 = 1;
	size_t soap_flag_Content1 = 1;
	size_t soap_flag_MaximumRetentionTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Source1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingSourceInformation(soap, "tt:Source", &(a->tt__RecordingConfiguration::Source), "tt:RecordingSourceInformation"))
				{	soap_flag_Source1--;
					continue;
				}
			if (soap_flag_Content1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Content", &(a->tt__RecordingConfiguration::Content), "tt:Description"))
				{	soap_flag_Content1--;
					continue;
				}
			if (soap_flag_MaximumRetentionTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:MaximumRetentionTime", &(a->tt__RecordingConfiguration::MaximumRetentionTime), "xsd:duration"))
				{	soap_flag_MaximumRetentionTime1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingConfiguration::__any, "xsd:byte"))
				{	a->tt__RecordingConfiguration::__size++;
					a->tt__RecordingConfiguration::__any = NULL;
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
		if (a->tt__RecordingConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingConfiguration::__size)
			a->tt__RecordingConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingConfiguration, 0, sizeof(tt__RecordingConfiguration), 0, soap_copy_tt__RecordingConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Source1 > 0 || soap_flag_Content1 > 0 || soap_flag_MaximumRetentionTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:RecordingConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingConfiguration * SOAP_FMAC4 soap_get_tt__RecordingConfiguration(struct soap *soap, tt__RecordingConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingConfiguration * SOAP_FMAC2 soap_instantiate_tt__RecordingConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingConfiguration);
		if (size)
			*size = sizeof(tt__RecordingConfiguration);
		((tt__RecordingConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingConfiguration, n);
		if (size)
			*size = n * sizeof(tt__RecordingConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingConfiguration %p -> %p\n", q, p));
	*(tt__RecordingConfiguration*)p = *(tt__RecordingConfiguration*)q;
}

void tt__MetadataAttributes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__MetadataAttributes::CanContainPTZ);
	soap_default_bool(soap, &this->tt__MetadataAttributes::CanContainAnalytics);
	soap_default_bool(soap, &this->tt__MetadataAttributes::CanContainNotifications);
	this->tt__MetadataAttributes::__size = 0;
	this->tt__MetadataAttributes::__any = NULL;
	this->tt__MetadataAttributes::__anyAttribute = NULL;
}

void tt__MetadataAttributes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__MetadataAttributes::CanContainPTZ, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__MetadataAttributes::CanContainAnalytics, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__MetadataAttributes::CanContainNotifications, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataAttributes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataAttributes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataAttributes(struct soap *soap, const char *tag, int id, const tt__MetadataAttributes *a, const char *type)
{
	if (((tt__MetadataAttributes*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataAttributes*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataAttributes), "tt:MetadataAttributes"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:CanContainPTZ", -1, &(a->tt__MetadataAttributes::CanContainPTZ), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:CanContainAnalytics", -1, &(a->tt__MetadataAttributes::CanContainAnalytics), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:CanContainNotifications", -1, &(a->tt__MetadataAttributes::CanContainNotifications), ""))
		return soap->error;
	if (a->tt__MetadataAttributes::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataAttributes::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataAttributes::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataAttributes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataAttributes(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataAttributes * SOAP_FMAC4 soap_in_tt__MetadataAttributes(struct soap *soap, const char *tag, tt__MetadataAttributes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataAttributes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataAttributes, sizeof(tt__MetadataAttributes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataAttributes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataAttributes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataAttributes*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_CanContainPTZ1 = 1;
	size_t soap_flag_CanContainAnalytics1 = 1;
	size_t soap_flag_CanContainNotifications1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_CanContainPTZ1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:CanContainPTZ", &(a->tt__MetadataAttributes::CanContainPTZ), "xsd:boolean"))
				{	soap_flag_CanContainPTZ1--;
					continue;
				}
			if (soap_flag_CanContainAnalytics1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:CanContainAnalytics", &(a->tt__MetadataAttributes::CanContainAnalytics), "xsd:boolean"))
				{	soap_flag_CanContainAnalytics1--;
					continue;
				}
			if (soap_flag_CanContainNotifications1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:CanContainNotifications", &(a->tt__MetadataAttributes::CanContainNotifications), "xsd:boolean"))
				{	soap_flag_CanContainNotifications1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MetadataAttributes::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataAttributes::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataAttributes::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataAttributes::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataAttributes::__any, "xsd:byte"))
				{	a->tt__MetadataAttributes::__size++;
					a->tt__MetadataAttributes::__any = NULL;
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
		if (a->tt__MetadataAttributes::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataAttributes::__size)
			a->tt__MetadataAttributes::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataAttributes::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataAttributes, 0, sizeof(tt__MetadataAttributes), 0, soap_copy_tt__MetadataAttributes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CanContainPTZ1 > 0 || soap_flag_CanContainAnalytics1 > 0 || soap_flag_CanContainNotifications1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MetadataAttributes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataAttributes);
	if (this->soap_out(soap, tag?tag:"tt:MetadataAttributes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataAttributes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataAttributes(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataAttributes * SOAP_FMAC4 soap_get_tt__MetadataAttributes(struct soap *soap, tt__MetadataAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataAttributes * SOAP_FMAC2 soap_instantiate_tt__MetadataAttributes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataAttributes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataAttributes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataAttributes);
		if (size)
			*size = sizeof(tt__MetadataAttributes);
		((tt__MetadataAttributes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataAttributes, n);
		if (size)
			*size = n * sizeof(tt__MetadataAttributes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataAttributes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataAttributes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataAttributes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataAttributes %p -> %p\n", q, p));
	*(tt__MetadataAttributes*)p = *(tt__MetadataAttributes*)q;
}

void tt__AudioAttributes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioAttributes::Bitrate = NULL;
	soap_default_tt__AudioEncoding(soap, &this->tt__AudioAttributes::Encoding);
	soap_default_int(soap, &this->tt__AudioAttributes::Samplerate);
	this->tt__AudioAttributes::__size = 0;
	this->tt__AudioAttributes::__any = NULL;
	this->tt__AudioAttributes::__anyAttribute = NULL;
}

void tt__AudioAttributes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &this->tt__AudioAttributes::Bitrate);
	soap_embedded(soap, &this->tt__AudioAttributes::Samplerate, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioAttributes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioAttributes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioAttributes(struct soap *soap, const char *tag, int id, const tt__AudioAttributes *a, const char *type)
{
	if (((tt__AudioAttributes*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioAttributes*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioAttributes), "tt:AudioAttributes"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerToint(soap, "tt:Bitrate", -1, &(a->tt__AudioAttributes::Bitrate), ""))
		return soap->error;
	if (soap_out_tt__AudioEncoding(soap, "tt:Encoding", -1, &(a->tt__AudioAttributes::Encoding), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Samplerate", -1, &(a->tt__AudioAttributes::Samplerate), ""))
		return soap->error;
	if (a->tt__AudioAttributes::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioAttributes::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioAttributes::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioAttributes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioAttributes(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioAttributes * SOAP_FMAC4 soap_in_tt__AudioAttributes(struct soap *soap, const char *tag, tt__AudioAttributes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioAttributes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioAttributes, sizeof(tt__AudioAttributes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioAttributes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioAttributes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioAttributes*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Bitrate1 = 1;
	size_t soap_flag_Encoding1 = 1;
	size_t soap_flag_Samplerate1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Bitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:Bitrate", &(a->tt__AudioAttributes::Bitrate), "xsd:int"))
				{	soap_flag_Bitrate1--;
					continue;
				}
			if (soap_flag_Encoding1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AudioEncoding(soap, "tt:Encoding", &(a->tt__AudioAttributes::Encoding), "tt:AudioEncoding"))
				{	soap_flag_Encoding1--;
					continue;
				}
			if (soap_flag_Samplerate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Samplerate", &(a->tt__AudioAttributes::Samplerate), "xsd:int"))
				{	soap_flag_Samplerate1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AudioAttributes::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioAttributes::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioAttributes::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioAttributes::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioAttributes::__any, "xsd:byte"))
				{	a->tt__AudioAttributes::__size++;
					a->tt__AudioAttributes::__any = NULL;
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
		if (a->tt__AudioAttributes::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioAttributes::__size)
			a->tt__AudioAttributes::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioAttributes::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioAttributes, 0, sizeof(tt__AudioAttributes), 0, soap_copy_tt__AudioAttributes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Encoding1 > 0 || soap_flag_Samplerate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AudioAttributes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioAttributes);
	if (this->soap_out(soap, tag?tag:"tt:AudioAttributes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioAttributes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioAttributes(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioAttributes * SOAP_FMAC4 soap_get_tt__AudioAttributes(struct soap *soap, tt__AudioAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioAttributes * SOAP_FMAC2 soap_instantiate_tt__AudioAttributes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioAttributes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioAttributes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioAttributes);
		if (size)
			*size = sizeof(tt__AudioAttributes);
		((tt__AudioAttributes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioAttributes, n);
		if (size)
			*size = n * sizeof(tt__AudioAttributes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioAttributes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioAttributes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioAttributes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioAttributes %p -> %p\n", q, p));
	*(tt__AudioAttributes*)p = *(tt__AudioAttributes*)q;
}

void tt__VideoAttributes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoAttributes::Bitrate = NULL;
	soap_default_int(soap, &this->tt__VideoAttributes::Width);
	soap_default_int(soap, &this->tt__VideoAttributes::Height);
	soap_default_tt__VideoEncoding(soap, &this->tt__VideoAttributes::Encoding);
	soap_default_float(soap, &this->tt__VideoAttributes::Framerate);
	this->tt__VideoAttributes::__size = 0;
	this->tt__VideoAttributes::__any = NULL;
	this->tt__VideoAttributes::__anyAttribute = NULL;
}

void tt__VideoAttributes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &this->tt__VideoAttributes::Bitrate);
	soap_embedded(soap, &this->tt__VideoAttributes::Width, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__VideoAttributes::Height, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__VideoAttributes::Framerate, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoAttributes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoAttributes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAttributes(struct soap *soap, const char *tag, int id, const tt__VideoAttributes *a, const char *type)
{
	if (((tt__VideoAttributes*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoAttributes*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAttributes), "tt:VideoAttributes"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerToint(soap, "tt:Bitrate", -1, &(a->tt__VideoAttributes::Bitrate), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Width", -1, &(a->tt__VideoAttributes::Width), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Height", -1, &(a->tt__VideoAttributes::Height), ""))
		return soap->error;
	if (soap_out_tt__VideoEncoding(soap, "tt:Encoding", -1, &(a->tt__VideoAttributes::Encoding), ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Framerate", -1, &(a->tt__VideoAttributes::Framerate), ""))
		return soap->error;
	if (a->tt__VideoAttributes::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoAttributes::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoAttributes::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoAttributes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoAttributes(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoAttributes * SOAP_FMAC4 soap_in_tt__VideoAttributes(struct soap *soap, const char *tag, tt__VideoAttributes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoAttributes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAttributes, sizeof(tt__VideoAttributes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoAttributes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoAttributes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoAttributes*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Bitrate1 = 1;
	size_t soap_flag_Width1 = 1;
	size_t soap_flag_Height1 = 1;
	size_t soap_flag_Encoding1 = 1;
	size_t soap_flag_Framerate1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Bitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:Bitrate", &(a->tt__VideoAttributes::Bitrate), "xsd:int"))
				{	soap_flag_Bitrate1--;
					continue;
				}
			if (soap_flag_Width1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Width", &(a->tt__VideoAttributes::Width), "xsd:int"))
				{	soap_flag_Width1--;
					continue;
				}
			if (soap_flag_Height1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Height", &(a->tt__VideoAttributes::Height), "xsd:int"))
				{	soap_flag_Height1--;
					continue;
				}
			if (soap_flag_Encoding1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__VideoEncoding(soap, "tt:Encoding", &(a->tt__VideoAttributes::Encoding), "tt:VideoEncoding"))
				{	soap_flag_Encoding1--;
					continue;
				}
			if (soap_flag_Framerate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Framerate", &(a->tt__VideoAttributes::Framerate), "xsd:float"))
				{	soap_flag_Framerate1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__VideoAttributes::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoAttributes::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoAttributes::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoAttributes::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoAttributes::__any, "xsd:byte"))
				{	a->tt__VideoAttributes::__size++;
					a->tt__VideoAttributes::__any = NULL;
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
		if (a->tt__VideoAttributes::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoAttributes::__size)
			a->tt__VideoAttributes::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoAttributes::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAttributes, 0, sizeof(tt__VideoAttributes), 0, soap_copy_tt__VideoAttributes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Width1 > 0 || soap_flag_Height1 > 0 || soap_flag_Encoding1 > 0 || soap_flag_Framerate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__VideoAttributes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoAttributes);
	if (this->soap_out(soap, tag?tag:"tt:VideoAttributes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoAttributes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoAttributes(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoAttributes * SOAP_FMAC4 soap_get_tt__VideoAttributes(struct soap *soap, tt__VideoAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoAttributes * SOAP_FMAC2 soap_instantiate_tt__VideoAttributes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoAttributes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoAttributes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoAttributes);
		if (size)
			*size = sizeof(tt__VideoAttributes);
		((tt__VideoAttributes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoAttributes, n);
		if (size)
			*size = n * sizeof(tt__VideoAttributes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoAttributes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoAttributes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoAttributes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoAttributes %p -> %p\n", q, p));
	*(tt__VideoAttributes*)p = *(tt__VideoAttributes*)q;
}

void tt__TrackAttributesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__TrackAttributesExtension::__size = 0;
	this->tt__TrackAttributesExtension::__any = NULL;
}

void tt__TrackAttributesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackAttributesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackAttributesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackAttributesExtension(struct soap *soap, const char *tag, int id, const tt__TrackAttributesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackAttributesExtension), "tt:TrackAttributesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TrackAttributesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__TrackAttributesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__TrackAttributesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__TrackAttributesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackAttributesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackAttributesExtension * SOAP_FMAC4 soap_in_tt__TrackAttributesExtension(struct soap *soap, const char *tag, tt__TrackAttributesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TrackAttributesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackAttributesExtension, sizeof(tt__TrackAttributesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackAttributesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TrackAttributesExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__TrackAttributesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__TrackAttributesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__TrackAttributesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__TrackAttributesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__TrackAttributesExtension::__any, "xsd:byte"))
				{	a->tt__TrackAttributesExtension::__size++;
					a->tt__TrackAttributesExtension::__any = NULL;
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
		if (a->tt__TrackAttributesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__TrackAttributesExtension::__size)
			a->tt__TrackAttributesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__TrackAttributesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TrackAttributesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackAttributesExtension, 0, sizeof(tt__TrackAttributesExtension), 0, soap_copy_tt__TrackAttributesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__TrackAttributesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackAttributesExtension);
	if (this->soap_out(soap, tag?tag:"tt:TrackAttributesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackAttributesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackAttributesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackAttributesExtension * SOAP_FMAC4 soap_get_tt__TrackAttributesExtension(struct soap *soap, tt__TrackAttributesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackAttributesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackAttributesExtension * SOAP_FMAC2 soap_instantiate_tt__TrackAttributesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackAttributesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackAttributesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackAttributesExtension);
		if (size)
			*size = sizeof(tt__TrackAttributesExtension);
		((tt__TrackAttributesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackAttributesExtension, n);
		if (size)
			*size = n * sizeof(tt__TrackAttributesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackAttributesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackAttributesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackAttributesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackAttributesExtension %p -> %p\n", q, p));
	*(tt__TrackAttributesExtension*)p = *(tt__TrackAttributesExtension*)q;
}

void tt__TrackAttributes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__TrackAttributes::TrackInformation = NULL;
	this->tt__TrackAttributes::VideoAttributes = NULL;
	this->tt__TrackAttributes::AudioAttributes = NULL;
	this->tt__TrackAttributes::MetadataAttributes = NULL;
	this->tt__TrackAttributes::Extension = NULL;
	this->tt__TrackAttributes::__anyAttribute = NULL;
}

void tt__TrackAttributes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__TrackInformation(soap, &this->tt__TrackAttributes::TrackInformation);
	soap_serialize_PointerTott__VideoAttributes(soap, &this->tt__TrackAttributes::VideoAttributes);
	soap_serialize_PointerTott__AudioAttributes(soap, &this->tt__TrackAttributes::AudioAttributes);
	soap_serialize_PointerTott__MetadataAttributes(soap, &this->tt__TrackAttributes::MetadataAttributes);
	soap_serialize_PointerTott__TrackAttributesExtension(soap, &this->tt__TrackAttributes::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackAttributes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackAttributes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackAttributes(struct soap *soap, const char *tag, int id, const tt__TrackAttributes *a, const char *type)
{
	if (((tt__TrackAttributes*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__TrackAttributes*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackAttributes), "tt:TrackAttributes"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TrackAttributes::TrackInformation)
	{	if (soap_out_PointerTott__TrackInformation(soap, "tt:TrackInformation", -1, &a->tt__TrackAttributes::TrackInformation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackInformation"))
		return soap->error;
	if (soap_out_PointerTott__VideoAttributes(soap, "tt:VideoAttributes", -1, &(a->tt__TrackAttributes::VideoAttributes), ""))
		return soap->error;
	if (soap_out_PointerTott__AudioAttributes(soap, "tt:AudioAttributes", -1, &(a->tt__TrackAttributes::AudioAttributes), ""))
		return soap->error;
	if (soap_out_PointerTott__MetadataAttributes(soap, "tt:MetadataAttributes", -1, &(a->tt__TrackAttributes::MetadataAttributes), ""))
		return soap->error;
	if (soap_out_PointerTott__TrackAttributesExtension(soap, "tt:Extension", -1, &(a->tt__TrackAttributes::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__TrackAttributes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackAttributes(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackAttributes * SOAP_FMAC4 soap_in_tt__TrackAttributes(struct soap *soap, const char *tag, tt__TrackAttributes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TrackAttributes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackAttributes, sizeof(tt__TrackAttributes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackAttributes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TrackAttributes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__TrackAttributes*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TrackInformation1 = 1;
	size_t soap_flag_VideoAttributes1 = 1;
	size_t soap_flag_AudioAttributes1 = 1;
	size_t soap_flag_MetadataAttributes1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TrackInformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackInformation(soap, "tt:TrackInformation", &(a->tt__TrackAttributes::TrackInformation), "tt:TrackInformation"))
				{	soap_flag_TrackInformation1--;
					continue;
				}
			if (soap_flag_VideoAttributes1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAttributes(soap, "tt:VideoAttributes", &(a->tt__TrackAttributes::VideoAttributes), "tt:VideoAttributes"))
				{	soap_flag_VideoAttributes1--;
					continue;
				}
			if (soap_flag_AudioAttributes1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioAttributes(soap, "tt:AudioAttributes", &(a->tt__TrackAttributes::AudioAttributes), "tt:AudioAttributes"))
				{	soap_flag_AudioAttributes1--;
					continue;
				}
			if (soap_flag_MetadataAttributes1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataAttributes(soap, "tt:MetadataAttributes", &(a->tt__TrackAttributes::MetadataAttributes), "tt:MetadataAttributes"))
				{	soap_flag_MetadataAttributes1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackAttributesExtension(soap, "tt:Extension", &(a->tt__TrackAttributes::Extension), "tt:TrackAttributesExtension"))
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
	{	a = (tt__TrackAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackAttributes, 0, sizeof(tt__TrackAttributes), 0, soap_copy_tt__TrackAttributes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackInformation1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__TrackAttributes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackAttributes);
	if (this->soap_out(soap, tag?tag:"tt:TrackAttributes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackAttributes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackAttributes(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackAttributes * SOAP_FMAC4 soap_get_tt__TrackAttributes(struct soap *soap, tt__TrackAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackAttributes * SOAP_FMAC2 soap_instantiate_tt__TrackAttributes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackAttributes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackAttributes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackAttributes);
		if (size)
			*size = sizeof(tt__TrackAttributes);
		((tt__TrackAttributes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackAttributes, n);
		if (size)
			*size = n * sizeof(tt__TrackAttributes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackAttributes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackAttributes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackAttributes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackAttributes %p -> %p\n", q, p));
	*(tt__TrackAttributes*)p = *(tt__TrackAttributes*)q;
}

void tt__MediaAttributes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__MediaAttributes::RecordingToken);
	this->tt__MediaAttributes::__sizeTrackAttributes = 0;
	this->tt__MediaAttributes::TrackAttributes = NULL;
	soap_default_time(soap, &this->tt__MediaAttributes::From);
	soap_default_time(soap, &this->tt__MediaAttributes::Until);
	this->tt__MediaAttributes::__size = 0;
	this->tt__MediaAttributes::__any = NULL;
	this->tt__MediaAttributes::__anyAttribute = NULL;
}

void tt__MediaAttributes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__MediaAttributes::RecordingToken);
	if (this->tt__MediaAttributes::TrackAttributes)
	{	int i;
		for (i = 0; i < this->tt__MediaAttributes::__sizeTrackAttributes; i++)
		{
			soap_serialize_PointerTott__TrackAttributes(soap, this->tt__MediaAttributes::TrackAttributes + i);
		}
	}
	soap_embedded(soap, &this->tt__MediaAttributes::From, SOAP_TYPE_time);
	soap_embedded(soap, &this->tt__MediaAttributes::Until, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MediaAttributes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MediaAttributes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaAttributes(struct soap *soap, const char *tag, int id, const tt__MediaAttributes *a, const char *type)
{
	if (((tt__MediaAttributes*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MediaAttributes*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaAttributes), "tt:MediaAttributes"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MediaAttributes::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__MediaAttributes::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__MediaAttributes::TrackAttributes)
	{	int i;
		for (i = 0; i < a->tt__MediaAttributes::__sizeTrackAttributes; i++)
			if (soap_out_PointerTott__TrackAttributes(soap, "tt:TrackAttributes", -1, a->tt__MediaAttributes::TrackAttributes + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "tt:From", -1, &(a->tt__MediaAttributes::From), ""))
		return soap->error;
	if (soap_out_time(soap, "tt:Until", -1, &(a->tt__MediaAttributes::Until), ""))
		return soap->error;
	if (a->tt__MediaAttributes::__any)
	{	int i;
		for (i = 0; i < a->tt__MediaAttributes::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MediaAttributes::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MediaAttributes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MediaAttributes(soap, tag, this, type);
}

SOAP_FMAC3 tt__MediaAttributes * SOAP_FMAC4 soap_in_tt__MediaAttributes(struct soap *soap, const char *tag, tt__MediaAttributes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MediaAttributes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaAttributes, sizeof(tt__MediaAttributes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MediaAttributes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MediaAttributes *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MediaAttributes*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	struct soap_blist *soap_blist_TrackAttributes1 = NULL;
	size_t soap_flag_From1 = 1;
	size_t soap_flag_Until1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__MediaAttributes::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:TrackAttributes", 1, NULL))
			{	if (a->tt__MediaAttributes::TrackAttributes == NULL)
				{	if (soap_blist_TrackAttributes1 == NULL)
						soap_blist_TrackAttributes1 = soap_new_block(soap);
					a->tt__MediaAttributes::TrackAttributes = (tt__TrackAttributes **)soap_push_block(soap, soap_blist_TrackAttributes1, sizeof(tt__TrackAttributes *));
					if (a->tt__MediaAttributes::TrackAttributes == NULL)
						return NULL;
					*a->tt__MediaAttributes::TrackAttributes = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__TrackAttributes(soap, "tt:TrackAttributes", a->tt__MediaAttributes::TrackAttributes, "tt:TrackAttributes"))
				{	a->tt__MediaAttributes::__sizeTrackAttributes++;
					a->tt__MediaAttributes::TrackAttributes = NULL;
					continue;
				}
			}
			if (soap_flag_From1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:From", &(a->tt__MediaAttributes::From), "xsd:dateTime"))
				{	soap_flag_From1--;
					continue;
				}
			if (soap_flag_Until1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Until", &(a->tt__MediaAttributes::Until), "xsd:dateTime"))
				{	soap_flag_Until1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MediaAttributes::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MediaAttributes::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MediaAttributes::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MediaAttributes::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MediaAttributes::__any, "xsd:byte"))
				{	a->tt__MediaAttributes::__size++;
					a->tt__MediaAttributes::__any = NULL;
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
		if (a->tt__MediaAttributes::TrackAttributes)
			soap_pop_block(soap, soap_blist_TrackAttributes1);
		if (a->tt__MediaAttributes::__sizeTrackAttributes)
			a->tt__MediaAttributes::TrackAttributes = (tt__TrackAttributes **)soap_save_block(soap, soap_blist_TrackAttributes1, NULL, 1);
		else
		{	a->tt__MediaAttributes::TrackAttributes = NULL;
			if (soap_blist_TrackAttributes1)
				soap_end_block(soap, soap_blist_TrackAttributes1);
		}
		if (a->tt__MediaAttributes::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MediaAttributes::__size)
			a->tt__MediaAttributes::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MediaAttributes::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MediaAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaAttributes, 0, sizeof(tt__MediaAttributes), 0, soap_copy_tt__MediaAttributes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_From1 > 0 || soap_flag_Until1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MediaAttributes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MediaAttributes);
	if (this->soap_out(soap, tag?tag:"tt:MediaAttributes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MediaAttributes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MediaAttributes(soap, this, tag, type);
}

SOAP_FMAC3 tt__MediaAttributes * SOAP_FMAC4 soap_get_tt__MediaAttributes(struct soap *soap, tt__MediaAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MediaAttributes * SOAP_FMAC2 soap_instantiate_tt__MediaAttributes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MediaAttributes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MediaAttributes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MediaAttributes);
		if (size)
			*size = sizeof(tt__MediaAttributes);
		((tt__MediaAttributes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MediaAttributes, n);
		if (size)
			*size = n * sizeof(tt__MediaAttributes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MediaAttributes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MediaAttributes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MediaAttributes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MediaAttributes %p -> %p\n", q, p));
	*(tt__MediaAttributes*)p = *(tt__MediaAttributes*)q;
}

void tt__TrackInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TrackReference(soap, &this->tt__TrackInformation::TrackToken);
	soap_default_tt__TrackType(soap, &this->tt__TrackInformation::TrackType);
	soap_default_tt__Description(soap, &this->tt__TrackInformation::Description);
	soap_default_time(soap, &this->tt__TrackInformation::DataFrom);
	soap_default_time(soap, &this->tt__TrackInformation::DataTo);
	this->tt__TrackInformation::__size = 0;
	this->tt__TrackInformation::__any = NULL;
	this->tt__TrackInformation::__anyAttribute = NULL;
}

void tt__TrackInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__TrackReference(soap, &this->tt__TrackInformation::TrackToken);
	soap_serialize_tt__Description(soap, &this->tt__TrackInformation::Description);
	soap_embedded(soap, &this->tt__TrackInformation::DataFrom, SOAP_TYPE_time);
	soap_embedded(soap, &this->tt__TrackInformation::DataTo, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TrackInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TrackInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackInformation(struct soap *soap, const char *tag, int id, const tt__TrackInformation *a, const char *type)
{
	if (((tt__TrackInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__TrackInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackInformation), "tt:TrackInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TrackInformation::TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->tt__TrackInformation::TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_tt__TrackType(soap, "tt:TrackType", -1, &(a->tt__TrackInformation::TrackType), ""))
		return soap->error;
	if (a->tt__TrackInformation::Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->tt__TrackInformation::Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (soap_out_time(soap, "tt:DataFrom", -1, &(a->tt__TrackInformation::DataFrom), ""))
		return soap->error;
	if (soap_out_time(soap, "tt:DataTo", -1, &(a->tt__TrackInformation::DataTo), ""))
		return soap->error;
	if (a->tt__TrackInformation::__any)
	{	int i;
		for (i = 0; i < a->tt__TrackInformation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__TrackInformation::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__TrackInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TrackInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__TrackInformation * SOAP_FMAC4 soap_in_tt__TrackInformation(struct soap *soap, const char *tag, tt__TrackInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TrackInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackInformation, sizeof(tt__TrackInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TrackInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TrackInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__TrackInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TrackToken1 = 1;
	size_t soap_flag_TrackType1 = 1;
	size_t soap_flag_Description1 = 1;
	size_t soap_flag_DataFrom1 = 1;
	size_t soap_flag_DataTo1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TrackToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &(a->tt__TrackInformation::TrackToken), "tt:TrackReference"))
				{	soap_flag_TrackToken1--;
					continue;
				}
			if (soap_flag_TrackType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TrackType(soap, "tt:TrackType", &(a->tt__TrackInformation::TrackType), "tt:TrackType"))
				{	soap_flag_TrackType1--;
					continue;
				}
			if (soap_flag_Description1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &(a->tt__TrackInformation::Description), "tt:Description"))
				{	soap_flag_Description1--;
					continue;
				}
			if (soap_flag_DataFrom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataFrom", &(a->tt__TrackInformation::DataFrom), "xsd:dateTime"))
				{	soap_flag_DataFrom1--;
					continue;
				}
			if (soap_flag_DataTo1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataTo", &(a->tt__TrackInformation::DataTo), "xsd:dateTime"))
				{	soap_flag_DataTo1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__TrackInformation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__TrackInformation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__TrackInformation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__TrackInformation::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__TrackInformation::__any, "xsd:byte"))
				{	a->tt__TrackInformation::__size++;
					a->tt__TrackInformation::__any = NULL;
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
		if (a->tt__TrackInformation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__TrackInformation::__size)
			a->tt__TrackInformation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__TrackInformation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TrackInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackInformation, 0, sizeof(tt__TrackInformation), 0, soap_copy_tt__TrackInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackToken1 > 0 || soap_flag_TrackType1 > 0 || soap_flag_Description1 > 0 || soap_flag_DataFrom1 > 0 || soap_flag_DataTo1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__TrackInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TrackInformation);
	if (this->soap_out(soap, tag?tag:"tt:TrackInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TrackInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TrackInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__TrackInformation * SOAP_FMAC4 soap_get_tt__TrackInformation(struct soap *soap, tt__TrackInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TrackInformation * SOAP_FMAC2 soap_instantiate_tt__TrackInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TrackInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TrackInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TrackInformation);
		if (size)
			*size = sizeof(tt__TrackInformation);
		((tt__TrackInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TrackInformation, n);
		if (size)
			*size = n * sizeof(tt__TrackInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TrackInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TrackInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TrackInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TrackInformation %p -> %p\n", q, p));
	*(tt__TrackInformation*)p = *(tt__TrackInformation*)q;
}

void tt__RecordingSourceInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__RecordingSourceInformation::SourceId);
	soap_default_tt__Name(soap, &this->tt__RecordingSourceInformation::Name);
	soap_default_tt__Description(soap, &this->tt__RecordingSourceInformation::Location);
	soap_default_tt__Description(soap, &this->tt__RecordingSourceInformation::Description);
	soap_default_xsd__anyURI(soap, &this->tt__RecordingSourceInformation::Address);
	this->tt__RecordingSourceInformation::__size = 0;
	this->tt__RecordingSourceInformation::__any = NULL;
	this->tt__RecordingSourceInformation::__anyAttribute = NULL;
}

void tt__RecordingSourceInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__RecordingSourceInformation::SourceId);
	soap_serialize_tt__Name(soap, &this->tt__RecordingSourceInformation::Name);
	soap_serialize_tt__Description(soap, &this->tt__RecordingSourceInformation::Location);
	soap_serialize_tt__Description(soap, &this->tt__RecordingSourceInformation::Description);
	soap_serialize_xsd__anyURI(soap, &this->tt__RecordingSourceInformation::Address);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingSourceInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingSourceInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingSourceInformation(struct soap *soap, const char *tag, int id, const tt__RecordingSourceInformation *a, const char *type)
{
	if (((tt__RecordingSourceInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingSourceInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingSourceInformation), "tt:RecordingSourceInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingSourceInformation::SourceId)
	{	if (soap_out_xsd__anyURI(soap, "tt:SourceId", -1, &a->tt__RecordingSourceInformation::SourceId, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceId"))
		return soap->error;
	if (a->tt__RecordingSourceInformation::Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->tt__RecordingSourceInformation::Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->tt__RecordingSourceInformation::Location)
	{	if (soap_out_tt__Description(soap, "tt:Location", -1, &a->tt__RecordingSourceInformation::Location, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Location"))
		return soap->error;
	if (a->tt__RecordingSourceInformation::Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->tt__RecordingSourceInformation::Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (a->tt__RecordingSourceInformation::Address)
	{	if (soap_out_xsd__anyURI(soap, "tt:Address", -1, &a->tt__RecordingSourceInformation::Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (a->tt__RecordingSourceInformation::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingSourceInformation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingSourceInformation::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingSourceInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingSourceInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingSourceInformation * SOAP_FMAC4 soap_in_tt__RecordingSourceInformation(struct soap *soap, const char *tag, tt__RecordingSourceInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingSourceInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingSourceInformation, sizeof(tt__RecordingSourceInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingSourceInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingSourceInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingSourceInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SourceId1 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Location1 = 1;
	size_t soap_flag_Description1 = 1;
	size_t soap_flag_Address1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SourceId1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:SourceId", &(a->tt__RecordingSourceInformation::SourceId), "xsd:anyURI"))
				{	soap_flag_SourceId1--;
					continue;
				}
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &(a->tt__RecordingSourceInformation::Name), "tt:Name"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Location1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Location", &(a->tt__RecordingSourceInformation::Location), "tt:Description"))
				{	soap_flag_Location1--;
					continue;
				}
			if (soap_flag_Description1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &(a->tt__RecordingSourceInformation::Description), "tt:Description"))
				{	soap_flag_Description1--;
					continue;
				}
			if (soap_flag_Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Address", &(a->tt__RecordingSourceInformation::Address), "xsd:anyURI"))
				{	soap_flag_Address1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingSourceInformation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingSourceInformation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingSourceInformation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingSourceInformation::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingSourceInformation::__any, "xsd:byte"))
				{	a->tt__RecordingSourceInformation::__size++;
					a->tt__RecordingSourceInformation::__any = NULL;
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
		if (a->tt__RecordingSourceInformation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingSourceInformation::__size)
			a->tt__RecordingSourceInformation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingSourceInformation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingSourceInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingSourceInformation, 0, sizeof(tt__RecordingSourceInformation), 0, soap_copy_tt__RecordingSourceInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceId1 > 0 || soap_flag_Name1 > 0 || soap_flag_Location1 > 0 || soap_flag_Description1 > 0 || soap_flag_Address1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingSourceInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingSourceInformation);
	if (this->soap_out(soap, tag?tag:"tt:RecordingSourceInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingSourceInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingSourceInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingSourceInformation * SOAP_FMAC4 soap_get_tt__RecordingSourceInformation(struct soap *soap, tt__RecordingSourceInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingSourceInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingSourceInformation * SOAP_FMAC2 soap_instantiate_tt__RecordingSourceInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingSourceInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingSourceInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingSourceInformation);
		if (size)
			*size = sizeof(tt__RecordingSourceInformation);
		((tt__RecordingSourceInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingSourceInformation, n);
		if (size)
			*size = n * sizeof(tt__RecordingSourceInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingSourceInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingSourceInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingSourceInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingSourceInformation %p -> %p\n", q, p));
	*(tt__RecordingSourceInformation*)p = *(tt__RecordingSourceInformation*)q;
}

void tt__RecordingInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__RecordingInformation::RecordingToken);
	this->tt__RecordingInformation::Source = NULL;
	this->tt__RecordingInformation::EarliestRecording = NULL;
	this->tt__RecordingInformation::LatestRecording = NULL;
	soap_default_tt__Description(soap, &this->tt__RecordingInformation::Content);
	this->tt__RecordingInformation::__sizeTrack = 0;
	this->tt__RecordingInformation::Track = NULL;
	soap_default_tt__RecordingStatus(soap, &this->tt__RecordingInformation::RecordingStatus);
	this->tt__RecordingInformation::__size = 0;
	this->tt__RecordingInformation::__any = NULL;
	this->tt__RecordingInformation::__anyAttribute = NULL;
}

void tt__RecordingInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__RecordingInformation::RecordingToken);
	soap_serialize_PointerTott__RecordingSourceInformation(soap, &this->tt__RecordingInformation::Source);
	soap_serialize_PointerTotime(soap, &this->tt__RecordingInformation::EarliestRecording);
	soap_serialize_PointerTotime(soap, &this->tt__RecordingInformation::LatestRecording);
	soap_serialize_tt__Description(soap, &this->tt__RecordingInformation::Content);
	if (this->tt__RecordingInformation::Track)
	{	int i;
		for (i = 0; i < this->tt__RecordingInformation::__sizeTrack; i++)
		{
			soap_serialize_PointerTott__TrackInformation(soap, this->tt__RecordingInformation::Track + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingInformation(struct soap *soap, const char *tag, int id, const tt__RecordingInformation *a, const char *type)
{
	if (((tt__RecordingInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingInformation), "tt:RecordingInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingInformation::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__RecordingInformation::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__RecordingInformation::Source)
	{	if (soap_out_PointerTott__RecordingSourceInformation(soap, "tt:Source", -1, &a->tt__RecordingInformation::Source, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Source"))
		return soap->error;
	if (soap_out_PointerTotime(soap, "tt:EarliestRecording", -1, &(a->tt__RecordingInformation::EarliestRecording), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "tt:LatestRecording", -1, &(a->tt__RecordingInformation::LatestRecording), ""))
		return soap->error;
	if (a->tt__RecordingInformation::Content)
	{	if (soap_out_tt__Description(soap, "tt:Content", -1, &a->tt__RecordingInformation::Content, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Content"))
		return soap->error;
	if (a->tt__RecordingInformation::Track)
	{	int i;
		for (i = 0; i < a->tt__RecordingInformation::__sizeTrack; i++)
			if (soap_out_PointerTott__TrackInformation(soap, "tt:Track", -1, a->tt__RecordingInformation::Track + i, ""))
				return soap->error;
	}
	if (soap_out_tt__RecordingStatus(soap, "tt:RecordingStatus", -1, &(a->tt__RecordingInformation::RecordingStatus), ""))
		return soap->error;
	if (a->tt__RecordingInformation::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingInformation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingInformation::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingInformation * SOAP_FMAC4 soap_in_tt__RecordingInformation(struct soap *soap, const char *tag, tt__RecordingInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingInformation, sizeof(tt__RecordingInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_Source1 = 1;
	size_t soap_flag_EarliestRecording1 = 1;
	size_t soap_flag_LatestRecording1 = 1;
	size_t soap_flag_Content1 = 1;
	struct soap_blist *soap_blist_Track1 = NULL;
	size_t soap_flag_RecordingStatus1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__RecordingInformation::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_Source1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingSourceInformation(soap, "tt:Source", &(a->tt__RecordingInformation::Source), "tt:RecordingSourceInformation"))
				{	soap_flag_Source1--;
					continue;
				}
			if (soap_flag_EarliestRecording1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "tt:EarliestRecording", &(a->tt__RecordingInformation::EarliestRecording), "xsd:dateTime"))
				{	soap_flag_EarliestRecording1--;
					continue;
				}
			if (soap_flag_LatestRecording1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "tt:LatestRecording", &(a->tt__RecordingInformation::LatestRecording), "xsd:dateTime"))
				{	soap_flag_LatestRecording1--;
					continue;
				}
			if (soap_flag_Content1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Content", &(a->tt__RecordingInformation::Content), "tt:Description"))
				{	soap_flag_Content1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->tt__RecordingInformation::Track == NULL)
				{	if (soap_blist_Track1 == NULL)
						soap_blist_Track1 = soap_new_block(soap);
					a->tt__RecordingInformation::Track = (tt__TrackInformation **)soap_push_block(soap, soap_blist_Track1, sizeof(tt__TrackInformation *));
					if (a->tt__RecordingInformation::Track == NULL)
						return NULL;
					*a->tt__RecordingInformation::Track = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__TrackInformation(soap, "tt:Track", a->tt__RecordingInformation::Track, "tt:TrackInformation"))
				{	a->tt__RecordingInformation::__sizeTrack++;
					a->tt__RecordingInformation::Track = NULL;
					continue;
				}
			}
			if (soap_flag_RecordingStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RecordingStatus(soap, "tt:RecordingStatus", &(a->tt__RecordingInformation::RecordingStatus), "tt:RecordingStatus"))
				{	soap_flag_RecordingStatus1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingInformation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingInformation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingInformation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingInformation::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingInformation::__any, "xsd:byte"))
				{	a->tt__RecordingInformation::__size++;
					a->tt__RecordingInformation::__any = NULL;
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
		if (a->tt__RecordingInformation::Track)
			soap_pop_block(soap, soap_blist_Track1);
		if (a->tt__RecordingInformation::__sizeTrack)
			a->tt__RecordingInformation::Track = (tt__TrackInformation **)soap_save_block(soap, soap_blist_Track1, NULL, 1);
		else
		{	a->tt__RecordingInformation::Track = NULL;
			if (soap_blist_Track1)
				soap_end_block(soap, soap_blist_Track1);
		}
		if (a->tt__RecordingInformation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingInformation::__size)
			a->tt__RecordingInformation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingInformation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingInformation, 0, sizeof(tt__RecordingInformation), 0, soap_copy_tt__RecordingInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_Source1 > 0 || soap_flag_Content1 > 0 || soap_flag_RecordingStatus1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingInformation);
	if (this->soap_out(soap, tag?tag:"tt:RecordingInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingInformation * SOAP_FMAC4 soap_get_tt__RecordingInformation(struct soap *soap, tt__RecordingInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingInformation * SOAP_FMAC2 soap_instantiate_tt__RecordingInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingInformation);
		if (size)
			*size = sizeof(tt__RecordingInformation);
		((tt__RecordingInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingInformation, n);
		if (size)
			*size = n * sizeof(tt__RecordingInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingInformation %p -> %p\n", q, p));
	*(tt__RecordingInformation*)p = *(tt__RecordingInformation*)q;
}

void tt__FindMetadataResult::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__FindMetadataResult::RecordingToken);
	soap_default_tt__TrackReference(soap, &this->tt__FindMetadataResult::TrackToken);
	soap_default_time(soap, &this->tt__FindMetadataResult::Time);
	this->tt__FindMetadataResult::__size = 0;
	this->tt__FindMetadataResult::__any = NULL;
	this->tt__FindMetadataResult::__anyAttribute = NULL;
}

void tt__FindMetadataResult::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__FindMetadataResult::RecordingToken);
	soap_serialize_tt__TrackReference(soap, &this->tt__FindMetadataResult::TrackToken);
	soap_embedded(soap, &this->tt__FindMetadataResult::Time, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindMetadataResult::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindMetadataResult(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindMetadataResult(struct soap *soap, const char *tag, int id, const tt__FindMetadataResult *a, const char *type)
{
	if (((tt__FindMetadataResult*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FindMetadataResult*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindMetadataResult), "tt:FindMetadataResult"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FindMetadataResult::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__FindMetadataResult::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__FindMetadataResult::TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->tt__FindMetadataResult::TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &(a->tt__FindMetadataResult::Time), ""))
		return soap->error;
	if (a->tt__FindMetadataResult::__any)
	{	int i;
		for (i = 0; i < a->tt__FindMetadataResult::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FindMetadataResult::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindMetadataResult::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindMetadataResult(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindMetadataResult * SOAP_FMAC4 soap_in_tt__FindMetadataResult(struct soap *soap, const char *tag, tt__FindMetadataResult *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindMetadataResult *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindMetadataResult, sizeof(tt__FindMetadataResult), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindMetadataResult)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindMetadataResult *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FindMetadataResult*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_TrackToken1 = 1;
	size_t soap_flag_Time1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__FindMetadataResult::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_TrackToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &(a->tt__FindMetadataResult::TrackToken), "tt:TrackReference"))
				{	soap_flag_TrackToken1--;
					continue;
				}
			if (soap_flag_Time1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &(a->tt__FindMetadataResult::Time), "xsd:dateTime"))
				{	soap_flag_Time1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FindMetadataResult::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FindMetadataResult::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FindMetadataResult::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FindMetadataResult::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FindMetadataResult::__any, "xsd:byte"))
				{	a->tt__FindMetadataResult::__size++;
					a->tt__FindMetadataResult::__any = NULL;
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
		if (a->tt__FindMetadataResult::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FindMetadataResult::__size)
			a->tt__FindMetadataResult::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FindMetadataResult::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindMetadataResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindMetadataResult, 0, sizeof(tt__FindMetadataResult), 0, soap_copy_tt__FindMetadataResult);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_TrackToken1 > 0 || soap_flag_Time1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindMetadataResult::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindMetadataResult);
	if (this->soap_out(soap, tag?tag:"tt:FindMetadataResult", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindMetadataResult::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindMetadataResult(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindMetadataResult * SOAP_FMAC4 soap_get_tt__FindMetadataResult(struct soap *soap, tt__FindMetadataResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindMetadataResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindMetadataResult * SOAP_FMAC2 soap_instantiate_tt__FindMetadataResult(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindMetadataResult(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindMetadataResult, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindMetadataResult);
		if (size)
			*size = sizeof(tt__FindMetadataResult);
		((tt__FindMetadataResult*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindMetadataResult, n);
		if (size)
			*size = n * sizeof(tt__FindMetadataResult);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindMetadataResult*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindMetadataResult*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindMetadataResult(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindMetadataResult %p -> %p\n", q, p));
	*(tt__FindMetadataResult*)p = *(tt__FindMetadataResult*)q;
}

void tt__FindMetadataResultList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SearchState(soap, &this->tt__FindMetadataResultList::SearchState);
	this->tt__FindMetadataResultList::__sizeResult = 0;
	this->tt__FindMetadataResultList::Result = NULL;
}

void tt__FindMetadataResultList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FindMetadataResultList::Result)
	{	int i;
		for (i = 0; i < this->tt__FindMetadataResultList::__sizeResult; i++)
		{
			soap_serialize_PointerTott__FindMetadataResult(soap, this->tt__FindMetadataResultList::Result + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindMetadataResultList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindMetadataResultList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindMetadataResultList(struct soap *soap, const char *tag, int id, const tt__FindMetadataResultList *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindMetadataResultList), "tt:FindMetadataResultList"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &(a->tt__FindMetadataResultList::SearchState), ""))
		return soap->error;
	if (a->tt__FindMetadataResultList::Result)
	{	int i;
		for (i = 0; i < a->tt__FindMetadataResultList::__sizeResult; i++)
			if (soap_out_PointerTott__FindMetadataResult(soap, "tt:Result", -1, a->tt__FindMetadataResultList::Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindMetadataResultList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindMetadataResultList(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindMetadataResultList * SOAP_FMAC4 soap_in_tt__FindMetadataResultList(struct soap *soap, const char *tag, tt__FindMetadataResultList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindMetadataResultList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindMetadataResultList, sizeof(tt__FindMetadataResultList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindMetadataResultList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindMetadataResultList *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SearchState1 = 1;
	struct soap_blist *soap_blist_Result1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SearchState1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &(a->tt__FindMetadataResultList::SearchState), "tt:SearchState"))
				{	soap_flag_SearchState1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->tt__FindMetadataResultList::Result == NULL)
				{	if (soap_blist_Result1 == NULL)
						soap_blist_Result1 = soap_new_block(soap);
					a->tt__FindMetadataResultList::Result = (tt__FindMetadataResult **)soap_push_block(soap, soap_blist_Result1, sizeof(tt__FindMetadataResult *));
					if (a->tt__FindMetadataResultList::Result == NULL)
						return NULL;
					*a->tt__FindMetadataResultList::Result = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__FindMetadataResult(soap, "tt:Result", a->tt__FindMetadataResultList::Result, "tt:FindMetadataResult"))
				{	a->tt__FindMetadataResultList::__sizeResult++;
					a->tt__FindMetadataResultList::Result = NULL;
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
		if (a->tt__FindMetadataResultList::Result)
			soap_pop_block(soap, soap_blist_Result1);
		if (a->tt__FindMetadataResultList::__sizeResult)
			a->tt__FindMetadataResultList::Result = (tt__FindMetadataResult **)soap_save_block(soap, soap_blist_Result1, NULL, 1);
		else
		{	a->tt__FindMetadataResultList::Result = NULL;
			if (soap_blist_Result1)
				soap_end_block(soap, soap_blist_Result1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindMetadataResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindMetadataResultList, 0, sizeof(tt__FindMetadataResultList), 0, soap_copy_tt__FindMetadataResultList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindMetadataResultList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindMetadataResultList);
	if (this->soap_out(soap, tag?tag:"tt:FindMetadataResultList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindMetadataResultList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindMetadataResultList(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindMetadataResultList * SOAP_FMAC4 soap_get_tt__FindMetadataResultList(struct soap *soap, tt__FindMetadataResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindMetadataResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindMetadataResultList * SOAP_FMAC2 soap_instantiate_tt__FindMetadataResultList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindMetadataResultList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindMetadataResultList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindMetadataResultList);
		if (size)
			*size = sizeof(tt__FindMetadataResultList);
		((tt__FindMetadataResultList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindMetadataResultList, n);
		if (size)
			*size = n * sizeof(tt__FindMetadataResultList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindMetadataResultList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindMetadataResultList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindMetadataResultList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindMetadataResultList %p -> %p\n", q, p));
	*(tt__FindMetadataResultList*)p = *(tt__FindMetadataResultList*)q;
}

void tt__FindPTZPositionResult::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__FindPTZPositionResult::RecordingToken);
	soap_default_tt__TrackReference(soap, &this->tt__FindPTZPositionResult::TrackToken);
	soap_default_time(soap, &this->tt__FindPTZPositionResult::Time);
	this->tt__FindPTZPositionResult::Position = NULL;
	this->tt__FindPTZPositionResult::__size = 0;
	this->tt__FindPTZPositionResult::__any = NULL;
	this->tt__FindPTZPositionResult::__anyAttribute = NULL;
}

void tt__FindPTZPositionResult::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__FindPTZPositionResult::RecordingToken);
	soap_serialize_tt__TrackReference(soap, &this->tt__FindPTZPositionResult::TrackToken);
	soap_embedded(soap, &this->tt__FindPTZPositionResult::Time, SOAP_TYPE_time);
	soap_serialize_PointerTott__PTZVector(soap, &this->tt__FindPTZPositionResult::Position);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindPTZPositionResult::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindPTZPositionResult(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindPTZPositionResult(struct soap *soap, const char *tag, int id, const tt__FindPTZPositionResult *a, const char *type)
{
	if (((tt__FindPTZPositionResult*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FindPTZPositionResult*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindPTZPositionResult), "tt:FindPTZPositionResult"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FindPTZPositionResult::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__FindPTZPositionResult::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__FindPTZPositionResult::TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->tt__FindPTZPositionResult::TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &(a->tt__FindPTZPositionResult::Time), ""))
		return soap->error;
	if (a->tt__FindPTZPositionResult::Position)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:Position", -1, &a->tt__FindPTZPositionResult::Position, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Position"))
		return soap->error;
	if (a->tt__FindPTZPositionResult::__any)
	{	int i;
		for (i = 0; i < a->tt__FindPTZPositionResult::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FindPTZPositionResult::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindPTZPositionResult::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindPTZPositionResult(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindPTZPositionResult * SOAP_FMAC4 soap_in_tt__FindPTZPositionResult(struct soap *soap, const char *tag, tt__FindPTZPositionResult *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindPTZPositionResult *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindPTZPositionResult, sizeof(tt__FindPTZPositionResult), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindPTZPositionResult)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindPTZPositionResult *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FindPTZPositionResult*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_TrackToken1 = 1;
	size_t soap_flag_Time1 = 1;
	size_t soap_flag_Position1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__FindPTZPositionResult::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_TrackToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &(a->tt__FindPTZPositionResult::TrackToken), "tt:TrackReference"))
				{	soap_flag_TrackToken1--;
					continue;
				}
			if (soap_flag_Time1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &(a->tt__FindPTZPositionResult::Time), "xsd:dateTime"))
				{	soap_flag_Time1--;
					continue;
				}
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:Position", &(a->tt__FindPTZPositionResult::Position), "tt:PTZVector"))
				{	soap_flag_Position1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FindPTZPositionResult::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FindPTZPositionResult::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FindPTZPositionResult::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FindPTZPositionResult::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FindPTZPositionResult::__any, "xsd:byte"))
				{	a->tt__FindPTZPositionResult::__size++;
					a->tt__FindPTZPositionResult::__any = NULL;
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
		if (a->tt__FindPTZPositionResult::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FindPTZPositionResult::__size)
			a->tt__FindPTZPositionResult::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FindPTZPositionResult::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindPTZPositionResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindPTZPositionResult, 0, sizeof(tt__FindPTZPositionResult), 0, soap_copy_tt__FindPTZPositionResult);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_TrackToken1 > 0 || soap_flag_Time1 > 0 || soap_flag_Position1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindPTZPositionResult::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindPTZPositionResult);
	if (this->soap_out(soap, tag?tag:"tt:FindPTZPositionResult", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindPTZPositionResult::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindPTZPositionResult(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindPTZPositionResult * SOAP_FMAC4 soap_get_tt__FindPTZPositionResult(struct soap *soap, tt__FindPTZPositionResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindPTZPositionResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindPTZPositionResult * SOAP_FMAC2 soap_instantiate_tt__FindPTZPositionResult(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindPTZPositionResult(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindPTZPositionResult, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindPTZPositionResult);
		if (size)
			*size = sizeof(tt__FindPTZPositionResult);
		((tt__FindPTZPositionResult*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindPTZPositionResult, n);
		if (size)
			*size = n * sizeof(tt__FindPTZPositionResult);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindPTZPositionResult*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindPTZPositionResult*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindPTZPositionResult(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindPTZPositionResult %p -> %p\n", q, p));
	*(tt__FindPTZPositionResult*)p = *(tt__FindPTZPositionResult*)q;
}

void tt__FindPTZPositionResultList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SearchState(soap, &this->tt__FindPTZPositionResultList::SearchState);
	this->tt__FindPTZPositionResultList::__sizeResult = 0;
	this->tt__FindPTZPositionResultList::Result = NULL;
}

void tt__FindPTZPositionResultList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FindPTZPositionResultList::Result)
	{	int i;
		for (i = 0; i < this->tt__FindPTZPositionResultList::__sizeResult; i++)
		{
			soap_serialize_PointerTott__FindPTZPositionResult(soap, this->tt__FindPTZPositionResultList::Result + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindPTZPositionResultList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindPTZPositionResultList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindPTZPositionResultList(struct soap *soap, const char *tag, int id, const tt__FindPTZPositionResultList *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindPTZPositionResultList), "tt:FindPTZPositionResultList"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &(a->tt__FindPTZPositionResultList::SearchState), ""))
		return soap->error;
	if (a->tt__FindPTZPositionResultList::Result)
	{	int i;
		for (i = 0; i < a->tt__FindPTZPositionResultList::__sizeResult; i++)
			if (soap_out_PointerTott__FindPTZPositionResult(soap, "tt:Result", -1, a->tt__FindPTZPositionResultList::Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindPTZPositionResultList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindPTZPositionResultList(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindPTZPositionResultList * SOAP_FMAC4 soap_in_tt__FindPTZPositionResultList(struct soap *soap, const char *tag, tt__FindPTZPositionResultList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindPTZPositionResultList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindPTZPositionResultList, sizeof(tt__FindPTZPositionResultList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindPTZPositionResultList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindPTZPositionResultList *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SearchState1 = 1;
	struct soap_blist *soap_blist_Result1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SearchState1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &(a->tt__FindPTZPositionResultList::SearchState), "tt:SearchState"))
				{	soap_flag_SearchState1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->tt__FindPTZPositionResultList::Result == NULL)
				{	if (soap_blist_Result1 == NULL)
						soap_blist_Result1 = soap_new_block(soap);
					a->tt__FindPTZPositionResultList::Result = (tt__FindPTZPositionResult **)soap_push_block(soap, soap_blist_Result1, sizeof(tt__FindPTZPositionResult *));
					if (a->tt__FindPTZPositionResultList::Result == NULL)
						return NULL;
					*a->tt__FindPTZPositionResultList::Result = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__FindPTZPositionResult(soap, "tt:Result", a->tt__FindPTZPositionResultList::Result, "tt:FindPTZPositionResult"))
				{	a->tt__FindPTZPositionResultList::__sizeResult++;
					a->tt__FindPTZPositionResultList::Result = NULL;
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
		if (a->tt__FindPTZPositionResultList::Result)
			soap_pop_block(soap, soap_blist_Result1);
		if (a->tt__FindPTZPositionResultList::__sizeResult)
			a->tt__FindPTZPositionResultList::Result = (tt__FindPTZPositionResult **)soap_save_block(soap, soap_blist_Result1, NULL, 1);
		else
		{	a->tt__FindPTZPositionResultList::Result = NULL;
			if (soap_blist_Result1)
				soap_end_block(soap, soap_blist_Result1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindPTZPositionResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindPTZPositionResultList, 0, sizeof(tt__FindPTZPositionResultList), 0, soap_copy_tt__FindPTZPositionResultList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindPTZPositionResultList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindPTZPositionResultList);
	if (this->soap_out(soap, tag?tag:"tt:FindPTZPositionResultList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindPTZPositionResultList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindPTZPositionResultList(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindPTZPositionResultList * SOAP_FMAC4 soap_get_tt__FindPTZPositionResultList(struct soap *soap, tt__FindPTZPositionResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindPTZPositionResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindPTZPositionResultList * SOAP_FMAC2 soap_instantiate_tt__FindPTZPositionResultList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindPTZPositionResultList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindPTZPositionResultList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindPTZPositionResultList);
		if (size)
			*size = sizeof(tt__FindPTZPositionResultList);
		((tt__FindPTZPositionResultList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindPTZPositionResultList, n);
		if (size)
			*size = n * sizeof(tt__FindPTZPositionResultList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindPTZPositionResultList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindPTZPositionResultList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindPTZPositionResultList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindPTZPositionResultList %p -> %p\n", q, p));
	*(tt__FindPTZPositionResultList*)p = *(tt__FindPTZPositionResultList*)q;
}

void tt__FindEventResult::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__RecordingReference(soap, &this->tt__FindEventResult::RecordingToken);
	soap_default_tt__TrackReference(soap, &this->tt__FindEventResult::TrackToken);
	soap_default_time(soap, &this->tt__FindEventResult::Time);
	this->tt__FindEventResult::Event = NULL;
	soap_default_bool(soap, &this->tt__FindEventResult::StartStateEvent);
	this->tt__FindEventResult::__size = 0;
	this->tt__FindEventResult::__any = NULL;
	this->tt__FindEventResult::__anyAttribute = NULL;
}

void tt__FindEventResult::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &this->tt__FindEventResult::RecordingToken);
	soap_serialize_tt__TrackReference(soap, &this->tt__FindEventResult::TrackToken);
	soap_embedded(soap, &this->tt__FindEventResult::Time, SOAP_TYPE_time);
	soap_serialize_PointerTowsnt__NotificationMessageHolderType(soap, &this->tt__FindEventResult::Event);
	soap_embedded(soap, &this->tt__FindEventResult::StartStateEvent, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindEventResult::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindEventResult(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindEventResult(struct soap *soap, const char *tag, int id, const tt__FindEventResult *a, const char *type)
{
	if (((tt__FindEventResult*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__FindEventResult*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindEventResult), "tt:FindEventResult"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FindEventResult::RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->tt__FindEventResult::RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->tt__FindEventResult::TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->tt__FindEventResult::TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &(a->tt__FindEventResult::Time), ""))
		return soap->error;
	if (a->tt__FindEventResult::Event)
	{	if (soap_out_PointerTowsnt__NotificationMessageHolderType(soap, "tt:Event", -1, &a->tt__FindEventResult::Event, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Event"))
		return soap->error;
	if (soap_out_bool(soap, "tt:StartStateEvent", -1, &(a->tt__FindEventResult::StartStateEvent), ""))
		return soap->error;
	if (a->tt__FindEventResult::__any)
	{	int i;
		for (i = 0; i < a->tt__FindEventResult::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FindEventResult::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindEventResult::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindEventResult(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindEventResult * SOAP_FMAC4 soap_in_tt__FindEventResult(struct soap *soap, const char *tag, tt__FindEventResult *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindEventResult *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindEventResult, sizeof(tt__FindEventResult), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindEventResult)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindEventResult *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__FindEventResult*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RecordingToken1 = 1;
	size_t soap_flag_TrackToken1 = 1;
	size_t soap_flag_Time1 = 1;
	size_t soap_flag_Event1 = 1;
	size_t soap_flag_StartStateEvent1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RecordingToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &(a->tt__FindEventResult::RecordingToken), "tt:RecordingReference"))
				{	soap_flag_RecordingToken1--;
					continue;
				}
			if (soap_flag_TrackToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &(a->tt__FindEventResult::TrackToken), "tt:TrackReference"))
				{	soap_flag_TrackToken1--;
					continue;
				}
			if (soap_flag_Time1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &(a->tt__FindEventResult::Time), "xsd:dateTime"))
				{	soap_flag_Time1--;
					continue;
				}
			if (soap_flag_Event1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__NotificationMessageHolderType(soap, "tt:Event", &(a->tt__FindEventResult::Event), "wsnt:NotificationMessageHolderType"))
				{	soap_flag_Event1--;
					continue;
				}
			if (soap_flag_StartStateEvent1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:StartStateEvent", &(a->tt__FindEventResult::StartStateEvent), "xsd:boolean"))
				{	soap_flag_StartStateEvent1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FindEventResult::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FindEventResult::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FindEventResult::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FindEventResult::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FindEventResult::__any, "xsd:byte"))
				{	a->tt__FindEventResult::__size++;
					a->tt__FindEventResult::__any = NULL;
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
		if (a->tt__FindEventResult::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FindEventResult::__size)
			a->tt__FindEventResult::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FindEventResult::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindEventResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindEventResult, 0, sizeof(tt__FindEventResult), 0, soap_copy_tt__FindEventResult);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken1 > 0 || soap_flag_TrackToken1 > 0 || soap_flag_Time1 > 0 || soap_flag_Event1 > 0 || soap_flag_StartStateEvent1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindEventResult::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindEventResult);
	if (this->soap_out(soap, tag?tag:"tt:FindEventResult", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindEventResult::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindEventResult(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindEventResult * SOAP_FMAC4 soap_get_tt__FindEventResult(struct soap *soap, tt__FindEventResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindEventResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindEventResult * SOAP_FMAC2 soap_instantiate_tt__FindEventResult(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindEventResult(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindEventResult, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindEventResult);
		if (size)
			*size = sizeof(tt__FindEventResult);
		((tt__FindEventResult*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindEventResult, n);
		if (size)
			*size = n * sizeof(tt__FindEventResult);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindEventResult*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindEventResult*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindEventResult(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindEventResult %p -> %p\n", q, p));
	*(tt__FindEventResult*)p = *(tt__FindEventResult*)q;
}

void tt__FindEventResultList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SearchState(soap, &this->tt__FindEventResultList::SearchState);
	this->tt__FindEventResultList::__sizeResult = 0;
	this->tt__FindEventResultList::Result = NULL;
}

void tt__FindEventResultList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FindEventResultList::Result)
	{	int i;
		for (i = 0; i < this->tt__FindEventResultList::__sizeResult; i++)
		{
			soap_serialize_PointerTott__FindEventResult(soap, this->tt__FindEventResultList::Result + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindEventResultList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindEventResultList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindEventResultList(struct soap *soap, const char *tag, int id, const tt__FindEventResultList *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindEventResultList), "tt:FindEventResultList"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &(a->tt__FindEventResultList::SearchState), ""))
		return soap->error;
	if (a->tt__FindEventResultList::Result)
	{	int i;
		for (i = 0; i < a->tt__FindEventResultList::__sizeResult; i++)
			if (soap_out_PointerTott__FindEventResult(soap, "tt:Result", -1, a->tt__FindEventResultList::Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindEventResultList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindEventResultList(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindEventResultList * SOAP_FMAC4 soap_in_tt__FindEventResultList(struct soap *soap, const char *tag, tt__FindEventResultList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindEventResultList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindEventResultList, sizeof(tt__FindEventResultList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindEventResultList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindEventResultList *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SearchState1 = 1;
	struct soap_blist *soap_blist_Result1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SearchState1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &(a->tt__FindEventResultList::SearchState), "tt:SearchState"))
				{	soap_flag_SearchState1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->tt__FindEventResultList::Result == NULL)
				{	if (soap_blist_Result1 == NULL)
						soap_blist_Result1 = soap_new_block(soap);
					a->tt__FindEventResultList::Result = (tt__FindEventResult **)soap_push_block(soap, soap_blist_Result1, sizeof(tt__FindEventResult *));
					if (a->tt__FindEventResultList::Result == NULL)
						return NULL;
					*a->tt__FindEventResultList::Result = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__FindEventResult(soap, "tt:Result", a->tt__FindEventResultList::Result, "tt:FindEventResult"))
				{	a->tt__FindEventResultList::__sizeResult++;
					a->tt__FindEventResultList::Result = NULL;
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
		if (a->tt__FindEventResultList::Result)
			soap_pop_block(soap, soap_blist_Result1);
		if (a->tt__FindEventResultList::__sizeResult)
			a->tt__FindEventResultList::Result = (tt__FindEventResult **)soap_save_block(soap, soap_blist_Result1, NULL, 1);
		else
		{	a->tt__FindEventResultList::Result = NULL;
			if (soap_blist_Result1)
				soap_end_block(soap, soap_blist_Result1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindEventResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindEventResultList, 0, sizeof(tt__FindEventResultList), 0, soap_copy_tt__FindEventResultList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindEventResultList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindEventResultList);
	if (this->soap_out(soap, tag?tag:"tt:FindEventResultList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindEventResultList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindEventResultList(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindEventResultList * SOAP_FMAC4 soap_get_tt__FindEventResultList(struct soap *soap, tt__FindEventResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindEventResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindEventResultList * SOAP_FMAC2 soap_instantiate_tt__FindEventResultList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindEventResultList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindEventResultList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindEventResultList);
		if (size)
			*size = sizeof(tt__FindEventResultList);
		((tt__FindEventResultList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindEventResultList, n);
		if (size)
			*size = n * sizeof(tt__FindEventResultList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindEventResultList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindEventResultList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindEventResultList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindEventResultList %p -> %p\n", q, p));
	*(tt__FindEventResultList*)p = *(tt__FindEventResultList*)q;
}

void tt__FindRecordingResultList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__SearchState(soap, &this->tt__FindRecordingResultList::SearchState);
	this->tt__FindRecordingResultList::__sizeRecordingInformation = 0;
	this->tt__FindRecordingResultList::RecordingInformation = NULL;
}

void tt__FindRecordingResultList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FindRecordingResultList::RecordingInformation)
	{	int i;
		for (i = 0; i < this->tt__FindRecordingResultList::__sizeRecordingInformation; i++)
		{
			soap_serialize_PointerTott__RecordingInformation(soap, this->tt__FindRecordingResultList::RecordingInformation + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FindRecordingResultList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FindRecordingResultList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindRecordingResultList(struct soap *soap, const char *tag, int id, const tt__FindRecordingResultList *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindRecordingResultList), "tt:FindRecordingResultList"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &(a->tt__FindRecordingResultList::SearchState), ""))
		return soap->error;
	if (a->tt__FindRecordingResultList::RecordingInformation)
	{	int i;
		for (i = 0; i < a->tt__FindRecordingResultList::__sizeRecordingInformation; i++)
			if (soap_out_PointerTott__RecordingInformation(soap, "tt:RecordingInformation", -1, a->tt__FindRecordingResultList::RecordingInformation + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FindRecordingResultList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FindRecordingResultList(soap, tag, this, type);
}

SOAP_FMAC3 tt__FindRecordingResultList * SOAP_FMAC4 soap_in_tt__FindRecordingResultList(struct soap *soap, const char *tag, tt__FindRecordingResultList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FindRecordingResultList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindRecordingResultList, sizeof(tt__FindRecordingResultList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FindRecordingResultList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FindRecordingResultList *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SearchState1 = 1;
	struct soap_blist *soap_blist_RecordingInformation1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SearchState1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &(a->tt__FindRecordingResultList::SearchState), "tt:SearchState"))
				{	soap_flag_SearchState1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RecordingInformation", 1, NULL))
			{	if (a->tt__FindRecordingResultList::RecordingInformation == NULL)
				{	if (soap_blist_RecordingInformation1 == NULL)
						soap_blist_RecordingInformation1 = soap_new_block(soap);
					a->tt__FindRecordingResultList::RecordingInformation = (tt__RecordingInformation **)soap_push_block(soap, soap_blist_RecordingInformation1, sizeof(tt__RecordingInformation *));
					if (a->tt__FindRecordingResultList::RecordingInformation == NULL)
						return NULL;
					*a->tt__FindRecordingResultList::RecordingInformation = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__RecordingInformation(soap, "tt:RecordingInformation", a->tt__FindRecordingResultList::RecordingInformation, "tt:RecordingInformation"))
				{	a->tt__FindRecordingResultList::__sizeRecordingInformation++;
					a->tt__FindRecordingResultList::RecordingInformation = NULL;
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
		if (a->tt__FindRecordingResultList::RecordingInformation)
			soap_pop_block(soap, soap_blist_RecordingInformation1);
		if (a->tt__FindRecordingResultList::__sizeRecordingInformation)
			a->tt__FindRecordingResultList::RecordingInformation = (tt__RecordingInformation **)soap_save_block(soap, soap_blist_RecordingInformation1, NULL, 1);
		else
		{	a->tt__FindRecordingResultList::RecordingInformation = NULL;
			if (soap_blist_RecordingInformation1)
				soap_end_block(soap, soap_blist_RecordingInformation1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FindRecordingResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindRecordingResultList, 0, sizeof(tt__FindRecordingResultList), 0, soap_copy_tt__FindRecordingResultList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__FindRecordingResultList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FindRecordingResultList);
	if (this->soap_out(soap, tag?tag:"tt:FindRecordingResultList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FindRecordingResultList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FindRecordingResultList(soap, this, tag, type);
}

SOAP_FMAC3 tt__FindRecordingResultList * SOAP_FMAC4 soap_get_tt__FindRecordingResultList(struct soap *soap, tt__FindRecordingResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindRecordingResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FindRecordingResultList * SOAP_FMAC2 soap_instantiate_tt__FindRecordingResultList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FindRecordingResultList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FindRecordingResultList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FindRecordingResultList);
		if (size)
			*size = sizeof(tt__FindRecordingResultList);
		((tt__FindRecordingResultList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FindRecordingResultList, n);
		if (size)
			*size = n * sizeof(tt__FindRecordingResultList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FindRecordingResultList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FindRecordingResultList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FindRecordingResultList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FindRecordingResultList %p -> %p\n", q, p));
	*(tt__FindRecordingResultList*)p = *(tt__FindRecordingResultList*)q;
}

void tt__MetadataFilter::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__XPathExpression(soap, &this->tt__MetadataFilter::MetadataStreamFilter);
	this->tt__MetadataFilter::__size = 0;
	this->tt__MetadataFilter::__any = NULL;
	this->tt__MetadataFilter::__anyAttribute = NULL;
}

void tt__MetadataFilter::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__XPathExpression(soap, &this->tt__MetadataFilter::MetadataStreamFilter);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataFilter::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataFilter(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataFilter(struct soap *soap, const char *tag, int id, const tt__MetadataFilter *a, const char *type)
{
	if (((tt__MetadataFilter*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataFilter*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataFilter), "tt:MetadataFilter"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataFilter::MetadataStreamFilter)
	{	if (soap_out_tt__XPathExpression(soap, "tt:MetadataStreamFilter", -1, &a->tt__MetadataFilter::MetadataStreamFilter, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MetadataStreamFilter"))
		return soap->error;
	if (a->tt__MetadataFilter::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataFilter::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataFilter::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataFilter::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataFilter(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataFilter * SOAP_FMAC4 soap_in_tt__MetadataFilter(struct soap *soap, const char *tag, tt__MetadataFilter *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataFilter *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataFilter, sizeof(tt__MetadataFilter), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataFilter)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataFilter *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataFilter*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_MetadataStreamFilter1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MetadataStreamFilter1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__XPathExpression(soap, "tt:MetadataStreamFilter", &(a->tt__MetadataFilter::MetadataStreamFilter), "tt:XPathExpression"))
				{	soap_flag_MetadataStreamFilter1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MetadataFilter::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataFilter::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataFilter::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataFilter::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataFilter::__any, "xsd:byte"))
				{	a->tt__MetadataFilter::__size++;
					a->tt__MetadataFilter::__any = NULL;
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
		if (a->tt__MetadataFilter::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataFilter::__size)
			a->tt__MetadataFilter::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataFilter::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataFilter, 0, sizeof(tt__MetadataFilter), 0, soap_copy_tt__MetadataFilter);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MetadataStreamFilter1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MetadataFilter::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataFilter);
	if (this->soap_out(soap, tag?tag:"tt:MetadataFilter", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataFilter::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataFilter(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataFilter * SOAP_FMAC4 soap_get_tt__MetadataFilter(struct soap *soap, tt__MetadataFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataFilter * SOAP_FMAC2 soap_instantiate_tt__MetadataFilter(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataFilter(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataFilter, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataFilter);
		if (size)
			*size = sizeof(tt__MetadataFilter);
		((tt__MetadataFilter*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataFilter, n);
		if (size)
			*size = n * sizeof(tt__MetadataFilter);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataFilter*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataFilter*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataFilter(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataFilter %p -> %p\n", q, p));
	*(tt__MetadataFilter*)p = *(tt__MetadataFilter*)q;
}

void tt__PTZPositionFilter::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZPositionFilter::MinPosition = NULL;
	this->tt__PTZPositionFilter::MaxPosition = NULL;
	soap_default_bool(soap, &this->tt__PTZPositionFilter::EnterOrExit);
	this->tt__PTZPositionFilter::__size = 0;
	this->tt__PTZPositionFilter::__any = NULL;
	this->tt__PTZPositionFilter::__anyAttribute = NULL;
}

void tt__PTZPositionFilter::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZVector(soap, &this->tt__PTZPositionFilter::MinPosition);
	soap_serialize_PointerTott__PTZVector(soap, &this->tt__PTZPositionFilter::MaxPosition);
	soap_embedded(soap, &this->tt__PTZPositionFilter::EnterOrExit, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZPositionFilter::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZPositionFilter(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPositionFilter(struct soap *soap, const char *tag, int id, const tt__PTZPositionFilter *a, const char *type)
{
	if (((tt__PTZPositionFilter*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZPositionFilter*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPositionFilter), "tt:PTZPositionFilter"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZPositionFilter::MinPosition)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:MinPosition", -1, &a->tt__PTZPositionFilter::MinPosition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinPosition"))
		return soap->error;
	if (a->tt__PTZPositionFilter::MaxPosition)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:MaxPosition", -1, &a->tt__PTZPositionFilter::MaxPosition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxPosition"))
		return soap->error;
	if (soap_out_bool(soap, "tt:EnterOrExit", -1, &(a->tt__PTZPositionFilter::EnterOrExit), ""))
		return soap->error;
	if (a->tt__PTZPositionFilter::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZPositionFilter::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZPositionFilter::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZPositionFilter::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZPositionFilter(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZPositionFilter * SOAP_FMAC4 soap_in_tt__PTZPositionFilter(struct soap *soap, const char *tag, tt__PTZPositionFilter *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZPositionFilter *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPositionFilter, sizeof(tt__PTZPositionFilter), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZPositionFilter)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZPositionFilter *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZPositionFilter*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_MinPosition1 = 1;
	size_t soap_flag_MaxPosition1 = 1;
	size_t soap_flag_EnterOrExit1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MinPosition1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:MinPosition", &(a->tt__PTZPositionFilter::MinPosition), "tt:PTZVector"))
				{	soap_flag_MinPosition1--;
					continue;
				}
			if (soap_flag_MaxPosition1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:MaxPosition", &(a->tt__PTZPositionFilter::MaxPosition), "tt:PTZVector"))
				{	soap_flag_MaxPosition1--;
					continue;
				}
			if (soap_flag_EnterOrExit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:EnterOrExit", &(a->tt__PTZPositionFilter::EnterOrExit), "xsd:boolean"))
				{	soap_flag_EnterOrExit1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZPositionFilter::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZPositionFilter::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZPositionFilter::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZPositionFilter::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZPositionFilter::__any, "xsd:byte"))
				{	a->tt__PTZPositionFilter::__size++;
					a->tt__PTZPositionFilter::__any = NULL;
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
		if (a->tt__PTZPositionFilter::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZPositionFilter::__size)
			a->tt__PTZPositionFilter::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZPositionFilter::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZPositionFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPositionFilter, 0, sizeof(tt__PTZPositionFilter), 0, soap_copy_tt__PTZPositionFilter);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MinPosition1 > 0 || soap_flag_MaxPosition1 > 0 || soap_flag_EnterOrExit1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZPositionFilter::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZPositionFilter);
	if (this->soap_out(soap, tag?tag:"tt:PTZPositionFilter", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZPositionFilter::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZPositionFilter(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZPositionFilter * SOAP_FMAC4 soap_get_tt__PTZPositionFilter(struct soap *soap, tt__PTZPositionFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPositionFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZPositionFilter * SOAP_FMAC2 soap_instantiate_tt__PTZPositionFilter(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZPositionFilter(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZPositionFilter, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZPositionFilter);
		if (size)
			*size = sizeof(tt__PTZPositionFilter);
		((tt__PTZPositionFilter*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZPositionFilter, n);
		if (size)
			*size = n * sizeof(tt__PTZPositionFilter);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZPositionFilter*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZPositionFilter*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZPositionFilter(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZPositionFilter %p -> %p\n", q, p));
	*(tt__PTZPositionFilter*)p = *(tt__PTZPositionFilter*)q;
}

void tt__EventFilter::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsnt__FilterType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__EventFilter::__anyAttribute = NULL;
}

void tt__EventFilter::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsnt__FilterType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EventFilter::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EventFilter(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventFilter(struct soap *soap, const char *tag, int id, const tt__EventFilter *a, const char *type)
{
	if (((tt__EventFilter*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EventFilter*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventFilter), "tt:EventFilter"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsnt__FilterType::__any)
	{	int i;
		for (i = 0; i < a->wsnt__FilterType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsnt__FilterType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EventFilter::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EventFilter(soap, tag, this, type);
}

SOAP_FMAC3 tt__EventFilter * SOAP_FMAC4 soap_in_tt__EventFilter(struct soap *soap, const char *tag, tt__EventFilter *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EventFilter *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventFilter, sizeof(tt__EventFilter), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EventFilter)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EventFilter *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EventFilter*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsnt__FilterType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsnt__FilterType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsnt__FilterType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsnt__FilterType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsnt__FilterType::__any, "xsd:byte"))
				{	a->wsnt__FilterType::__size++;
					a->wsnt__FilterType::__any = NULL;
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
		if (a->wsnt__FilterType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsnt__FilterType::__size)
			a->wsnt__FilterType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsnt__FilterType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EventFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventFilter, 0, sizeof(tt__EventFilter), 0, soap_copy_tt__EventFilter);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EventFilter::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EventFilter);
	if (this->soap_out(soap, tag?tag:"tt:EventFilter", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EventFilter::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EventFilter(soap, this, tag, type);
}

SOAP_FMAC3 tt__EventFilter * SOAP_FMAC4 soap_get_tt__EventFilter(struct soap *soap, tt__EventFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EventFilter * SOAP_FMAC2 soap_instantiate_tt__EventFilter(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EventFilter(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EventFilter, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EventFilter);
		if (size)
			*size = sizeof(tt__EventFilter);
		((tt__EventFilter*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EventFilter, n);
		if (size)
			*size = n * sizeof(tt__EventFilter);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EventFilter*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EventFilter*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EventFilter(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EventFilter %p -> %p\n", q, p));
	*(tt__EventFilter*)p = *(tt__EventFilter*)q;
}

void tt__SearchScopeExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SearchScopeExtension::__size = 0;
	this->tt__SearchScopeExtension::__any = NULL;
}

void tt__SearchScopeExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SearchScopeExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SearchScopeExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchScopeExtension(struct soap *soap, const char *tag, int id, const tt__SearchScopeExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchScopeExtension), "tt:SearchScopeExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SearchScopeExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SearchScopeExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SearchScopeExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SearchScopeExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SearchScopeExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SearchScopeExtension * SOAP_FMAC4 soap_in_tt__SearchScopeExtension(struct soap *soap, const char *tag, tt__SearchScopeExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SearchScopeExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchScopeExtension, sizeof(tt__SearchScopeExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SearchScopeExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SearchScopeExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__SearchScopeExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SearchScopeExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SearchScopeExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SearchScopeExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SearchScopeExtension::__any, "xsd:byte"))
				{	a->tt__SearchScopeExtension::__size++;
					a->tt__SearchScopeExtension::__any = NULL;
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
		if (a->tt__SearchScopeExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SearchScopeExtension::__size)
			a->tt__SearchScopeExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SearchScopeExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SearchScopeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchScopeExtension, 0, sizeof(tt__SearchScopeExtension), 0, soap_copy_tt__SearchScopeExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SearchScopeExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SearchScopeExtension);
	if (this->soap_out(soap, tag?tag:"tt:SearchScopeExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SearchScopeExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SearchScopeExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SearchScopeExtension * SOAP_FMAC4 soap_get_tt__SearchScopeExtension(struct soap *soap, tt__SearchScopeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchScopeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SearchScopeExtension * SOAP_FMAC2 soap_instantiate_tt__SearchScopeExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SearchScopeExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SearchScopeExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SearchScopeExtension);
		if (size)
			*size = sizeof(tt__SearchScopeExtension);
		((tt__SearchScopeExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SearchScopeExtension, n);
		if (size)
			*size = n * sizeof(tt__SearchScopeExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SearchScopeExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SearchScopeExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SearchScopeExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SearchScopeExtension %p -> %p\n", q, p));
	*(tt__SearchScopeExtension*)p = *(tt__SearchScopeExtension*)q;
}

void tt__SearchScope::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SearchScope::__sizeIncludedSources = 0;
	this->tt__SearchScope::IncludedSources = NULL;
	this->tt__SearchScope::__sizeIncludedRecordings = 0;
	this->tt__SearchScope::IncludedRecordings = NULL;
	soap_default_tt__XPathExpression(soap, &this->tt__SearchScope::RecordingInformationFilter);
	this->tt__SearchScope::Extension = NULL;
	this->tt__SearchScope::__anyAttribute = NULL;
}

void tt__SearchScope::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__SearchScope::IncludedSources)
	{	int i;
		for (i = 0; i < this->tt__SearchScope::__sizeIncludedSources; i++)
		{
			soap_serialize_PointerTott__SourceReference(soap, this->tt__SearchScope::IncludedSources + i);
		}
	}
	if (this->tt__SearchScope::IncludedRecordings)
	{	int i;
		for (i = 0; i < this->tt__SearchScope::__sizeIncludedRecordings; i++)
		{
			soap_serialize_tt__RecordingReference(soap, this->tt__SearchScope::IncludedRecordings + i);
		}
	}
	soap_serialize_tt__XPathExpression(soap, &this->tt__SearchScope::RecordingInformationFilter);
	soap_serialize_PointerTott__SearchScopeExtension(soap, &this->tt__SearchScope::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SearchScope::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SearchScope(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchScope(struct soap *soap, const char *tag, int id, const tt__SearchScope *a, const char *type)
{
	if (((tt__SearchScope*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SearchScope*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchScope), "tt:SearchScope"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SearchScope::IncludedSources)
	{	int i;
		for (i = 0; i < a->tt__SearchScope::__sizeIncludedSources; i++)
			if (soap_out_PointerTott__SourceReference(soap, "tt:IncludedSources", -1, a->tt__SearchScope::IncludedSources + i, ""))
				return soap->error;
	}
	if (a->tt__SearchScope::IncludedRecordings)
	{	int i;
		for (i = 0; i < a->tt__SearchScope::__sizeIncludedRecordings; i++)
			if (soap_out_tt__RecordingReference(soap, "tt:IncludedRecordings", -1, a->tt__SearchScope::IncludedRecordings + i, ""))
				return soap->error;
	}
	if (soap_out_tt__XPathExpression(soap, "tt:RecordingInformationFilter", -1, &(a->tt__SearchScope::RecordingInformationFilter), ""))
		return soap->error;
	if (soap_out_PointerTott__SearchScopeExtension(soap, "tt:Extension", -1, &(a->tt__SearchScope::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SearchScope::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SearchScope(soap, tag, this, type);
}

SOAP_FMAC3 tt__SearchScope * SOAP_FMAC4 soap_in_tt__SearchScope(struct soap *soap, const char *tag, tt__SearchScope *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SearchScope *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchScope, sizeof(tt__SearchScope), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SearchScope)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SearchScope *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SearchScope*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_IncludedSources1 = NULL;
	struct soap_blist *soap_blist_IncludedRecordings1 = NULL;
	size_t soap_flag_RecordingInformationFilter1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IncludedSources", 1, NULL))
			{	if (a->tt__SearchScope::IncludedSources == NULL)
				{	if (soap_blist_IncludedSources1 == NULL)
						soap_blist_IncludedSources1 = soap_new_block(soap);
					a->tt__SearchScope::IncludedSources = (tt__SourceReference **)soap_push_block(soap, soap_blist_IncludedSources1, sizeof(tt__SourceReference *));
					if (a->tt__SearchScope::IncludedSources == NULL)
						return NULL;
					*a->tt__SearchScope::IncludedSources = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__SourceReference(soap, "tt:IncludedSources", a->tt__SearchScope::IncludedSources, "tt:SourceReference"))
				{	a->tt__SearchScope::__sizeIncludedSources++;
					a->tt__SearchScope::IncludedSources = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IncludedRecordings", 1, NULL))
			{	if (a->tt__SearchScope::IncludedRecordings == NULL)
				{	if (soap_blist_IncludedRecordings1 == NULL)
						soap_blist_IncludedRecordings1 = soap_new_block(soap);
					a->tt__SearchScope::IncludedRecordings = (char **)soap_push_block(soap, soap_blist_IncludedRecordings1, sizeof(char *));
					if (a->tt__SearchScope::IncludedRecordings == NULL)
						return NULL;
					*a->tt__SearchScope::IncludedRecordings = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingReference(soap, "tt:IncludedRecordings", a->tt__SearchScope::IncludedRecordings, "tt:RecordingReference"))
				{	a->tt__SearchScope::__sizeIncludedRecordings++;
					a->tt__SearchScope::IncludedRecordings = NULL;
					continue;
				}
			}
			if (soap_flag_RecordingInformationFilter1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__XPathExpression(soap, "tt:RecordingInformationFilter", &(a->tt__SearchScope::RecordingInformationFilter), "tt:XPathExpression"))
				{	soap_flag_RecordingInformationFilter1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SearchScopeExtension(soap, "tt:Extension", &(a->tt__SearchScope::Extension), "tt:SearchScopeExtension"))
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
		if (a->tt__SearchScope::IncludedSources)
			soap_pop_block(soap, soap_blist_IncludedSources1);
		if (a->tt__SearchScope::__sizeIncludedSources)
			a->tt__SearchScope::IncludedSources = (tt__SourceReference **)soap_save_block(soap, soap_blist_IncludedSources1, NULL, 1);
		else
		{	a->tt__SearchScope::IncludedSources = NULL;
			if (soap_blist_IncludedSources1)
				soap_end_block(soap, soap_blist_IncludedSources1);
		}
		if (a->tt__SearchScope::IncludedRecordings)
			soap_pop_block(soap, soap_blist_IncludedRecordings1);
		if (a->tt__SearchScope::__sizeIncludedRecordings)
			a->tt__SearchScope::IncludedRecordings = (char **)soap_save_block(soap, soap_blist_IncludedRecordings1, NULL, 1);
		else
		{	a->tt__SearchScope::IncludedRecordings = NULL;
			if (soap_blist_IncludedRecordings1)
				soap_end_block(soap, soap_blist_IncludedRecordings1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SearchScope *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchScope, 0, sizeof(tt__SearchScope), 0, soap_copy_tt__SearchScope);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SearchScope::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SearchScope);
	if (this->soap_out(soap, tag?tag:"tt:SearchScope", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SearchScope::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SearchScope(soap, this, tag, type);
}

SOAP_FMAC3 tt__SearchScope * SOAP_FMAC4 soap_get_tt__SearchScope(struct soap *soap, tt__SearchScope *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchScope(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SearchScope * SOAP_FMAC2 soap_instantiate_tt__SearchScope(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SearchScope(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SearchScope, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SearchScope);
		if (size)
			*size = sizeof(tt__SearchScope);
		((tt__SearchScope*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SearchScope, n);
		if (size)
			*size = n * sizeof(tt__SearchScope);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SearchScope*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SearchScope*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SearchScope(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SearchScope %p -> %p\n", q, p));
	*(tt__SearchScope*)p = *(tt__SearchScope*)q;
}

void tt__RecordingSummary::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_time(soap, &this->tt__RecordingSummary::DataFrom);
	soap_default_time(soap, &this->tt__RecordingSummary::DataUntil);
	soap_default_int(soap, &this->tt__RecordingSummary::NumberRecordings);
	this->tt__RecordingSummary::__size = 0;
	this->tt__RecordingSummary::__any = NULL;
	this->tt__RecordingSummary::__anyAttribute = NULL;
}

void tt__RecordingSummary::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__RecordingSummary::DataFrom, SOAP_TYPE_time);
	soap_embedded(soap, &this->tt__RecordingSummary::DataUntil, SOAP_TYPE_time);
	soap_embedded(soap, &this->tt__RecordingSummary::NumberRecordings, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingSummary::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingSummary(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingSummary(struct soap *soap, const char *tag, int id, const tt__RecordingSummary *a, const char *type)
{
	if (((tt__RecordingSummary*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingSummary*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingSummary), "tt:RecordingSummary"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_time(soap, "tt:DataFrom", -1, &(a->tt__RecordingSummary::DataFrom), ""))
		return soap->error;
	if (soap_out_time(soap, "tt:DataUntil", -1, &(a->tt__RecordingSummary::DataUntil), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:NumberRecordings", -1, &(a->tt__RecordingSummary::NumberRecordings), ""))
		return soap->error;
	if (a->tt__RecordingSummary::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingSummary::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingSummary::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingSummary::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingSummary(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingSummary * SOAP_FMAC4 soap_in_tt__RecordingSummary(struct soap *soap, const char *tag, tt__RecordingSummary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingSummary *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingSummary, sizeof(tt__RecordingSummary), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingSummary)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingSummary *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingSummary*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_DataFrom1 = 1;
	size_t soap_flag_DataUntil1 = 1;
	size_t soap_flag_NumberRecordings1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_DataFrom1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataFrom", &(a->tt__RecordingSummary::DataFrom), "xsd:dateTime"))
				{	soap_flag_DataFrom1--;
					continue;
				}
			if (soap_flag_DataUntil1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataUntil", &(a->tt__RecordingSummary::DataUntil), "xsd:dateTime"))
				{	soap_flag_DataUntil1--;
					continue;
				}
			if (soap_flag_NumberRecordings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:NumberRecordings", &(a->tt__RecordingSummary::NumberRecordings), "xsd:int"))
				{	soap_flag_NumberRecordings1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingSummary::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingSummary::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingSummary::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingSummary::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingSummary::__any, "xsd:byte"))
				{	a->tt__RecordingSummary::__size++;
					a->tt__RecordingSummary::__any = NULL;
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
		if (a->tt__RecordingSummary::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingSummary::__size)
			a->tt__RecordingSummary::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingSummary::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingSummary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingSummary, 0, sizeof(tt__RecordingSummary), 0, soap_copy_tt__RecordingSummary);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DataFrom1 > 0 || soap_flag_DataUntil1 > 0 || soap_flag_NumberRecordings1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingSummary::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingSummary);
	if (this->soap_out(soap, tag?tag:"tt:RecordingSummary", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingSummary::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingSummary(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingSummary * SOAP_FMAC4 soap_get_tt__RecordingSummary(struct soap *soap, tt__RecordingSummary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingSummary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingSummary * SOAP_FMAC2 soap_instantiate_tt__RecordingSummary(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingSummary(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingSummary, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingSummary);
		if (size)
			*size = sizeof(tt__RecordingSummary);
		((tt__RecordingSummary*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingSummary, n);
		if (size)
			*size = n * sizeof(tt__RecordingSummary);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingSummary*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingSummary*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingSummary(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingSummary %p -> %p\n", q, p));
	*(tt__RecordingSummary*)p = *(tt__RecordingSummary*)q;
}

void tt__DateTimeRange::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_time(soap, &this->tt__DateTimeRange::From);
	soap_default_time(soap, &this->tt__DateTimeRange::Until);
	this->tt__DateTimeRange::__size = 0;
	this->tt__DateTimeRange::__any = NULL;
	this->tt__DateTimeRange::__anyAttribute = NULL;
}

void tt__DateTimeRange::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__DateTimeRange::From, SOAP_TYPE_time);
	soap_embedded(soap, &this->tt__DateTimeRange::Until, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DateTimeRange::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DateTimeRange(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DateTimeRange(struct soap *soap, const char *tag, int id, const tt__DateTimeRange *a, const char *type)
{
	if (((tt__DateTimeRange*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DateTimeRange*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DateTimeRange), "tt:DateTimeRange"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_time(soap, "tt:From", -1, &(a->tt__DateTimeRange::From), ""))
		return soap->error;
	if (soap_out_time(soap, "tt:Until", -1, &(a->tt__DateTimeRange::Until), ""))
		return soap->error;
	if (a->tt__DateTimeRange::__any)
	{	int i;
		for (i = 0; i < a->tt__DateTimeRange::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DateTimeRange::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DateTimeRange::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DateTimeRange(soap, tag, this, type);
}

SOAP_FMAC3 tt__DateTimeRange * SOAP_FMAC4 soap_in_tt__DateTimeRange(struct soap *soap, const char *tag, tt__DateTimeRange *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DateTimeRange *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DateTimeRange, sizeof(tt__DateTimeRange), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DateTimeRange)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DateTimeRange *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DateTimeRange*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_From1 = 1;
	size_t soap_flag_Until1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_From1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:From", &(a->tt__DateTimeRange::From), "xsd:dateTime"))
				{	soap_flag_From1--;
					continue;
				}
			if (soap_flag_Until1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Until", &(a->tt__DateTimeRange::Until), "xsd:dateTime"))
				{	soap_flag_Until1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__DateTimeRange::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DateTimeRange::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DateTimeRange::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DateTimeRange::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DateTimeRange::__any, "xsd:byte"))
				{	a->tt__DateTimeRange::__size++;
					a->tt__DateTimeRange::__any = NULL;
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
		if (a->tt__DateTimeRange::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DateTimeRange::__size)
			a->tt__DateTimeRange::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DateTimeRange::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DateTimeRange *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DateTimeRange, 0, sizeof(tt__DateTimeRange), 0, soap_copy_tt__DateTimeRange);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_From1 > 0 || soap_flag_Until1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DateTimeRange::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DateTimeRange);
	if (this->soap_out(soap, tag?tag:"tt:DateTimeRange", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DateTimeRange::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DateTimeRange(soap, this, tag, type);
}

SOAP_FMAC3 tt__DateTimeRange * SOAP_FMAC4 soap_get_tt__DateTimeRange(struct soap *soap, tt__DateTimeRange *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DateTimeRange(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DateTimeRange * SOAP_FMAC2 soap_instantiate_tt__DateTimeRange(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DateTimeRange(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DateTimeRange, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DateTimeRange);
		if (size)
			*size = sizeof(tt__DateTimeRange);
		((tt__DateTimeRange*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DateTimeRange, n);
		if (size)
			*size = n * sizeof(tt__DateTimeRange);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DateTimeRange*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DateTimeRange*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DateTimeRange(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DateTimeRange %p -> %p\n", q, p));
	*(tt__DateTimeRange*)p = *(tt__DateTimeRange*)q;
}

void tt__SourceReference::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__SourceReference::Token);
	this->tt__SourceReference::__size = 0;
	this->tt__SourceReference::__any = NULL;
	soap_default_xsd__anyURI(soap, &this->tt__SourceReference::Type);
	this->tt__SourceReference::__anyAttribute = NULL;
}

void tt__SourceReference::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__SourceReference::Token);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SourceReference::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SourceReference(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceReference(struct soap *soap, const char *tag, int id, const tt__SourceReference *a, const char *type)
{
	if (((tt__SourceReference*)a)->Type)
		soap_set_attr(soap, "Type", ((tt__SourceReference*)a)->Type, 1);
	if (((tt__SourceReference*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SourceReference*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceReference), "tt:SourceReference"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SourceReference::Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->tt__SourceReference::Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->tt__SourceReference::__any)
	{	int i;
		for (i = 0; i < a->tt__SourceReference::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SourceReference::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SourceReference::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SourceReference(soap, tag, this, type);
}

SOAP_FMAC3 tt__SourceReference * SOAP_FMAC4 soap_in_tt__SourceReference(struct soap *soap, const char *tag, tt__SourceReference *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SourceReference *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceReference, sizeof(tt__SourceReference), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SourceReference)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SourceReference *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Type", 0), &((tt__SourceReference*)a)->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SourceReference*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Token1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Token1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &(a->tt__SourceReference::Token), "tt:ReferenceToken"))
				{	soap_flag_Token1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SourceReference::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SourceReference::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SourceReference::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SourceReference::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SourceReference::__any, "xsd:byte"))
				{	a->tt__SourceReference::__size++;
					a->tt__SourceReference::__any = NULL;
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
		if (a->tt__SourceReference::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SourceReference::__size)
			a->tt__SourceReference::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SourceReference::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SourceReference *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceReference, 0, sizeof(tt__SourceReference), 0, soap_copy_tt__SourceReference);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SourceReference::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SourceReference);
	if (this->soap_out(soap, tag?tag:"tt:SourceReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SourceReference::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SourceReference(soap, this, tag, type);
}

SOAP_FMAC3 tt__SourceReference * SOAP_FMAC4 soap_get_tt__SourceReference(struct soap *soap, tt__SourceReference *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceReference(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SourceReference * SOAP_FMAC2 soap_instantiate_tt__SourceReference(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SourceReference(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SourceReference, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SourceReference);
		if (size)
			*size = sizeof(tt__SourceReference);
		((tt__SourceReference*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SourceReference, n);
		if (size)
			*size = n * sizeof(tt__SourceReference);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SourceReference*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SourceReference*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SourceReference(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SourceReference %p -> %p\n", q, p));
	*(tt__SourceReference*)p = *(tt__SourceReference*)q;
}

void tt__ReceiverStateInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReceiverState(soap, &this->tt__ReceiverStateInformation::State);
	soap_default_bool(soap, &this->tt__ReceiverStateInformation::AutoCreated);
	this->tt__ReceiverStateInformation::__size = 0;
	this->tt__ReceiverStateInformation::__any = NULL;
	this->tt__ReceiverStateInformation::__anyAttribute = NULL;
}

void tt__ReceiverStateInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ReceiverStateInformation::AutoCreated, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverStateInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverStateInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverStateInformation(struct soap *soap, const char *tag, int id, const tt__ReceiverStateInformation *a, const char *type)
{
	if (((tt__ReceiverStateInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReceiverStateInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverStateInformation), "tt:ReceiverStateInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ReceiverState(soap, "tt:State", -1, &(a->tt__ReceiverStateInformation::State), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:AutoCreated", -1, &(a->tt__ReceiverStateInformation::AutoCreated), ""))
		return soap->error;
	if (a->tt__ReceiverStateInformation::__any)
	{	int i;
		for (i = 0; i < a->tt__ReceiverStateInformation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReceiverStateInformation::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReceiverStateInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverStateInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverStateInformation * SOAP_FMAC4 soap_in_tt__ReceiverStateInformation(struct soap *soap, const char *tag, tt__ReceiverStateInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReceiverStateInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverStateInformation, sizeof(tt__ReceiverStateInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverStateInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReceiverStateInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReceiverStateInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_State1 = 1;
	size_t soap_flag_AutoCreated1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_State1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReceiverState(soap, "tt:State", &(a->tt__ReceiverStateInformation::State), "tt:ReceiverState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap_flag_AutoCreated1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AutoCreated", &(a->tt__ReceiverStateInformation::AutoCreated), "xsd:boolean"))
				{	soap_flag_AutoCreated1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReceiverStateInformation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReceiverStateInformation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReceiverStateInformation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReceiverStateInformation::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReceiverStateInformation::__any, "xsd:byte"))
				{	a->tt__ReceiverStateInformation::__size++;
					a->tt__ReceiverStateInformation::__any = NULL;
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
		if (a->tt__ReceiverStateInformation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReceiverStateInformation::__size)
			a->tt__ReceiverStateInformation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReceiverStateInformation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReceiverStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverStateInformation, 0, sizeof(tt__ReceiverStateInformation), 0, soap_copy_tt__ReceiverStateInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State1 > 0 || soap_flag_AutoCreated1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ReceiverStateInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverStateInformation);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverStateInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverStateInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverStateInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverStateInformation * SOAP_FMAC4 soap_get_tt__ReceiverStateInformation(struct soap *soap, tt__ReceiverStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverStateInformation * SOAP_FMAC2 soap_instantiate_tt__ReceiverStateInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverStateInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverStateInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverStateInformation);
		if (size)
			*size = sizeof(tt__ReceiverStateInformation);
		((tt__ReceiverStateInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverStateInformation, n);
		if (size)
			*size = n * sizeof(tt__ReceiverStateInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverStateInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverStateInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverStateInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverStateInformation %p -> %p\n", q, p));
	*(tt__ReceiverStateInformation*)p = *(tt__ReceiverStateInformation*)q;
}

void tt__ReceiverConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReceiverMode(soap, &this->tt__ReceiverConfiguration::Mode);
	soap_default_xsd__anyURI(soap, &this->tt__ReceiverConfiguration::MediaUri);
	this->tt__ReceiverConfiguration::StreamSetup = NULL;
	this->tt__ReceiverConfiguration::__size = 0;
	this->tt__ReceiverConfiguration::__any = NULL;
	this->tt__ReceiverConfiguration::__anyAttribute = NULL;
}

void tt__ReceiverConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__ReceiverConfiguration::MediaUri);
	soap_serialize_PointerTott__StreamSetup(soap, &this->tt__ReceiverConfiguration::StreamSetup);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverConfiguration(struct soap *soap, const char *tag, int id, const tt__ReceiverConfiguration *a, const char *type)
{
	if (((tt__ReceiverConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReceiverConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverConfiguration), "tt:ReceiverConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ReceiverMode(soap, "tt:Mode", -1, &(a->tt__ReceiverConfiguration::Mode), ""))
		return soap->error;
	if (a->tt__ReceiverConfiguration::MediaUri)
	{	if (soap_out_xsd__anyURI(soap, "tt:MediaUri", -1, &a->tt__ReceiverConfiguration::MediaUri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MediaUri"))
		return soap->error;
	if (a->tt__ReceiverConfiguration::StreamSetup)
	{	if (soap_out_PointerTott__StreamSetup(soap, "tt:StreamSetup", -1, &a->tt__ReceiverConfiguration::StreamSetup, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StreamSetup"))
		return soap->error;
	if (a->tt__ReceiverConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__ReceiverConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReceiverConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReceiverConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverConfiguration * SOAP_FMAC4 soap_in_tt__ReceiverConfiguration(struct soap *soap, const char *tag, tt__ReceiverConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReceiverConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverConfiguration, sizeof(tt__ReceiverConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReceiverConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReceiverConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_MediaUri1 = 1;
	size_t soap_flag_StreamSetup1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReceiverMode(soap, "tt:Mode", &(a->tt__ReceiverConfiguration::Mode), "tt:ReceiverMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_MediaUri1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:MediaUri", &(a->tt__ReceiverConfiguration::MediaUri), "xsd:anyURI"))
				{	soap_flag_MediaUri1--;
					continue;
				}
			if (soap_flag_StreamSetup1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__StreamSetup(soap, "tt:StreamSetup", &(a->tt__ReceiverConfiguration::StreamSetup), "tt:StreamSetup"))
				{	soap_flag_StreamSetup1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReceiverConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReceiverConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReceiverConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReceiverConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReceiverConfiguration::__any, "xsd:byte"))
				{	a->tt__ReceiverConfiguration::__size++;
					a->tt__ReceiverConfiguration::__any = NULL;
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
		if (a->tt__ReceiverConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReceiverConfiguration::__size)
			a->tt__ReceiverConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReceiverConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReceiverConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverConfiguration, 0, sizeof(tt__ReceiverConfiguration), 0, soap_copy_tt__ReceiverConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0 || soap_flag_MediaUri1 > 0 || soap_flag_StreamSetup1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ReceiverConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverConfiguration * SOAP_FMAC4 soap_get_tt__ReceiverConfiguration(struct soap *soap, tt__ReceiverConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverConfiguration * SOAP_FMAC2 soap_instantiate_tt__ReceiverConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverConfiguration);
		if (size)
			*size = sizeof(tt__ReceiverConfiguration);
		((tt__ReceiverConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverConfiguration, n);
		if (size)
			*size = n * sizeof(tt__ReceiverConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverConfiguration %p -> %p\n", q, p));
	*(tt__ReceiverConfiguration*)p = *(tt__ReceiverConfiguration*)q;
}

void tt__Receiver::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__Receiver::Token);
	this->tt__Receiver::Configuration = NULL;
	this->tt__Receiver::__size = 0;
	this->tt__Receiver::__any = NULL;
	this->tt__Receiver::__anyAttribute = NULL;
}

void tt__Receiver::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__Receiver::Token);
	soap_serialize_PointerTott__ReceiverConfiguration(soap, &this->tt__Receiver::Configuration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Receiver::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Receiver(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Receiver(struct soap *soap, const char *tag, int id, const tt__Receiver *a, const char *type)
{
	if (((tt__Receiver*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Receiver*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Receiver), "tt:Receiver"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Receiver::Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->tt__Receiver::Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->tt__Receiver::Configuration)
	{	if (soap_out_PointerTott__ReceiverConfiguration(soap, "tt:Configuration", -1, &a->tt__Receiver::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->tt__Receiver::__any)
	{	int i;
		for (i = 0; i < a->tt__Receiver::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Receiver::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Receiver::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Receiver(soap, tag, this, type);
}

SOAP_FMAC3 tt__Receiver * SOAP_FMAC4 soap_in_tt__Receiver(struct soap *soap, const char *tag, tt__Receiver *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Receiver *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Receiver, sizeof(tt__Receiver), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Receiver)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Receiver *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Receiver*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Token1 = 1;
	size_t soap_flag_Configuration1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Token1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &(a->tt__Receiver::Token), "tt:ReferenceToken"))
				{	soap_flag_Token1--;
					continue;
				}
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReceiverConfiguration(soap, "tt:Configuration", &(a->tt__Receiver::Configuration), "tt:ReceiverConfiguration"))
				{	soap_flag_Configuration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Receiver::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Receiver::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Receiver::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Receiver::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Receiver::__any, "xsd:byte"))
				{	a->tt__Receiver::__size++;
					a->tt__Receiver::__any = NULL;
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
		if (a->tt__Receiver::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Receiver::__size)
			a->tt__Receiver::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Receiver::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Receiver *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Receiver, 0, sizeof(tt__Receiver), 0, soap_copy_tt__Receiver);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token1 > 0 || soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Receiver::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Receiver);
	if (this->soap_out(soap, tag?tag:"tt:Receiver", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Receiver::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Receiver(soap, this, tag, type);
}

SOAP_FMAC3 tt__Receiver * SOAP_FMAC4 soap_get_tt__Receiver(struct soap *soap, tt__Receiver *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Receiver(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Receiver * SOAP_FMAC2 soap_instantiate_tt__Receiver(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Receiver(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Receiver, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Receiver);
		if (size)
			*size = sizeof(tt__Receiver);
		((tt__Receiver*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Receiver, n);
		if (size)
			*size = n * sizeof(tt__Receiver);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Receiver*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Receiver*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Receiver(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Receiver %p -> %p\n", q, p));
	*(tt__Receiver*)p = *(tt__Receiver*)q;
}

void tt__PaneOptionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PaneOptionExtension::__size = 0;
	this->tt__PaneOptionExtension::__any = NULL;
}

void tt__PaneOptionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PaneOptionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PaneOptionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneOptionExtension(struct soap *soap, const char *tag, int id, const tt__PaneOptionExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneOptionExtension), "tt:PaneOptionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PaneOptionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PaneOptionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PaneOptionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PaneOptionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PaneOptionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PaneOptionExtension * SOAP_FMAC4 soap_in_tt__PaneOptionExtension(struct soap *soap, const char *tag, tt__PaneOptionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PaneOptionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneOptionExtension, sizeof(tt__PaneOptionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PaneOptionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PaneOptionExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__PaneOptionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PaneOptionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PaneOptionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PaneOptionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PaneOptionExtension::__any, "xsd:byte"))
				{	a->tt__PaneOptionExtension::__size++;
					a->tt__PaneOptionExtension::__any = NULL;
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
		if (a->tt__PaneOptionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PaneOptionExtension::__size)
			a->tt__PaneOptionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PaneOptionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PaneOptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneOptionExtension, 0, sizeof(tt__PaneOptionExtension), 0, soap_copy_tt__PaneOptionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PaneOptionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PaneOptionExtension);
	if (this->soap_out(soap, tag?tag:"tt:PaneOptionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PaneOptionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PaneOptionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PaneOptionExtension * SOAP_FMAC4 soap_get_tt__PaneOptionExtension(struct soap *soap, tt__PaneOptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneOptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PaneOptionExtension * SOAP_FMAC2 soap_instantiate_tt__PaneOptionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PaneOptionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PaneOptionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PaneOptionExtension);
		if (size)
			*size = sizeof(tt__PaneOptionExtension);
		((tt__PaneOptionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PaneOptionExtension, n);
		if (size)
			*size = n * sizeof(tt__PaneOptionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PaneOptionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PaneOptionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PaneOptionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PaneOptionExtension %p -> %p\n", q, p));
	*(tt__PaneOptionExtension*)p = *(tt__PaneOptionExtension*)q;
}

void tt__PaneLayoutOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PaneLayoutOptions::__sizeArea = 0;
	this->tt__PaneLayoutOptions::Area = NULL;
	this->tt__PaneLayoutOptions::Extension = NULL;
	this->tt__PaneLayoutOptions::__anyAttribute = NULL;
}

void tt__PaneLayoutOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__PaneLayoutOptions::Area)
	{	int i;
		for (i = 0; i < this->tt__PaneLayoutOptions::__sizeArea; i++)
		{
			soap_serialize_PointerTott__Rectangle(soap, this->tt__PaneLayoutOptions::Area + i);
		}
	}
	soap_serialize_PointerTott__PaneOptionExtension(soap, &this->tt__PaneLayoutOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PaneLayoutOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PaneLayoutOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneLayoutOptions(struct soap *soap, const char *tag, int id, const tt__PaneLayoutOptions *a, const char *type)
{
	if (((tt__PaneLayoutOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PaneLayoutOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneLayoutOptions), "tt:PaneLayoutOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PaneLayoutOptions::Area)
	{	int i;
		for (i = 0; i < a->tt__PaneLayoutOptions::__sizeArea; i++)
			if (soap_out_PointerTott__Rectangle(soap, "tt:Area", -1, a->tt__PaneLayoutOptions::Area + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PaneOptionExtension(soap, "tt:Extension", -1, &(a->tt__PaneLayoutOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PaneLayoutOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PaneLayoutOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PaneLayoutOptions * SOAP_FMAC4 soap_in_tt__PaneLayoutOptions(struct soap *soap, const char *tag, tt__PaneLayoutOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PaneLayoutOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneLayoutOptions, sizeof(tt__PaneLayoutOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PaneLayoutOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PaneLayoutOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PaneLayoutOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Area1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Area", 1, NULL))
			{	if (a->tt__PaneLayoutOptions::Area == NULL)
				{	if (soap_blist_Area1 == NULL)
						soap_blist_Area1 = soap_new_block(soap);
					a->tt__PaneLayoutOptions::Area = (tt__Rectangle **)soap_push_block(soap, soap_blist_Area1, sizeof(tt__Rectangle *));
					if (a->tt__PaneLayoutOptions::Area == NULL)
						return NULL;
					*a->tt__PaneLayoutOptions::Area = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Rectangle(soap, "tt:Area", a->tt__PaneLayoutOptions::Area, "tt:Rectangle"))
				{	a->tt__PaneLayoutOptions::__sizeArea++;
					a->tt__PaneLayoutOptions::Area = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PaneOptionExtension(soap, "tt:Extension", &(a->tt__PaneLayoutOptions::Extension), "tt:PaneOptionExtension"))
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
		if (a->tt__PaneLayoutOptions::Area)
			soap_pop_block(soap, soap_blist_Area1);
		if (a->tt__PaneLayoutOptions::__sizeArea)
			a->tt__PaneLayoutOptions::Area = (tt__Rectangle **)soap_save_block(soap, soap_blist_Area1, NULL, 1);
		else
		{	a->tt__PaneLayoutOptions::Area = NULL;
			if (soap_blist_Area1)
				soap_end_block(soap, soap_blist_Area1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PaneLayoutOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneLayoutOptions, 0, sizeof(tt__PaneLayoutOptions), 0, soap_copy_tt__PaneLayoutOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__PaneLayoutOptions::__sizeArea < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PaneLayoutOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PaneLayoutOptions);
	if (this->soap_out(soap, tag?tag:"tt:PaneLayoutOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PaneLayoutOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PaneLayoutOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PaneLayoutOptions * SOAP_FMAC4 soap_get_tt__PaneLayoutOptions(struct soap *soap, tt__PaneLayoutOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneLayoutOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PaneLayoutOptions * SOAP_FMAC2 soap_instantiate_tt__PaneLayoutOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PaneLayoutOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PaneLayoutOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PaneLayoutOptions);
		if (size)
			*size = sizeof(tt__PaneLayoutOptions);
		((tt__PaneLayoutOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PaneLayoutOptions, n);
		if (size)
			*size = n * sizeof(tt__PaneLayoutOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PaneLayoutOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PaneLayoutOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PaneLayoutOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PaneLayoutOptions %p -> %p\n", q, p));
	*(tt__PaneLayoutOptions*)p = *(tt__PaneLayoutOptions*)q;
}

void tt__LayoutOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__LayoutOptionsExtension::__size = 0;
	this->tt__LayoutOptionsExtension::__any = NULL;
}

void tt__LayoutOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__LayoutOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__LayoutOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutOptionsExtension(struct soap *soap, const char *tag, int id, const tt__LayoutOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutOptionsExtension), "tt:LayoutOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__LayoutOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__LayoutOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__LayoutOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__LayoutOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__LayoutOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__LayoutOptionsExtension * SOAP_FMAC4 soap_in_tt__LayoutOptionsExtension(struct soap *soap, const char *tag, tt__LayoutOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__LayoutOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutOptionsExtension, sizeof(tt__LayoutOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__LayoutOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__LayoutOptionsExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__LayoutOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__LayoutOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__LayoutOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__LayoutOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__LayoutOptionsExtension::__any, "xsd:byte"))
				{	a->tt__LayoutOptionsExtension::__size++;
					a->tt__LayoutOptionsExtension::__any = NULL;
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
		if (a->tt__LayoutOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__LayoutOptionsExtension::__size)
			a->tt__LayoutOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__LayoutOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__LayoutOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutOptionsExtension, 0, sizeof(tt__LayoutOptionsExtension), 0, soap_copy_tt__LayoutOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__LayoutOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__LayoutOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:LayoutOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__LayoutOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__LayoutOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__LayoutOptionsExtension * SOAP_FMAC4 soap_get_tt__LayoutOptionsExtension(struct soap *soap, tt__LayoutOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__LayoutOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__LayoutOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__LayoutOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__LayoutOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__LayoutOptionsExtension);
		if (size)
			*size = sizeof(tt__LayoutOptionsExtension);
		((tt__LayoutOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__LayoutOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__LayoutOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__LayoutOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__LayoutOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__LayoutOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__LayoutOptionsExtension %p -> %p\n", q, p));
	*(tt__LayoutOptionsExtension*)p = *(tt__LayoutOptionsExtension*)q;
}

void tt__LayoutOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__LayoutOptions::__sizePaneLayoutOptions = 0;
	this->tt__LayoutOptions::PaneLayoutOptions = NULL;
	this->tt__LayoutOptions::Extension = NULL;
	this->tt__LayoutOptions::__anyAttribute = NULL;
}

void tt__LayoutOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__LayoutOptions::PaneLayoutOptions)
	{	int i;
		for (i = 0; i < this->tt__LayoutOptions::__sizePaneLayoutOptions; i++)
		{
			soap_serialize_PointerTott__PaneLayoutOptions(soap, this->tt__LayoutOptions::PaneLayoutOptions + i);
		}
	}
	soap_serialize_PointerTott__LayoutOptionsExtension(soap, &this->tt__LayoutOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__LayoutOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__LayoutOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutOptions(struct soap *soap, const char *tag, int id, const tt__LayoutOptions *a, const char *type)
{
	if (((tt__LayoutOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__LayoutOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutOptions), "tt:LayoutOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__LayoutOptions::PaneLayoutOptions)
	{	int i;
		for (i = 0; i < a->tt__LayoutOptions::__sizePaneLayoutOptions; i++)
			if (soap_out_PointerTott__PaneLayoutOptions(soap, "tt:PaneLayoutOptions", -1, a->tt__LayoutOptions::PaneLayoutOptions + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__LayoutOptionsExtension(soap, "tt:Extension", -1, &(a->tt__LayoutOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__LayoutOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__LayoutOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__LayoutOptions * SOAP_FMAC4 soap_in_tt__LayoutOptions(struct soap *soap, const char *tag, tt__LayoutOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__LayoutOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutOptions, sizeof(tt__LayoutOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__LayoutOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__LayoutOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__LayoutOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_PaneLayoutOptions1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PaneLayoutOptions", 1, NULL))
			{	if (a->tt__LayoutOptions::PaneLayoutOptions == NULL)
				{	if (soap_blist_PaneLayoutOptions1 == NULL)
						soap_blist_PaneLayoutOptions1 = soap_new_block(soap);
					a->tt__LayoutOptions::PaneLayoutOptions = (tt__PaneLayoutOptions **)soap_push_block(soap, soap_blist_PaneLayoutOptions1, sizeof(tt__PaneLayoutOptions *));
					if (a->tt__LayoutOptions::PaneLayoutOptions == NULL)
						return NULL;
					*a->tt__LayoutOptions::PaneLayoutOptions = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PaneLayoutOptions(soap, "tt:PaneLayoutOptions", a->tt__LayoutOptions::PaneLayoutOptions, "tt:PaneLayoutOptions"))
				{	a->tt__LayoutOptions::__sizePaneLayoutOptions++;
					a->tt__LayoutOptions::PaneLayoutOptions = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__LayoutOptionsExtension(soap, "tt:Extension", &(a->tt__LayoutOptions::Extension), "tt:LayoutOptionsExtension"))
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
		if (a->tt__LayoutOptions::PaneLayoutOptions)
			soap_pop_block(soap, soap_blist_PaneLayoutOptions1);
		if (a->tt__LayoutOptions::__sizePaneLayoutOptions)
			a->tt__LayoutOptions::PaneLayoutOptions = (tt__PaneLayoutOptions **)soap_save_block(soap, soap_blist_PaneLayoutOptions1, NULL, 1);
		else
		{	a->tt__LayoutOptions::PaneLayoutOptions = NULL;
			if (soap_blist_PaneLayoutOptions1)
				soap_end_block(soap, soap_blist_PaneLayoutOptions1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__LayoutOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutOptions, 0, sizeof(tt__LayoutOptions), 0, soap_copy_tt__LayoutOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__LayoutOptions::__sizePaneLayoutOptions < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__LayoutOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__LayoutOptions);
	if (this->soap_out(soap, tag?tag:"tt:LayoutOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__LayoutOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__LayoutOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__LayoutOptions * SOAP_FMAC4 soap_get_tt__LayoutOptions(struct soap *soap, tt__LayoutOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__LayoutOptions * SOAP_FMAC2 soap_instantiate_tt__LayoutOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__LayoutOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__LayoutOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__LayoutOptions);
		if (size)
			*size = sizeof(tt__LayoutOptions);
		((tt__LayoutOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__LayoutOptions, n);
		if (size)
			*size = n * sizeof(tt__LayoutOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__LayoutOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__LayoutOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__LayoutOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__LayoutOptions %p -> %p\n", q, p));
	*(tt__LayoutOptions*)p = *(tt__LayoutOptions*)q;
}

void tt__CodingCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CodingCapabilities::AudioEncodingCapabilities = NULL;
	this->tt__CodingCapabilities::AudioDecodingCapabilities = NULL;
	this->tt__CodingCapabilities::VideoDecodingCapabilities = NULL;
	this->tt__CodingCapabilities::__size = 0;
	this->tt__CodingCapabilities::__any = NULL;
	this->tt__CodingCapabilities::__anyAttribute = NULL;
}

void tt__CodingCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioEncoderConfigurationOptions(soap, &this->tt__CodingCapabilities::AudioEncodingCapabilities);
	soap_serialize_PointerTott__AudioDecoderConfigurationOptions(soap, &this->tt__CodingCapabilities::AudioDecodingCapabilities);
	soap_serialize_PointerTott__VideoDecoderConfigurationOptions(soap, &this->tt__CodingCapabilities::VideoDecodingCapabilities);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CodingCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CodingCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CodingCapabilities(struct soap *soap, const char *tag, int id, const tt__CodingCapabilities *a, const char *type)
{
	if (((tt__CodingCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CodingCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CodingCapabilities), "tt:CodingCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AudioEncoderConfigurationOptions(soap, "tt:AudioEncodingCapabilities", -1, &(a->tt__CodingCapabilities::AudioEncodingCapabilities), ""))
		return soap->error;
	if (soap_out_PointerTott__AudioDecoderConfigurationOptions(soap, "tt:AudioDecodingCapabilities", -1, &(a->tt__CodingCapabilities::AudioDecodingCapabilities), ""))
		return soap->error;
	if (a->tt__CodingCapabilities::VideoDecodingCapabilities)
	{	if (soap_out_PointerTott__VideoDecoderConfigurationOptions(soap, "tt:VideoDecodingCapabilities", -1, &a->tt__CodingCapabilities::VideoDecodingCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoDecodingCapabilities"))
		return soap->error;
	if (a->tt__CodingCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__CodingCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CodingCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CodingCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CodingCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__CodingCapabilities * SOAP_FMAC4 soap_in_tt__CodingCapabilities(struct soap *soap, const char *tag, tt__CodingCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CodingCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CodingCapabilities, sizeof(tt__CodingCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CodingCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CodingCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CodingCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AudioEncodingCapabilities1 = 1;
	size_t soap_flag_AudioDecodingCapabilities1 = 1;
	size_t soap_flag_VideoDecodingCapabilities1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AudioEncodingCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfigurationOptions(soap, "tt:AudioEncodingCapabilities", &(a->tt__CodingCapabilities::AudioEncodingCapabilities), "tt:AudioEncoderConfigurationOptions"))
				{	soap_flag_AudioEncodingCapabilities1--;
					continue;
				}
			if (soap_flag_AudioDecodingCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfigurationOptions(soap, "tt:AudioDecodingCapabilities", &(a->tt__CodingCapabilities::AudioDecodingCapabilities), "tt:AudioDecoderConfigurationOptions"))
				{	soap_flag_AudioDecodingCapabilities1--;
					continue;
				}
			if (soap_flag_VideoDecodingCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoDecoderConfigurationOptions(soap, "tt:VideoDecodingCapabilities", &(a->tt__CodingCapabilities::VideoDecodingCapabilities), "tt:VideoDecoderConfigurationOptions"))
				{	soap_flag_VideoDecodingCapabilities1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CodingCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CodingCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CodingCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CodingCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CodingCapabilities::__any, "xsd:byte"))
				{	a->tt__CodingCapabilities::__size++;
					a->tt__CodingCapabilities::__any = NULL;
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
		if (a->tt__CodingCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CodingCapabilities::__size)
			a->tt__CodingCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CodingCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CodingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CodingCapabilities, 0, sizeof(tt__CodingCapabilities), 0, soap_copy_tt__CodingCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoDecodingCapabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__CodingCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CodingCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:CodingCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CodingCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CodingCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__CodingCapabilities * SOAP_FMAC4 soap_get_tt__CodingCapabilities(struct soap *soap, tt__CodingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CodingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CodingCapabilities * SOAP_FMAC2 soap_instantiate_tt__CodingCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CodingCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CodingCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CodingCapabilities);
		if (size)
			*size = sizeof(tt__CodingCapabilities);
		((tt__CodingCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CodingCapabilities, n);
		if (size)
			*size = n * sizeof(tt__CodingCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CodingCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CodingCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CodingCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CodingCapabilities %p -> %p\n", q, p));
	*(tt__CodingCapabilities*)p = *(tt__CodingCapabilities*)q;
}

void tt__LayoutExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__LayoutExtension::__size = 0;
	this->tt__LayoutExtension::__any = NULL;
}

void tt__LayoutExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__LayoutExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__LayoutExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutExtension(struct soap *soap, const char *tag, int id, const tt__LayoutExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutExtension), "tt:LayoutExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__LayoutExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__LayoutExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__LayoutExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__LayoutExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__LayoutExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__LayoutExtension * SOAP_FMAC4 soap_in_tt__LayoutExtension(struct soap *soap, const char *tag, tt__LayoutExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__LayoutExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutExtension, sizeof(tt__LayoutExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__LayoutExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__LayoutExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__LayoutExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__LayoutExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__LayoutExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__LayoutExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__LayoutExtension::__any, "xsd:byte"))
				{	a->tt__LayoutExtension::__size++;
					a->tt__LayoutExtension::__any = NULL;
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
		if (a->tt__LayoutExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__LayoutExtension::__size)
			a->tt__LayoutExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__LayoutExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__LayoutExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutExtension, 0, sizeof(tt__LayoutExtension), 0, soap_copy_tt__LayoutExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__LayoutExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__LayoutExtension);
	if (this->soap_out(soap, tag?tag:"tt:LayoutExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__LayoutExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__LayoutExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__LayoutExtension * SOAP_FMAC4 soap_get_tt__LayoutExtension(struct soap *soap, tt__LayoutExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__LayoutExtension * SOAP_FMAC2 soap_instantiate_tt__LayoutExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__LayoutExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__LayoutExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__LayoutExtension);
		if (size)
			*size = sizeof(tt__LayoutExtension);
		((tt__LayoutExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__LayoutExtension, n);
		if (size)
			*size = n * sizeof(tt__LayoutExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__LayoutExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__LayoutExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__LayoutExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__LayoutExtension %p -> %p\n", q, p));
	*(tt__LayoutExtension*)p = *(tt__LayoutExtension*)q;
}

void tt__Layout::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Layout::__sizePaneLayout = 0;
	this->tt__Layout::PaneLayout = NULL;
	this->tt__Layout::Extension = NULL;
	this->tt__Layout::__anyAttribute = NULL;
}

void tt__Layout::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__Layout::PaneLayout)
	{	int i;
		for (i = 0; i < this->tt__Layout::__sizePaneLayout; i++)
		{
			soap_serialize_PointerTott__PaneLayout(soap, this->tt__Layout::PaneLayout + i);
		}
	}
	soap_serialize_PointerTott__LayoutExtension(soap, &this->tt__Layout::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Layout::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Layout(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Layout(struct soap *soap, const char *tag, int id, const tt__Layout *a, const char *type)
{
	if (((tt__Layout*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Layout*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Layout), "tt:Layout"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Layout::PaneLayout)
	{	int i;
		for (i = 0; i < a->tt__Layout::__sizePaneLayout; i++)
			if (soap_out_PointerTott__PaneLayout(soap, "tt:PaneLayout", -1, a->tt__Layout::PaneLayout + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__LayoutExtension(soap, "tt:Extension", -1, &(a->tt__Layout::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Layout::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Layout(soap, tag, this, type);
}

SOAP_FMAC3 tt__Layout * SOAP_FMAC4 soap_in_tt__Layout(struct soap *soap, const char *tag, tt__Layout *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Layout *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Layout, sizeof(tt__Layout), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Layout)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Layout *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Layout*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_PaneLayout1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PaneLayout", 1, NULL))
			{	if (a->tt__Layout::PaneLayout == NULL)
				{	if (soap_blist_PaneLayout1 == NULL)
						soap_blist_PaneLayout1 = soap_new_block(soap);
					a->tt__Layout::PaneLayout = (tt__PaneLayout **)soap_push_block(soap, soap_blist_PaneLayout1, sizeof(tt__PaneLayout *));
					if (a->tt__Layout::PaneLayout == NULL)
						return NULL;
					*a->tt__Layout::PaneLayout = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PaneLayout(soap, "tt:PaneLayout", a->tt__Layout::PaneLayout, "tt:PaneLayout"))
				{	a->tt__Layout::__sizePaneLayout++;
					a->tt__Layout::PaneLayout = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__LayoutExtension(soap, "tt:Extension", &(a->tt__Layout::Extension), "tt:LayoutExtension"))
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
		if (a->tt__Layout::PaneLayout)
			soap_pop_block(soap, soap_blist_PaneLayout1);
		if (a->tt__Layout::__sizePaneLayout)
			a->tt__Layout::PaneLayout = (tt__PaneLayout **)soap_save_block(soap, soap_blist_PaneLayout1, NULL, 1);
		else
		{	a->tt__Layout::PaneLayout = NULL;
			if (soap_blist_PaneLayout1)
				soap_end_block(soap, soap_blist_PaneLayout1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Layout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Layout, 0, sizeof(tt__Layout), 0, soap_copy_tt__Layout);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__Layout::__sizePaneLayout < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Layout::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Layout);
	if (this->soap_out(soap, tag?tag:"tt:Layout", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Layout::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Layout(soap, this, tag, type);
}

SOAP_FMAC3 tt__Layout * SOAP_FMAC4 soap_get_tt__Layout(struct soap *soap, tt__Layout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Layout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Layout * SOAP_FMAC2 soap_instantiate_tt__Layout(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Layout(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Layout, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Layout);
		if (size)
			*size = sizeof(tt__Layout);
		((tt__Layout*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Layout, n);
		if (size)
			*size = n * sizeof(tt__Layout);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Layout*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Layout*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Layout(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Layout %p -> %p\n", q, p));
	*(tt__Layout*)p = *(tt__Layout*)q;
}

void tt__PaneLayout::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__PaneLayout::Pane);
	this->tt__PaneLayout::Area = NULL;
	this->tt__PaneLayout::__size = 0;
	this->tt__PaneLayout::__any = NULL;
	this->tt__PaneLayout::__anyAttribute = NULL;
}

void tt__PaneLayout::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PaneLayout::Pane);
	soap_serialize_PointerTott__Rectangle(soap, &this->tt__PaneLayout::Area);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PaneLayout::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PaneLayout(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneLayout(struct soap *soap, const char *tag, int id, const tt__PaneLayout *a, const char *type)
{
	if (((tt__PaneLayout*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PaneLayout*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneLayout), "tt:PaneLayout"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PaneLayout::Pane)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Pane", -1, &a->tt__PaneLayout::Pane, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Pane"))
		return soap->error;
	if (a->tt__PaneLayout::Area)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:Area", -1, &a->tt__PaneLayout::Area, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Area"))
		return soap->error;
	if (a->tt__PaneLayout::__any)
	{	int i;
		for (i = 0; i < a->tt__PaneLayout::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PaneLayout::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PaneLayout::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PaneLayout(soap, tag, this, type);
}

SOAP_FMAC3 tt__PaneLayout * SOAP_FMAC4 soap_in_tt__PaneLayout(struct soap *soap, const char *tag, tt__PaneLayout *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PaneLayout *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneLayout, sizeof(tt__PaneLayout), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PaneLayout)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PaneLayout *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PaneLayout*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Pane1 = 1;
	size_t soap_flag_Area1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Pane1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Pane", &(a->tt__PaneLayout::Pane), "tt:ReferenceToken"))
				{	soap_flag_Pane1--;
					continue;
				}
			if (soap_flag_Area1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Area", &(a->tt__PaneLayout::Area), "tt:Rectangle"))
				{	soap_flag_Area1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PaneLayout::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PaneLayout::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PaneLayout::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PaneLayout::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PaneLayout::__any, "xsd:byte"))
				{	a->tt__PaneLayout::__size++;
					a->tt__PaneLayout::__any = NULL;
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
		if (a->tt__PaneLayout::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PaneLayout::__size)
			a->tt__PaneLayout::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PaneLayout::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PaneLayout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneLayout, 0, sizeof(tt__PaneLayout), 0, soap_copy_tt__PaneLayout);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Pane1 > 0 || soap_flag_Area1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PaneLayout::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PaneLayout);
	if (this->soap_out(soap, tag?tag:"tt:PaneLayout", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PaneLayout::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PaneLayout(soap, this, tag, type);
}

SOAP_FMAC3 tt__PaneLayout * SOAP_FMAC4 soap_get_tt__PaneLayout(struct soap *soap, tt__PaneLayout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneLayout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PaneLayout * SOAP_FMAC2 soap_instantiate_tt__PaneLayout(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PaneLayout(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PaneLayout, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PaneLayout);
		if (size)
			*size = sizeof(tt__PaneLayout);
		((tt__PaneLayout*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PaneLayout, n);
		if (size)
			*size = n * sizeof(tt__PaneLayout);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PaneLayout*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PaneLayout*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PaneLayout(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PaneLayout %p -> %p\n", q, p));
	*(tt__PaneLayout*)p = *(tt__PaneLayout*)q;
}

void tt__PaneConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__PaneConfiguration::PaneName);
	soap_default_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::AudioOutputToken);
	soap_default_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::AudioSourceToken);
	this->tt__PaneConfiguration::AudioEncoderConfiguration = NULL;
	soap_default_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::ReceiverToken);
	soap_default_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::Token);
	this->tt__PaneConfiguration::__size = 0;
	this->tt__PaneConfiguration::__any = NULL;
	this->tt__PaneConfiguration::__anyAttribute = NULL;
}

void tt__PaneConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__PaneConfiguration::PaneName);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::AudioOutputToken);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::AudioSourceToken);
	soap_serialize_PointerTott__AudioEncoderConfiguration(soap, &this->tt__PaneConfiguration::AudioEncoderConfiguration);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::ReceiverToken);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__PaneConfiguration::Token);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PaneConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PaneConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneConfiguration(struct soap *soap, const char *tag, int id, const tt__PaneConfiguration *a, const char *type)
{
	if (((tt__PaneConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PaneConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneConfiguration), "tt:PaneConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_string(soap, "tt:PaneName", -1, &(a->tt__PaneConfiguration::PaneName), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:AudioOutputToken", -1, &(a->tt__PaneConfiguration::AudioOutputToken), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:AudioSourceToken", -1, &(a->tt__PaneConfiguration::AudioSourceToken), ""))
		return soap->error;
	if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", -1, &(a->tt__PaneConfiguration::AudioEncoderConfiguration), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:ReceiverToken", -1, &(a->tt__PaneConfiguration::ReceiverToken), ""))
		return soap->error;
	if (a->tt__PaneConfiguration::Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->tt__PaneConfiguration::Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->tt__PaneConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__PaneConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PaneConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PaneConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PaneConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__PaneConfiguration * SOAP_FMAC4 soap_in_tt__PaneConfiguration(struct soap *soap, const char *tag, tt__PaneConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PaneConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneConfiguration, sizeof(tt__PaneConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PaneConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PaneConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PaneConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PaneName1 = 1;
	size_t soap_flag_AudioOutputToken1 = 1;
	size_t soap_flag_AudioSourceToken1 = 1;
	size_t soap_flag_AudioEncoderConfiguration1 = 1;
	size_t soap_flag_ReceiverToken1 = 1;
	size_t soap_flag_Token1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PaneName1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:PaneName", &(a->tt__PaneConfiguration::PaneName), "xsd:string"))
				{	soap_flag_PaneName1--;
					continue;
				}
			if (soap_flag_AudioOutputToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AudioOutputToken", &(a->tt__PaneConfiguration::AudioOutputToken), "tt:ReferenceToken"))
				{	soap_flag_AudioOutputToken1--;
					continue;
				}
			if (soap_flag_AudioSourceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AudioSourceToken", &(a->tt__PaneConfiguration::AudioSourceToken), "tt:ReferenceToken"))
				{	soap_flag_AudioSourceToken1--;
					continue;
				}
			if (soap_flag_AudioEncoderConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", &(a->tt__PaneConfiguration::AudioEncoderConfiguration), "tt:AudioEncoderConfiguration"))
				{	soap_flag_AudioEncoderConfiguration1--;
					continue;
				}
			if (soap_flag_ReceiverToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:ReceiverToken", &(a->tt__PaneConfiguration::ReceiverToken), "tt:ReferenceToken"))
				{	soap_flag_ReceiverToken1--;
					continue;
				}
			if (soap_flag_Token1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &(a->tt__PaneConfiguration::Token), "tt:ReferenceToken"))
				{	soap_flag_Token1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PaneConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PaneConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PaneConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PaneConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PaneConfiguration::__any, "xsd:byte"))
				{	a->tt__PaneConfiguration::__size++;
					a->tt__PaneConfiguration::__any = NULL;
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
		if (a->tt__PaneConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PaneConfiguration::__size)
			a->tt__PaneConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PaneConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PaneConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneConfiguration, 0, sizeof(tt__PaneConfiguration), 0, soap_copy_tt__PaneConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PaneConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PaneConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:PaneConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PaneConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PaneConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__PaneConfiguration * SOAP_FMAC4 soap_get_tt__PaneConfiguration(struct soap *soap, tt__PaneConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PaneConfiguration * SOAP_FMAC2 soap_instantiate_tt__PaneConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PaneConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PaneConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PaneConfiguration);
		if (size)
			*size = sizeof(tt__PaneConfiguration);
		((tt__PaneConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PaneConfiguration, n);
		if (size)
			*size = n * sizeof(tt__PaneConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PaneConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PaneConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PaneConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PaneConfiguration %p -> %p\n", q, p));
	*(tt__PaneConfiguration*)p = *(tt__PaneConfiguration*)q;
}

void tt__EventStreamExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EventStreamExtension::__size = 0;
	this->tt__EventStreamExtension::__any = NULL;
}

void tt__EventStreamExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EventStreamExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EventStreamExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventStreamExtension(struct soap *soap, const char *tag, int id, const tt__EventStreamExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventStreamExtension), "tt:EventStreamExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EventStreamExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__EventStreamExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EventStreamExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EventStreamExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EventStreamExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__EventStreamExtension * SOAP_FMAC4 soap_in_tt__EventStreamExtension(struct soap *soap, const char *tag, tt__EventStreamExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EventStreamExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventStreamExtension, sizeof(tt__EventStreamExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EventStreamExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EventStreamExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__EventStreamExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EventStreamExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EventStreamExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EventStreamExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EventStreamExtension::__any, "xsd:byte"))
				{	a->tt__EventStreamExtension::__size++;
					a->tt__EventStreamExtension::__any = NULL;
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
		if (a->tt__EventStreamExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EventStreamExtension::__size)
			a->tt__EventStreamExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EventStreamExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EventStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventStreamExtension, 0, sizeof(tt__EventStreamExtension), 0, soap_copy_tt__EventStreamExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EventStreamExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EventStreamExtension);
	if (this->soap_out(soap, tag?tag:"tt:EventStreamExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EventStreamExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EventStreamExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__EventStreamExtension * SOAP_FMAC4 soap_get_tt__EventStreamExtension(struct soap *soap, tt__EventStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EventStreamExtension * SOAP_FMAC2 soap_instantiate_tt__EventStreamExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EventStreamExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EventStreamExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EventStreamExtension);
		if (size)
			*size = sizeof(tt__EventStreamExtension);
		((tt__EventStreamExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EventStreamExtension, n);
		if (size)
			*size = n * sizeof(tt__EventStreamExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EventStreamExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EventStreamExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EventStreamExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EventStreamExtension %p -> %p\n", q, p));
	*(tt__EventStreamExtension*)p = *(tt__EventStreamExtension*)q;
}

void tt__EventStream::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EventStream::__size_EventStream = 0;
	this->tt__EventStream::__union_EventStream = NULL;
}

void tt__EventStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__EventStream::__union_EventStream)
	{	int i;
		for (i = 0; i < this->tt__EventStream::__size_EventStream; i++)
		{
			this->tt__EventStream::__union_EventStream[i].soap_serialize(soap);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EventStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EventStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventStream(struct soap *soap, const char *tag, int id, const tt__EventStream *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventStream), "tt:EventStream"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EventStream::__union_EventStream)
	{	int i;
		for (i = 0; i < a->tt__EventStream::__size_EventStream; i++)
			if (a->tt__EventStream::__union_EventStream[i].soap_out(soap, "-union-EventStream", -1, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EventStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EventStream(soap, tag, this, type);
}

SOAP_FMAC3 tt__EventStream * SOAP_FMAC4 soap_in_tt__EventStream(struct soap *soap, const char *tag, tt__EventStream *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EventStream *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventStream, sizeof(tt__EventStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EventStream)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EventStream *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___union_EventStream1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EventStream::__union_EventStream == NULL)
				{	if (soap_blist___union_EventStream1 == NULL)
						soap_blist___union_EventStream1 = soap_new_block(soap);
					a->tt__EventStream::__union_EventStream = (__tt__union_EventStream *)soap_push_block(soap, soap_blist___union_EventStream1, sizeof(__tt__union_EventStream));
					if (a->tt__EventStream::__union_EventStream == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__EventStream::__union_EventStream, __tt__union_EventStream);
					a->tt__EventStream::__union_EventStream->soap_default(soap);
				}
				if (soap_in___tt__union_EventStream(soap, "-union-EventStream", a->tt__EventStream::__union_EventStream, "-tt:union-EventStream"))
				{	a->tt__EventStream::__size_EventStream++;
					a->tt__EventStream::__union_EventStream = NULL;
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
		if (a->tt__EventStream::__union_EventStream)
			soap_pop_block(soap, soap_blist___union_EventStream1);
		if (a->tt__EventStream::__size_EventStream)
			a->tt__EventStream::__union_EventStream = (__tt__union_EventStream *)soap_save_block(soap, soap_blist___union_EventStream1, NULL, 1);
		else
		{	a->tt__EventStream::__union_EventStream = NULL;
			if (soap_blist___union_EventStream1)
				soap_end_block(soap, soap_blist___union_EventStream1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EventStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventStream, 0, sizeof(tt__EventStream), 0, soap_copy_tt__EventStream);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EventStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EventStream);
	if (this->soap_out(soap, tag?tag:"tt:EventStream", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EventStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EventStream(soap, this, tag, type);
}

SOAP_FMAC3 tt__EventStream * SOAP_FMAC4 soap_get_tt__EventStream(struct soap *soap, tt__EventStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EventStream * SOAP_FMAC2 soap_instantiate_tt__EventStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EventStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EventStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EventStream);
		if (size)
			*size = sizeof(tt__EventStream);
		((tt__EventStream*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EventStream, n);
		if (size)
			*size = n * sizeof(tt__EventStream);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EventStream*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EventStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EventStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EventStream %p -> %p\n", q, p));
	*(tt__EventStream*)p = *(tt__EventStream*)q;
}

void tt__PTZStreamExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZStreamExtension::__size = 0;
	this->tt__PTZStreamExtension::__any = NULL;
}

void tt__PTZStreamExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZStreamExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZStreamExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStreamExtension(struct soap *soap, const char *tag, int id, const tt__PTZStreamExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStreamExtension), "tt:PTZStreamExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZStreamExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZStreamExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZStreamExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZStreamExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZStreamExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZStreamExtension * SOAP_FMAC4 soap_in_tt__PTZStreamExtension(struct soap *soap, const char *tag, tt__PTZStreamExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZStreamExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStreamExtension, sizeof(tt__PTZStreamExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZStreamExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZStreamExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__PTZStreamExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZStreamExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZStreamExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZStreamExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZStreamExtension::__any, "xsd:byte"))
				{	a->tt__PTZStreamExtension::__size++;
					a->tt__PTZStreamExtension::__any = NULL;
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
		if (a->tt__PTZStreamExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZStreamExtension::__size)
			a->tt__PTZStreamExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZStreamExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStreamExtension, 0, sizeof(tt__PTZStreamExtension), 0, soap_copy_tt__PTZStreamExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZStreamExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZStreamExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZStreamExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZStreamExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZStreamExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZStreamExtension * SOAP_FMAC4 soap_get_tt__PTZStreamExtension(struct soap *soap, tt__PTZStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZStreamExtension * SOAP_FMAC2 soap_instantiate_tt__PTZStreamExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZStreamExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZStreamExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZStreamExtension);
		if (size)
			*size = sizeof(tt__PTZStreamExtension);
		((tt__PTZStreamExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZStreamExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZStreamExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZStreamExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZStreamExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZStreamExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZStreamExtension %p -> %p\n", q, p));
	*(tt__PTZStreamExtension*)p = *(tt__PTZStreamExtension*)q;
}

void tt__PTZStream::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZStream::__size_PTZStream = 0;
	this->tt__PTZStream::__union_PTZStream = NULL;
}

void tt__PTZStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__PTZStream::__union_PTZStream)
	{	int i;
		for (i = 0; i < this->tt__PTZStream::__size_PTZStream; i++)
		{
			this->tt__PTZStream::__union_PTZStream[i].soap_serialize(soap);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStream(struct soap *soap, const char *tag, int id, const tt__PTZStream *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStream), "tt:PTZStream"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZStream::__union_PTZStream)
	{	int i;
		for (i = 0; i < a->tt__PTZStream::__size_PTZStream; i++)
			if (a->tt__PTZStream::__union_PTZStream[i].soap_out(soap, "-union-PTZStream", -1, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZStream(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZStream * SOAP_FMAC4 soap_in_tt__PTZStream(struct soap *soap, const char *tag, tt__PTZStream *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZStream *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStream, sizeof(tt__PTZStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZStream)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZStream *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___union_PTZStream1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZStream::__union_PTZStream == NULL)
				{	if (soap_blist___union_PTZStream1 == NULL)
						soap_blist___union_PTZStream1 = soap_new_block(soap);
					a->tt__PTZStream::__union_PTZStream = (__tt__union_PTZStream *)soap_push_block(soap, soap_blist___union_PTZStream1, sizeof(__tt__union_PTZStream));
					if (a->tt__PTZStream::__union_PTZStream == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__PTZStream::__union_PTZStream, __tt__union_PTZStream);
					a->tt__PTZStream::__union_PTZStream->soap_default(soap);
				}
				if (soap_in___tt__union_PTZStream(soap, "-union-PTZStream", a->tt__PTZStream::__union_PTZStream, "-tt:union-PTZStream"))
				{	a->tt__PTZStream::__size_PTZStream++;
					a->tt__PTZStream::__union_PTZStream = NULL;
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
		if (a->tt__PTZStream::__union_PTZStream)
			soap_pop_block(soap, soap_blist___union_PTZStream1);
		if (a->tt__PTZStream::__size_PTZStream)
			a->tt__PTZStream::__union_PTZStream = (__tt__union_PTZStream *)soap_save_block(soap, soap_blist___union_PTZStream1, NULL, 1);
		else
		{	a->tt__PTZStream::__union_PTZStream = NULL;
			if (soap_blist___union_PTZStream1)
				soap_end_block(soap, soap_blist___union_PTZStream1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStream, 0, sizeof(tt__PTZStream), 0, soap_copy_tt__PTZStream);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZStream);
	if (this->soap_out(soap, tag?tag:"tt:PTZStream", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZStream(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZStream * SOAP_FMAC4 soap_get_tt__PTZStream(struct soap *soap, tt__PTZStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZStream * SOAP_FMAC2 soap_instantiate_tt__PTZStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZStream);
		if (size)
			*size = sizeof(tt__PTZStream);
		((tt__PTZStream*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZStream, n);
		if (size)
			*size = n * sizeof(tt__PTZStream);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZStream*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZStream %p -> %p\n", q, p));
	*(tt__PTZStream*)p = *(tt__PTZStream*)q;
}

void tt__VideoAnalyticsStreamExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoAnalyticsStreamExtension::__size = 0;
	this->tt__VideoAnalyticsStreamExtension::__any = NULL;
}

void tt__VideoAnalyticsStreamExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoAnalyticsStreamExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoAnalyticsStreamExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsStreamExtension(struct soap *soap, const char *tag, int id, const tt__VideoAnalyticsStreamExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsStreamExtension), "tt:VideoAnalyticsStreamExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoAnalyticsStreamExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoAnalyticsStreamExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoAnalyticsStreamExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoAnalyticsStreamExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoAnalyticsStreamExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoAnalyticsStreamExtension * SOAP_FMAC4 soap_in_tt__VideoAnalyticsStreamExtension(struct soap *soap, const char *tag, tt__VideoAnalyticsStreamExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoAnalyticsStreamExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsStreamExtension, sizeof(tt__VideoAnalyticsStreamExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoAnalyticsStreamExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoAnalyticsStreamExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__VideoAnalyticsStreamExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoAnalyticsStreamExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoAnalyticsStreamExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoAnalyticsStreamExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoAnalyticsStreamExtension::__any, "xsd:byte"))
				{	a->tt__VideoAnalyticsStreamExtension::__size++;
					a->tt__VideoAnalyticsStreamExtension::__any = NULL;
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
		if (a->tt__VideoAnalyticsStreamExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoAnalyticsStreamExtension::__size)
			a->tt__VideoAnalyticsStreamExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoAnalyticsStreamExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoAnalyticsStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsStreamExtension, 0, sizeof(tt__VideoAnalyticsStreamExtension), 0, soap_copy_tt__VideoAnalyticsStreamExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoAnalyticsStreamExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsStreamExtension);
	if (this->soap_out(soap, tag?tag:"tt:VideoAnalyticsStreamExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoAnalyticsStreamExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoAnalyticsStreamExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoAnalyticsStreamExtension * SOAP_FMAC4 soap_get_tt__VideoAnalyticsStreamExtension(struct soap *soap, tt__VideoAnalyticsStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoAnalyticsStreamExtension * SOAP_FMAC2 soap_instantiate_tt__VideoAnalyticsStreamExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoAnalyticsStreamExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoAnalyticsStreamExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoAnalyticsStreamExtension);
		if (size)
			*size = sizeof(tt__VideoAnalyticsStreamExtension);
		((tt__VideoAnalyticsStreamExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoAnalyticsStreamExtension, n);
		if (size)
			*size = n * sizeof(tt__VideoAnalyticsStreamExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoAnalyticsStreamExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoAnalyticsStreamExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoAnalyticsStreamExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoAnalyticsStreamExtension %p -> %p\n", q, p));
	*(tt__VideoAnalyticsStreamExtension*)p = *(tt__VideoAnalyticsStreamExtension*)q;
}

void tt__VideoAnalyticsStream::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoAnalyticsStream::__size_VideoAnalyticsStream = 0;
	this->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream = NULL;
}

void tt__VideoAnalyticsStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream)
	{	int i;
		for (i = 0; i < this->tt__VideoAnalyticsStream::__size_VideoAnalyticsStream; i++)
		{
			this->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream[i].soap_serialize(soap);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoAnalyticsStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoAnalyticsStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsStream(struct soap *soap, const char *tag, int id, const tt__VideoAnalyticsStream *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsStream), "tt:VideoAnalyticsStream"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream)
	{	int i;
		for (i = 0; i < a->tt__VideoAnalyticsStream::__size_VideoAnalyticsStream; i++)
			if (a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream[i].soap_out(soap, "-union-VideoAnalyticsStream", -1, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoAnalyticsStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoAnalyticsStream(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoAnalyticsStream * SOAP_FMAC4 soap_in_tt__VideoAnalyticsStream(struct soap *soap, const char *tag, tt__VideoAnalyticsStream *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoAnalyticsStream *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsStream, sizeof(tt__VideoAnalyticsStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoAnalyticsStream)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoAnalyticsStream *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___union_VideoAnalyticsStream1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream == NULL)
				{	if (soap_blist___union_VideoAnalyticsStream1 == NULL)
						soap_blist___union_VideoAnalyticsStream1 = soap_new_block(soap);
					a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream = (__tt__union_VideoAnalyticsStream *)soap_push_block(soap, soap_blist___union_VideoAnalyticsStream1, sizeof(__tt__union_VideoAnalyticsStream));
					if (a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream, __tt__union_VideoAnalyticsStream);
					a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream->soap_default(soap);
				}
				if (soap_in___tt__union_VideoAnalyticsStream(soap, "-union-VideoAnalyticsStream", a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream, "-tt:union-VideoAnalyticsStream"))
				{	a->tt__VideoAnalyticsStream::__size_VideoAnalyticsStream++;
					a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream = NULL;
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
		if (a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream)
			soap_pop_block(soap, soap_blist___union_VideoAnalyticsStream1);
		if (a->tt__VideoAnalyticsStream::__size_VideoAnalyticsStream)
			a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream = (__tt__union_VideoAnalyticsStream *)soap_save_block(soap, soap_blist___union_VideoAnalyticsStream1, NULL, 1);
		else
		{	a->tt__VideoAnalyticsStream::__union_VideoAnalyticsStream = NULL;
			if (soap_blist___union_VideoAnalyticsStream1)
				soap_end_block(soap, soap_blist___union_VideoAnalyticsStream1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoAnalyticsStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsStream, 0, sizeof(tt__VideoAnalyticsStream), 0, soap_copy_tt__VideoAnalyticsStream);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoAnalyticsStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsStream);
	if (this->soap_out(soap, tag?tag:"tt:VideoAnalyticsStream", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoAnalyticsStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoAnalyticsStream(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoAnalyticsStream * SOAP_FMAC4 soap_get_tt__VideoAnalyticsStream(struct soap *soap, tt__VideoAnalyticsStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoAnalyticsStream * SOAP_FMAC2 soap_instantiate_tt__VideoAnalyticsStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoAnalyticsStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoAnalyticsStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoAnalyticsStream);
		if (size)
			*size = sizeof(tt__VideoAnalyticsStream);
		((tt__VideoAnalyticsStream*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoAnalyticsStream, n);
		if (size)
			*size = n * sizeof(tt__VideoAnalyticsStream);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoAnalyticsStream*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoAnalyticsStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoAnalyticsStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoAnalyticsStream %p -> %p\n", q, p));
	*(tt__VideoAnalyticsStream*)p = *(tt__VideoAnalyticsStream*)q;
}

void tt__MetadataStreamExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataStreamExtension::__size = 0;
	this->tt__MetadataStreamExtension::__any = NULL;
}

void tt__MetadataStreamExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataStreamExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataStreamExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataStreamExtension(struct soap *soap, const char *tag, int id, const tt__MetadataStreamExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataStreamExtension), "tt:MetadataStreamExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataStreamExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataStreamExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataStreamExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataStreamExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataStreamExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataStreamExtension * SOAP_FMAC4 soap_in_tt__MetadataStreamExtension(struct soap *soap, const char *tag, tt__MetadataStreamExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataStreamExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataStreamExtension, sizeof(tt__MetadataStreamExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataStreamExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataStreamExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__MetadataStreamExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataStreamExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataStreamExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataStreamExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataStreamExtension::__any, "xsd:byte"))
				{	a->tt__MetadataStreamExtension::__size++;
					a->tt__MetadataStreamExtension::__any = NULL;
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
		if (a->tt__MetadataStreamExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataStreamExtension::__size)
			a->tt__MetadataStreamExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataStreamExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataStreamExtension, 0, sizeof(tt__MetadataStreamExtension), 0, soap_copy_tt__MetadataStreamExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MetadataStreamExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataStreamExtension);
	if (this->soap_out(soap, tag?tag:"tt:MetadataStreamExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataStreamExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataStreamExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataStreamExtension * SOAP_FMAC4 soap_get_tt__MetadataStreamExtension(struct soap *soap, tt__MetadataStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataStreamExtension * SOAP_FMAC2 soap_instantiate_tt__MetadataStreamExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataStreamExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataStreamExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataStreamExtension);
		if (size)
			*size = sizeof(tt__MetadataStreamExtension);
		((tt__MetadataStreamExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataStreamExtension, n);
		if (size)
			*size = n * sizeof(tt__MetadataStreamExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataStreamExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataStreamExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataStreamExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataStreamExtension %p -> %p\n", q, p));
	*(tt__MetadataStreamExtension*)p = *(tt__MetadataStreamExtension*)q;
}

void tt__MetadataStream::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataStream::__size_MetadataStream = 0;
	this->tt__MetadataStream::__union_MetadataStream = NULL;
	this->tt__MetadataStream::__anyAttribute = NULL;
}

void tt__MetadataStream::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__MetadataStream::__union_MetadataStream)
	{	int i;
		for (i = 0; i < this->tt__MetadataStream::__size_MetadataStream; i++)
		{
			this->tt__MetadataStream::__union_MetadataStream[i].soap_serialize(soap);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataStream::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataStream(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataStream(struct soap *soap, const char *tag, int id, const tt__MetadataStream *a, const char *type)
{
	if (((tt__MetadataStream*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataStream*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataStream), "tt:MetadataStream"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataStream::__union_MetadataStream)
	{	int i;
		for (i = 0; i < a->tt__MetadataStream::__size_MetadataStream; i++)
			if (a->tt__MetadataStream::__union_MetadataStream[i].soap_out(soap, "-union-MetadataStream", -1, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataStream::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataStream(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataStream * SOAP_FMAC4 soap_in_tt__MetadataStream(struct soap *soap, const char *tag, tt__MetadataStream *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataStream *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataStream, sizeof(tt__MetadataStream), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataStream)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataStream *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataStream*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___union_MetadataStream1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MetadataStream::__union_MetadataStream == NULL)
				{	if (soap_blist___union_MetadataStream1 == NULL)
						soap_blist___union_MetadataStream1 = soap_new_block(soap);
					a->tt__MetadataStream::__union_MetadataStream = (__tt__union_MetadataStream *)soap_push_block(soap, soap_blist___union_MetadataStream1, sizeof(__tt__union_MetadataStream));
					if (a->tt__MetadataStream::__union_MetadataStream == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__MetadataStream::__union_MetadataStream, __tt__union_MetadataStream);
					a->tt__MetadataStream::__union_MetadataStream->soap_default(soap);
				}
				if (soap_in___tt__union_MetadataStream(soap, "-union-MetadataStream", a->tt__MetadataStream::__union_MetadataStream, "-tt:union-MetadataStream"))
				{	a->tt__MetadataStream::__size_MetadataStream++;
					a->tt__MetadataStream::__union_MetadataStream = NULL;
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
		if (a->tt__MetadataStream::__union_MetadataStream)
			soap_pop_block(soap, soap_blist___union_MetadataStream1);
		if (a->tt__MetadataStream::__size_MetadataStream)
			a->tt__MetadataStream::__union_MetadataStream = (__tt__union_MetadataStream *)soap_save_block(soap, soap_blist___union_MetadataStream1, NULL, 1);
		else
		{	a->tt__MetadataStream::__union_MetadataStream = NULL;
			if (soap_blist___union_MetadataStream1)
				soap_end_block(soap, soap_blist___union_MetadataStream1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataStream, 0, sizeof(tt__MetadataStream), 0, soap_copy_tt__MetadataStream);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MetadataStream::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataStream);
	if (this->soap_out(soap, tag?tag:"tt:MetadataStream", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataStream::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataStream(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataStream * SOAP_FMAC4 soap_get_tt__MetadataStream(struct soap *soap, tt__MetadataStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataStream * SOAP_FMAC2 soap_instantiate_tt__MetadataStream(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataStream(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataStream, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataStream);
		if (size)
			*size = sizeof(tt__MetadataStream);
		((tt__MetadataStream*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataStream, n);
		if (size)
			*size = n * sizeof(tt__MetadataStream);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataStream*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataStream*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataStream(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataStream %p -> %p\n", q, p));
	*(tt__MetadataStream*)p = *(tt__MetadataStream*)q;
}

void tt__CellLayout::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CellLayout::Transformation = NULL;
	this->tt__CellLayout::__size = 0;
	this->tt__CellLayout::__any = NULL;
	soap_default_xsd__integer(soap, &this->tt__CellLayout::Columns);
	soap_default_xsd__integer(soap, &this->tt__CellLayout::Rows);
	this->tt__CellLayout::__anyAttribute = NULL;
}

void tt__CellLayout::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transformation(soap, &this->tt__CellLayout::Transformation);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CellLayout::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CellLayout(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CellLayout(struct soap *soap, const char *tag, int id, const tt__CellLayout *a, const char *type)
{
	if (((tt__CellLayout*)a)->Columns)
		soap_set_attr(soap, "Columns", ((tt__CellLayout*)a)->Columns, 1);
	if (((tt__CellLayout*)a)->Rows)
		soap_set_attr(soap, "Rows", ((tt__CellLayout*)a)->Rows, 1);
	if (((tt__CellLayout*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__CellLayout*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CellLayout), "tt:CellLayout"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CellLayout::Transformation)
	{	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &a->tt__CellLayout::Transformation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Transformation"))
		return soap->error;
	if (a->tt__CellLayout::__any)
	{	int i;
		for (i = 0; i < a->tt__CellLayout::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CellLayout::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CellLayout::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CellLayout(soap, tag, this, type);
}

SOAP_FMAC3 tt__CellLayout * SOAP_FMAC4 soap_in_tt__CellLayout(struct soap *soap, const char *tag, tt__CellLayout *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CellLayout *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CellLayout, sizeof(tt__CellLayout), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CellLayout)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CellLayout *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Columns", 1), &((tt__CellLayout*)a)->Columns, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Rows", 1), &((tt__CellLayout*)a)->Rows, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__CellLayout*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Transformation1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Transformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transformation(soap, "tt:Transformation", &(a->tt__CellLayout::Transformation), "tt:Transformation"))
				{	soap_flag_Transformation1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CellLayout::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CellLayout::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CellLayout::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CellLayout::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CellLayout::__any, "xsd:byte"))
				{	a->tt__CellLayout::__size++;
					a->tt__CellLayout::__any = NULL;
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
		if (a->tt__CellLayout::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CellLayout::__size)
			a->tt__CellLayout::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CellLayout::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CellLayout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CellLayout, 0, sizeof(tt__CellLayout), 0, soap_copy_tt__CellLayout);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Transformation1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__CellLayout::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CellLayout);
	if (this->soap_out(soap, tag?tag:"tt:CellLayout", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CellLayout::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CellLayout(soap, this, tag, type);
}

SOAP_FMAC3 tt__CellLayout * SOAP_FMAC4 soap_get_tt__CellLayout(struct soap *soap, tt__CellLayout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CellLayout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CellLayout * SOAP_FMAC2 soap_instantiate_tt__CellLayout(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CellLayout(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CellLayout, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CellLayout);
		if (size)
			*size = sizeof(tt__CellLayout);
		((tt__CellLayout*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CellLayout, n);
		if (size)
			*size = n * sizeof(tt__CellLayout);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CellLayout*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CellLayout*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CellLayout(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CellLayout %p -> %p\n", q, p));
	*(tt__CellLayout*)p = *(tt__CellLayout*)q;
}

void tt__MotionExpressionConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MotionExpressionConfiguration::MotionExpression = NULL;
	this->tt__MotionExpressionConfiguration::__size = 0;
	this->tt__MotionExpressionConfiguration::__any = NULL;
	this->tt__MotionExpressionConfiguration::__anyAttribute = NULL;
}

void tt__MotionExpressionConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MotionExpression(soap, &this->tt__MotionExpressionConfiguration::MotionExpression);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MotionExpressionConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MotionExpressionConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionExpressionConfiguration(struct soap *soap, const char *tag, int id, const tt__MotionExpressionConfiguration *a, const char *type)
{
	if (((tt__MotionExpressionConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MotionExpressionConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionExpressionConfiguration), "tt:MotionExpressionConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MotionExpressionConfiguration::MotionExpression)
	{	if (soap_out_PointerTott__MotionExpression(soap, "tt:MotionExpression", -1, &a->tt__MotionExpressionConfiguration::MotionExpression, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MotionExpression"))
		return soap->error;
	if (a->tt__MotionExpressionConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__MotionExpressionConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MotionExpressionConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MotionExpressionConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MotionExpressionConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__MotionExpressionConfiguration * SOAP_FMAC4 soap_in_tt__MotionExpressionConfiguration(struct soap *soap, const char *tag, tt__MotionExpressionConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MotionExpressionConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionExpressionConfiguration, sizeof(tt__MotionExpressionConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MotionExpressionConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MotionExpressionConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MotionExpressionConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_MotionExpression1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MotionExpression1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MotionExpression(soap, "tt:MotionExpression", &(a->tt__MotionExpressionConfiguration::MotionExpression), "tt:MotionExpression"))
				{	soap_flag_MotionExpression1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MotionExpressionConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MotionExpressionConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MotionExpressionConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MotionExpressionConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MotionExpressionConfiguration::__any, "xsd:byte"))
				{	a->tt__MotionExpressionConfiguration::__size++;
					a->tt__MotionExpressionConfiguration::__any = NULL;
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
		if (a->tt__MotionExpressionConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MotionExpressionConfiguration::__size)
			a->tt__MotionExpressionConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MotionExpressionConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MotionExpressionConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionExpressionConfiguration, 0, sizeof(tt__MotionExpressionConfiguration), 0, soap_copy_tt__MotionExpressionConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MotionExpression1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MotionExpressionConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MotionExpressionConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:MotionExpressionConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MotionExpressionConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MotionExpressionConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__MotionExpressionConfiguration * SOAP_FMAC4 soap_get_tt__MotionExpressionConfiguration(struct soap *soap, tt__MotionExpressionConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionExpressionConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MotionExpressionConfiguration * SOAP_FMAC2 soap_instantiate_tt__MotionExpressionConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MotionExpressionConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MotionExpressionConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MotionExpressionConfiguration);
		if (size)
			*size = sizeof(tt__MotionExpressionConfiguration);
		((tt__MotionExpressionConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MotionExpressionConfiguration, n);
		if (size)
			*size = n * sizeof(tt__MotionExpressionConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MotionExpressionConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MotionExpressionConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MotionExpressionConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MotionExpressionConfiguration %p -> %p\n", q, p));
	*(tt__MotionExpressionConfiguration*)p = *(tt__MotionExpressionConfiguration*)q;
}

void tt__MotionExpression::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__MotionExpression::Expression);
	this->tt__MotionExpression::__size = 0;
	this->tt__MotionExpression::__any = NULL;
	soap_default_string(soap, &this->tt__MotionExpression::Type);
	this->tt__MotionExpression::__anyAttribute = NULL;
}

void tt__MotionExpression::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__MotionExpression::Expression);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MotionExpression::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MotionExpression(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionExpression(struct soap *soap, const char *tag, int id, const tt__MotionExpression *a, const char *type)
{
	if (((tt__MotionExpression*)a)->Type)
		soap_set_attr(soap, "Type", ((tt__MotionExpression*)a)->Type, 1);
	if (((tt__MotionExpression*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MotionExpression*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionExpression), "tt:MotionExpression"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MotionExpression::Expression)
	{	if (soap_out_string(soap, "tt:Expression", -1, &a->tt__MotionExpression::Expression, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Expression"))
		return soap->error;
	if (a->tt__MotionExpression::__any)
	{	int i;
		for (i = 0; i < a->tt__MotionExpression::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MotionExpression::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MotionExpression::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MotionExpression(soap, tag, this, type);
}

SOAP_FMAC3 tt__MotionExpression * SOAP_FMAC4 soap_in_tt__MotionExpression(struct soap *soap, const char *tag, tt__MotionExpression *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MotionExpression *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionExpression, sizeof(tt__MotionExpression), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MotionExpression)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MotionExpression *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Type", 0), &((tt__MotionExpression*)a)->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MotionExpression*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Expression1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Expression1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Expression", &(a->tt__MotionExpression::Expression), "xsd:string"))
				{	soap_flag_Expression1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MotionExpression::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MotionExpression::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MotionExpression::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MotionExpression::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MotionExpression::__any, "xsd:byte"))
				{	a->tt__MotionExpression::__size++;
					a->tt__MotionExpression::__any = NULL;
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
		if (a->tt__MotionExpression::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MotionExpression::__size)
			a->tt__MotionExpression::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MotionExpression::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MotionExpression *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionExpression, 0, sizeof(tt__MotionExpression), 0, soap_copy_tt__MotionExpression);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Expression1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MotionExpression::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MotionExpression);
	if (this->soap_out(soap, tag?tag:"tt:MotionExpression", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MotionExpression::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MotionExpression(soap, this, tag, type);
}

SOAP_FMAC3 tt__MotionExpression * SOAP_FMAC4 soap_get_tt__MotionExpression(struct soap *soap, tt__MotionExpression *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionExpression(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MotionExpression * SOAP_FMAC2 soap_instantiate_tt__MotionExpression(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MotionExpression(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MotionExpression, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MotionExpression);
		if (size)
			*size = sizeof(tt__MotionExpression);
		((tt__MotionExpression*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MotionExpression, n);
		if (size)
			*size = n * sizeof(tt__MotionExpression);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MotionExpression*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MotionExpression*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MotionExpression(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MotionExpression %p -> %p\n", q, p));
	*(tt__MotionExpression*)p = *(tt__MotionExpression*)q;
}

void tt__PolylineArrayConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PolylineArrayConfiguration::PolylineArray = NULL;
	this->tt__PolylineArrayConfiguration::__size = 0;
	this->tt__PolylineArrayConfiguration::__any = NULL;
	this->tt__PolylineArrayConfiguration::__anyAttribute = NULL;
}

void tt__PolylineArrayConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PolylineArray(soap, &this->tt__PolylineArrayConfiguration::PolylineArray);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PolylineArrayConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PolylineArrayConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArrayConfiguration(struct soap *soap, const char *tag, int id, const tt__PolylineArrayConfiguration *a, const char *type)
{
	if (((tt__PolylineArrayConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PolylineArrayConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArrayConfiguration), "tt:PolylineArrayConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PolylineArrayConfiguration::PolylineArray)
	{	if (soap_out_PointerTott__PolylineArray(soap, "tt:PolylineArray", -1, &a->tt__PolylineArrayConfiguration::PolylineArray, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PolylineArray"))
		return soap->error;
	if (a->tt__PolylineArrayConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__PolylineArrayConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PolylineArrayConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PolylineArrayConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PolylineArrayConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__PolylineArrayConfiguration * SOAP_FMAC4 soap_in_tt__PolylineArrayConfiguration(struct soap *soap, const char *tag, tt__PolylineArrayConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PolylineArrayConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArrayConfiguration, sizeof(tt__PolylineArrayConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PolylineArrayConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PolylineArrayConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PolylineArrayConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PolylineArray1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PolylineArray1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PolylineArray(soap, "tt:PolylineArray", &(a->tt__PolylineArrayConfiguration::PolylineArray), "tt:PolylineArray"))
				{	soap_flag_PolylineArray1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PolylineArrayConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PolylineArrayConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PolylineArrayConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PolylineArrayConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PolylineArrayConfiguration::__any, "xsd:byte"))
				{	a->tt__PolylineArrayConfiguration::__size++;
					a->tt__PolylineArrayConfiguration::__any = NULL;
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
		if (a->tt__PolylineArrayConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PolylineArrayConfiguration::__size)
			a->tt__PolylineArrayConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PolylineArrayConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PolylineArrayConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArrayConfiguration, 0, sizeof(tt__PolylineArrayConfiguration), 0, soap_copy_tt__PolylineArrayConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PolylineArray1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PolylineArrayConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PolylineArrayConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:PolylineArrayConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PolylineArrayConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PolylineArrayConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__PolylineArrayConfiguration * SOAP_FMAC4 soap_get_tt__PolylineArrayConfiguration(struct soap *soap, tt__PolylineArrayConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArrayConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PolylineArrayConfiguration * SOAP_FMAC2 soap_instantiate_tt__PolylineArrayConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PolylineArrayConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PolylineArrayConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PolylineArrayConfiguration);
		if (size)
			*size = sizeof(tt__PolylineArrayConfiguration);
		((tt__PolylineArrayConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PolylineArrayConfiguration, n);
		if (size)
			*size = n * sizeof(tt__PolylineArrayConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PolylineArrayConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PolylineArrayConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PolylineArrayConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PolylineArrayConfiguration %p -> %p\n", q, p));
	*(tt__PolylineArrayConfiguration*)p = *(tt__PolylineArrayConfiguration*)q;
}

void tt__PolylineArrayExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PolylineArrayExtension::__size = 0;
	this->tt__PolylineArrayExtension::__any = NULL;
}

void tt__PolylineArrayExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PolylineArrayExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PolylineArrayExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArrayExtension(struct soap *soap, const char *tag, int id, const tt__PolylineArrayExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArrayExtension), "tt:PolylineArrayExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PolylineArrayExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PolylineArrayExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PolylineArrayExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PolylineArrayExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PolylineArrayExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PolylineArrayExtension * SOAP_FMAC4 soap_in_tt__PolylineArrayExtension(struct soap *soap, const char *tag, tt__PolylineArrayExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PolylineArrayExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArrayExtension, sizeof(tt__PolylineArrayExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PolylineArrayExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PolylineArrayExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__PolylineArrayExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PolylineArrayExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PolylineArrayExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PolylineArrayExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PolylineArrayExtension::__any, "xsd:byte"))
				{	a->tt__PolylineArrayExtension::__size++;
					a->tt__PolylineArrayExtension::__any = NULL;
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
		if (a->tt__PolylineArrayExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PolylineArrayExtension::__size)
			a->tt__PolylineArrayExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PolylineArrayExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PolylineArrayExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArrayExtension, 0, sizeof(tt__PolylineArrayExtension), 0, soap_copy_tt__PolylineArrayExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PolylineArrayExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PolylineArrayExtension);
	if (this->soap_out(soap, tag?tag:"tt:PolylineArrayExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PolylineArrayExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PolylineArrayExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PolylineArrayExtension * SOAP_FMAC4 soap_get_tt__PolylineArrayExtension(struct soap *soap, tt__PolylineArrayExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArrayExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PolylineArrayExtension * SOAP_FMAC2 soap_instantiate_tt__PolylineArrayExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PolylineArrayExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PolylineArrayExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PolylineArrayExtension);
		if (size)
			*size = sizeof(tt__PolylineArrayExtension);
		((tt__PolylineArrayExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PolylineArrayExtension, n);
		if (size)
			*size = n * sizeof(tt__PolylineArrayExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PolylineArrayExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PolylineArrayExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PolylineArrayExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PolylineArrayExtension %p -> %p\n", q, p));
	*(tt__PolylineArrayExtension*)p = *(tt__PolylineArrayExtension*)q;
}

void tt__PolylineArray::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PolylineArray::__sizeSegment = 0;
	this->tt__PolylineArray::Segment = NULL;
	this->tt__PolylineArray::Extension = NULL;
	this->tt__PolylineArray::__anyAttribute = NULL;
}

void tt__PolylineArray::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__PolylineArray::Segment)
	{	int i;
		for (i = 0; i < this->tt__PolylineArray::__sizeSegment; i++)
		{
			soap_serialize_PointerTott__Polyline(soap, this->tt__PolylineArray::Segment + i);
		}
	}
	soap_serialize_PointerTott__PolylineArrayExtension(soap, &this->tt__PolylineArray::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PolylineArray::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PolylineArray(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArray(struct soap *soap, const char *tag, int id, const tt__PolylineArray *a, const char *type)
{
	if (((tt__PolylineArray*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PolylineArray*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArray), "tt:PolylineArray"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PolylineArray::Segment)
	{	int i;
		for (i = 0; i < a->tt__PolylineArray::__sizeSegment; i++)
			if (soap_out_PointerTott__Polyline(soap, "tt:Segment", -1, a->tt__PolylineArray::Segment + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PolylineArrayExtension(soap, "tt:Extension", -1, &(a->tt__PolylineArray::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PolylineArray::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PolylineArray(soap, tag, this, type);
}

SOAP_FMAC3 tt__PolylineArray * SOAP_FMAC4 soap_in_tt__PolylineArray(struct soap *soap, const char *tag, tt__PolylineArray *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PolylineArray *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArray, sizeof(tt__PolylineArray), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PolylineArray)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PolylineArray *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PolylineArray*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Segment1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Segment", 1, NULL))
			{	if (a->tt__PolylineArray::Segment == NULL)
				{	if (soap_blist_Segment1 == NULL)
						soap_blist_Segment1 = soap_new_block(soap);
					a->tt__PolylineArray::Segment = (tt__Polyline **)soap_push_block(soap, soap_blist_Segment1, sizeof(tt__Polyline *));
					if (a->tt__PolylineArray::Segment == NULL)
						return NULL;
					*a->tt__PolylineArray::Segment = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Polyline(soap, "tt:Segment", a->tt__PolylineArray::Segment, "tt:Polyline"))
				{	a->tt__PolylineArray::__sizeSegment++;
					a->tt__PolylineArray::Segment = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PolylineArrayExtension(soap, "tt:Extension", &(a->tt__PolylineArray::Extension), "tt:PolylineArrayExtension"))
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
		if (a->tt__PolylineArray::Segment)
			soap_pop_block(soap, soap_blist_Segment1);
		if (a->tt__PolylineArray::__sizeSegment)
			a->tt__PolylineArray::Segment = (tt__Polyline **)soap_save_block(soap, soap_blist_Segment1, NULL, 1);
		else
		{	a->tt__PolylineArray::Segment = NULL;
			if (soap_blist_Segment1)
				soap_end_block(soap, soap_blist_Segment1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PolylineArray *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArray, 0, sizeof(tt__PolylineArray), 0, soap_copy_tt__PolylineArray);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__PolylineArray::__sizeSegment < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PolylineArray::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PolylineArray);
	if (this->soap_out(soap, tag?tag:"tt:PolylineArray", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PolylineArray::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PolylineArray(soap, this, tag, type);
}

SOAP_FMAC3 tt__PolylineArray * SOAP_FMAC4 soap_get_tt__PolylineArray(struct soap *soap, tt__PolylineArray *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArray(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PolylineArray * SOAP_FMAC2 soap_instantiate_tt__PolylineArray(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PolylineArray(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PolylineArray, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PolylineArray);
		if (size)
			*size = sizeof(tt__PolylineArray);
		((tt__PolylineArray*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PolylineArray, n);
		if (size)
			*size = n * sizeof(tt__PolylineArray);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PolylineArray*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PolylineArray*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PolylineArray(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PolylineArray %p -> %p\n", q, p));
	*(tt__PolylineArray*)p = *(tt__PolylineArray*)q;
}

void tt__PolygonConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PolygonConfiguration::Polygon = NULL;
	this->tt__PolygonConfiguration::__size = 0;
	this->tt__PolygonConfiguration::__any = NULL;
	this->tt__PolygonConfiguration::__anyAttribute = NULL;
}

void tt__PolygonConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Polygon(soap, &this->tt__PolygonConfiguration::Polygon);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PolygonConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PolygonConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolygonConfiguration(struct soap *soap, const char *tag, int id, const tt__PolygonConfiguration *a, const char *type)
{
	if (((tt__PolygonConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PolygonConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolygonConfiguration), "tt:PolygonConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PolygonConfiguration::Polygon)
	{	if (soap_out_PointerTott__Polygon(soap, "tt:Polygon", -1, &a->tt__PolygonConfiguration::Polygon, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Polygon"))
		return soap->error;
	if (a->tt__PolygonConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__PolygonConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PolygonConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PolygonConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PolygonConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__PolygonConfiguration * SOAP_FMAC4 soap_in_tt__PolygonConfiguration(struct soap *soap, const char *tag, tt__PolygonConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PolygonConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolygonConfiguration, sizeof(tt__PolygonConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PolygonConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PolygonConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PolygonConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Polygon1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Polygon1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Polygon(soap, "tt:Polygon", &(a->tt__PolygonConfiguration::Polygon), "tt:Polygon"))
				{	soap_flag_Polygon1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PolygonConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PolygonConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PolygonConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PolygonConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PolygonConfiguration::__any, "xsd:byte"))
				{	a->tt__PolygonConfiguration::__size++;
					a->tt__PolygonConfiguration::__any = NULL;
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
		if (a->tt__PolygonConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PolygonConfiguration::__size)
			a->tt__PolygonConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PolygonConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PolygonConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolygonConfiguration, 0, sizeof(tt__PolygonConfiguration), 0, soap_copy_tt__PolygonConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Polygon1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PolygonConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PolygonConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:PolygonConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PolygonConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PolygonConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__PolygonConfiguration * SOAP_FMAC4 soap_get_tt__PolygonConfiguration(struct soap *soap, tt__PolygonConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolygonConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PolygonConfiguration * SOAP_FMAC2 soap_instantiate_tt__PolygonConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PolygonConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PolygonConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PolygonConfiguration);
		if (size)
			*size = sizeof(tt__PolygonConfiguration);
		((tt__PolygonConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PolygonConfiguration, n);
		if (size)
			*size = n * sizeof(tt__PolygonConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PolygonConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PolygonConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PolygonConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PolygonConfiguration %p -> %p\n", q, p));
	*(tt__PolygonConfiguration*)p = *(tt__PolygonConfiguration*)q;
}

void tt__SupportedAnalyticsModulesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SupportedAnalyticsModulesExtension::__size = 0;
	this->tt__SupportedAnalyticsModulesExtension::__any = NULL;
}

void tt__SupportedAnalyticsModulesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SupportedAnalyticsModulesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SupportedAnalyticsModulesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const char *tag, int id, const tt__SupportedAnalyticsModulesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension), "tt:SupportedAnalyticsModulesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SupportedAnalyticsModulesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SupportedAnalyticsModulesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SupportedAnalyticsModulesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SupportedAnalyticsModulesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SupportedAnalyticsModulesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SupportedAnalyticsModulesExtension * SOAP_FMAC4 soap_in_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const char *tag, tt__SupportedAnalyticsModulesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SupportedAnalyticsModulesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension, sizeof(tt__SupportedAnalyticsModulesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SupportedAnalyticsModulesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SupportedAnalyticsModulesExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__SupportedAnalyticsModulesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SupportedAnalyticsModulesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SupportedAnalyticsModulesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SupportedAnalyticsModulesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SupportedAnalyticsModulesExtension::__any, "xsd:byte"))
				{	a->tt__SupportedAnalyticsModulesExtension::__size++;
					a->tt__SupportedAnalyticsModulesExtension::__any = NULL;
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
		if (a->tt__SupportedAnalyticsModulesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SupportedAnalyticsModulesExtension::__size)
			a->tt__SupportedAnalyticsModulesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SupportedAnalyticsModulesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SupportedAnalyticsModulesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension, 0, sizeof(tt__SupportedAnalyticsModulesExtension), 0, soap_copy_tt__SupportedAnalyticsModulesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SupportedAnalyticsModulesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension);
	if (this->soap_out(soap, tag?tag:"tt:SupportedAnalyticsModulesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SupportedAnalyticsModulesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SupportedAnalyticsModulesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SupportedAnalyticsModulesExtension * SOAP_FMAC4 soap_get_tt__SupportedAnalyticsModulesExtension(struct soap *soap, tt__SupportedAnalyticsModulesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedAnalyticsModulesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SupportedAnalyticsModulesExtension * SOAP_FMAC2 soap_instantiate_tt__SupportedAnalyticsModulesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SupportedAnalyticsModulesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SupportedAnalyticsModulesExtension);
		if (size)
			*size = sizeof(tt__SupportedAnalyticsModulesExtension);
		((tt__SupportedAnalyticsModulesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SupportedAnalyticsModulesExtension, n);
		if (size)
			*size = n * sizeof(tt__SupportedAnalyticsModulesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SupportedAnalyticsModulesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SupportedAnalyticsModulesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SupportedAnalyticsModulesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SupportedAnalyticsModulesExtension %p -> %p\n", q, p));
	*(tt__SupportedAnalyticsModulesExtension*)p = *(tt__SupportedAnalyticsModulesExtension*)q;
}

void tt__SupportedAnalyticsModules::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleContentSchemaLocation = 0;
	this->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = NULL;
	this->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleDescription = 0;
	this->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = NULL;
	this->tt__SupportedAnalyticsModules::Extension = NULL;
	this->tt__SupportedAnalyticsModules::__anyAttribute = NULL;
}

void tt__SupportedAnalyticsModules::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < this->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleContentSchemaLocation; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation + i);
		}
	}
	if (this->tt__SupportedAnalyticsModules::AnalyticsModuleDescription)
	{	int i;
		for (i = 0; i < this->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleDescription; i++)
		{
			soap_serialize_PointerTott__ConfigDescription(soap, this->tt__SupportedAnalyticsModules::AnalyticsModuleDescription + i);
		}
	}
	soap_serialize_PointerTott__SupportedAnalyticsModulesExtension(soap, &this->tt__SupportedAnalyticsModules::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SupportedAnalyticsModules::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SupportedAnalyticsModules(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedAnalyticsModules(struct soap *soap, const char *tag, int id, const tt__SupportedAnalyticsModules *a, const char *type)
{
	if (((tt__SupportedAnalyticsModules*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SupportedAnalyticsModules*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedAnalyticsModules), "tt:SupportedAnalyticsModules"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleContentSchemaLocation; i++)
			if (soap_out_xsd__anyURI(soap, "tt:AnalyticsModuleContentSchemaLocation", -1, a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation + i, ""))
				return soap->error;
	}
	if (a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription)
	{	int i;
		for (i = 0; i < a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleDescription; i++)
			if (soap_out_PointerTott__ConfigDescription(soap, "tt:AnalyticsModuleDescription", -1, a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SupportedAnalyticsModulesExtension(soap, "tt:Extension", -1, &(a->tt__SupportedAnalyticsModules::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SupportedAnalyticsModules::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SupportedAnalyticsModules(soap, tag, this, type);
}

SOAP_FMAC3 tt__SupportedAnalyticsModules * SOAP_FMAC4 soap_in_tt__SupportedAnalyticsModules(struct soap *soap, const char *tag, tt__SupportedAnalyticsModules *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SupportedAnalyticsModules *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedAnalyticsModules, sizeof(tt__SupportedAnalyticsModules), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SupportedAnalyticsModules)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SupportedAnalyticsModules *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SupportedAnalyticsModules*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_AnalyticsModuleContentSchemaLocation1 = NULL;
	struct soap_blist *soap_blist_AnalyticsModuleDescription1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModuleContentSchemaLocation", 1, NULL))
			{	if (a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation == NULL)
				{	if (soap_blist_AnalyticsModuleContentSchemaLocation1 == NULL)
						soap_blist_AnalyticsModuleContentSchemaLocation1 = soap_new_block(soap);
					a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = (char **)soap_push_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation1, sizeof(char *));
					if (a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation == NULL)
						return NULL;
					*a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:AnalyticsModuleContentSchemaLocation", a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation, "xsd:anyURI"))
				{	a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleContentSchemaLocation++;
					a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModuleDescription", 1, NULL))
			{	if (a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription == NULL)
				{	if (soap_blist_AnalyticsModuleDescription1 == NULL)
						soap_blist_AnalyticsModuleDescription1 = soap_new_block(soap);
					a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = (tt__ConfigDescription **)soap_push_block(soap, soap_blist_AnalyticsModuleDescription1, sizeof(tt__ConfigDescription *));
					if (a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription == NULL)
						return NULL;
					*a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__ConfigDescription(soap, "tt:AnalyticsModuleDescription", a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription, "tt:ConfigDescription"))
				{	a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleDescription++;
					a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedAnalyticsModulesExtension(soap, "tt:Extension", &(a->tt__SupportedAnalyticsModules::Extension), "tt:SupportedAnalyticsModulesExtension"))
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
		if (a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation)
			soap_pop_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation1);
		if (a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleContentSchemaLocation)
			a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = (char **)soap_save_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation1, NULL, 1);
		else
		{	a->tt__SupportedAnalyticsModules::AnalyticsModuleContentSchemaLocation = NULL;
			if (soap_blist_AnalyticsModuleContentSchemaLocation1)
				soap_end_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation1);
		}
		if (a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription)
			soap_pop_block(soap, soap_blist_AnalyticsModuleDescription1);
		if (a->tt__SupportedAnalyticsModules::__sizeAnalyticsModuleDescription)
			a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = (tt__ConfigDescription **)soap_save_block(soap, soap_blist_AnalyticsModuleDescription1, NULL, 1);
		else
		{	a->tt__SupportedAnalyticsModules::AnalyticsModuleDescription = NULL;
			if (soap_blist_AnalyticsModuleDescription1)
				soap_end_block(soap, soap_blist_AnalyticsModuleDescription1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SupportedAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedAnalyticsModules, 0, sizeof(tt__SupportedAnalyticsModules), 0, soap_copy_tt__SupportedAnalyticsModules);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SupportedAnalyticsModules::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SupportedAnalyticsModules);
	if (this->soap_out(soap, tag?tag:"tt:SupportedAnalyticsModules", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SupportedAnalyticsModules::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SupportedAnalyticsModules(soap, this, tag, type);
}

SOAP_FMAC3 tt__SupportedAnalyticsModules * SOAP_FMAC4 soap_get_tt__SupportedAnalyticsModules(struct soap *soap, tt__SupportedAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SupportedAnalyticsModules * SOAP_FMAC2 soap_instantiate_tt__SupportedAnalyticsModules(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SupportedAnalyticsModules(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SupportedAnalyticsModules, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SupportedAnalyticsModules);
		if (size)
			*size = sizeof(tt__SupportedAnalyticsModules);
		((tt__SupportedAnalyticsModules*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SupportedAnalyticsModules, n);
		if (size)
			*size = n * sizeof(tt__SupportedAnalyticsModules);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SupportedAnalyticsModules*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SupportedAnalyticsModules*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SupportedAnalyticsModules(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SupportedAnalyticsModules %p -> %p\n", q, p));
	*(tt__SupportedAnalyticsModules*)p = *(tt__SupportedAnalyticsModules*)q;
}

void tt__SupportedRulesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SupportedRulesExtension::__size = 0;
	this->tt__SupportedRulesExtension::__any = NULL;
}

void tt__SupportedRulesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SupportedRulesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SupportedRulesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedRulesExtension(struct soap *soap, const char *tag, int id, const tt__SupportedRulesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedRulesExtension), "tt:SupportedRulesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SupportedRulesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SupportedRulesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SupportedRulesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SupportedRulesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SupportedRulesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SupportedRulesExtension * SOAP_FMAC4 soap_in_tt__SupportedRulesExtension(struct soap *soap, const char *tag, tt__SupportedRulesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SupportedRulesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedRulesExtension, sizeof(tt__SupportedRulesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SupportedRulesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SupportedRulesExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__SupportedRulesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SupportedRulesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SupportedRulesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SupportedRulesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SupportedRulesExtension::__any, "xsd:byte"))
				{	a->tt__SupportedRulesExtension::__size++;
					a->tt__SupportedRulesExtension::__any = NULL;
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
		if (a->tt__SupportedRulesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SupportedRulesExtension::__size)
			a->tt__SupportedRulesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SupportedRulesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SupportedRulesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedRulesExtension, 0, sizeof(tt__SupportedRulesExtension), 0, soap_copy_tt__SupportedRulesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SupportedRulesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SupportedRulesExtension);
	if (this->soap_out(soap, tag?tag:"tt:SupportedRulesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SupportedRulesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SupportedRulesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SupportedRulesExtension * SOAP_FMAC4 soap_get_tt__SupportedRulesExtension(struct soap *soap, tt__SupportedRulesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedRulesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SupportedRulesExtension * SOAP_FMAC2 soap_instantiate_tt__SupportedRulesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SupportedRulesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SupportedRulesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SupportedRulesExtension);
		if (size)
			*size = sizeof(tt__SupportedRulesExtension);
		((tt__SupportedRulesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SupportedRulesExtension, n);
		if (size)
			*size = n * sizeof(tt__SupportedRulesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SupportedRulesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SupportedRulesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SupportedRulesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SupportedRulesExtension %p -> %p\n", q, p));
	*(tt__SupportedRulesExtension*)p = *(tt__SupportedRulesExtension*)q;
}

void tt__SupportedRules::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SupportedRules::__sizeRuleContentSchemaLocation = 0;
	this->tt__SupportedRules::RuleContentSchemaLocation = NULL;
	this->tt__SupportedRules::__sizeRuleDescription = 0;
	this->tt__SupportedRules::RuleDescription = NULL;
	this->tt__SupportedRules::Extension = NULL;
	this->tt__SupportedRules::__anyAttribute = NULL;
}

void tt__SupportedRules::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__SupportedRules::RuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < this->tt__SupportedRules::__sizeRuleContentSchemaLocation; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->tt__SupportedRules::RuleContentSchemaLocation + i);
		}
	}
	if (this->tt__SupportedRules::RuleDescription)
	{	int i;
		for (i = 0; i < this->tt__SupportedRules::__sizeRuleDescription; i++)
		{
			soap_serialize_PointerTott__ConfigDescription(soap, this->tt__SupportedRules::RuleDescription + i);
		}
	}
	soap_serialize_PointerTott__SupportedRulesExtension(soap, &this->tt__SupportedRules::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SupportedRules::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SupportedRules(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedRules(struct soap *soap, const char *tag, int id, const tt__SupportedRules *a, const char *type)
{
	if (((tt__SupportedRules*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SupportedRules*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedRules), "tt:SupportedRules"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SupportedRules::RuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->tt__SupportedRules::__sizeRuleContentSchemaLocation; i++)
			if (soap_out_xsd__anyURI(soap, "tt:RuleContentSchemaLocation", -1, a->tt__SupportedRules::RuleContentSchemaLocation + i, ""))
				return soap->error;
	}
	if (a->tt__SupportedRules::RuleDescription)
	{	int i;
		for (i = 0; i < a->tt__SupportedRules::__sizeRuleDescription; i++)
			if (soap_out_PointerTott__ConfigDescription(soap, "tt:RuleDescription", -1, a->tt__SupportedRules::RuleDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SupportedRulesExtension(soap, "tt:Extension", -1, &(a->tt__SupportedRules::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SupportedRules::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SupportedRules(soap, tag, this, type);
}

SOAP_FMAC3 tt__SupportedRules * SOAP_FMAC4 soap_in_tt__SupportedRules(struct soap *soap, const char *tag, tt__SupportedRules *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SupportedRules *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedRules, sizeof(tt__SupportedRules), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SupportedRules)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SupportedRules *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SupportedRules*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_RuleContentSchemaLocation1 = NULL;
	struct soap_blist *soap_blist_RuleDescription1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RuleContentSchemaLocation", 1, NULL))
			{	if (a->tt__SupportedRules::RuleContentSchemaLocation == NULL)
				{	if (soap_blist_RuleContentSchemaLocation1 == NULL)
						soap_blist_RuleContentSchemaLocation1 = soap_new_block(soap);
					a->tt__SupportedRules::RuleContentSchemaLocation = (char **)soap_push_block(soap, soap_blist_RuleContentSchemaLocation1, sizeof(char *));
					if (a->tt__SupportedRules::RuleContentSchemaLocation == NULL)
						return NULL;
					*a->tt__SupportedRules::RuleContentSchemaLocation = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:RuleContentSchemaLocation", a->tt__SupportedRules::RuleContentSchemaLocation, "xsd:anyURI"))
				{	a->tt__SupportedRules::__sizeRuleContentSchemaLocation++;
					a->tt__SupportedRules::RuleContentSchemaLocation = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RuleDescription", 1, NULL))
			{	if (a->tt__SupportedRules::RuleDescription == NULL)
				{	if (soap_blist_RuleDescription1 == NULL)
						soap_blist_RuleDescription1 = soap_new_block(soap);
					a->tt__SupportedRules::RuleDescription = (tt__ConfigDescription **)soap_push_block(soap, soap_blist_RuleDescription1, sizeof(tt__ConfigDescription *));
					if (a->tt__SupportedRules::RuleDescription == NULL)
						return NULL;
					*a->tt__SupportedRules::RuleDescription = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__ConfigDescription(soap, "tt:RuleDescription", a->tt__SupportedRules::RuleDescription, "tt:ConfigDescription"))
				{	a->tt__SupportedRules::__sizeRuleDescription++;
					a->tt__SupportedRules::RuleDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedRulesExtension(soap, "tt:Extension", &(a->tt__SupportedRules::Extension), "tt:SupportedRulesExtension"))
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
		if (a->tt__SupportedRules::RuleContentSchemaLocation)
			soap_pop_block(soap, soap_blist_RuleContentSchemaLocation1);
		if (a->tt__SupportedRules::__sizeRuleContentSchemaLocation)
			a->tt__SupportedRules::RuleContentSchemaLocation = (char **)soap_save_block(soap, soap_blist_RuleContentSchemaLocation1, NULL, 1);
		else
		{	a->tt__SupportedRules::RuleContentSchemaLocation = NULL;
			if (soap_blist_RuleContentSchemaLocation1)
				soap_end_block(soap, soap_blist_RuleContentSchemaLocation1);
		}
		if (a->tt__SupportedRules::RuleDescription)
			soap_pop_block(soap, soap_blist_RuleDescription1);
		if (a->tt__SupportedRules::__sizeRuleDescription)
			a->tt__SupportedRules::RuleDescription = (tt__ConfigDescription **)soap_save_block(soap, soap_blist_RuleDescription1, NULL, 1);
		else
		{	a->tt__SupportedRules::RuleDescription = NULL;
			if (soap_blist_RuleDescription1)
				soap_end_block(soap, soap_blist_RuleDescription1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SupportedRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedRules, 0, sizeof(tt__SupportedRules), 0, soap_copy_tt__SupportedRules);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SupportedRules::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SupportedRules);
	if (this->soap_out(soap, tag?tag:"tt:SupportedRules", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SupportedRules::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SupportedRules(soap, this, tag, type);
}

SOAP_FMAC3 tt__SupportedRules * SOAP_FMAC4 soap_get_tt__SupportedRules(struct soap *soap, tt__SupportedRules *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SupportedRules * SOAP_FMAC2 soap_instantiate_tt__SupportedRules(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SupportedRules(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SupportedRules, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SupportedRules);
		if (size)
			*size = sizeof(tt__SupportedRules);
		((tt__SupportedRules*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SupportedRules, n);
		if (size)
			*size = n * sizeof(tt__SupportedRules);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SupportedRules*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SupportedRules*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SupportedRules(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SupportedRules %p -> %p\n", q, p));
	*(tt__SupportedRules*)p = *(tt__SupportedRules*)q;
}

void tt__ConfigDescriptionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ConfigDescriptionExtension::__size = 0;
	this->tt__ConfigDescriptionExtension::__any = NULL;
}

void tt__ConfigDescriptionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ConfigDescriptionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ConfigDescriptionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ConfigDescriptionExtension(struct soap *soap, const char *tag, int id, const tt__ConfigDescriptionExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ConfigDescriptionExtension), "tt:ConfigDescriptionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ConfigDescriptionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ConfigDescriptionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ConfigDescriptionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ConfigDescriptionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ConfigDescriptionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ConfigDescriptionExtension * SOAP_FMAC4 soap_in_tt__ConfigDescriptionExtension(struct soap *soap, const char *tag, tt__ConfigDescriptionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ConfigDescriptionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ConfigDescriptionExtension, sizeof(tt__ConfigDescriptionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ConfigDescriptionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ConfigDescriptionExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ConfigDescriptionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ConfigDescriptionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ConfigDescriptionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ConfigDescriptionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ConfigDescriptionExtension::__any, "xsd:byte"))
				{	a->tt__ConfigDescriptionExtension::__size++;
					a->tt__ConfigDescriptionExtension::__any = NULL;
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
		if (a->tt__ConfigDescriptionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ConfigDescriptionExtension::__size)
			a->tt__ConfigDescriptionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ConfigDescriptionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ConfigDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ConfigDescriptionExtension, 0, sizeof(tt__ConfigDescriptionExtension), 0, soap_copy_tt__ConfigDescriptionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ConfigDescriptionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ConfigDescriptionExtension);
	if (this->soap_out(soap, tag?tag:"tt:ConfigDescriptionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ConfigDescriptionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ConfigDescriptionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ConfigDescriptionExtension * SOAP_FMAC4 soap_get_tt__ConfigDescriptionExtension(struct soap *soap, tt__ConfigDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ConfigDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ConfigDescriptionExtension * SOAP_FMAC2 soap_instantiate_tt__ConfigDescriptionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ConfigDescriptionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ConfigDescriptionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ConfigDescriptionExtension);
		if (size)
			*size = sizeof(tt__ConfigDescriptionExtension);
		((tt__ConfigDescriptionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ConfigDescriptionExtension, n);
		if (size)
			*size = n * sizeof(tt__ConfigDescriptionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ConfigDescriptionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ConfigDescriptionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ConfigDescriptionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ConfigDescriptionExtension %p -> %p\n", q, p));
	*(tt__ConfigDescriptionExtension*)p = *(tt__ConfigDescriptionExtension*)q;
}

void tt__ConfigDescription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ConfigDescription::Parameters = NULL;
	this->tt__ConfigDescription::__sizeMessages = 0;
	this->tt__ConfigDescription::Messages = NULL;
	this->tt__ConfigDescription::Extension = NULL;
	soap_default__QName(soap, &this->tt__ConfigDescription::Name);
	this->tt__ConfigDescription::__anyAttribute = NULL;
}

void tt__ConfigDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &this->tt__ConfigDescription::Parameters);
	if (this->tt__ConfigDescription::Messages)
	{	int i;
		for (i = 0; i < this->tt__ConfigDescription::__sizeMessages; i++)
		{
			soap_embedded(soap, this->tt__ConfigDescription::Messages + i, SOAP_TYPE__tt__ConfigDescription_Messages);
			this->tt__ConfigDescription::Messages[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTott__ConfigDescriptionExtension(soap, &this->tt__ConfigDescription::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ConfigDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ConfigDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ConfigDescription(struct soap *soap, const char *tag, int id, const tt__ConfigDescription *a, const char *type)
{
	if (((tt__ConfigDescription*)a)->Name)
		soap_set_attr(soap, "Name", soap_QName2s(soap, ((tt__ConfigDescription*)a)->Name), 1);
	if (((tt__ConfigDescription*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ConfigDescription*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ConfigDescription), "tt:ConfigDescription"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ConfigDescription::Parameters)
	{	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Parameters", -1, &a->tt__ConfigDescription::Parameters, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Parameters"))
		return soap->error;
	if (a->tt__ConfigDescription::Messages)
	{	int i;
		for (i = 0; i < a->tt__ConfigDescription::__sizeMessages; i++)
			if (a->tt__ConfigDescription::Messages[i].soap_out(soap, "tt:Messages", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ConfigDescriptionExtension(soap, "tt:Extension", -1, &(a->tt__ConfigDescription::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ConfigDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ConfigDescription(soap, tag, this, type);
}

SOAP_FMAC3 tt__ConfigDescription * SOAP_FMAC4 soap_in_tt__ConfigDescription(struct soap *soap, const char *tag, tt__ConfigDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ConfigDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ConfigDescription, sizeof(tt__ConfigDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ConfigDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ConfigDescription *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2QName(soap, soap_attr_value(soap, "Name", 1), &((tt__ConfigDescription*)a)->Name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ConfigDescription*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Parameters1 = 1;
	struct soap_blist *soap_blist_Messages1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Parameters1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Parameters", &(a->tt__ConfigDescription::Parameters), "tt:ItemListDescription"))
				{	soap_flag_Parameters1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Messages", 1, NULL))
			{	if (a->tt__ConfigDescription::Messages == NULL)
				{	if (soap_blist_Messages1 == NULL)
						soap_blist_Messages1 = soap_new_block(soap);
					a->tt__ConfigDescription::Messages = (_tt__ConfigDescription_Messages *)soap_push_block(soap, soap_blist_Messages1, sizeof(_tt__ConfigDescription_Messages));
					if (a->tt__ConfigDescription::Messages == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ConfigDescription::Messages, _tt__ConfigDescription_Messages);
					a->tt__ConfigDescription::Messages->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ConfigDescription_Messages(soap, "tt:Messages", a->tt__ConfigDescription::Messages, ""))
				{	a->tt__ConfigDescription::__sizeMessages++;
					a->tt__ConfigDescription::Messages = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ConfigDescriptionExtension(soap, "tt:Extension", &(a->tt__ConfigDescription::Extension), "tt:ConfigDescriptionExtension"))
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
		if (a->tt__ConfigDescription::Messages)
			soap_pop_block(soap, soap_blist_Messages1);
		if (a->tt__ConfigDescription::__sizeMessages)
			a->tt__ConfigDescription::Messages = (_tt__ConfigDescription_Messages *)soap_save_block(soap, soap_blist_Messages1, NULL, 1);
		else
		{	a->tt__ConfigDescription::Messages = NULL;
			if (soap_blist_Messages1)
				soap_end_block(soap, soap_blist_Messages1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ConfigDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ConfigDescription, 0, sizeof(tt__ConfigDescription), 0, soap_copy_tt__ConfigDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Parameters1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ConfigDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ConfigDescription);
	if (this->soap_out(soap, tag?tag:"tt:ConfigDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ConfigDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ConfigDescription(soap, this, tag, type);
}

SOAP_FMAC3 tt__ConfigDescription * SOAP_FMAC4 soap_get_tt__ConfigDescription(struct soap *soap, tt__ConfigDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ConfigDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ConfigDescription * SOAP_FMAC2 soap_instantiate_tt__ConfigDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ConfigDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ConfigDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ConfigDescription);
		if (size)
			*size = sizeof(tt__ConfigDescription);
		((tt__ConfigDescription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ConfigDescription, n);
		if (size)
			*size = n * sizeof(tt__ConfigDescription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ConfigDescription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ConfigDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ConfigDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ConfigDescription %p -> %p\n", q, p));
	*(tt__ConfigDescription*)p = *(tt__ConfigDescription*)q;
}

void tt__Config::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Config::Parameters = NULL;
	soap_default_string(soap, &this->tt__Config::Name);
	soap_default__QName(soap, &this->tt__Config::Type);
}

void tt__Config::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemList(soap, &this->tt__Config::Parameters);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Config::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Config(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Config(struct soap *soap, const char *tag, int id, const tt__Config *a, const char *type)
{
	if (((tt__Config*)a)->Name)
		soap_set_attr(soap, "Name", ((tt__Config*)a)->Name, 1);
	if (((tt__Config*)a)->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, ((tt__Config*)a)->Type), 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Config), "tt:Config"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Config::Parameters)
	{	if (soap_out_PointerTott__ItemList(soap, "tt:Parameters", -1, &a->tt__Config::Parameters, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Parameters"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Config::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Config(soap, tag, this, type);
}

SOAP_FMAC3 tt__Config * SOAP_FMAC4 soap_in_tt__Config(struct soap *soap, const char *tag, tt__Config *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Config *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Config, sizeof(tt__Config), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Config)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Config *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &((tt__Config*)a)->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &((tt__Config*)a)->Type, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Parameters1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Parameters1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Parameters", &(a->tt__Config::Parameters), "tt:ItemList"))
				{	soap_flag_Parameters1--;
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
	{	a = (tt__Config *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Config, 0, sizeof(tt__Config), 0, soap_copy_tt__Config);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Parameters1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Config::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Config);
	if (this->soap_out(soap, tag?tag:"tt:Config", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Config::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Config(soap, this, tag, type);
}

SOAP_FMAC3 tt__Config * SOAP_FMAC4 soap_get_tt__Config(struct soap *soap, tt__Config *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Config(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Config * SOAP_FMAC2 soap_instantiate_tt__Config(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Config(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Config, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Config);
		if (size)
			*size = sizeof(tt__Config);
		((tt__Config*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Config, n);
		if (size)
			*size = n * sizeof(tt__Config);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Config*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Config*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Config(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Config %p -> %p\n", q, p));
	*(tt__Config*)p = *(tt__Config*)q;
}

void tt__RuleEngineConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RuleEngineConfigurationExtension::__size = 0;
	this->tt__RuleEngineConfigurationExtension::__any = NULL;
}

void tt__RuleEngineConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RuleEngineConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RuleEngineConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RuleEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__RuleEngineConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RuleEngineConfigurationExtension), "tt:RuleEngineConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RuleEngineConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__RuleEngineConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RuleEngineConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RuleEngineConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RuleEngineConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__RuleEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__RuleEngineConfigurationExtension(struct soap *soap, const char *tag, tt__RuleEngineConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RuleEngineConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RuleEngineConfigurationExtension, sizeof(tt__RuleEngineConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RuleEngineConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RuleEngineConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__RuleEngineConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RuleEngineConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RuleEngineConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RuleEngineConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RuleEngineConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__RuleEngineConfigurationExtension::__size++;
					a->tt__RuleEngineConfigurationExtension::__any = NULL;
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
		if (a->tt__RuleEngineConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RuleEngineConfigurationExtension::__size)
			a->tt__RuleEngineConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RuleEngineConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RuleEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RuleEngineConfigurationExtension, 0, sizeof(tt__RuleEngineConfigurationExtension), 0, soap_copy_tt__RuleEngineConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RuleEngineConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RuleEngineConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:RuleEngineConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RuleEngineConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RuleEngineConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__RuleEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__RuleEngineConfigurationExtension(struct soap *soap, tt__RuleEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RuleEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RuleEngineConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__RuleEngineConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RuleEngineConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RuleEngineConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RuleEngineConfigurationExtension);
		if (size)
			*size = sizeof(tt__RuleEngineConfigurationExtension);
		((tt__RuleEngineConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RuleEngineConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__RuleEngineConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RuleEngineConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RuleEngineConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RuleEngineConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RuleEngineConfigurationExtension %p -> %p\n", q, p));
	*(tt__RuleEngineConfigurationExtension*)p = *(tt__RuleEngineConfigurationExtension*)q;
}

void tt__RuleEngineConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RuleEngineConfiguration::__sizeRule = 0;
	this->tt__RuleEngineConfiguration::Rule = NULL;
	this->tt__RuleEngineConfiguration::Extension = NULL;
	this->tt__RuleEngineConfiguration::__anyAttribute = NULL;
}

void tt__RuleEngineConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__RuleEngineConfiguration::Rule)
	{	int i;
		for (i = 0; i < this->tt__RuleEngineConfiguration::__sizeRule; i++)
		{
			soap_serialize_PointerTott__Config(soap, this->tt__RuleEngineConfiguration::Rule + i);
		}
	}
	soap_serialize_PointerTott__RuleEngineConfigurationExtension(soap, &this->tt__RuleEngineConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RuleEngineConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RuleEngineConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RuleEngineConfiguration(struct soap *soap, const char *tag, int id, const tt__RuleEngineConfiguration *a, const char *type)
{
	if (((tt__RuleEngineConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RuleEngineConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RuleEngineConfiguration), "tt:RuleEngineConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RuleEngineConfiguration::Rule)
	{	int i;
		for (i = 0; i < a->tt__RuleEngineConfiguration::__sizeRule; i++)
			if (soap_out_PointerTott__Config(soap, "tt:Rule", -1, a->tt__RuleEngineConfiguration::Rule + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RuleEngineConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__RuleEngineConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RuleEngineConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RuleEngineConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__RuleEngineConfiguration * SOAP_FMAC4 soap_in_tt__RuleEngineConfiguration(struct soap *soap, const char *tag, tt__RuleEngineConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RuleEngineConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RuleEngineConfiguration, sizeof(tt__RuleEngineConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RuleEngineConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RuleEngineConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RuleEngineConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Rule1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Rule", 1, NULL))
			{	if (a->tt__RuleEngineConfiguration::Rule == NULL)
				{	if (soap_blist_Rule1 == NULL)
						soap_blist_Rule1 = soap_new_block(soap);
					a->tt__RuleEngineConfiguration::Rule = (tt__Config **)soap_push_block(soap, soap_blist_Rule1, sizeof(tt__Config *));
					if (a->tt__RuleEngineConfiguration::Rule == NULL)
						return NULL;
					*a->tt__RuleEngineConfiguration::Rule = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Config(soap, "tt:Rule", a->tt__RuleEngineConfiguration::Rule, "tt:Config"))
				{	a->tt__RuleEngineConfiguration::__sizeRule++;
					a->tt__RuleEngineConfiguration::Rule = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RuleEngineConfigurationExtension(soap, "tt:Extension", &(a->tt__RuleEngineConfiguration::Extension), "tt:RuleEngineConfigurationExtension"))
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
		if (a->tt__RuleEngineConfiguration::Rule)
			soap_pop_block(soap, soap_blist_Rule1);
		if (a->tt__RuleEngineConfiguration::__sizeRule)
			a->tt__RuleEngineConfiguration::Rule = (tt__Config **)soap_save_block(soap, soap_blist_Rule1, NULL, 1);
		else
		{	a->tt__RuleEngineConfiguration::Rule = NULL;
			if (soap_blist_Rule1)
				soap_end_block(soap, soap_blist_Rule1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RuleEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RuleEngineConfiguration, 0, sizeof(tt__RuleEngineConfiguration), 0, soap_copy_tt__RuleEngineConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RuleEngineConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RuleEngineConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:RuleEngineConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RuleEngineConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RuleEngineConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__RuleEngineConfiguration * SOAP_FMAC4 soap_get_tt__RuleEngineConfiguration(struct soap *soap, tt__RuleEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RuleEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RuleEngineConfiguration * SOAP_FMAC2 soap_instantiate_tt__RuleEngineConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RuleEngineConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RuleEngineConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RuleEngineConfiguration);
		if (size)
			*size = sizeof(tt__RuleEngineConfiguration);
		((tt__RuleEngineConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RuleEngineConfiguration, n);
		if (size)
			*size = n * sizeof(tt__RuleEngineConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RuleEngineConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RuleEngineConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RuleEngineConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RuleEngineConfiguration %p -> %p\n", q, p));
	*(tt__RuleEngineConfiguration*)p = *(tt__RuleEngineConfiguration*)q;
}

void tt__AnalyticsEngineConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngineConfigurationExtension::__size = 0;
	this->tt__AnalyticsEngineConfigurationExtension::__any = NULL;
}

void tt__AnalyticsEngineConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension), "tt:AnalyticsEngineConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsEngineConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsEngineConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const char *tag, tt__AnalyticsEngineConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension, sizeof(tt__AnalyticsEngineConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AnalyticsEngineConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsEngineConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsEngineConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsEngineConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsEngineConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__AnalyticsEngineConfigurationExtension::__size++;
					a->tt__AnalyticsEngineConfigurationExtension::__any = NULL;
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
		if (a->tt__AnalyticsEngineConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsEngineConfigurationExtension::__size)
			a->tt__AnalyticsEngineConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension, 0, sizeof(tt__AnalyticsEngineConfigurationExtension), 0, soap_copy_tt__AnalyticsEngineConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsEngineConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, tt__AnalyticsEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineConfigurationExtension);
		if (size)
			*size = sizeof(tt__AnalyticsEngineConfigurationExtension);
		((tt__AnalyticsEngineConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngineConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngineConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngineConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineConfigurationExtension %p -> %p\n", q, p));
	*(tt__AnalyticsEngineConfigurationExtension*)p = *(tt__AnalyticsEngineConfigurationExtension*)q;
}

void tt__AnalyticsEngineConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsEngineConfiguration::__sizeAnalyticsModule = 0;
	this->tt__AnalyticsEngineConfiguration::AnalyticsModule = NULL;
	this->tt__AnalyticsEngineConfiguration::Extension = NULL;
	this->tt__AnalyticsEngineConfiguration::__anyAttribute = NULL;
}

void tt__AnalyticsEngineConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__AnalyticsEngineConfiguration::AnalyticsModule)
	{	int i;
		for (i = 0; i < this->tt__AnalyticsEngineConfiguration::__sizeAnalyticsModule; i++)
		{
			soap_serialize_PointerTott__Config(soap, this->tt__AnalyticsEngineConfiguration::AnalyticsModule + i);
		}
	}
	soap_serialize_PointerTott__AnalyticsEngineConfigurationExtension(soap, &this->tt__AnalyticsEngineConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineConfiguration(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineConfiguration *a, const char *type)
{
	if (((tt__AnalyticsEngineConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsEngineConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineConfiguration), "tt:AnalyticsEngineConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsEngineConfiguration::AnalyticsModule)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineConfiguration::__sizeAnalyticsModule; i++)
			if (soap_out_PointerTott__Config(soap, "tt:AnalyticsModule", -1, a->tt__AnalyticsEngineConfiguration::AnalyticsModule + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsEngineConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__AnalyticsEngineConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineConfiguration * SOAP_FMAC4 soap_in_tt__AnalyticsEngineConfiguration(struct soap *soap, const char *tag, tt__AnalyticsEngineConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineConfiguration, sizeof(tt__AnalyticsEngineConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsEngineConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_AnalyticsModule1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModule", 1, NULL))
			{	if (a->tt__AnalyticsEngineConfiguration::AnalyticsModule == NULL)
				{	if (soap_blist_AnalyticsModule1 == NULL)
						soap_blist_AnalyticsModule1 = soap_new_block(soap);
					a->tt__AnalyticsEngineConfiguration::AnalyticsModule = (tt__Config **)soap_push_block(soap, soap_blist_AnalyticsModule1, sizeof(tt__Config *));
					if (a->tt__AnalyticsEngineConfiguration::AnalyticsModule == NULL)
						return NULL;
					*a->tt__AnalyticsEngineConfiguration::AnalyticsModule = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Config(soap, "tt:AnalyticsModule", a->tt__AnalyticsEngineConfiguration::AnalyticsModule, "tt:Config"))
				{	a->tt__AnalyticsEngineConfiguration::__sizeAnalyticsModule++;
					a->tt__AnalyticsEngineConfiguration::AnalyticsModule = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineConfigurationExtension(soap, "tt:Extension", &(a->tt__AnalyticsEngineConfiguration::Extension), "tt:AnalyticsEngineConfigurationExtension"))
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
		if (a->tt__AnalyticsEngineConfiguration::AnalyticsModule)
			soap_pop_block(soap, soap_blist_AnalyticsModule1);
		if (a->tt__AnalyticsEngineConfiguration::__sizeAnalyticsModule)
			a->tt__AnalyticsEngineConfiguration::AnalyticsModule = (tt__Config **)soap_save_block(soap, soap_blist_AnalyticsModule1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineConfiguration::AnalyticsModule = NULL;
			if (soap_blist_AnalyticsModule1)
				soap_end_block(soap, soap_blist_AnalyticsModule1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineConfiguration, 0, sizeof(tt__AnalyticsEngineConfiguration), 0, soap_copy_tt__AnalyticsEngineConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsEngineConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineConfiguration * SOAP_FMAC4 soap_get_tt__AnalyticsEngineConfiguration(struct soap *soap, tt__AnalyticsEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineConfiguration * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineConfiguration);
		if (size)
			*size = sizeof(tt__AnalyticsEngineConfiguration);
		((tt__AnalyticsEngineConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineConfiguration, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsEngineConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsEngineConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsEngineConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineConfiguration %p -> %p\n", q, p));
	*(tt__AnalyticsEngineConfiguration*)p = *(tt__AnalyticsEngineConfiguration*)q;
}

void tt__MotionInCells::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MotionInCells::__size = 0;
	this->tt__MotionInCells::__any = NULL;
	soap_default_xsd__integer(soap, &this->tt__MotionInCells::Columns);
	soap_default_xsd__integer(soap, &this->tt__MotionInCells::Rows);
	this->tt__MotionInCells::Cells.xsd__base64Binary::soap_default(soap);
	this->tt__MotionInCells::__anyAttribute = NULL;
}

void tt__MotionInCells::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MotionInCells::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MotionInCells(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionInCells(struct soap *soap, const char *tag, int id, const tt__MotionInCells *a, const char *type)
{
	if (((tt__MotionInCells*)a)->Columns)
		soap_set_attr(soap, "Columns", ((tt__MotionInCells*)a)->Columns, 1);
	if (((tt__MotionInCells*)a)->Rows)
		soap_set_attr(soap, "Rows", ((tt__MotionInCells*)a)->Rows, 1);
	if (((tt__MotionInCells*)a)->Cells.__ptr)
		soap_set_attr(soap, "Cells", soap_s2base64(soap, ((tt__MotionInCells*)a)->Cells.__ptr, NULL, ((tt__MotionInCells*)a)->Cells.__size), 1);
	if (((tt__MotionInCells*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MotionInCells*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionInCells), "tt:MotionInCells"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MotionInCells::__any)
	{	int i;
		for (i = 0; i < a->tt__MotionInCells::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MotionInCells::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MotionInCells::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MotionInCells(soap, tag, this, type);
}

SOAP_FMAC3 tt__MotionInCells * SOAP_FMAC4 soap_in_tt__MotionInCells(struct soap *soap, const char *tag, tt__MotionInCells *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MotionInCells *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionInCells, sizeof(tt__MotionInCells), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MotionInCells)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MotionInCells *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Columns", 1), &((tt__MotionInCells*)a)->Columns, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Rows", 1), &((tt__MotionInCells*)a)->Rows, 0, -1))
		return NULL;
	if (!(((tt__MotionInCells*)a)->Cells.__ptr = (unsigned char*)soap_base642s(soap, soap_attr_value(soap, "Cells", 1), NULL, 0, &((tt__MotionInCells*)a)->Cells.__size)))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MotionInCells*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MotionInCells::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MotionInCells::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MotionInCells::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MotionInCells::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MotionInCells::__any, "xsd:byte"))
				{	a->tt__MotionInCells::__size++;
					a->tt__MotionInCells::__any = NULL;
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
		if (a->tt__MotionInCells::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MotionInCells::__size)
			a->tt__MotionInCells::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MotionInCells::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MotionInCells *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionInCells, 0, sizeof(tt__MotionInCells), 0, soap_copy_tt__MotionInCells);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MotionInCells::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MotionInCells);
	if (this->soap_out(soap, tag?tag:"tt:MotionInCells", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MotionInCells::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MotionInCells(soap, this, tag, type);
}

SOAP_FMAC3 tt__MotionInCells * SOAP_FMAC4 soap_get_tt__MotionInCells(struct soap *soap, tt__MotionInCells *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionInCells(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MotionInCells * SOAP_FMAC2 soap_instantiate_tt__MotionInCells(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MotionInCells(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MotionInCells, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MotionInCells);
		if (size)
			*size = sizeof(tt__MotionInCells);
		((tt__MotionInCells*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MotionInCells, n);
		if (size)
			*size = n * sizeof(tt__MotionInCells);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MotionInCells*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MotionInCells*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MotionInCells(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MotionInCells %p -> %p\n", q, p));
	*(tt__MotionInCells*)p = *(tt__MotionInCells*)q;
}

void tt__ObjectTreeExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ObjectTreeExtension::__size = 0;
	this->tt__ObjectTreeExtension::__any = NULL;
}

void tt__ObjectTreeExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ObjectTreeExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ObjectTreeExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectTreeExtension(struct soap *soap, const char *tag, int id, const tt__ObjectTreeExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectTreeExtension), "tt:ObjectTreeExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ObjectTreeExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ObjectTreeExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ObjectTreeExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ObjectTreeExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ObjectTreeExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ObjectTreeExtension * SOAP_FMAC4 soap_in_tt__ObjectTreeExtension(struct soap *soap, const char *tag, tt__ObjectTreeExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ObjectTreeExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectTreeExtension, sizeof(tt__ObjectTreeExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ObjectTreeExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ObjectTreeExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ObjectTreeExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ObjectTreeExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ObjectTreeExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ObjectTreeExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ObjectTreeExtension::__any, "xsd:byte"))
				{	a->tt__ObjectTreeExtension::__size++;
					a->tt__ObjectTreeExtension::__any = NULL;
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
		if (a->tt__ObjectTreeExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ObjectTreeExtension::__size)
			a->tt__ObjectTreeExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ObjectTreeExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ObjectTreeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectTreeExtension, 0, sizeof(tt__ObjectTreeExtension), 0, soap_copy_tt__ObjectTreeExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ObjectTreeExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ObjectTreeExtension);
	if (this->soap_out(soap, tag?tag:"tt:ObjectTreeExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ObjectTreeExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ObjectTreeExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ObjectTreeExtension * SOAP_FMAC4 soap_get_tt__ObjectTreeExtension(struct soap *soap, tt__ObjectTreeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectTreeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ObjectTreeExtension * SOAP_FMAC2 soap_instantiate_tt__ObjectTreeExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ObjectTreeExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ObjectTreeExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ObjectTreeExtension);
		if (size)
			*size = sizeof(tt__ObjectTreeExtension);
		((tt__ObjectTreeExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ObjectTreeExtension, n);
		if (size)
			*size = n * sizeof(tt__ObjectTreeExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ObjectTreeExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ObjectTreeExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ObjectTreeExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ObjectTreeExtension %p -> %p\n", q, p));
	*(tt__ObjectTreeExtension*)p = *(tt__ObjectTreeExtension*)q;
}

void tt__ObjectTree::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ObjectTree::__sizeRename = 0;
	this->tt__ObjectTree::Rename = NULL;
	this->tt__ObjectTree::__sizeSplit = 0;
	this->tt__ObjectTree::Split = NULL;
	this->tt__ObjectTree::__sizeMerge = 0;
	this->tt__ObjectTree::Merge = NULL;
	this->tt__ObjectTree::__sizeDelete = 0;
	this->tt__ObjectTree::Delete = NULL;
	this->tt__ObjectTree::Extension = NULL;
	this->tt__ObjectTree::__anyAttribute = NULL;
}

void tt__ObjectTree::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ObjectTree::Rename)
	{	int i;
		for (i = 0; i < this->tt__ObjectTree::__sizeRename; i++)
		{
			soap_serialize_PointerTott__Rename(soap, this->tt__ObjectTree::Rename + i);
		}
	}
	if (this->tt__ObjectTree::Split)
	{	int i;
		for (i = 0; i < this->tt__ObjectTree::__sizeSplit; i++)
		{
			soap_serialize_PointerTott__Split(soap, this->tt__ObjectTree::Split + i);
		}
	}
	if (this->tt__ObjectTree::Merge)
	{	int i;
		for (i = 0; i < this->tt__ObjectTree::__sizeMerge; i++)
		{
			soap_serialize_PointerTott__Merge(soap, this->tt__ObjectTree::Merge + i);
		}
	}
	if (this->tt__ObjectTree::Delete)
	{	int i;
		for (i = 0; i < this->tt__ObjectTree::__sizeDelete; i++)
		{
			soap_serialize_PointerTott__ObjectId(soap, this->tt__ObjectTree::Delete + i);
		}
	}
	soap_serialize_PointerTott__ObjectTreeExtension(soap, &this->tt__ObjectTree::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ObjectTree::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ObjectTree(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectTree(struct soap *soap, const char *tag, int id, const tt__ObjectTree *a, const char *type)
{
	if (((tt__ObjectTree*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ObjectTree*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectTree), "tt:ObjectTree"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ObjectTree::Rename)
	{	int i;
		for (i = 0; i < a->tt__ObjectTree::__sizeRename; i++)
			if (soap_out_PointerTott__Rename(soap, "tt:Rename", -1, a->tt__ObjectTree::Rename + i, ""))
				return soap->error;
	}
	if (a->tt__ObjectTree::Split)
	{	int i;
		for (i = 0; i < a->tt__ObjectTree::__sizeSplit; i++)
			if (soap_out_PointerTott__Split(soap, "tt:Split", -1, a->tt__ObjectTree::Split + i, ""))
				return soap->error;
	}
	if (a->tt__ObjectTree::Merge)
	{	int i;
		for (i = 0; i < a->tt__ObjectTree::__sizeMerge; i++)
			if (soap_out_PointerTott__Merge(soap, "tt:Merge", -1, a->tt__ObjectTree::Merge + i, ""))
				return soap->error;
	}
	if (a->tt__ObjectTree::Delete)
	{	int i;
		for (i = 0; i < a->tt__ObjectTree::__sizeDelete; i++)
			if (soap_out_PointerTott__ObjectId(soap, "tt:Delete", -1, a->tt__ObjectTree::Delete + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ObjectTreeExtension(soap, "tt:Extension", -1, &(a->tt__ObjectTree::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ObjectTree::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ObjectTree(soap, tag, this, type);
}

SOAP_FMAC3 tt__ObjectTree * SOAP_FMAC4 soap_in_tt__ObjectTree(struct soap *soap, const char *tag, tt__ObjectTree *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ObjectTree *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectTree, sizeof(tt__ObjectTree), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ObjectTree)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ObjectTree *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ObjectTree*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Rename1 = NULL;
	struct soap_blist *soap_blist_Split1 = NULL;
	struct soap_blist *soap_blist_Merge1 = NULL;
	struct soap_blist *soap_blist_Delete1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Rename", 1, NULL))
			{	if (a->tt__ObjectTree::Rename == NULL)
				{	if (soap_blist_Rename1 == NULL)
						soap_blist_Rename1 = soap_new_block(soap);
					a->tt__ObjectTree::Rename = (tt__Rename **)soap_push_block(soap, soap_blist_Rename1, sizeof(tt__Rename *));
					if (a->tt__ObjectTree::Rename == NULL)
						return NULL;
					*a->tt__ObjectTree::Rename = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Rename(soap, "tt:Rename", a->tt__ObjectTree::Rename, "tt:Rename"))
				{	a->tt__ObjectTree::__sizeRename++;
					a->tt__ObjectTree::Rename = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Split", 1, NULL))
			{	if (a->tt__ObjectTree::Split == NULL)
				{	if (soap_blist_Split1 == NULL)
						soap_blist_Split1 = soap_new_block(soap);
					a->tt__ObjectTree::Split = (tt__Split **)soap_push_block(soap, soap_blist_Split1, sizeof(tt__Split *));
					if (a->tt__ObjectTree::Split == NULL)
						return NULL;
					*a->tt__ObjectTree::Split = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Split(soap, "tt:Split", a->tt__ObjectTree::Split, "tt:Split"))
				{	a->tt__ObjectTree::__sizeSplit++;
					a->tt__ObjectTree::Split = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Merge", 1, NULL))
			{	if (a->tt__ObjectTree::Merge == NULL)
				{	if (soap_blist_Merge1 == NULL)
						soap_blist_Merge1 = soap_new_block(soap);
					a->tt__ObjectTree::Merge = (tt__Merge **)soap_push_block(soap, soap_blist_Merge1, sizeof(tt__Merge *));
					if (a->tt__ObjectTree::Merge == NULL)
						return NULL;
					*a->tt__ObjectTree::Merge = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Merge(soap, "tt:Merge", a->tt__ObjectTree::Merge, "tt:Merge"))
				{	a->tt__ObjectTree::__sizeMerge++;
					a->tt__ObjectTree::Merge = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Delete", 1, NULL))
			{	if (a->tt__ObjectTree::Delete == NULL)
				{	if (soap_blist_Delete1 == NULL)
						soap_blist_Delete1 = soap_new_block(soap);
					a->tt__ObjectTree::Delete = (tt__ObjectId **)soap_push_block(soap, soap_blist_Delete1, sizeof(tt__ObjectId *));
					if (a->tt__ObjectTree::Delete == NULL)
						return NULL;
					*a->tt__ObjectTree::Delete = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__ObjectId(soap, "tt:Delete", a->tt__ObjectTree::Delete, "tt:ObjectId"))
				{	a->tt__ObjectTree::__sizeDelete++;
					a->tt__ObjectTree::Delete = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectTreeExtension(soap, "tt:Extension", &(a->tt__ObjectTree::Extension), "tt:ObjectTreeExtension"))
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
		if (a->tt__ObjectTree::Rename)
			soap_pop_block(soap, soap_blist_Rename1);
		if (a->tt__ObjectTree::__sizeRename)
			a->tt__ObjectTree::Rename = (tt__Rename **)soap_save_block(soap, soap_blist_Rename1, NULL, 1);
		else
		{	a->tt__ObjectTree::Rename = NULL;
			if (soap_blist_Rename1)
				soap_end_block(soap, soap_blist_Rename1);
		}
		if (a->tt__ObjectTree::Split)
			soap_pop_block(soap, soap_blist_Split1);
		if (a->tt__ObjectTree::__sizeSplit)
			a->tt__ObjectTree::Split = (tt__Split **)soap_save_block(soap, soap_blist_Split1, NULL, 1);
		else
		{	a->tt__ObjectTree::Split = NULL;
			if (soap_blist_Split1)
				soap_end_block(soap, soap_blist_Split1);
		}
		if (a->tt__ObjectTree::Merge)
			soap_pop_block(soap, soap_blist_Merge1);
		if (a->tt__ObjectTree::__sizeMerge)
			a->tt__ObjectTree::Merge = (tt__Merge **)soap_save_block(soap, soap_blist_Merge1, NULL, 1);
		else
		{	a->tt__ObjectTree::Merge = NULL;
			if (soap_blist_Merge1)
				soap_end_block(soap, soap_blist_Merge1);
		}
		if (a->tt__ObjectTree::Delete)
			soap_pop_block(soap, soap_blist_Delete1);
		if (a->tt__ObjectTree::__sizeDelete)
			a->tt__ObjectTree::Delete = (tt__ObjectId **)soap_save_block(soap, soap_blist_Delete1, NULL, 1);
		else
		{	a->tt__ObjectTree::Delete = NULL;
			if (soap_blist_Delete1)
				soap_end_block(soap, soap_blist_Delete1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ObjectTree *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectTree, 0, sizeof(tt__ObjectTree), 0, soap_copy_tt__ObjectTree);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ObjectTree::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ObjectTree);
	if (this->soap_out(soap, tag?tag:"tt:ObjectTree", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ObjectTree::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ObjectTree(soap, this, tag, type);
}

SOAP_FMAC3 tt__ObjectTree * SOAP_FMAC4 soap_get_tt__ObjectTree(struct soap *soap, tt__ObjectTree *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectTree(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ObjectTree * SOAP_FMAC2 soap_instantiate_tt__ObjectTree(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ObjectTree(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ObjectTree, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ObjectTree);
		if (size)
			*size = sizeof(tt__ObjectTree);
		((tt__ObjectTree*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ObjectTree, n);
		if (size)
			*size = n * sizeof(tt__ObjectTree);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ObjectTree*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ObjectTree*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ObjectTree(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ObjectTree %p -> %p\n", q, p));
	*(tt__ObjectTree*)p = *(tt__ObjectTree*)q;
}

void tt__BehaviourExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__BehaviourExtension::__size = 0;
	this->tt__BehaviourExtension::__any = NULL;
}

void tt__BehaviourExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BehaviourExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BehaviourExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BehaviourExtension(struct soap *soap, const char *tag, int id, const tt__BehaviourExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BehaviourExtension), "tt:BehaviourExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__BehaviourExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__BehaviourExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__BehaviourExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__BehaviourExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BehaviourExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__BehaviourExtension * SOAP_FMAC4 soap_in_tt__BehaviourExtension(struct soap *soap, const char *tag, tt__BehaviourExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BehaviourExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BehaviourExtension, sizeof(tt__BehaviourExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BehaviourExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BehaviourExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__BehaviourExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__BehaviourExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__BehaviourExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__BehaviourExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__BehaviourExtension::__any, "xsd:byte"))
				{	a->tt__BehaviourExtension::__size++;
					a->tt__BehaviourExtension::__any = NULL;
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
		if (a->tt__BehaviourExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__BehaviourExtension::__size)
			a->tt__BehaviourExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__BehaviourExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__BehaviourExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BehaviourExtension, 0, sizeof(tt__BehaviourExtension), 0, soap_copy_tt__BehaviourExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__BehaviourExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BehaviourExtension);
	if (this->soap_out(soap, tag?tag:"tt:BehaviourExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BehaviourExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BehaviourExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__BehaviourExtension * SOAP_FMAC4 soap_get_tt__BehaviourExtension(struct soap *soap, tt__BehaviourExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BehaviourExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BehaviourExtension * SOAP_FMAC2 soap_instantiate_tt__BehaviourExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BehaviourExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BehaviourExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BehaviourExtension);
		if (size)
			*size = sizeof(tt__BehaviourExtension);
		((tt__BehaviourExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BehaviourExtension, n);
		if (size)
			*size = n * sizeof(tt__BehaviourExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BehaviourExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BehaviourExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BehaviourExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BehaviourExtension %p -> %p\n", q, p));
	*(tt__BehaviourExtension*)p = *(tt__BehaviourExtension*)q;
}

void tt__Behaviour::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Behaviour::Removed = NULL;
	this->tt__Behaviour::Idle = NULL;
	this->tt__Behaviour::Extension = NULL;
	this->tt__Behaviour::__anyAttribute = NULL;
}

void tt__Behaviour::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTo_tt__Behaviour_Removed(soap, &this->tt__Behaviour::Removed);
	soap_serialize_PointerTo_tt__Behaviour_Idle(soap, &this->tt__Behaviour::Idle);
	soap_serialize_PointerTott__BehaviourExtension(soap, &this->tt__Behaviour::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Behaviour::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Behaviour(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Behaviour(struct soap *soap, const char *tag, int id, const tt__Behaviour *a, const char *type)
{
	if (((tt__Behaviour*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Behaviour*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Behaviour), "tt:Behaviour"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTo_tt__Behaviour_Removed(soap, "tt:Removed", -1, &(a->tt__Behaviour::Removed), ""))
		return soap->error;
	if (soap_out_PointerTo_tt__Behaviour_Idle(soap, "tt:Idle", -1, &(a->tt__Behaviour::Idle), ""))
		return soap->error;
	if (soap_out_PointerTott__BehaviourExtension(soap, "tt:Extension", -1, &(a->tt__Behaviour::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Behaviour::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Behaviour(soap, tag, this, type);
}

SOAP_FMAC3 tt__Behaviour * SOAP_FMAC4 soap_in_tt__Behaviour(struct soap *soap, const char *tag, tt__Behaviour *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Behaviour *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Behaviour, sizeof(tt__Behaviour), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Behaviour)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Behaviour *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Behaviour*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Removed1 = 1;
	size_t soap_flag_Idle1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Removed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__Behaviour_Removed(soap, "tt:Removed", &(a->tt__Behaviour::Removed), ""))
				{	soap_flag_Removed1--;
					continue;
				}
			if (soap_flag_Idle1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__Behaviour_Idle(soap, "tt:Idle", &(a->tt__Behaviour::Idle), ""))
				{	soap_flag_Idle1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BehaviourExtension(soap, "tt:Extension", &(a->tt__Behaviour::Extension), "tt:BehaviourExtension"))
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
	{	a = (tt__Behaviour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Behaviour, 0, sizeof(tt__Behaviour), 0, soap_copy_tt__Behaviour);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Behaviour::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Behaviour);
	if (this->soap_out(soap, tag?tag:"tt:Behaviour", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Behaviour::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Behaviour(soap, this, tag, type);
}

SOAP_FMAC3 tt__Behaviour * SOAP_FMAC4 soap_get_tt__Behaviour(struct soap *soap, tt__Behaviour *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Behaviour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Behaviour * SOAP_FMAC2 soap_instantiate_tt__Behaviour(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Behaviour(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Behaviour, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Behaviour);
		if (size)
			*size = sizeof(tt__Behaviour);
		((tt__Behaviour*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Behaviour, n);
		if (size)
			*size = n * sizeof(tt__Behaviour);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Behaviour*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Behaviour*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Behaviour(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Behaviour %p -> %p\n", q, p));
	*(tt__Behaviour*)p = *(tt__Behaviour*)q;
}

void tt__ObjectId::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__integer(soap, &this->tt__ObjectId::ObjectId);
}

void tt__ObjectId::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ObjectId::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ObjectId(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectId(struct soap *soap, const char *tag, int id, const tt__ObjectId *a, const char *type)
{
	if (((tt__ObjectId*)a)->ObjectId)
		soap_set_attr(soap, "ObjectId", ((tt__ObjectId*)a)->ObjectId, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:ObjectId");
}

void *tt__ObjectId::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ObjectId(soap, tag, this, type);
}

SOAP_FMAC3 tt__ObjectId * SOAP_FMAC4 soap_in_tt__ObjectId(struct soap *soap, const char *tag, tt__ObjectId *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ObjectId *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectId, sizeof(tt__ObjectId), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ObjectId)
			return (tt__ObjectId *)a->soap_in(soap, tag, type);
	}
	if (soap_s2string(soap, soap_attr_value(soap, "ObjectId", 0), &((tt__ObjectId*)a)->ObjectId, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__ObjectId::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ObjectId);
	if (this->soap_out(soap, tag?tag:"tt:ObjectId", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ObjectId::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ObjectId(soap, this, tag, type);
}

SOAP_FMAC3 tt__ObjectId * SOAP_FMAC4 soap_get_tt__ObjectId(struct soap *soap, tt__ObjectId *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectId(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ObjectId * SOAP_FMAC2 soap_instantiate_tt__ObjectId(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ObjectId(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ObjectId, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (type && !soap_match_tag(soap, type, "tt:Object"))
	{	cp->type = SOAP_TYPE_tt__Object;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Object);
			if (size)
				*size = sizeof(tt__Object);
			((tt__Object*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Object, n);
			if (size)
				*size = n * sizeof(tt__Object);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Object*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Object*)cp->ptr;
	}
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ObjectId);
		if (size)
			*size = sizeof(tt__ObjectId);
		((tt__ObjectId*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ObjectId, n);
		if (size)
			*size = n * sizeof(tt__ObjectId);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ObjectId*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ObjectId*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ObjectId(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ObjectId %p -> %p\n", q, p));
	*(tt__ObjectId*)p = *(tt__ObjectId*)q;
}

void tt__Rename::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Rename::from = NULL;
	this->tt__Rename::to = NULL;
}

void tt__Rename::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ObjectId(soap, &this->tt__Rename::from);
	soap_serialize_PointerTott__ObjectId(soap, &this->tt__Rename::to);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Rename::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Rename(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Rename(struct soap *soap, const char *tag, int id, const tt__Rename *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Rename), "tt:Rename"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Rename::from)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:from", -1, &a->tt__Rename::from, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:from"))
		return soap->error;
	if (a->tt__Rename::to)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:to", -1, &a->tt__Rename::to, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:to"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Rename::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Rename(soap, tag, this, type);
}

SOAP_FMAC3 tt__Rename * SOAP_FMAC4 soap_in_tt__Rename(struct soap *soap, const char *tag, tt__Rename *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Rename *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Rename, sizeof(tt__Rename), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Rename)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Rename *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_from1 = 1;
	size_t soap_flag_to1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_from1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:from", &(a->tt__Rename::from), "tt:ObjectId"))
				{	soap_flag_from1--;
					continue;
				}
			if (soap_flag_to1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:to", &(a->tt__Rename::to), "tt:ObjectId"))
				{	soap_flag_to1--;
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
	{	a = (tt__Rename *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Rename, 0, sizeof(tt__Rename), 0, soap_copy_tt__Rename);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_from1 > 0 || soap_flag_to1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Rename::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Rename);
	if (this->soap_out(soap, tag?tag:"tt:Rename", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Rename::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Rename(soap, this, tag, type);
}

SOAP_FMAC3 tt__Rename * SOAP_FMAC4 soap_get_tt__Rename(struct soap *soap, tt__Rename *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Rename(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Rename * SOAP_FMAC2 soap_instantiate_tt__Rename(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Rename(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Rename, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Rename);
		if (size)
			*size = sizeof(tt__Rename);
		((tt__Rename*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Rename, n);
		if (size)
			*size = n * sizeof(tt__Rename);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Rename*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Rename*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Rename(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Rename %p -> %p\n", q, p));
	*(tt__Rename*)p = *(tt__Rename*)q;
}

void tt__Split::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Split::from = NULL;
	this->tt__Split::__sizeto = 0;
	this->tt__Split::to = NULL;
}

void tt__Split::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ObjectId(soap, &this->tt__Split::from);
	if (this->tt__Split::to)
	{	int i;
		for (i = 0; i < this->tt__Split::__sizeto; i++)
		{
			soap_serialize_PointerTott__ObjectId(soap, this->tt__Split::to + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Split::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Split(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Split(struct soap *soap, const char *tag, int id, const tt__Split *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Split), "tt:Split"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Split::from)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:from", -1, &a->tt__Split::from, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:from"))
		return soap->error;
	if (a->tt__Split::to)
	{	int i;
		for (i = 0; i < a->tt__Split::__sizeto; i++)
			if (soap_out_PointerTott__ObjectId(soap, "tt:to", -1, a->tt__Split::to + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Split::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Split(soap, tag, this, type);
}

SOAP_FMAC3 tt__Split * SOAP_FMAC4 soap_in_tt__Split(struct soap *soap, const char *tag, tt__Split *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Split *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Split, sizeof(tt__Split), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Split)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Split *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_from1 = 1;
	struct soap_blist *soap_blist_to1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_from1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:from", &(a->tt__Split::from), "tt:ObjectId"))
				{	soap_flag_from1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:to", 1, NULL))
			{	if (a->tt__Split::to == NULL)
				{	if (soap_blist_to1 == NULL)
						soap_blist_to1 = soap_new_block(soap);
					a->tt__Split::to = (tt__ObjectId **)soap_push_block(soap, soap_blist_to1, sizeof(tt__ObjectId *));
					if (a->tt__Split::to == NULL)
						return NULL;
					*a->tt__Split::to = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__ObjectId(soap, "tt:to", a->tt__Split::to, "tt:ObjectId"))
				{	a->tt__Split::__sizeto++;
					a->tt__Split::to = NULL;
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
		if (a->tt__Split::to)
			soap_pop_block(soap, soap_blist_to1);
		if (a->tt__Split::__sizeto)
			a->tt__Split::to = (tt__ObjectId **)soap_save_block(soap, soap_blist_to1, NULL, 1);
		else
		{	a->tt__Split::to = NULL;
			if (soap_blist_to1)
				soap_end_block(soap, soap_blist_to1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Split *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Split, 0, sizeof(tt__Split), 0, soap_copy_tt__Split);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_from1 > 0 || a->tt__Split::__sizeto < 2))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Split::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Split);
	if (this->soap_out(soap, tag?tag:"tt:Split", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Split::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Split(soap, this, tag, type);
}

SOAP_FMAC3 tt__Split * SOAP_FMAC4 soap_get_tt__Split(struct soap *soap, tt__Split *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Split(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Split * SOAP_FMAC2 soap_instantiate_tt__Split(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Split(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Split, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Split);
		if (size)
			*size = sizeof(tt__Split);
		((tt__Split*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Split, n);
		if (size)
			*size = n * sizeof(tt__Split);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Split*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Split*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Split(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Split %p -> %p\n", q, p));
	*(tt__Split*)p = *(tt__Split*)q;
}

void tt__Merge::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Merge::__sizefrom = 0;
	this->tt__Merge::from = NULL;
	this->tt__Merge::to = NULL;
}

void tt__Merge::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__Merge::from)
	{	int i;
		for (i = 0; i < this->tt__Merge::__sizefrom; i++)
		{
			soap_serialize_PointerTott__ObjectId(soap, this->tt__Merge::from + i);
		}
	}
	soap_serialize_PointerTott__ObjectId(soap, &this->tt__Merge::to);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Merge::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Merge(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Merge(struct soap *soap, const char *tag, int id, const tt__Merge *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Merge), "tt:Merge"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Merge::from)
	{	int i;
		for (i = 0; i < a->tt__Merge::__sizefrom; i++)
			if (soap_out_PointerTott__ObjectId(soap, "tt:from", -1, a->tt__Merge::from + i, ""))
				return soap->error;
	}
	if (a->tt__Merge::to)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:to", -1, &a->tt__Merge::to, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:to"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Merge::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Merge(soap, tag, this, type);
}

SOAP_FMAC3 tt__Merge * SOAP_FMAC4 soap_in_tt__Merge(struct soap *soap, const char *tag, tt__Merge *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Merge *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Merge, sizeof(tt__Merge), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Merge)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Merge *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_from1 = NULL;
	size_t soap_flag_to1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:from", 1, NULL))
			{	if (a->tt__Merge::from == NULL)
				{	if (soap_blist_from1 == NULL)
						soap_blist_from1 = soap_new_block(soap);
					a->tt__Merge::from = (tt__ObjectId **)soap_push_block(soap, soap_blist_from1, sizeof(tt__ObjectId *));
					if (a->tt__Merge::from == NULL)
						return NULL;
					*a->tt__Merge::from = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__ObjectId(soap, "tt:from", a->tt__Merge::from, "tt:ObjectId"))
				{	a->tt__Merge::__sizefrom++;
					a->tt__Merge::from = NULL;
					continue;
				}
			}
			if (soap_flag_to1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:to", &(a->tt__Merge::to), "tt:ObjectId"))
				{	soap_flag_to1--;
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
		if (a->tt__Merge::from)
			soap_pop_block(soap, soap_blist_from1);
		if (a->tt__Merge::__sizefrom)
			a->tt__Merge::from = (tt__ObjectId **)soap_save_block(soap, soap_blist_from1, NULL, 1);
		else
		{	a->tt__Merge::from = NULL;
			if (soap_blist_from1)
				soap_end_block(soap, soap_blist_from1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Merge *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Merge, 0, sizeof(tt__Merge), 0, soap_copy_tt__Merge);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__Merge::__sizefrom < 2 || soap_flag_to1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Merge::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Merge);
	if (this->soap_out(soap, tag?tag:"tt:Merge", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Merge::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Merge(soap, this, tag, type);
}

SOAP_FMAC3 tt__Merge * SOAP_FMAC4 soap_get_tt__Merge(struct soap *soap, tt__Merge *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Merge(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Merge * SOAP_FMAC2 soap_instantiate_tt__Merge(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Merge(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Merge, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Merge);
		if (size)
			*size = sizeof(tt__Merge);
		((tt__Merge*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Merge, n);
		if (size)
			*size = n * sizeof(tt__Merge);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Merge*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Merge*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Merge(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Merge %p -> %p\n", q, p));
	*(tt__Merge*)p = *(tt__Merge*)q;
}

void tt__FrameExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FrameExtension2::__size = 0;
	this->tt__FrameExtension2::__any = NULL;
}

void tt__FrameExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FrameExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FrameExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FrameExtension2(struct soap *soap, const char *tag, int id, const tt__FrameExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FrameExtension2), "tt:FrameExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FrameExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__FrameExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FrameExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FrameExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FrameExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__FrameExtension2 * SOAP_FMAC4 soap_in_tt__FrameExtension2(struct soap *soap, const char *tag, tt__FrameExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FrameExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FrameExtension2, sizeof(tt__FrameExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FrameExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FrameExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__FrameExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FrameExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FrameExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FrameExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FrameExtension2::__any, "xsd:byte"))
				{	a->tt__FrameExtension2::__size++;
					a->tt__FrameExtension2::__any = NULL;
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
		if (a->tt__FrameExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FrameExtension2::__size)
			a->tt__FrameExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FrameExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FrameExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FrameExtension2, 0, sizeof(tt__FrameExtension2), 0, soap_copy_tt__FrameExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FrameExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FrameExtension2);
	if (this->soap_out(soap, tag?tag:"tt:FrameExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FrameExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FrameExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__FrameExtension2 * SOAP_FMAC4 soap_get_tt__FrameExtension2(struct soap *soap, tt__FrameExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FrameExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FrameExtension2 * SOAP_FMAC2 soap_instantiate_tt__FrameExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FrameExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FrameExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FrameExtension2);
		if (size)
			*size = sizeof(tt__FrameExtension2);
		((tt__FrameExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FrameExtension2, n);
		if (size)
			*size = n * sizeof(tt__FrameExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FrameExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FrameExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FrameExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FrameExtension2 %p -> %p\n", q, p));
	*(tt__FrameExtension2*)p = *(tt__FrameExtension2*)q;
}

void tt__FrameExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FrameExtension::__size = 0;
	this->tt__FrameExtension::__any = NULL;
	this->tt__FrameExtension::MotionInCells = NULL;
	this->tt__FrameExtension::Extension = NULL;
}

void tt__FrameExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MotionInCells(soap, &this->tt__FrameExtension::MotionInCells);
	soap_serialize_PointerTott__FrameExtension2(soap, &this->tt__FrameExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FrameExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FrameExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FrameExtension(struct soap *soap, const char *tag, int id, const tt__FrameExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FrameExtension), "tt:FrameExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FrameExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__FrameExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FrameExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MotionInCells(soap, "tt:MotionInCells", -1, &(a->tt__FrameExtension::MotionInCells), ""))
		return soap->error;
	if (soap_out_PointerTott__FrameExtension2(soap, "tt:Extension", -1, &(a->tt__FrameExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FrameExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FrameExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__FrameExtension * SOAP_FMAC4 soap_in_tt__FrameExtension(struct soap *soap, const char *tag, tt__FrameExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FrameExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FrameExtension, sizeof(tt__FrameExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FrameExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FrameExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_MotionInCells1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MotionInCells1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MotionInCells(soap, "tt:MotionInCells", &(a->tt__FrameExtension::MotionInCells), "tt:MotionInCells"))
				{	soap_flag_MotionInCells1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FrameExtension2(soap, "tt:Extension", &(a->tt__FrameExtension::Extension), "tt:FrameExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__FrameExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FrameExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FrameExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FrameExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FrameExtension::__any, "xsd:byte"))
				{	a->tt__FrameExtension::__size++;
					a->tt__FrameExtension::__any = NULL;
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
		if (a->tt__FrameExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FrameExtension::__size)
			a->tt__FrameExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FrameExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FrameExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FrameExtension, 0, sizeof(tt__FrameExtension), 0, soap_copy_tt__FrameExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FrameExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FrameExtension);
	if (this->soap_out(soap, tag?tag:"tt:FrameExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FrameExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FrameExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__FrameExtension * SOAP_FMAC4 soap_get_tt__FrameExtension(struct soap *soap, tt__FrameExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FrameExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FrameExtension * SOAP_FMAC2 soap_instantiate_tt__FrameExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FrameExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FrameExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FrameExtension);
		if (size)
			*size = sizeof(tt__FrameExtension);
		((tt__FrameExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FrameExtension, n);
		if (size)
			*size = n * sizeof(tt__FrameExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FrameExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FrameExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FrameExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FrameExtension %p -> %p\n", q, p));
	*(tt__FrameExtension*)p = *(tt__FrameExtension*)q;
}

void tt__Frame::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Frame::PTZStatus = NULL;
	this->tt__Frame::Transformation = NULL;
	this->tt__Frame::__sizeObject = 0;
	this->tt__Frame::Object = NULL;
	this->tt__Frame::ObjectTree = NULL;
	this->tt__Frame::Extension = NULL;
	soap_default_time(soap, &this->tt__Frame::UtcTime);
	this->tt__Frame::__anyAttribute = NULL;
}

void tt__Frame::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZStatus(soap, &this->tt__Frame::PTZStatus);
	soap_serialize_PointerTott__Transformation(soap, &this->tt__Frame::Transformation);
	if (this->tt__Frame::Object)
	{	int i;
		for (i = 0; i < this->tt__Frame::__sizeObject; i++)
		{
			soap_serialize_PointerTott__Object(soap, this->tt__Frame::Object + i);
		}
	}
	soap_serialize_PointerTott__ObjectTree(soap, &this->tt__Frame::ObjectTree);
	soap_serialize_PointerTott__FrameExtension(soap, &this->tt__Frame::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Frame::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Frame(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Frame(struct soap *soap, const char *tag, int id, const tt__Frame *a, const char *type)
{
	soap_set_attr(soap, "UtcTime", soap_dateTime2s(soap, ((tt__Frame*)a)->UtcTime), 1);
	if (((tt__Frame*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Frame*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Frame), "tt:Frame"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__PTZStatus(soap, "tt:PTZStatus", -1, &(a->tt__Frame::PTZStatus), ""))
		return soap->error;
	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &(a->tt__Frame::Transformation), ""))
		return soap->error;
	if (a->tt__Frame::Object)
	{	int i;
		for (i = 0; i < a->tt__Frame::__sizeObject; i++)
			if (soap_out_PointerTott__Object(soap, "tt:Object", -1, a->tt__Frame::Object + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ObjectTree(soap, "tt:ObjectTree", -1, &(a->tt__Frame::ObjectTree), ""))
		return soap->error;
	if (soap_out_PointerTott__FrameExtension(soap, "tt:Extension", -1, &(a->tt__Frame::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Frame::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Frame(soap, tag, this, type);
}

SOAP_FMAC3 tt__Frame * SOAP_FMAC4 soap_in_tt__Frame(struct soap *soap, const char *tag, tt__Frame *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Frame *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Frame, sizeof(tt__Frame), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Frame)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Frame *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2dateTime(soap, soap_attr_value(soap, "UtcTime", 1), &((tt__Frame*)a)->UtcTime))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Frame*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PTZStatus1 = 1;
	size_t soap_flag_Transformation1 = 1;
	struct soap_blist *soap_blist_Object1 = NULL;
	size_t soap_flag_ObjectTree1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PTZStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatus(soap, "tt:PTZStatus", &(a->tt__Frame::PTZStatus), "tt:PTZStatus"))
				{	soap_flag_PTZStatus1--;
					continue;
				}
			if (soap_flag_Transformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transformation(soap, "tt:Transformation", &(a->tt__Frame::Transformation), "tt:Transformation"))
				{	soap_flag_Transformation1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Object", 1, NULL))
			{	if (a->tt__Frame::Object == NULL)
				{	if (soap_blist_Object1 == NULL)
						soap_blist_Object1 = soap_new_block(soap);
					a->tt__Frame::Object = (tt__Object **)soap_push_block(soap, soap_blist_Object1, sizeof(tt__Object *));
					if (a->tt__Frame::Object == NULL)
						return NULL;
					*a->tt__Frame::Object = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Object(soap, "tt:Object", a->tt__Frame::Object, "tt:Object"))
				{	a->tt__Frame::__sizeObject++;
					a->tt__Frame::Object = NULL;
					continue;
				}
			}
			if (soap_flag_ObjectTree1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectTree(soap, "tt:ObjectTree", &(a->tt__Frame::ObjectTree), "tt:ObjectTree"))
				{	soap_flag_ObjectTree1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FrameExtension(soap, "tt:Extension", &(a->tt__Frame::Extension), "tt:FrameExtension"))
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
		if (a->tt__Frame::Object)
			soap_pop_block(soap, soap_blist_Object1);
		if (a->tt__Frame::__sizeObject)
			a->tt__Frame::Object = (tt__Object **)soap_save_block(soap, soap_blist_Object1, NULL, 1);
		else
		{	a->tt__Frame::Object = NULL;
			if (soap_blist_Object1)
				soap_end_block(soap, soap_blist_Object1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Frame *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Frame, 0, sizeof(tt__Frame), 0, soap_copy_tt__Frame);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Frame::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Frame);
	if (this->soap_out(soap, tag?tag:"tt:Frame", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Frame::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Frame(soap, this, tag, type);
}

SOAP_FMAC3 tt__Frame * SOAP_FMAC4 soap_get_tt__Frame(struct soap *soap, tt__Frame *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Frame(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Frame * SOAP_FMAC2 soap_instantiate_tt__Frame(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Frame(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Frame, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Frame);
		if (size)
			*size = sizeof(tt__Frame);
		((tt__Frame*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Frame, n);
		if (size)
			*size = n * sizeof(tt__Frame);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Frame*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Frame*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Frame(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Frame %p -> %p\n", q, p));
	*(tt__Frame*)p = *(tt__Frame*)q;
}

void tt__TransformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__TransformationExtension::__size = 0;
	this->tt__TransformationExtension::__any = NULL;
}

void tt__TransformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__TransformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__TransformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TransformationExtension(struct soap *soap, const char *tag, int id, const tt__TransformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TransformationExtension), "tt:TransformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__TransformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__TransformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__TransformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__TransformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__TransformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__TransformationExtension * SOAP_FMAC4 soap_in_tt__TransformationExtension(struct soap *soap, const char *tag, tt__TransformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__TransformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TransformationExtension, sizeof(tt__TransformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__TransformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__TransformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__TransformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__TransformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__TransformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__TransformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__TransformationExtension::__any, "xsd:byte"))
				{	a->tt__TransformationExtension::__size++;
					a->tt__TransformationExtension::__any = NULL;
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
		if (a->tt__TransformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__TransformationExtension::__size)
			a->tt__TransformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__TransformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__TransformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TransformationExtension, 0, sizeof(tt__TransformationExtension), 0, soap_copy_tt__TransformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__TransformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__TransformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:TransformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__TransformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__TransformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__TransformationExtension * SOAP_FMAC4 soap_get_tt__TransformationExtension(struct soap *soap, tt__TransformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TransformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__TransformationExtension * SOAP_FMAC2 soap_instantiate_tt__TransformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__TransformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__TransformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__TransformationExtension);
		if (size)
			*size = sizeof(tt__TransformationExtension);
		((tt__TransformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__TransformationExtension, n);
		if (size)
			*size = n * sizeof(tt__TransformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__TransformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__TransformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__TransformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__TransformationExtension %p -> %p\n", q, p));
	*(tt__TransformationExtension*)p = *(tt__TransformationExtension*)q;
}

void tt__Transformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Transformation::Translate = NULL;
	this->tt__Transformation::Scale = NULL;
	this->tt__Transformation::Extension = NULL;
	this->tt__Transformation::__anyAttribute = NULL;
}

void tt__Transformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Vector(soap, &this->tt__Transformation::Translate);
	soap_serialize_PointerTott__Vector(soap, &this->tt__Transformation::Scale);
	soap_serialize_PointerTott__TransformationExtension(soap, &this->tt__Transformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Transformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Transformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Transformation(struct soap *soap, const char *tag, int id, const tt__Transformation *a, const char *type)
{
	if (((tt__Transformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Transformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Transformation), "tt:Transformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Vector(soap, "tt:Translate", -1, &(a->tt__Transformation::Translate), ""))
		return soap->error;
	if (soap_out_PointerTott__Vector(soap, "tt:Scale", -1, &(a->tt__Transformation::Scale), ""))
		return soap->error;
	if (soap_out_PointerTott__TransformationExtension(soap, "tt:Extension", -1, &(a->tt__Transformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Transformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Transformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__Transformation * SOAP_FMAC4 soap_in_tt__Transformation(struct soap *soap, const char *tag, tt__Transformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Transformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Transformation, sizeof(tt__Transformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Transformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Transformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Transformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Translate1 = 1;
	size_t soap_flag_Scale1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Translate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:Translate", &(a->tt__Transformation::Translate), "tt:Vector"))
				{	soap_flag_Translate1--;
					continue;
				}
			if (soap_flag_Scale1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:Scale", &(a->tt__Transformation::Scale), "tt:Vector"))
				{	soap_flag_Scale1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TransformationExtension(soap, "tt:Extension", &(a->tt__Transformation::Extension), "tt:TransformationExtension"))
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
	{	a = (tt__Transformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Transformation, 0, sizeof(tt__Transformation), 0, soap_copy_tt__Transformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Transformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Transformation);
	if (this->soap_out(soap, tag?tag:"tt:Transformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Transformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Transformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__Transformation * SOAP_FMAC4 soap_get_tt__Transformation(struct soap *soap, tt__Transformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Transformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Transformation * SOAP_FMAC2 soap_instantiate_tt__Transformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Transformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Transformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Transformation);
		if (size)
			*size = sizeof(tt__Transformation);
		((tt__Transformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Transformation, n);
		if (size)
			*size = n * sizeof(tt__Transformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Transformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Transformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Transformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Transformation %p -> %p\n", q, p));
	*(tt__Transformation*)p = *(tt__Transformation*)q;
}

void tt__ObjectExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ObjectExtension::__size = 0;
	this->tt__ObjectExtension::__any = NULL;
}

void tt__ObjectExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ObjectExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ObjectExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectExtension(struct soap *soap, const char *tag, int id, const tt__ObjectExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectExtension), "tt:ObjectExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ObjectExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ObjectExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ObjectExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ObjectExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ObjectExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ObjectExtension * SOAP_FMAC4 soap_in_tt__ObjectExtension(struct soap *soap, const char *tag, tt__ObjectExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ObjectExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectExtension, sizeof(tt__ObjectExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ObjectExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ObjectExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ObjectExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ObjectExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ObjectExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ObjectExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ObjectExtension::__any, "xsd:byte"))
				{	a->tt__ObjectExtension::__size++;
					a->tt__ObjectExtension::__any = NULL;
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
		if (a->tt__ObjectExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ObjectExtension::__size)
			a->tt__ObjectExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ObjectExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ObjectExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectExtension, 0, sizeof(tt__ObjectExtension), 0, soap_copy_tt__ObjectExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ObjectExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ObjectExtension);
	if (this->soap_out(soap, tag?tag:"tt:ObjectExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ObjectExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ObjectExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ObjectExtension * SOAP_FMAC4 soap_get_tt__ObjectExtension(struct soap *soap, tt__ObjectExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ObjectExtension * SOAP_FMAC2 soap_instantiate_tt__ObjectExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ObjectExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ObjectExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ObjectExtension);
		if (size)
			*size = sizeof(tt__ObjectExtension);
		((tt__ObjectExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ObjectExtension, n);
		if (size)
			*size = n * sizeof(tt__ObjectExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ObjectExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ObjectExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ObjectExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ObjectExtension %p -> %p\n", q, p));
	*(tt__ObjectExtension*)p = *(tt__ObjectExtension*)q;
}

void tt__Object::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ObjectId::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__Object::Appearance = NULL;
	this->tt__Object::Behaviour = NULL;
	this->tt__Object::Extension = NULL;
	this->tt__Object::__anyAttribute = NULL;
}

void tt__Object::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Appearance(soap, &this->tt__Object::Appearance);
	soap_serialize_PointerTott__Behaviour(soap, &this->tt__Object::Behaviour);
	soap_serialize_PointerTott__ObjectExtension(soap, &this->tt__Object::Extension);
	this->tt__ObjectId::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Object::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Object(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Object(struct soap *soap, const char *tag, int id, const tt__Object *a, const char *type)
{
	if (((tt__Object*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Object*)a)->__anyAttribute, 1);
	if (((tt__ObjectId*)a)->ObjectId)
		soap_set_attr(soap, "ObjectId", ((tt__ObjectId*)a)->ObjectId, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Object), "tt:Object"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Appearance(soap, "tt:Appearance", -1, &(a->tt__Object::Appearance), ""))
		return soap->error;
	if (soap_out_PointerTott__Behaviour(soap, "tt:Behaviour", -1, &(a->tt__Object::Behaviour), ""))
		return soap->error;
	if (soap_out_PointerTott__ObjectExtension(soap, "tt:Extension", -1, &(a->tt__Object::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Object::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Object(soap, tag, this, type);
}

SOAP_FMAC3 tt__Object * SOAP_FMAC4 soap_in_tt__Object(struct soap *soap, const char *tag, tt__Object *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Object *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Object, sizeof(tt__Object), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Object)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Object *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Object*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "ObjectId", 0), &((tt__ObjectId*)a)->ObjectId, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Appearance1 = 1;
	size_t soap_flag_Behaviour1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Appearance1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Appearance(soap, "tt:Appearance", &(a->tt__Object::Appearance), "tt:Appearance"))
				{	soap_flag_Appearance1--;
					continue;
				}
			if (soap_flag_Behaviour1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Behaviour(soap, "tt:Behaviour", &(a->tt__Object::Behaviour), "tt:Behaviour"))
				{	soap_flag_Behaviour1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectExtension(soap, "tt:Extension", &(a->tt__Object::Extension), "tt:ObjectExtension"))
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
	{	a = (tt__Object *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Object, 0, sizeof(tt__Object), 0, soap_copy_tt__Object);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Object::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Object);
	if (this->soap_out(soap, tag?tag:"tt:Object", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Object::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Object(soap, this, tag, type);
}

SOAP_FMAC3 tt__Object * SOAP_FMAC4 soap_get_tt__Object(struct soap *soap, tt__Object *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Object(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Object * SOAP_FMAC2 soap_instantiate_tt__Object(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Object(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Object, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Object);
		if (size)
			*size = sizeof(tt__Object);
		((tt__Object*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Object, n);
		if (size)
			*size = n * sizeof(tt__Object);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Object*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Object*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Object(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Object %p -> %p\n", q, p));
	*(tt__Object*)p = *(tt__Object*)q;
}

void tt__OtherType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__OtherType::Type);
	soap_default_float(soap, &this->tt__OtherType::Likelihood);
	this->tt__OtherType::__size = 0;
	this->tt__OtherType::__any = NULL;
	this->tt__OtherType::__anyAttribute = NULL;
}

void tt__OtherType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__OtherType::Type);
	soap_embedded(soap, &this->tt__OtherType::Likelihood, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__OtherType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__OtherType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__OtherType(struct soap *soap, const char *tag, int id, const tt__OtherType *a, const char *type)
{
	if (((tt__OtherType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__OtherType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__OtherType), "tt:OtherType"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__OtherType::Type)
	{	if (soap_out_string(soap, "tt:Type", -1, &a->tt__OtherType::Type, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Type"))
		return soap->error;
	if (soap_out_float(soap, "tt:Likelihood", -1, &(a->tt__OtherType::Likelihood), ""))
		return soap->error;
	if (a->tt__OtherType::__any)
	{	int i;
		for (i = 0; i < a->tt__OtherType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__OtherType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__OtherType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__OtherType(soap, tag, this, type);
}

SOAP_FMAC3 tt__OtherType * SOAP_FMAC4 soap_in_tt__OtherType(struct soap *soap, const char *tag, tt__OtherType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__OtherType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__OtherType, sizeof(tt__OtherType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__OtherType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__OtherType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__OtherType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_Likelihood1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Type", &(a->tt__OtherType::Type), "xsd:string"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_Likelihood1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Likelihood", &(a->tt__OtherType::Likelihood), "xsd:float"))
				{	soap_flag_Likelihood1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__OtherType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__OtherType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__OtherType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__OtherType::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__OtherType::__any, "xsd:byte"))
				{	a->tt__OtherType::__size++;
					a->tt__OtherType::__any = NULL;
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
		if (a->tt__OtherType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__OtherType::__size)
			a->tt__OtherType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__OtherType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__OtherType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__OtherType, 0, sizeof(tt__OtherType), 0, soap_copy_tt__OtherType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0 || soap_flag_Likelihood1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__OtherType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__OtherType);
	if (this->soap_out(soap, tag?tag:"tt:OtherType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__OtherType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__OtherType(soap, this, tag, type);
}

SOAP_FMAC3 tt__OtherType * SOAP_FMAC4 soap_get_tt__OtherType(struct soap *soap, tt__OtherType *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__OtherType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__OtherType * SOAP_FMAC2 soap_instantiate_tt__OtherType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__OtherType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__OtherType, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__OtherType);
		if (size)
			*size = sizeof(tt__OtherType);
		((tt__OtherType*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__OtherType, n);
		if (size)
			*size = n * sizeof(tt__OtherType);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__OtherType*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__OtherType*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__OtherType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__OtherType %p -> %p\n", q, p));
	*(tt__OtherType*)p = *(tt__OtherType*)q;
}

void tt__ClassDescriptorExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ClassDescriptorExtension2::__size = 0;
	this->tt__ClassDescriptorExtension2::__any = NULL;
	this->tt__ClassDescriptorExtension2::__anyAttribute = NULL;
}

void tt__ClassDescriptorExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ClassDescriptorExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ClassDescriptorExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptorExtension2(struct soap *soap, const char *tag, int id, const tt__ClassDescriptorExtension2 *a, const char *type)
{
	if (((tt__ClassDescriptorExtension2*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ClassDescriptorExtension2*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptorExtension2), "tt:ClassDescriptorExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ClassDescriptorExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__ClassDescriptorExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ClassDescriptorExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ClassDescriptorExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ClassDescriptorExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__ClassDescriptorExtension2 * SOAP_FMAC4 soap_in_tt__ClassDescriptorExtension2(struct soap *soap, const char *tag, tt__ClassDescriptorExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ClassDescriptorExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptorExtension2, sizeof(tt__ClassDescriptorExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ClassDescriptorExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ClassDescriptorExtension2 *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ClassDescriptorExtension2*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ClassDescriptorExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ClassDescriptorExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ClassDescriptorExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ClassDescriptorExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ClassDescriptorExtension2::__any, "xsd:byte"))
				{	a->tt__ClassDescriptorExtension2::__size++;
					a->tt__ClassDescriptorExtension2::__any = NULL;
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
		if (a->tt__ClassDescriptorExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ClassDescriptorExtension2::__size)
			a->tt__ClassDescriptorExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ClassDescriptorExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ClassDescriptorExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptorExtension2, 0, sizeof(tt__ClassDescriptorExtension2), 0, soap_copy_tt__ClassDescriptorExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ClassDescriptorExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptorExtension2);
	if (this->soap_out(soap, tag?tag:"tt:ClassDescriptorExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ClassDescriptorExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ClassDescriptorExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__ClassDescriptorExtension2 * SOAP_FMAC4 soap_get_tt__ClassDescriptorExtension2(struct soap *soap, tt__ClassDescriptorExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptorExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ClassDescriptorExtension2 * SOAP_FMAC2 soap_instantiate_tt__ClassDescriptorExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ClassDescriptorExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ClassDescriptorExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ClassDescriptorExtension2);
		if (size)
			*size = sizeof(tt__ClassDescriptorExtension2);
		((tt__ClassDescriptorExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ClassDescriptorExtension2, n);
		if (size)
			*size = n * sizeof(tt__ClassDescriptorExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ClassDescriptorExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ClassDescriptorExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ClassDescriptorExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ClassDescriptorExtension2 %p -> %p\n", q, p));
	*(tt__ClassDescriptorExtension2*)p = *(tt__ClassDescriptorExtension2*)q;
}

void tt__ClassDescriptorExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ClassDescriptorExtension::__size = 0;
	this->tt__ClassDescriptorExtension::__any = NULL;
	this->tt__ClassDescriptorExtension::__sizeOtherTypes = 0;
	this->tt__ClassDescriptorExtension::OtherTypes = NULL;
	this->tt__ClassDescriptorExtension::Extension = NULL;
}

void tt__ClassDescriptorExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ClassDescriptorExtension::OtherTypes)
	{	int i;
		for (i = 0; i < this->tt__ClassDescriptorExtension::__sizeOtherTypes; i++)
		{
			soap_serialize_PointerTott__OtherType(soap, this->tt__ClassDescriptorExtension::OtherTypes + i);
		}
	}
	soap_serialize_PointerTott__ClassDescriptorExtension2(soap, &this->tt__ClassDescriptorExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ClassDescriptorExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ClassDescriptorExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptorExtension(struct soap *soap, const char *tag, int id, const tt__ClassDescriptorExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptorExtension), "tt:ClassDescriptorExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ClassDescriptorExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ClassDescriptorExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ClassDescriptorExtension::__any + i, ""))
				return soap->error;
	}
	if (a->tt__ClassDescriptorExtension::OtherTypes)
	{	int i;
		for (i = 0; i < a->tt__ClassDescriptorExtension::__sizeOtherTypes; i++)
			if (soap_out_PointerTott__OtherType(soap, "tt:OtherTypes", -1, a->tt__ClassDescriptorExtension::OtherTypes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ClassDescriptorExtension2(soap, "tt:Extension", -1, &(a->tt__ClassDescriptorExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ClassDescriptorExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ClassDescriptorExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ClassDescriptorExtension * SOAP_FMAC4 soap_in_tt__ClassDescriptorExtension(struct soap *soap, const char *tag, tt__ClassDescriptorExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ClassDescriptorExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptorExtension, sizeof(tt__ClassDescriptorExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ClassDescriptorExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ClassDescriptorExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	struct soap_blist *soap_blist_OtherTypes1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:OtherTypes", 1, NULL))
			{	if (a->tt__ClassDescriptorExtension::OtherTypes == NULL)
				{	if (soap_blist_OtherTypes1 == NULL)
						soap_blist_OtherTypes1 = soap_new_block(soap);
					a->tt__ClassDescriptorExtension::OtherTypes = (tt__OtherType **)soap_push_block(soap, soap_blist_OtherTypes1, sizeof(tt__OtherType *));
					if (a->tt__ClassDescriptorExtension::OtherTypes == NULL)
						return NULL;
					*a->tt__ClassDescriptorExtension::OtherTypes = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__OtherType(soap, "tt:OtherTypes", a->tt__ClassDescriptorExtension::OtherTypes, "tt:OtherType"))
				{	a->tt__ClassDescriptorExtension::__sizeOtherTypes++;
					a->tt__ClassDescriptorExtension::OtherTypes = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptorExtension2(soap, "tt:Extension", &(a->tt__ClassDescriptorExtension::Extension), "tt:ClassDescriptorExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ClassDescriptorExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ClassDescriptorExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ClassDescriptorExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ClassDescriptorExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ClassDescriptorExtension::__any, "xsd:byte"))
				{	a->tt__ClassDescriptorExtension::__size++;
					a->tt__ClassDescriptorExtension::__any = NULL;
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
		if (a->tt__ClassDescriptorExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ClassDescriptorExtension::__size)
			a->tt__ClassDescriptorExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ClassDescriptorExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->tt__ClassDescriptorExtension::OtherTypes)
			soap_pop_block(soap, soap_blist_OtherTypes1);
		if (a->tt__ClassDescriptorExtension::__sizeOtherTypes)
			a->tt__ClassDescriptorExtension::OtherTypes = (tt__OtherType **)soap_save_block(soap, soap_blist_OtherTypes1, NULL, 1);
		else
		{	a->tt__ClassDescriptorExtension::OtherTypes = NULL;
			if (soap_blist_OtherTypes1)
				soap_end_block(soap, soap_blist_OtherTypes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ClassDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptorExtension, 0, sizeof(tt__ClassDescriptorExtension), 0, soap_copy_tt__ClassDescriptorExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__ClassDescriptorExtension::__sizeOtherTypes < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ClassDescriptorExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptorExtension);
	if (this->soap_out(soap, tag?tag:"tt:ClassDescriptorExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ClassDescriptorExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ClassDescriptorExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ClassDescriptorExtension * SOAP_FMAC4 soap_get_tt__ClassDescriptorExtension(struct soap *soap, tt__ClassDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ClassDescriptorExtension * SOAP_FMAC2 soap_instantiate_tt__ClassDescriptorExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ClassDescriptorExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ClassDescriptorExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ClassDescriptorExtension);
		if (size)
			*size = sizeof(tt__ClassDescriptorExtension);
		((tt__ClassDescriptorExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ClassDescriptorExtension, n);
		if (size)
			*size = n * sizeof(tt__ClassDescriptorExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ClassDescriptorExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ClassDescriptorExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ClassDescriptorExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ClassDescriptorExtension %p -> %p\n", q, p));
	*(tt__ClassDescriptorExtension*)p = *(tt__ClassDescriptorExtension*)q;
}

void tt__ClassDescriptor::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ClassDescriptor::__sizeClassCandidate = 0;
	this->tt__ClassDescriptor::ClassCandidate = NULL;
	this->tt__ClassDescriptor::Extension = NULL;
}

void tt__ClassDescriptor::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ClassDescriptor::ClassCandidate)
	{	int i;
		for (i = 0; i < this->tt__ClassDescriptor::__sizeClassCandidate; i++)
		{
			soap_embedded(soap, this->tt__ClassDescriptor::ClassCandidate + i, SOAP_TYPE__tt__ClassDescriptor_ClassCandidate);
			this->tt__ClassDescriptor::ClassCandidate[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTott__ClassDescriptorExtension(soap, &this->tt__ClassDescriptor::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ClassDescriptor::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ClassDescriptor(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ClassDescriptor(struct soap *soap, const char *tag, int id, const tt__ClassDescriptor *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ClassDescriptor), "tt:ClassDescriptor"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ClassDescriptor::ClassCandidate)
	{	int i;
		for (i = 0; i < a->tt__ClassDescriptor::__sizeClassCandidate; i++)
			if (a->tt__ClassDescriptor::ClassCandidate[i].soap_out(soap, "tt:ClassCandidate", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ClassDescriptorExtension(soap, "tt:Extension", -1, &(a->tt__ClassDescriptor::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ClassDescriptor::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ClassDescriptor(soap, tag, this, type);
}

SOAP_FMAC3 tt__ClassDescriptor * SOAP_FMAC4 soap_in_tt__ClassDescriptor(struct soap *soap, const char *tag, tt__ClassDescriptor *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ClassDescriptor *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ClassDescriptor, sizeof(tt__ClassDescriptor), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ClassDescriptor)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ClassDescriptor *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_ClassCandidate1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ClassCandidate", 1, NULL))
			{	if (a->tt__ClassDescriptor::ClassCandidate == NULL)
				{	if (soap_blist_ClassCandidate1 == NULL)
						soap_blist_ClassCandidate1 = soap_new_block(soap);
					a->tt__ClassDescriptor::ClassCandidate = (_tt__ClassDescriptor_ClassCandidate *)soap_push_block(soap, soap_blist_ClassCandidate1, sizeof(_tt__ClassDescriptor_ClassCandidate));
					if (a->tt__ClassDescriptor::ClassCandidate == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ClassDescriptor::ClassCandidate, _tt__ClassDescriptor_ClassCandidate);
					a->tt__ClassDescriptor::ClassCandidate->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ClassDescriptor_ClassCandidate(soap, "tt:ClassCandidate", a->tt__ClassDescriptor::ClassCandidate, ""))
				{	a->tt__ClassDescriptor::__sizeClassCandidate++;
					a->tt__ClassDescriptor::ClassCandidate = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptorExtension(soap, "tt:Extension", &(a->tt__ClassDescriptor::Extension), "tt:ClassDescriptorExtension"))
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
		if (a->tt__ClassDescriptor::ClassCandidate)
			soap_pop_block(soap, soap_blist_ClassCandidate1);
		if (a->tt__ClassDescriptor::__sizeClassCandidate)
			a->tt__ClassDescriptor::ClassCandidate = (_tt__ClassDescriptor_ClassCandidate *)soap_save_block(soap, soap_blist_ClassCandidate1, NULL, 1);
		else
		{	a->tt__ClassDescriptor::ClassCandidate = NULL;
			if (soap_blist_ClassCandidate1)
				soap_end_block(soap, soap_blist_ClassCandidate1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ClassDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ClassDescriptor, 0, sizeof(tt__ClassDescriptor), 0, soap_copy_tt__ClassDescriptor);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ClassDescriptor::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ClassDescriptor);
	if (this->soap_out(soap, tag?tag:"tt:ClassDescriptor", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ClassDescriptor::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ClassDescriptor(soap, this, tag, type);
}

SOAP_FMAC3 tt__ClassDescriptor * SOAP_FMAC4 soap_get_tt__ClassDescriptor(struct soap *soap, tt__ClassDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ClassDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ClassDescriptor * SOAP_FMAC2 soap_instantiate_tt__ClassDescriptor(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ClassDescriptor(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ClassDescriptor, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ClassDescriptor);
		if (size)
			*size = sizeof(tt__ClassDescriptor);
		((tt__ClassDescriptor*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ClassDescriptor, n);
		if (size)
			*size = n * sizeof(tt__ClassDescriptor);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ClassDescriptor*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ClassDescriptor*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ClassDescriptor(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ClassDescriptor %p -> %p\n", q, p));
	*(tt__ClassDescriptor*)p = *(tt__ClassDescriptor*)q;
}

void tt__ColorDescriptorExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ColorDescriptorExtension::__size = 0;
	this->tt__ColorDescriptorExtension::__any = NULL;
}

void tt__ColorDescriptorExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ColorDescriptorExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ColorDescriptorExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorDescriptorExtension(struct soap *soap, const char *tag, int id, const tt__ColorDescriptorExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ColorDescriptorExtension), "tt:ColorDescriptorExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ColorDescriptorExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ColorDescriptorExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ColorDescriptorExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ColorDescriptorExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ColorDescriptorExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ColorDescriptorExtension * SOAP_FMAC4 soap_in_tt__ColorDescriptorExtension(struct soap *soap, const char *tag, tt__ColorDescriptorExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ColorDescriptorExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorDescriptorExtension, sizeof(tt__ColorDescriptorExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ColorDescriptorExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ColorDescriptorExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ColorDescriptorExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ColorDescriptorExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ColorDescriptorExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ColorDescriptorExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ColorDescriptorExtension::__any, "xsd:byte"))
				{	a->tt__ColorDescriptorExtension::__size++;
					a->tt__ColorDescriptorExtension::__any = NULL;
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
		if (a->tt__ColorDescriptorExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ColorDescriptorExtension::__size)
			a->tt__ColorDescriptorExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ColorDescriptorExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ColorDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ColorDescriptorExtension, 0, sizeof(tt__ColorDescriptorExtension), 0, soap_copy_tt__ColorDescriptorExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ColorDescriptorExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ColorDescriptorExtension);
	if (this->soap_out(soap, tag?tag:"tt:ColorDescriptorExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ColorDescriptorExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ColorDescriptorExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ColorDescriptorExtension * SOAP_FMAC4 soap_get_tt__ColorDescriptorExtension(struct soap *soap, tt__ColorDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ColorDescriptorExtension * SOAP_FMAC2 soap_instantiate_tt__ColorDescriptorExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ColorDescriptorExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ColorDescriptorExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ColorDescriptorExtension);
		if (size)
			*size = sizeof(tt__ColorDescriptorExtension);
		((tt__ColorDescriptorExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ColorDescriptorExtension, n);
		if (size)
			*size = n * sizeof(tt__ColorDescriptorExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ColorDescriptorExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ColorDescriptorExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ColorDescriptorExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ColorDescriptorExtension %p -> %p\n", q, p));
	*(tt__ColorDescriptorExtension*)p = *(tt__ColorDescriptorExtension*)q;
}

void tt__ColorDescriptor::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ColorDescriptor::__sizeColorCluster = 0;
	this->tt__ColorDescriptor::ColorCluster = NULL;
	this->tt__ColorDescriptor::Extension = NULL;
	this->tt__ColorDescriptor::__anyAttribute = NULL;
}

void tt__ColorDescriptor::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ColorDescriptor::ColorCluster)
	{	int i;
		for (i = 0; i < this->tt__ColorDescriptor::__sizeColorCluster; i++)
		{
			soap_embedded(soap, this->tt__ColorDescriptor::ColorCluster + i, SOAP_TYPE__tt__ColorDescriptor_ColorCluster);
			this->tt__ColorDescriptor::ColorCluster[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTott__ColorDescriptorExtension(soap, &this->tt__ColorDescriptor::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ColorDescriptor::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ColorDescriptor(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorDescriptor(struct soap *soap, const char *tag, int id, const tt__ColorDescriptor *a, const char *type)
{
	if (((tt__ColorDescriptor*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ColorDescriptor*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ColorDescriptor), "tt:ColorDescriptor"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ColorDescriptor::ColorCluster)
	{	int i;
		for (i = 0; i < a->tt__ColorDescriptor::__sizeColorCluster; i++)
			if (a->tt__ColorDescriptor::ColorCluster[i].soap_out(soap, "tt:ColorCluster", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ColorDescriptorExtension(soap, "tt:Extension", -1, &(a->tt__ColorDescriptor::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ColorDescriptor::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ColorDescriptor(soap, tag, this, type);
}

SOAP_FMAC3 tt__ColorDescriptor * SOAP_FMAC4 soap_in_tt__ColorDescriptor(struct soap *soap, const char *tag, tt__ColorDescriptor *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ColorDescriptor *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorDescriptor, sizeof(tt__ColorDescriptor), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ColorDescriptor)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ColorDescriptor *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ColorDescriptor*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_ColorCluster1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ColorCluster", 1, NULL))
			{	if (a->tt__ColorDescriptor::ColorCluster == NULL)
				{	if (soap_blist_ColorCluster1 == NULL)
						soap_blist_ColorCluster1 = soap_new_block(soap);
					a->tt__ColorDescriptor::ColorCluster = (_tt__ColorDescriptor_ColorCluster *)soap_push_block(soap, soap_blist_ColorCluster1, sizeof(_tt__ColorDescriptor_ColorCluster));
					if (a->tt__ColorDescriptor::ColorCluster == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ColorDescriptor::ColorCluster, _tt__ColorDescriptor_ColorCluster);
					a->tt__ColorDescriptor::ColorCluster->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ColorDescriptor_ColorCluster(soap, "tt:ColorCluster", a->tt__ColorDescriptor::ColorCluster, ""))
				{	a->tt__ColorDescriptor::__sizeColorCluster++;
					a->tt__ColorDescriptor::ColorCluster = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorDescriptorExtension(soap, "tt:Extension", &(a->tt__ColorDescriptor::Extension), "tt:ColorDescriptorExtension"))
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
		if (a->tt__ColorDescriptor::ColorCluster)
			soap_pop_block(soap, soap_blist_ColorCluster1);
		if (a->tt__ColorDescriptor::__sizeColorCluster)
			a->tt__ColorDescriptor::ColorCluster = (_tt__ColorDescriptor_ColorCluster *)soap_save_block(soap, soap_blist_ColorCluster1, NULL, 1);
		else
		{	a->tt__ColorDescriptor::ColorCluster = NULL;
			if (soap_blist_ColorCluster1)
				soap_end_block(soap, soap_blist_ColorCluster1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ColorDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ColorDescriptor, 0, sizeof(tt__ColorDescriptor), 0, soap_copy_tt__ColorDescriptor);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ColorDescriptor::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ColorDescriptor);
	if (this->soap_out(soap, tag?tag:"tt:ColorDescriptor", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ColorDescriptor::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ColorDescriptor(soap, this, tag, type);
}

SOAP_FMAC3 tt__ColorDescriptor * SOAP_FMAC4 soap_get_tt__ColorDescriptor(struct soap *soap, tt__ColorDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ColorDescriptor * SOAP_FMAC2 soap_instantiate_tt__ColorDescriptor(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ColorDescriptor(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ColorDescriptor, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ColorDescriptor);
		if (size)
			*size = sizeof(tt__ColorDescriptor);
		((tt__ColorDescriptor*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ColorDescriptor, n);
		if (size)
			*size = n * sizeof(tt__ColorDescriptor);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ColorDescriptor*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ColorDescriptor*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ColorDescriptor(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ColorDescriptor %p -> %p\n", q, p));
	*(tt__ColorDescriptor*)p = *(tt__ColorDescriptor*)q;
}

void tt__ShapeDescriptorExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ShapeDescriptorExtension::__size = 0;
	this->tt__ShapeDescriptorExtension::__any = NULL;
}

void tt__ShapeDescriptorExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ShapeDescriptorExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ShapeDescriptorExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ShapeDescriptorExtension(struct soap *soap, const char *tag, int id, const tt__ShapeDescriptorExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ShapeDescriptorExtension), "tt:ShapeDescriptorExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ShapeDescriptorExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ShapeDescriptorExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ShapeDescriptorExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ShapeDescriptorExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ShapeDescriptorExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ShapeDescriptorExtension * SOAP_FMAC4 soap_in_tt__ShapeDescriptorExtension(struct soap *soap, const char *tag, tt__ShapeDescriptorExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ShapeDescriptorExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ShapeDescriptorExtension, sizeof(tt__ShapeDescriptorExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ShapeDescriptorExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ShapeDescriptorExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ShapeDescriptorExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ShapeDescriptorExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ShapeDescriptorExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ShapeDescriptorExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ShapeDescriptorExtension::__any, "xsd:byte"))
				{	a->tt__ShapeDescriptorExtension::__size++;
					a->tt__ShapeDescriptorExtension::__any = NULL;
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
		if (a->tt__ShapeDescriptorExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ShapeDescriptorExtension::__size)
			a->tt__ShapeDescriptorExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ShapeDescriptorExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ShapeDescriptorExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ShapeDescriptorExtension, 0, sizeof(tt__ShapeDescriptorExtension), 0, soap_copy_tt__ShapeDescriptorExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ShapeDescriptorExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ShapeDescriptorExtension);
	if (this->soap_out(soap, tag?tag:"tt:ShapeDescriptorExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ShapeDescriptorExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ShapeDescriptorExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ShapeDescriptorExtension * SOAP_FMAC4 soap_get_tt__ShapeDescriptorExtension(struct soap *soap, tt__ShapeDescriptorExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ShapeDescriptorExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ShapeDescriptorExtension * SOAP_FMAC2 soap_instantiate_tt__ShapeDescriptorExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ShapeDescriptorExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ShapeDescriptorExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ShapeDescriptorExtension);
		if (size)
			*size = sizeof(tt__ShapeDescriptorExtension);
		((tt__ShapeDescriptorExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ShapeDescriptorExtension, n);
		if (size)
			*size = n * sizeof(tt__ShapeDescriptorExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ShapeDescriptorExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ShapeDescriptorExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ShapeDescriptorExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ShapeDescriptorExtension %p -> %p\n", q, p));
	*(tt__ShapeDescriptorExtension*)p = *(tt__ShapeDescriptorExtension*)q;
}

void tt__ShapeDescriptor::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ShapeDescriptor::BoundingBox = NULL;
	this->tt__ShapeDescriptor::CenterOfGravity = NULL;
	this->tt__ShapeDescriptor::__sizePolygon = 0;
	this->tt__ShapeDescriptor::Polygon = NULL;
	this->tt__ShapeDescriptor::Extension = NULL;
	this->tt__ShapeDescriptor::__anyAttribute = NULL;
}

void tt__ShapeDescriptor::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Rectangle(soap, &this->tt__ShapeDescriptor::BoundingBox);
	soap_serialize_PointerTott__Vector(soap, &this->tt__ShapeDescriptor::CenterOfGravity);
	if (this->tt__ShapeDescriptor::Polygon)
	{	int i;
		for (i = 0; i < this->tt__ShapeDescriptor::__sizePolygon; i++)
		{
			soap_serialize_PointerTott__Polygon(soap, this->tt__ShapeDescriptor::Polygon + i);
		}
	}
	soap_serialize_PointerTott__ShapeDescriptorExtension(soap, &this->tt__ShapeDescriptor::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ShapeDescriptor::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ShapeDescriptor(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ShapeDescriptor(struct soap *soap, const char *tag, int id, const tt__ShapeDescriptor *a, const char *type)
{
	if (((tt__ShapeDescriptor*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ShapeDescriptor*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ShapeDescriptor), "tt:ShapeDescriptor"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ShapeDescriptor::BoundingBox)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:BoundingBox", -1, &a->tt__ShapeDescriptor::BoundingBox, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:BoundingBox"))
		return soap->error;
	if (a->tt__ShapeDescriptor::CenterOfGravity)
	{	if (soap_out_PointerTott__Vector(soap, "tt:CenterOfGravity", -1, &a->tt__ShapeDescriptor::CenterOfGravity, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:CenterOfGravity"))
		return soap->error;
	if (a->tt__ShapeDescriptor::Polygon)
	{	int i;
		for (i = 0; i < a->tt__ShapeDescriptor::__sizePolygon; i++)
			if (soap_out_PointerTott__Polygon(soap, "tt:Polygon", -1, a->tt__ShapeDescriptor::Polygon + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ShapeDescriptorExtension(soap, "tt:Extension", -1, &(a->tt__ShapeDescriptor::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ShapeDescriptor::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ShapeDescriptor(soap, tag, this, type);
}

SOAP_FMAC3 tt__ShapeDescriptor * SOAP_FMAC4 soap_in_tt__ShapeDescriptor(struct soap *soap, const char *tag, tt__ShapeDescriptor *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ShapeDescriptor *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ShapeDescriptor, sizeof(tt__ShapeDescriptor), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ShapeDescriptor)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ShapeDescriptor *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ShapeDescriptor*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_BoundingBox1 = 1;
	size_t soap_flag_CenterOfGravity1 = 1;
	struct soap_blist *soap_blist_Polygon1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_BoundingBox1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:BoundingBox", &(a->tt__ShapeDescriptor::BoundingBox), "tt:Rectangle"))
				{	soap_flag_BoundingBox1--;
					continue;
				}
			if (soap_flag_CenterOfGravity1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Vector(soap, "tt:CenterOfGravity", &(a->tt__ShapeDescriptor::CenterOfGravity), "tt:Vector"))
				{	soap_flag_CenterOfGravity1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Polygon", 1, NULL))
			{	if (a->tt__ShapeDescriptor::Polygon == NULL)
				{	if (soap_blist_Polygon1 == NULL)
						soap_blist_Polygon1 = soap_new_block(soap);
					a->tt__ShapeDescriptor::Polygon = (tt__Polygon **)soap_push_block(soap, soap_blist_Polygon1, sizeof(tt__Polygon *));
					if (a->tt__ShapeDescriptor::Polygon == NULL)
						return NULL;
					*a->tt__ShapeDescriptor::Polygon = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Polygon(soap, "tt:Polygon", a->tt__ShapeDescriptor::Polygon, "tt:Polygon"))
				{	a->tt__ShapeDescriptor::__sizePolygon++;
					a->tt__ShapeDescriptor::Polygon = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ShapeDescriptorExtension(soap, "tt:Extension", &(a->tt__ShapeDescriptor::Extension), "tt:ShapeDescriptorExtension"))
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
		if (a->tt__ShapeDescriptor::Polygon)
			soap_pop_block(soap, soap_blist_Polygon1);
		if (a->tt__ShapeDescriptor::__sizePolygon)
			a->tt__ShapeDescriptor::Polygon = (tt__Polygon **)soap_save_block(soap, soap_blist_Polygon1, NULL, 1);
		else
		{	a->tt__ShapeDescriptor::Polygon = NULL;
			if (soap_blist_Polygon1)
				soap_end_block(soap, soap_blist_Polygon1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ShapeDescriptor *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ShapeDescriptor, 0, sizeof(tt__ShapeDescriptor), 0, soap_copy_tt__ShapeDescriptor);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BoundingBox1 > 0 || soap_flag_CenterOfGravity1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ShapeDescriptor::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ShapeDescriptor);
	if (this->soap_out(soap, tag?tag:"tt:ShapeDescriptor", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ShapeDescriptor::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ShapeDescriptor(soap, this, tag, type);
}

SOAP_FMAC3 tt__ShapeDescriptor * SOAP_FMAC4 soap_get_tt__ShapeDescriptor(struct soap *soap, tt__ShapeDescriptor *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ShapeDescriptor(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ShapeDescriptor * SOAP_FMAC2 soap_instantiate_tt__ShapeDescriptor(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ShapeDescriptor(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ShapeDescriptor, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ShapeDescriptor);
		if (size)
			*size = sizeof(tt__ShapeDescriptor);
		((tt__ShapeDescriptor*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ShapeDescriptor, n);
		if (size)
			*size = n * sizeof(tt__ShapeDescriptor);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ShapeDescriptor*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ShapeDescriptor*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ShapeDescriptor(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ShapeDescriptor %p -> %p\n", q, p));
	*(tt__ShapeDescriptor*)p = *(tt__ShapeDescriptor*)q;
}

void tt__AppearanceExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AppearanceExtension::__size = 0;
	this->tt__AppearanceExtension::__any = NULL;
}

void tt__AppearanceExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AppearanceExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AppearanceExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AppearanceExtension(struct soap *soap, const char *tag, int id, const tt__AppearanceExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AppearanceExtension), "tt:AppearanceExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AppearanceExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AppearanceExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AppearanceExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AppearanceExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AppearanceExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AppearanceExtension * SOAP_FMAC4 soap_in_tt__AppearanceExtension(struct soap *soap, const char *tag, tt__AppearanceExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AppearanceExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AppearanceExtension, sizeof(tt__AppearanceExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AppearanceExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AppearanceExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AppearanceExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AppearanceExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AppearanceExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AppearanceExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AppearanceExtension::__any, "xsd:byte"))
				{	a->tt__AppearanceExtension::__size++;
					a->tt__AppearanceExtension::__any = NULL;
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
		if (a->tt__AppearanceExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AppearanceExtension::__size)
			a->tt__AppearanceExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AppearanceExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AppearanceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AppearanceExtension, 0, sizeof(tt__AppearanceExtension), 0, soap_copy_tt__AppearanceExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AppearanceExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AppearanceExtension);
	if (this->soap_out(soap, tag?tag:"tt:AppearanceExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AppearanceExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AppearanceExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AppearanceExtension * SOAP_FMAC4 soap_get_tt__AppearanceExtension(struct soap *soap, tt__AppearanceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AppearanceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AppearanceExtension * SOAP_FMAC2 soap_instantiate_tt__AppearanceExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AppearanceExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AppearanceExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AppearanceExtension);
		if (size)
			*size = sizeof(tt__AppearanceExtension);
		((tt__AppearanceExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AppearanceExtension, n);
		if (size)
			*size = n * sizeof(tt__AppearanceExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AppearanceExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AppearanceExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AppearanceExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AppearanceExtension %p -> %p\n", q, p));
	*(tt__AppearanceExtension*)p = *(tt__AppearanceExtension*)q;
}

void tt__Appearance::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Appearance::Transformation = NULL;
	this->tt__Appearance::Shape = NULL;
	this->tt__Appearance::Color = NULL;
	this->tt__Appearance::Class = NULL;
	this->tt__Appearance::Extension = NULL;
	this->tt__Appearance::__anyAttribute = NULL;
}

void tt__Appearance::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transformation(soap, &this->tt__Appearance::Transformation);
	soap_serialize_PointerTott__ShapeDescriptor(soap, &this->tt__Appearance::Shape);
	soap_serialize_PointerTott__ColorDescriptor(soap, &this->tt__Appearance::Color);
	soap_serialize_PointerTott__ClassDescriptor(soap, &this->tt__Appearance::Class);
	soap_serialize_PointerTott__AppearanceExtension(soap, &this->tt__Appearance::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Appearance::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Appearance(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Appearance(struct soap *soap, const char *tag, int id, const tt__Appearance *a, const char *type)
{
	if (((tt__Appearance*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Appearance*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Appearance), "tt:Appearance"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &(a->tt__Appearance::Transformation), ""))
		return soap->error;
	if (soap_out_PointerTott__ShapeDescriptor(soap, "tt:Shape", -1, &(a->tt__Appearance::Shape), ""))
		return soap->error;
	if (soap_out_PointerTott__ColorDescriptor(soap, "tt:Color", -1, &(a->tt__Appearance::Color), ""))
		return soap->error;
	if (soap_out_PointerTott__ClassDescriptor(soap, "tt:Class", -1, &(a->tt__Appearance::Class), ""))
		return soap->error;
	if (soap_out_PointerTott__AppearanceExtension(soap, "tt:Extension", -1, &(a->tt__Appearance::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Appearance::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Appearance(soap, tag, this, type);
}

SOAP_FMAC3 tt__Appearance * SOAP_FMAC4 soap_in_tt__Appearance(struct soap *soap, const char *tag, tt__Appearance *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Appearance *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Appearance, sizeof(tt__Appearance), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Appearance)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Appearance *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Appearance*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Transformation1 = 1;
	size_t soap_flag_Shape1 = 1;
	size_t soap_flag_Color1 = 1;
	size_t soap_flag_Class1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Transformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transformation(soap, "tt:Transformation", &(a->tt__Appearance::Transformation), "tt:Transformation"))
				{	soap_flag_Transformation1--;
					continue;
				}
			if (soap_flag_Shape1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ShapeDescriptor(soap, "tt:Shape", &(a->tt__Appearance::Shape), "tt:ShapeDescriptor"))
				{	soap_flag_Shape1--;
					continue;
				}
			if (soap_flag_Color1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ColorDescriptor(soap, "tt:Color", &(a->tt__Appearance::Color), "tt:ColorDescriptor"))
				{	soap_flag_Color1--;
					continue;
				}
			if (soap_flag_Class1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ClassDescriptor(soap, "tt:Class", &(a->tt__Appearance::Class), "tt:ClassDescriptor"))
				{	soap_flag_Class1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AppearanceExtension(soap, "tt:Extension", &(a->tt__Appearance::Extension), "tt:AppearanceExtension"))
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
	{	a = (tt__Appearance *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Appearance, 0, sizeof(tt__Appearance), 0, soap_copy_tt__Appearance);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Appearance::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Appearance);
	if (this->soap_out(soap, tag?tag:"tt:Appearance", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Appearance::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Appearance(soap, this, tag, type);
}

SOAP_FMAC3 tt__Appearance * SOAP_FMAC4 soap_get_tt__Appearance(struct soap *soap, tt__Appearance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Appearance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Appearance * SOAP_FMAC2 soap_instantiate_tt__Appearance(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Appearance(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Appearance, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Appearance);
		if (size)
			*size = sizeof(tt__Appearance);
		((tt__Appearance*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Appearance, n);
		if (size)
			*size = n * sizeof(tt__Appearance);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Appearance*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Appearance*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Appearance(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Appearance %p -> %p\n", q, p));
	*(tt__Appearance*)p = *(tt__Appearance*)q;
}

void tt__ColorCovariance::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__ColorCovariance::XX);
	soap_default_float(soap, &this->tt__ColorCovariance::YY);
	soap_default_float(soap, &this->tt__ColorCovariance::ZZ);
	this->tt__ColorCovariance::XY = NULL;
	this->tt__ColorCovariance::XZ = NULL;
	this->tt__ColorCovariance::YZ = NULL;
	soap_default_xsd__anyURI(soap, &this->tt__ColorCovariance::Colorspace);
}

void tt__ColorCovariance::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ColorCovariance::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ColorCovariance(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ColorCovariance(struct soap *soap, const char *tag, int id, const tt__ColorCovariance *a, const char *type)
{
	soap_set_attr(soap, "XX", soap_float2s(soap, ((tt__ColorCovariance*)a)->XX), 1);
	soap_set_attr(soap, "YY", soap_float2s(soap, ((tt__ColorCovariance*)a)->YY), 1);
	soap_set_attr(soap, "ZZ", soap_float2s(soap, ((tt__ColorCovariance*)a)->ZZ), 1);
	if (((tt__ColorCovariance*)a)->XY)
		soap_set_attr(soap, "XY", soap_float2s(soap, *((tt__ColorCovariance*)a)->XY), 1);
	if (((tt__ColorCovariance*)a)->XZ)
		soap_set_attr(soap, "XZ", soap_float2s(soap, *((tt__ColorCovariance*)a)->XZ), 1);
	if (((tt__ColorCovariance*)a)->YZ)
		soap_set_attr(soap, "YZ", soap_float2s(soap, *((tt__ColorCovariance*)a)->YZ), 1);
	if (((tt__ColorCovariance*)a)->Colorspace)
		soap_set_attr(soap, "Colorspace", ((tt__ColorCovariance*)a)->Colorspace, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:ColorCovariance");
}

void *tt__ColorCovariance::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ColorCovariance(soap, tag, this, type);
}

SOAP_FMAC3 tt__ColorCovariance * SOAP_FMAC4 soap_in_tt__ColorCovariance(struct soap *soap, const char *tag, tt__ColorCovariance *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__ColorCovariance *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ColorCovariance, sizeof(tt__ColorCovariance), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ColorCovariance)
			return (tt__ColorCovariance *)a->soap_in(soap, tag, type);
	}
	if (soap_s2float(soap, soap_attr_value(soap, "XX", 1), &((tt__ColorCovariance*)a)->XX))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "YY", 1), &((tt__ColorCovariance*)a)->YY))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "ZZ", 1), &((tt__ColorCovariance*)a)->ZZ))
		return NULL;
	{	const char *t = soap_attr_value(soap, "XY", 0);
		if (t)
		{
			if (!(((tt__ColorCovariance*)a)->XY = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__ColorCovariance*)a)->XY))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "XZ", 0);
		if (t)
		{
			if (!(((tt__ColorCovariance*)a)->XZ = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__ColorCovariance*)a)->XZ))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "YZ", 0);
		if (t)
		{
			if (!(((tt__ColorCovariance*)a)->YZ = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__ColorCovariance*)a)->YZ))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Colorspace", 0), &((tt__ColorCovariance*)a)->Colorspace, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__ColorCovariance::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ColorCovariance);
	if (this->soap_out(soap, tag?tag:"tt:ColorCovariance", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ColorCovariance::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ColorCovariance(soap, this, tag, type);
}

SOAP_FMAC3 tt__ColorCovariance * SOAP_FMAC4 soap_get_tt__ColorCovariance(struct soap *soap, tt__ColorCovariance *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ColorCovariance(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ColorCovariance * SOAP_FMAC2 soap_instantiate_tt__ColorCovariance(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ColorCovariance(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ColorCovariance, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ColorCovariance);
		if (size)
			*size = sizeof(tt__ColorCovariance);
		((tt__ColorCovariance*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ColorCovariance, n);
		if (size)
			*size = n * sizeof(tt__ColorCovariance);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ColorCovariance*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ColorCovariance*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ColorCovariance(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ColorCovariance %p -> %p\n", q, p));
	*(tt__ColorCovariance*)p = *(tt__ColorCovariance*)q;
}

void tt__Color::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->tt__Color::X);
	soap_default_float(soap, &this->tt__Color::Y);
	soap_default_float(soap, &this->tt__Color::Z);
	soap_default_xsd__anyURI(soap, &this->tt__Color::Colorspace);
}

void tt__Color::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Color::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Color(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Color(struct soap *soap, const char *tag, int id, const tt__Color *a, const char *type)
{
	soap_set_attr(soap, "X", soap_float2s(soap, ((tt__Color*)a)->X), 1);
	soap_set_attr(soap, "Y", soap_float2s(soap, ((tt__Color*)a)->Y), 1);
	soap_set_attr(soap, "Z", soap_float2s(soap, ((tt__Color*)a)->Z), 1);
	if (((tt__Color*)a)->Colorspace)
		soap_set_attr(soap, "Colorspace", ((tt__Color*)a)->Colorspace, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:Color");
}

void *tt__Color::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Color(soap, tag, this, type);
}

SOAP_FMAC3 tt__Color * SOAP_FMAC4 soap_in_tt__Color(struct soap *soap, const char *tag, tt__Color *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Color *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Color, sizeof(tt__Color), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Color)
			return (tt__Color *)a->soap_in(soap, tag, type);
	}
	if (soap_s2float(soap, soap_attr_value(soap, "X", 1), &((tt__Color*)a)->X))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "Y", 1), &((tt__Color*)a)->Y))
		return NULL;
	if (soap_s2float(soap, soap_attr_value(soap, "Z", 1), &((tt__Color*)a)->Z))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Colorspace", 0), &((tt__Color*)a)->Colorspace, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__Color::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Color);
	if (this->soap_out(soap, tag?tag:"tt:Color", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Color::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Color(soap, this, tag, type);
}

SOAP_FMAC3 tt__Color * SOAP_FMAC4 soap_get_tt__Color(struct soap *soap, tt__Color *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Color(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Color * SOAP_FMAC2 soap_instantiate_tt__Color(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Color(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Color, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Color);
		if (size)
			*size = sizeof(tt__Color);
		((tt__Color*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Color, n);
		if (size)
			*size = n * sizeof(tt__Color);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Color*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Color*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Color(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Color %p -> %p\n", q, p));
	*(tt__Color*)p = *(tt__Color*)q;
}

void tt__Polyline::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Polyline::__sizePoint = 0;
	this->tt__Polyline::Point = NULL;
}

void tt__Polyline::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__Polyline::Point)
	{	int i;
		for (i = 0; i < this->tt__Polyline::__sizePoint; i++)
		{
			soap_serialize_PointerTott__Vector(soap, this->tt__Polyline::Point + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Polyline::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Polyline(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Polyline(struct soap *soap, const char *tag, int id, const tt__Polyline *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Polyline), "tt:Polyline"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Polyline::Point)
	{	int i;
		for (i = 0; i < a->tt__Polyline::__sizePoint; i++)
			if (soap_out_PointerTott__Vector(soap, "tt:Point", -1, a->tt__Polyline::Point + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Polyline::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Polyline(soap, tag, this, type);
}

SOAP_FMAC3 tt__Polyline * SOAP_FMAC4 soap_in_tt__Polyline(struct soap *soap, const char *tag, tt__Polyline *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Polyline *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Polyline, sizeof(tt__Polyline), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Polyline)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Polyline *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Point1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Point", 1, NULL))
			{	if (a->tt__Polyline::Point == NULL)
				{	if (soap_blist_Point1 == NULL)
						soap_blist_Point1 = soap_new_block(soap);
					a->tt__Polyline::Point = (tt__Vector **)soap_push_block(soap, soap_blist_Point1, sizeof(tt__Vector *));
					if (a->tt__Polyline::Point == NULL)
						return NULL;
					*a->tt__Polyline::Point = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Vector(soap, "tt:Point", a->tt__Polyline::Point, "tt:Vector"))
				{	a->tt__Polyline::__sizePoint++;
					a->tt__Polyline::Point = NULL;
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
		if (a->tt__Polyline::Point)
			soap_pop_block(soap, soap_blist_Point1);
		if (a->tt__Polyline::__sizePoint)
			a->tt__Polyline::Point = (tt__Vector **)soap_save_block(soap, soap_blist_Point1, NULL, 1);
		else
		{	a->tt__Polyline::Point = NULL;
			if (soap_blist_Point1)
				soap_end_block(soap, soap_blist_Point1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Polyline *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Polyline, 0, sizeof(tt__Polyline), 0, soap_copy_tt__Polyline);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__Polyline::__sizePoint < 2))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Polyline::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Polyline);
	if (this->soap_out(soap, tag?tag:"tt:Polyline", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Polyline::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Polyline(soap, this, tag, type);
}

SOAP_FMAC3 tt__Polyline * SOAP_FMAC4 soap_get_tt__Polyline(struct soap *soap, tt__Polyline *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Polyline(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Polyline * SOAP_FMAC2 soap_instantiate_tt__Polyline(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Polyline(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Polyline, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Polyline);
		if (size)
			*size = sizeof(tt__Polyline);
		((tt__Polyline*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Polyline, n);
		if (size)
			*size = n * sizeof(tt__Polyline);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Polyline*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Polyline*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Polyline(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Polyline %p -> %p\n", q, p));
	*(tt__Polyline*)p = *(tt__Polyline*)q;
}

void tt__Polygon::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Polygon::__sizePoint = 0;
	this->tt__Polygon::Point = NULL;
}

void tt__Polygon::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__Polygon::Point)
	{	int i;
		for (i = 0; i < this->tt__Polygon::__sizePoint; i++)
		{
			soap_serialize_PointerTott__Vector(soap, this->tt__Polygon::Point + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Polygon::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Polygon(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Polygon(struct soap *soap, const char *tag, int id, const tt__Polygon *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Polygon), "tt:Polygon"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Polygon::Point)
	{	int i;
		for (i = 0; i < a->tt__Polygon::__sizePoint; i++)
			if (soap_out_PointerTott__Vector(soap, "tt:Point", -1, a->tt__Polygon::Point + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Polygon::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Polygon(soap, tag, this, type);
}

SOAP_FMAC3 tt__Polygon * SOAP_FMAC4 soap_in_tt__Polygon(struct soap *soap, const char *tag, tt__Polygon *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Polygon *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Polygon, sizeof(tt__Polygon), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Polygon)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Polygon *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Point1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Point", 1, NULL))
			{	if (a->tt__Polygon::Point == NULL)
				{	if (soap_blist_Point1 == NULL)
						soap_blist_Point1 = soap_new_block(soap);
					a->tt__Polygon::Point = (tt__Vector **)soap_push_block(soap, soap_blist_Point1, sizeof(tt__Vector *));
					if (a->tt__Polygon::Point == NULL)
						return NULL;
					*a->tt__Polygon::Point = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Vector(soap, "tt:Point", a->tt__Polygon::Point, "tt:Vector"))
				{	a->tt__Polygon::__sizePoint++;
					a->tt__Polygon::Point = NULL;
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
		if (a->tt__Polygon::Point)
			soap_pop_block(soap, soap_blist_Point1);
		if (a->tt__Polygon::__sizePoint)
			a->tt__Polygon::Point = (tt__Vector **)soap_save_block(soap, soap_blist_Point1, NULL, 1);
		else
		{	a->tt__Polygon::Point = NULL;
			if (soap_blist_Point1)
				soap_end_block(soap, soap_blist_Point1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Polygon *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Polygon, 0, sizeof(tt__Polygon), 0, soap_copy_tt__Polygon);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__Polygon::__sizePoint < 3))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Polygon::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Polygon);
	if (this->soap_out(soap, tag?tag:"tt:Polygon", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Polygon::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Polygon(soap, this, tag, type);
}

SOAP_FMAC3 tt__Polygon * SOAP_FMAC4 soap_get_tt__Polygon(struct soap *soap, tt__Polygon *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Polygon(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Polygon * SOAP_FMAC2 soap_instantiate_tt__Polygon(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Polygon(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Polygon, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Polygon);
		if (size)
			*size = sizeof(tt__Polygon);
		((tt__Polygon*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Polygon, n);
		if (size)
			*size = n * sizeof(tt__Polygon);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Polygon*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Polygon*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Polygon(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Polygon %p -> %p\n", q, p));
	*(tt__Polygon*)p = *(tt__Polygon*)q;
}

void tt__Rectangle::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Rectangle::bottom = NULL;
	this->tt__Rectangle::top = NULL;
	this->tt__Rectangle::right = NULL;
	this->tt__Rectangle::left = NULL;
}

void tt__Rectangle::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Rectangle::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Rectangle(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Rectangle(struct soap *soap, const char *tag, int id, const tt__Rectangle *a, const char *type)
{
	if (((tt__Rectangle*)a)->bottom)
		soap_set_attr(soap, "bottom", soap_float2s(soap, *((tt__Rectangle*)a)->bottom), 1);
	if (((tt__Rectangle*)a)->top)
		soap_set_attr(soap, "top", soap_float2s(soap, *((tt__Rectangle*)a)->top), 1);
	if (((tt__Rectangle*)a)->right)
		soap_set_attr(soap, "right", soap_float2s(soap, *((tt__Rectangle*)a)->right), 1);
	if (((tt__Rectangle*)a)->left)
		soap_set_attr(soap, "left", soap_float2s(soap, *((tt__Rectangle*)a)->left), 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:Rectangle");
}

void *tt__Rectangle::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Rectangle(soap, tag, this, type);
}

SOAP_FMAC3 tt__Rectangle * SOAP_FMAC4 soap_in_tt__Rectangle(struct soap *soap, const char *tag, tt__Rectangle *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Rectangle *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Rectangle, sizeof(tt__Rectangle), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Rectangle)
			return (tt__Rectangle *)a->soap_in(soap, tag, type);
	}
	{	const char *t = soap_attr_value(soap, "bottom", 0);
		if (t)
		{
			if (!(((tt__Rectangle*)a)->bottom = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Rectangle*)a)->bottom))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "top", 0);
		if (t)
		{
			if (!(((tt__Rectangle*)a)->top = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Rectangle*)a)->top))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "right", 0);
		if (t)
		{
			if (!(((tt__Rectangle*)a)->right = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Rectangle*)a)->right))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "left", 0);
		if (t)
		{
			if (!(((tt__Rectangle*)a)->left = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Rectangle*)a)->left))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__Rectangle::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Rectangle);
	if (this->soap_out(soap, tag?tag:"tt:Rectangle", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Rectangle::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Rectangle(soap, this, tag, type);
}

SOAP_FMAC3 tt__Rectangle * SOAP_FMAC4 soap_get_tt__Rectangle(struct soap *soap, tt__Rectangle *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Rectangle(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Rectangle * SOAP_FMAC2 soap_instantiate_tt__Rectangle(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Rectangle(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Rectangle, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Rectangle);
		if (size)
			*size = sizeof(tt__Rectangle);
		((tt__Rectangle*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Rectangle, n);
		if (size)
			*size = n * sizeof(tt__Rectangle);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Rectangle*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Rectangle*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Rectangle(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Rectangle %p -> %p\n", q, p));
	*(tt__Rectangle*)p = *(tt__Rectangle*)q;
}

void tt__Vector::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Vector::x = NULL;
	this->tt__Vector::y = NULL;
}

void tt__Vector::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Vector::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Vector(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Vector(struct soap *soap, const char *tag, int id, const tt__Vector *a, const char *type)
{
	if (((tt__Vector*)a)->x)
		soap_set_attr(soap, "x", soap_float2s(soap, *((tt__Vector*)a)->x), 1);
	if (((tt__Vector*)a)->y)
		soap_set_attr(soap, "y", soap_float2s(soap, *((tt__Vector*)a)->y), 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tt:Vector");
}

void *tt__Vector::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Vector(soap, tag, this, type);
}

SOAP_FMAC3 tt__Vector * SOAP_FMAC4 soap_in_tt__Vector(struct soap *soap, const char *tag, tt__Vector *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tt__Vector *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Vector, sizeof(tt__Vector), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Vector)
			return (tt__Vector *)a->soap_in(soap, tag, type);
	}
	{	const char *t = soap_attr_value(soap, "x", 0);
		if (t)
		{
			if (!(((tt__Vector*)a)->x = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Vector*)a)->x))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "y", 0);
		if (t)
		{
			if (!(((tt__Vector*)a)->y = (float *)soap_malloc(soap, sizeof(float))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2float(soap, t, ((tt__Vector*)a)->y))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tt__Vector::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Vector);
	if (this->soap_out(soap, tag?tag:"tt:Vector", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Vector::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Vector(soap, this, tag, type);
}

SOAP_FMAC3 tt__Vector * SOAP_FMAC4 soap_get_tt__Vector(struct soap *soap, tt__Vector *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Vector(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Vector * SOAP_FMAC2 soap_instantiate_tt__Vector(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Vector(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Vector, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Vector);
		if (size)
			*size = sizeof(tt__Vector);
		((tt__Vector*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Vector, n);
		if (size)
			*size = n * sizeof(tt__Vector);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Vector*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Vector*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Vector(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Vector %p -> %p\n", q, p));
	*(tt__Vector*)p = *(tt__Vector*)q;
}

void tt__ItemListDescriptionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ItemListDescriptionExtension::__size = 0;
	this->tt__ItemListDescriptionExtension::__any = NULL;
}

void tt__ItemListDescriptionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ItemListDescriptionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ItemListDescriptionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListDescriptionExtension(struct soap *soap, const char *tag, int id, const tt__ItemListDescriptionExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListDescriptionExtension), "tt:ItemListDescriptionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ItemListDescriptionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ItemListDescriptionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ItemListDescriptionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ItemListDescriptionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ItemListDescriptionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ItemListDescriptionExtension * SOAP_FMAC4 soap_in_tt__ItemListDescriptionExtension(struct soap *soap, const char *tag, tt__ItemListDescriptionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ItemListDescriptionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListDescriptionExtension, sizeof(tt__ItemListDescriptionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ItemListDescriptionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ItemListDescriptionExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ItemListDescriptionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ItemListDescriptionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ItemListDescriptionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ItemListDescriptionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ItemListDescriptionExtension::__any, "xsd:byte"))
				{	a->tt__ItemListDescriptionExtension::__size++;
					a->tt__ItemListDescriptionExtension::__any = NULL;
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
		if (a->tt__ItemListDescriptionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ItemListDescriptionExtension::__size)
			a->tt__ItemListDescriptionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ItemListDescriptionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ItemListDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListDescriptionExtension, 0, sizeof(tt__ItemListDescriptionExtension), 0, soap_copy_tt__ItemListDescriptionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ItemListDescriptionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ItemListDescriptionExtension);
	if (this->soap_out(soap, tag?tag:"tt:ItemListDescriptionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ItemListDescriptionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ItemListDescriptionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ItemListDescriptionExtension * SOAP_FMAC4 soap_get_tt__ItemListDescriptionExtension(struct soap *soap, tt__ItemListDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ItemListDescriptionExtension * SOAP_FMAC2 soap_instantiate_tt__ItemListDescriptionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ItemListDescriptionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ItemListDescriptionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ItemListDescriptionExtension);
		if (size)
			*size = sizeof(tt__ItemListDescriptionExtension);
		((tt__ItemListDescriptionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ItemListDescriptionExtension, n);
		if (size)
			*size = n * sizeof(tt__ItemListDescriptionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ItemListDescriptionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ItemListDescriptionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ItemListDescriptionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ItemListDescriptionExtension %p -> %p\n", q, p));
	*(tt__ItemListDescriptionExtension*)p = *(tt__ItemListDescriptionExtension*)q;
}

void tt__ItemListDescription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ItemListDescription::__sizeSimpleItemDescription = 0;
	this->tt__ItemListDescription::SimpleItemDescription = NULL;
	this->tt__ItemListDescription::__sizeElementItemDescription = 0;
	this->tt__ItemListDescription::ElementItemDescription = NULL;
	this->tt__ItemListDescription::Extension = NULL;
	this->tt__ItemListDescription::__anyAttribute = NULL;
}

void tt__ItemListDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ItemListDescription::SimpleItemDescription)
	{	int i;
		for (i = 0; i < this->tt__ItemListDescription::__sizeSimpleItemDescription; i++)
		{
			soap_embedded(soap, this->tt__ItemListDescription::SimpleItemDescription + i, SOAP_TYPE__tt__ItemListDescription_SimpleItemDescription);
			this->tt__ItemListDescription::SimpleItemDescription[i].soap_serialize(soap);
		}
	}
	if (this->tt__ItemListDescription::ElementItemDescription)
	{	int i;
		for (i = 0; i < this->tt__ItemListDescription::__sizeElementItemDescription; i++)
		{
			soap_embedded(soap, this->tt__ItemListDescription::ElementItemDescription + i, SOAP_TYPE__tt__ItemListDescription_ElementItemDescription);
			this->tt__ItemListDescription::ElementItemDescription[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTott__ItemListDescriptionExtension(soap, &this->tt__ItemListDescription::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ItemListDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ItemListDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListDescription(struct soap *soap, const char *tag, int id, const tt__ItemListDescription *a, const char *type)
{
	if (((tt__ItemListDescription*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ItemListDescription*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListDescription), "tt:ItemListDescription"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ItemListDescription::SimpleItemDescription)
	{	int i;
		for (i = 0; i < a->tt__ItemListDescription::__sizeSimpleItemDescription; i++)
			if (a->tt__ItemListDescription::SimpleItemDescription[i].soap_out(soap, "tt:SimpleItemDescription", -1, ""))
				return soap->error;
	}
	if (a->tt__ItemListDescription::ElementItemDescription)
	{	int i;
		for (i = 0; i < a->tt__ItemListDescription::__sizeElementItemDescription; i++)
			if (a->tt__ItemListDescription::ElementItemDescription[i].soap_out(soap, "tt:ElementItemDescription", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ItemListDescriptionExtension(soap, "tt:Extension", -1, &(a->tt__ItemListDescription::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ItemListDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ItemListDescription(soap, tag, this, type);
}

SOAP_FMAC3 tt__ItemListDescription * SOAP_FMAC4 soap_in_tt__ItemListDescription(struct soap *soap, const char *tag, tt__ItemListDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ItemListDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListDescription, sizeof(tt__ItemListDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ItemListDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ItemListDescription *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ItemListDescription*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_SimpleItemDescription1 = NULL;
	struct soap_blist *soap_blist_ElementItemDescription1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SimpleItemDescription", 1, NULL))
			{	if (a->tt__ItemListDescription::SimpleItemDescription == NULL)
				{	if (soap_blist_SimpleItemDescription1 == NULL)
						soap_blist_SimpleItemDescription1 = soap_new_block(soap);
					a->tt__ItemListDescription::SimpleItemDescription = (_tt__ItemListDescription_SimpleItemDescription *)soap_push_block(soap, soap_blist_SimpleItemDescription1, sizeof(_tt__ItemListDescription_SimpleItemDescription));
					if (a->tt__ItemListDescription::SimpleItemDescription == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ItemListDescription::SimpleItemDescription, _tt__ItemListDescription_SimpleItemDescription);
					a->tt__ItemListDescription::SimpleItemDescription->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemListDescription_SimpleItemDescription(soap, "tt:SimpleItemDescription", a->tt__ItemListDescription::SimpleItemDescription, ""))
				{	a->tt__ItemListDescription::__sizeSimpleItemDescription++;
					a->tt__ItemListDescription::SimpleItemDescription = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ElementItemDescription", 1, NULL))
			{	if (a->tt__ItemListDescription::ElementItemDescription == NULL)
				{	if (soap_blist_ElementItemDescription1 == NULL)
						soap_blist_ElementItemDescription1 = soap_new_block(soap);
					a->tt__ItemListDescription::ElementItemDescription = (_tt__ItemListDescription_ElementItemDescription *)soap_push_block(soap, soap_blist_ElementItemDescription1, sizeof(_tt__ItemListDescription_ElementItemDescription));
					if (a->tt__ItemListDescription::ElementItemDescription == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ItemListDescription::ElementItemDescription, _tt__ItemListDescription_ElementItemDescription);
					a->tt__ItemListDescription::ElementItemDescription->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemListDescription_ElementItemDescription(soap, "tt:ElementItemDescription", a->tt__ItemListDescription::ElementItemDescription, ""))
				{	a->tt__ItemListDescription::__sizeElementItemDescription++;
					a->tt__ItemListDescription::ElementItemDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescriptionExtension(soap, "tt:Extension", &(a->tt__ItemListDescription::Extension), "tt:ItemListDescriptionExtension"))
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
		if (a->tt__ItemListDescription::SimpleItemDescription)
			soap_pop_block(soap, soap_blist_SimpleItemDescription1);
		if (a->tt__ItemListDescription::__sizeSimpleItemDescription)
			a->tt__ItemListDescription::SimpleItemDescription = (_tt__ItemListDescription_SimpleItemDescription *)soap_save_block(soap, soap_blist_SimpleItemDescription1, NULL, 1);
		else
		{	a->tt__ItemListDescription::SimpleItemDescription = NULL;
			if (soap_blist_SimpleItemDescription1)
				soap_end_block(soap, soap_blist_SimpleItemDescription1);
		}
		if (a->tt__ItemListDescription::ElementItemDescription)
			soap_pop_block(soap, soap_blist_ElementItemDescription1);
		if (a->tt__ItemListDescription::__sizeElementItemDescription)
			a->tt__ItemListDescription::ElementItemDescription = (_tt__ItemListDescription_ElementItemDescription *)soap_save_block(soap, soap_blist_ElementItemDescription1, NULL, 1);
		else
		{	a->tt__ItemListDescription::ElementItemDescription = NULL;
			if (soap_blist_ElementItemDescription1)
				soap_end_block(soap, soap_blist_ElementItemDescription1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ItemListDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListDescription, 0, sizeof(tt__ItemListDescription), 0, soap_copy_tt__ItemListDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ItemListDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ItemListDescription);
	if (this->soap_out(soap, tag?tag:"tt:ItemListDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ItemListDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ItemListDescription(soap, this, tag, type);
}

SOAP_FMAC3 tt__ItemListDescription * SOAP_FMAC4 soap_get_tt__ItemListDescription(struct soap *soap, tt__ItemListDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ItemListDescription * SOAP_FMAC2 soap_instantiate_tt__ItemListDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ItemListDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ItemListDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ItemListDescription);
		if (size)
			*size = sizeof(tt__ItemListDescription);
		((tt__ItemListDescription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ItemListDescription, n);
		if (size)
			*size = n * sizeof(tt__ItemListDescription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ItemListDescription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ItemListDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ItemListDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ItemListDescription %p -> %p\n", q, p));
	*(tt__ItemListDescription*)p = *(tt__ItemListDescription*)q;
}

void tt__MessageDescriptionExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MessageDescriptionExtension::__size = 0;
	this->tt__MessageDescriptionExtension::__any = NULL;
}

void tt__MessageDescriptionExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MessageDescriptionExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MessageDescriptionExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageDescriptionExtension(struct soap *soap, const char *tag, int id, const tt__MessageDescriptionExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageDescriptionExtension), "tt:MessageDescriptionExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MessageDescriptionExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MessageDescriptionExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MessageDescriptionExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MessageDescriptionExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MessageDescriptionExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MessageDescriptionExtension * SOAP_FMAC4 soap_in_tt__MessageDescriptionExtension(struct soap *soap, const char *tag, tt__MessageDescriptionExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MessageDescriptionExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageDescriptionExtension, sizeof(tt__MessageDescriptionExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MessageDescriptionExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MessageDescriptionExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__MessageDescriptionExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MessageDescriptionExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MessageDescriptionExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MessageDescriptionExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MessageDescriptionExtension::__any, "xsd:byte"))
				{	a->tt__MessageDescriptionExtension::__size++;
					a->tt__MessageDescriptionExtension::__any = NULL;
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
		if (a->tt__MessageDescriptionExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MessageDescriptionExtension::__size)
			a->tt__MessageDescriptionExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MessageDescriptionExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MessageDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageDescriptionExtension, 0, sizeof(tt__MessageDescriptionExtension), 0, soap_copy_tt__MessageDescriptionExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MessageDescriptionExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MessageDescriptionExtension);
	if (this->soap_out(soap, tag?tag:"tt:MessageDescriptionExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MessageDescriptionExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MessageDescriptionExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MessageDescriptionExtension * SOAP_FMAC4 soap_get_tt__MessageDescriptionExtension(struct soap *soap, tt__MessageDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MessageDescriptionExtension * SOAP_FMAC2 soap_instantiate_tt__MessageDescriptionExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MessageDescriptionExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MessageDescriptionExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MessageDescriptionExtension);
		if (size)
			*size = sizeof(tt__MessageDescriptionExtension);
		((tt__MessageDescriptionExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MessageDescriptionExtension, n);
		if (size)
			*size = n * sizeof(tt__MessageDescriptionExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MessageDescriptionExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MessageDescriptionExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MessageDescriptionExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MessageDescriptionExtension %p -> %p\n", q, p));
	*(tt__MessageDescriptionExtension*)p = *(tt__MessageDescriptionExtension*)q;
}

void tt__MessageDescription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MessageDescription::Source = NULL;
	this->tt__MessageDescription::Key = NULL;
	this->tt__MessageDescription::Data = NULL;
	this->tt__MessageDescription::Extension = NULL;
	this->tt__MessageDescription::IsProperty = NULL;
	this->tt__MessageDescription::__anyAttribute = NULL;
}

void tt__MessageDescription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &this->tt__MessageDescription::Source);
	soap_serialize_PointerTott__ItemListDescription(soap, &this->tt__MessageDescription::Key);
	soap_serialize_PointerTott__ItemListDescription(soap, &this->tt__MessageDescription::Data);
	soap_serialize_PointerTott__MessageDescriptionExtension(soap, &this->tt__MessageDescription::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MessageDescription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MessageDescription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageDescription(struct soap *soap, const char *tag, int id, const tt__MessageDescription *a, const char *type)
{
	if (((tt__MessageDescription*)a)->IsProperty)
		soap_set_attr(soap, "IsProperty", soap_bool2s(soap, *((tt__MessageDescription*)a)->IsProperty), 1);
	if (((tt__MessageDescription*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MessageDescription*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageDescription), "tt:MessageDescription"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Source", -1, &(a->tt__MessageDescription::Source), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Key", -1, &(a->tt__MessageDescription::Key), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Data", -1, &(a->tt__MessageDescription::Data), ""))
		return soap->error;
	if (soap_out_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", -1, &(a->tt__MessageDescription::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MessageDescription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MessageDescription(soap, tag, this, type);
}

SOAP_FMAC3 tt__MessageDescription * SOAP_FMAC4 soap_in_tt__MessageDescription(struct soap *soap, const char *tag, tt__MessageDescription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MessageDescription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageDescription, sizeof(tt__MessageDescription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MessageDescription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MessageDescription *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "IsProperty", 0);
		if (t)
		{
			if (!(((tt__MessageDescription*)a)->IsProperty = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tt__MessageDescription*)a)->IsProperty))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MessageDescription*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Source1 = 1;
	size_t soap_flag_Key1 = 1;
	size_t soap_flag_Data1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Source1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Source", &(a->tt__MessageDescription::Source), "tt:ItemListDescription"))
				{	soap_flag_Source1--;
					continue;
				}
			if (soap_flag_Key1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Key", &(a->tt__MessageDescription::Key), "tt:ItemListDescription"))
				{	soap_flag_Key1--;
					continue;
				}
			if (soap_flag_Data1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Data", &(a->tt__MessageDescription::Data), "tt:ItemListDescription"))
				{	soap_flag_Data1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", &(a->tt__MessageDescription::Extension), "tt:MessageDescriptionExtension"))
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
	{	a = (tt__MessageDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageDescription, 0, sizeof(tt__MessageDescription), 0, soap_copy_tt__MessageDescription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MessageDescription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MessageDescription);
	if (this->soap_out(soap, tag?tag:"tt:MessageDescription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MessageDescription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MessageDescription(soap, this, tag, type);
}

SOAP_FMAC3 tt__MessageDescription * SOAP_FMAC4 soap_get_tt__MessageDescription(struct soap *soap, tt__MessageDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MessageDescription * SOAP_FMAC2 soap_instantiate_tt__MessageDescription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MessageDescription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MessageDescription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MessageDescription);
		if (size)
			*size = sizeof(tt__MessageDescription);
		((tt__MessageDescription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MessageDescription, n);
		if (size)
			*size = n * sizeof(tt__MessageDescription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MessageDescription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MessageDescription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MessageDescription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MessageDescription %p -> %p\n", q, p));
	*(tt__MessageDescription*)p = *(tt__MessageDescription*)q;
}

void tt__ItemListExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ItemListExtension::__size = 0;
	this->tt__ItemListExtension::__any = NULL;
}

void tt__ItemListExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ItemListExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ItemListExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemListExtension(struct soap *soap, const char *tag, int id, const tt__ItemListExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemListExtension), "tt:ItemListExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ItemListExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ItemListExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ItemListExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ItemListExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ItemListExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ItemListExtension * SOAP_FMAC4 soap_in_tt__ItemListExtension(struct soap *soap, const char *tag, tt__ItemListExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ItemListExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemListExtension, sizeof(tt__ItemListExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ItemListExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ItemListExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__ItemListExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ItemListExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ItemListExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ItemListExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ItemListExtension::__any, "xsd:byte"))
				{	a->tt__ItemListExtension::__size++;
					a->tt__ItemListExtension::__any = NULL;
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
		if (a->tt__ItemListExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ItemListExtension::__size)
			a->tt__ItemListExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ItemListExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ItemListExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemListExtension, 0, sizeof(tt__ItemListExtension), 0, soap_copy_tt__ItemListExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ItemListExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ItemListExtension);
	if (this->soap_out(soap, tag?tag:"tt:ItemListExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ItemListExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ItemListExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ItemListExtension * SOAP_FMAC4 soap_get_tt__ItemListExtension(struct soap *soap, tt__ItemListExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemListExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ItemListExtension * SOAP_FMAC2 soap_instantiate_tt__ItemListExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ItemListExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ItemListExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ItemListExtension);
		if (size)
			*size = sizeof(tt__ItemListExtension);
		((tt__ItemListExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ItemListExtension, n);
		if (size)
			*size = n * sizeof(tt__ItemListExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ItemListExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ItemListExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ItemListExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ItemListExtension %p -> %p\n", q, p));
	*(tt__ItemListExtension*)p = *(tt__ItemListExtension*)q;
}

void tt__ItemList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ItemList::__sizeSimpleItem = 0;
	this->tt__ItemList::SimpleItem = NULL;
	this->tt__ItemList::__sizeElementItem = 0;
	this->tt__ItemList::ElementItem = NULL;
	this->tt__ItemList::Extension = NULL;
	this->tt__ItemList::__anyAttribute = NULL;
}

void tt__ItemList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__ItemList::SimpleItem)
	{	int i;
		for (i = 0; i < this->tt__ItemList::__sizeSimpleItem; i++)
		{
			soap_embedded(soap, this->tt__ItemList::SimpleItem + i, SOAP_TYPE__tt__ItemList_SimpleItem);
			this->tt__ItemList::SimpleItem[i].soap_serialize(soap);
		}
	}
	if (this->tt__ItemList::ElementItem)
	{	int i;
		for (i = 0; i < this->tt__ItemList::__sizeElementItem; i++)
		{
			soap_embedded(soap, this->tt__ItemList::ElementItem + i, SOAP_TYPE__tt__ItemList_ElementItem);
			this->tt__ItemList::ElementItem[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTott__ItemListExtension(soap, &this->tt__ItemList::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ItemList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ItemList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ItemList(struct soap *soap, const char *tag, int id, const tt__ItemList *a, const char *type)
{
	if (((tt__ItemList*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ItemList*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ItemList), "tt:ItemList"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ItemList::SimpleItem)
	{	int i;
		for (i = 0; i < a->tt__ItemList::__sizeSimpleItem; i++)
			if (a->tt__ItemList::SimpleItem[i].soap_out(soap, "tt:SimpleItem", -1, ""))
				return soap->error;
	}
	if (a->tt__ItemList::ElementItem)
	{	int i;
		for (i = 0; i < a->tt__ItemList::__sizeElementItem; i++)
			if (a->tt__ItemList::ElementItem[i].soap_out(soap, "tt:ElementItem", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ItemListExtension(soap, "tt:Extension", -1, &(a->tt__ItemList::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ItemList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ItemList(soap, tag, this, type);
}

SOAP_FMAC3 tt__ItemList * SOAP_FMAC4 soap_in_tt__ItemList(struct soap *soap, const char *tag, tt__ItemList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ItemList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ItemList, sizeof(tt__ItemList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ItemList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ItemList *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ItemList*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_SimpleItem1 = NULL;
	struct soap_blist *soap_blist_ElementItem1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SimpleItem", 1, NULL))
			{	if (a->tt__ItemList::SimpleItem == NULL)
				{	if (soap_blist_SimpleItem1 == NULL)
						soap_blist_SimpleItem1 = soap_new_block(soap);
					a->tt__ItemList::SimpleItem = (_tt__ItemList_SimpleItem *)soap_push_block(soap, soap_blist_SimpleItem1, sizeof(_tt__ItemList_SimpleItem));
					if (a->tt__ItemList::SimpleItem == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ItemList::SimpleItem, _tt__ItemList_SimpleItem);
					a->tt__ItemList::SimpleItem->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemList_SimpleItem(soap, "tt:SimpleItem", a->tt__ItemList::SimpleItem, ""))
				{	a->tt__ItemList::__sizeSimpleItem++;
					a->tt__ItemList::SimpleItem = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ElementItem", 1, NULL))
			{	if (a->tt__ItemList::ElementItem == NULL)
				{	if (soap_blist_ElementItem1 == NULL)
						soap_blist_ElementItem1 = soap_new_block(soap);
					a->tt__ItemList::ElementItem = (_tt__ItemList_ElementItem *)soap_push_block(soap, soap_blist_ElementItem1, sizeof(_tt__ItemList_ElementItem));
					if (a->tt__ItemList::ElementItem == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->tt__ItemList::ElementItem, _tt__ItemList_ElementItem);
					a->tt__ItemList::ElementItem->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__tt__ItemList_ElementItem(soap, "tt:ElementItem", a->tt__ItemList::ElementItem, ""))
				{	a->tt__ItemList::__sizeElementItem++;
					a->tt__ItemList::ElementItem = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListExtension(soap, "tt:Extension", &(a->tt__ItemList::Extension), "tt:ItemListExtension"))
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
		if (a->tt__ItemList::SimpleItem)
			soap_pop_block(soap, soap_blist_SimpleItem1);
		if (a->tt__ItemList::__sizeSimpleItem)
			a->tt__ItemList::SimpleItem = (_tt__ItemList_SimpleItem *)soap_save_block(soap, soap_blist_SimpleItem1, NULL, 1);
		else
		{	a->tt__ItemList::SimpleItem = NULL;
			if (soap_blist_SimpleItem1)
				soap_end_block(soap, soap_blist_SimpleItem1);
		}
		if (a->tt__ItemList::ElementItem)
			soap_pop_block(soap, soap_blist_ElementItem1);
		if (a->tt__ItemList::__sizeElementItem)
			a->tt__ItemList::ElementItem = (_tt__ItemList_ElementItem *)soap_save_block(soap, soap_blist_ElementItem1, NULL, 1);
		else
		{	a->tt__ItemList::ElementItem = NULL;
			if (soap_blist_ElementItem1)
				soap_end_block(soap, soap_blist_ElementItem1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ItemList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ItemList, 0, sizeof(tt__ItemList), 0, soap_copy_tt__ItemList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ItemList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ItemList);
	if (this->soap_out(soap, tag?tag:"tt:ItemList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ItemList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ItemList(soap, this, tag, type);
}

SOAP_FMAC3 tt__ItemList * SOAP_FMAC4 soap_get_tt__ItemList(struct soap *soap, tt__ItemList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ItemList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ItemList * SOAP_FMAC2 soap_instantiate_tt__ItemList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ItemList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ItemList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ItemList);
		if (size)
			*size = sizeof(tt__ItemList);
		((tt__ItemList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ItemList, n);
		if (size)
			*size = n * sizeof(tt__ItemList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ItemList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ItemList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ItemList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ItemList %p -> %p\n", q, p));
	*(tt__ItemList*)p = *(tt__ItemList*)q;
}

void tt__MessageExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MessageExtension::__size = 0;
	this->tt__MessageExtension::__any = NULL;
}

void tt__MessageExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MessageExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MessageExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MessageExtension(struct soap *soap, const char *tag, int id, const tt__MessageExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MessageExtension), "tt:MessageExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MessageExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MessageExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MessageExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MessageExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MessageExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MessageExtension * SOAP_FMAC4 soap_in_tt__MessageExtension(struct soap *soap, const char *tag, tt__MessageExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MessageExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MessageExtension, sizeof(tt__MessageExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MessageExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MessageExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__MessageExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MessageExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MessageExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MessageExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MessageExtension::__any, "xsd:byte"))
				{	a->tt__MessageExtension::__size++;
					a->tt__MessageExtension::__any = NULL;
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
		if (a->tt__MessageExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MessageExtension::__size)
			a->tt__MessageExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MessageExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MessageExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MessageExtension, 0, sizeof(tt__MessageExtension), 0, soap_copy_tt__MessageExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MessageExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MessageExtension);
	if (this->soap_out(soap, tag?tag:"tt:MessageExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MessageExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MessageExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MessageExtension * SOAP_FMAC4 soap_get_tt__MessageExtension(struct soap *soap, tt__MessageExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MessageExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MessageExtension * SOAP_FMAC2 soap_instantiate_tt__MessageExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MessageExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MessageExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MessageExtension);
		if (size)
			*size = sizeof(tt__MessageExtension);
		((tt__MessageExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MessageExtension, n);
		if (size)
			*size = n * sizeof(tt__MessageExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MessageExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MessageExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MessageExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MessageExtension %p -> %p\n", q, p));
	*(tt__MessageExtension*)p = *(tt__MessageExtension*)q;
}

void tt__FocusOptions20Extension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusOptions20Extension::__size = 0;
	this->tt__FocusOptions20Extension::__any = NULL;
}

void tt__FocusOptions20Extension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusOptions20Extension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusOptions20Extension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions20Extension(struct soap *soap, const char *tag, int id, const tt__FocusOptions20Extension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions20Extension), "tt:FocusOptions20Extension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FocusOptions20Extension::__any)
	{	int i;
		for (i = 0; i < a->tt__FocusOptions20Extension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__FocusOptions20Extension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__FocusOptions20Extension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusOptions20Extension(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusOptions20Extension * SOAP_FMAC4 soap_in_tt__FocusOptions20Extension(struct soap *soap, const char *tag, tt__FocusOptions20Extension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusOptions20Extension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions20Extension, sizeof(tt__FocusOptions20Extension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusOptions20Extension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusOptions20Extension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__FocusOptions20Extension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__FocusOptions20Extension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__FocusOptions20Extension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__FocusOptions20Extension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__FocusOptions20Extension::__any, "xsd:byte"))
				{	a->tt__FocusOptions20Extension::__size++;
					a->tt__FocusOptions20Extension::__any = NULL;
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
		if (a->tt__FocusOptions20Extension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__FocusOptions20Extension::__size)
			a->tt__FocusOptions20Extension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__FocusOptions20Extension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusOptions20Extension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions20Extension, 0, sizeof(tt__FocusOptions20Extension), 0, soap_copy_tt__FocusOptions20Extension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FocusOptions20Extension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions20Extension);
	if (this->soap_out(soap, tag?tag:"tt:FocusOptions20Extension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusOptions20Extension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusOptions20Extension(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusOptions20Extension * SOAP_FMAC4 soap_get_tt__FocusOptions20Extension(struct soap *soap, tt__FocusOptions20Extension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions20Extension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusOptions20Extension * SOAP_FMAC2 soap_instantiate_tt__FocusOptions20Extension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusOptions20Extension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusOptions20Extension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusOptions20Extension);
		if (size)
			*size = sizeof(tt__FocusOptions20Extension);
		((tt__FocusOptions20Extension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusOptions20Extension, n);
		if (size)
			*size = n * sizeof(tt__FocusOptions20Extension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusOptions20Extension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusOptions20Extension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__FocusOptions20Extension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__FocusOptions20Extension %p -> %p\n", q, p));
	*(tt__FocusOptions20Extension*)p = *(tt__FocusOptions20Extension*)q;
}

void tt__FocusOptions20::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__FocusOptions20::__sizeAutoFocusModes = 0;
	this->tt__FocusOptions20::AutoFocusModes = NULL;
	this->tt__FocusOptions20::DefaultSpeed = NULL;
	this->tt__FocusOptions20::NearLimit = NULL;
	this->tt__FocusOptions20::FarLimit = NULL;
	this->tt__FocusOptions20::Extension = NULL;
}

void tt__FocusOptions20::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__FocusOptions20::AutoFocusModes)
	{	int i;
		for (i = 0; i < this->tt__FocusOptions20::__sizeAutoFocusModes; i++)
		{
			soap_embedded(soap, this->tt__FocusOptions20::AutoFocusModes + i, SOAP_TYPE_tt__AutoFocusMode);
		}
	}
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions20::DefaultSpeed);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions20::NearLimit);
	soap_serialize_PointerTott__FloatRange(soap, &this->tt__FocusOptions20::FarLimit);
	soap_serialize_PointerTott__FocusOptions20Extension(soap, &this->tt__FocusOptions20::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__FocusOptions20::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__FocusOptions20(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FocusOptions20(struct soap *soap, const char *tag, int id, const tt__FocusOptions20 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FocusOptions20), "tt:FocusOptions20"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__FocusOptions20::AutoFocusModes)
	{	int i;
		for (i = 0; i < a->tt__FocusOptions20::__sizeAutoFocusModes; i++)
			if (soap_out_tt__AutoFocusMode(soap, "tt:AutoFocusModes", -1, a->tt__FocusOptions20::AutoFocusModes + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__FloatRange(soap, "tt:DefaultSpeed", -1, &(a->tt__FocusOptions20::DefaultSpeed), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:NearLimit", -1, &(a->tt__FocusOptions20::NearLimit), ""))
		return soap->error;
	if (soap_out_PointerTott__FloatRange(soap, "tt:FarLimit", -1, &(a->tt__FocusOptions20::FarLimit), ""))
		return soap->error;
	if (soap_out_PointerTott__FocusOptions20Extension(soap, "tt:Extension", -1, &(a->tt__FocusOptions20::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__FocusOptions20::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__FocusOptions20(soap, tag, this, type);
}

SOAP_FMAC3 tt__FocusOptions20 * SOAP_FMAC4 soap_in_tt__FocusOptions20(struct soap *soap, const char *tag, tt__FocusOptions20 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__FocusOptions20 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FocusOptions20, sizeof(tt__FocusOptions20), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__FocusOptions20)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__FocusOptions20 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_AutoFocusModes1 = NULL;
	size_t soap_flag_DefaultSpeed1 = 1;
	size_t soap_flag_NearLimit1 = 1;
	size_t soap_flag_FarLimit1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AutoFocusModes", 1, NULL))
			{	if (a->tt__FocusOptions20::AutoFocusModes == NULL)
				{	if (soap_blist_AutoFocusModes1 == NULL)
						soap_blist_AutoFocusModes1 = soap_new_block(soap);
					a->tt__FocusOptions20::AutoFocusModes = (enum tt__AutoFocusMode *)soap_push_block(soap, soap_blist_AutoFocusModes1, sizeof(enum tt__AutoFocusMode));
					if (a->tt__FocusOptions20::AutoFocusModes == NULL)
						return NULL;
					soap_default_tt__AutoFocusMode(soap, a->tt__FocusOptions20::AutoFocusModes);
				}
				soap_revert(soap);
				if (soap_in_tt__AutoFocusMode(soap, "tt:AutoFocusModes", a->tt__FocusOptions20::AutoFocusModes, "tt:AutoFocusMode"))
				{	a->tt__FocusOptions20::__sizeAutoFocusModes++;
					a->tt__FocusOptions20::AutoFocusModes = NULL;
					continue;
				}
			}
			if (soap_flag_DefaultSpeed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:DefaultSpeed", &(a->tt__FocusOptions20::DefaultSpeed), "tt:FloatRange"))
				{	soap_flag_DefaultSpeed1--;
					continue;
				}
			if (soap_flag_NearLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:NearLimit", &(a->tt__FocusOptions20::NearLimit), "tt:FloatRange"))
				{	soap_flag_NearLimit1--;
					continue;
				}
			if (soap_flag_FarLimit1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatRange(soap, "tt:FarLimit", &(a->tt__FocusOptions20::FarLimit), "tt:FloatRange"))
				{	soap_flag_FarLimit1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FocusOptions20Extension(soap, "tt:Extension", &(a->tt__FocusOptions20::Extension), "tt:FocusOptions20Extension"))
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
		if (a->tt__FocusOptions20::AutoFocusModes)
			soap_pop_block(soap, soap_blist_AutoFocusModes1);
		if (a->tt__FocusOptions20::__sizeAutoFocusModes)
			a->tt__FocusOptions20::AutoFocusModes = (enum tt__AutoFocusMode *)soap_save_block(soap, soap_blist_AutoFocusModes1, NULL, 1);
		else
		{	a->tt__FocusOptions20::AutoFocusModes = NULL;
			if (soap_blist_AutoFocusModes1)
				soap_end_block(soap, soap_blist_AutoFocusModes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__FocusOptions20 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FocusOptions20, 0, sizeof(tt__FocusOptions20), 0, soap_copy_tt__FocusOptions20);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__FocusOptions20::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__FocusOptions20);
	if (this->soap_out(soap, tag?tag:"tt:FocusOptions20", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__FocusOptions20::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__FocusOptions20(soap, this, tag, type);
}

SOAP_FMAC3 tt__FocusOptions20 * SOAP_FMAC4 soap_get_tt__FocusOptions20(struct soap *soap, tt__FocusOptions20 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FocusOptions20(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__FocusOptions20 * SOAP_FMAC2 soap_instantiate_tt__FocusOptions20(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__FocusOptions20(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__FocusOptions20, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__FocusOptions20);
		if (size)
			*size = sizeof(tt__FocusOptions20);
		((tt__FocusOptions20*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FocusOptions20, n);
		if (size)
			*size = n * sizeof(tt__FocusOptions20);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__FocusOptions20*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__FocusOptions20*)cp->ptr;
}

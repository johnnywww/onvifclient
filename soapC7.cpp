#include "soapH.h"


SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemLogUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemLogUri %p -> %p\n", q, p));
	*(tt__SystemLogUri*)p = *(tt__SystemLogUri*)q;
}

void tt__SystemLogUriList::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SystemLogUriList::__sizeSystemLog = 0;
	this->tt__SystemLogUriList::SystemLog = NULL;
}

void tt__SystemLogUriList::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__SystemLogUriList::SystemLog)
	{	int i;
		for (i = 0; i < this->tt__SystemLogUriList::__sizeSystemLog; i++)
		{
			soap_serialize_PointerTott__SystemLogUri(soap, this->tt__SystemLogUriList::SystemLog + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemLogUriList::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemLogUriList(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLogUriList(struct soap *soap, const char *tag, int id, const tt__SystemLogUriList *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLogUriList), "tt:SystemLogUriList"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SystemLogUriList::SystemLog)
	{	int i;
		for (i = 0; i < a->tt__SystemLogUriList::__sizeSystemLog; i++)
			if (soap_out_PointerTott__SystemLogUri(soap, "tt:SystemLog", -1, a->tt__SystemLogUriList::SystemLog + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SystemLogUriList::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemLogUriList(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemLogUriList * SOAP_FMAC4 soap_in_tt__SystemLogUriList(struct soap *soap, const char *tag, tt__SystemLogUriList *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemLogUriList *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLogUriList, sizeof(tt__SystemLogUriList), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemLogUriList)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemLogUriList *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_SystemLog1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SystemLog", 1, NULL))
			{	if (a->tt__SystemLogUriList::SystemLog == NULL)
				{	if (soap_blist_SystemLog1 == NULL)
						soap_blist_SystemLog1 = soap_new_block(soap);
					a->tt__SystemLogUriList::SystemLog = (tt__SystemLogUri **)soap_push_block(soap, soap_blist_SystemLog1, sizeof(tt__SystemLogUri *));
					if (a->tt__SystemLogUriList::SystemLog == NULL)
						return NULL;
					*a->tt__SystemLogUriList::SystemLog = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__SystemLogUri(soap, "tt:SystemLog", a->tt__SystemLogUriList::SystemLog, "tt:SystemLogUri"))
				{	a->tt__SystemLogUriList::__sizeSystemLog++;
					a->tt__SystemLogUriList::SystemLog = NULL;
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
		if (a->tt__SystemLogUriList::SystemLog)
			soap_pop_block(soap, soap_blist_SystemLog1);
		if (a->tt__SystemLogUriList::__sizeSystemLog)
			a->tt__SystemLogUriList::SystemLog = (tt__SystemLogUri **)soap_save_block(soap, soap_blist_SystemLog1, NULL, 1);
		else
		{	a->tt__SystemLogUriList::SystemLog = NULL;
			if (soap_blist_SystemLog1)
				soap_end_block(soap, soap_blist_SystemLog1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemLogUriList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLogUriList, 0, sizeof(tt__SystemLogUriList), 0, soap_copy_tt__SystemLogUriList);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SystemLogUriList::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemLogUriList);
	if (this->soap_out(soap, tag?tag:"tt:SystemLogUriList", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemLogUriList::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemLogUriList(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemLogUriList * SOAP_FMAC4 soap_get_tt__SystemLogUriList(struct soap *soap, tt__SystemLogUriList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLogUriList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemLogUriList * SOAP_FMAC2 soap_instantiate_tt__SystemLogUriList(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemLogUriList(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemLogUriList, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemLogUriList);
		if (size)
			*size = sizeof(tt__SystemLogUriList);
		((tt__SystemLogUriList*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemLogUriList, n);
		if (size)
			*size = n * sizeof(tt__SystemLogUriList);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemLogUriList*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemLogUriList*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemLogUriList(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemLogUriList %p -> %p\n", q, p));
	*(tt__SystemLogUriList*)p = *(tt__SystemLogUriList*)q;
}

void tt__BackupFile::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__BackupFile::Name);
	this->tt__BackupFile::Data = NULL;
}

void tt__BackupFile::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__BackupFile::Name);
	soap_serialize_PointerTott__AttachmentData(soap, &this->tt__BackupFile::Data);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BackupFile::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BackupFile(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BackupFile(struct soap *soap, const char *tag, int id, const tt__BackupFile *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BackupFile), "tt:BackupFile"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__BackupFile::Name)
	{	if (soap_out_string(soap, "tt:Name", -1, &a->tt__BackupFile::Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->tt__BackupFile::Data)
	{	if (soap_out_PointerTott__AttachmentData(soap, "tt:Data", -1, &a->tt__BackupFile::Data, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Data"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BackupFile::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BackupFile(soap, tag, this, type);
}

SOAP_FMAC3 tt__BackupFile * SOAP_FMAC4 soap_in_tt__BackupFile(struct soap *soap, const char *tag, tt__BackupFile *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BackupFile *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BackupFile, sizeof(tt__BackupFile), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BackupFile)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BackupFile *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Data1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &(a->tt__BackupFile::Name), "xsd:string"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Data1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Data", &(a->tt__BackupFile::Data), "tt:AttachmentData"))
				{	soap_flag_Data1--;
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
	{	a = (tt__BackupFile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BackupFile, 0, sizeof(tt__BackupFile), 0, soap_copy_tt__BackupFile);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name1 > 0 || soap_flag_Data1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BackupFile::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BackupFile);
	if (this->soap_out(soap, tag?tag:"tt:BackupFile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BackupFile::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BackupFile(soap, this, tag, type);
}

SOAP_FMAC3 tt__BackupFile * SOAP_FMAC4 soap_get_tt__BackupFile(struct soap *soap, tt__BackupFile *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BackupFile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BackupFile * SOAP_FMAC2 soap_instantiate_tt__BackupFile(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BackupFile(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BackupFile, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BackupFile);
		if (size)
			*size = sizeof(tt__BackupFile);
		((tt__BackupFile*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BackupFile, n);
		if (size)
			*size = n * sizeof(tt__BackupFile);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BackupFile*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BackupFile*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BackupFile(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BackupFile %p -> %p\n", q, p));
	*(tt__BackupFile*)p = *(tt__BackupFile*)q;
}

void tt__AttachmentData::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default__xop__Include(soap, &this->tt__AttachmentData::xop__Include);
	soap_default_string(soap, &this->tt__AttachmentData::xmime__contentType);
}

void tt__AttachmentData::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__xop__Include(soap, &this->tt__AttachmentData::xop__Include);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AttachmentData::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AttachmentData(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AttachmentData(struct soap *soap, const char *tag, int id, const tt__AttachmentData *a, const char *type)
{
	if (((tt__AttachmentData*)a)->xmime__contentType)
		soap_set_attr(soap, "xmime:contentType", ((tt__AttachmentData*)a)->xmime__contentType, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AttachmentData), "tt:AttachmentData"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out__xop__Include(soap, "xop:Include", -1, &(a->tt__AttachmentData::xop__Include), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AttachmentData::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AttachmentData(soap, tag, this, type);
}

SOAP_FMAC3 tt__AttachmentData * SOAP_FMAC4 soap_in_tt__AttachmentData(struct soap *soap, const char *tag, tt__AttachmentData *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AttachmentData *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AttachmentData, sizeof(tt__AttachmentData), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AttachmentData)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AttachmentData *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "xmime:contentType", 0), &((tt__AttachmentData*)a)->xmime__contentType, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_xop__Include1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_xop__Include1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__xop__Include(soap, "xop:Include", &(a->tt__AttachmentData::xop__Include), ""))
				{	soap_flag_xop__Include1--;
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
	{	a = (tt__AttachmentData *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AttachmentData, 0, sizeof(tt__AttachmentData), 0, soap_copy_tt__AttachmentData);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_xop__Include1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AttachmentData::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AttachmentData);
	if (this->soap_out(soap, tag?tag:"tt:AttachmentData", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AttachmentData::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AttachmentData(soap, this, tag, type);
}

SOAP_FMAC3 tt__AttachmentData * SOAP_FMAC4 soap_get_tt__AttachmentData(struct soap *soap, tt__AttachmentData *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AttachmentData(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AttachmentData * SOAP_FMAC2 soap_instantiate_tt__AttachmentData(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AttachmentData(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AttachmentData, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AttachmentData);
		if (size)
			*size = sizeof(tt__AttachmentData);
		((tt__AttachmentData*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AttachmentData, n);
		if (size)
			*size = n * sizeof(tt__AttachmentData);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AttachmentData*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AttachmentData*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AttachmentData(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AttachmentData %p -> %p\n", q, p));
	*(tt__AttachmentData*)p = *(tt__AttachmentData*)q;
}

void tt__BinaryData::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__BinaryData::Data.xsd__base64Binary::soap_default(soap);
	soap_default_string(soap, &this->tt__BinaryData::xmime__contentType);
}

void tt__BinaryData::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->tt__BinaryData::Data.soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__BinaryData::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__BinaryData(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BinaryData(struct soap *soap, const char *tag, int id, const tt__BinaryData *a, const char *type)
{
	if (((tt__BinaryData*)a)->xmime__contentType)
		soap_set_attr(soap, "xmime:contentType", ((tt__BinaryData*)a)->xmime__contentType, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BinaryData), "tt:BinaryData"))
		return soap->error;
	/* transient soap skipped */
	if ((a->tt__BinaryData::Data).soap_out(soap, "tt:Data", -1, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__BinaryData::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__BinaryData(soap, tag, this, type);
}

SOAP_FMAC3 tt__BinaryData * SOAP_FMAC4 soap_in_tt__BinaryData(struct soap *soap, const char *tag, tt__BinaryData *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__BinaryData *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BinaryData, sizeof(tt__BinaryData), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__BinaryData)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__BinaryData *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "xmime:contentType", 0), &((tt__BinaryData*)a)->xmime__contentType, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Data1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Data1 && soap->error == SOAP_TAG_MISMATCH)
				if ((a->tt__BinaryData::Data).soap_in(soap, "tt:Data", "xsd:base64Binary"))
				{	soap_flag_Data1--;
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
	{	a = (tt__BinaryData *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BinaryData, 0, sizeof(tt__BinaryData), 0, soap_copy_tt__BinaryData);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Data1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__BinaryData::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__BinaryData);
	if (this->soap_out(soap, tag?tag:"tt:BinaryData", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__BinaryData::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__BinaryData(soap, this, tag, type);
}

SOAP_FMAC3 tt__BinaryData * SOAP_FMAC4 soap_get_tt__BinaryData(struct soap *soap, tt__BinaryData *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BinaryData(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__BinaryData * SOAP_FMAC2 soap_instantiate_tt__BinaryData(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__BinaryData(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__BinaryData, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__BinaryData);
		if (size)
			*size = sizeof(tt__BinaryData);
		((tt__BinaryData*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__BinaryData, n);
		if (size)
			*size = n * sizeof(tt__BinaryData);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__BinaryData*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__BinaryData*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__BinaryData(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__BinaryData %p -> %p\n", q, p));
	*(tt__BinaryData*)p = *(tt__BinaryData*)q;
}

void tt__SupportInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SupportInformation::Binary = NULL;
	soap_default_string(soap, &this->tt__SupportInformation::String);
}

void tt__SupportInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AttachmentData(soap, &this->tt__SupportInformation::Binary);
	soap_serialize_string(soap, &this->tt__SupportInformation::String);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SupportInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SupportInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportInformation(struct soap *soap, const char *tag, int id, const tt__SupportInformation *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportInformation), "tt:SupportInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AttachmentData(soap, "tt:Binary", -1, &(a->tt__SupportInformation::Binary), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:String", -1, &(a->tt__SupportInformation::String), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SupportInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SupportInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__SupportInformation * SOAP_FMAC4 soap_in_tt__SupportInformation(struct soap *soap, const char *tag, tt__SupportInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SupportInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportInformation, sizeof(tt__SupportInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SupportInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SupportInformation *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Binary1 = 1;
	size_t soap_flag_String1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Binary1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Binary", &(a->tt__SupportInformation::Binary), "tt:AttachmentData"))
				{	soap_flag_Binary1--;
					continue;
				}
			if (soap_flag_String1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:String", &(a->tt__SupportInformation::String), "xsd:string"))
				{	soap_flag_String1--;
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
	{	a = (tt__SupportInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportInformation, 0, sizeof(tt__SupportInformation), 0, soap_copy_tt__SupportInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SupportInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SupportInformation);
	if (this->soap_out(soap, tag?tag:"tt:SupportInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SupportInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SupportInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__SupportInformation * SOAP_FMAC4 soap_get_tt__SupportInformation(struct soap *soap, tt__SupportInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SupportInformation * SOAP_FMAC2 soap_instantiate_tt__SupportInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SupportInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SupportInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SupportInformation);
		if (size)
			*size = sizeof(tt__SupportInformation);
		((tt__SupportInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SupportInformation, n);
		if (size)
			*size = n * sizeof(tt__SupportInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SupportInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SupportInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SupportInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SupportInformation %p -> %p\n", q, p));
	*(tt__SupportInformation*)p = *(tt__SupportInformation*)q;
}

void tt__SystemLog::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SystemLog::Binary = NULL;
	soap_default_string(soap, &this->tt__SystemLog::String);
}

void tt__SystemLog::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AttachmentData(soap, &this->tt__SystemLog::Binary);
	soap_serialize_string(soap, &this->tt__SystemLog::String);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemLog::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemLog(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemLog(struct soap *soap, const char *tag, int id, const tt__SystemLog *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemLog), "tt:SystemLog"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AttachmentData(soap, "tt:Binary", -1, &(a->tt__SystemLog::Binary), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:String", -1, &(a->tt__SystemLog::String), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SystemLog::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemLog(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemLog * SOAP_FMAC4 soap_in_tt__SystemLog(struct soap *soap, const char *tag, tt__SystemLog *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemLog *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemLog, sizeof(tt__SystemLog), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemLog)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemLog *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Binary1 = 1;
	size_t soap_flag_String1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Binary1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tt:Binary", &(a->tt__SystemLog::Binary), "tt:AttachmentData"))
				{	soap_flag_Binary1--;
					continue;
				}
			if (soap_flag_String1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:String", &(a->tt__SystemLog::String), "xsd:string"))
				{	soap_flag_String1--;
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
	{	a = (tt__SystemLog *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemLog, 0, sizeof(tt__SystemLog), 0, soap_copy_tt__SystemLog);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SystemLog::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemLog);
	if (this->soap_out(soap, tag?tag:"tt:SystemLog", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemLog::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemLog(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemLog * SOAP_FMAC4 soap_get_tt__SystemLog(struct soap *soap, tt__SystemLog *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemLog(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemLog * SOAP_FMAC2 soap_instantiate_tt__SystemLog(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemLog(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemLog, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemLog);
		if (size)
			*size = sizeof(tt__SystemLog);
		((tt__SystemLog*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemLog, n);
		if (size)
			*size = n * sizeof(tt__SystemLog);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemLog*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemLog*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemLog(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemLog %p -> %p\n", q, p));
	*(tt__SystemLog*)p = *(tt__SystemLog*)q;
}

void tt__AnalyticsDeviceExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AnalyticsDeviceExtension::__size = 0;
	this->tt__AnalyticsDeviceExtension::__any = NULL;
}

void tt__AnalyticsDeviceExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsDeviceExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsDeviceExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceExtension(struct soap *soap, const char *tag, int id, const tt__AnalyticsDeviceExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceExtension), "tt:AnalyticsDeviceExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsDeviceExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsDeviceExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsDeviceExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsDeviceExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsDeviceExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceExtension * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceExtension(struct soap *soap, const char *tag, tt__AnalyticsDeviceExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsDeviceExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceExtension, sizeof(tt__AnalyticsDeviceExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsDeviceExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsDeviceExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AnalyticsDeviceExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsDeviceExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsDeviceExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsDeviceExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsDeviceExtension::__any, "xsd:byte"))
				{	a->tt__AnalyticsDeviceExtension::__size++;
					a->tt__AnalyticsDeviceExtension::__any = NULL;
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
		if (a->tt__AnalyticsDeviceExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsDeviceExtension::__size)
			a->tt__AnalyticsDeviceExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsDeviceExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsDeviceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceExtension, 0, sizeof(tt__AnalyticsDeviceExtension), 0, soap_copy_tt__AnalyticsDeviceExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AnalyticsDeviceExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceExtension);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsDeviceExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsDeviceExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsDeviceExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceExtension * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceExtension(struct soap *soap, tt__AnalyticsDeviceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsDeviceExtension * SOAP_FMAC2 soap_instantiate_tt__AnalyticsDeviceExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsDeviceExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsDeviceExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsDeviceExtension);
		if (size)
			*size = sizeof(tt__AnalyticsDeviceExtension);
		((tt__AnalyticsDeviceExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsDeviceExtension, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsDeviceExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsDeviceExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsDeviceExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsDeviceExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsDeviceExtension %p -> %p\n", q, p));
	*(tt__AnalyticsDeviceExtension*)p = *(tt__AnalyticsDeviceExtension*)q;
}

void tt__AnalyticsDeviceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__AnalyticsDeviceCapabilities::XAddr);
	this->tt__AnalyticsDeviceCapabilities::RuleSupport = NULL;
	this->tt__AnalyticsDeviceCapabilities::Extension = NULL;
	this->tt__AnalyticsDeviceCapabilities::__anyAttribute = NULL;
}

void tt__AnalyticsDeviceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__AnalyticsDeviceCapabilities::XAddr);
	soap_serialize_PointerTobool(soap, &this->tt__AnalyticsDeviceCapabilities::RuleSupport);
	soap_serialize_PointerTott__AnalyticsDeviceExtension(soap, &this->tt__AnalyticsDeviceCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsDeviceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsDeviceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, int id, const tt__AnalyticsDeviceCapabilities *a, const char *type)
{
	if (((tt__AnalyticsDeviceCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsDeviceCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities), "tt:AnalyticsDeviceCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsDeviceCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__AnalyticsDeviceCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:RuleSupport", -1, &(a->tt__AnalyticsDeviceCapabilities::RuleSupport), ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", -1, &(a->tt__AnalyticsDeviceCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsDeviceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsDeviceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, tt__AnalyticsDeviceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsDeviceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, sizeof(tt__AnalyticsDeviceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsDeviceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsDeviceCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsDeviceCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_RuleSupport1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__AnalyticsDeviceCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_RuleSupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:RuleSupport", &(a->tt__AnalyticsDeviceCapabilities::RuleSupport), "xsd:boolean"))
				{	soap_flag_RuleSupport1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", &(a->tt__AnalyticsDeviceCapabilities::Extension), "tt:AnalyticsDeviceExtension"))
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
	{	a = (tt__AnalyticsDeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, 0, sizeof(tt__AnalyticsDeviceCapabilities), 0, soap_copy_tt__AnalyticsDeviceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsDeviceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsDeviceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsDeviceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsDeviceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceCapabilities(struct soap *soap, tt__AnalyticsDeviceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsDeviceCapabilities * SOAP_FMAC2 soap_instantiate_tt__AnalyticsDeviceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsDeviceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsDeviceCapabilities);
		if (size)
			*size = sizeof(tt__AnalyticsDeviceCapabilities);
		((tt__AnalyticsDeviceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsDeviceCapabilities, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsDeviceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsDeviceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsDeviceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsDeviceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsDeviceCapabilities %p -> %p\n", q, p));
	*(tt__AnalyticsDeviceCapabilities*)p = *(tt__AnalyticsDeviceCapabilities*)q;
}

void tt__ReceiverCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__ReceiverCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__ReceiverCapabilities::RTP_USCOREMulticast);
	soap_default_bool(soap, &this->tt__ReceiverCapabilities::RTP_USCORETCP);
	soap_default_bool(soap, &this->tt__ReceiverCapabilities::RTP_USCORERTSP_USCORETCP);
	soap_default_int(soap, &this->tt__ReceiverCapabilities::SupportedReceivers);
	soap_default_int(soap, &this->tt__ReceiverCapabilities::MaximumRTSPURILength);
	this->tt__ReceiverCapabilities::__size = 0;
	this->tt__ReceiverCapabilities::__any = NULL;
	this->tt__ReceiverCapabilities::__anyAttribute = NULL;
}

void tt__ReceiverCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__ReceiverCapabilities::XAddr);
	soap_embedded(soap, &this->tt__ReceiverCapabilities::RTP_USCOREMulticast, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__ReceiverCapabilities::RTP_USCORETCP, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__ReceiverCapabilities::RTP_USCORERTSP_USCORETCP, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__ReceiverCapabilities::SupportedReceivers, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__ReceiverCapabilities::MaximumRTSPURILength, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReceiverCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReceiverCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverCapabilities(struct soap *soap, const char *tag, int id, const tt__ReceiverCapabilities *a, const char *type)
{
	if (((tt__ReceiverCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReceiverCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverCapabilities), "tt:ReceiverCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ReceiverCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__ReceiverCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:RTP_Multicast", -1, &(a->tt__ReceiverCapabilities::RTP_USCOREMulticast), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:RTP_TCP", -1, &(a->tt__ReceiverCapabilities::RTP_USCORETCP), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:RTP_RTSP_TCP", -1, &(a->tt__ReceiverCapabilities::RTP_USCORERTSP_USCORETCP), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:SupportedReceivers", -1, &(a->tt__ReceiverCapabilities::SupportedReceivers), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:MaximumRTSPURILength", -1, &(a->tt__ReceiverCapabilities::MaximumRTSPURILength), ""))
		return soap->error;
	if (a->tt__ReceiverCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__ReceiverCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReceiverCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReceiverCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReceiverCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReceiverCapabilities * SOAP_FMAC4 soap_in_tt__ReceiverCapabilities(struct soap *soap, const char *tag, tt__ReceiverCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReceiverCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverCapabilities, sizeof(tt__ReceiverCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReceiverCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReceiverCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReceiverCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_RTP_USCOREMulticast1 = 1;
	size_t soap_flag_RTP_USCORETCP1 = 1;
	size_t soap_flag_RTP_USCORERTSP_USCORETCP1 = 1;
	size_t soap_flag_SupportedReceivers1 = 1;
	size_t soap_flag_MaximumRTSPURILength1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__ReceiverCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_RTP_USCOREMulticast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RTP_Multicast", &(a->tt__ReceiverCapabilities::RTP_USCOREMulticast), "xsd:boolean"))
				{	soap_flag_RTP_USCOREMulticast1--;
					continue;
				}
			if (soap_flag_RTP_USCORETCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RTP_TCP", &(a->tt__ReceiverCapabilities::RTP_USCORETCP), "xsd:boolean"))
				{	soap_flag_RTP_USCORETCP1--;
					continue;
				}
			if (soap_flag_RTP_USCORERTSP_USCORETCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RTP_RTSP_TCP", &(a->tt__ReceiverCapabilities::RTP_USCORERTSP_USCORETCP), "xsd:boolean"))
				{	soap_flag_RTP_USCORERTSP_USCORETCP1--;
					continue;
				}
			if (soap_flag_SupportedReceivers1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:SupportedReceivers", &(a->tt__ReceiverCapabilities::SupportedReceivers), "xsd:int"))
				{	soap_flag_SupportedReceivers1--;
					continue;
				}
			if (soap_flag_MaximumRTSPURILength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumRTSPURILength", &(a->tt__ReceiverCapabilities::MaximumRTSPURILength), "xsd:int"))
				{	soap_flag_MaximumRTSPURILength1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReceiverCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReceiverCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReceiverCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReceiverCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReceiverCapabilities::__any, "xsd:byte"))
				{	a->tt__ReceiverCapabilities::__size++;
					a->tt__ReceiverCapabilities::__any = NULL;
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
		if (a->tt__ReceiverCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReceiverCapabilities::__size)
			a->tt__ReceiverCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReceiverCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReceiverCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverCapabilities, 0, sizeof(tt__ReceiverCapabilities), 0, soap_copy_tt__ReceiverCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_RTP_USCOREMulticast1 > 0 || soap_flag_RTP_USCORETCP1 > 0 || soap_flag_RTP_USCORERTSP_USCORETCP1 > 0 || soap_flag_SupportedReceivers1 > 0 || soap_flag_MaximumRTSPURILength1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ReceiverCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReceiverCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:ReceiverCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReceiverCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReceiverCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReceiverCapabilities * SOAP_FMAC4 soap_get_tt__ReceiverCapabilities(struct soap *soap, tt__ReceiverCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReceiverCapabilities * SOAP_FMAC2 soap_instantiate_tt__ReceiverCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReceiverCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReceiverCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReceiverCapabilities);
		if (size)
			*size = sizeof(tt__ReceiverCapabilities);
		((tt__ReceiverCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReceiverCapabilities, n);
		if (size)
			*size = n * sizeof(tt__ReceiverCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReceiverCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReceiverCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReceiverCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReceiverCapabilities %p -> %p\n", q, p));
	*(tt__ReceiverCapabilities*)p = *(tt__ReceiverCapabilities*)q;
}

void tt__ReplayCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__ReplayCapabilities::XAddr);
	this->tt__ReplayCapabilities::__size = 0;
	this->tt__ReplayCapabilities::__any = NULL;
	this->tt__ReplayCapabilities::__anyAttribute = NULL;
}

void tt__ReplayCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__ReplayCapabilities::XAddr);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ReplayCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ReplayCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReplayCapabilities(struct soap *soap, const char *tag, int id, const tt__ReplayCapabilities *a, const char *type)
{
	if (((tt__ReplayCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ReplayCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReplayCapabilities), "tt:ReplayCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ReplayCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__ReplayCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->tt__ReplayCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__ReplayCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ReplayCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ReplayCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ReplayCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__ReplayCapabilities * SOAP_FMAC4 soap_in_tt__ReplayCapabilities(struct soap *soap, const char *tag, tt__ReplayCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ReplayCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReplayCapabilities, sizeof(tt__ReplayCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ReplayCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ReplayCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ReplayCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__ReplayCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ReplayCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ReplayCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ReplayCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ReplayCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ReplayCapabilities::__any, "xsd:byte"))
				{	a->tt__ReplayCapabilities::__size++;
					a->tt__ReplayCapabilities::__any = NULL;
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
		if (a->tt__ReplayCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ReplayCapabilities::__size)
			a->tt__ReplayCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ReplayCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ReplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReplayCapabilities, 0, sizeof(tt__ReplayCapabilities), 0, soap_copy_tt__ReplayCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ReplayCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ReplayCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:ReplayCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ReplayCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ReplayCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__ReplayCapabilities * SOAP_FMAC4 soap_get_tt__ReplayCapabilities(struct soap *soap, tt__ReplayCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReplayCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ReplayCapabilities * SOAP_FMAC2 soap_instantiate_tt__ReplayCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ReplayCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ReplayCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ReplayCapabilities);
		if (size)
			*size = sizeof(tt__ReplayCapabilities);
		((tt__ReplayCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ReplayCapabilities, n);
		if (size)
			*size = n * sizeof(tt__ReplayCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ReplayCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ReplayCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ReplayCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ReplayCapabilities %p -> %p\n", q, p));
	*(tt__ReplayCapabilities*)p = *(tt__ReplayCapabilities*)q;
}

void tt__SearchCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__SearchCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__SearchCapabilities::MetadataSearch);
	this->tt__SearchCapabilities::__size = 0;
	this->tt__SearchCapabilities::__any = NULL;
	this->tt__SearchCapabilities::__anyAttribute = NULL;
}

void tt__SearchCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__SearchCapabilities::XAddr);
	soap_embedded(soap, &this->tt__SearchCapabilities::MetadataSearch, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SearchCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SearchCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchCapabilities(struct soap *soap, const char *tag, int id, const tt__SearchCapabilities *a, const char *type)
{
	if (((tt__SearchCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SearchCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchCapabilities), "tt:SearchCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SearchCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__SearchCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:MetadataSearch", -1, &(a->tt__SearchCapabilities::MetadataSearch), ""))
		return soap->error;
	if (a->tt__SearchCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__SearchCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SearchCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SearchCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SearchCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__SearchCapabilities * SOAP_FMAC4 soap_in_tt__SearchCapabilities(struct soap *soap, const char *tag, tt__SearchCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SearchCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchCapabilities, sizeof(tt__SearchCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SearchCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SearchCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SearchCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_MetadataSearch1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__SearchCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_MetadataSearch1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:MetadataSearch", &(a->tt__SearchCapabilities::MetadataSearch), "xsd:boolean"))
				{	soap_flag_MetadataSearch1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SearchCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SearchCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SearchCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SearchCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SearchCapabilities::__any, "xsd:byte"))
				{	a->tt__SearchCapabilities::__size++;
					a->tt__SearchCapabilities::__any = NULL;
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
		if (a->tt__SearchCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SearchCapabilities::__size)
			a->tt__SearchCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SearchCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SearchCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchCapabilities, 0, sizeof(tt__SearchCapabilities), 0, soap_copy_tt__SearchCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_MetadataSearch1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SearchCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SearchCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:SearchCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SearchCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SearchCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__SearchCapabilities * SOAP_FMAC4 soap_get_tt__SearchCapabilities(struct soap *soap, tt__SearchCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SearchCapabilities * SOAP_FMAC2 soap_instantiate_tt__SearchCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SearchCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SearchCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SearchCapabilities);
		if (size)
			*size = sizeof(tt__SearchCapabilities);
		((tt__SearchCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SearchCapabilities, n);
		if (size)
			*size = n * sizeof(tt__SearchCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SearchCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SearchCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SearchCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SearchCapabilities %p -> %p\n", q, p));
	*(tt__SearchCapabilities*)p = *(tt__SearchCapabilities*)q;
}

void tt__RecordingCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__RecordingCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__RecordingCapabilities::ReceiverSource);
	soap_default_bool(soap, &this->tt__RecordingCapabilities::MediaProfileSource);
	soap_default_bool(soap, &this->tt__RecordingCapabilities::DynamicRecordings);
	soap_default_bool(soap, &this->tt__RecordingCapabilities::DynamicTracks);
	soap_default_int(soap, &this->tt__RecordingCapabilities::MaxStringLength);
	this->tt__RecordingCapabilities::__size = 0;
	this->tt__RecordingCapabilities::__any = NULL;
	this->tt__RecordingCapabilities::__anyAttribute = NULL;
}

void tt__RecordingCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__RecordingCapabilities::XAddr);
	soap_embedded(soap, &this->tt__RecordingCapabilities::ReceiverSource, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__RecordingCapabilities::MediaProfileSource, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__RecordingCapabilities::DynamicRecordings, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__RecordingCapabilities::DynamicTracks, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__RecordingCapabilities::MaxStringLength, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RecordingCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RecordingCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingCapabilities(struct soap *soap, const char *tag, int id, const tt__RecordingCapabilities *a, const char *type)
{
	if (((tt__RecordingCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RecordingCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingCapabilities), "tt:RecordingCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RecordingCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__RecordingCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:ReceiverSource", -1, &(a->tt__RecordingCapabilities::ReceiverSource), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:MediaProfileSource", -1, &(a->tt__RecordingCapabilities::MediaProfileSource), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:DynamicRecordings", -1, &(a->tt__RecordingCapabilities::DynamicRecordings), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:DynamicTracks", -1, &(a->tt__RecordingCapabilities::DynamicTracks), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:MaxStringLength", -1, &(a->tt__RecordingCapabilities::MaxStringLength), ""))
		return soap->error;
	if (a->tt__RecordingCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__RecordingCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RecordingCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RecordingCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RecordingCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__RecordingCapabilities * SOAP_FMAC4 soap_in_tt__RecordingCapabilities(struct soap *soap, const char *tag, tt__RecordingCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RecordingCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingCapabilities, sizeof(tt__RecordingCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RecordingCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RecordingCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RecordingCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_ReceiverSource1 = 1;
	size_t soap_flag_MediaProfileSource1 = 1;
	size_t soap_flag_DynamicRecordings1 = 1;
	size_t soap_flag_DynamicTracks1 = 1;
	size_t soap_flag_MaxStringLength1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__RecordingCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_ReceiverSource1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:ReceiverSource", &(a->tt__RecordingCapabilities::ReceiverSource), "xsd:boolean"))
				{	soap_flag_ReceiverSource1--;
					continue;
				}
			if (soap_flag_MediaProfileSource1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:MediaProfileSource", &(a->tt__RecordingCapabilities::MediaProfileSource), "xsd:boolean"))
				{	soap_flag_MediaProfileSource1--;
					continue;
				}
			if (soap_flag_DynamicRecordings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DynamicRecordings", &(a->tt__RecordingCapabilities::DynamicRecordings), "xsd:boolean"))
				{	soap_flag_DynamicRecordings1--;
					continue;
				}
			if (soap_flag_DynamicTracks1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DynamicTracks", &(a->tt__RecordingCapabilities::DynamicTracks), "xsd:boolean"))
				{	soap_flag_DynamicTracks1--;
					continue;
				}
			if (soap_flag_MaxStringLength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaxStringLength", &(a->tt__RecordingCapabilities::MaxStringLength), "xsd:int"))
				{	soap_flag_MaxStringLength1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__RecordingCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RecordingCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RecordingCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RecordingCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RecordingCapabilities::__any, "xsd:byte"))
				{	a->tt__RecordingCapabilities::__size++;
					a->tt__RecordingCapabilities::__any = NULL;
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
		if (a->tt__RecordingCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RecordingCapabilities::__size)
			a->tt__RecordingCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RecordingCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RecordingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingCapabilities, 0, sizeof(tt__RecordingCapabilities), 0, soap_copy_tt__RecordingCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_ReceiverSource1 > 0 || soap_flag_MediaProfileSource1 > 0 || soap_flag_DynamicRecordings1 > 0 || soap_flag_DynamicTracks1 > 0 || soap_flag_MaxStringLength1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__RecordingCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RecordingCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:RecordingCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RecordingCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RecordingCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__RecordingCapabilities * SOAP_FMAC4 soap_get_tt__RecordingCapabilities(struct soap *soap, tt__RecordingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RecordingCapabilities * SOAP_FMAC2 soap_instantiate_tt__RecordingCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RecordingCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RecordingCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RecordingCapabilities);
		if (size)
			*size = sizeof(tt__RecordingCapabilities);
		((tt__RecordingCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RecordingCapabilities, n);
		if (size)
			*size = n * sizeof(tt__RecordingCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RecordingCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RecordingCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RecordingCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RecordingCapabilities %p -> %p\n", q, p));
	*(tt__RecordingCapabilities*)p = *(tt__RecordingCapabilities*)q;
}

void tt__DisplayCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__DisplayCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__DisplayCapabilities::FixedLayout);
	this->tt__DisplayCapabilities::__size = 0;
	this->tt__DisplayCapabilities::__any = NULL;
	this->tt__DisplayCapabilities::__anyAttribute = NULL;
}

void tt__DisplayCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__DisplayCapabilities::XAddr);
	soap_embedded(soap, &this->tt__DisplayCapabilities::FixedLayout, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DisplayCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DisplayCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DisplayCapabilities(struct soap *soap, const char *tag, int id, const tt__DisplayCapabilities *a, const char *type)
{
	if (((tt__DisplayCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DisplayCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DisplayCapabilities), "tt:DisplayCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DisplayCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__DisplayCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:FixedLayout", -1, &(a->tt__DisplayCapabilities::FixedLayout), ""))
		return soap->error;
	if (a->tt__DisplayCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__DisplayCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DisplayCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DisplayCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DisplayCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__DisplayCapabilities * SOAP_FMAC4 soap_in_tt__DisplayCapabilities(struct soap *soap, const char *tag, tt__DisplayCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DisplayCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DisplayCapabilities, sizeof(tt__DisplayCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DisplayCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DisplayCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DisplayCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_FixedLayout1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__DisplayCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_FixedLayout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:FixedLayout", &(a->tt__DisplayCapabilities::FixedLayout), "xsd:boolean"))
				{	soap_flag_FixedLayout1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__DisplayCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DisplayCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DisplayCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DisplayCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DisplayCapabilities::__any, "xsd:byte"))
				{	a->tt__DisplayCapabilities::__size++;
					a->tt__DisplayCapabilities::__any = NULL;
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
		if (a->tt__DisplayCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DisplayCapabilities::__size)
			a->tt__DisplayCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DisplayCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DisplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DisplayCapabilities, 0, sizeof(tt__DisplayCapabilities), 0, soap_copy_tt__DisplayCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_FixedLayout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DisplayCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DisplayCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:DisplayCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DisplayCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DisplayCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__DisplayCapabilities * SOAP_FMAC4 soap_get_tt__DisplayCapabilities(struct soap *soap, tt__DisplayCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DisplayCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DisplayCapabilities * SOAP_FMAC2 soap_instantiate_tt__DisplayCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DisplayCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DisplayCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DisplayCapabilities);
		if (size)
			*size = sizeof(tt__DisplayCapabilities);
		((tt__DisplayCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DisplayCapabilities, n);
		if (size)
			*size = n * sizeof(tt__DisplayCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DisplayCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DisplayCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DisplayCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DisplayCapabilities %p -> %p\n", q, p));
	*(tt__DisplayCapabilities*)p = *(tt__DisplayCapabilities*)q;
}

void tt__DeviceIOCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__DeviceIOCapabilities::XAddr);
	soap_default_int(soap, &this->tt__DeviceIOCapabilities::VideoSources);
	soap_default_int(soap, &this->tt__DeviceIOCapabilities::VideoOutputs);
	soap_default_int(soap, &this->tt__DeviceIOCapabilities::AudioSources);
	soap_default_int(soap, &this->tt__DeviceIOCapabilities::AudioOutputs);
	soap_default_int(soap, &this->tt__DeviceIOCapabilities::RelayOutputs);
	this->tt__DeviceIOCapabilities::__size = 0;
	this->tt__DeviceIOCapabilities::__any = NULL;
	this->tt__DeviceIOCapabilities::__anyAttribute = NULL;
}

void tt__DeviceIOCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__DeviceIOCapabilities::XAddr);
	soap_embedded(soap, &this->tt__DeviceIOCapabilities::VideoSources, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__DeviceIOCapabilities::VideoOutputs, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__DeviceIOCapabilities::AudioSources, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__DeviceIOCapabilities::AudioOutputs, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__DeviceIOCapabilities::RelayOutputs, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DeviceIOCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DeviceIOCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, int id, const tt__DeviceIOCapabilities *a, const char *type)
{
	if (((tt__DeviceIOCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DeviceIOCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceIOCapabilities), "tt:DeviceIOCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DeviceIOCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__DeviceIOCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_int(soap, "tt:VideoSources", -1, &(a->tt__DeviceIOCapabilities::VideoSources), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:VideoOutputs", -1, &(a->tt__DeviceIOCapabilities::VideoOutputs), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:AudioSources", -1, &(a->tt__DeviceIOCapabilities::AudioSources), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:AudioOutputs", -1, &(a->tt__DeviceIOCapabilities::AudioOutputs), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:RelayOutputs", -1, &(a->tt__DeviceIOCapabilities::RelayOutputs), ""))
		return soap->error;
	if (a->tt__DeviceIOCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__DeviceIOCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DeviceIOCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DeviceIOCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DeviceIOCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__DeviceIOCapabilities * SOAP_FMAC4 soap_in_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, tt__DeviceIOCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DeviceIOCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceIOCapabilities, sizeof(tt__DeviceIOCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DeviceIOCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DeviceIOCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DeviceIOCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_VideoSources1 = 1;
	size_t soap_flag_VideoOutputs1 = 1;
	size_t soap_flag_AudioSources1 = 1;
	size_t soap_flag_AudioOutputs1 = 1;
	size_t soap_flag_RelayOutputs1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__DeviceIOCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_VideoSources1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:VideoSources", &(a->tt__DeviceIOCapabilities::VideoSources), "xsd:int"))
				{	soap_flag_VideoSources1--;
					continue;
				}
			if (soap_flag_VideoOutputs1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:VideoOutputs", &(a->tt__DeviceIOCapabilities::VideoOutputs), "xsd:int"))
				{	soap_flag_VideoOutputs1--;
					continue;
				}
			if (soap_flag_AudioSources1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:AudioSources", &(a->tt__DeviceIOCapabilities::AudioSources), "xsd:int"))
				{	soap_flag_AudioSources1--;
					continue;
				}
			if (soap_flag_AudioOutputs1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:AudioOutputs", &(a->tt__DeviceIOCapabilities::AudioOutputs), "xsd:int"))
				{	soap_flag_AudioOutputs1--;
					continue;
				}
			if (soap_flag_RelayOutputs1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:RelayOutputs", &(a->tt__DeviceIOCapabilities::RelayOutputs), "xsd:int"))
				{	soap_flag_RelayOutputs1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__DeviceIOCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DeviceIOCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DeviceIOCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DeviceIOCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DeviceIOCapabilities::__any, "xsd:byte"))
				{	a->tt__DeviceIOCapabilities::__size++;
					a->tt__DeviceIOCapabilities::__any = NULL;
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
		if (a->tt__DeviceIOCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DeviceIOCapabilities::__size)
			a->tt__DeviceIOCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DeviceIOCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DeviceIOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceIOCapabilities, 0, sizeof(tt__DeviceIOCapabilities), 0, soap_copy_tt__DeviceIOCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_VideoSources1 > 0 || soap_flag_VideoOutputs1 > 0 || soap_flag_AudioSources1 > 0 || soap_flag_AudioOutputs1 > 0 || soap_flag_RelayOutputs1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DeviceIOCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DeviceIOCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:DeviceIOCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DeviceIOCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DeviceIOCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__DeviceIOCapabilities * SOAP_FMAC4 soap_get_tt__DeviceIOCapabilities(struct soap *soap, tt__DeviceIOCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceIOCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DeviceIOCapabilities * SOAP_FMAC2 soap_instantiate_tt__DeviceIOCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DeviceIOCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DeviceIOCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DeviceIOCapabilities);
		if (size)
			*size = sizeof(tt__DeviceIOCapabilities);
		((tt__DeviceIOCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DeviceIOCapabilities, n);
		if (size)
			*size = n * sizeof(tt__DeviceIOCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DeviceIOCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DeviceIOCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DeviceIOCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DeviceIOCapabilities %p -> %p\n", q, p));
	*(tt__DeviceIOCapabilities*)p = *(tt__DeviceIOCapabilities*)q;
}

void tt__PTZCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__PTZCapabilities::XAddr);
	this->tt__PTZCapabilities::__size = 0;
	this->tt__PTZCapabilities::__any = NULL;
	this->tt__PTZCapabilities::__anyAttribute = NULL;
}

void tt__PTZCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__PTZCapabilities::XAddr);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZCapabilities(struct soap *soap, const char *tag, int id, const tt__PTZCapabilities *a, const char *type)
{
	if (((tt__PTZCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZCapabilities), "tt:PTZCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__PTZCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->tt__PTZCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZCapabilities * SOAP_FMAC4 soap_in_tt__PTZCapabilities(struct soap *soap, const char *tag, tt__PTZCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZCapabilities, sizeof(tt__PTZCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__PTZCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZCapabilities::__any, "xsd:byte"))
				{	a->tt__PTZCapabilities::__size++;
					a->tt__PTZCapabilities::__any = NULL;
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
		if (a->tt__PTZCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZCapabilities::__size)
			a->tt__PTZCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZCapabilities, 0, sizeof(tt__PTZCapabilities), 0, soap_copy_tt__PTZCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:PTZCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZCapabilities * SOAP_FMAC4 soap_get_tt__PTZCapabilities(struct soap *soap, tt__PTZCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZCapabilities * SOAP_FMAC2 soap_instantiate_tt__PTZCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZCapabilities);
		if (size)
			*size = sizeof(tt__PTZCapabilities);
		((tt__PTZCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZCapabilities, n);
		if (size)
			*size = n * sizeof(tt__PTZCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZCapabilities %p -> %p\n", q, p));
	*(tt__PTZCapabilities*)p = *(tt__PTZCapabilities*)q;
}

void tt__ImagingCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__ImagingCapabilities::XAddr);
	this->tt__ImagingCapabilities::__anyAttribute = NULL;
}

void tt__ImagingCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__ImagingCapabilities::XAddr);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ImagingCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ImagingCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingCapabilities(struct soap *soap, const char *tag, int id, const tt__ImagingCapabilities *a, const char *type)
{
	if (((tt__ImagingCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ImagingCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingCapabilities), "tt:ImagingCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ImagingCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__ImagingCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ImagingCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ImagingCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__ImagingCapabilities * SOAP_FMAC4 soap_in_tt__ImagingCapabilities(struct soap *soap, const char *tag, tt__ImagingCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ImagingCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingCapabilities, sizeof(tt__ImagingCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ImagingCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ImagingCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ImagingCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__ImagingCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
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
	{	a = (tt__ImagingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingCapabilities, 0, sizeof(tt__ImagingCapabilities), 0, soap_copy_tt__ImagingCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ImagingCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ImagingCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:ImagingCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ImagingCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ImagingCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__ImagingCapabilities * SOAP_FMAC4 soap_get_tt__ImagingCapabilities(struct soap *soap, tt__ImagingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ImagingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ImagingCapabilities * SOAP_FMAC2 soap_instantiate_tt__ImagingCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ImagingCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ImagingCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ImagingCapabilities);
		if (size)
			*size = sizeof(tt__ImagingCapabilities);
		((tt__ImagingCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ImagingCapabilities, n);
		if (size)
			*size = n * sizeof(tt__ImagingCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ImagingCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ImagingCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ImagingCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ImagingCapabilities %p -> %p\n", q, p));
	*(tt__ImagingCapabilities*)p = *(tt__ImagingCapabilities*)q;
}

void tt__OnvifVersion::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->tt__OnvifVersion::Major);
	soap_default_int(soap, &this->tt__OnvifVersion::Minor);
}

void tt__OnvifVersion::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__OnvifVersion::Major, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__OnvifVersion::Minor, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__OnvifVersion::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__OnvifVersion(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__OnvifVersion(struct soap *soap, const char *tag, int id, const tt__OnvifVersion *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__OnvifVersion), "tt:OnvifVersion"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_int(soap, "tt:Major", -1, &(a->tt__OnvifVersion::Major), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Minor", -1, &(a->tt__OnvifVersion::Minor), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__OnvifVersion::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__OnvifVersion(soap, tag, this, type);
}

SOAP_FMAC3 tt__OnvifVersion * SOAP_FMAC4 soap_in_tt__OnvifVersion(struct soap *soap, const char *tag, tt__OnvifVersion *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__OnvifVersion *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__OnvifVersion, sizeof(tt__OnvifVersion), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__OnvifVersion)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__OnvifVersion *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Major1 = 1;
	size_t soap_flag_Minor1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Major1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Major", &(a->tt__OnvifVersion::Major), "xsd:int"))
				{	soap_flag_Major1--;
					continue;
				}
			if (soap_flag_Minor1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Minor", &(a->tt__OnvifVersion::Minor), "xsd:int"))
				{	soap_flag_Minor1--;
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
	{	a = (tt__OnvifVersion *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__OnvifVersion, 0, sizeof(tt__OnvifVersion), 0, soap_copy_tt__OnvifVersion);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Major1 > 0 || soap_flag_Minor1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__OnvifVersion::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__OnvifVersion);
	if (this->soap_out(soap, tag?tag:"tt:OnvifVersion", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__OnvifVersion::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__OnvifVersion(soap, this, tag, type);
}

SOAP_FMAC3 tt__OnvifVersion * SOAP_FMAC4 soap_get_tt__OnvifVersion(struct soap *soap, tt__OnvifVersion *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__OnvifVersion(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__OnvifVersion * SOAP_FMAC2 soap_instantiate_tt__OnvifVersion(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__OnvifVersion(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__OnvifVersion, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__OnvifVersion);
		if (size)
			*size = sizeof(tt__OnvifVersion);
		((tt__OnvifVersion*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__OnvifVersion, n);
		if (size)
			*size = n * sizeof(tt__OnvifVersion);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__OnvifVersion*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__OnvifVersion*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__OnvifVersion(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__OnvifVersion %p -> %p\n", q, p));
	*(tt__OnvifVersion*)p = *(tt__OnvifVersion*)q;
}

void tt__SystemCapabilitiesExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SystemCapabilitiesExtension2::__size = 0;
	this->tt__SystemCapabilitiesExtension2::__any = NULL;
}

void tt__SystemCapabilitiesExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemCapabilitiesExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemCapabilitiesExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const tt__SystemCapabilitiesExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2), "tt:SystemCapabilitiesExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SystemCapabilitiesExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__SystemCapabilitiesExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SystemCapabilitiesExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SystemCapabilitiesExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemCapabilitiesExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, tt__SystemCapabilitiesExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemCapabilitiesExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2, sizeof(tt__SystemCapabilitiesExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemCapabilitiesExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemCapabilitiesExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__SystemCapabilitiesExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SystemCapabilitiesExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SystemCapabilitiesExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SystemCapabilitiesExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SystemCapabilitiesExtension2::__any, "xsd:byte"))
				{	a->tt__SystemCapabilitiesExtension2::__size++;
					a->tt__SystemCapabilitiesExtension2::__any = NULL;
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
		if (a->tt__SystemCapabilitiesExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SystemCapabilitiesExtension2::__size)
			a->tt__SystemCapabilitiesExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SystemCapabilitiesExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension2, 0, sizeof(tt__SystemCapabilitiesExtension2), 0, soap_copy_tt__SystemCapabilitiesExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SystemCapabilitiesExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension2);
	if (this->soap_out(soap, tag?tag:"tt:SystemCapabilitiesExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemCapabilitiesExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemCapabilitiesExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension2(struct soap *soap, tt__SystemCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemCapabilitiesExtension2 * SOAP_FMAC2 soap_instantiate_tt__SystemCapabilitiesExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemCapabilitiesExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemCapabilitiesExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemCapabilitiesExtension2);
		if (size)
			*size = sizeof(tt__SystemCapabilitiesExtension2);
		((tt__SystemCapabilitiesExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemCapabilitiesExtension2, n);
		if (size)
			*size = n * sizeof(tt__SystemCapabilitiesExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemCapabilitiesExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemCapabilitiesExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemCapabilitiesExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemCapabilitiesExtension2 %p -> %p\n", q, p));
	*(tt__SystemCapabilitiesExtension2*)p = *(tt__SystemCapabilitiesExtension2*)q;
}

void tt__SystemCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__SystemCapabilitiesExtension::__size = 0;
	this->tt__SystemCapabilitiesExtension::__any = NULL;
	this->tt__SystemCapabilitiesExtension::HttpFirmwareUpgrade = NULL;
	this->tt__SystemCapabilitiesExtension::HttpSystemBackup = NULL;
	this->tt__SystemCapabilitiesExtension::HttpSystemLogging = NULL;
	this->tt__SystemCapabilitiesExtension::HttpSupportInformation = NULL;
	this->tt__SystemCapabilitiesExtension::Extension = NULL;
}

void tt__SystemCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__SystemCapabilitiesExtension::HttpFirmwareUpgrade);
	soap_serialize_PointerTobool(soap, &this->tt__SystemCapabilitiesExtension::HttpSystemBackup);
	soap_serialize_PointerTobool(soap, &this->tt__SystemCapabilitiesExtension::HttpSystemLogging);
	soap_serialize_PointerTobool(soap, &this->tt__SystemCapabilitiesExtension::HttpSupportInformation);
	soap_serialize_PointerTott__SystemCapabilitiesExtension2(soap, &this->tt__SystemCapabilitiesExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__SystemCapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension), "tt:SystemCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__SystemCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__SystemCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SystemCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:HttpFirmwareUpgrade", -1, &(a->tt__SystemCapabilitiesExtension::HttpFirmwareUpgrade), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:HttpSystemBackup", -1, &(a->tt__SystemCapabilitiesExtension::HttpSystemBackup), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:HttpSystemLogging", -1, &(a->tt__SystemCapabilitiesExtension::HttpSystemLogging), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:HttpSupportInformation", -1, &(a->tt__SystemCapabilitiesExtension::HttpSupportInformation), ""))
		return soap->error;
	if (soap_out_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", -1, &(a->tt__SystemCapabilitiesExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SystemCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, tt__SystemCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension, sizeof(tt__SystemCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemCapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_HttpFirmwareUpgrade1 = 1;
	size_t soap_flag_HttpSystemBackup1 = 1;
	size_t soap_flag_HttpSystemLogging1 = 1;
	size_t soap_flag_HttpSupportInformation1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_HttpFirmwareUpgrade1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:HttpFirmwareUpgrade", &(a->tt__SystemCapabilitiesExtension::HttpFirmwareUpgrade), "xsd:boolean"))
				{	soap_flag_HttpFirmwareUpgrade1--;
					continue;
				}
			if (soap_flag_HttpSystemBackup1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:HttpSystemBackup", &(a->tt__SystemCapabilitiesExtension::HttpSystemBackup), "xsd:boolean"))
				{	soap_flag_HttpSystemBackup1--;
					continue;
				}
			if (soap_flag_HttpSystemLogging1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:HttpSystemLogging", &(a->tt__SystemCapabilitiesExtension::HttpSystemLogging), "xsd:boolean"))
				{	soap_flag_HttpSystemLogging1--;
					continue;
				}
			if (soap_flag_HttpSupportInformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:HttpSupportInformation", &(a->tt__SystemCapabilitiesExtension::HttpSupportInformation), "xsd:boolean"))
				{	soap_flag_HttpSupportInformation1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", &(a->tt__SystemCapabilitiesExtension::Extension), "tt:SystemCapabilitiesExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SystemCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SystemCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SystemCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SystemCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SystemCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__SystemCapabilitiesExtension::__size++;
					a->tt__SystemCapabilitiesExtension::__any = NULL;
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
		if (a->tt__SystemCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SystemCapabilitiesExtension::__size)
			a->tt__SystemCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SystemCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension, 0, sizeof(tt__SystemCapabilitiesExtension), 0, soap_copy_tt__SystemCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__SystemCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:SystemCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension(struct soap *soap, tt__SystemCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__SystemCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__SystemCapabilitiesExtension);
		((tt__SystemCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__SystemCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__SystemCapabilitiesExtension*)p = *(tt__SystemCapabilitiesExtension*)q;
}

void tt__SystemCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__SystemCapabilities::DiscoveryResolve);
	soap_default_bool(soap, &this->tt__SystemCapabilities::DiscoveryBye);
	soap_default_bool(soap, &this->tt__SystemCapabilities::RemoteDiscovery);
	soap_default_bool(soap, &this->tt__SystemCapabilities::SystemBackup);
	soap_default_bool(soap, &this->tt__SystemCapabilities::SystemLogging);
	soap_default_bool(soap, &this->tt__SystemCapabilities::FirmwareUpgrade);
	this->tt__SystemCapabilities::__sizeSupportedVersions = 0;
	this->tt__SystemCapabilities::SupportedVersions = NULL;
	this->tt__SystemCapabilities::Extension = NULL;
	this->tt__SystemCapabilities::__anyAttribute = NULL;
}

void tt__SystemCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__SystemCapabilities::DiscoveryResolve, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SystemCapabilities::DiscoveryBye, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SystemCapabilities::RemoteDiscovery, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SystemCapabilities::SystemBackup, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SystemCapabilities::SystemLogging, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SystemCapabilities::FirmwareUpgrade, SOAP_TYPE_bool);
	if (this->tt__SystemCapabilities::SupportedVersions)
	{	int i;
		for (i = 0; i < this->tt__SystemCapabilities::__sizeSupportedVersions; i++)
		{
			soap_serialize_PointerTott__OnvifVersion(soap, this->tt__SystemCapabilities::SupportedVersions + i);
		}
	}
	soap_serialize_PointerTott__SystemCapabilitiesExtension(soap, &this->tt__SystemCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SystemCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SystemCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilities(struct soap *soap, const char *tag, int id, const tt__SystemCapabilities *a, const char *type)
{
	if (((tt__SystemCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SystemCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilities), "tt:SystemCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:DiscoveryResolve", -1, &(a->tt__SystemCapabilities::DiscoveryResolve), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:DiscoveryBye", -1, &(a->tt__SystemCapabilities::DiscoveryBye), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:RemoteDiscovery", -1, &(a->tt__SystemCapabilities::RemoteDiscovery), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:SystemBackup", -1, &(a->tt__SystemCapabilities::SystemBackup), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:SystemLogging", -1, &(a->tt__SystemCapabilities::SystemLogging), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:FirmwareUpgrade", -1, &(a->tt__SystemCapabilities::FirmwareUpgrade), ""))
		return soap->error;
	if (a->tt__SystemCapabilities::SupportedVersions)
	{	int i;
		for (i = 0; i < a->tt__SystemCapabilities::__sizeSupportedVersions; i++)
			if (soap_out_PointerTott__OnvifVersion(soap, "tt:SupportedVersions", -1, a->tt__SystemCapabilities::SupportedVersions + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__SystemCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SystemCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SystemCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__SystemCapabilities * SOAP_FMAC4 soap_in_tt__SystemCapabilities(struct soap *soap, const char *tag, tt__SystemCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SystemCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilities, sizeof(tt__SystemCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SystemCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SystemCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SystemCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_DiscoveryResolve1 = 1;
	size_t soap_flag_DiscoveryBye1 = 1;
	size_t soap_flag_RemoteDiscovery1 = 1;
	size_t soap_flag_SystemBackup1 = 1;
	size_t soap_flag_SystemLogging1 = 1;
	size_t soap_flag_FirmwareUpgrade1 = 1;
	struct soap_blist *soap_blist_SupportedVersions1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_DiscoveryResolve1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DiscoveryResolve", &(a->tt__SystemCapabilities::DiscoveryResolve), "xsd:boolean"))
				{	soap_flag_DiscoveryResolve1--;
					continue;
				}
			if (soap_flag_DiscoveryBye1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DiscoveryBye", &(a->tt__SystemCapabilities::DiscoveryBye), "xsd:boolean"))
				{	soap_flag_DiscoveryBye1--;
					continue;
				}
			if (soap_flag_RemoteDiscovery1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RemoteDiscovery", &(a->tt__SystemCapabilities::RemoteDiscovery), "xsd:boolean"))
				{	soap_flag_RemoteDiscovery1--;
					continue;
				}
			if (soap_flag_SystemBackup1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:SystemBackup", &(a->tt__SystemCapabilities::SystemBackup), "xsd:boolean"))
				{	soap_flag_SystemBackup1--;
					continue;
				}
			if (soap_flag_SystemLogging1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:SystemLogging", &(a->tt__SystemCapabilities::SystemLogging), "xsd:boolean"))
				{	soap_flag_SystemLogging1--;
					continue;
				}
			if (soap_flag_FirmwareUpgrade1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:FirmwareUpgrade", &(a->tt__SystemCapabilities::FirmwareUpgrade), "xsd:boolean"))
				{	soap_flag_FirmwareUpgrade1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedVersions", 1, NULL))
			{	if (a->tt__SystemCapabilities::SupportedVersions == NULL)
				{	if (soap_blist_SupportedVersions1 == NULL)
						soap_blist_SupportedVersions1 = soap_new_block(soap);
					a->tt__SystemCapabilities::SupportedVersions = (tt__OnvifVersion **)soap_push_block(soap, soap_blist_SupportedVersions1, sizeof(tt__OnvifVersion *));
					if (a->tt__SystemCapabilities::SupportedVersions == NULL)
						return NULL;
					*a->tt__SystemCapabilities::SupportedVersions = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__OnvifVersion(soap, "tt:SupportedVersions", a->tt__SystemCapabilities::SupportedVersions, "tt:OnvifVersion"))
				{	a->tt__SystemCapabilities::__sizeSupportedVersions++;
					a->tt__SystemCapabilities::SupportedVersions = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", &(a->tt__SystemCapabilities::Extension), "tt:SystemCapabilitiesExtension"))
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
		if (a->tt__SystemCapabilities::SupportedVersions)
			soap_pop_block(soap, soap_blist_SupportedVersions1);
		if (a->tt__SystemCapabilities::__sizeSupportedVersions)
			a->tt__SystemCapabilities::SupportedVersions = (tt__OnvifVersion **)soap_save_block(soap, soap_blist_SupportedVersions1, NULL, 1);
		else
		{	a->tt__SystemCapabilities::SupportedVersions = NULL;
			if (soap_blist_SupportedVersions1)
				soap_end_block(soap, soap_blist_SupportedVersions1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SystemCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilities, 0, sizeof(tt__SystemCapabilities), 0, soap_copy_tt__SystemCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DiscoveryResolve1 > 0 || soap_flag_DiscoveryBye1 > 0 || soap_flag_RemoteDiscovery1 > 0 || soap_flag_SystemBackup1 > 0 || soap_flag_SystemLogging1 > 0 || soap_flag_FirmwareUpgrade1 > 0 || a->tt__SystemCapabilities::__sizeSupportedVersions < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SystemCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:SystemCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SystemCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SystemCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__SystemCapabilities * SOAP_FMAC4 soap_get_tt__SystemCapabilities(struct soap *soap, tt__SystemCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SystemCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SystemCapabilities * SOAP_FMAC2 soap_instantiate_tt__SystemCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SystemCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SystemCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SystemCapabilities);
		if (size)
			*size = sizeof(tt__SystemCapabilities);
		((tt__SystemCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SystemCapabilities, n);
		if (size)
			*size = n * sizeof(tt__SystemCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SystemCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SystemCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SystemCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SystemCapabilities %p -> %p\n", q, p));
	*(tt__SystemCapabilities*)p = *(tt__SystemCapabilities*)q;
}

void tt__SecurityCapabilitiesExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__SecurityCapabilitiesExtension2::Dot1X);
	this->tt__SecurityCapabilitiesExtension2::__sizeSupportedEAPMethod = 0;
	this->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod = NULL;
	soap_default_bool(soap, &this->tt__SecurityCapabilitiesExtension2::RemoteUserHandling);
	this->tt__SecurityCapabilitiesExtension2::__size = 0;
	this->tt__SecurityCapabilitiesExtension2::__any = NULL;
}

void tt__SecurityCapabilitiesExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__SecurityCapabilitiesExtension2::Dot1X, SOAP_TYPE_bool);
	if (this->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod)
	{	int i;
		for (i = 0; i < this->tt__SecurityCapabilitiesExtension2::__sizeSupportedEAPMethod; i++)
		{
			soap_embedded(soap, this->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod + i, SOAP_TYPE_int);
		}
	}
	soap_embedded(soap, &this->tt__SecurityCapabilitiesExtension2::RemoteUserHandling, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SecurityCapabilitiesExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SecurityCapabilitiesExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2), "tt:SecurityCapabilitiesExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:Dot1X", -1, &(a->tt__SecurityCapabilitiesExtension2::Dot1X), ""))
		return soap->error;
	if (a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod)
	{	int i;
		for (i = 0; i < a->tt__SecurityCapabilitiesExtension2::__sizeSupportedEAPMethod; i++)
			if (soap_out_int(soap, "tt:SupportedEAPMethod", -1, a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod + i, ""))
				return soap->error;
	}
	if (soap_out_bool(soap, "tt:RemoteUserHandling", -1, &(a->tt__SecurityCapabilitiesExtension2::RemoteUserHandling), ""))
		return soap->error;
	if (a->tt__SecurityCapabilitiesExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__SecurityCapabilitiesExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SecurityCapabilitiesExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__SecurityCapabilitiesExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SecurityCapabilitiesExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SecurityCapabilitiesExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, sizeof(tt__SecurityCapabilitiesExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SecurityCapabilitiesExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SecurityCapabilitiesExtension2 *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Dot1X1 = 1;
	struct soap_blist *soap_blist_SupportedEAPMethod1 = NULL;
	size_t soap_flag_RemoteUserHandling1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Dot1X1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Dot1X", &(a->tt__SecurityCapabilitiesExtension2::Dot1X), "xsd:boolean"))
				{	soap_flag_Dot1X1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedEAPMethod", 1, NULL))
			{	if (a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod == NULL)
				{	if (soap_blist_SupportedEAPMethod1 == NULL)
						soap_blist_SupportedEAPMethod1 = soap_new_block(soap);
					a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod = (int *)soap_push_block(soap, soap_blist_SupportedEAPMethod1, sizeof(int));
					if (a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod == NULL)
						return NULL;
					soap_default_int(soap, a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod);
				}
				soap_revert(soap);
				if (soap_in_int(soap, "tt:SupportedEAPMethod", a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod, "xsd:int"))
				{	a->tt__SecurityCapabilitiesExtension2::__sizeSupportedEAPMethod++;
					a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod = NULL;
					continue;
				}
			}
			if (soap_flag_RemoteUserHandling1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RemoteUserHandling", &(a->tt__SecurityCapabilitiesExtension2::RemoteUserHandling), "xsd:boolean"))
				{	soap_flag_RemoteUserHandling1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SecurityCapabilitiesExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SecurityCapabilitiesExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SecurityCapabilitiesExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SecurityCapabilitiesExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SecurityCapabilitiesExtension2::__any, "xsd:byte"))
				{	a->tt__SecurityCapabilitiesExtension2::__size++;
					a->tt__SecurityCapabilitiesExtension2::__any = NULL;
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
		if (a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod)
			soap_pop_block(soap, soap_blist_SupportedEAPMethod1);
		if (a->tt__SecurityCapabilitiesExtension2::__sizeSupportedEAPMethod)
			a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod = (int *)soap_save_block(soap, soap_blist_SupportedEAPMethod1, NULL, 1);
		else
		{	a->tt__SecurityCapabilitiesExtension2::SupportedEAPMethod = NULL;
			if (soap_blist_SupportedEAPMethod1)
				soap_end_block(soap, soap_blist_SupportedEAPMethod1);
		}
		if (a->tt__SecurityCapabilitiesExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SecurityCapabilitiesExtension2::__size)
			a->tt__SecurityCapabilitiesExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SecurityCapabilitiesExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SecurityCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, 0, sizeof(tt__SecurityCapabilitiesExtension2), 0, soap_copy_tt__SecurityCapabilitiesExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Dot1X1 > 0 || soap_flag_RemoteUserHandling1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SecurityCapabilitiesExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension2);
	if (this->soap_out(soap, tag?tag:"tt:SecurityCapabilitiesExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SecurityCapabilitiesExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SecurityCapabilitiesExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension2(struct soap *soap, tt__SecurityCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SecurityCapabilitiesExtension2 * SOAP_FMAC2 soap_instantiate_tt__SecurityCapabilitiesExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SecurityCapabilitiesExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SecurityCapabilitiesExtension2);
		if (size)
			*size = sizeof(tt__SecurityCapabilitiesExtension2);
		((tt__SecurityCapabilitiesExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SecurityCapabilitiesExtension2, n);
		if (size)
			*size = n * sizeof(tt__SecurityCapabilitiesExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SecurityCapabilitiesExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SecurityCapabilitiesExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SecurityCapabilitiesExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SecurityCapabilitiesExtension2 %p -> %p\n", q, p));
	*(tt__SecurityCapabilitiesExtension2*)p = *(tt__SecurityCapabilitiesExtension2*)q;
}

void tt__SecurityCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__SecurityCapabilitiesExtension::TLS1_x002e0);
	this->tt__SecurityCapabilitiesExtension::Extension = NULL;
}

void tt__SecurityCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__SecurityCapabilitiesExtension::TLS1_x002e0, SOAP_TYPE_bool);
	soap_serialize_PointerTott__SecurityCapabilitiesExtension2(soap, &this->tt__SecurityCapabilitiesExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SecurityCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SecurityCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__SecurityCapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension), "tt:SecurityCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:TLS1.0", -1, &(a->tt__SecurityCapabilitiesExtension::TLS1_x002e0), ""))
		return soap->error;
	if (soap_out_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", -1, &(a->tt__SecurityCapabilitiesExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SecurityCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SecurityCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, tt__SecurityCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SecurityCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension, sizeof(tt__SecurityCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SecurityCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SecurityCapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TLS1_x002e01 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TLS1_x002e01 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:TLS1.0", &(a->tt__SecurityCapabilitiesExtension::TLS1_x002e0), "xsd:boolean"))
				{	soap_flag_TLS1_x002e01--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", &(a->tt__SecurityCapabilitiesExtension::Extension), "tt:SecurityCapabilitiesExtension2"))
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
	{	a = (tt__SecurityCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension, 0, sizeof(tt__SecurityCapabilitiesExtension), 0, soap_copy_tt__SecurityCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e01 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SecurityCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:SecurityCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SecurityCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SecurityCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension(struct soap *soap, tt__SecurityCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SecurityCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__SecurityCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SecurityCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SecurityCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SecurityCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__SecurityCapabilitiesExtension);
		((tt__SecurityCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SecurityCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__SecurityCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SecurityCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SecurityCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SecurityCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SecurityCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__SecurityCapabilitiesExtension*)p = *(tt__SecurityCapabilitiesExtension*)q;
}

void tt__SecurityCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::TLS1_x002e1);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::TLS1_x002e2);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::OnboardKeyGeneration);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::AccessPolicyConfig);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::X_x002e509Token);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::SAMLToken);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::KerberosToken);
	soap_default_bool(soap, &this->tt__SecurityCapabilities::RELToken);
	this->tt__SecurityCapabilities::__size = 0;
	this->tt__SecurityCapabilities::__any = NULL;
	this->tt__SecurityCapabilities::Extension = NULL;
	this->tt__SecurityCapabilities::__anyAttribute = NULL;
}

void tt__SecurityCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__SecurityCapabilities::TLS1_x002e1, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::TLS1_x002e2, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::OnboardKeyGeneration, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::AccessPolicyConfig, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::X_x002e509Token, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::SAMLToken, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::KerberosToken, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__SecurityCapabilities::RELToken, SOAP_TYPE_bool);
	soap_serialize_PointerTott__SecurityCapabilitiesExtension(soap, &this->tt__SecurityCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__SecurityCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__SecurityCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilities(struct soap *soap, const char *tag, int id, const tt__SecurityCapabilities *a, const char *type)
{
	if (((tt__SecurityCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__SecurityCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilities), "tt:SecurityCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:TLS1.1", -1, &(a->tt__SecurityCapabilities::TLS1_x002e1), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:TLS1.2", -1, &(a->tt__SecurityCapabilities::TLS1_x002e2), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:OnboardKeyGeneration", -1, &(a->tt__SecurityCapabilities::OnboardKeyGeneration), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:AccessPolicyConfig", -1, &(a->tt__SecurityCapabilities::AccessPolicyConfig), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:X.509Token", -1, &(a->tt__SecurityCapabilities::X_x002e509Token), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:SAMLToken", -1, &(a->tt__SecurityCapabilities::SAMLToken), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:KerberosToken", -1, &(a->tt__SecurityCapabilities::KerberosToken), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:RELToken", -1, &(a->tt__SecurityCapabilities::RELToken), ""))
		return soap->error;
	if (a->tt__SecurityCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__SecurityCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__SecurityCapabilities::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__SecurityCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__SecurityCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__SecurityCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__SecurityCapabilities * SOAP_FMAC4 soap_in_tt__SecurityCapabilities(struct soap *soap, const char *tag, tt__SecurityCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__SecurityCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilities, sizeof(tt__SecurityCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__SecurityCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__SecurityCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__SecurityCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TLS1_x002e11 = 1;
	size_t soap_flag_TLS1_x002e21 = 1;
	size_t soap_flag_OnboardKeyGeneration1 = 1;
	size_t soap_flag_AccessPolicyConfig1 = 1;
	size_t soap_flag_X_x002e509Token1 = 1;
	size_t soap_flag_SAMLToken1 = 1;
	size_t soap_flag_KerberosToken1 = 1;
	size_t soap_flag_RELToken1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TLS1_x002e11 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:TLS1.1", &(a->tt__SecurityCapabilities::TLS1_x002e1), "xsd:boolean"))
				{	soap_flag_TLS1_x002e11--;
					continue;
				}
			if (soap_flag_TLS1_x002e21 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:TLS1.2", &(a->tt__SecurityCapabilities::TLS1_x002e2), "xsd:boolean"))
				{	soap_flag_TLS1_x002e21--;
					continue;
				}
			if (soap_flag_OnboardKeyGeneration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:OnboardKeyGeneration", &(a->tt__SecurityCapabilities::OnboardKeyGeneration), "xsd:boolean"))
				{	soap_flag_OnboardKeyGeneration1--;
					continue;
				}
			if (soap_flag_AccessPolicyConfig1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AccessPolicyConfig", &(a->tt__SecurityCapabilities::AccessPolicyConfig), "xsd:boolean"))
				{	soap_flag_AccessPolicyConfig1--;
					continue;
				}
			if (soap_flag_X_x002e509Token1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:X.509Token", &(a->tt__SecurityCapabilities::X_x002e509Token), "xsd:boolean"))
				{	soap_flag_X_x002e509Token1--;
					continue;
				}
			if (soap_flag_SAMLToken1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:SAMLToken", &(a->tt__SecurityCapabilities::SAMLToken), "xsd:boolean"))
				{	soap_flag_SAMLToken1--;
					continue;
				}
			if (soap_flag_KerberosToken1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:KerberosToken", &(a->tt__SecurityCapabilities::KerberosToken), "xsd:boolean"))
				{	soap_flag_KerberosToken1--;
					continue;
				}
			if (soap_flag_RELToken1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RELToken", &(a->tt__SecurityCapabilities::RELToken), "xsd:boolean"))
				{	soap_flag_RELToken1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", &(a->tt__SecurityCapabilities::Extension), "tt:SecurityCapabilitiesExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__SecurityCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__SecurityCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__SecurityCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__SecurityCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__SecurityCapabilities::__any, "xsd:byte"))
				{	a->tt__SecurityCapabilities::__size++;
					a->tt__SecurityCapabilities::__any = NULL;
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
		if (a->tt__SecurityCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__SecurityCapabilities::__size)
			a->tt__SecurityCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__SecurityCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__SecurityCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilities, 0, sizeof(tt__SecurityCapabilities), 0, soap_copy_tt__SecurityCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e11 > 0 || soap_flag_TLS1_x002e21 > 0 || soap_flag_OnboardKeyGeneration1 > 0 || soap_flag_AccessPolicyConfig1 > 0 || soap_flag_X_x002e509Token1 > 0 || soap_flag_SAMLToken1 > 0 || soap_flag_KerberosToken1 > 0 || soap_flag_RELToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__SecurityCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:SecurityCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__SecurityCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__SecurityCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__SecurityCapabilities * SOAP_FMAC4 soap_get_tt__SecurityCapabilities(struct soap *soap, tt__SecurityCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SecurityCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__SecurityCapabilities * SOAP_FMAC2 soap_instantiate_tt__SecurityCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__SecurityCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__SecurityCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__SecurityCapabilities);
		if (size)
			*size = sizeof(tt__SecurityCapabilities);
		((tt__SecurityCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__SecurityCapabilities, n);
		if (size)
			*size = n * sizeof(tt__SecurityCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__SecurityCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__SecurityCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__SecurityCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__SecurityCapabilities %p -> %p\n", q, p));
	*(tt__SecurityCapabilities*)p = *(tt__SecurityCapabilities*)q;
}

void tt__NetworkCapabilitiesExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkCapabilitiesExtension2::__size = 0;
	this->tt__NetworkCapabilitiesExtension2::__any = NULL;
}

void tt__NetworkCapabilitiesExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkCapabilitiesExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkCapabilitiesExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2), "tt:NetworkCapabilitiesExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkCapabilitiesExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkCapabilitiesExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkCapabilitiesExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkCapabilitiesExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkCapabilitiesExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkCapabilitiesExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, sizeof(tt__NetworkCapabilitiesExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkCapabilitiesExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkCapabilitiesExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkCapabilitiesExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkCapabilitiesExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkCapabilitiesExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkCapabilitiesExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkCapabilitiesExtension2::__any, "xsd:byte"))
				{	a->tt__NetworkCapabilitiesExtension2::__size++;
					a->tt__NetworkCapabilitiesExtension2::__any = NULL;
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
		if (a->tt__NetworkCapabilitiesExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkCapabilitiesExtension2::__size)
			a->tt__NetworkCapabilitiesExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkCapabilitiesExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, 0, sizeof(tt__NetworkCapabilitiesExtension2), 0, soap_copy_tt__NetworkCapabilitiesExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkCapabilitiesExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension2);
	if (this->soap_out(soap, tag?tag:"tt:NetworkCapabilitiesExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkCapabilitiesExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkCapabilitiesExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension2(struct soap *soap, tt__NetworkCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkCapabilitiesExtension2 * SOAP_FMAC2 soap_instantiate_tt__NetworkCapabilitiesExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkCapabilitiesExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkCapabilitiesExtension2);
		if (size)
			*size = sizeof(tt__NetworkCapabilitiesExtension2);
		((tt__NetworkCapabilitiesExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkCapabilitiesExtension2, n);
		if (size)
			*size = n * sizeof(tt__NetworkCapabilitiesExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkCapabilitiesExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkCapabilitiesExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkCapabilitiesExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkCapabilitiesExtension2 %p -> %p\n", q, p));
	*(tt__NetworkCapabilitiesExtension2*)p = *(tt__NetworkCapabilitiesExtension2*)q;
}

void tt__NetworkCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkCapabilitiesExtension::__size = 0;
	this->tt__NetworkCapabilitiesExtension::__any = NULL;
	this->tt__NetworkCapabilitiesExtension::Dot11Configuration = NULL;
	this->tt__NetworkCapabilitiesExtension::Extension = NULL;
}

void tt__NetworkCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__NetworkCapabilitiesExtension::Dot11Configuration);
	soap_serialize_PointerTott__NetworkCapabilitiesExtension2(soap, &this->tt__NetworkCapabilitiesExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__NetworkCapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension), "tt:NetworkCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:Dot11Configuration", -1, &(a->tt__NetworkCapabilitiesExtension::Dot11Configuration), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", -1, &(a->tt__NetworkCapabilitiesExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, tt__NetworkCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension, sizeof(tt__NetworkCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkCapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_Dot11Configuration1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Dot11Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Dot11Configuration", &(a->tt__NetworkCapabilitiesExtension::Dot11Configuration), "xsd:boolean"))
				{	soap_flag_Dot11Configuration1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", &(a->tt__NetworkCapabilitiesExtension::Extension), "tt:NetworkCapabilitiesExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__NetworkCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__NetworkCapabilitiesExtension::__size++;
					a->tt__NetworkCapabilitiesExtension::__any = NULL;
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
		if (a->tt__NetworkCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkCapabilitiesExtension::__size)
			a->tt__NetworkCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension, 0, sizeof(tt__NetworkCapabilitiesExtension), 0, soap_copy_tt__NetworkCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension(struct soap *soap, tt__NetworkCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__NetworkCapabilitiesExtension);
		((tt__NetworkCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__NetworkCapabilitiesExtension*)p = *(tt__NetworkCapabilitiesExtension*)q;
}

void tt__NetworkCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkCapabilities::IPFilter = NULL;
	this->tt__NetworkCapabilities::ZeroConfiguration = NULL;
	this->tt__NetworkCapabilities::IPVersion6 = NULL;
	this->tt__NetworkCapabilities::DynDNS = NULL;
	this->tt__NetworkCapabilities::Extension = NULL;
	this->tt__NetworkCapabilities::__anyAttribute = NULL;
}

void tt__NetworkCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__NetworkCapabilities::IPFilter);
	soap_serialize_PointerTobool(soap, &this->tt__NetworkCapabilities::ZeroConfiguration);
	soap_serialize_PointerTobool(soap, &this->tt__NetworkCapabilities::IPVersion6);
	soap_serialize_PointerTobool(soap, &this->tt__NetworkCapabilities::DynDNS);
	soap_serialize_PointerTott__NetworkCapabilitiesExtension(soap, &this->tt__NetworkCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilities(struct soap *soap, const char *tag, int id, const tt__NetworkCapabilities *a, const char *type)
{
	if (((tt__NetworkCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilities), "tt:NetworkCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:IPFilter", -1, &(a->tt__NetworkCapabilities::IPFilter), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:ZeroConfiguration", -1, &(a->tt__NetworkCapabilities::ZeroConfiguration), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:IPVersion6", -1, &(a->tt__NetworkCapabilities::IPVersion6), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:DynDNS", -1, &(a->tt__NetworkCapabilities::DynDNS), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__NetworkCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkCapabilities * SOAP_FMAC4 soap_in_tt__NetworkCapabilities(struct soap *soap, const char *tag, tt__NetworkCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilities, sizeof(tt__NetworkCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_IPFilter1 = 1;
	size_t soap_flag_ZeroConfiguration1 = 1;
	size_t soap_flag_IPVersion61 = 1;
	size_t soap_flag_DynDNS1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_IPFilter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:IPFilter", &(a->tt__NetworkCapabilities::IPFilter), "xsd:boolean"))
				{	soap_flag_IPFilter1--;
					continue;
				}
			if (soap_flag_ZeroConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:ZeroConfiguration", &(a->tt__NetworkCapabilities::ZeroConfiguration), "xsd:boolean"))
				{	soap_flag_ZeroConfiguration1--;
					continue;
				}
			if (soap_flag_IPVersion61 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:IPVersion6", &(a->tt__NetworkCapabilities::IPVersion6), "xsd:boolean"))
				{	soap_flag_IPVersion61--;
					continue;
				}
			if (soap_flag_DynDNS1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:DynDNS", &(a->tt__NetworkCapabilities::DynDNS), "xsd:boolean"))
				{	soap_flag_DynDNS1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", &(a->tt__NetworkCapabilities::Extension), "tt:NetworkCapabilitiesExtension"))
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
	{	a = (tt__NetworkCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilities, 0, sizeof(tt__NetworkCapabilities), 0, soap_copy_tt__NetworkCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:NetworkCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkCapabilities * SOAP_FMAC4 soap_get_tt__NetworkCapabilities(struct soap *soap, tt__NetworkCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkCapabilities * SOAP_FMAC2 soap_instantiate_tt__NetworkCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkCapabilities);
		if (size)
			*size = sizeof(tt__NetworkCapabilities);
		((tt__NetworkCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkCapabilities, n);
		if (size)
			*size = n * sizeof(tt__NetworkCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkCapabilities %p -> %p\n", q, p));
	*(tt__NetworkCapabilities*)p = *(tt__NetworkCapabilities*)q;
}

void tt__ProfileCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->tt__ProfileCapabilities::MaximumNumberOfProfiles);
	this->tt__ProfileCapabilities::__size = 0;
	this->tt__ProfileCapabilities::__any = NULL;
	this->tt__ProfileCapabilities::__anyAttribute = NULL;
}

void tt__ProfileCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__ProfileCapabilities::MaximumNumberOfProfiles, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ProfileCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ProfileCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ProfileCapabilities(struct soap *soap, const char *tag, int id, const tt__ProfileCapabilities *a, const char *type)
{
	if (((tt__ProfileCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ProfileCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ProfileCapabilities), "tt:ProfileCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_int(soap, "tt:MaximumNumberOfProfiles", -1, &(a->tt__ProfileCapabilities::MaximumNumberOfProfiles), ""))
		return soap->error;
	if (a->tt__ProfileCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__ProfileCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ProfileCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ProfileCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ProfileCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__ProfileCapabilities * SOAP_FMAC4 soap_in_tt__ProfileCapabilities(struct soap *soap, const char *tag, tt__ProfileCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ProfileCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ProfileCapabilities, sizeof(tt__ProfileCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ProfileCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ProfileCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ProfileCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_MaximumNumberOfProfiles1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_MaximumNumberOfProfiles1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:MaximumNumberOfProfiles", &(a->tt__ProfileCapabilities::MaximumNumberOfProfiles), "xsd:int"))
				{	soap_flag_MaximumNumberOfProfiles1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ProfileCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ProfileCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ProfileCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ProfileCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ProfileCapabilities::__any, "xsd:byte"))
				{	a->tt__ProfileCapabilities::__size++;
					a->tt__ProfileCapabilities::__any = NULL;
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
		if (a->tt__ProfileCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ProfileCapabilities::__size)
			a->tt__ProfileCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ProfileCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ProfileCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ProfileCapabilities, 0, sizeof(tt__ProfileCapabilities), 0, soap_copy_tt__ProfileCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MaximumNumberOfProfiles1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__ProfileCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ProfileCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:ProfileCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ProfileCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ProfileCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__ProfileCapabilities * SOAP_FMAC4 soap_get_tt__ProfileCapabilities(struct soap *soap, tt__ProfileCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ProfileCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ProfileCapabilities * SOAP_FMAC2 soap_instantiate_tt__ProfileCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ProfileCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ProfileCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__ProfileCapabilities);
		if (size)
			*size = sizeof(tt__ProfileCapabilities);
		((tt__ProfileCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ProfileCapabilities, n);
		if (size)
			*size = n * sizeof(tt__ProfileCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__ProfileCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__ProfileCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ProfileCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ProfileCapabilities %p -> %p\n", q, p));
	*(tt__ProfileCapabilities*)p = *(tt__ProfileCapabilities*)q;
}

void tt__RealTimeStreamingCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RealTimeStreamingCapabilitiesExtension::__size = 0;
	this->tt__RealTimeStreamingCapabilitiesExtension::__any = NULL;
}

void tt__RealTimeStreamingCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RealTimeStreamingCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension), "tt:RealTimeStreamingCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__RealTimeStreamingCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__RealTimeStreamingCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__RealTimeStreamingCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__RealTimeStreamingCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RealTimeStreamingCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, sizeof(tt__RealTimeStreamingCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RealTimeStreamingCapabilitiesExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__RealTimeStreamingCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__RealTimeStreamingCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__RealTimeStreamingCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__RealTimeStreamingCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__RealTimeStreamingCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__RealTimeStreamingCapabilitiesExtension::__size++;
					a->tt__RealTimeStreamingCapabilitiesExtension::__any = NULL;
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
		if (a->tt__RealTimeStreamingCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__RealTimeStreamingCapabilitiesExtension::__size)
			a->tt__RealTimeStreamingCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__RealTimeStreamingCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__RealTimeStreamingCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, 0, sizeof(tt__RealTimeStreamingCapabilitiesExtension), 0, soap_copy_tt__RealTimeStreamingCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RealTimeStreamingCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:RealTimeStreamingCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RealTimeStreamingCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RealTimeStreamingCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, tt__RealTimeStreamingCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RealTimeStreamingCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RealTimeStreamingCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__RealTimeStreamingCapabilitiesExtension);
		((tt__RealTimeStreamingCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RealTimeStreamingCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__RealTimeStreamingCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RealTimeStreamingCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RealTimeStreamingCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RealTimeStreamingCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__RealTimeStreamingCapabilitiesExtension*)p = *(tt__RealTimeStreamingCapabilitiesExtension*)q;
}

void tt__RealTimeStreamingCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__RealTimeStreamingCapabilities::RTPMulticast = NULL;
	this->tt__RealTimeStreamingCapabilities::RTP_USCORETCP = NULL;
	this->tt__RealTimeStreamingCapabilities::RTP_USCORERTSP_USCORETCP = NULL;
	this->tt__RealTimeStreamingCapabilities::Extension = NULL;
	this->tt__RealTimeStreamingCapabilities::__anyAttribute = NULL;
}

void tt__RealTimeStreamingCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__RealTimeStreamingCapabilities::RTPMulticast);
	soap_serialize_PointerTobool(soap, &this->tt__RealTimeStreamingCapabilities::RTP_USCORETCP);
	soap_serialize_PointerTobool(soap, &this->tt__RealTimeStreamingCapabilities::RTP_USCORERTSP_USCORETCP);
	soap_serialize_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, &this->tt__RealTimeStreamingCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__RealTimeStreamingCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__RealTimeStreamingCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, int id, const tt__RealTimeStreamingCapabilities *a, const char *type)
{
	if (((tt__RealTimeStreamingCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__RealTimeStreamingCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities), "tt:RealTimeStreamingCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:RTPMulticast", -1, &(a->tt__RealTimeStreamingCapabilities::RTPMulticast), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:RTP_TCP", -1, &(a->tt__RealTimeStreamingCapabilities::RTP_USCORETCP), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:RTP_RTSP_TCP", -1, &(a->tt__RealTimeStreamingCapabilities::RTP_USCORERTSP_USCORETCP), ""))
		return soap->error;
	if (soap_out_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__RealTimeStreamingCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__RealTimeStreamingCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__RealTimeStreamingCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, tt__RealTimeStreamingCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__RealTimeStreamingCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities, sizeof(tt__RealTimeStreamingCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__RealTimeStreamingCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__RealTimeStreamingCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__RealTimeStreamingCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RTPMulticast1 = 1;
	size_t soap_flag_RTP_USCORETCP1 = 1;
	size_t soap_flag_RTP_USCORERTSP_USCORETCP1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RTPMulticast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:RTPMulticast", &(a->tt__RealTimeStreamingCapabilities::RTPMulticast), "xsd:boolean"))
				{	soap_flag_RTPMulticast1--;
					continue;
				}
			if (soap_flag_RTP_USCORETCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:RTP_TCP", &(a->tt__RealTimeStreamingCapabilities::RTP_USCORETCP), "xsd:boolean"))
				{	soap_flag_RTP_USCORETCP1--;
					continue;
				}
			if (soap_flag_RTP_USCORERTSP_USCORETCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:RTP_RTSP_TCP", &(a->tt__RealTimeStreamingCapabilities::RTP_USCORERTSP_USCORETCP), "xsd:boolean"))
				{	soap_flag_RTP_USCORERTSP_USCORETCP1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", &(a->tt__RealTimeStreamingCapabilities::Extension), "tt:RealTimeStreamingCapabilitiesExtension"))
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
	{	a = (tt__RealTimeStreamingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilities, 0, sizeof(tt__RealTimeStreamingCapabilities), 0, soap_copy_tt__RealTimeStreamingCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__RealTimeStreamingCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:RealTimeStreamingCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__RealTimeStreamingCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__RealTimeStreamingCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilities(struct soap *soap, tt__RealTimeStreamingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RealTimeStreamingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__RealTimeStreamingCapabilities * SOAP_FMAC2 soap_instantiate_tt__RealTimeStreamingCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__RealTimeStreamingCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__RealTimeStreamingCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__RealTimeStreamingCapabilities);
		if (size)
			*size = sizeof(tt__RealTimeStreamingCapabilities);
		((tt__RealTimeStreamingCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RealTimeStreamingCapabilities, n);
		if (size)
			*size = n * sizeof(tt__RealTimeStreamingCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__RealTimeStreamingCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__RealTimeStreamingCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__RealTimeStreamingCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__RealTimeStreamingCapabilities %p -> %p\n", q, p));
	*(tt__RealTimeStreamingCapabilities*)p = *(tt__RealTimeStreamingCapabilities*)q;
}

void tt__MediaCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MediaCapabilitiesExtension::ProfileCapabilities = NULL;
	this->tt__MediaCapabilitiesExtension::__size = 0;
	this->tt__MediaCapabilitiesExtension::__any = NULL;
	this->tt__MediaCapabilitiesExtension::__anyAttribute = NULL;
}

void tt__MediaCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ProfileCapabilities(soap, &this->tt__MediaCapabilitiesExtension::ProfileCapabilities);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MediaCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MediaCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__MediaCapabilitiesExtension *a, const char *type)
{
	if (((tt__MediaCapabilitiesExtension*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MediaCapabilitiesExtension*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension), "tt:MediaCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MediaCapabilitiesExtension::ProfileCapabilities)
	{	if (soap_out_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", -1, &a->tt__MediaCapabilitiesExtension::ProfileCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ProfileCapabilities"))
		return soap->error;
	if (a->tt__MediaCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MediaCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MediaCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MediaCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MediaCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, tt__MediaCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MediaCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension, sizeof(tt__MediaCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MediaCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MediaCapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MediaCapabilitiesExtension*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_ProfileCapabilities1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_ProfileCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", &(a->tt__MediaCapabilitiesExtension::ProfileCapabilities), "tt:ProfileCapabilities"))
				{	soap_flag_ProfileCapabilities1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MediaCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MediaCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MediaCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MediaCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MediaCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__MediaCapabilitiesExtension::__size++;
					a->tt__MediaCapabilitiesExtension::__any = NULL;
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
		if (a->tt__MediaCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MediaCapabilitiesExtension::__size)
			a->tt__MediaCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MediaCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MediaCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilitiesExtension, 0, sizeof(tt__MediaCapabilitiesExtension), 0, soap_copy_tt__MediaCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileCapabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MediaCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:MediaCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MediaCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MediaCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__MediaCapabilitiesExtension(struct soap *soap, tt__MediaCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MediaCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__MediaCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MediaCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MediaCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MediaCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__MediaCapabilitiesExtension);
		((tt__MediaCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MediaCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__MediaCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MediaCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MediaCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MediaCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MediaCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__MediaCapabilitiesExtension*)p = *(tt__MediaCapabilitiesExtension*)q;
}

void tt__MediaCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__MediaCapabilities::XAddr);
	this->tt__MediaCapabilities::StreamingCapabilities = NULL;
	this->tt__MediaCapabilities::__size = 0;
	this->tt__MediaCapabilities::__any = NULL;
	this->tt__MediaCapabilities::Extension = NULL;
	this->tt__MediaCapabilities::__anyAttribute = NULL;
}

void tt__MediaCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__MediaCapabilities::XAddr);
	soap_serialize_PointerTott__RealTimeStreamingCapabilities(soap, &this->tt__MediaCapabilities::StreamingCapabilities);
	soap_serialize_PointerTott__MediaCapabilitiesExtension(soap, &this->tt__MediaCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MediaCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MediaCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilities(struct soap *soap, const char *tag, int id, const tt__MediaCapabilities *a, const char *type)
{
	if (((tt__MediaCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MediaCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilities), "tt:MediaCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MediaCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__MediaCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (a->tt__MediaCapabilities::StreamingCapabilities)
	{	if (soap_out_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", -1, &a->tt__MediaCapabilities::StreamingCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StreamingCapabilities"))
		return soap->error;
	if (a->tt__MediaCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__MediaCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MediaCapabilities::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__MediaCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MediaCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MediaCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__MediaCapabilities * SOAP_FMAC4 soap_in_tt__MediaCapabilities(struct soap *soap, const char *tag, tt__MediaCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MediaCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilities, sizeof(tt__MediaCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MediaCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MediaCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MediaCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_StreamingCapabilities1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__MediaCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_StreamingCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", &(a->tt__MediaCapabilities::StreamingCapabilities), "tt:RealTimeStreamingCapabilities"))
				{	soap_flag_StreamingCapabilities1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", &(a->tt__MediaCapabilities::Extension), "tt:MediaCapabilitiesExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MediaCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MediaCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MediaCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MediaCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MediaCapabilities::__any, "xsd:byte"))
				{	a->tt__MediaCapabilities::__size++;
					a->tt__MediaCapabilities::__any = NULL;
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
		if (a->tt__MediaCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MediaCapabilities::__size)
			a->tt__MediaCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MediaCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MediaCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilities, 0, sizeof(tt__MediaCapabilities), 0, soap_copy_tt__MediaCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_StreamingCapabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MediaCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:MediaCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MediaCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MediaCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__MediaCapabilities * SOAP_FMAC4 soap_get_tt__MediaCapabilities(struct soap *soap, tt__MediaCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MediaCapabilities * SOAP_FMAC2 soap_instantiate_tt__MediaCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MediaCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MediaCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MediaCapabilities);
		if (size)
			*size = sizeof(tt__MediaCapabilities);
		((tt__MediaCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MediaCapabilities, n);
		if (size)
			*size = n * sizeof(tt__MediaCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MediaCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MediaCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MediaCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MediaCapabilities %p -> %p\n", q, p));
	*(tt__MediaCapabilities*)p = *(tt__MediaCapabilities*)q;
}

void tt__IOCapabilitiesExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IOCapabilitiesExtension2::__size = 0;
	this->tt__IOCapabilitiesExtension2::__any = NULL;
}

void tt__IOCapabilitiesExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IOCapabilitiesExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IOCapabilitiesExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const tt__IOCapabilitiesExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2), "tt:IOCapabilitiesExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__IOCapabilitiesExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__IOCapabilitiesExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__IOCapabilitiesExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__IOCapabilitiesExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IOCapabilitiesExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, tt__IOCapabilitiesExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IOCapabilitiesExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2, sizeof(tt__IOCapabilitiesExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IOCapabilitiesExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IOCapabilitiesExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__IOCapabilitiesExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__IOCapabilitiesExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__IOCapabilitiesExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__IOCapabilitiesExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__IOCapabilitiesExtension2::__any, "xsd:byte"))
				{	a->tt__IOCapabilitiesExtension2::__size++;
					a->tt__IOCapabilitiesExtension2::__any = NULL;
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
		if (a->tt__IOCapabilitiesExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__IOCapabilitiesExtension2::__size)
			a->tt__IOCapabilitiesExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__IOCapabilitiesExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IOCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension2, 0, sizeof(tt__IOCapabilitiesExtension2), 0, soap_copy_tt__IOCapabilitiesExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IOCapabilitiesExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension2);
	if (this->soap_out(soap, tag?tag:"tt:IOCapabilitiesExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IOCapabilitiesExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IOCapabilitiesExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension2(struct soap *soap, tt__IOCapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IOCapabilitiesExtension2 * SOAP_FMAC2 soap_instantiate_tt__IOCapabilitiesExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IOCapabilitiesExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IOCapabilitiesExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IOCapabilitiesExtension2);
		if (size)
			*size = sizeof(tt__IOCapabilitiesExtension2);
		((tt__IOCapabilitiesExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IOCapabilitiesExtension2, n);
		if (size)
			*size = n * sizeof(tt__IOCapabilitiesExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IOCapabilitiesExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IOCapabilitiesExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IOCapabilitiesExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IOCapabilitiesExtension2 %p -> %p\n", q, p));
	*(tt__IOCapabilitiesExtension2*)p = *(tt__IOCapabilitiesExtension2*)q;
}

void tt__IOCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IOCapabilitiesExtension::__size = 0;
	this->tt__IOCapabilitiesExtension::__any = NULL;
	this->tt__IOCapabilitiesExtension::Auxiliary = NULL;
	this->tt__IOCapabilitiesExtension::__sizeAuxiliaryCommands = 0;
	this->tt__IOCapabilitiesExtension::AuxiliaryCommands = NULL;
	this->tt__IOCapabilitiesExtension::Extension = NULL;
	this->tt__IOCapabilitiesExtension::__anyAttribute = NULL;
}

void tt__IOCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__IOCapabilitiesExtension::Auxiliary);
	if (this->tt__IOCapabilitiesExtension::AuxiliaryCommands)
	{	int i;
		for (i = 0; i < this->tt__IOCapabilitiesExtension::__sizeAuxiliaryCommands; i++)
		{
			soap_serialize_tt__AuxiliaryData(soap, this->tt__IOCapabilitiesExtension::AuxiliaryCommands + i);
		}
	}
	soap_serialize_PointerTott__IOCapabilitiesExtension2(soap, &this->tt__IOCapabilitiesExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IOCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IOCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__IOCapabilitiesExtension *a, const char *type)
{
	if (((tt__IOCapabilitiesExtension*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__IOCapabilitiesExtension*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension), "tt:IOCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__IOCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__IOCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__IOCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:Auxiliary", -1, &(a->tt__IOCapabilitiesExtension::Auxiliary), ""))
		return soap->error;
	if (a->tt__IOCapabilitiesExtension::AuxiliaryCommands)
	{	int i;
		for (i = 0; i < a->tt__IOCapabilitiesExtension::__sizeAuxiliaryCommands; i++)
			if (soap_out_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", -1, a->tt__IOCapabilitiesExtension::AuxiliaryCommands + i, ""))
				return soap->error;
	}
	if (a->tt__IOCapabilitiesExtension::Extension)
	{	if (soap_out_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", -1, &a->tt__IOCapabilitiesExtension::Extension, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Extension"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IOCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IOCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, tt__IOCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IOCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension, sizeof(tt__IOCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IOCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IOCapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__IOCapabilitiesExtension*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_Auxiliary1 = 1;
	struct soap_blist *soap_blist_AuxiliaryCommands1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Auxiliary1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Auxiliary", &(a->tt__IOCapabilitiesExtension::Auxiliary), "xsd:boolean"))
				{	soap_flag_Auxiliary1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuxiliaryCommands", 1, NULL))
			{	if (a->tt__IOCapabilitiesExtension::AuxiliaryCommands == NULL)
				{	if (soap_blist_AuxiliaryCommands1 == NULL)
						soap_blist_AuxiliaryCommands1 = soap_new_block(soap);
					a->tt__IOCapabilitiesExtension::AuxiliaryCommands = (char **)soap_push_block(soap, soap_blist_AuxiliaryCommands1, sizeof(char *));
					if (a->tt__IOCapabilitiesExtension::AuxiliaryCommands == NULL)
						return NULL;
					*a->tt__IOCapabilitiesExtension::AuxiliaryCommands = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", a->tt__IOCapabilitiesExtension::AuxiliaryCommands, "tt:AuxiliaryData"))
				{	a->tt__IOCapabilitiesExtension::__sizeAuxiliaryCommands++;
					a->tt__IOCapabilitiesExtension::AuxiliaryCommands = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", &(a->tt__IOCapabilitiesExtension::Extension), "tt:IOCapabilitiesExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__IOCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__IOCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__IOCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__IOCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__IOCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__IOCapabilitiesExtension::__size++;
					a->tt__IOCapabilitiesExtension::__any = NULL;
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
		if (a->tt__IOCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__IOCapabilitiesExtension::__size)
			a->tt__IOCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__IOCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->tt__IOCapabilitiesExtension::AuxiliaryCommands)
			soap_pop_block(soap, soap_blist_AuxiliaryCommands1);
		if (a->tt__IOCapabilitiesExtension::__sizeAuxiliaryCommands)
			a->tt__IOCapabilitiesExtension::AuxiliaryCommands = (char **)soap_save_block(soap, soap_blist_AuxiliaryCommands1, NULL, 1);
		else
		{	a->tt__IOCapabilitiesExtension::AuxiliaryCommands = NULL;
			if (soap_blist_AuxiliaryCommands1)
				soap_end_block(soap, soap_blist_AuxiliaryCommands1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IOCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension, 0, sizeof(tt__IOCapabilitiesExtension), 0, soap_copy_tt__IOCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Extension1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IOCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:IOCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IOCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IOCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension(struct soap *soap, tt__IOCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IOCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__IOCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IOCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IOCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IOCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__IOCapabilitiesExtension);
		((tt__IOCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IOCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__IOCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IOCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IOCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IOCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IOCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__IOCapabilitiesExtension*)p = *(tt__IOCapabilitiesExtension*)q;
}

void tt__IOCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IOCapabilities::InputConnectors = NULL;
	this->tt__IOCapabilities::RelayOutputs = NULL;
	this->tt__IOCapabilities::Extension = NULL;
	this->tt__IOCapabilities::__anyAttribute = NULL;
}

void tt__IOCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &this->tt__IOCapabilities::InputConnectors);
	soap_serialize_PointerToint(soap, &this->tt__IOCapabilities::RelayOutputs);
	soap_serialize_PointerTott__IOCapabilitiesExtension(soap, &this->tt__IOCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IOCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IOCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilities(struct soap *soap, const char *tag, int id, const tt__IOCapabilities *a, const char *type)
{
	if (((tt__IOCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__IOCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilities), "tt:IOCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerToint(soap, "tt:InputConnectors", -1, &(a->tt__IOCapabilities::InputConnectors), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:RelayOutputs", -1, &(a->tt__IOCapabilities::RelayOutputs), ""))
		return soap->error;
	if (soap_out_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__IOCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IOCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IOCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__IOCapabilities * SOAP_FMAC4 soap_in_tt__IOCapabilities(struct soap *soap, const char *tag, tt__IOCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IOCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilities, sizeof(tt__IOCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IOCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IOCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__IOCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_InputConnectors1 = 1;
	size_t soap_flag_RelayOutputs1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_InputConnectors1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:InputConnectors", &(a->tt__IOCapabilities::InputConnectors), "xsd:int"))
				{	soap_flag_InputConnectors1--;
					continue;
				}
			if (soap_flag_RelayOutputs1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:RelayOutputs", &(a->tt__IOCapabilities::RelayOutputs), "xsd:int"))
				{	soap_flag_RelayOutputs1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", &(a->tt__IOCapabilities::Extension), "tt:IOCapabilitiesExtension"))
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
	{	a = (tt__IOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilities, 0, sizeof(tt__IOCapabilities), 0, soap_copy_tt__IOCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IOCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:IOCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IOCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IOCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__IOCapabilities * SOAP_FMAC4 soap_get_tt__IOCapabilities(struct soap *soap, tt__IOCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IOCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IOCapabilities * SOAP_FMAC2 soap_instantiate_tt__IOCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IOCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IOCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IOCapabilities);
		if (size)
			*size = sizeof(tt__IOCapabilities);
		((tt__IOCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IOCapabilities, n);
		if (size)
			*size = n * sizeof(tt__IOCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IOCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IOCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IOCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IOCapabilities %p -> %p\n", q, p));
	*(tt__IOCapabilities*)p = *(tt__IOCapabilities*)q;
}

void tt__EventCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__EventCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__EventCapabilities::WSSubscriptionPolicySupport);
	soap_default_bool(soap, &this->tt__EventCapabilities::WSPullPointSupport);
	soap_default_bool(soap, &this->tt__EventCapabilities::WSPausableSubscriptionManagerInterfaceSupport);
	this->tt__EventCapabilities::__size = 0;
	this->tt__EventCapabilities::__any = NULL;
	this->tt__EventCapabilities::__anyAttribute = NULL;
}

void tt__EventCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__EventCapabilities::XAddr);
	soap_embedded(soap, &this->tt__EventCapabilities::WSSubscriptionPolicySupport, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__EventCapabilities::WSPullPointSupport, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__EventCapabilities::WSPausableSubscriptionManagerInterfaceSupport, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EventCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EventCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventCapabilities(struct soap *soap, const char *tag, int id, const tt__EventCapabilities *a, const char *type)
{
	if (((tt__EventCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EventCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventCapabilities), "tt:EventCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__EventCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__EventCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:WSSubscriptionPolicySupport", -1, &(a->tt__EventCapabilities::WSSubscriptionPolicySupport), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:WSPullPointSupport", -1, &(a->tt__EventCapabilities::WSPullPointSupport), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", -1, &(a->tt__EventCapabilities::WSPausableSubscriptionManagerInterfaceSupport), ""))
		return soap->error;
	if (a->tt__EventCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__EventCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EventCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EventCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EventCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__EventCapabilities * SOAP_FMAC4 soap_in_tt__EventCapabilities(struct soap *soap, const char *tag, tt__EventCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EventCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventCapabilities, sizeof(tt__EventCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EventCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EventCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EventCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_WSSubscriptionPolicySupport1 = 1;
	size_t soap_flag_WSPullPointSupport1 = 1;
	size_t soap_flag_WSPausableSubscriptionManagerInterfaceSupport1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__EventCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_WSSubscriptionPolicySupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:WSSubscriptionPolicySupport", &(a->tt__EventCapabilities::WSSubscriptionPolicySupport), "xsd:boolean"))
				{	soap_flag_WSSubscriptionPolicySupport1--;
					continue;
				}
			if (soap_flag_WSPullPointSupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:WSPullPointSupport", &(a->tt__EventCapabilities::WSPullPointSupport), "xsd:boolean"))
				{	soap_flag_WSPullPointSupport1--;
					continue;
				}
			if (soap_flag_WSPausableSubscriptionManagerInterfaceSupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", &(a->tt__EventCapabilities::WSPausableSubscriptionManagerInterfaceSupport), "xsd:boolean"))
				{	soap_flag_WSPausableSubscriptionManagerInterfaceSupport1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EventCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EventCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EventCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EventCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EventCapabilities::__any, "xsd:byte"))
				{	a->tt__EventCapabilities::__size++;
					a->tt__EventCapabilities::__any = NULL;
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
		if (a->tt__EventCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EventCapabilities::__size)
			a->tt__EventCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EventCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EventCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventCapabilities, 0, sizeof(tt__EventCapabilities), 0, soap_copy_tt__EventCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_WSSubscriptionPolicySupport1 > 0 || soap_flag_WSPullPointSupport1 > 0 || soap_flag_WSPausableSubscriptionManagerInterfaceSupport1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__EventCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EventCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:EventCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EventCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EventCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__EventCapabilities * SOAP_FMAC4 soap_get_tt__EventCapabilities(struct soap *soap, tt__EventCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EventCapabilities * SOAP_FMAC2 soap_instantiate_tt__EventCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EventCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EventCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EventCapabilities);
		if (size)
			*size = sizeof(tt__EventCapabilities);
		((tt__EventCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EventCapabilities, n);
		if (size)
			*size = n * sizeof(tt__EventCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EventCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EventCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EventCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EventCapabilities %p -> %p\n", q, p));
	*(tt__EventCapabilities*)p = *(tt__EventCapabilities*)q;
}

void tt__DeviceCapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__DeviceCapabilitiesExtension::__size = 0;
	this->tt__DeviceCapabilitiesExtension::__any = NULL;
}

void tt__DeviceCapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DeviceCapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DeviceCapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__DeviceCapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension), "tt:DeviceCapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DeviceCapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__DeviceCapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DeviceCapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DeviceCapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DeviceCapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, tt__DeviceCapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DeviceCapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension, sizeof(tt__DeviceCapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DeviceCapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DeviceCapabilitiesExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__DeviceCapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DeviceCapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DeviceCapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DeviceCapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DeviceCapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__DeviceCapabilitiesExtension::__size++;
					a->tt__DeviceCapabilitiesExtension::__any = NULL;
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
		if (a->tt__DeviceCapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DeviceCapabilitiesExtension::__size)
			a->tt__DeviceCapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DeviceCapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DeviceCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilitiesExtension, 0, sizeof(tt__DeviceCapabilitiesExtension), 0, soap_copy_tt__DeviceCapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__DeviceCapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:DeviceCapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DeviceCapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DeviceCapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__DeviceCapabilitiesExtension(struct soap *soap, tt__DeviceCapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceCapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DeviceCapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__DeviceCapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DeviceCapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DeviceCapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DeviceCapabilitiesExtension);
		if (size)
			*size = sizeof(tt__DeviceCapabilitiesExtension);
		((tt__DeviceCapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DeviceCapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__DeviceCapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DeviceCapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DeviceCapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DeviceCapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DeviceCapabilitiesExtension %p -> %p\n", q, p));
	*(tt__DeviceCapabilitiesExtension*)p = *(tt__DeviceCapabilitiesExtension*)q;
}

void tt__DeviceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__DeviceCapabilities::XAddr);
	this->tt__DeviceCapabilities::Network = NULL;
	this->tt__DeviceCapabilities::System = NULL;
	this->tt__DeviceCapabilities::IO = NULL;
	this->tt__DeviceCapabilities::Security = NULL;
	this->tt__DeviceCapabilities::Extension = NULL;
	this->tt__DeviceCapabilities::__anyAttribute = NULL;
}

void tt__DeviceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__DeviceCapabilities::XAddr);
	soap_serialize_PointerTott__NetworkCapabilities(soap, &this->tt__DeviceCapabilities::Network);
	soap_serialize_PointerTott__SystemCapabilities(soap, &this->tt__DeviceCapabilities::System);
	soap_serialize_PointerTott__IOCapabilities(soap, &this->tt__DeviceCapabilities::IO);
	soap_serialize_PointerTott__SecurityCapabilities(soap, &this->tt__DeviceCapabilities::Security);
	soap_serialize_PointerTott__DeviceCapabilitiesExtension(soap, &this->tt__DeviceCapabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DeviceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DeviceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilities(struct soap *soap, const char *tag, int id, const tt__DeviceCapabilities *a, const char *type)
{
	if (((tt__DeviceCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DeviceCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilities), "tt:DeviceCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DeviceCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__DeviceCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_PointerTott__NetworkCapabilities(soap, "tt:Network", -1, &(a->tt__DeviceCapabilities::Network), ""))
		return soap->error;
	if (soap_out_PointerTott__SystemCapabilities(soap, "tt:System", -1, &(a->tt__DeviceCapabilities::System), ""))
		return soap->error;
	if (soap_out_PointerTott__IOCapabilities(soap, "tt:IO", -1, &(a->tt__DeviceCapabilities::IO), ""))
		return soap->error;
	if (soap_out_PointerTott__SecurityCapabilities(soap, "tt:Security", -1, &(a->tt__DeviceCapabilities::Security), ""))
		return soap->error;
	if (soap_out_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__DeviceCapabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__DeviceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DeviceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__DeviceCapabilities * SOAP_FMAC4 soap_in_tt__DeviceCapabilities(struct soap *soap, const char *tag, tt__DeviceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DeviceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilities, sizeof(tt__DeviceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DeviceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DeviceCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DeviceCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_Network1 = 1;
	size_t soap_flag_System1 = 1;
	size_t soap_flag_IO1 = 1;
	size_t soap_flag_Security1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__DeviceCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_Network1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkCapabilities(soap, "tt:Network", &(a->tt__DeviceCapabilities::Network), "tt:NetworkCapabilities"))
				{	soap_flag_Network1--;
					continue;
				}
			if (soap_flag_System1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemCapabilities(soap, "tt:System", &(a->tt__DeviceCapabilities::System), "tt:SystemCapabilities"))
				{	soap_flag_System1--;
					continue;
				}
			if (soap_flag_IO1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IOCapabilities(soap, "tt:IO", &(a->tt__DeviceCapabilities::IO), "tt:IOCapabilities"))
				{	soap_flag_IO1--;
					continue;
				}
			if (soap_flag_Security1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SecurityCapabilities(soap, "tt:Security", &(a->tt__DeviceCapabilities::Security), "tt:SecurityCapabilities"))
				{	soap_flag_Security1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", &(a->tt__DeviceCapabilities::Extension), "tt:DeviceCapabilitiesExtension"))
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
	{	a = (tt__DeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilities, 0, sizeof(tt__DeviceCapabilities), 0, soap_copy_tt__DeviceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DeviceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:DeviceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DeviceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DeviceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__DeviceCapabilities * SOAP_FMAC4 soap_get_tt__DeviceCapabilities(struct soap *soap, tt__DeviceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DeviceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DeviceCapabilities * SOAP_FMAC2 soap_instantiate_tt__DeviceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DeviceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DeviceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DeviceCapabilities);
		if (size)
			*size = sizeof(tt__DeviceCapabilities);
		((tt__DeviceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DeviceCapabilities, n);
		if (size)
			*size = n * sizeof(tt__DeviceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DeviceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DeviceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DeviceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DeviceCapabilities %p -> %p\n", q, p));
	*(tt__DeviceCapabilities*)p = *(tt__DeviceCapabilities*)q;
}

void tt__AnalyticsCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__AnalyticsCapabilities::XAddr);
	soap_default_bool(soap, &this->tt__AnalyticsCapabilities::RuleSupport);
	soap_default_bool(soap, &this->tt__AnalyticsCapabilities::AnalyticsModuleSupport);
	this->tt__AnalyticsCapabilities::__size = 0;
	this->tt__AnalyticsCapabilities::__any = NULL;
	this->tt__AnalyticsCapabilities::__anyAttribute = NULL;
}

void tt__AnalyticsCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__AnalyticsCapabilities::XAddr);
	soap_embedded(soap, &this->tt__AnalyticsCapabilities::RuleSupport, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__AnalyticsCapabilities::AnalyticsModuleSupport, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, int id, const tt__AnalyticsCapabilities *a, const char *type)
{
	if (((tt__AnalyticsCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsCapabilities), "tt:AnalyticsCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsCapabilities::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->tt__AnalyticsCapabilities::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:XAddr"))
		return soap->error;
	if (soap_out_bool(soap, "tt:RuleSupport", -1, &(a->tt__AnalyticsCapabilities::RuleSupport), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:AnalyticsModuleSupport", -1, &(a->tt__AnalyticsCapabilities::AnalyticsModuleSupport), ""))
		return soap->error;
	if (a->tt__AnalyticsCapabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, tt__AnalyticsCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsCapabilities, sizeof(tt__AnalyticsCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_RuleSupport1 = 1;
	size_t soap_flag_AnalyticsModuleSupport1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:XAddr", &(a->tt__AnalyticsCapabilities::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_RuleSupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:RuleSupport", &(a->tt__AnalyticsCapabilities::RuleSupport), "xsd:boolean"))
				{	soap_flag_RuleSupport1--;
					continue;
				}
			if (soap_flag_AnalyticsModuleSupport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AnalyticsModuleSupport", &(a->tt__AnalyticsCapabilities::AnalyticsModuleSupport), "xsd:boolean"))
				{	soap_flag_AnalyticsModuleSupport1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsCapabilities::__any, "xsd:byte"))
				{	a->tt__AnalyticsCapabilities::__size++;
					a->tt__AnalyticsCapabilities::__any = NULL;
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
		if (a->tt__AnalyticsCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsCapabilities::__size)
			a->tt__AnalyticsCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsCapabilities, 0, sizeof(tt__AnalyticsCapabilities), 0, soap_copy_tt__AnalyticsCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr1 > 0 || soap_flag_RuleSupport1 > 0 || soap_flag_AnalyticsModuleSupport1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsCapabilities);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsCapabilities(struct soap *soap, tt__AnalyticsCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsCapabilities * SOAP_FMAC2 soap_instantiate_tt__AnalyticsCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsCapabilities);
		if (size)
			*size = sizeof(tt__AnalyticsCapabilities);
		((tt__AnalyticsCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsCapabilities, n);
		if (size)
			*size = n * sizeof(tt__AnalyticsCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AnalyticsCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AnalyticsCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsCapabilities %p -> %p\n", q, p));
	*(tt__AnalyticsCapabilities*)p = *(tt__AnalyticsCapabilities*)q;
}

void tt__CapabilitiesExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CapabilitiesExtension2::__size = 0;
	this->tt__CapabilitiesExtension2::__any = NULL;
}

void tt__CapabilitiesExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CapabilitiesExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CapabilitiesExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, int id, const tt__CapabilitiesExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension2), "tt:CapabilitiesExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CapabilitiesExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__CapabilitiesExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CapabilitiesExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__CapabilitiesExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CapabilitiesExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, tt__CapabilitiesExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CapabilitiesExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension2, sizeof(tt__CapabilitiesExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CapabilitiesExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CapabilitiesExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__CapabilitiesExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CapabilitiesExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CapabilitiesExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CapabilitiesExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CapabilitiesExtension2::__any, "xsd:byte"))
				{	a->tt__CapabilitiesExtension2::__size++;
					a->tt__CapabilitiesExtension2::__any = NULL;
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
		if (a->tt__CapabilitiesExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CapabilitiesExtension2::__size)
			a->tt__CapabilitiesExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CapabilitiesExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension2, 0, sizeof(tt__CapabilitiesExtension2), 0, soap_copy_tt__CapabilitiesExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__CapabilitiesExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension2);
	if (this->soap_out(soap, tag?tag:"tt:CapabilitiesExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CapabilitiesExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CapabilitiesExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension2(struct soap *soap, tt__CapabilitiesExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilitiesExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CapabilitiesExtension2 * SOAP_FMAC2 soap_instantiate_tt__CapabilitiesExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CapabilitiesExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CapabilitiesExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CapabilitiesExtension2);
		if (size)
			*size = sizeof(tt__CapabilitiesExtension2);
		((tt__CapabilitiesExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CapabilitiesExtension2, n);
		if (size)
			*size = n * sizeof(tt__CapabilitiesExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CapabilitiesExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CapabilitiesExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CapabilitiesExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CapabilitiesExtension2 %p -> %p\n", q, p));
	*(tt__CapabilitiesExtension2*)p = *(tt__CapabilitiesExtension2*)q;
}

void tt__CapabilitiesExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__CapabilitiesExtension::__size = 0;
	this->tt__CapabilitiesExtension::__any = NULL;
	this->tt__CapabilitiesExtension::DeviceIO = NULL;
	this->tt__CapabilitiesExtension::Display = NULL;
	this->tt__CapabilitiesExtension::Recording = NULL;
	this->tt__CapabilitiesExtension::Search = NULL;
	this->tt__CapabilitiesExtension::Replay = NULL;
	this->tt__CapabilitiesExtension::Receiver = NULL;
	this->tt__CapabilitiesExtension::AnalyticsDevice = NULL;
	this->tt__CapabilitiesExtension::Extensions = NULL;
}

void tt__CapabilitiesExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__DeviceIOCapabilities(soap, &this->tt__CapabilitiesExtension::DeviceIO);
	soap_serialize_PointerTott__DisplayCapabilities(soap, &this->tt__CapabilitiesExtension::Display);
	soap_serialize_PointerTott__RecordingCapabilities(soap, &this->tt__CapabilitiesExtension::Recording);
	soap_serialize_PointerTott__SearchCapabilities(soap, &this->tt__CapabilitiesExtension::Search);
	soap_serialize_PointerTott__ReplayCapabilities(soap, &this->tt__CapabilitiesExtension::Replay);
	soap_serialize_PointerTott__ReceiverCapabilities(soap, &this->tt__CapabilitiesExtension::Receiver);
	soap_serialize_PointerTott__AnalyticsDeviceCapabilities(soap, &this->tt__CapabilitiesExtension::AnalyticsDevice);
	soap_serialize_PointerTott__CapabilitiesExtension2(soap, &this->tt__CapabilitiesExtension::Extensions);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__CapabilitiesExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__CapabilitiesExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension(struct soap *soap, const char *tag, int id, const tt__CapabilitiesExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension), "tt:CapabilitiesExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__CapabilitiesExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__CapabilitiesExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__CapabilitiesExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", -1, &(a->tt__CapabilitiesExtension::DeviceIO), ""))
		return soap->error;
	if (soap_out_PointerTott__DisplayCapabilities(soap, "tt:Display", -1, &(a->tt__CapabilitiesExtension::Display), ""))
		return soap->error;
	if (soap_out_PointerTott__RecordingCapabilities(soap, "tt:Recording", -1, &(a->tt__CapabilitiesExtension::Recording), ""))
		return soap->error;
	if (soap_out_PointerTott__SearchCapabilities(soap, "tt:Search", -1, &(a->tt__CapabilitiesExtension::Search), ""))
		return soap->error;
	if (soap_out_PointerTott__ReplayCapabilities(soap, "tt:Replay", -1, &(a->tt__CapabilitiesExtension::Replay), ""))
		return soap->error;
	if (soap_out_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", -1, &(a->tt__CapabilitiesExtension::Receiver), ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", -1, &(a->tt__CapabilitiesExtension::AnalyticsDevice), ""))
		return soap->error;
	if (soap_out_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", -1, &(a->tt__CapabilitiesExtension::Extensions), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__CapabilitiesExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__CapabilitiesExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__CapabilitiesExtension * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension(struct soap *soap, const char *tag, tt__CapabilitiesExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__CapabilitiesExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension, sizeof(tt__CapabilitiesExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__CapabilitiesExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__CapabilitiesExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_DeviceIO1 = 1;
	size_t soap_flag_Display1 = 1;
	size_t soap_flag_Recording1 = 1;
	size_t soap_flag_Search1 = 1;
	size_t soap_flag_Replay1 = 1;
	size_t soap_flag_Receiver1 = 1;
	size_t soap_flag_AnalyticsDevice1 = 1;
	size_t soap_flag_Extensions1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_DeviceIO1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", &(a->tt__CapabilitiesExtension::DeviceIO), "tt:DeviceIOCapabilities"))
				{	soap_flag_DeviceIO1--;
					continue;
				}
			if (soap_flag_Display1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DisplayCapabilities(soap, "tt:Display", &(a->tt__CapabilitiesExtension::Display), "tt:DisplayCapabilities"))
				{	soap_flag_Display1--;
					continue;
				}
			if (soap_flag_Recording1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingCapabilities(soap, "tt:Recording", &(a->tt__CapabilitiesExtension::Recording), "tt:RecordingCapabilities"))
				{	soap_flag_Recording1--;
					continue;
				}
			if (soap_flag_Search1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SearchCapabilities(soap, "tt:Search", &(a->tt__CapabilitiesExtension::Search), "tt:SearchCapabilities"))
				{	soap_flag_Search1--;
					continue;
				}
			if (soap_flag_Replay1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReplayCapabilities(soap, "tt:Replay", &(a->tt__CapabilitiesExtension::Replay), "tt:ReplayCapabilities"))
				{	soap_flag_Replay1--;
					continue;
				}
			if (soap_flag_Receiver1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", &(a->tt__CapabilitiesExtension::Receiver), "tt:ReceiverCapabilities"))
				{	soap_flag_Receiver1--;
					continue;
				}
			if (soap_flag_AnalyticsDevice1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", &(a->tt__CapabilitiesExtension::AnalyticsDevice), "tt:AnalyticsDeviceCapabilities"))
				{	soap_flag_AnalyticsDevice1--;
					continue;
				}
			if (soap_flag_Extensions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", &(a->tt__CapabilitiesExtension::Extensions), "tt:CapabilitiesExtension2"))
				{	soap_flag_Extensions1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__CapabilitiesExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__CapabilitiesExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__CapabilitiesExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__CapabilitiesExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__CapabilitiesExtension::__any, "xsd:byte"))
				{	a->tt__CapabilitiesExtension::__size++;
					a->tt__CapabilitiesExtension::__any = NULL;
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
		if (a->tt__CapabilitiesExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__CapabilitiesExtension::__size)
			a->tt__CapabilitiesExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__CapabilitiesExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__CapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension, 0, sizeof(tt__CapabilitiesExtension), 0, soap_copy_tt__CapabilitiesExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__CapabilitiesExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension);
	if (this->soap_out(soap, tag?tag:"tt:CapabilitiesExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__CapabilitiesExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__CapabilitiesExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__CapabilitiesExtension * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension(struct soap *soap, tt__CapabilitiesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CapabilitiesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__CapabilitiesExtension * SOAP_FMAC2 soap_instantiate_tt__CapabilitiesExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__CapabilitiesExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__CapabilitiesExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__CapabilitiesExtension);
		if (size)
			*size = sizeof(tt__CapabilitiesExtension);
		((tt__CapabilitiesExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__CapabilitiesExtension, n);
		if (size)
			*size = n * sizeof(tt__CapabilitiesExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__CapabilitiesExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__CapabilitiesExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__CapabilitiesExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__CapabilitiesExtension %p -> %p\n", q, p));
	*(tt__CapabilitiesExtension*)p = *(tt__CapabilitiesExtension*)q;
}

void tt__Capabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Capabilities::Analytics = NULL;
	this->tt__Capabilities::Device = NULL;
	this->tt__Capabilities::Events = NULL;
	this->tt__Capabilities::Imaging = NULL;
	this->tt__Capabilities::Media = NULL;
	this->tt__Capabilities::PTZ = NULL;
	this->tt__Capabilities::Extension = NULL;
	this->tt__Capabilities::__anyAttribute = NULL;
}

void tt__Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsCapabilities(soap, &this->tt__Capabilities::Analytics);
	soap_serialize_PointerTott__DeviceCapabilities(soap, &this->tt__Capabilities::Device);
	soap_serialize_PointerTott__EventCapabilities(soap, &this->tt__Capabilities::Events);
	soap_serialize_PointerTott__ImagingCapabilities(soap, &this->tt__Capabilities::Imaging);
	soap_serialize_PointerTott__MediaCapabilities(soap, &this->tt__Capabilities::Media);
	soap_serialize_PointerTott__PTZCapabilities(soap, &this->tt__Capabilities::PTZ);
	soap_serialize_PointerTott__CapabilitiesExtension(soap, &this->tt__Capabilities::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Capabilities(struct soap *soap, const char *tag, int id, const tt__Capabilities *a, const char *type)
{
	if (((tt__Capabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Capabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Capabilities), "tt:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", -1, &(a->tt__Capabilities::Analytics), ""))
		return soap->error;
	if (soap_out_PointerTott__DeviceCapabilities(soap, "tt:Device", -1, &(a->tt__Capabilities::Device), ""))
		return soap->error;
	if (soap_out_PointerTott__EventCapabilities(soap, "tt:Events", -1, &(a->tt__Capabilities::Events), ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingCapabilities(soap, "tt:Imaging", -1, &(a->tt__Capabilities::Imaging), ""))
		return soap->error;
	if (soap_out_PointerTott__MediaCapabilities(soap, "tt:Media", -1, &(a->tt__Capabilities::Media), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZCapabilities(soap, "tt:PTZ", -1, &(a->tt__Capabilities::PTZ), ""))
		return soap->error;
	if (soap_out_PointerTott__CapabilitiesExtension(soap, "tt:Extension", -1, &(a->tt__Capabilities::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__Capabilities * SOAP_FMAC4 soap_in_tt__Capabilities(struct soap *soap, const char *tag, tt__Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Capabilities, sizeof(tt__Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Capabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Analytics1 = 1;
	size_t soap_flag_Device1 = 1;
	size_t soap_flag_Events1 = 1;
	size_t soap_flag_Imaging1 = 1;
	size_t soap_flag_Media1 = 1;
	size_t soap_flag_PTZ1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Analytics1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", &(a->tt__Capabilities::Analytics), "tt:AnalyticsCapabilities"))
				{	soap_flag_Analytics1--;
					continue;
				}
			if (soap_flag_Device1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceCapabilities(soap, "tt:Device", &(a->tt__Capabilities::Device), "tt:DeviceCapabilities"))
				{	soap_flag_Device1--;
					continue;
				}
			if (soap_flag_Events1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EventCapabilities(soap, "tt:Events", &(a->tt__Capabilities::Events), "tt:EventCapabilities"))
				{	soap_flag_Events1--;
					continue;
				}
			if (soap_flag_Imaging1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingCapabilities(soap, "tt:Imaging", &(a->tt__Capabilities::Imaging), "tt:ImagingCapabilities"))
				{	soap_flag_Imaging1--;
					continue;
				}
			if (soap_flag_Media1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaCapabilities(soap, "tt:Media", &(a->tt__Capabilities::Media), "tt:MediaCapabilities"))
				{	soap_flag_Media1--;
					continue;
				}
			if (soap_flag_PTZ1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZCapabilities(soap, "tt:PTZ", &(a->tt__Capabilities::PTZ), "tt:PTZCapabilities"))
				{	soap_flag_PTZ1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CapabilitiesExtension(soap, "tt:Extension", &(a->tt__Capabilities::Extension), "tt:CapabilitiesExtension"))
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
	{	a = (tt__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Capabilities, 0, sizeof(tt__Capabilities), 0, soap_copy_tt__Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Capabilities);
	if (this->soap_out(soap, tag?tag:"tt:Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__Capabilities * SOAP_FMAC4 soap_get_tt__Capabilities(struct soap *soap, tt__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Capabilities * SOAP_FMAC2 soap_instantiate_tt__Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Capabilities);
		if (size)
			*size = sizeof(tt__Capabilities);
		((tt__Capabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Capabilities, n);
		if (size)
			*size = n * sizeof(tt__Capabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Capabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Capabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Capabilities %p -> %p\n", q, p));
	*(tt__Capabilities*)p = *(tt__Capabilities*)q;
}

void tt__Dot11AvailableNetworksExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot11AvailableNetworksExtension::__size = 0;
	this->tt__Dot11AvailableNetworksExtension::__any = NULL;
}

void tt__Dot11AvailableNetworksExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11AvailableNetworksExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11AvailableNetworksExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AvailableNetworksExtension(struct soap *soap, const char *tag, int id, const tt__Dot11AvailableNetworksExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11AvailableNetworksExtension), "tt:Dot11AvailableNetworksExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot11AvailableNetworksExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11AvailableNetworksExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11AvailableNetworksExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11AvailableNetworksExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11AvailableNetworksExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11AvailableNetworksExtension * SOAP_FMAC4 soap_in_tt__Dot11AvailableNetworksExtension(struct soap *soap, const char *tag, tt__Dot11AvailableNetworksExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11AvailableNetworksExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AvailableNetworksExtension, sizeof(tt__Dot11AvailableNetworksExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11AvailableNetworksExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11AvailableNetworksExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__Dot11AvailableNetworksExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11AvailableNetworksExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11AvailableNetworksExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11AvailableNetworksExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11AvailableNetworksExtension::__any, "xsd:byte"))
				{	a->tt__Dot11AvailableNetworksExtension::__size++;
					a->tt__Dot11AvailableNetworksExtension::__any = NULL;
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
		if (a->tt__Dot11AvailableNetworksExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11AvailableNetworksExtension::__size)
			a->tt__Dot11AvailableNetworksExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11AvailableNetworksExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11AvailableNetworksExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11AvailableNetworksExtension, 0, sizeof(tt__Dot11AvailableNetworksExtension), 0, soap_copy_tt__Dot11AvailableNetworksExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot11AvailableNetworksExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11AvailableNetworksExtension);
	if (this->soap_out(soap, tag?tag:"tt:Dot11AvailableNetworksExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11AvailableNetworksExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11AvailableNetworksExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11AvailableNetworksExtension * SOAP_FMAC4 soap_get_tt__Dot11AvailableNetworksExtension(struct soap *soap, tt__Dot11AvailableNetworksExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AvailableNetworksExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11AvailableNetworksExtension * SOAP_FMAC2 soap_instantiate_tt__Dot11AvailableNetworksExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11AvailableNetworksExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11AvailableNetworksExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11AvailableNetworksExtension);
		if (size)
			*size = sizeof(tt__Dot11AvailableNetworksExtension);
		((tt__Dot11AvailableNetworksExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11AvailableNetworksExtension, n);
		if (size)
			*size = n * sizeof(tt__Dot11AvailableNetworksExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11AvailableNetworksExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11AvailableNetworksExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11AvailableNetworksExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11AvailableNetworksExtension %p -> %p\n", q, p));
	*(tt__Dot11AvailableNetworksExtension*)p = *(tt__Dot11AvailableNetworksExtension*)q;
}

void tt__Dot11AvailableNetworks::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SSIDType(soap, &this->tt__Dot11AvailableNetworks::SSID);
	soap_default_string(soap, &this->tt__Dot11AvailableNetworks::BSSID);
	this->tt__Dot11AvailableNetworks::__sizeAuthAndMangementSuite = 0;
	this->tt__Dot11AvailableNetworks::AuthAndMangementSuite = NULL;
	this->tt__Dot11AvailableNetworks::__sizePairCipher = 0;
	this->tt__Dot11AvailableNetworks::PairCipher = NULL;
	this->tt__Dot11AvailableNetworks::__sizeGroupCipher = 0;
	this->tt__Dot11AvailableNetworks::GroupCipher = NULL;
	this->tt__Dot11AvailableNetworks::SignalStrength = NULL;
	this->tt__Dot11AvailableNetworks::Extension = NULL;
	this->tt__Dot11AvailableNetworks::__anyAttribute = NULL;
}

void tt__Dot11AvailableNetworks::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &this->tt__Dot11AvailableNetworks::SSID);
	soap_serialize_string(soap, &this->tt__Dot11AvailableNetworks::BSSID);
	if (this->tt__Dot11AvailableNetworks::AuthAndMangementSuite)
	{	int i;
		for (i = 0; i < this->tt__Dot11AvailableNetworks::__sizeAuthAndMangementSuite; i++)
		{
			soap_embedded(soap, this->tt__Dot11AvailableNetworks::AuthAndMangementSuite + i, SOAP_TYPE_tt__Dot11AuthAndMangementSuite);
		}
	}
	if (this->tt__Dot11AvailableNetworks::PairCipher)
	{	int i;
		for (i = 0; i < this->tt__Dot11AvailableNetworks::__sizePairCipher; i++)
		{
			soap_embedded(soap, this->tt__Dot11AvailableNetworks::PairCipher + i, SOAP_TYPE_tt__Dot11Cipher);
		}
	}
	if (this->tt__Dot11AvailableNetworks::GroupCipher)
	{	int i;
		for (i = 0; i < this->tt__Dot11AvailableNetworks::__sizeGroupCipher; i++)
		{
			soap_embedded(soap, this->tt__Dot11AvailableNetworks::GroupCipher + i, SOAP_TYPE_tt__Dot11Cipher);
		}
	}
	soap_serialize_PointerTott__Dot11SignalStrength(soap, &this->tt__Dot11AvailableNetworks::SignalStrength);
	soap_serialize_PointerTott__Dot11AvailableNetworksExtension(soap, &this->tt__Dot11AvailableNetworks::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11AvailableNetworks::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11AvailableNetworks(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11AvailableNetworks(struct soap *soap, const char *tag, int id, const tt__Dot11AvailableNetworks *a, const char *type)
{
	if (((tt__Dot11AvailableNetworks*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11AvailableNetworks*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11AvailableNetworks), "tt:Dot11AvailableNetworks"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &(a->tt__Dot11AvailableNetworks::SSID), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:BSSID", -1, &(a->tt__Dot11AvailableNetworks::BSSID), ""))
		return soap->error;
	if (a->tt__Dot11AvailableNetworks::AuthAndMangementSuite)
	{	int i;
		for (i = 0; i < a->tt__Dot11AvailableNetworks::__sizeAuthAndMangementSuite; i++)
			if (soap_out_tt__Dot11AuthAndMangementSuite(soap, "tt:AuthAndMangementSuite", -1, a->tt__Dot11AvailableNetworks::AuthAndMangementSuite + i, ""))
				return soap->error;
	}
	if (a->tt__Dot11AvailableNetworks::PairCipher)
	{	int i;
		for (i = 0; i < a->tt__Dot11AvailableNetworks::__sizePairCipher; i++)
			if (soap_out_tt__Dot11Cipher(soap, "tt:PairCipher", -1, a->tt__Dot11AvailableNetworks::PairCipher + i, ""))
				return soap->error;
	}
	if (a->tt__Dot11AvailableNetworks::GroupCipher)
	{	int i;
		for (i = 0; i < a->tt__Dot11AvailableNetworks::__sizeGroupCipher; i++)
			if (soap_out_tt__Dot11Cipher(soap, "tt:GroupCipher", -1, a->tt__Dot11AvailableNetworks::GroupCipher + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", -1, &(a->tt__Dot11AvailableNetworks::SignalStrength), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11AvailableNetworksExtension(soap, "tt:Extension", -1, &(a->tt__Dot11AvailableNetworks::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11AvailableNetworks::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11AvailableNetworks(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11AvailableNetworks * SOAP_FMAC4 soap_in_tt__Dot11AvailableNetworks(struct soap *soap, const char *tag, tt__Dot11AvailableNetworks *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11AvailableNetworks *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11AvailableNetworks, sizeof(tt__Dot11AvailableNetworks), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11AvailableNetworks)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11AvailableNetworks *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11AvailableNetworks*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SSID1 = 1;
	size_t soap_flag_BSSID1 = 1;
	struct soap_blist *soap_blist_AuthAndMangementSuite1 = NULL;
	struct soap_blist *soap_blist_PairCipher1 = NULL;
	struct soap_blist *soap_blist_GroupCipher1 = NULL;
	size_t soap_flag_SignalStrength1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SSID1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SSIDType(soap, "tt:SSID", &(a->tt__Dot11AvailableNetworks::SSID), "tt:Dot11SSIDType"))
				{	soap_flag_SSID1--;
					continue;
				}
			if (soap_flag_BSSID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:BSSID", &(a->tt__Dot11AvailableNetworks::BSSID), "xsd:string"))
				{	soap_flag_BSSID1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuthAndMangementSuite", 1, NULL))
			{	if (a->tt__Dot11AvailableNetworks::AuthAndMangementSuite == NULL)
				{	if (soap_blist_AuthAndMangementSuite1 == NULL)
						soap_blist_AuthAndMangementSuite1 = soap_new_block(soap);
					a->tt__Dot11AvailableNetworks::AuthAndMangementSuite = (enum tt__Dot11AuthAndMangementSuite *)soap_push_block(soap, soap_blist_AuthAndMangementSuite1, sizeof(enum tt__Dot11AuthAndMangementSuite));
					if (a->tt__Dot11AvailableNetworks::AuthAndMangementSuite == NULL)
						return NULL;
					soap_default_tt__Dot11AuthAndMangementSuite(soap, a->tt__Dot11AvailableNetworks::AuthAndMangementSuite);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11AuthAndMangementSuite(soap, "tt:AuthAndMangementSuite", a->tt__Dot11AvailableNetworks::AuthAndMangementSuite, "tt:Dot11AuthAndMangementSuite"))
				{	a->tt__Dot11AvailableNetworks::__sizeAuthAndMangementSuite++;
					a->tt__Dot11AvailableNetworks::AuthAndMangementSuite = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PairCipher", 1, NULL))
			{	if (a->tt__Dot11AvailableNetworks::PairCipher == NULL)
				{	if (soap_blist_PairCipher1 == NULL)
						soap_blist_PairCipher1 = soap_new_block(soap);
					a->tt__Dot11AvailableNetworks::PairCipher = (enum tt__Dot11Cipher *)soap_push_block(soap, soap_blist_PairCipher1, sizeof(enum tt__Dot11Cipher));
					if (a->tt__Dot11AvailableNetworks::PairCipher == NULL)
						return NULL;
					soap_default_tt__Dot11Cipher(soap, a->tt__Dot11AvailableNetworks::PairCipher);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11Cipher(soap, "tt:PairCipher", a->tt__Dot11AvailableNetworks::PairCipher, "tt:Dot11Cipher"))
				{	a->tt__Dot11AvailableNetworks::__sizePairCipher++;
					a->tt__Dot11AvailableNetworks::PairCipher = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:GroupCipher", 1, NULL))
			{	if (a->tt__Dot11AvailableNetworks::GroupCipher == NULL)
				{	if (soap_blist_GroupCipher1 == NULL)
						soap_blist_GroupCipher1 = soap_new_block(soap);
					a->tt__Dot11AvailableNetworks::GroupCipher = (enum tt__Dot11Cipher *)soap_push_block(soap, soap_blist_GroupCipher1, sizeof(enum tt__Dot11Cipher));
					if (a->tt__Dot11AvailableNetworks::GroupCipher == NULL)
						return NULL;
					soap_default_tt__Dot11Cipher(soap, a->tt__Dot11AvailableNetworks::GroupCipher);
				}
				soap_revert(soap);
				if (soap_in_tt__Dot11Cipher(soap, "tt:GroupCipher", a->tt__Dot11AvailableNetworks::GroupCipher, "tt:Dot11Cipher"))
				{	a->tt__Dot11AvailableNetworks::__sizeGroupCipher++;
					a->tt__Dot11AvailableNetworks::GroupCipher = NULL;
					continue;
				}
			}
			if (soap_flag_SignalStrength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", &(a->tt__Dot11AvailableNetworks::SignalStrength), "tt:Dot11SignalStrength"))
				{	soap_flag_SignalStrength1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11AvailableNetworksExtension(soap, "tt:Extension", &(a->tt__Dot11AvailableNetworks::Extension), "tt:Dot11AvailableNetworksExtension"))
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
		if (a->tt__Dot11AvailableNetworks::AuthAndMangementSuite)
			soap_pop_block(soap, soap_blist_AuthAndMangementSuite1);
		if (a->tt__Dot11AvailableNetworks::__sizeAuthAndMangementSuite)
			a->tt__Dot11AvailableNetworks::AuthAndMangementSuite = (enum tt__Dot11AuthAndMangementSuite *)soap_save_block(soap, soap_blist_AuthAndMangementSuite1, NULL, 1);
		else
		{	a->tt__Dot11AvailableNetworks::AuthAndMangementSuite = NULL;
			if (soap_blist_AuthAndMangementSuite1)
				soap_end_block(soap, soap_blist_AuthAndMangementSuite1);
		}
		if (a->tt__Dot11AvailableNetworks::PairCipher)
			soap_pop_block(soap, soap_blist_PairCipher1);
		if (a->tt__Dot11AvailableNetworks::__sizePairCipher)
			a->tt__Dot11AvailableNetworks::PairCipher = (enum tt__Dot11Cipher *)soap_save_block(soap, soap_blist_PairCipher1, NULL, 1);
		else
		{	a->tt__Dot11AvailableNetworks::PairCipher = NULL;
			if (soap_blist_PairCipher1)
				soap_end_block(soap, soap_blist_PairCipher1);
		}
		if (a->tt__Dot11AvailableNetworks::GroupCipher)
			soap_pop_block(soap, soap_blist_GroupCipher1);
		if (a->tt__Dot11AvailableNetworks::__sizeGroupCipher)
			a->tt__Dot11AvailableNetworks::GroupCipher = (enum tt__Dot11Cipher *)soap_save_block(soap, soap_blist_GroupCipher1, NULL, 1);
		else
		{	a->tt__Dot11AvailableNetworks::GroupCipher = NULL;
			if (soap_blist_GroupCipher1)
				soap_end_block(soap, soap_blist_GroupCipher1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11AvailableNetworks *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11AvailableNetworks, 0, sizeof(tt__Dot11AvailableNetworks), 0, soap_copy_tt__Dot11AvailableNetworks);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot11AvailableNetworks::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11AvailableNetworks);
	if (this->soap_out(soap, tag?tag:"tt:Dot11AvailableNetworks", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11AvailableNetworks::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11AvailableNetworks(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11AvailableNetworks * SOAP_FMAC4 soap_get_tt__Dot11AvailableNetworks(struct soap *soap, tt__Dot11AvailableNetworks *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11AvailableNetworks(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11AvailableNetworks * SOAP_FMAC2 soap_instantiate_tt__Dot11AvailableNetworks(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11AvailableNetworks(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11AvailableNetworks, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11AvailableNetworks);
		if (size)
			*size = sizeof(tt__Dot11AvailableNetworks);
		((tt__Dot11AvailableNetworks*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11AvailableNetworks, n);
		if (size)
			*size = n * sizeof(tt__Dot11AvailableNetworks);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11AvailableNetworks*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11AvailableNetworks*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11AvailableNetworks(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11AvailableNetworks %p -> %p\n", q, p));
	*(tt__Dot11AvailableNetworks*)p = *(tt__Dot11AvailableNetworks*)q;
}

void tt__Dot11Status::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SSIDType(soap, &this->tt__Dot11Status::SSID);
	soap_default_string(soap, &this->tt__Dot11Status::BSSID);
	this->tt__Dot11Status::PairCipher = NULL;
	this->tt__Dot11Status::GroupCipher = NULL;
	this->tt__Dot11Status::SignalStrength = NULL;
	soap_default_tt__ReferenceToken(soap, &this->tt__Dot11Status::ActiveConfigAlias);
	this->tt__Dot11Status::__size = 0;
	this->tt__Dot11Status::__any = NULL;
	this->tt__Dot11Status::__anyAttribute = NULL;
}

void tt__Dot11Status::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &this->tt__Dot11Status::SSID);
	soap_serialize_string(soap, &this->tt__Dot11Status::BSSID);
	soap_serialize_PointerTott__Dot11Cipher(soap, &this->tt__Dot11Status::PairCipher);
	soap_serialize_PointerTott__Dot11Cipher(soap, &this->tt__Dot11Status::GroupCipher);
	soap_serialize_PointerTott__Dot11SignalStrength(soap, &this->tt__Dot11Status::SignalStrength);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__Dot11Status::ActiveConfigAlias);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11Status::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11Status(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Status(struct soap *soap, const char *tag, int id, const tt__Dot11Status *a, const char *type)
{
	if (((tt__Dot11Status*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11Status*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Status), "tt:Dot11Status"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &(a->tt__Dot11Status::SSID), ""))
		return soap->error;
	if (soap_out_string(soap, "tt:BSSID", -1, &(a->tt__Dot11Status::BSSID), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:PairCipher", -1, &(a->tt__Dot11Status::PairCipher), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:GroupCipher", -1, &(a->tt__Dot11Status::GroupCipher), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", -1, &(a->tt__Dot11Status::SignalStrength), ""))
		return soap->error;
	if (a->tt__Dot11Status::ActiveConfigAlias)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:ActiveConfigAlias", -1, &a->tt__Dot11Status::ActiveConfigAlias, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ActiveConfigAlias"))
		return soap->error;
	if (a->tt__Dot11Status::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11Status::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11Status::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11Status::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11Status(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11Status * SOAP_FMAC4 soap_in_tt__Dot11Status(struct soap *soap, const char *tag, tt__Dot11Status *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11Status *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Status, sizeof(tt__Dot11Status), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11Status)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11Status *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11Status*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SSID1 = 1;
	size_t soap_flag_BSSID1 = 1;
	size_t soap_flag_PairCipher1 = 1;
	size_t soap_flag_GroupCipher1 = 1;
	size_t soap_flag_SignalStrength1 = 1;
	size_t soap_flag_ActiveConfigAlias1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SSID1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SSIDType(soap, "tt:SSID", &(a->tt__Dot11Status::SSID), "tt:Dot11SSIDType"))
				{	soap_flag_SSID1--;
					continue;
				}
			if (soap_flag_BSSID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:BSSID", &(a->tt__Dot11Status::BSSID), "xsd:string"))
				{	soap_flag_BSSID1--;
					continue;
				}
			if (soap_flag_PairCipher1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:PairCipher", &(a->tt__Dot11Status::PairCipher), "tt:Dot11Cipher"))
				{	soap_flag_PairCipher1--;
					continue;
				}
			if (soap_flag_GroupCipher1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:GroupCipher", &(a->tt__Dot11Status::GroupCipher), "tt:Dot11Cipher"))
				{	soap_flag_GroupCipher1--;
					continue;
				}
			if (soap_flag_SignalStrength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SignalStrength(soap, "tt:SignalStrength", &(a->tt__Dot11Status::SignalStrength), "tt:Dot11SignalStrength"))
				{	soap_flag_SignalStrength1--;
					continue;
				}
			if (soap_flag_ActiveConfigAlias1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:ActiveConfigAlias", &(a->tt__Dot11Status::ActiveConfigAlias), "tt:ReferenceToken"))
				{	soap_flag_ActiveConfigAlias1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot11Status::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11Status::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11Status::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11Status::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11Status::__any, "xsd:byte"))
				{	a->tt__Dot11Status::__size++;
					a->tt__Dot11Status::__any = NULL;
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
		if (a->tt__Dot11Status::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11Status::__size)
			a->tt__Dot11Status::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11Status::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11Status *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Status, 0, sizeof(tt__Dot11Status), 0, soap_copy_tt__Dot11Status);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID1 > 0 || soap_flag_ActiveConfigAlias1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot11Status::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11Status);
	if (this->soap_out(soap, tag?tag:"tt:Dot11Status", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11Status::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11Status(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11Status * SOAP_FMAC4 soap_get_tt__Dot11Status(struct soap *soap, tt__Dot11Status *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Status(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11Status * SOAP_FMAC2 soap_instantiate_tt__Dot11Status(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11Status(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11Status, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11Status);
		if (size)
			*size = sizeof(tt__Dot11Status);
		((tt__Dot11Status*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11Status, n);
		if (size)
			*size = n * sizeof(tt__Dot11Status);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11Status*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11Status*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11Status(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11Status %p -> %p\n", q, p));
	*(tt__Dot11Status*)p = *(tt__Dot11Status*)q;
}

void tt__Dot11Capabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__Dot11Capabilities::TKIP);
	soap_default_bool(soap, &this->tt__Dot11Capabilities::ScanAvailableNetworks);
	soap_default_bool(soap, &this->tt__Dot11Capabilities::MultipleConfiguration);
	soap_default_bool(soap, &this->tt__Dot11Capabilities::AdHocStationMode);
	soap_default_bool(soap, &this->tt__Dot11Capabilities::WEP);
	this->tt__Dot11Capabilities::__size = 0;
	this->tt__Dot11Capabilities::__any = NULL;
	this->tt__Dot11Capabilities::__anyAttribute = NULL;
}

void tt__Dot11Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__Dot11Capabilities::TKIP, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__Dot11Capabilities::ScanAvailableNetworks, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__Dot11Capabilities::MultipleConfiguration, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__Dot11Capabilities::AdHocStationMode, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__Dot11Capabilities::WEP, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Capabilities(struct soap *soap, const char *tag, int id, const tt__Dot11Capabilities *a, const char *type)
{
	if (((tt__Dot11Capabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11Capabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Capabilities), "tt:Dot11Capabilities"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:TKIP", -1, &(a->tt__Dot11Capabilities::TKIP), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:ScanAvailableNetworks", -1, &(a->tt__Dot11Capabilities::ScanAvailableNetworks), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:MultipleConfiguration", -1, &(a->tt__Dot11Capabilities::MultipleConfiguration), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:AdHocStationMode", -1, &(a->tt__Dot11Capabilities::AdHocStationMode), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:WEP", -1, &(a->tt__Dot11Capabilities::WEP), ""))
		return soap->error;
	if (a->tt__Dot11Capabilities::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11Capabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11Capabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11Capabilities * SOAP_FMAC4 soap_in_tt__Dot11Capabilities(struct soap *soap, const char *tag, tt__Dot11Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Capabilities, sizeof(tt__Dot11Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11Capabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_TKIP1 = 1;
	size_t soap_flag_ScanAvailableNetworks1 = 1;
	size_t soap_flag_MultipleConfiguration1 = 1;
	size_t soap_flag_AdHocStationMode1 = 1;
	size_t soap_flag_WEP1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_TKIP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:TKIP", &(a->tt__Dot11Capabilities::TKIP), "xsd:boolean"))
				{	soap_flag_TKIP1--;
					continue;
				}
			if (soap_flag_ScanAvailableNetworks1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:ScanAvailableNetworks", &(a->tt__Dot11Capabilities::ScanAvailableNetworks), "xsd:boolean"))
				{	soap_flag_ScanAvailableNetworks1--;
					continue;
				}
			if (soap_flag_MultipleConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:MultipleConfiguration", &(a->tt__Dot11Capabilities::MultipleConfiguration), "xsd:boolean"))
				{	soap_flag_MultipleConfiguration1--;
					continue;
				}
			if (soap_flag_AdHocStationMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AdHocStationMode", &(a->tt__Dot11Capabilities::AdHocStationMode), "xsd:boolean"))
				{	soap_flag_AdHocStationMode1--;
					continue;
				}
			if (soap_flag_WEP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:WEP", &(a->tt__Dot11Capabilities::WEP), "xsd:boolean"))
				{	soap_flag_WEP1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot11Capabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11Capabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11Capabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11Capabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11Capabilities::__any, "xsd:byte"))
				{	a->tt__Dot11Capabilities::__size++;
					a->tt__Dot11Capabilities::__any = NULL;
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
		if (a->tt__Dot11Capabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11Capabilities::__size)
			a->tt__Dot11Capabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11Capabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Capabilities, 0, sizeof(tt__Dot11Capabilities), 0, soap_copy_tt__Dot11Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TKIP1 > 0 || soap_flag_ScanAvailableNetworks1 > 0 || soap_flag_MultipleConfiguration1 > 0 || soap_flag_AdHocStationMode1 > 0 || soap_flag_WEP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot11Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11Capabilities);
	if (this->soap_out(soap, tag?tag:"tt:Dot11Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11Capabilities * SOAP_FMAC4 soap_get_tt__Dot11Capabilities(struct soap *soap, tt__Dot11Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11Capabilities * SOAP_FMAC2 soap_instantiate_tt__Dot11Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11Capabilities);
		if (size)
			*size = sizeof(tt__Dot11Capabilities);
		((tt__Dot11Capabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11Capabilities, n);
		if (size)
			*size = n * sizeof(tt__Dot11Capabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11Capabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11Capabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11Capabilities %p -> %p\n", q, p));
	*(tt__Dot11Capabilities*)p = *(tt__Dot11Capabilities*)q;
}

void tt__NetworkInterfaceSetConfigurationExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceSetConfigurationExtension2::__size = 0;
	this->tt__NetworkInterfaceSetConfigurationExtension2::__any = NULL;
}

void tt__NetworkInterfaceSetConfigurationExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceSetConfigurationExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceSetConfigurationExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceSetConfigurationExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2), "tt:NetworkInterfaceSetConfigurationExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkInterfaceSetConfigurationExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceSetConfigurationExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkInterfaceSetConfigurationExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceSetConfigurationExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceSetConfigurationExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, const char *tag, tt__NetworkInterfaceSetConfigurationExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceSetConfigurationExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2, sizeof(tt__NetworkInterfaceSetConfigurationExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceSetConfigurationExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkInterfaceSetConfigurationExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkInterfaceSetConfigurationExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkInterfaceSetConfigurationExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkInterfaceSetConfigurationExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkInterfaceSetConfigurationExtension2::__any, "xsd:byte"))
				{	a->tt__NetworkInterfaceSetConfigurationExtension2::__size++;
					a->tt__NetworkInterfaceSetConfigurationExtension2::__any = NULL;
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
		if (a->tt__NetworkInterfaceSetConfigurationExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkInterfaceSetConfigurationExtension2::__size)
			a->tt__NetworkInterfaceSetConfigurationExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkInterfaceSetConfigurationExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkInterfaceSetConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2, 0, sizeof(tt__NetworkInterfaceSetConfigurationExtension2), 0, soap_copy_tt__NetworkInterfaceSetConfigurationExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkInterfaceSetConfigurationExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceSetConfigurationExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceSetConfigurationExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceSetConfigurationExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, tt__NetworkInterfaceSetConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceSetConfigurationExtension2 * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceSetConfigurationExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceSetConfigurationExtension2);
		if (size)
			*size = sizeof(tt__NetworkInterfaceSetConfigurationExtension2);
		((tt__NetworkInterfaceSetConfigurationExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceSetConfigurationExtension2, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceSetConfigurationExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceSetConfigurationExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceSetConfigurationExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceSetConfigurationExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceSetConfigurationExtension2 %p -> %p\n", q, p));
	*(tt__NetworkInterfaceSetConfigurationExtension2*)p = *(tt__NetworkInterfaceSetConfigurationExtension2*)q;
}

void tt__Dot11PSKSetExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot11PSKSetExtension::__size = 0;
	this->tt__Dot11PSKSetExtension::__any = NULL;
}

void tt__Dot11PSKSetExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11PSKSetExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11PSKSetExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSKSetExtension(struct soap *soap, const char *tag, int id, const tt__Dot11PSKSetExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11PSKSetExtension), "tt:Dot11PSKSetExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot11PSKSetExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11PSKSetExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11PSKSetExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11PSKSetExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11PSKSetExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11PSKSetExtension * SOAP_FMAC4 soap_in_tt__Dot11PSKSetExtension(struct soap *soap, const char *tag, tt__Dot11PSKSetExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11PSKSetExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSKSetExtension, sizeof(tt__Dot11PSKSetExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11PSKSetExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11PSKSetExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__Dot11PSKSetExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11PSKSetExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11PSKSetExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11PSKSetExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11PSKSetExtension::__any, "xsd:byte"))
				{	a->tt__Dot11PSKSetExtension::__size++;
					a->tt__Dot11PSKSetExtension::__any = NULL;
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
		if (a->tt__Dot11PSKSetExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11PSKSetExtension::__size)
			a->tt__Dot11PSKSetExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11PSKSetExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11PSKSetExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSKSetExtension, 0, sizeof(tt__Dot11PSKSetExtension), 0, soap_copy_tt__Dot11PSKSetExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot11PSKSetExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSKSetExtension);
	if (this->soap_out(soap, tag?tag:"tt:Dot11PSKSetExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11PSKSetExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11PSKSetExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11PSKSetExtension * SOAP_FMAC4 soap_get_tt__Dot11PSKSetExtension(struct soap *soap, tt__Dot11PSKSetExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSKSetExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11PSKSetExtension * SOAP_FMAC2 soap_instantiate_tt__Dot11PSKSetExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11PSKSetExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11PSKSetExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11PSKSetExtension);
		if (size)
			*size = sizeof(tt__Dot11PSKSetExtension);
		((tt__Dot11PSKSetExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11PSKSetExtension, n);
		if (size)
			*size = n * sizeof(tt__Dot11PSKSetExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11PSKSetExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11PSKSetExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11PSKSetExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11PSKSetExtension %p -> %p\n", q, p));
	*(tt__Dot11PSKSetExtension*)p = *(tt__Dot11PSKSetExtension*)q;
}

void tt__Dot11PSKSet::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot11PSKSet::Key = NULL;
	soap_default_tt__Dot11PSKPassphrase(soap, &this->tt__Dot11PSKSet::Passphrase);
	this->tt__Dot11PSKSet::Extension = NULL;
	this->tt__Dot11PSKSet::__anyAttribute = NULL;
}

void tt__Dot11PSKSet::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Dot11PSK(soap, &this->tt__Dot11PSKSet::Key);
	soap_serialize_tt__Dot11PSKPassphrase(soap, &this->tt__Dot11PSKSet::Passphrase);
	soap_serialize_PointerTott__Dot11PSKSetExtension(soap, &this->tt__Dot11PSKSet::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11PSKSet::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11PSKSet(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11PSKSet(struct soap *soap, const char *tag, int id, const tt__Dot11PSKSet *a, const char *type)
{
	if (((tt__Dot11PSKSet*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11PSKSet*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11PSKSet), "tt:Dot11PSKSet"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__Dot11PSK(soap, "tt:Key", -1, &(a->tt__Dot11PSKSet::Key), ""))
		return soap->error;
	if (soap_out_tt__Dot11PSKPassphrase(soap, "tt:Passphrase", -1, &(a->tt__Dot11PSKSet::Passphrase), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11PSKSetExtension(soap, "tt:Extension", -1, &(a->tt__Dot11PSKSet::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11PSKSet::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11PSKSet(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11PSKSet * SOAP_FMAC4 soap_in_tt__Dot11PSKSet(struct soap *soap, const char *tag, tt__Dot11PSKSet *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11PSKSet *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11PSKSet, sizeof(tt__Dot11PSKSet), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11PSKSet)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11PSKSet *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11PSKSet*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Key1 = 1;
	size_t soap_flag_Passphrase1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Key1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSK(soap, "tt:Key", &(a->tt__Dot11PSKSet::Key), "tt:Dot11PSK"))
				{	soap_flag_Key1--;
					continue;
				}
			if (soap_flag_Passphrase1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Dot11PSKPassphrase(soap, "tt:Passphrase", &(a->tt__Dot11PSKSet::Passphrase), "tt:Dot11PSKPassphrase"))
				{	soap_flag_Passphrase1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSKSetExtension(soap, "tt:Extension", &(a->tt__Dot11PSKSet::Extension), "tt:Dot11PSKSetExtension"))
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
	{	a = (tt__Dot11PSKSet *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11PSKSet, 0, sizeof(tt__Dot11PSKSet), 0, soap_copy_tt__Dot11PSKSet);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot11PSKSet::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11PSKSet);
	if (this->soap_out(soap, tag?tag:"tt:Dot11PSKSet", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11PSKSet::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11PSKSet(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11PSKSet * SOAP_FMAC4 soap_get_tt__Dot11PSKSet(struct soap *soap, tt__Dot11PSKSet *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11PSKSet(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11PSKSet * SOAP_FMAC2 soap_instantiate_tt__Dot11PSKSet(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11PSKSet(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11PSKSet, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11PSKSet);
		if (size)
			*size = sizeof(tt__Dot11PSKSet);
		((tt__Dot11PSKSet*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11PSKSet, n);
		if (size)
			*size = n * sizeof(tt__Dot11PSKSet);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11PSKSet*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11PSKSet*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11PSKSet(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11PSKSet %p -> %p\n", q, p));
	*(tt__Dot11PSKSet*)p = *(tt__Dot11PSKSet*)q;
}

void tt__Dot11SecurityConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot11SecurityConfigurationExtension::__size = 0;
	this->tt__Dot11SecurityConfigurationExtension::__any = NULL;
	this->tt__Dot11SecurityConfigurationExtension::__anyAttribute = NULL;
}

void tt__Dot11SecurityConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11SecurityConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11SecurityConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__Dot11SecurityConfigurationExtension *a, const char *type)
{
	if (((tt__Dot11SecurityConfigurationExtension*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11SecurityConfigurationExtension*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension), "tt:Dot11SecurityConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot11SecurityConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11SecurityConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11SecurityConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11SecurityConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11SecurityConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11SecurityConfigurationExtension * SOAP_FMAC4 soap_in_tt__Dot11SecurityConfigurationExtension(struct soap *soap, const char *tag, tt__Dot11SecurityConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11SecurityConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension, sizeof(tt__Dot11SecurityConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11SecurityConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11SecurityConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11SecurityConfigurationExtension*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot11SecurityConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11SecurityConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11SecurityConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11SecurityConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11SecurityConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__Dot11SecurityConfigurationExtension::__size++;
					a->tt__Dot11SecurityConfigurationExtension::__any = NULL;
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
		if (a->tt__Dot11SecurityConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11SecurityConfigurationExtension::__size)
			a->tt__Dot11SecurityConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11SecurityConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11SecurityConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension, 0, sizeof(tt__Dot11SecurityConfigurationExtension), 0, soap_copy_tt__Dot11SecurityConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot11SecurityConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:Dot11SecurityConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11SecurityConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11SecurityConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11SecurityConfigurationExtension * SOAP_FMAC4 soap_get_tt__Dot11SecurityConfigurationExtension(struct soap *soap, tt__Dot11SecurityConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11SecurityConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__Dot11SecurityConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11SecurityConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11SecurityConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11SecurityConfigurationExtension);
		if (size)
			*size = sizeof(tt__Dot11SecurityConfigurationExtension);
		((tt__Dot11SecurityConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11SecurityConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__Dot11SecurityConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11SecurityConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11SecurityConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11SecurityConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11SecurityConfigurationExtension %p -> %p\n", q, p));
	*(tt__Dot11SecurityConfigurationExtension*)p = *(tt__Dot11SecurityConfigurationExtension*)q;
}

void tt__Dot11SecurityConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SecurityMode(soap, &this->tt__Dot11SecurityConfiguration::Mode);
	this->tt__Dot11SecurityConfiguration::Algorithm = NULL;
	this->tt__Dot11SecurityConfiguration::PSK = NULL;
	soap_default_tt__ReferenceToken(soap, &this->tt__Dot11SecurityConfiguration::Dot1X);
	this->tt__Dot11SecurityConfiguration::Extension = NULL;
	this->tt__Dot11SecurityConfiguration::__anyAttribute = NULL;
}

void tt__Dot11SecurityConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Dot11Cipher(soap, &this->tt__Dot11SecurityConfiguration::Algorithm);
	soap_serialize_PointerTott__Dot11PSKSet(soap, &this->tt__Dot11SecurityConfiguration::PSK);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__Dot11SecurityConfiguration::Dot1X);
	soap_serialize_PointerTott__Dot11SecurityConfigurationExtension(soap, &this->tt__Dot11SecurityConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11SecurityConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11SecurityConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11SecurityConfiguration(struct soap *soap, const char *tag, int id, const tt__Dot11SecurityConfiguration *a, const char *type)
{
	if (((tt__Dot11SecurityConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11SecurityConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11SecurityConfiguration), "tt:Dot11SecurityConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Dot11SecurityMode(soap, "tt:Mode", -1, &(a->tt__Dot11SecurityConfiguration::Mode), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11Cipher(soap, "tt:Algorithm", -1, &(a->tt__Dot11SecurityConfiguration::Algorithm), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11PSKSet(soap, "tt:PSK", -1, &(a->tt__Dot11SecurityConfiguration::PSK), ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:Dot1X", -1, &(a->tt__Dot11SecurityConfiguration::Dot1X), ""))
		return soap->error;
	if (soap_out_PointerTott__Dot11SecurityConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__Dot11SecurityConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11SecurityConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11SecurityConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11SecurityConfiguration * SOAP_FMAC4 soap_in_tt__Dot11SecurityConfiguration(struct soap *soap, const char *tag, tt__Dot11SecurityConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11SecurityConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11SecurityConfiguration, sizeof(tt__Dot11SecurityConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11SecurityConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11SecurityConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11SecurityConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Algorithm1 = 1;
	size_t soap_flag_PSK1 = 1;
	size_t soap_flag_Dot1X1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SecurityMode(soap, "tt:Mode", &(a->tt__Dot11SecurityConfiguration::Mode), "tt:Dot11SecurityMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Algorithm1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11Cipher(soap, "tt:Algorithm", &(a->tt__Dot11SecurityConfiguration::Algorithm), "tt:Dot11Cipher"))
				{	soap_flag_Algorithm1--;
					continue;
				}
			if (soap_flag_PSK1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11PSKSet(soap, "tt:PSK", &(a->tt__Dot11SecurityConfiguration::PSK), "tt:Dot11PSKSet"))
				{	soap_flag_PSK1--;
					continue;
				}
			if (soap_flag_Dot1X1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Dot1X", &(a->tt__Dot11SecurityConfiguration::Dot1X), "tt:ReferenceToken"))
				{	soap_flag_Dot1X1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SecurityConfigurationExtension(soap, "tt:Extension", &(a->tt__Dot11SecurityConfiguration::Extension), "tt:Dot11SecurityConfigurationExtension"))
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
	{	a = (tt__Dot11SecurityConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11SecurityConfiguration, 0, sizeof(tt__Dot11SecurityConfiguration), 0, soap_copy_tt__Dot11SecurityConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot11SecurityConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11SecurityConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:Dot11SecurityConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11SecurityConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11SecurityConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11SecurityConfiguration * SOAP_FMAC4 soap_get_tt__Dot11SecurityConfiguration(struct soap *soap, tt__Dot11SecurityConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11SecurityConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11SecurityConfiguration * SOAP_FMAC2 soap_instantiate_tt__Dot11SecurityConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11SecurityConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11SecurityConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11SecurityConfiguration);
		if (size)
			*size = sizeof(tt__Dot11SecurityConfiguration);
		((tt__Dot11SecurityConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11SecurityConfiguration, n);
		if (size)
			*size = n * sizeof(tt__Dot11SecurityConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11SecurityConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11SecurityConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11SecurityConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11SecurityConfiguration %p -> %p\n", q, p));
	*(tt__Dot11SecurityConfiguration*)p = *(tt__Dot11SecurityConfiguration*)q;
}

void tt__Dot11Configuration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__Dot11SSIDType(soap, &this->tt__Dot11Configuration::SSID);
	soap_default_tt__Dot11StationMode(soap, &this->tt__Dot11Configuration::Mode);
	soap_default_tt__Name(soap, &this->tt__Dot11Configuration::Alias);
	soap_default_tt__NetworkInterfaceConfigPriority(soap, &this->tt__Dot11Configuration::Priority);
	this->tt__Dot11Configuration::Security = NULL;
	this->tt__Dot11Configuration::__size = 0;
	this->tt__Dot11Configuration::__any = NULL;
	this->tt__Dot11Configuration::__anyAttribute = NULL;
}

void tt__Dot11Configuration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Dot11SSIDType(soap, &this->tt__Dot11Configuration::SSID);
	soap_serialize_tt__Name(soap, &this->tt__Dot11Configuration::Alias);
	soap_serialize_tt__NetworkInterfaceConfigPriority(soap, &this->tt__Dot11Configuration::Priority);
	soap_serialize_PointerTott__Dot11SecurityConfiguration(soap, &this->tt__Dot11Configuration::Security);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot11Configuration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot11Configuration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot11Configuration(struct soap *soap, const char *tag, int id, const tt__Dot11Configuration *a, const char *type)
{
	if (((tt__Dot11Configuration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot11Configuration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot11Configuration), "tt:Dot11Configuration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__Dot11SSIDType(soap, "tt:SSID", -1, &(a->tt__Dot11Configuration::SSID), ""))
		return soap->error;
	if (soap_out_tt__Dot11StationMode(soap, "tt:Mode", -1, &(a->tt__Dot11Configuration::Mode), ""))
		return soap->error;
	if (a->tt__Dot11Configuration::Alias)
	{	if (soap_out_tt__Name(soap, "tt:Alias", -1, &a->tt__Dot11Configuration::Alias, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Alias"))
		return soap->error;
	if (a->tt__Dot11Configuration::Priority)
	{	if (soap_out_tt__NetworkInterfaceConfigPriority(soap, "tt:Priority", -1, &a->tt__Dot11Configuration::Priority, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Priority"))
		return soap->error;
	if (a->tt__Dot11Configuration::Security)
	{	if (soap_out_PointerTott__Dot11SecurityConfiguration(soap, "tt:Security", -1, &a->tt__Dot11Configuration::Security, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Security"))
		return soap->error;
	if (a->tt__Dot11Configuration::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot11Configuration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot11Configuration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot11Configuration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot11Configuration(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot11Configuration * SOAP_FMAC4 soap_in_tt__Dot11Configuration(struct soap *soap, const char *tag, tt__Dot11Configuration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot11Configuration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot11Configuration, sizeof(tt__Dot11Configuration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot11Configuration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot11Configuration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot11Configuration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SSID1 = 1;
	size_t soap_flag_Mode1 = 1;
	size_t soap_flag_Alias1 = 1;
	size_t soap_flag_Priority1 = 1;
	size_t soap_flag_Security1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SSID1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11SSIDType(soap, "tt:SSID", &(a->tt__Dot11Configuration::SSID), "tt:Dot11SSIDType"))
				{	soap_flag_SSID1--;
					continue;
				}
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Dot11StationMode(soap, "tt:Mode", &(a->tt__Dot11Configuration::Mode), "tt:Dot11StationMode"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap_flag_Alias1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Alias", &(a->tt__Dot11Configuration::Alias), "tt:Name"))
				{	soap_flag_Alias1--;
					continue;
				}
			if (soap_flag_Priority1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__NetworkInterfaceConfigPriority(soap, "tt:Priority", &(a->tt__Dot11Configuration::Priority), "tt:NetworkInterfaceConfigPriority"))
				{	soap_flag_Priority1--;
					continue;
				}
			if (soap_flag_Security1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Dot11SecurityConfiguration(soap, "tt:Security", &(a->tt__Dot11Configuration::Security), "tt:Dot11SecurityConfiguration"))
				{	soap_flag_Security1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot11Configuration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot11Configuration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot11Configuration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot11Configuration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot11Configuration::__any, "xsd:byte"))
				{	a->tt__Dot11Configuration::__size++;
					a->tt__Dot11Configuration::__any = NULL;
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
		if (a->tt__Dot11Configuration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot11Configuration::__size)
			a->tt__Dot11Configuration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot11Configuration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot11Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot11Configuration, 0, sizeof(tt__Dot11Configuration), 0, soap_copy_tt__Dot11Configuration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SSID1 > 0 || soap_flag_Mode1 > 0 || soap_flag_Alias1 > 0 || soap_flag_Priority1 > 0 || soap_flag_Security1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Dot11Configuration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot11Configuration);
	if (this->soap_out(soap, tag?tag:"tt:Dot11Configuration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot11Configuration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot11Configuration(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot11Configuration * SOAP_FMAC4 soap_get_tt__Dot11Configuration(struct soap *soap, tt__Dot11Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot11Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot11Configuration * SOAP_FMAC2 soap_instantiate_tt__Dot11Configuration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot11Configuration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot11Configuration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot11Configuration);
		if (size)
			*size = sizeof(tt__Dot11Configuration);
		((tt__Dot11Configuration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot11Configuration, n);
		if (size)
			*size = n * sizeof(tt__Dot11Configuration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot11Configuration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot11Configuration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot11Configuration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot11Configuration %p -> %p\n", q, p));
	*(tt__Dot11Configuration*)p = *(tt__Dot11Configuration*)q;
}

void tt__IPAddressFilterExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPAddressFilterExtension::__size = 0;
	this->tt__IPAddressFilterExtension::__any = NULL;
}

void tt__IPAddressFilterExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPAddressFilterExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPAddressFilterExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilterExtension(struct soap *soap, const char *tag, int id, const tt__IPAddressFilterExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddressFilterExtension), "tt:IPAddressFilterExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__IPAddressFilterExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__IPAddressFilterExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__IPAddressFilterExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__IPAddressFilterExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPAddressFilterExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPAddressFilterExtension * SOAP_FMAC4 soap_in_tt__IPAddressFilterExtension(struct soap *soap, const char *tag, tt__IPAddressFilterExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPAddressFilterExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilterExtension, sizeof(tt__IPAddressFilterExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPAddressFilterExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPAddressFilterExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__IPAddressFilterExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__IPAddressFilterExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__IPAddressFilterExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__IPAddressFilterExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__IPAddressFilterExtension::__any, "xsd:byte"))
				{	a->tt__IPAddressFilterExtension::__size++;
					a->tt__IPAddressFilterExtension::__any = NULL;
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
		if (a->tt__IPAddressFilterExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__IPAddressFilterExtension::__size)
			a->tt__IPAddressFilterExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__IPAddressFilterExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPAddressFilterExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddressFilterExtension, 0, sizeof(tt__IPAddressFilterExtension), 0, soap_copy_tt__IPAddressFilterExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IPAddressFilterExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilterExtension);
	if (this->soap_out(soap, tag?tag:"tt:IPAddressFilterExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPAddressFilterExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPAddressFilterExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPAddressFilterExtension * SOAP_FMAC4 soap_get_tt__IPAddressFilterExtension(struct soap *soap, tt__IPAddressFilterExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilterExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPAddressFilterExtension * SOAP_FMAC2 soap_instantiate_tt__IPAddressFilterExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPAddressFilterExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPAddressFilterExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPAddressFilterExtension);
		if (size)
			*size = sizeof(tt__IPAddressFilterExtension);
		((tt__IPAddressFilterExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPAddressFilterExtension, n);
		if (size)
			*size = n * sizeof(tt__IPAddressFilterExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPAddressFilterExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPAddressFilterExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPAddressFilterExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPAddressFilterExtension %p -> %p\n", q, p));
	*(tt__IPAddressFilterExtension*)p = *(tt__IPAddressFilterExtension*)q;
}

void tt__IPAddressFilter::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPAddressFilterType(soap, &this->tt__IPAddressFilter::Type);
	this->tt__IPAddressFilter::__sizeIPv4Address = 0;
	this->tt__IPAddressFilter::IPv4Address = NULL;
	this->tt__IPAddressFilter::__sizeIPv6Address = 0;
	this->tt__IPAddressFilter::IPv6Address = NULL;
	this->tt__IPAddressFilter::Extension = NULL;
	this->tt__IPAddressFilter::__anyAttribute = NULL;
}

void tt__IPAddressFilter::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__IPAddressFilter::IPv4Address)
	{	int i;
		for (i = 0; i < this->tt__IPAddressFilter::__sizeIPv4Address; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv4Address(soap, this->tt__IPAddressFilter::IPv4Address + i);
		}
	}
	if (this->tt__IPAddressFilter::IPv6Address)
	{	int i;
		for (i = 0; i < this->tt__IPAddressFilter::__sizeIPv6Address; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPAddressFilter::IPv6Address + i);
		}
	}
	soap_serialize_PointerTott__IPAddressFilterExtension(soap, &this->tt__IPAddressFilter::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPAddressFilter::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPAddressFilter(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddressFilter(struct soap *soap, const char *tag, int id, const tt__IPAddressFilter *a, const char *type)
{
	if (((tt__IPAddressFilter*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__IPAddressFilter*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddressFilter), "tt:IPAddressFilter"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__IPAddressFilterType(soap, "tt:Type", -1, &(a->tt__IPAddressFilter::Type), ""))
		return soap->error;
	if (a->tt__IPAddressFilter::IPv4Address)
	{	int i;
		for (i = 0; i < a->tt__IPAddressFilter::__sizeIPv4Address; i++)
			if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:IPv4Address", -1, a->tt__IPAddressFilter::IPv4Address + i, ""))
				return soap->error;
	}
	if (a->tt__IPAddressFilter::IPv6Address)
	{	int i;
		for (i = 0; i < a->tt__IPAddressFilter::__sizeIPv6Address; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:IPv6Address", -1, a->tt__IPAddressFilter::IPv6Address + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPAddressFilterExtension(soap, "tt:Extension", -1, &(a->tt__IPAddressFilter::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPAddressFilter::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPAddressFilter(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPAddressFilter * SOAP_FMAC4 soap_in_tt__IPAddressFilter(struct soap *soap, const char *tag, tt__IPAddressFilter *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPAddressFilter *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddressFilter, sizeof(tt__IPAddressFilter), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPAddressFilter)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPAddressFilter *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__IPAddressFilter*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	struct soap_blist *soap_blist_IPv4Address1 = NULL;
	struct soap_blist *soap_blist_IPv6Address1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPAddressFilterType(soap, "tt:Type", &(a->tt__IPAddressFilter::Type), "tt:IPAddressFilterType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv4Address", 1, NULL))
			{	if (a->tt__IPAddressFilter::IPv4Address == NULL)
				{	if (soap_blist_IPv4Address1 == NULL)
						soap_blist_IPv4Address1 = soap_new_block(soap);
					a->tt__IPAddressFilter::IPv4Address = (tt__PrefixedIPv4Address **)soap_push_block(soap, soap_blist_IPv4Address1, sizeof(tt__PrefixedIPv4Address *));
					if (a->tt__IPAddressFilter::IPv4Address == NULL)
						return NULL;
					*a->tt__IPAddressFilter::IPv4Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:IPv4Address", a->tt__IPAddressFilter::IPv4Address, "tt:PrefixedIPv4Address"))
				{	a->tt__IPAddressFilter::__sizeIPv4Address++;
					a->tt__IPAddressFilter::IPv4Address = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv6Address", 1, NULL))
			{	if (a->tt__IPAddressFilter::IPv6Address == NULL)
				{	if (soap_blist_IPv6Address1 == NULL)
						soap_blist_IPv6Address1 = soap_new_block(soap);
					a->tt__IPAddressFilter::IPv6Address = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_IPv6Address1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPAddressFilter::IPv6Address == NULL)
						return NULL;
					*a->tt__IPAddressFilter::IPv6Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:IPv6Address", a->tt__IPAddressFilter::IPv6Address, "tt:PrefixedIPv6Address"))
				{	a->tt__IPAddressFilter::__sizeIPv6Address++;
					a->tt__IPAddressFilter::IPv6Address = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPAddressFilterExtension(soap, "tt:Extension", &(a->tt__IPAddressFilter::Extension), "tt:IPAddressFilterExtension"))
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
		if (a->tt__IPAddressFilter::IPv4Address)
			soap_pop_block(soap, soap_blist_IPv4Address1);
		if (a->tt__IPAddressFilter::__sizeIPv4Address)
			a->tt__IPAddressFilter::IPv4Address = (tt__PrefixedIPv4Address **)soap_save_block(soap, soap_blist_IPv4Address1, NULL, 1);
		else
		{	a->tt__IPAddressFilter::IPv4Address = NULL;
			if (soap_blist_IPv4Address1)
				soap_end_block(soap, soap_blist_IPv4Address1);
		}
		if (a->tt__IPAddressFilter::IPv6Address)
			soap_pop_block(soap, soap_blist_IPv6Address1);
		if (a->tt__IPAddressFilter::__sizeIPv6Address)
			a->tt__IPAddressFilter::IPv6Address = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_IPv6Address1, NULL, 1);
		else
		{	a->tt__IPAddressFilter::IPv6Address = NULL;
			if (soap_blist_IPv6Address1)
				soap_end_block(soap, soap_blist_IPv6Address1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPAddressFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddressFilter, 0, sizeof(tt__IPAddressFilter), 0, soap_copy_tt__IPAddressFilter);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPAddressFilter::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPAddressFilter);
	if (this->soap_out(soap, tag?tag:"tt:IPAddressFilter", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPAddressFilter::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPAddressFilter(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPAddressFilter * SOAP_FMAC4 soap_get_tt__IPAddressFilter(struct soap *soap, tt__IPAddressFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddressFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPAddressFilter * SOAP_FMAC2 soap_instantiate_tt__IPAddressFilter(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPAddressFilter(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPAddressFilter, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPAddressFilter);
		if (size)
			*size = sizeof(tt__IPAddressFilter);
		((tt__IPAddressFilter*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPAddressFilter, n);
		if (size)
			*size = n * sizeof(tt__IPAddressFilter);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPAddressFilter*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPAddressFilter*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPAddressFilter(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPAddressFilter %p -> %p\n", q, p));
	*(tt__IPAddressFilter*)p = *(tt__IPAddressFilter*)q;
}

void tt__NetworkZeroConfigurationExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkZeroConfigurationExtension2::__size = 0;
	this->tt__NetworkZeroConfigurationExtension2::__any = NULL;
}

void tt__NetworkZeroConfigurationExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkZeroConfigurationExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkZeroConfigurationExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const char *tag, int id, const tt__NetworkZeroConfigurationExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2), "tt:NetworkZeroConfigurationExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkZeroConfigurationExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkZeroConfigurationExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkZeroConfigurationExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkZeroConfigurationExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkZeroConfigurationExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkZeroConfigurationExtension2 * SOAP_FMAC4 soap_in_tt__NetworkZeroConfigurationExtension2(struct soap *soap, const char *tag, tt__NetworkZeroConfigurationExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkZeroConfigurationExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2, sizeof(tt__NetworkZeroConfigurationExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkZeroConfigurationExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkZeroConfigurationExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkZeroConfigurationExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkZeroConfigurationExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkZeroConfigurationExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkZeroConfigurationExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkZeroConfigurationExtension2::__any, "xsd:byte"))
				{	a->tt__NetworkZeroConfigurationExtension2::__size++;
					a->tt__NetworkZeroConfigurationExtension2::__any = NULL;
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
		if (a->tt__NetworkZeroConfigurationExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkZeroConfigurationExtension2::__size)
			a->tt__NetworkZeroConfigurationExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkZeroConfigurationExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkZeroConfigurationExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2, 0, sizeof(tt__NetworkZeroConfigurationExtension2), 0, soap_copy_tt__NetworkZeroConfigurationExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkZeroConfigurationExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2);
	if (this->soap_out(soap, tag?tag:"tt:NetworkZeroConfigurationExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkZeroConfigurationExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkZeroConfigurationExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkZeroConfigurationExtension2 * SOAP_FMAC4 soap_get_tt__NetworkZeroConfigurationExtension2(struct soap *soap, tt__NetworkZeroConfigurationExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfigurationExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkZeroConfigurationExtension2 * SOAP_FMAC2 soap_instantiate_tt__NetworkZeroConfigurationExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkZeroConfigurationExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkZeroConfigurationExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkZeroConfigurationExtension2);
		if (size)
			*size = sizeof(tt__NetworkZeroConfigurationExtension2);
		((tt__NetworkZeroConfigurationExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkZeroConfigurationExtension2, n);
		if (size)
			*size = n * sizeof(tt__NetworkZeroConfigurationExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkZeroConfigurationExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkZeroConfigurationExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkZeroConfigurationExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkZeroConfigurationExtension2 %p -> %p\n", q, p));
	*(tt__NetworkZeroConfigurationExtension2*)p = *(tt__NetworkZeroConfigurationExtension2*)q;
}

void tt__NetworkZeroConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkZeroConfigurationExtension::__size = 0;
	this->tt__NetworkZeroConfigurationExtension::__any = NULL;
	this->tt__NetworkZeroConfigurationExtension::__sizeAdditional = 0;
	this->tt__NetworkZeroConfigurationExtension::Additional = NULL;
	this->tt__NetworkZeroConfigurationExtension::Extension = NULL;
}

void tt__NetworkZeroConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__NetworkZeroConfigurationExtension::Additional)
	{	int i;
		for (i = 0; i < this->tt__NetworkZeroConfigurationExtension::__sizeAdditional; i++)
		{
			soap_serialize_PointerTott__NetworkZeroConfiguration(soap, this->tt__NetworkZeroConfigurationExtension::Additional + i);
		}
	}
	soap_serialize_PointerTott__NetworkZeroConfigurationExtension2(soap, &this->tt__NetworkZeroConfigurationExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkZeroConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkZeroConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__NetworkZeroConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension), "tt:NetworkZeroConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkZeroConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkZeroConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkZeroConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	if (a->tt__NetworkZeroConfigurationExtension::Additional)
	{	int i;
		for (i = 0; i < a->tt__NetworkZeroConfigurationExtension::__sizeAdditional; i++)
			if (soap_out_PointerTott__NetworkZeroConfiguration(soap, "tt:Additional", -1, a->tt__NetworkZeroConfigurationExtension::Additional + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkZeroConfigurationExtension2(soap, "tt:Extension", -1, &(a->tt__NetworkZeroConfigurationExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkZeroConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkZeroConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkZeroConfigurationExtension * SOAP_FMAC4 soap_in_tt__NetworkZeroConfigurationExtension(struct soap *soap, const char *tag, tt__NetworkZeroConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkZeroConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfigurationExtension, sizeof(tt__NetworkZeroConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkZeroConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkZeroConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	struct soap_blist *soap_blist_Additional1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Additional", 1, NULL))
			{	if (a->tt__NetworkZeroConfigurationExtension::Additional == NULL)
				{	if (soap_blist_Additional1 == NULL)
						soap_blist_Additional1 = soap_new_block(soap);
					a->tt__NetworkZeroConfigurationExtension::Additional = (tt__NetworkZeroConfiguration **)soap_push_block(soap, soap_blist_Additional1, sizeof(tt__NetworkZeroConfiguration *));
					if (a->tt__NetworkZeroConfigurationExtension::Additional == NULL)
						return NULL;
					*a->tt__NetworkZeroConfigurationExtension::Additional = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__NetworkZeroConfiguration(soap, "tt:Additional", a->tt__NetworkZeroConfigurationExtension::Additional, "tt:NetworkZeroConfiguration"))
				{	a->tt__NetworkZeroConfigurationExtension::__sizeAdditional++;
					a->tt__NetworkZeroConfigurationExtension::Additional = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkZeroConfigurationExtension2(soap, "tt:Extension", &(a->tt__NetworkZeroConfigurationExtension::Extension), "tt:NetworkZeroConfigurationExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__NetworkZeroConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkZeroConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkZeroConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkZeroConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkZeroConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__NetworkZeroConfigurationExtension::__size++;
					a->tt__NetworkZeroConfigurationExtension::__any = NULL;
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
		if (a->tt__NetworkZeroConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkZeroConfigurationExtension::__size)
			a->tt__NetworkZeroConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkZeroConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->tt__NetworkZeroConfigurationExtension::Additional)
			soap_pop_block(soap, soap_blist_Additional1);
		if (a->tt__NetworkZeroConfigurationExtension::__sizeAdditional)
			a->tt__NetworkZeroConfigurationExtension::Additional = (tt__NetworkZeroConfiguration **)soap_save_block(soap, soap_blist_Additional1, NULL, 1);
		else
		{	a->tt__NetworkZeroConfigurationExtension::Additional = NULL;
			if (soap_blist_Additional1)
				soap_end_block(soap, soap_blist_Additional1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkZeroConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfigurationExtension, 0, sizeof(tt__NetworkZeroConfigurationExtension), 0, soap_copy_tt__NetworkZeroConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkZeroConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkZeroConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkZeroConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkZeroConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkZeroConfigurationExtension * SOAP_FMAC4 soap_get_tt__NetworkZeroConfigurationExtension(struct soap *soap, tt__NetworkZeroConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkZeroConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkZeroConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkZeroConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkZeroConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkZeroConfigurationExtension);
		if (size)
			*size = sizeof(tt__NetworkZeroConfigurationExtension);
		((tt__NetworkZeroConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkZeroConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkZeroConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkZeroConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkZeroConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkZeroConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkZeroConfigurationExtension %p -> %p\n", q, p));
	*(tt__NetworkZeroConfigurationExtension*)p = *(tt__NetworkZeroConfigurationExtension*)q;
}

void tt__NetworkZeroConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__NetworkZeroConfiguration::InterfaceToken);
	soap_default_bool(soap, &this->tt__NetworkZeroConfiguration::Enabled);
	this->tt__NetworkZeroConfiguration::__sizeAddresses = 0;
	this->tt__NetworkZeroConfiguration::Addresses = NULL;
	this->tt__NetworkZeroConfiguration::Extension = NULL;
	this->tt__NetworkZeroConfiguration::__anyAttribute = NULL;
}

void tt__NetworkZeroConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__NetworkZeroConfiguration::InterfaceToken);
	soap_embedded(soap, &this->tt__NetworkZeroConfiguration::Enabled, SOAP_TYPE_bool);
	if (this->tt__NetworkZeroConfiguration::Addresses)
	{	int i;
		for (i = 0; i < this->tt__NetworkZeroConfiguration::__sizeAddresses; i++)
		{
			soap_serialize_tt__IPv4Address(soap, this->tt__NetworkZeroConfiguration::Addresses + i);
		}
	}
	soap_serialize_PointerTott__NetworkZeroConfigurationExtension(soap, &this->tt__NetworkZeroConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkZeroConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkZeroConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkZeroConfiguration(struct soap *soap, const char *tag, int id, const tt__NetworkZeroConfiguration *a, const char *type)
{
	if (((tt__NetworkZeroConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkZeroConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkZeroConfiguration), "tt:NetworkZeroConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkZeroConfiguration::InterfaceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:InterfaceToken", -1, &a->tt__NetworkZeroConfiguration::InterfaceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:InterfaceToken"))
		return soap->error;
	if (soap_out_bool(soap, "tt:Enabled", -1, &(a->tt__NetworkZeroConfiguration::Enabled), ""))
		return soap->error;
	if (a->tt__NetworkZeroConfiguration::Addresses)
	{	int i;
		for (i = 0; i < a->tt__NetworkZeroConfiguration::__sizeAddresses; i++)
			if (soap_out_tt__IPv4Address(soap, "tt:Addresses", -1, a->tt__NetworkZeroConfiguration::Addresses + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkZeroConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__NetworkZeroConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkZeroConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkZeroConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkZeroConfiguration * SOAP_FMAC4 soap_in_tt__NetworkZeroConfiguration(struct soap *soap, const char *tag, tt__NetworkZeroConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkZeroConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkZeroConfiguration, sizeof(tt__NetworkZeroConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkZeroConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkZeroConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkZeroConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_InterfaceToken1 = 1;
	size_t soap_flag_Enabled1 = 1;
	struct soap_blist *soap_blist_Addresses1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_InterfaceToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:InterfaceToken", &(a->tt__NetworkZeroConfiguration::InterfaceToken), "tt:ReferenceToken"))
				{	soap_flag_InterfaceToken1--;
					continue;
				}
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Enabled", &(a->tt__NetworkZeroConfiguration::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Addresses", 1, NULL))
			{	if (a->tt__NetworkZeroConfiguration::Addresses == NULL)
				{	if (soap_blist_Addresses1 == NULL)
						soap_blist_Addresses1 = soap_new_block(soap);
					a->tt__NetworkZeroConfiguration::Addresses = (char **)soap_push_block(soap, soap_blist_Addresses1, sizeof(char *));
					if (a->tt__NetworkZeroConfiguration::Addresses == NULL)
						return NULL;
					*a->tt__NetworkZeroConfiguration::Addresses = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv4Address(soap, "tt:Addresses", a->tt__NetworkZeroConfiguration::Addresses, "tt:IPv4Address"))
				{	a->tt__NetworkZeroConfiguration::__sizeAddresses++;
					a->tt__NetworkZeroConfiguration::Addresses = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkZeroConfigurationExtension(soap, "tt:Extension", &(a->tt__NetworkZeroConfiguration::Extension), "tt:NetworkZeroConfigurationExtension"))
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
		if (a->tt__NetworkZeroConfiguration::Addresses)
			soap_pop_block(soap, soap_blist_Addresses1);
		if (a->tt__NetworkZeroConfiguration::__sizeAddresses)
			a->tt__NetworkZeroConfiguration::Addresses = (char **)soap_save_block(soap, soap_blist_Addresses1, NULL, 1);
		else
		{	a->tt__NetworkZeroConfiguration::Addresses = NULL;
			if (soap_blist_Addresses1)
				soap_end_block(soap, soap_blist_Addresses1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkZeroConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkZeroConfiguration, 0, sizeof(tt__NetworkZeroConfiguration), 0, soap_copy_tt__NetworkZeroConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_InterfaceToken1 > 0 || soap_flag_Enabled1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkZeroConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkZeroConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:NetworkZeroConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkZeroConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkZeroConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkZeroConfiguration * SOAP_FMAC4 soap_get_tt__NetworkZeroConfiguration(struct soap *soap, tt__NetworkZeroConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkZeroConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkZeroConfiguration * SOAP_FMAC2 soap_instantiate_tt__NetworkZeroConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkZeroConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkZeroConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkZeroConfiguration);
		if (size)
			*size = sizeof(tt__NetworkZeroConfiguration);
		((tt__NetworkZeroConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkZeroConfiguration, n);
		if (size)
			*size = n * sizeof(tt__NetworkZeroConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkZeroConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkZeroConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkZeroConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkZeroConfiguration %p -> %p\n", q, p));
	*(tt__NetworkZeroConfiguration*)p = *(tt__NetworkZeroConfiguration*)q;
}

void tt__NetworkGateway::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkGateway::__sizeIPv4Address = 0;
	this->tt__NetworkGateway::IPv4Address = NULL;
	this->tt__NetworkGateway::__sizeIPv6Address = 0;
	this->tt__NetworkGateway::IPv6Address = NULL;
}

void tt__NetworkGateway::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__NetworkGateway::IPv4Address)
	{	int i;
		for (i = 0; i < this->tt__NetworkGateway::__sizeIPv4Address; i++)
		{
			soap_serialize_tt__IPv4Address(soap, this->tt__NetworkGateway::IPv4Address + i);
		}
	}
	if (this->tt__NetworkGateway::IPv6Address)
	{	int i;
		for (i = 0; i < this->tt__NetworkGateway::__sizeIPv6Address; i++)
		{
			soap_serialize_tt__IPv6Address(soap, this->tt__NetworkGateway::IPv6Address + i);
		}
	}
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkGateway::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkGateway(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkGateway(struct soap *soap, const char *tag, int id, const tt__NetworkGateway *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkGateway), "tt:NetworkGateway"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkGateway::IPv4Address)
	{	int i;
		for (i = 0; i < a->tt__NetworkGateway::__sizeIPv4Address; i++)
			if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, a->tt__NetworkGateway::IPv4Address + i, ""))
				return soap->error;
	}
	if (a->tt__NetworkGateway::IPv6Address)
	{	int i;
		for (i = 0; i < a->tt__NetworkGateway::__sizeIPv6Address; i++)
			if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, a->tt__NetworkGateway::IPv6Address + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkGateway::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkGateway(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkGateway * SOAP_FMAC4 soap_in_tt__NetworkGateway(struct soap *soap, const char *tag, tt__NetworkGateway *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkGateway *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkGateway, sizeof(tt__NetworkGateway), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkGateway)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkGateway *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_IPv4Address1 = NULL;
	struct soap_blist *soap_blist_IPv6Address1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv4Address", 1, NULL))
			{	if (a->tt__NetworkGateway::IPv4Address == NULL)
				{	if (soap_blist_IPv4Address1 == NULL)
						soap_blist_IPv4Address1 = soap_new_block(soap);
					a->tt__NetworkGateway::IPv4Address = (char **)soap_push_block(soap, soap_blist_IPv4Address1, sizeof(char *));
					if (a->tt__NetworkGateway::IPv4Address == NULL)
						return NULL;
					*a->tt__NetworkGateway::IPv4Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", a->tt__NetworkGateway::IPv4Address, "tt:IPv4Address"))
				{	a->tt__NetworkGateway::__sizeIPv4Address++;
					a->tt__NetworkGateway::IPv4Address = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IPv6Address", 1, NULL))
			{	if (a->tt__NetworkGateway::IPv6Address == NULL)
				{	if (soap_blist_IPv6Address1 == NULL)
						soap_blist_IPv6Address1 = soap_new_block(soap);
					a->tt__NetworkGateway::IPv6Address = (char **)soap_push_block(soap, soap_blist_IPv6Address1, sizeof(char *));
					if (a->tt__NetworkGateway::IPv6Address == NULL)
						return NULL;
					*a->tt__NetworkGateway::IPv6Address = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", a->tt__NetworkGateway::IPv6Address, "tt:IPv6Address"))
				{	a->tt__NetworkGateway::__sizeIPv6Address++;
					a->tt__NetworkGateway::IPv6Address = NULL;
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
		if (a->tt__NetworkGateway::IPv4Address)
			soap_pop_block(soap, soap_blist_IPv4Address1);
		if (a->tt__NetworkGateway::__sizeIPv4Address)
			a->tt__NetworkGateway::IPv4Address = (char **)soap_save_block(soap, soap_blist_IPv4Address1, NULL, 1);
		else
		{	a->tt__NetworkGateway::IPv4Address = NULL;
			if (soap_blist_IPv4Address1)
				soap_end_block(soap, soap_blist_IPv4Address1);
		}
		if (a->tt__NetworkGateway::IPv6Address)
			soap_pop_block(soap, soap_blist_IPv6Address1);
		if (a->tt__NetworkGateway::__sizeIPv6Address)
			a->tt__NetworkGateway::IPv6Address = (char **)soap_save_block(soap, soap_blist_IPv6Address1, NULL, 1);
		else
		{	a->tt__NetworkGateway::IPv6Address = NULL;
			if (soap_blist_IPv6Address1)
				soap_end_block(soap, soap_blist_IPv6Address1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkGateway *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkGateway, 0, sizeof(tt__NetworkGateway), 0, soap_copy_tt__NetworkGateway);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkGateway::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkGateway);
	if (this->soap_out(soap, tag?tag:"tt:NetworkGateway", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkGateway::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkGateway(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkGateway * SOAP_FMAC4 soap_get_tt__NetworkGateway(struct soap *soap, tt__NetworkGateway *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkGateway(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkGateway * SOAP_FMAC2 soap_instantiate_tt__NetworkGateway(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkGateway(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkGateway, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkGateway);
		if (size)
			*size = sizeof(tt__NetworkGateway);
		((tt__NetworkGateway*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkGateway, n);
		if (size)
			*size = n * sizeof(tt__NetworkGateway);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkGateway*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkGateway*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkGateway(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkGateway %p -> %p\n", q, p));
	*(tt__NetworkGateway*)p = *(tt__NetworkGateway*)q;
}

void tt__IPv4NetworkInterfaceSetConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPv4NetworkInterfaceSetConfiguration::Enabled = NULL;
	this->tt__IPv4NetworkInterfaceSetConfiguration::__sizeManual = 0;
	this->tt__IPv4NetworkInterfaceSetConfiguration::Manual = NULL;
	this->tt__IPv4NetworkInterfaceSetConfiguration::DHCP = NULL;
}

void tt__IPv4NetworkInterfaceSetConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__IPv4NetworkInterfaceSetConfiguration::Enabled);
	if (this->tt__IPv4NetworkInterfaceSetConfiguration::Manual)
	{	int i;
		for (i = 0; i < this->tt__IPv4NetworkInterfaceSetConfiguration::__sizeManual; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv4Address(soap, this->tt__IPv4NetworkInterfaceSetConfiguration::Manual + i);
		}
	}
	soap_serialize_PointerTobool(soap, &this->tt__IPv4NetworkInterfaceSetConfiguration::DHCP);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv4NetworkInterfaceSetConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv4NetworkInterfaceSetConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const tt__IPv4NetworkInterfaceSetConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration), "tt:IPv4NetworkInterfaceSetConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:Enabled", -1, &(a->tt__IPv4NetworkInterfaceSetConfiguration::Enabled), ""))
		return soap->error;
	if (a->tt__IPv4NetworkInterfaceSetConfiguration::Manual)
	{	int i;
		for (i = 0; i < a->tt__IPv4NetworkInterfaceSetConfiguration::__sizeManual; i++)
			if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:Manual", -1, a->tt__IPv4NetworkInterfaceSetConfiguration::Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:DHCP", -1, &(a->tt__IPv4NetworkInterfaceSetConfiguration::DHCP), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPv4NetworkInterfaceSetConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv4NetworkInterfaceSetConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv4NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, tt__IPv4NetworkInterfaceSetConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv4NetworkInterfaceSetConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration, sizeof(tt__IPv4NetworkInterfaceSetConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv4NetworkInterfaceSetConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Enabled1 = 1;
	struct soap_blist *soap_blist_Manual1 = NULL;
	size_t soap_flag_DHCP1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Enabled", &(a->tt__IPv4NetworkInterfaceSetConfiguration::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->tt__IPv4NetworkInterfaceSetConfiguration::Manual == NULL)
				{	if (soap_blist_Manual1 == NULL)
						soap_blist_Manual1 = soap_new_block(soap);
					a->tt__IPv4NetworkInterfaceSetConfiguration::Manual = (tt__PrefixedIPv4Address **)soap_push_block(soap, soap_blist_Manual1, sizeof(tt__PrefixedIPv4Address *));
					if (a->tt__IPv4NetworkInterfaceSetConfiguration::Manual == NULL)
						return NULL;
					*a->tt__IPv4NetworkInterfaceSetConfiguration::Manual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:Manual", a->tt__IPv4NetworkInterfaceSetConfiguration::Manual, "tt:PrefixedIPv4Address"))
				{	a->tt__IPv4NetworkInterfaceSetConfiguration::__sizeManual++;
					a->tt__IPv4NetworkInterfaceSetConfiguration::Manual = NULL;
					continue;
				}
			}
			if (soap_flag_DHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:DHCP", &(a->tt__IPv4NetworkInterfaceSetConfiguration::DHCP), "xsd:boolean"))
				{	soap_flag_DHCP1--;
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
		if (a->tt__IPv4NetworkInterfaceSetConfiguration::Manual)
			soap_pop_block(soap, soap_blist_Manual1);
		if (a->tt__IPv4NetworkInterfaceSetConfiguration::__sizeManual)
			a->tt__IPv4NetworkInterfaceSetConfiguration::Manual = (tt__PrefixedIPv4Address **)soap_save_block(soap, soap_blist_Manual1, NULL, 1);
		else
		{	a->tt__IPv4NetworkInterfaceSetConfiguration::Manual = NULL;
			if (soap_blist_Manual1)
				soap_end_block(soap, soap_blist_Manual1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPv4NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration, 0, sizeof(tt__IPv4NetworkInterfaceSetConfiguration), 0, soap_copy_tt__IPv4NetworkInterfaceSetConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IPv4NetworkInterfaceSetConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:IPv4NetworkInterfaceSetConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv4NetworkInterfaceSetConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv4NetworkInterfaceSetConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv4NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, tt__IPv4NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv4NetworkInterfaceSetConfiguration * SOAP_FMAC2 soap_instantiate_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv4NetworkInterfaceSetConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv4NetworkInterfaceSetConfiguration);
		if (size)
			*size = sizeof(tt__IPv4NetworkInterfaceSetConfiguration);
		((tt__IPv4NetworkInterfaceSetConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv4NetworkInterfaceSetConfiguration, n);
		if (size)
			*size = n * sizeof(tt__IPv4NetworkInterfaceSetConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv4NetworkInterfaceSetConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv4NetworkInterfaceSetConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv4NetworkInterfaceSetConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv4NetworkInterfaceSetConfiguration %p -> %p\n", q, p));
	*(tt__IPv4NetworkInterfaceSetConfiguration*)p = *(tt__IPv4NetworkInterfaceSetConfiguration*)q;
}

void tt__IPv6NetworkInterfaceSetConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPv6NetworkInterfaceSetConfiguration::Enabled = NULL;
	this->tt__IPv6NetworkInterfaceSetConfiguration::AcceptRouterAdvert = NULL;
	this->tt__IPv6NetworkInterfaceSetConfiguration::__sizeManual = 0;
	this->tt__IPv6NetworkInterfaceSetConfiguration::Manual = NULL;
	this->tt__IPv6NetworkInterfaceSetConfiguration::DHCP = NULL;
}

void tt__IPv6NetworkInterfaceSetConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__IPv6NetworkInterfaceSetConfiguration::Enabled);
	soap_serialize_PointerTobool(soap, &this->tt__IPv6NetworkInterfaceSetConfiguration::AcceptRouterAdvert);
	if (this->tt__IPv6NetworkInterfaceSetConfiguration::Manual)
	{	int i;
		for (i = 0; i < this->tt__IPv6NetworkInterfaceSetConfiguration::__sizeManual; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPv6NetworkInterfaceSetConfiguration::Manual + i);
		}
	}
	soap_serialize_PointerTott__IPv6DHCPConfiguration(soap, &this->tt__IPv6NetworkInterfaceSetConfiguration::DHCP);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6NetworkInterfaceSetConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6NetworkInterfaceSetConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const tt__IPv6NetworkInterfaceSetConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration), "tt:IPv6NetworkInterfaceSetConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:Enabled", -1, &(a->tt__IPv6NetworkInterfaceSetConfiguration::Enabled), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:AcceptRouterAdvert", -1, &(a->tt__IPv6NetworkInterfaceSetConfiguration::AcceptRouterAdvert), ""))
		return soap->error;
	if (a->tt__IPv6NetworkInterfaceSetConfiguration::Manual)
	{	int i;
		for (i = 0; i < a->tt__IPv6NetworkInterfaceSetConfiguration::__sizeManual; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:Manual", -1, a->tt__IPv6NetworkInterfaceSetConfiguration::Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPv6DHCPConfiguration(soap, "tt:DHCP", -1, &(a->tt__IPv6NetworkInterfaceSetConfiguration::DHCP), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPv6NetworkInterfaceSetConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6NetworkInterfaceSetConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, tt__IPv6NetworkInterfaceSetConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv6NetworkInterfaceSetConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration, sizeof(tt__IPv6NetworkInterfaceSetConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv6NetworkInterfaceSetConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Enabled1 = 1;
	size_t soap_flag_AcceptRouterAdvert1 = 1;
	struct soap_blist *soap_blist_Manual1 = NULL;
	size_t soap_flag_DHCP1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Enabled", &(a->tt__IPv6NetworkInterfaceSetConfiguration::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap_flag_AcceptRouterAdvert1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:AcceptRouterAdvert", &(a->tt__IPv6NetworkInterfaceSetConfiguration::AcceptRouterAdvert), "xsd:boolean"))
				{	soap_flag_AcceptRouterAdvert1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->tt__IPv6NetworkInterfaceSetConfiguration::Manual == NULL)
				{	if (soap_blist_Manual1 == NULL)
						soap_blist_Manual1 = soap_new_block(soap);
					a->tt__IPv6NetworkInterfaceSetConfiguration::Manual = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_Manual1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPv6NetworkInterfaceSetConfiguration::Manual == NULL)
						return NULL;
					*a->tt__IPv6NetworkInterfaceSetConfiguration::Manual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:Manual", a->tt__IPv6NetworkInterfaceSetConfiguration::Manual, "tt:PrefixedIPv6Address"))
				{	a->tt__IPv6NetworkInterfaceSetConfiguration::__sizeManual++;
					a->tt__IPv6NetworkInterfaceSetConfiguration::Manual = NULL;
					continue;
				}
			}
			if (soap_flag_DHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6DHCPConfiguration(soap, "tt:DHCP", &(a->tt__IPv6NetworkInterfaceSetConfiguration::DHCP), "tt:IPv6DHCPConfiguration"))
				{	soap_flag_DHCP1--;
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
		if (a->tt__IPv6NetworkInterfaceSetConfiguration::Manual)
			soap_pop_block(soap, soap_blist_Manual1);
		if (a->tt__IPv6NetworkInterfaceSetConfiguration::__sizeManual)
			a->tt__IPv6NetworkInterfaceSetConfiguration::Manual = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_Manual1, NULL, 1);
		else
		{	a->tt__IPv6NetworkInterfaceSetConfiguration::Manual = NULL;
			if (soap_blist_Manual1)
				soap_end_block(soap, soap_blist_Manual1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPv6NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration, 0, sizeof(tt__IPv6NetworkInterfaceSetConfiguration), 0, soap_copy_tt__IPv6NetworkInterfaceSetConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IPv6NetworkInterfaceSetConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:IPv6NetworkInterfaceSetConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6NetworkInterfaceSetConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6NetworkInterfaceSetConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, tt__IPv6NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6NetworkInterfaceSetConfiguration * SOAP_FMAC2 soap_instantiate_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6NetworkInterfaceSetConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6NetworkInterfaceSetConfiguration);
		if (size)
			*size = sizeof(tt__IPv6NetworkInterfaceSetConfiguration);
		((tt__IPv6NetworkInterfaceSetConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6NetworkInterfaceSetConfiguration, n);
		if (size)
			*size = n * sizeof(tt__IPv6NetworkInterfaceSetConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6NetworkInterfaceSetConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6NetworkInterfaceSetConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6NetworkInterfaceSetConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6NetworkInterfaceSetConfiguration %p -> %p\n", q, p));
	*(tt__IPv6NetworkInterfaceSetConfiguration*)p = *(tt__IPv6NetworkInterfaceSetConfiguration*)q;
}

void tt__NetworkInterfaceSetConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceSetConfigurationExtension::__size = 0;
	this->tt__NetworkInterfaceSetConfigurationExtension::__any = NULL;
	this->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot3 = 0;
	this->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = NULL;
	this->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot11 = 0;
	this->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = NULL;
	this->tt__NetworkInterfaceSetConfigurationExtension::Extension = NULL;
}

void tt__NetworkInterfaceSetConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__NetworkInterfaceSetConfigurationExtension::Dot3)
	{	int i;
		for (i = 0; i < this->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot3; i++)
		{
			soap_serialize_PointerTott__Dot3Configuration(soap, this->tt__NetworkInterfaceSetConfigurationExtension::Dot3 + i);
		}
	}
	if (this->tt__NetworkInterfaceSetConfigurationExtension::Dot11)
	{	int i;
		for (i = 0; i < this->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot11; i++)
		{
			soap_serialize_PointerTott__Dot11Configuration(soap, this->tt__NetworkInterfaceSetConfigurationExtension::Dot11 + i);
		}
	}
	soap_serialize_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, &this->tt__NetworkInterfaceSetConfigurationExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceSetConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceSetConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceSetConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension), "tt:NetworkInterfaceSetConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkInterfaceSetConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceSetConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkInterfaceSetConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot3)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot3; i++)
			if (soap_out_PointerTott__Dot3Configuration(soap, "tt:Dot3", -1, a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 + i, ""))
				return soap->error;
	}
	if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot11)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot11; i++)
			if (soap_out_PointerTott__Dot11Configuration(soap, "tt:Dot11", -1, a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, "tt:Extension", -1, &(a->tt__NetworkInterfaceSetConfigurationExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceSetConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceSetConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfigurationExtension * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, const char *tag, tt__NetworkInterfaceSetConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceSetConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension, sizeof(tt__NetworkInterfaceSetConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceSetConfigurationExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	struct soap_blist *soap_blist_Dot31 = NULL;
	struct soap_blist *soap_blist_Dot111 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot3", 1, NULL))
			{	if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 == NULL)
				{	if (soap_blist_Dot31 == NULL)
						soap_blist_Dot31 = soap_new_block(soap);
					a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = (tt__Dot3Configuration **)soap_push_block(soap, soap_blist_Dot31, sizeof(tt__Dot3Configuration *));
					if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 == NULL)
						return NULL;
					*a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Dot3Configuration(soap, "tt:Dot3", a->tt__NetworkInterfaceSetConfigurationExtension::Dot3, "tt:Dot3Configuration"))
				{	a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot3++;
					a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot11", 1, NULL))
			{	if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 == NULL)
				{	if (soap_blist_Dot111 == NULL)
						soap_blist_Dot111 = soap_new_block(soap);
					a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = (tt__Dot11Configuration **)soap_push_block(soap, soap_blist_Dot111, sizeof(tt__Dot11Configuration *));
					if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 == NULL)
						return NULL;
					*a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Dot11Configuration(soap, "tt:Dot11", a->tt__NetworkInterfaceSetConfigurationExtension::Dot11, "tt:Dot11Configuration"))
				{	a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot11++;
					a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceSetConfigurationExtension2(soap, "tt:Extension", &(a->tt__NetworkInterfaceSetConfigurationExtension::Extension), "tt:NetworkInterfaceSetConfigurationExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__NetworkInterfaceSetConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkInterfaceSetConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkInterfaceSetConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkInterfaceSetConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkInterfaceSetConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__NetworkInterfaceSetConfigurationExtension::__size++;
					a->tt__NetworkInterfaceSetConfigurationExtension::__any = NULL;
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
		if (a->tt__NetworkInterfaceSetConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkInterfaceSetConfigurationExtension::__size)
			a->tt__NetworkInterfaceSetConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkInterfaceSetConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot3)
			soap_pop_block(soap, soap_blist_Dot31);
		if (a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot3)
			a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = (tt__Dot3Configuration **)soap_save_block(soap, soap_blist_Dot31, NULL, 1);
		else
		{	a->tt__NetworkInterfaceSetConfigurationExtension::Dot3 = NULL;
			if (soap_blist_Dot31)
				soap_end_block(soap, soap_blist_Dot31);
		}
		if (a->tt__NetworkInterfaceSetConfigurationExtension::Dot11)
			soap_pop_block(soap, soap_blist_Dot111);
		if (a->tt__NetworkInterfaceSetConfigurationExtension::__sizeDot11)
			a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = (tt__Dot11Configuration **)soap_save_block(soap, soap_blist_Dot111, NULL, 1);
		else
		{	a->tt__NetworkInterfaceSetConfigurationExtension::Dot11 = NULL;
			if (soap_blist_Dot111)
				soap_end_block(soap, soap_blist_Dot111);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkInterfaceSetConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension, 0, sizeof(tt__NetworkInterfaceSetConfigurationExtension), 0, soap_copy_tt__NetworkInterfaceSetConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkInterfaceSetConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceSetConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceSetConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceSetConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfigurationExtension * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, tt__NetworkInterfaceSetConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceSetConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceSetConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceSetConfigurationExtension);
		if (size)
			*size = sizeof(tt__NetworkInterfaceSetConfigurationExtension);
		((tt__NetworkInterfaceSetConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceSetConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceSetConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceSetConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceSetConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceSetConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceSetConfigurationExtension %p -> %p\n", q, p));
	*(tt__NetworkInterfaceSetConfigurationExtension*)p = *(tt__NetworkInterfaceSetConfigurationExtension*)q;
}

void tt__NetworkInterfaceSetConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceSetConfiguration::Enabled = NULL;
	this->tt__NetworkInterfaceSetConfiguration::Link = NULL;
	this->tt__NetworkInterfaceSetConfiguration::MTU = NULL;
	this->tt__NetworkInterfaceSetConfiguration::IPv4 = NULL;
	this->tt__NetworkInterfaceSetConfiguration::IPv6 = NULL;
	this->tt__NetworkInterfaceSetConfiguration::Extension = NULL;
	this->tt__NetworkInterfaceSetConfiguration::__anyAttribute = NULL;
}

void tt__NetworkInterfaceSetConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__NetworkInterfaceSetConfiguration::Enabled);
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &this->tt__NetworkInterfaceSetConfiguration::Link);
	soap_serialize_PointerToint(soap, &this->tt__NetworkInterfaceSetConfiguration::MTU);
	soap_serialize_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, &this->tt__NetworkInterfaceSetConfiguration::IPv4);
	soap_serialize_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, &this->tt__NetworkInterfaceSetConfiguration::IPv6);
	soap_serialize_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, &this->tt__NetworkInterfaceSetConfiguration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceSetConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceSetConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceSetConfiguration *a, const char *type)
{
	if (((tt__NetworkInterfaceSetConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkInterfaceSetConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration), "tt:NetworkInterfaceSetConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:Enabled", -1, &(a->tt__NetworkInterfaceSetConfiguration::Enabled), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:Link", -1, &(a->tt__NetworkInterfaceSetConfiguration::Link), ""))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:MTU", -1, &(a->tt__NetworkInterfaceSetConfiguration::MTU), ""))
		return soap->error;
	if (soap_out_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, "tt:IPv4", -1, &(a->tt__NetworkInterfaceSetConfiguration::IPv4), ""))
		return soap->error;
	if (soap_out_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, "tt:IPv6", -1, &(a->tt__NetworkInterfaceSetConfiguration::IPv6), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__NetworkInterfaceSetConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceSetConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceSetConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_in_tt__NetworkInterfaceSetConfiguration(struct soap *soap, const char *tag, tt__NetworkInterfaceSetConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceSetConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration, sizeof(tt__NetworkInterfaceSetConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceSetConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceSetConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkInterfaceSetConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Enabled1 = 1;
	size_t soap_flag_Link1 = 1;
	size_t soap_flag_MTU1 = 1;
	size_t soap_flag_IPv41 = 1;
	size_t soap_flag_IPv61 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Enabled", &(a->tt__NetworkInterfaceSetConfiguration::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap_flag_Link1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:Link", &(a->tt__NetworkInterfaceSetConfiguration::Link), "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_Link1--;
					continue;
				}
			if (soap_flag_MTU1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:MTU", &(a->tt__NetworkInterfaceSetConfiguration::MTU), "xsd:int"))
				{	soap_flag_MTU1--;
					continue;
				}
			if (soap_flag_IPv41 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv4NetworkInterfaceSetConfiguration(soap, "tt:IPv4", &(a->tt__NetworkInterfaceSetConfiguration::IPv4), "tt:IPv4NetworkInterfaceSetConfiguration"))
				{	soap_flag_IPv41--;
					continue;
				}
			if (soap_flag_IPv61 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6NetworkInterfaceSetConfiguration(soap, "tt:IPv6", &(a->tt__NetworkInterfaceSetConfiguration::IPv6), "tt:IPv6NetworkInterfaceSetConfiguration"))
				{	soap_flag_IPv61--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceSetConfigurationExtension(soap, "tt:Extension", &(a->tt__NetworkInterfaceSetConfiguration::Extension), "tt:NetworkInterfaceSetConfigurationExtension"))
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
	{	a = (tt__NetworkInterfaceSetConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration, 0, sizeof(tt__NetworkInterfaceSetConfiguration), 0, soap_copy_tt__NetworkInterfaceSetConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkInterfaceSetConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceSetConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceSetConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceSetConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceSetConfiguration * SOAP_FMAC4 soap_get_tt__NetworkInterfaceSetConfiguration(struct soap *soap, tt__NetworkInterfaceSetConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceSetConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceSetConfiguration * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceSetConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceSetConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceSetConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceSetConfiguration);
		if (size)
			*size = sizeof(tt__NetworkInterfaceSetConfiguration);
		((tt__NetworkInterfaceSetConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceSetConfiguration, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceSetConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceSetConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceSetConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceSetConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceSetConfiguration %p -> %p\n", q, p));
	*(tt__NetworkInterfaceSetConfiguration*)p = *(tt__NetworkInterfaceSetConfiguration*)q;
}

void tt__DynamicDNSInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__DynamicDNSInformationExtension::__size = 0;
	this->tt__DynamicDNSInformationExtension::__any = NULL;
}

void tt__DynamicDNSInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DynamicDNSInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DynamicDNSInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSInformationExtension(struct soap *soap, const char *tag, int id, const tt__DynamicDNSInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DynamicDNSInformationExtension), "tt:DynamicDNSInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DynamicDNSInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__DynamicDNSInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DynamicDNSInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DynamicDNSInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DynamicDNSInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__DynamicDNSInformationExtension * SOAP_FMAC4 soap_in_tt__DynamicDNSInformationExtension(struct soap *soap, const char *tag, tt__DynamicDNSInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DynamicDNSInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSInformationExtension, sizeof(tt__DynamicDNSInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DynamicDNSInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DynamicDNSInformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__DynamicDNSInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DynamicDNSInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DynamicDNSInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DynamicDNSInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DynamicDNSInformationExtension::__any, "xsd:byte"))
				{	a->tt__DynamicDNSInformationExtension::__size++;
					a->tt__DynamicDNSInformationExtension::__any = NULL;
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
		if (a->tt__DynamicDNSInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DynamicDNSInformationExtension::__size)
			a->tt__DynamicDNSInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DynamicDNSInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DynamicDNSInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DynamicDNSInformationExtension, 0, sizeof(tt__DynamicDNSInformationExtension), 0, soap_copy_tt__DynamicDNSInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__DynamicDNSInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:DynamicDNSInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DynamicDNSInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DynamicDNSInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__DynamicDNSInformationExtension * SOAP_FMAC4 soap_get_tt__DynamicDNSInformationExtension(struct soap *soap, tt__DynamicDNSInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DynamicDNSInformationExtension * SOAP_FMAC2 soap_instantiate_tt__DynamicDNSInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DynamicDNSInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DynamicDNSInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DynamicDNSInformationExtension);
		if (size)
			*size = sizeof(tt__DynamicDNSInformationExtension);
		((tt__DynamicDNSInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DynamicDNSInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__DynamicDNSInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DynamicDNSInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DynamicDNSInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DynamicDNSInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DynamicDNSInformationExtension %p -> %p\n", q, p));
	*(tt__DynamicDNSInformationExtension*)p = *(tt__DynamicDNSInformationExtension*)q;
}

void tt__DynamicDNSInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__DynamicDNSType(soap, &this->tt__DynamicDNSInformation::Type);
	soap_default_tt__DNSName(soap, &this->tt__DynamicDNSInformation::Name);
	this->tt__DynamicDNSInformation::TTL = NULL;
	this->tt__DynamicDNSInformation::Extension = NULL;
	this->tt__DynamicDNSInformation::__anyAttribute = NULL;
}

void tt__DynamicDNSInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__DNSName(soap, &this->tt__DynamicDNSInformation::Name);
	soap_serialize_PointerToxsd__duration(soap, &this->tt__DynamicDNSInformation::TTL);
	soap_serialize_PointerTott__DynamicDNSInformationExtension(soap, &this->tt__DynamicDNSInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DynamicDNSInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DynamicDNSInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DynamicDNSInformation(struct soap *soap, const char *tag, int id, const tt__DynamicDNSInformation *a, const char *type)
{
	if (((tt__DynamicDNSInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DynamicDNSInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DynamicDNSInformation), "tt:DynamicDNSInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__DynamicDNSType(soap, "tt:Type", -1, &(a->tt__DynamicDNSInformation::Type), ""))
		return soap->error;
	if (soap_out_tt__DNSName(soap, "tt:Name", -1, &(a->tt__DynamicDNSInformation::Name), ""))
		return soap->error;
	if (soap_out_PointerToxsd__duration(soap, "tt:TTL", -1, &(a->tt__DynamicDNSInformation::TTL), ""))
		return soap->error;
	if (soap_out_PointerTott__DynamicDNSInformationExtension(soap, "tt:Extension", -1, &(a->tt__DynamicDNSInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__DynamicDNSInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DynamicDNSInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__DynamicDNSInformation * SOAP_FMAC4 soap_in_tt__DynamicDNSInformation(struct soap *soap, const char *tag, tt__DynamicDNSInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DynamicDNSInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DynamicDNSInformation, sizeof(tt__DynamicDNSInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DynamicDNSInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DynamicDNSInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DynamicDNSInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_TTL1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DynamicDNSType(soap, "tt:Type", &(a->tt__DynamicDNSInformation::Type), "tt:DynamicDNSType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__DNSName(soap, "tt:Name", &(a->tt__DynamicDNSInformation::Name), "tt:DNSName"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_TTL1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__duration(soap, "tt:TTL", &(a->tt__DynamicDNSInformation::TTL), "xsd:duration"))
				{	soap_flag_TTL1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DynamicDNSInformationExtension(soap, "tt:Extension", &(a->tt__DynamicDNSInformation::Extension), "tt:DynamicDNSInformationExtension"))
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
	{	a = (tt__DynamicDNSInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DynamicDNSInformation, 0, sizeof(tt__DynamicDNSInformation), 0, soap_copy_tt__DynamicDNSInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DynamicDNSInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DynamicDNSInformation);
	if (this->soap_out(soap, tag?tag:"tt:DynamicDNSInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DynamicDNSInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DynamicDNSInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__DynamicDNSInformation * SOAP_FMAC4 soap_get_tt__DynamicDNSInformation(struct soap *soap, tt__DynamicDNSInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DynamicDNSInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DynamicDNSInformation * SOAP_FMAC2 soap_instantiate_tt__DynamicDNSInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DynamicDNSInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DynamicDNSInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DynamicDNSInformation);
		if (size)
			*size = sizeof(tt__DynamicDNSInformation);
		((tt__DynamicDNSInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DynamicDNSInformation, n);
		if (size)
			*size = n * sizeof(tt__DynamicDNSInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DynamicDNSInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DynamicDNSInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DynamicDNSInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DynamicDNSInformation %p -> %p\n", q, p));
	*(tt__DynamicDNSInformation*)p = *(tt__DynamicDNSInformation*)q;
}

void tt__NTPInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NTPInformationExtension::__size = 0;
	this->tt__NTPInformationExtension::__any = NULL;
}

void tt__NTPInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NTPInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NTPInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NTPInformationExtension(struct soap *soap, const char *tag, int id, const tt__NTPInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NTPInformationExtension), "tt:NTPInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NTPInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NTPInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NTPInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NTPInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NTPInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NTPInformationExtension * SOAP_FMAC4 soap_in_tt__NTPInformationExtension(struct soap *soap, const char *tag, tt__NTPInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NTPInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NTPInformationExtension, sizeof(tt__NTPInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NTPInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NTPInformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NTPInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NTPInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NTPInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NTPInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NTPInformationExtension::__any, "xsd:byte"))
				{	a->tt__NTPInformationExtension::__size++;
					a->tt__NTPInformationExtension::__any = NULL;
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
		if (a->tt__NTPInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NTPInformationExtension::__size)
			a->tt__NTPInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NTPInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NTPInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NTPInformationExtension, 0, sizeof(tt__NTPInformationExtension), 0, soap_copy_tt__NTPInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NTPInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NTPInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:NTPInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NTPInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NTPInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NTPInformationExtension * SOAP_FMAC4 soap_get_tt__NTPInformationExtension(struct soap *soap, tt__NTPInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NTPInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NTPInformationExtension * SOAP_FMAC2 soap_instantiate_tt__NTPInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NTPInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NTPInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NTPInformationExtension);
		if (size)
			*size = sizeof(tt__NTPInformationExtension);
		((tt__NTPInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NTPInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__NTPInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NTPInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NTPInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NTPInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NTPInformationExtension %p -> %p\n", q, p));
	*(tt__NTPInformationExtension*)p = *(tt__NTPInformationExtension*)q;
}

void tt__NTPInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__NTPInformation::FromDHCP);
	this->tt__NTPInformation::__sizeNTPFromDHCP = 0;
	this->tt__NTPInformation::NTPFromDHCP = NULL;
	this->tt__NTPInformation::__sizeNTPManual = 0;
	this->tt__NTPInformation::NTPManual = NULL;
	this->tt__NTPInformation::Extension = NULL;
	this->tt__NTPInformation::__anyAttribute = NULL;
}

void tt__NTPInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__NTPInformation::FromDHCP, SOAP_TYPE_bool);
	if (this->tt__NTPInformation::NTPFromDHCP)
	{	int i;
		for (i = 0; i < this->tt__NTPInformation::__sizeNTPFromDHCP; i++)
		{
			soap_serialize_PointerTott__NetworkHost(soap, this->tt__NTPInformation::NTPFromDHCP + i);
		}
	}
	if (this->tt__NTPInformation::NTPManual)
	{	int i;
		for (i = 0; i < this->tt__NTPInformation::__sizeNTPManual; i++)
		{
			soap_serialize_PointerTott__NetworkHost(soap, this->tt__NTPInformation::NTPManual + i);
		}
	}
	soap_serialize_PointerTott__NTPInformationExtension(soap, &this->tt__NTPInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NTPInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NTPInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NTPInformation(struct soap *soap, const char *tag, int id, const tt__NTPInformation *a, const char *type)
{
	if (((tt__NTPInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NTPInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NTPInformation), "tt:NTPInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:FromDHCP", -1, &(a->tt__NTPInformation::FromDHCP), ""))
		return soap->error;
	if (a->tt__NTPInformation::NTPFromDHCP)
	{	int i;
		for (i = 0; i < a->tt__NTPInformation::__sizeNTPFromDHCP; i++)
			if (soap_out_PointerTott__NetworkHost(soap, "tt:NTPFromDHCP", -1, a->tt__NTPInformation::NTPFromDHCP + i, ""))
				return soap->error;
	}
	if (a->tt__NTPInformation::NTPManual)
	{	int i;
		for (i = 0; i < a->tt__NTPInformation::__sizeNTPManual; i++)
			if (soap_out_PointerTott__NetworkHost(soap, "tt:NTPManual", -1, a->tt__NTPInformation::NTPManual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NTPInformationExtension(soap, "tt:Extension", -1, &(a->tt__NTPInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NTPInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NTPInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__NTPInformation * SOAP_FMAC4 soap_in_tt__NTPInformation(struct soap *soap, const char *tag, tt__NTPInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NTPInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NTPInformation, sizeof(tt__NTPInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NTPInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NTPInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NTPInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_FromDHCP1 = 1;
	struct soap_blist *soap_blist_NTPFromDHCP1 = NULL;
	struct soap_blist *soap_blist_NTPManual1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_FromDHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:FromDHCP", &(a->tt__NTPInformation::FromDHCP), "xsd:boolean"))
				{	soap_flag_FromDHCP1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:NTPFromDHCP", 1, NULL))
			{	if (a->tt__NTPInformation::NTPFromDHCP == NULL)
				{	if (soap_blist_NTPFromDHCP1 == NULL)
						soap_blist_NTPFromDHCP1 = soap_new_block(soap);
					a->tt__NTPInformation::NTPFromDHCP = (tt__NetworkHost **)soap_push_block(soap, soap_blist_NTPFromDHCP1, sizeof(tt__NetworkHost *));
					if (a->tt__NTPInformation::NTPFromDHCP == NULL)
						return NULL;
					*a->tt__NTPInformation::NTPFromDHCP = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__NetworkHost(soap, "tt:NTPFromDHCP", a->tt__NTPInformation::NTPFromDHCP, "tt:NetworkHost"))
				{	a->tt__NTPInformation::__sizeNTPFromDHCP++;
					a->tt__NTPInformation::NTPFromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:NTPManual", 1, NULL))
			{	if (a->tt__NTPInformation::NTPManual == NULL)
				{	if (soap_blist_NTPManual1 == NULL)
						soap_blist_NTPManual1 = soap_new_block(soap);
					a->tt__NTPInformation::NTPManual = (tt__NetworkHost **)soap_push_block(soap, soap_blist_NTPManual1, sizeof(tt__NetworkHost *));
					if (a->tt__NTPInformation::NTPManual == NULL)
						return NULL;
					*a->tt__NTPInformation::NTPManual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__NetworkHost(soap, "tt:NTPManual", a->tt__NTPInformation::NTPManual, "tt:NetworkHost"))
				{	a->tt__NTPInformation::__sizeNTPManual++;
					a->tt__NTPInformation::NTPManual = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NTPInformationExtension(soap, "tt:Extension", &(a->tt__NTPInformation::Extension), "tt:NTPInformationExtension"))
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
		if (a->tt__NTPInformation::NTPFromDHCP)
			soap_pop_block(soap, soap_blist_NTPFromDHCP1);
		if (a->tt__NTPInformation::__sizeNTPFromDHCP)
			a->tt__NTPInformation::NTPFromDHCP = (tt__NetworkHost **)soap_save_block(soap, soap_blist_NTPFromDHCP1, NULL, 1);
		else
		{	a->tt__NTPInformation::NTPFromDHCP = NULL;
			if (soap_blist_NTPFromDHCP1)
				soap_end_block(soap, soap_blist_NTPFromDHCP1);
		}
		if (a->tt__NTPInformation::NTPManual)
			soap_pop_block(soap, soap_blist_NTPManual1);
		if (a->tt__NTPInformation::__sizeNTPManual)
			a->tt__NTPInformation::NTPManual = (tt__NetworkHost **)soap_save_block(soap, soap_blist_NTPManual1, NULL, 1);
		else
		{	a->tt__NTPInformation::NTPManual = NULL;
			if (soap_blist_NTPManual1)
				soap_end_block(soap, soap_blist_NTPManual1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NTPInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NTPInformation, 0, sizeof(tt__NTPInformation), 0, soap_copy_tt__NTPInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NTPInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NTPInformation);
	if (this->soap_out(soap, tag?tag:"tt:NTPInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NTPInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NTPInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__NTPInformation * SOAP_FMAC4 soap_get_tt__NTPInformation(struct soap *soap, tt__NTPInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NTPInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NTPInformation * SOAP_FMAC2 soap_instantiate_tt__NTPInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NTPInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NTPInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NTPInformation);
		if (size)
			*size = sizeof(tt__NTPInformation);
		((tt__NTPInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NTPInformation, n);
		if (size)
			*size = n * sizeof(tt__NTPInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NTPInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NTPInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NTPInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NTPInformation %p -> %p\n", q, p));
	*(tt__NTPInformation*)p = *(tt__NTPInformation*)q;
}

void tt__DNSInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__DNSInformationExtension::__size = 0;
	this->tt__DNSInformationExtension::__any = NULL;
}

void tt__DNSInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DNSInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DNSInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DNSInformationExtension(struct soap *soap, const char *tag, int id, const tt__DNSInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DNSInformationExtension), "tt:DNSInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__DNSInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__DNSInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__DNSInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__DNSInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DNSInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__DNSInformationExtension * SOAP_FMAC4 soap_in_tt__DNSInformationExtension(struct soap *soap, const char *tag, tt__DNSInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DNSInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DNSInformationExtension, sizeof(tt__DNSInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DNSInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DNSInformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__DNSInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__DNSInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__DNSInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__DNSInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__DNSInformationExtension::__any, "xsd:byte"))
				{	a->tt__DNSInformationExtension::__size++;
					a->tt__DNSInformationExtension::__any = NULL;
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
		if (a->tt__DNSInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__DNSInformationExtension::__size)
			a->tt__DNSInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__DNSInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DNSInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DNSInformationExtension, 0, sizeof(tt__DNSInformationExtension), 0, soap_copy_tt__DNSInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__DNSInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DNSInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:DNSInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DNSInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DNSInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__DNSInformationExtension * SOAP_FMAC4 soap_get_tt__DNSInformationExtension(struct soap *soap, tt__DNSInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DNSInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DNSInformationExtension * SOAP_FMAC2 soap_instantiate_tt__DNSInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DNSInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DNSInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DNSInformationExtension);
		if (size)
			*size = sizeof(tt__DNSInformationExtension);
		((tt__DNSInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DNSInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__DNSInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DNSInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DNSInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DNSInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DNSInformationExtension %p -> %p\n", q, p));
	*(tt__DNSInformationExtension*)p = *(tt__DNSInformationExtension*)q;
}

void tt__DNSInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__DNSInformation::FromDHCP);
	this->tt__DNSInformation::__sizeSearchDomain = 0;
	this->tt__DNSInformation::SearchDomain = NULL;
	this->tt__DNSInformation::__sizeDNSFromDHCP = 0;
	this->tt__DNSInformation::DNSFromDHCP = NULL;
	this->tt__DNSInformation::__sizeDNSManual = 0;
	this->tt__DNSInformation::DNSManual = NULL;
	this->tt__DNSInformation::Extension = NULL;
	this->tt__DNSInformation::__anyAttribute = NULL;
}

void tt__DNSInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__DNSInformation::FromDHCP, SOAP_TYPE_bool);
	if (this->tt__DNSInformation::SearchDomain)
	{	int i;
		for (i = 0; i < this->tt__DNSInformation::__sizeSearchDomain; i++)
		{
			soap_serialize_xsd__token(soap, this->tt__DNSInformation::SearchDomain + i);
		}
	}
	if (this->tt__DNSInformation::DNSFromDHCP)
	{	int i;
		for (i = 0; i < this->tt__DNSInformation::__sizeDNSFromDHCP; i++)
		{
			soap_serialize_PointerTott__IPAddress(soap, this->tt__DNSInformation::DNSFromDHCP + i);
		}
	}
	if (this->tt__DNSInformation::DNSManual)
	{	int i;
		for (i = 0; i < this->tt__DNSInformation::__sizeDNSManual; i++)
		{
			soap_serialize_PointerTott__IPAddress(soap, this->tt__DNSInformation::DNSManual + i);
		}
	}
	soap_serialize_PointerTott__DNSInformationExtension(soap, &this->tt__DNSInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__DNSInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__DNSInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DNSInformation(struct soap *soap, const char *tag, int id, const tt__DNSInformation *a, const char *type)
{
	if (((tt__DNSInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__DNSInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DNSInformation), "tt:DNSInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:FromDHCP", -1, &(a->tt__DNSInformation::FromDHCP), ""))
		return soap->error;
	if (a->tt__DNSInformation::SearchDomain)
	{	int i;
		for (i = 0; i < a->tt__DNSInformation::__sizeSearchDomain; i++)
			if (soap_out_xsd__token(soap, "tt:SearchDomain", -1, a->tt__DNSInformation::SearchDomain + i, ""))
				return soap->error;
	}
	if (a->tt__DNSInformation::DNSFromDHCP)
	{	int i;
		for (i = 0; i < a->tt__DNSInformation::__sizeDNSFromDHCP; i++)
			if (soap_out_PointerTott__IPAddress(soap, "tt:DNSFromDHCP", -1, a->tt__DNSInformation::DNSFromDHCP + i, ""))
				return soap->error;
	}
	if (a->tt__DNSInformation::DNSManual)
	{	int i;
		for (i = 0; i < a->tt__DNSInformation::__sizeDNSManual; i++)
			if (soap_out_PointerTott__IPAddress(soap, "tt:DNSManual", -1, a->tt__DNSInformation::DNSManual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__DNSInformationExtension(soap, "tt:Extension", -1, &(a->tt__DNSInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__DNSInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__DNSInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__DNSInformation * SOAP_FMAC4 soap_in_tt__DNSInformation(struct soap *soap, const char *tag, tt__DNSInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__DNSInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DNSInformation, sizeof(tt__DNSInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__DNSInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__DNSInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__DNSInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_FromDHCP1 = 1;
	struct soap_blist *soap_blist_SearchDomain1 = NULL;
	struct soap_blist *soap_blist_DNSFromDHCP1 = NULL;
	struct soap_blist *soap_blist_DNSManual1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_FromDHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:FromDHCP", &(a->tt__DNSInformation::FromDHCP), "xsd:boolean"))
				{	soap_flag_FromDHCP1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SearchDomain", 1, NULL))
			{	if (a->tt__DNSInformation::SearchDomain == NULL)
				{	if (soap_blist_SearchDomain1 == NULL)
						soap_blist_SearchDomain1 = soap_new_block(soap);
					a->tt__DNSInformation::SearchDomain = (char **)soap_push_block(soap, soap_blist_SearchDomain1, sizeof(char *));
					if (a->tt__DNSInformation::SearchDomain == NULL)
						return NULL;
					*a->tt__DNSInformation::SearchDomain = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__token(soap, "tt:SearchDomain", a->tt__DNSInformation::SearchDomain, "xsd:token"))
				{	a->tt__DNSInformation::__sizeSearchDomain++;
					a->tt__DNSInformation::SearchDomain = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:DNSFromDHCP", 1, NULL))
			{	if (a->tt__DNSInformation::DNSFromDHCP == NULL)
				{	if (soap_blist_DNSFromDHCP1 == NULL)
						soap_blist_DNSFromDHCP1 = soap_new_block(soap);
					a->tt__DNSInformation::DNSFromDHCP = (tt__IPAddress **)soap_push_block(soap, soap_blist_DNSFromDHCP1, sizeof(tt__IPAddress *));
					if (a->tt__DNSInformation::DNSFromDHCP == NULL)
						return NULL;
					*a->tt__DNSInformation::DNSFromDHCP = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__IPAddress(soap, "tt:DNSFromDHCP", a->tt__DNSInformation::DNSFromDHCP, "tt:IPAddress"))
				{	a->tt__DNSInformation::__sizeDNSFromDHCP++;
					a->tt__DNSInformation::DNSFromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:DNSManual", 1, NULL))
			{	if (a->tt__DNSInformation::DNSManual == NULL)
				{	if (soap_blist_DNSManual1 == NULL)
						soap_blist_DNSManual1 = soap_new_block(soap);
					a->tt__DNSInformation::DNSManual = (tt__IPAddress **)soap_push_block(soap, soap_blist_DNSManual1, sizeof(tt__IPAddress *));
					if (a->tt__DNSInformation::DNSManual == NULL)
						return NULL;
					*a->tt__DNSInformation::DNSManual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__IPAddress(soap, "tt:DNSManual", a->tt__DNSInformation::DNSManual, "tt:IPAddress"))
				{	a->tt__DNSInformation::__sizeDNSManual++;
					a->tt__DNSInformation::DNSManual = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DNSInformationExtension(soap, "tt:Extension", &(a->tt__DNSInformation::Extension), "tt:DNSInformationExtension"))
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
		if (a->tt__DNSInformation::SearchDomain)
			soap_pop_block(soap, soap_blist_SearchDomain1);
		if (a->tt__DNSInformation::__sizeSearchDomain)
			a->tt__DNSInformation::SearchDomain = (char **)soap_save_block(soap, soap_blist_SearchDomain1, NULL, 1);
		else
		{	a->tt__DNSInformation::SearchDomain = NULL;
			if (soap_blist_SearchDomain1)
				soap_end_block(soap, soap_blist_SearchDomain1);
		}
		if (a->tt__DNSInformation::DNSFromDHCP)
			soap_pop_block(soap, soap_blist_DNSFromDHCP1);
		if (a->tt__DNSInformation::__sizeDNSFromDHCP)
			a->tt__DNSInformation::DNSFromDHCP = (tt__IPAddress **)soap_save_block(soap, soap_blist_DNSFromDHCP1, NULL, 1);
		else
		{	a->tt__DNSInformation::DNSFromDHCP = NULL;
			if (soap_blist_DNSFromDHCP1)
				soap_end_block(soap, soap_blist_DNSFromDHCP1);
		}
		if (a->tt__DNSInformation::DNSManual)
			soap_pop_block(soap, soap_blist_DNSManual1);
		if (a->tt__DNSInformation::__sizeDNSManual)
			a->tt__DNSInformation::DNSManual = (tt__IPAddress **)soap_save_block(soap, soap_blist_DNSManual1, NULL, 1);
		else
		{	a->tt__DNSInformation::DNSManual = NULL;
			if (soap_blist_DNSManual1)
				soap_end_block(soap, soap_blist_DNSManual1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__DNSInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DNSInformation, 0, sizeof(tt__DNSInformation), 0, soap_copy_tt__DNSInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__DNSInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__DNSInformation);
	if (this->soap_out(soap, tag?tag:"tt:DNSInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__DNSInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__DNSInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__DNSInformation * SOAP_FMAC4 soap_get_tt__DNSInformation(struct soap *soap, tt__DNSInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__DNSInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__DNSInformation * SOAP_FMAC2 soap_instantiate_tt__DNSInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__DNSInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__DNSInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__DNSInformation);
		if (size)
			*size = sizeof(tt__DNSInformation);
		((tt__DNSInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DNSInformation, n);
		if (size)
			*size = n * sizeof(tt__DNSInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__DNSInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__DNSInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__DNSInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__DNSInformation %p -> %p\n", q, p));
	*(tt__DNSInformation*)p = *(tt__DNSInformation*)q;
}

void tt__HostnameInformationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__HostnameInformationExtension::__size = 0;
	this->tt__HostnameInformationExtension::__any = NULL;
}

void tt__HostnameInformationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__HostnameInformationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__HostnameInformationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__HostnameInformationExtension(struct soap *soap, const char *tag, int id, const tt__HostnameInformationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__HostnameInformationExtension), "tt:HostnameInformationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__HostnameInformationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__HostnameInformationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__HostnameInformationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__HostnameInformationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__HostnameInformationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__HostnameInformationExtension * SOAP_FMAC4 soap_in_tt__HostnameInformationExtension(struct soap *soap, const char *tag, tt__HostnameInformationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__HostnameInformationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__HostnameInformationExtension, sizeof(tt__HostnameInformationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__HostnameInformationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__HostnameInformationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__HostnameInformationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__HostnameInformationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__HostnameInformationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__HostnameInformationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__HostnameInformationExtension::__any, "xsd:byte"))
				{	a->tt__HostnameInformationExtension::__size++;
					a->tt__HostnameInformationExtension::__any = NULL;
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
		if (a->tt__HostnameInformationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__HostnameInformationExtension::__size)
			a->tt__HostnameInformationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__HostnameInformationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__HostnameInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__HostnameInformationExtension, 0, sizeof(tt__HostnameInformationExtension), 0, soap_copy_tt__HostnameInformationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__HostnameInformationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__HostnameInformationExtension);
	if (this->soap_out(soap, tag?tag:"tt:HostnameInformationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__HostnameInformationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__HostnameInformationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__HostnameInformationExtension * SOAP_FMAC4 soap_get_tt__HostnameInformationExtension(struct soap *soap, tt__HostnameInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__HostnameInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__HostnameInformationExtension * SOAP_FMAC2 soap_instantiate_tt__HostnameInformationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__HostnameInformationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__HostnameInformationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__HostnameInformationExtension);
		if (size)
			*size = sizeof(tt__HostnameInformationExtension);
		((tt__HostnameInformationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__HostnameInformationExtension, n);
		if (size)
			*size = n * sizeof(tt__HostnameInformationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__HostnameInformationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__HostnameInformationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__HostnameInformationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__HostnameInformationExtension %p -> %p\n", q, p));
	*(tt__HostnameInformationExtension*)p = *(tt__HostnameInformationExtension*)q;
}

void tt__HostnameInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__HostnameInformation::FromDHCP);
	soap_default_xsd__token(soap, &this->tt__HostnameInformation::Name);
	this->tt__HostnameInformation::Extension = NULL;
	this->tt__HostnameInformation::__anyAttribute = NULL;
}

void tt__HostnameInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__HostnameInformation::FromDHCP, SOAP_TYPE_bool);
	soap_serialize_xsd__token(soap, &this->tt__HostnameInformation::Name);
	soap_serialize_PointerTott__HostnameInformationExtension(soap, &this->tt__HostnameInformation::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__HostnameInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__HostnameInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__HostnameInformation(struct soap *soap, const char *tag, int id, const tt__HostnameInformation *a, const char *type)
{
	if (((tt__HostnameInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__HostnameInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__HostnameInformation), "tt:HostnameInformation"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:FromDHCP", -1, &(a->tt__HostnameInformation::FromDHCP), ""))
		return soap->error;
	if (soap_out_xsd__token(soap, "tt:Name", -1, &(a->tt__HostnameInformation::Name), ""))
		return soap->error;
	if (soap_out_PointerTott__HostnameInformationExtension(soap, "tt:Extension", -1, &(a->tt__HostnameInformation::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__HostnameInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__HostnameInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__HostnameInformation * SOAP_FMAC4 soap_in_tt__HostnameInformation(struct soap *soap, const char *tag, tt__HostnameInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__HostnameInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__HostnameInformation, sizeof(tt__HostnameInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__HostnameInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__HostnameInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__HostnameInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_FromDHCP1 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_FromDHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:FromDHCP", &(a->tt__HostnameInformation::FromDHCP), "xsd:boolean"))
				{	soap_flag_FromDHCP1--;
					continue;
				}
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__token(soap, "tt:Name", &(a->tt__HostnameInformation::Name), "xsd:token"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__HostnameInformationExtension(soap, "tt:Extension", &(a->tt__HostnameInformation::Extension), "tt:HostnameInformationExtension"))
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
	{	a = (tt__HostnameInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__HostnameInformation, 0, sizeof(tt__HostnameInformation), 0, soap_copy_tt__HostnameInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FromDHCP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__HostnameInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__HostnameInformation);
	if (this->soap_out(soap, tag?tag:"tt:HostnameInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__HostnameInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__HostnameInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__HostnameInformation * SOAP_FMAC4 soap_get_tt__HostnameInformation(struct soap *soap, tt__HostnameInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__HostnameInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__HostnameInformation * SOAP_FMAC2 soap_instantiate_tt__HostnameInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__HostnameInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__HostnameInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__HostnameInformation);
		if (size)
			*size = sizeof(tt__HostnameInformation);
		((tt__HostnameInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__HostnameInformation, n);
		if (size)
			*size = n * sizeof(tt__HostnameInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__HostnameInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__HostnameInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__HostnameInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__HostnameInformation %p -> %p\n", q, p));
	*(tt__HostnameInformation*)p = *(tt__HostnameInformation*)q;
}

void tt__PrefixedIPv6Address::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPv6Address(soap, &this->tt__PrefixedIPv6Address::Address);
	soap_default_int(soap, &this->tt__PrefixedIPv6Address::PrefixLength);
}

void tt__PrefixedIPv6Address::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv6Address(soap, &this->tt__PrefixedIPv6Address::Address);
	soap_embedded(soap, &this->tt__PrefixedIPv6Address::PrefixLength, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PrefixedIPv6Address::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PrefixedIPv6Address(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PrefixedIPv6Address(struct soap *soap, const char *tag, int id, const tt__PrefixedIPv6Address *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PrefixedIPv6Address), "tt:PrefixedIPv6Address"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PrefixedIPv6Address::Address)
	{	if (soap_out_tt__IPv6Address(soap, "tt:Address", -1, &a->tt__PrefixedIPv6Address::Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:PrefixLength", -1, &(a->tt__PrefixedIPv6Address::PrefixLength), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PrefixedIPv6Address::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PrefixedIPv6Address(soap, tag, this, type);
}

SOAP_FMAC3 tt__PrefixedIPv6Address * SOAP_FMAC4 soap_in_tt__PrefixedIPv6Address(struct soap *soap, const char *tag, tt__PrefixedIPv6Address *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PrefixedIPv6Address *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PrefixedIPv6Address, sizeof(tt__PrefixedIPv6Address), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PrefixedIPv6Address)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PrefixedIPv6Address *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Address1 = 1;
	size_t soap_flag_PrefixLength1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:Address", &(a->tt__PrefixedIPv6Address::Address), "tt:IPv6Address"))
				{	soap_flag_Address1--;
					continue;
				}
			if (soap_flag_PrefixLength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:PrefixLength", &(a->tt__PrefixedIPv6Address::PrefixLength), "xsd:int"))
				{	soap_flag_PrefixLength1--;
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
	{	a = (tt__PrefixedIPv6Address *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PrefixedIPv6Address, 0, sizeof(tt__PrefixedIPv6Address), 0, soap_copy_tt__PrefixedIPv6Address);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address1 > 0 || soap_flag_PrefixLength1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PrefixedIPv6Address::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PrefixedIPv6Address);
	if (this->soap_out(soap, tag?tag:"tt:PrefixedIPv6Address", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PrefixedIPv6Address::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PrefixedIPv6Address(soap, this, tag, type);
}

SOAP_FMAC3 tt__PrefixedIPv6Address * SOAP_FMAC4 soap_get_tt__PrefixedIPv6Address(struct soap *soap, tt__PrefixedIPv6Address *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PrefixedIPv6Address(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PrefixedIPv6Address * SOAP_FMAC2 soap_instantiate_tt__PrefixedIPv6Address(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PrefixedIPv6Address(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PrefixedIPv6Address, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PrefixedIPv6Address);
		if (size)
			*size = sizeof(tt__PrefixedIPv6Address);
		((tt__PrefixedIPv6Address*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PrefixedIPv6Address, n);
		if (size)
			*size = n * sizeof(tt__PrefixedIPv6Address);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PrefixedIPv6Address*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PrefixedIPv6Address*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PrefixedIPv6Address(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PrefixedIPv6Address %p -> %p\n", q, p));
	*(tt__PrefixedIPv6Address*)p = *(tt__PrefixedIPv6Address*)q;
}

void tt__PrefixedIPv4Address::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPv4Address(soap, &this->tt__PrefixedIPv4Address::Address);
	soap_default_int(soap, &this->tt__PrefixedIPv4Address::PrefixLength);
}

void tt__PrefixedIPv4Address::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &this->tt__PrefixedIPv4Address::Address);
	soap_embedded(soap, &this->tt__PrefixedIPv4Address::PrefixLength, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PrefixedIPv4Address::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PrefixedIPv4Address(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PrefixedIPv4Address(struct soap *soap, const char *tag, int id, const tt__PrefixedIPv4Address *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PrefixedIPv4Address), "tt:PrefixedIPv4Address"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PrefixedIPv4Address::Address)
	{	if (soap_out_tt__IPv4Address(soap, "tt:Address", -1, &a->tt__PrefixedIPv4Address::Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:PrefixLength", -1, &(a->tt__PrefixedIPv4Address::PrefixLength), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PrefixedIPv4Address::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PrefixedIPv4Address(soap, tag, this, type);
}

SOAP_FMAC3 tt__PrefixedIPv4Address * SOAP_FMAC4 soap_in_tt__PrefixedIPv4Address(struct soap *soap, const char *tag, tt__PrefixedIPv4Address *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PrefixedIPv4Address *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PrefixedIPv4Address, sizeof(tt__PrefixedIPv4Address), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PrefixedIPv4Address)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PrefixedIPv4Address *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Address1 = 1;
	size_t soap_flag_PrefixLength1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:Address", &(a->tt__PrefixedIPv4Address::Address), "tt:IPv4Address"))
				{	soap_flag_Address1--;
					continue;
				}
			if (soap_flag_PrefixLength1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:PrefixLength", &(a->tt__PrefixedIPv4Address::PrefixLength), "xsd:int"))
				{	soap_flag_PrefixLength1--;
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
	{	a = (tt__PrefixedIPv4Address *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PrefixedIPv4Address, 0, sizeof(tt__PrefixedIPv4Address), 0, soap_copy_tt__PrefixedIPv4Address);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address1 > 0 || soap_flag_PrefixLength1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PrefixedIPv4Address::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PrefixedIPv4Address);
	if (this->soap_out(soap, tag?tag:"tt:PrefixedIPv4Address", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PrefixedIPv4Address::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PrefixedIPv4Address(soap, this, tag, type);
}

SOAP_FMAC3 tt__PrefixedIPv4Address * SOAP_FMAC4 soap_get_tt__PrefixedIPv4Address(struct soap *soap, tt__PrefixedIPv4Address *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PrefixedIPv4Address(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PrefixedIPv4Address * SOAP_FMAC2 soap_instantiate_tt__PrefixedIPv4Address(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PrefixedIPv4Address(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PrefixedIPv4Address, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PrefixedIPv4Address);
		if (size)
			*size = sizeof(tt__PrefixedIPv4Address);
		((tt__PrefixedIPv4Address*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PrefixedIPv4Address, n);
		if (size)
			*size = n * sizeof(tt__PrefixedIPv4Address);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PrefixedIPv4Address*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PrefixedIPv4Address*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PrefixedIPv4Address(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PrefixedIPv4Address %p -> %p\n", q, p));
	*(tt__PrefixedIPv4Address*)p = *(tt__PrefixedIPv4Address*)q;
}

void tt__IPAddress::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__IPType(soap, &this->tt__IPAddress::Type);
	soap_default_tt__IPv4Address(soap, &this->tt__IPAddress::IPv4Address);
	soap_default_tt__IPv6Address(soap, &this->tt__IPAddress::IPv6Address);
}

void tt__IPAddress::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &this->tt__IPAddress::IPv4Address);
	soap_serialize_tt__IPv6Address(soap, &this->tt__IPAddress::IPv6Address);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPAddress::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPAddress(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPAddress(struct soap *soap, const char *tag, int id, const tt__IPAddress *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPAddress), "tt:IPAddress"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__IPType(soap, "tt:Type", -1, &(a->tt__IPAddress::Type), ""))
		return soap->error;
	if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, &(a->tt__IPAddress::IPv4Address), ""))
		return soap->error;
	if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, &(a->tt__IPAddress::IPv6Address), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPAddress::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPAddress(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPAddress * SOAP_FMAC4 soap_in_tt__IPAddress(struct soap *soap, const char *tag, tt__IPAddress *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPAddress *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPAddress, sizeof(tt__IPAddress), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPAddress)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPAddress *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_IPv4Address1 = 1;
	size_t soap_flag_IPv6Address1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPType(soap, "tt:Type", &(a->tt__IPAddress::Type), "tt:IPType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_IPv4Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", &(a->tt__IPAddress::IPv4Address), "tt:IPv4Address"))
				{	soap_flag_IPv4Address1--;
					continue;
				}
			if (soap_flag_IPv6Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", &(a->tt__IPAddress::IPv6Address), "tt:IPv6Address"))
				{	soap_flag_IPv6Address1--;
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
	{	a = (tt__IPAddress *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPAddress, 0, sizeof(tt__IPAddress), 0, soap_copy_tt__IPAddress);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPAddress::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPAddress);
	if (this->soap_out(soap, tag?tag:"tt:IPAddress", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPAddress::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPAddress(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPAddress * SOAP_FMAC4 soap_get_tt__IPAddress(struct soap *soap, tt__IPAddress *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPAddress(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPAddress * SOAP_FMAC2 soap_instantiate_tt__IPAddress(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPAddress(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPAddress, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPAddress);
		if (size)
			*size = sizeof(tt__IPAddress);
		((tt__IPAddress*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPAddress, n);
		if (size)
			*size = n * sizeof(tt__IPAddress);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPAddress*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPAddress*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPAddress(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPAddress %p -> %p\n", q, p));
	*(tt__IPAddress*)p = *(tt__IPAddress*)q;
}

void tt__NetworkHostExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkHostExtension::__size = 0;
	this->tt__NetworkHostExtension::__any = NULL;
}

void tt__NetworkHostExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkHostExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkHostExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHostExtension(struct soap *soap, const char *tag, int id, const tt__NetworkHostExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkHostExtension), "tt:NetworkHostExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkHostExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkHostExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkHostExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkHostExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkHostExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkHostExtension * SOAP_FMAC4 soap_in_tt__NetworkHostExtension(struct soap *soap, const char *tag, tt__NetworkHostExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkHostExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHostExtension, sizeof(tt__NetworkHostExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkHostExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkHostExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkHostExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkHostExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkHostExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkHostExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkHostExtension::__any, "xsd:byte"))
				{	a->tt__NetworkHostExtension::__size++;
					a->tt__NetworkHostExtension::__any = NULL;
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
		if (a->tt__NetworkHostExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkHostExtension::__size)
			a->tt__NetworkHostExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkHostExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkHostExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkHostExtension, 0, sizeof(tt__NetworkHostExtension), 0, soap_copy_tt__NetworkHostExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkHostExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkHostExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkHostExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkHostExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkHostExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkHostExtension * SOAP_FMAC4 soap_get_tt__NetworkHostExtension(struct soap *soap, tt__NetworkHostExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHostExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkHostExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkHostExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkHostExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkHostExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkHostExtension);
		if (size)
			*size = sizeof(tt__NetworkHostExtension);
		((tt__NetworkHostExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkHostExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkHostExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkHostExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkHostExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkHostExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkHostExtension %p -> %p\n", q, p));
	*(tt__NetworkHostExtension*)p = *(tt__NetworkHostExtension*)q;
}

void tt__NetworkHost::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__NetworkHostType(soap, &this->tt__NetworkHost::Type);
	soap_default_tt__IPv4Address(soap, &this->tt__NetworkHost::IPv4Address);
	soap_default_tt__IPv6Address(soap, &this->tt__NetworkHost::IPv6Address);
	soap_default_tt__DNSName(soap, &this->tt__NetworkHost::DNSname);
	this->tt__NetworkHost::Extension = NULL;
	this->tt__NetworkHost::__anyAttribute = NULL;
}

void tt__NetworkHost::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__IPv4Address(soap, &this->tt__NetworkHost::IPv4Address);
	soap_serialize_tt__IPv6Address(soap, &this->tt__NetworkHost::IPv6Address);
	soap_serialize_tt__DNSName(soap, &this->tt__NetworkHost::DNSname);
	soap_serialize_PointerTott__NetworkHostExtension(soap, &this->tt__NetworkHost::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkHost::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkHost(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkHost(struct soap *soap, const char *tag, int id, const tt__NetworkHost *a, const char *type)
{
	if (((tt__NetworkHost*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkHost*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkHost), "tt:NetworkHost"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__NetworkHostType(soap, "tt:Type", -1, &(a->tt__NetworkHost::Type), ""))
		return soap->error;
	if (soap_out_tt__IPv4Address(soap, "tt:IPv4Address", -1, &(a->tt__NetworkHost::IPv4Address), ""))
		return soap->error;
	if (soap_out_tt__IPv6Address(soap, "tt:IPv6Address", -1, &(a->tt__NetworkHost::IPv6Address), ""))
		return soap->error;
	if (soap_out_tt__DNSName(soap, "tt:DNSname", -1, &(a->tt__NetworkHost::DNSname), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkHostExtension(soap, "tt:Extension", -1, &(a->tt__NetworkHost::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkHost::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkHost(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkHost * SOAP_FMAC4 soap_in_tt__NetworkHost(struct soap *soap, const char *tag, tt__NetworkHost *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkHost *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkHost, sizeof(tt__NetworkHost), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkHost)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkHost *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkHost*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Type1 = 1;
	size_t soap_flag_IPv4Address1 = 1;
	size_t soap_flag_IPv6Address1 = 1;
	size_t soap_flag_DNSname1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Type1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__NetworkHostType(soap, "tt:Type", &(a->tt__NetworkHost::Type), "tt:NetworkHostType"))
				{	soap_flag_Type1--;
					continue;
				}
			if (soap_flag_IPv4Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv4Address(soap, "tt:IPv4Address", &(a->tt__NetworkHost::IPv4Address), "tt:IPv4Address"))
				{	soap_flag_IPv4Address1--;
					continue;
				}
			if (soap_flag_IPv6Address1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__IPv6Address(soap, "tt:IPv6Address", &(a->tt__NetworkHost::IPv6Address), "tt:IPv6Address"))
				{	soap_flag_IPv6Address1--;
					continue;
				}
			if (soap_flag_DNSname1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__DNSName(soap, "tt:DNSname", &(a->tt__NetworkHost::DNSname), "tt:DNSName"))
				{	soap_flag_DNSname1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkHostExtension(soap, "tt:Extension", &(a->tt__NetworkHost::Extension), "tt:NetworkHostExtension"))
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
	{	a = (tt__NetworkHost *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkHost, 0, sizeof(tt__NetworkHost), 0, soap_copy_tt__NetworkHost);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Type1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkHost::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkHost);
	if (this->soap_out(soap, tag?tag:"tt:NetworkHost", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkHost::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkHost(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkHost * SOAP_FMAC4 soap_get_tt__NetworkHost(struct soap *soap, tt__NetworkHost *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkHost(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkHost * SOAP_FMAC2 soap_instantiate_tt__NetworkHost(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkHost(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkHost, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkHost);
		if (size)
			*size = sizeof(tt__NetworkHost);
		((tt__NetworkHost*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkHost, n);
		if (size)
			*size = n * sizeof(tt__NetworkHost);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkHost*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkHost*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkHost(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkHost %p -> %p\n", q, p));
	*(tt__NetworkHost*)p = *(tt__NetworkHost*)q;
}

void tt__NetworkProtocolExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkProtocolExtension::__size = 0;
	this->tt__NetworkProtocolExtension::__any = NULL;
}

void tt__NetworkProtocolExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkProtocolExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkProtocolExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocolExtension(struct soap *soap, const char *tag, int id, const tt__NetworkProtocolExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkProtocolExtension), "tt:NetworkProtocolExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkProtocolExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkProtocolExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkProtocolExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkProtocolExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkProtocolExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkProtocolExtension * SOAP_FMAC4 soap_in_tt__NetworkProtocolExtension(struct soap *soap, const char *tag, tt__NetworkProtocolExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkProtocolExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocolExtension, sizeof(tt__NetworkProtocolExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkProtocolExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkProtocolExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkProtocolExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkProtocolExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkProtocolExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkProtocolExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkProtocolExtension::__any, "xsd:byte"))
				{	a->tt__NetworkProtocolExtension::__size++;
					a->tt__NetworkProtocolExtension::__any = NULL;
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
		if (a->tt__NetworkProtocolExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkProtocolExtension::__size)
			a->tt__NetworkProtocolExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkProtocolExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkProtocolExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkProtocolExtension, 0, sizeof(tt__NetworkProtocolExtension), 0, soap_copy_tt__NetworkProtocolExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkProtocolExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocolExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkProtocolExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkProtocolExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkProtocolExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkProtocolExtension * SOAP_FMAC4 soap_get_tt__NetworkProtocolExtension(struct soap *soap, tt__NetworkProtocolExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocolExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkProtocolExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkProtocolExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkProtocolExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkProtocolExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkProtocolExtension);
		if (size)
			*size = sizeof(tt__NetworkProtocolExtension);
		((tt__NetworkProtocolExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkProtocolExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkProtocolExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkProtocolExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkProtocolExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkProtocolExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkProtocolExtension %p -> %p\n", q, p));
	*(tt__NetworkProtocolExtension*)p = *(tt__NetworkProtocolExtension*)q;
}

void tt__NetworkProtocol::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__NetworkProtocolType(soap, &this->tt__NetworkProtocol::Name);
	soap_default_bool(soap, &this->tt__NetworkProtocol::Enabled);
	this->tt__NetworkProtocol::__sizePort = 0;
	this->tt__NetworkProtocol::Port = NULL;
	this->tt__NetworkProtocol::Extension = NULL;
	this->tt__NetworkProtocol::__anyAttribute = NULL;
}

void tt__NetworkProtocol::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__NetworkProtocol::Enabled, SOAP_TYPE_bool);
	if (this->tt__NetworkProtocol::Port)
	{	int i;
		for (i = 0; i < this->tt__NetworkProtocol::__sizePort; i++)
		{
			soap_embedded(soap, this->tt__NetworkProtocol::Port + i, SOAP_TYPE_int);
		}
	}
	soap_serialize_PointerTott__NetworkProtocolExtension(soap, &this->tt__NetworkProtocol::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkProtocol::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkProtocol(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkProtocol(struct soap *soap, const char *tag, int id, const tt__NetworkProtocol *a, const char *type)
{
	if (((tt__NetworkProtocol*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkProtocol*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkProtocol), "tt:NetworkProtocol"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__NetworkProtocolType(soap, "tt:Name", -1, &(a->tt__NetworkProtocol::Name), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:Enabled", -1, &(a->tt__NetworkProtocol::Enabled), ""))
		return soap->error;
	if (a->tt__NetworkProtocol::Port)
	{	int i;
		for (i = 0; i < a->tt__NetworkProtocol::__sizePort; i++)
			if (soap_out_int(soap, "tt:Port", -1, a->tt__NetworkProtocol::Port + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkProtocolExtension(soap, "tt:Extension", -1, &(a->tt__NetworkProtocol::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkProtocol::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkProtocol(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkProtocol * SOAP_FMAC4 soap_in_tt__NetworkProtocol(struct soap *soap, const char *tag, tt__NetworkProtocol *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkProtocol *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkProtocol, sizeof(tt__NetworkProtocol), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkProtocol)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkProtocol *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkProtocol*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Enabled1 = 1;
	struct soap_blist *soap_blist_Port1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__NetworkProtocolType(soap, "tt:Name", &(a->tt__NetworkProtocol::Name), "tt:NetworkProtocolType"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Enabled", &(a->tt__NetworkProtocol::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Port", 1, NULL))
			{	if (a->tt__NetworkProtocol::Port == NULL)
				{	if (soap_blist_Port1 == NULL)
						soap_blist_Port1 = soap_new_block(soap);
					a->tt__NetworkProtocol::Port = (int *)soap_push_block(soap, soap_blist_Port1, sizeof(int));
					if (a->tt__NetworkProtocol::Port == NULL)
						return NULL;
					soap_default_int(soap, a->tt__NetworkProtocol::Port);
				}
				soap_revert(soap);
				if (soap_in_int(soap, "tt:Port", a->tt__NetworkProtocol::Port, "xsd:int"))
				{	a->tt__NetworkProtocol::__sizePort++;
					a->tt__NetworkProtocol::Port = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkProtocolExtension(soap, "tt:Extension", &(a->tt__NetworkProtocol::Extension), "tt:NetworkProtocolExtension"))
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
		if (a->tt__NetworkProtocol::Port)
			soap_pop_block(soap, soap_blist_Port1);
		if (a->tt__NetworkProtocol::__sizePort)
			a->tt__NetworkProtocol::Port = (int *)soap_save_block(soap, soap_blist_Port1, NULL, 1);
		else
		{	a->tt__NetworkProtocol::Port = NULL;
			if (soap_blist_Port1)
				soap_end_block(soap, soap_blist_Port1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkProtocol *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkProtocol, 0, sizeof(tt__NetworkProtocol), 0, soap_copy_tt__NetworkProtocol);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name1 > 0 || soap_flag_Enabled1 > 0 || a->tt__NetworkProtocol::__sizePort < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkProtocol::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkProtocol);
	if (this->soap_out(soap, tag?tag:"tt:NetworkProtocol", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkProtocol::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkProtocol(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkProtocol * SOAP_FMAC4 soap_get_tt__NetworkProtocol(struct soap *soap, tt__NetworkProtocol *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkProtocol(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkProtocol * SOAP_FMAC2 soap_instantiate_tt__NetworkProtocol(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkProtocol(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkProtocol, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkProtocol);
		if (size)
			*size = sizeof(tt__NetworkProtocol);
		((tt__NetworkProtocol*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkProtocol, n);
		if (size)
			*size = n * sizeof(tt__NetworkProtocol);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkProtocol*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkProtocol*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkProtocol(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkProtocol %p -> %p\n", q, p));
	*(tt__NetworkProtocol*)p = *(tt__NetworkProtocol*)q;
}

void tt__IPv6ConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPv6ConfigurationExtension::__size = 0;
	this->tt__IPv6ConfigurationExtension::__any = NULL;
}

void tt__IPv6ConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6ConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6ConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6ConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__IPv6ConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6ConfigurationExtension), "tt:IPv6ConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__IPv6ConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__IPv6ConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__IPv6ConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__IPv6ConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6ConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6ConfigurationExtension * SOAP_FMAC4 soap_in_tt__IPv6ConfigurationExtension(struct soap *soap, const char *tag, tt__IPv6ConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv6ConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6ConfigurationExtension, sizeof(tt__IPv6ConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6ConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv6ConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__IPv6ConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__IPv6ConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__IPv6ConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__IPv6ConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__IPv6ConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__IPv6ConfigurationExtension::__size++;
					a->tt__IPv6ConfigurationExtension::__any = NULL;
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
		if (a->tt__IPv6ConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__IPv6ConfigurationExtension::__size)
			a->tt__IPv6ConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__IPv6ConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPv6ConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6ConfigurationExtension, 0, sizeof(tt__IPv6ConfigurationExtension), 0, soap_copy_tt__IPv6ConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__IPv6ConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6ConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:IPv6ConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6ConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6ConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6ConfigurationExtension * SOAP_FMAC4 soap_get_tt__IPv6ConfigurationExtension(struct soap *soap, tt__IPv6ConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6ConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6ConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__IPv6ConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6ConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6ConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6ConfigurationExtension);
		if (size)
			*size = sizeof(tt__IPv6ConfigurationExtension);
		((tt__IPv6ConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6ConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__IPv6ConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6ConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6ConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6ConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6ConfigurationExtension %p -> %p\n", q, p));
	*(tt__IPv6ConfigurationExtension*)p = *(tt__IPv6ConfigurationExtension*)q;
}

void tt__IPv6Configuration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPv6Configuration::AcceptRouterAdvert = NULL;
	soap_default_tt__IPv6DHCPConfiguration(soap, &this->tt__IPv6Configuration::DHCP);
	this->tt__IPv6Configuration::__sizeManual = 0;
	this->tt__IPv6Configuration::Manual = NULL;
	this->tt__IPv6Configuration::__sizeLinkLocal = 0;
	this->tt__IPv6Configuration::LinkLocal = NULL;
	this->tt__IPv6Configuration::__sizeFromDHCP = 0;
	this->tt__IPv6Configuration::FromDHCP = NULL;
	this->tt__IPv6Configuration::__sizeFromRA = 0;
	this->tt__IPv6Configuration::FromRA = NULL;
	this->tt__IPv6Configuration::Extension = NULL;
	this->tt__IPv6Configuration::__anyAttribute = NULL;
}

void tt__IPv6Configuration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTobool(soap, &this->tt__IPv6Configuration::AcceptRouterAdvert);
	soap_embedded(soap, &this->tt__IPv6Configuration::DHCP, SOAP_TYPE_tt__IPv6DHCPConfiguration);
	if (this->tt__IPv6Configuration::Manual)
	{	int i;
		for (i = 0; i < this->tt__IPv6Configuration::__sizeManual; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPv6Configuration::Manual + i);
		}
	}
	if (this->tt__IPv6Configuration::LinkLocal)
	{	int i;
		for (i = 0; i < this->tt__IPv6Configuration::__sizeLinkLocal; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPv6Configuration::LinkLocal + i);
		}
	}
	if (this->tt__IPv6Configuration::FromDHCP)
	{	int i;
		for (i = 0; i < this->tt__IPv6Configuration::__sizeFromDHCP; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPv6Configuration::FromDHCP + i);
		}
	}
	if (this->tt__IPv6Configuration::FromRA)
	{	int i;
		for (i = 0; i < this->tt__IPv6Configuration::__sizeFromRA; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv6Address(soap, this->tt__IPv6Configuration::FromRA + i);
		}
	}
	soap_serialize_PointerTott__IPv6ConfigurationExtension(soap, &this->tt__IPv6Configuration::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6Configuration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6Configuration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6Configuration(struct soap *soap, const char *tag, int id, const tt__IPv6Configuration *a, const char *type)
{
	if (((tt__IPv6Configuration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__IPv6Configuration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6Configuration), "tt:IPv6Configuration"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTobool(soap, "tt:AcceptRouterAdvert", -1, &(a->tt__IPv6Configuration::AcceptRouterAdvert), ""))
		return soap->error;
	if (soap_out_tt__IPv6DHCPConfiguration(soap, "tt:DHCP", -1, &(a->tt__IPv6Configuration::DHCP), ""))
		return soap->error;
	if (a->tt__IPv6Configuration::Manual)
	{	int i;
		for (i = 0; i < a->tt__IPv6Configuration::__sizeManual; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:Manual", -1, a->tt__IPv6Configuration::Manual + i, ""))
				return soap->error;
	}
	if (a->tt__IPv6Configuration::LinkLocal)
	{	int i;
		for (i = 0; i < a->tt__IPv6Configuration::__sizeLinkLocal; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:LinkLocal", -1, a->tt__IPv6Configuration::LinkLocal + i, ""))
				return soap->error;
	}
	if (a->tt__IPv6Configuration::FromDHCP)
	{	int i;
		for (i = 0; i < a->tt__IPv6Configuration::__sizeFromDHCP; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:FromDHCP", -1, a->tt__IPv6Configuration::FromDHCP + i, ""))
				return soap->error;
	}
	if (a->tt__IPv6Configuration::FromRA)
	{	int i;
		for (i = 0; i < a->tt__IPv6Configuration::__sizeFromRA; i++)
			if (soap_out_PointerTott__PrefixedIPv6Address(soap, "tt:FromRA", -1, a->tt__IPv6Configuration::FromRA + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__IPv6ConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__IPv6Configuration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPv6Configuration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6Configuration(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6Configuration * SOAP_FMAC4 soap_in_tt__IPv6Configuration(struct soap *soap, const char *tag, tt__IPv6Configuration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv6Configuration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6Configuration, sizeof(tt__IPv6Configuration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6Configuration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv6Configuration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__IPv6Configuration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AcceptRouterAdvert1 = 1;
	size_t soap_flag_DHCP1 = 1;
	struct soap_blist *soap_blist_Manual1 = NULL;
	struct soap_blist *soap_blist_LinkLocal1 = NULL;
	struct soap_blist *soap_blist_FromDHCP1 = NULL;
	struct soap_blist *soap_blist_FromRA1 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AcceptRouterAdvert1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:AcceptRouterAdvert", &(a->tt__IPv6Configuration::AcceptRouterAdvert), "xsd:boolean"))
				{	soap_flag_AcceptRouterAdvert1--;
					continue;
				}
			if (soap_flag_DHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IPv6DHCPConfiguration(soap, "tt:DHCP", &(a->tt__IPv6Configuration::DHCP), "tt:IPv6DHCPConfiguration"))
				{	soap_flag_DHCP1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->tt__IPv6Configuration::Manual == NULL)
				{	if (soap_blist_Manual1 == NULL)
						soap_blist_Manual1 = soap_new_block(soap);
					a->tt__IPv6Configuration::Manual = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_Manual1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPv6Configuration::Manual == NULL)
						return NULL;
					*a->tt__IPv6Configuration::Manual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:Manual", a->tt__IPv6Configuration::Manual, "tt:PrefixedIPv6Address"))
				{	a->tt__IPv6Configuration::__sizeManual++;
					a->tt__IPv6Configuration::Manual = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:LinkLocal", 1, NULL))
			{	if (a->tt__IPv6Configuration::LinkLocal == NULL)
				{	if (soap_blist_LinkLocal1 == NULL)
						soap_blist_LinkLocal1 = soap_new_block(soap);
					a->tt__IPv6Configuration::LinkLocal = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_LinkLocal1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPv6Configuration::LinkLocal == NULL)
						return NULL;
					*a->tt__IPv6Configuration::LinkLocal = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:LinkLocal", a->tt__IPv6Configuration::LinkLocal, "tt:PrefixedIPv6Address"))
				{	a->tt__IPv6Configuration::__sizeLinkLocal++;
					a->tt__IPv6Configuration::LinkLocal = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:FromDHCP", 1, NULL))
			{	if (a->tt__IPv6Configuration::FromDHCP == NULL)
				{	if (soap_blist_FromDHCP1 == NULL)
						soap_blist_FromDHCP1 = soap_new_block(soap);
					a->tt__IPv6Configuration::FromDHCP = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_FromDHCP1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPv6Configuration::FromDHCP == NULL)
						return NULL;
					*a->tt__IPv6Configuration::FromDHCP = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:FromDHCP", a->tt__IPv6Configuration::FromDHCP, "tt:PrefixedIPv6Address"))
				{	a->tt__IPv6Configuration::__sizeFromDHCP++;
					a->tt__IPv6Configuration::FromDHCP = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:FromRA", 1, NULL))
			{	if (a->tt__IPv6Configuration::FromRA == NULL)
				{	if (soap_blist_FromRA1 == NULL)
						soap_blist_FromRA1 = soap_new_block(soap);
					a->tt__IPv6Configuration::FromRA = (tt__PrefixedIPv6Address **)soap_push_block(soap, soap_blist_FromRA1, sizeof(tt__PrefixedIPv6Address *));
					if (a->tt__IPv6Configuration::FromRA == NULL)
						return NULL;
					*a->tt__IPv6Configuration::FromRA = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv6Address(soap, "tt:FromRA", a->tt__IPv6Configuration::FromRA, "tt:PrefixedIPv6Address"))
				{	a->tt__IPv6Configuration::__sizeFromRA++;
					a->tt__IPv6Configuration::FromRA = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6ConfigurationExtension(soap, "tt:Extension", &(a->tt__IPv6Configuration::Extension), "tt:IPv6ConfigurationExtension"))
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
		if (a->tt__IPv6Configuration::Manual)
			soap_pop_block(soap, soap_blist_Manual1);
		if (a->tt__IPv6Configuration::__sizeManual)
			a->tt__IPv6Configuration::Manual = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_Manual1, NULL, 1);
		else
		{	a->tt__IPv6Configuration::Manual = NULL;
			if (soap_blist_Manual1)
				soap_end_block(soap, soap_blist_Manual1);
		}
		if (a->tt__IPv6Configuration::LinkLocal)
			soap_pop_block(soap, soap_blist_LinkLocal1);
		if (a->tt__IPv6Configuration::__sizeLinkLocal)
			a->tt__IPv6Configuration::LinkLocal = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_LinkLocal1, NULL, 1);
		else
		{	a->tt__IPv6Configuration::LinkLocal = NULL;
			if (soap_blist_LinkLocal1)
				soap_end_block(soap, soap_blist_LinkLocal1);
		}
		if (a->tt__IPv6Configuration::FromDHCP)
			soap_pop_block(soap, soap_blist_FromDHCP1);
		if (a->tt__IPv6Configuration::__sizeFromDHCP)
			a->tt__IPv6Configuration::FromDHCP = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_FromDHCP1, NULL, 1);
		else
		{	a->tt__IPv6Configuration::FromDHCP = NULL;
			if (soap_blist_FromDHCP1)
				soap_end_block(soap, soap_blist_FromDHCP1);
		}
		if (a->tt__IPv6Configuration::FromRA)
			soap_pop_block(soap, soap_blist_FromRA1);
		if (a->tt__IPv6Configuration::__sizeFromRA)
			a->tt__IPv6Configuration::FromRA = (tt__PrefixedIPv6Address **)soap_save_block(soap, soap_blist_FromRA1, NULL, 1);
		else
		{	a->tt__IPv6Configuration::FromRA = NULL;
			if (soap_blist_FromRA1)
				soap_end_block(soap, soap_blist_FromRA1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPv6Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6Configuration, 0, sizeof(tt__IPv6Configuration), 0, soap_copy_tt__IPv6Configuration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DHCP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPv6Configuration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6Configuration);
	if (this->soap_out(soap, tag?tag:"tt:IPv6Configuration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6Configuration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6Configuration(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6Configuration * SOAP_FMAC4 soap_get_tt__IPv6Configuration(struct soap *soap, tt__IPv6Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6Configuration * SOAP_FMAC2 soap_instantiate_tt__IPv6Configuration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6Configuration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6Configuration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6Configuration);
		if (size)
			*size = sizeof(tt__IPv6Configuration);
		((tt__IPv6Configuration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6Configuration, n);
		if (size)
			*size = n * sizeof(tt__IPv6Configuration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6Configuration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6Configuration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6Configuration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6Configuration %p -> %p\n", q, p));
	*(tt__IPv6Configuration*)p = *(tt__IPv6Configuration*)q;
}

void tt__IPv4Configuration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__IPv4Configuration::__sizeManual = 0;
	this->tt__IPv4Configuration::Manual = NULL;
	this->tt__IPv4Configuration::LinkLocal = NULL;
	this->tt__IPv4Configuration::FromDHCP = NULL;
	soap_default_bool(soap, &this->tt__IPv4Configuration::DHCP);
	this->tt__IPv4Configuration::__size = 0;
	this->tt__IPv4Configuration::__any = NULL;
	this->tt__IPv4Configuration::__anyAttribute = NULL;
}

void tt__IPv4Configuration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__IPv4Configuration::Manual)
	{	int i;
		for (i = 0; i < this->tt__IPv4Configuration::__sizeManual; i++)
		{
			soap_serialize_PointerTott__PrefixedIPv4Address(soap, this->tt__IPv4Configuration::Manual + i);
		}
	}
	soap_serialize_PointerTott__PrefixedIPv4Address(soap, &this->tt__IPv4Configuration::LinkLocal);
	soap_serialize_PointerTott__PrefixedIPv4Address(soap, &this->tt__IPv4Configuration::FromDHCP);
	soap_embedded(soap, &this->tt__IPv4Configuration::DHCP, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv4Configuration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv4Configuration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4Configuration(struct soap *soap, const char *tag, int id, const tt__IPv4Configuration *a, const char *type)
{
	if (((tt__IPv4Configuration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__IPv4Configuration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4Configuration), "tt:IPv4Configuration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__IPv4Configuration::Manual)
	{	int i;
		for (i = 0; i < a->tt__IPv4Configuration::__sizeManual; i++)
			if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:Manual", -1, a->tt__IPv4Configuration::Manual + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:LinkLocal", -1, &(a->tt__IPv4Configuration::LinkLocal), ""))
		return soap->error;
	if (soap_out_PointerTott__PrefixedIPv4Address(soap, "tt:FromDHCP", -1, &(a->tt__IPv4Configuration::FromDHCP), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:DHCP", -1, &(a->tt__IPv4Configuration::DHCP), ""))
		return soap->error;
	if (a->tt__IPv4Configuration::__any)
	{	int i;
		for (i = 0; i < a->tt__IPv4Configuration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__IPv4Configuration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__IPv4Configuration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv4Configuration(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv4Configuration * SOAP_FMAC4 soap_in_tt__IPv4Configuration(struct soap *soap, const char *tag, tt__IPv4Configuration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv4Configuration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4Configuration, sizeof(tt__IPv4Configuration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv4Configuration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv4Configuration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__IPv4Configuration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_Manual1 = NULL;
	size_t soap_flag_LinkLocal1 = 1;
	size_t soap_flag_FromDHCP1 = 1;
	size_t soap_flag_DHCP1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Manual", 1, NULL))
			{	if (a->tt__IPv4Configuration::Manual == NULL)
				{	if (soap_blist_Manual1 == NULL)
						soap_blist_Manual1 = soap_new_block(soap);
					a->tt__IPv4Configuration::Manual = (tt__PrefixedIPv4Address **)soap_push_block(soap, soap_blist_Manual1, sizeof(tt__PrefixedIPv4Address *));
					if (a->tt__IPv4Configuration::Manual == NULL)
						return NULL;
					*a->tt__IPv4Configuration::Manual = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:Manual", a->tt__IPv4Configuration::Manual, "tt:PrefixedIPv4Address"))
				{	a->tt__IPv4Configuration::__sizeManual++;
					a->tt__IPv4Configuration::Manual = NULL;
					continue;
				}
			}
			if (soap_flag_LinkLocal1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:LinkLocal", &(a->tt__IPv4Configuration::LinkLocal), "tt:PrefixedIPv4Address"))
				{	soap_flag_LinkLocal1--;
					continue;
				}
			if (soap_flag_FromDHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PrefixedIPv4Address(soap, "tt:FromDHCP", &(a->tt__IPv4Configuration::FromDHCP), "tt:PrefixedIPv4Address"))
				{	soap_flag_FromDHCP1--;
					continue;
				}
			if (soap_flag_DHCP1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:DHCP", &(a->tt__IPv4Configuration::DHCP), "xsd:boolean"))
				{	soap_flag_DHCP1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__IPv4Configuration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__IPv4Configuration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__IPv4Configuration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__IPv4Configuration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__IPv4Configuration::__any, "xsd:byte"))
				{	a->tt__IPv4Configuration::__size++;
					a->tt__IPv4Configuration::__any = NULL;
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
		if (a->tt__IPv4Configuration::Manual)
			soap_pop_block(soap, soap_blist_Manual1);
		if (a->tt__IPv4Configuration::__sizeManual)
			a->tt__IPv4Configuration::Manual = (tt__PrefixedIPv4Address **)soap_save_block(soap, soap_blist_Manual1, NULL, 1);
		else
		{	a->tt__IPv4Configuration::Manual = NULL;
			if (soap_blist_Manual1)
				soap_end_block(soap, soap_blist_Manual1);
		}
		if (a->tt__IPv4Configuration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__IPv4Configuration::__size)
			a->tt__IPv4Configuration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__IPv4Configuration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__IPv4Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4Configuration, 0, sizeof(tt__IPv4Configuration), 0, soap_copy_tt__IPv4Configuration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DHCP1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPv4Configuration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv4Configuration);
	if (this->soap_out(soap, tag?tag:"tt:IPv4Configuration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv4Configuration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv4Configuration(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv4Configuration * SOAP_FMAC4 soap_get_tt__IPv4Configuration(struct soap *soap, tt__IPv4Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv4Configuration * SOAP_FMAC2 soap_instantiate_tt__IPv4Configuration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv4Configuration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv4Configuration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv4Configuration);
		if (size)
			*size = sizeof(tt__IPv4Configuration);
		((tt__IPv4Configuration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv4Configuration, n);
		if (size)
			*size = n * sizeof(tt__IPv4Configuration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv4Configuration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv4Configuration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv4Configuration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv4Configuration %p -> %p\n", q, p));
	*(tt__IPv4Configuration*)p = *(tt__IPv4Configuration*)q;
}

void tt__IPv4NetworkInterface::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__IPv4NetworkInterface::Enabled);
	this->tt__IPv4NetworkInterface::Config = NULL;
}

void tt__IPv4NetworkInterface::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__IPv4NetworkInterface::Enabled, SOAP_TYPE_bool);
	soap_serialize_PointerTott__IPv4Configuration(soap, &this->tt__IPv4NetworkInterface::Config);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv4NetworkInterface::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv4NetworkInterface(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv4NetworkInterface(struct soap *soap, const char *tag, int id, const tt__IPv4NetworkInterface *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv4NetworkInterface), "tt:IPv4NetworkInterface"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:Enabled", -1, &(a->tt__IPv4NetworkInterface::Enabled), ""))
		return soap->error;
	if (a->tt__IPv4NetworkInterface::Config)
	{	if (soap_out_PointerTott__IPv4Configuration(soap, "tt:Config", -1, &a->tt__IPv4NetworkInterface::Config, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Config"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPv4NetworkInterface::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv4NetworkInterface(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv4NetworkInterface * SOAP_FMAC4 soap_in_tt__IPv4NetworkInterface(struct soap *soap, const char *tag, tt__IPv4NetworkInterface *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv4NetworkInterface *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv4NetworkInterface, sizeof(tt__IPv4NetworkInterface), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv4NetworkInterface)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv4NetworkInterface *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Enabled1 = 1;
	size_t soap_flag_Config1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Enabled", &(a->tt__IPv4NetworkInterface::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap_flag_Config1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv4Configuration(soap, "tt:Config", &(a->tt__IPv4NetworkInterface::Config), "tt:IPv4Configuration"))
				{	soap_flag_Config1--;
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
	{	a = (tt__IPv4NetworkInterface *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv4NetworkInterface, 0, sizeof(tt__IPv4NetworkInterface), 0, soap_copy_tt__IPv4NetworkInterface);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Enabled1 > 0 || soap_flag_Config1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPv4NetworkInterface::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv4NetworkInterface);
	if (this->soap_out(soap, tag?tag:"tt:IPv4NetworkInterface", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv4NetworkInterface::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv4NetworkInterface(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv4NetworkInterface * SOAP_FMAC4 soap_get_tt__IPv4NetworkInterface(struct soap *soap, tt__IPv4NetworkInterface *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv4NetworkInterface(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv4NetworkInterface * SOAP_FMAC2 soap_instantiate_tt__IPv4NetworkInterface(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv4NetworkInterface(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv4NetworkInterface, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv4NetworkInterface);
		if (size)
			*size = sizeof(tt__IPv4NetworkInterface);
		((tt__IPv4NetworkInterface*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv4NetworkInterface, n);
		if (size)
			*size = n * sizeof(tt__IPv4NetworkInterface);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv4NetworkInterface*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv4NetworkInterface*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv4NetworkInterface(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv4NetworkInterface %p -> %p\n", q, p));
	*(tt__IPv4NetworkInterface*)p = *(tt__IPv4NetworkInterface*)q;
}

void tt__IPv6NetworkInterface::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__IPv6NetworkInterface::Enabled);
	this->tt__IPv6NetworkInterface::Config = NULL;
}

void tt__IPv6NetworkInterface::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__IPv6NetworkInterface::Enabled, SOAP_TYPE_bool);
	soap_serialize_PointerTott__IPv6Configuration(soap, &this->tt__IPv6NetworkInterface::Config);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__IPv6NetworkInterface::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__IPv6NetworkInterface(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IPv6NetworkInterface(struct soap *soap, const char *tag, int id, const tt__IPv6NetworkInterface *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IPv6NetworkInterface), "tt:IPv6NetworkInterface"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:Enabled", -1, &(a->tt__IPv6NetworkInterface::Enabled), ""))
		return soap->error;
	if (soap_out_PointerTott__IPv6Configuration(soap, "tt:Config", -1, &(a->tt__IPv6NetworkInterface::Config), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__IPv6NetworkInterface::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__IPv6NetworkInterface(soap, tag, this, type);
}

SOAP_FMAC3 tt__IPv6NetworkInterface * SOAP_FMAC4 soap_in_tt__IPv6NetworkInterface(struct soap *soap, const char *tag, tt__IPv6NetworkInterface *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__IPv6NetworkInterface *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IPv6NetworkInterface, sizeof(tt__IPv6NetworkInterface), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__IPv6NetworkInterface)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__IPv6NetworkInterface *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Enabled1 = 1;
	size_t soap_flag_Config1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Enabled", &(a->tt__IPv6NetworkInterface::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap_flag_Config1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6Configuration(soap, "tt:Config", &(a->tt__IPv6NetworkInterface::Config), "tt:IPv6Configuration"))
				{	soap_flag_Config1--;
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
	{	a = (tt__IPv6NetworkInterface *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IPv6NetworkInterface, 0, sizeof(tt__IPv6NetworkInterface), 0, soap_copy_tt__IPv6NetworkInterface);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Enabled1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__IPv6NetworkInterface::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__IPv6NetworkInterface);
	if (this->soap_out(soap, tag?tag:"tt:IPv6NetworkInterface", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__IPv6NetworkInterface::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__IPv6NetworkInterface(soap, this, tag, type);
}

SOAP_FMAC3 tt__IPv6NetworkInterface * SOAP_FMAC4 soap_get_tt__IPv6NetworkInterface(struct soap *soap, tt__IPv6NetworkInterface *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__IPv6NetworkInterface(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__IPv6NetworkInterface * SOAP_FMAC2 soap_instantiate_tt__IPv6NetworkInterface(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__IPv6NetworkInterface(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__IPv6NetworkInterface, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__IPv6NetworkInterface);
		if (size)
			*size = sizeof(tt__IPv6NetworkInterface);
		((tt__IPv6NetworkInterface*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IPv6NetworkInterface, n);
		if (size)
			*size = n * sizeof(tt__IPv6NetworkInterface);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__IPv6NetworkInterface*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__IPv6NetworkInterface*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__IPv6NetworkInterface(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__IPv6NetworkInterface %p -> %p\n", q, p));
	*(tt__IPv6NetworkInterface*)p = *(tt__IPv6NetworkInterface*)q;
}

void tt__NetworkInterfaceInfo::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__NetworkInterfaceInfo::Name);
	soap_default_tt__HwAddress(soap, &this->tt__NetworkInterfaceInfo::HwAddress);
	this->tt__NetworkInterfaceInfo::MTU = NULL;
}

void tt__NetworkInterfaceInfo::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__NetworkInterfaceInfo::Name);
	soap_serialize_tt__HwAddress(soap, &this->tt__NetworkInterfaceInfo::HwAddress);
	soap_serialize_PointerToint(soap, &this->tt__NetworkInterfaceInfo::MTU);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceInfo::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceInfo(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceInfo(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceInfo *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceInfo), "tt:NetworkInterfaceInfo"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_string(soap, "tt:Name", -1, &(a->tt__NetworkInterfaceInfo::Name), ""))
		return soap->error;
	if (a->tt__NetworkInterfaceInfo::HwAddress)
	{	if (soap_out_tt__HwAddress(soap, "tt:HwAddress", -1, &a->tt__NetworkInterfaceInfo::HwAddress, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:HwAddress"))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:MTU", -1, &(a->tt__NetworkInterfaceInfo::MTU), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceInfo::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceInfo(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceInfo * SOAP_FMAC4 soap_in_tt__NetworkInterfaceInfo(struct soap *soap, const char *tag, tt__NetworkInterfaceInfo *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceInfo *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceInfo, sizeof(tt__NetworkInterfaceInfo), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceInfo)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceInfo *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_HwAddress1 = 1;
	size_t soap_flag_MTU1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &(a->tt__NetworkInterfaceInfo::Name), "xsd:string"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_HwAddress1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__HwAddress(soap, "tt:HwAddress", &(a->tt__NetworkInterfaceInfo::HwAddress), "tt:HwAddress"))
				{	soap_flag_HwAddress1--;
					continue;
				}
			if (soap_flag_MTU1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:MTU", &(a->tt__NetworkInterfaceInfo::MTU), "xsd:int"))
				{	soap_flag_MTU1--;
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
	{	a = (tt__NetworkInterfaceInfo *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceInfo, 0, sizeof(tt__NetworkInterfaceInfo), 0, soap_copy_tt__NetworkInterfaceInfo);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_HwAddress1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkInterfaceInfo::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceInfo);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceInfo", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceInfo::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceInfo(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceInfo * SOAP_FMAC4 soap_get_tt__NetworkInterfaceInfo(struct soap *soap, tt__NetworkInterfaceInfo *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceInfo(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceInfo * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceInfo(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceInfo(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceInfo, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceInfo);
		if (size)
			*size = sizeof(tt__NetworkInterfaceInfo);
		((tt__NetworkInterfaceInfo*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceInfo, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceInfo);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceInfo*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceInfo*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceInfo(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceInfo %p -> %p\n", q, p));
	*(tt__NetworkInterfaceInfo*)p = *(tt__NetworkInterfaceInfo*)q;
}

void tt__NetworkInterfaceConnectionSetting::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__NetworkInterfaceConnectionSetting::AutoNegotiation);
	soap_default_int(soap, &this->tt__NetworkInterfaceConnectionSetting::Speed);
	soap_default_tt__Duplex(soap, &this->tt__NetworkInterfaceConnectionSetting::Duplex);
}

void tt__NetworkInterfaceConnectionSetting::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__NetworkInterfaceConnectionSetting::AutoNegotiation, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__NetworkInterfaceConnectionSetting::Speed, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceConnectionSetting::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceConnectionSetting(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceConnectionSetting *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting), "tt:NetworkInterfaceConnectionSetting"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:AutoNegotiation", -1, &(a->tt__NetworkInterfaceConnectionSetting::AutoNegotiation), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Speed", -1, &(a->tt__NetworkInterfaceConnectionSetting::Speed), ""))
		return soap->error;
	if (soap_out_tt__Duplex(soap, "tt:Duplex", -1, &(a->tt__NetworkInterfaceConnectionSetting::Duplex), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceConnectionSetting::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceConnectionSetting(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceConnectionSetting * SOAP_FMAC4 soap_in_tt__NetworkInterfaceConnectionSetting(struct soap *soap, const char *tag, tt__NetworkInterfaceConnectionSetting *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceConnectionSetting *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting, sizeof(tt__NetworkInterfaceConnectionSetting), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceConnectionSetting)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceConnectionSetting *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AutoNegotiation1 = 1;
	size_t soap_flag_Speed1 = 1;
	size_t soap_flag_Duplex1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AutoNegotiation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AutoNegotiation", &(a->tt__NetworkInterfaceConnectionSetting::AutoNegotiation), "xsd:boolean"))
				{	soap_flag_AutoNegotiation1--;
					continue;
				}
			if (soap_flag_Speed1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Speed", &(a->tt__NetworkInterfaceConnectionSetting::Speed), "xsd:int"))
				{	soap_flag_Speed1--;
					continue;
				}
			if (soap_flag_Duplex1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__Duplex(soap, "tt:Duplex", &(a->tt__NetworkInterfaceConnectionSetting::Duplex), "tt:Duplex"))
				{	soap_flag_Duplex1--;
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
	{	a = (tt__NetworkInterfaceConnectionSetting *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting, 0, sizeof(tt__NetworkInterfaceConnectionSetting), 0, soap_copy_tt__NetworkInterfaceConnectionSetting);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AutoNegotiation1 > 0 || soap_flag_Speed1 > 0 || soap_flag_Duplex1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkInterfaceConnectionSetting::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceConnectionSetting", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceConnectionSetting::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceConnectionSetting(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceConnectionSetting * SOAP_FMAC4 soap_get_tt__NetworkInterfaceConnectionSetting(struct soap *soap, tt__NetworkInterfaceConnectionSetting *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceConnectionSetting(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceConnectionSetting * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceConnectionSetting(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceConnectionSetting(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceConnectionSetting, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceConnectionSetting);
		if (size)
			*size = sizeof(tt__NetworkInterfaceConnectionSetting);
		((tt__NetworkInterfaceConnectionSetting*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceConnectionSetting, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceConnectionSetting);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceConnectionSetting*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceConnectionSetting*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceConnectionSetting(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceConnectionSetting %p -> %p\n", q, p));
	*(tt__NetworkInterfaceConnectionSetting*)p = *(tt__NetworkInterfaceConnectionSetting*)q;
}

void tt__NetworkInterfaceLink::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceLink::AdminSettings = NULL;
	this->tt__NetworkInterfaceLink::OperSettings = NULL;
	soap_default_tt__IANA_IfTypes(soap, &this->tt__NetworkInterfaceLink::InterfaceType);
}

void tt__NetworkInterfaceLink::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &this->tt__NetworkInterfaceLink::AdminSettings);
	soap_serialize_PointerTott__NetworkInterfaceConnectionSetting(soap, &this->tt__NetworkInterfaceLink::OperSettings);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceLink::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceLink(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceLink(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceLink *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceLink), "tt:NetworkInterfaceLink"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkInterfaceLink::AdminSettings)
	{	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:AdminSettings", -1, &a->tt__NetworkInterfaceLink::AdminSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AdminSettings"))
		return soap->error;
	if (a->tt__NetworkInterfaceLink::OperSettings)
	{	if (soap_out_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:OperSettings", -1, &a->tt__NetworkInterfaceLink::OperSettings, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OperSettings"))
		return soap->error;
	if (soap_out_tt__IANA_IfTypes(soap, "tt:InterfaceType", -1, &(a->tt__NetworkInterfaceLink::InterfaceType), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceLink::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceLink(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceLink * SOAP_FMAC4 soap_in_tt__NetworkInterfaceLink(struct soap *soap, const char *tag, tt__NetworkInterfaceLink *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceLink *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceLink, sizeof(tt__NetworkInterfaceLink), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceLink)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceLink *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AdminSettings1 = 1;
	size_t soap_flag_OperSettings1 = 1;
	size_t soap_flag_InterfaceType1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AdminSettings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:AdminSettings", &(a->tt__NetworkInterfaceLink::AdminSettings), "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_AdminSettings1--;
					continue;
				}
			if (soap_flag_OperSettings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceConnectionSetting(soap, "tt:OperSettings", &(a->tt__NetworkInterfaceLink::OperSettings), "tt:NetworkInterfaceConnectionSetting"))
				{	soap_flag_OperSettings1--;
					continue;
				}
			if (soap_flag_InterfaceType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IANA_IfTypes(soap, "tt:InterfaceType", &(a->tt__NetworkInterfaceLink::InterfaceType), "tt:IANA-IfTypes"))
				{	soap_flag_InterfaceType1--;
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
	{	a = (tt__NetworkInterfaceLink *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceLink, 0, sizeof(tt__NetworkInterfaceLink), 0, soap_copy_tt__NetworkInterfaceLink);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AdminSettings1 > 0 || soap_flag_OperSettings1 > 0 || soap_flag_InterfaceType1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkInterfaceLink::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceLink);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceLink", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceLink::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceLink(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceLink * SOAP_FMAC4 soap_get_tt__NetworkInterfaceLink(struct soap *soap, tt__NetworkInterfaceLink *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceLink(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceLink * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceLink(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceLink(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceLink, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceLink);
		if (size)
			*size = sizeof(tt__NetworkInterfaceLink);
		((tt__NetworkInterfaceLink*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceLink, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceLink);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceLink*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceLink*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceLink(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceLink %p -> %p\n", q, p));
	*(tt__NetworkInterfaceLink*)p = *(tt__NetworkInterfaceLink*)q;
}

void tt__NetworkInterfaceExtension2::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceExtension2::__size = 0;
	this->tt__NetworkInterfaceExtension2::__any = NULL;
}

void tt__NetworkInterfaceExtension2::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceExtension2::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceExtension2(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceExtension2(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceExtension2 *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceExtension2), "tt:NetworkInterfaceExtension2"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkInterfaceExtension2::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceExtension2::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkInterfaceExtension2::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceExtension2::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceExtension2(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceExtension2 * SOAP_FMAC4 soap_in_tt__NetworkInterfaceExtension2(struct soap *soap, const char *tag, tt__NetworkInterfaceExtension2 *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceExtension2 *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceExtension2, sizeof(tt__NetworkInterfaceExtension2), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceExtension2)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceExtension2 *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__NetworkInterfaceExtension2::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkInterfaceExtension2::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkInterfaceExtension2::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkInterfaceExtension2::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkInterfaceExtension2::__any, "xsd:byte"))
				{	a->tt__NetworkInterfaceExtension2::__size++;
					a->tt__NetworkInterfaceExtension2::__any = NULL;
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
		if (a->tt__NetworkInterfaceExtension2::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkInterfaceExtension2::__size)
			a->tt__NetworkInterfaceExtension2::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkInterfaceExtension2::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkInterfaceExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceExtension2, 0, sizeof(tt__NetworkInterfaceExtension2), 0, soap_copy_tt__NetworkInterfaceExtension2);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__NetworkInterfaceExtension2::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceExtension2);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceExtension2", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceExtension2::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceExtension2(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceExtension2 * SOAP_FMAC4 soap_get_tt__NetworkInterfaceExtension2(struct soap *soap, tt__NetworkInterfaceExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceExtension2 * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceExtension2(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceExtension2(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceExtension2, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceExtension2);
		if (size)
			*size = sizeof(tt__NetworkInterfaceExtension2);
		((tt__NetworkInterfaceExtension2*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceExtension2, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceExtension2);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceExtension2*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceExtension2*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceExtension2(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceExtension2 %p -> %p\n", q, p));
	*(tt__NetworkInterfaceExtension2*)p = *(tt__NetworkInterfaceExtension2*)q;
}

void tt__Dot3Configuration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Dot3Configuration::__size = 0;
	this->tt__Dot3Configuration::__any = NULL;
	this->tt__Dot3Configuration::__anyAttribute = NULL;
}

void tt__Dot3Configuration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Dot3Configuration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Dot3Configuration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Dot3Configuration(struct soap *soap, const char *tag, int id, const tt__Dot3Configuration *a, const char *type)
{
	if (((tt__Dot3Configuration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Dot3Configuration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Dot3Configuration), "tt:Dot3Configuration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Dot3Configuration::__any)
	{	int i;
		for (i = 0; i < a->tt__Dot3Configuration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Dot3Configuration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Dot3Configuration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Dot3Configuration(soap, tag, this, type);
}

SOAP_FMAC3 tt__Dot3Configuration * SOAP_FMAC4 soap_in_tt__Dot3Configuration(struct soap *soap, const char *tag, tt__Dot3Configuration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Dot3Configuration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Dot3Configuration, sizeof(tt__Dot3Configuration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Dot3Configuration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Dot3Configuration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Dot3Configuration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Dot3Configuration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Dot3Configuration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Dot3Configuration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Dot3Configuration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Dot3Configuration::__any, "xsd:byte"))
				{	a->tt__Dot3Configuration::__size++;
					a->tt__Dot3Configuration::__any = NULL;
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
		if (a->tt__Dot3Configuration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Dot3Configuration::__size)
			a->tt__Dot3Configuration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Dot3Configuration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Dot3Configuration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Dot3Configuration, 0, sizeof(tt__Dot3Configuration), 0, soap_copy_tt__Dot3Configuration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__Dot3Configuration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Dot3Configuration);
	if (this->soap_out(soap, tag?tag:"tt:Dot3Configuration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Dot3Configuration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Dot3Configuration(soap, this, tag, type);
}

SOAP_FMAC3 tt__Dot3Configuration * SOAP_FMAC4 soap_get_tt__Dot3Configuration(struct soap *soap, tt__Dot3Configuration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Dot3Configuration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Dot3Configuration * SOAP_FMAC2 soap_instantiate_tt__Dot3Configuration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Dot3Configuration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Dot3Configuration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Dot3Configuration);
		if (size)
			*size = sizeof(tt__Dot3Configuration);
		((tt__Dot3Configuration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Dot3Configuration, n);
		if (size)
			*size = n * sizeof(tt__Dot3Configuration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Dot3Configuration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Dot3Configuration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Dot3Configuration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Dot3Configuration %p -> %p\n", q, p));
	*(tt__Dot3Configuration*)p = *(tt__Dot3Configuration*)q;
}

void tt__NetworkInterfaceExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__NetworkInterfaceExtension::__size = 0;
	this->tt__NetworkInterfaceExtension::__any = NULL;
	soap_default_tt__IANA_IfTypes(soap, &this->tt__NetworkInterfaceExtension::InterfaceType);
	this->tt__NetworkInterfaceExtension::__sizeDot3 = 0;
	this->tt__NetworkInterfaceExtension::Dot3 = NULL;
	this->tt__NetworkInterfaceExtension::__sizeDot11 = 0;
	this->tt__NetworkInterfaceExtension::Dot11 = NULL;
	this->tt__NetworkInterfaceExtension::Extension = NULL;
}

void tt__NetworkInterfaceExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__NetworkInterfaceExtension::Dot3)
	{	int i;
		for (i = 0; i < this->tt__NetworkInterfaceExtension::__sizeDot3; i++)
		{
			soap_serialize_PointerTott__Dot3Configuration(soap, this->tt__NetworkInterfaceExtension::Dot3 + i);
		}
	}
	if (this->tt__NetworkInterfaceExtension::Dot11)
	{	int i;
		for (i = 0; i < this->tt__NetworkInterfaceExtension::__sizeDot11; i++)
		{
			soap_serialize_PointerTott__Dot11Configuration(soap, this->tt__NetworkInterfaceExtension::Dot11 + i);
		}
	}
	soap_serialize_PointerTott__NetworkInterfaceExtension2(soap, &this->tt__NetworkInterfaceExtension::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterfaceExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterfaceExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterfaceExtension(struct soap *soap, const char *tag, int id, const tt__NetworkInterfaceExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterfaceExtension), "tt:NetworkInterfaceExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__NetworkInterfaceExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__NetworkInterfaceExtension::__any + i, ""))
				return soap->error;
	}
	if (soap_out_tt__IANA_IfTypes(soap, "tt:InterfaceType", -1, &(a->tt__NetworkInterfaceExtension::InterfaceType), ""))
		return soap->error;
	if (a->tt__NetworkInterfaceExtension::Dot3)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceExtension::__sizeDot3; i++)
			if (soap_out_PointerTott__Dot3Configuration(soap, "tt:Dot3", -1, a->tt__NetworkInterfaceExtension::Dot3 + i, ""))
				return soap->error;
	}
	if (a->tt__NetworkInterfaceExtension::Dot11)
	{	int i;
		for (i = 0; i < a->tt__NetworkInterfaceExtension::__sizeDot11; i++)
			if (soap_out_PointerTott__Dot11Configuration(soap, "tt:Dot11", -1, a->tt__NetworkInterfaceExtension::Dot11 + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__NetworkInterfaceExtension2(soap, "tt:Extension", -1, &(a->tt__NetworkInterfaceExtension::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterfaceExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterfaceExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterfaceExtension * SOAP_FMAC4 soap_in_tt__NetworkInterfaceExtension(struct soap *soap, const char *tag, tt__NetworkInterfaceExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterfaceExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterfaceExtension, sizeof(tt__NetworkInterfaceExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterfaceExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterfaceExtension *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_InterfaceType1 = 1;
	struct soap_blist *soap_blist_Dot31 = NULL;
	struct soap_blist *soap_blist_Dot111 = NULL;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_InterfaceType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__IANA_IfTypes(soap, "tt:InterfaceType", &(a->tt__NetworkInterfaceExtension::InterfaceType), "tt:IANA-IfTypes"))
				{	soap_flag_InterfaceType1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot3", 1, NULL))
			{	if (a->tt__NetworkInterfaceExtension::Dot3 == NULL)
				{	if (soap_blist_Dot31 == NULL)
						soap_blist_Dot31 = soap_new_block(soap);
					a->tt__NetworkInterfaceExtension::Dot3 = (tt__Dot3Configuration **)soap_push_block(soap, soap_blist_Dot31, sizeof(tt__Dot3Configuration *));
					if (a->tt__NetworkInterfaceExtension::Dot3 == NULL)
						return NULL;
					*a->tt__NetworkInterfaceExtension::Dot3 = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Dot3Configuration(soap, "tt:Dot3", a->tt__NetworkInterfaceExtension::Dot3, "tt:Dot3Configuration"))
				{	a->tt__NetworkInterfaceExtension::__sizeDot3++;
					a->tt__NetworkInterfaceExtension::Dot3 = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Dot11", 1, NULL))
			{	if (a->tt__NetworkInterfaceExtension::Dot11 == NULL)
				{	if (soap_blist_Dot111 == NULL)
						soap_blist_Dot111 = soap_new_block(soap);
					a->tt__NetworkInterfaceExtension::Dot11 = (tt__Dot11Configuration **)soap_push_block(soap, soap_blist_Dot111, sizeof(tt__Dot11Configuration *));
					if (a->tt__NetworkInterfaceExtension::Dot11 == NULL)
						return NULL;
					*a->tt__NetworkInterfaceExtension::Dot11 = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Dot11Configuration(soap, "tt:Dot11", a->tt__NetworkInterfaceExtension::Dot11, "tt:Dot11Configuration"))
				{	a->tt__NetworkInterfaceExtension::__sizeDot11++;
					a->tt__NetworkInterfaceExtension::Dot11 = NULL;
					continue;
				}
			}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceExtension2(soap, "tt:Extension", &(a->tt__NetworkInterfaceExtension::Extension), "tt:NetworkInterfaceExtension2"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__NetworkInterfaceExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__NetworkInterfaceExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__NetworkInterfaceExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__NetworkInterfaceExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__NetworkInterfaceExtension::__any, "xsd:byte"))
				{	a->tt__NetworkInterfaceExtension::__size++;
					a->tt__NetworkInterfaceExtension::__any = NULL;
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
		if (a->tt__NetworkInterfaceExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__NetworkInterfaceExtension::__size)
			a->tt__NetworkInterfaceExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__NetworkInterfaceExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->tt__NetworkInterfaceExtension::Dot3)
			soap_pop_block(soap, soap_blist_Dot31);
		if (a->tt__NetworkInterfaceExtension::__sizeDot3)
			a->tt__NetworkInterfaceExtension::Dot3 = (tt__Dot3Configuration **)soap_save_block(soap, soap_blist_Dot31, NULL, 1);
		else
		{	a->tt__NetworkInterfaceExtension::Dot3 = NULL;
			if (soap_blist_Dot31)
				soap_end_block(soap, soap_blist_Dot31);
		}
		if (a->tt__NetworkInterfaceExtension::Dot11)
			soap_pop_block(soap, soap_blist_Dot111);
		if (a->tt__NetworkInterfaceExtension::__sizeDot11)
			a->tt__NetworkInterfaceExtension::Dot11 = (tt__Dot11Configuration **)soap_save_block(soap, soap_blist_Dot111, NULL, 1);
		else
		{	a->tt__NetworkInterfaceExtension::Dot11 = NULL;
			if (soap_blist_Dot111)
				soap_end_block(soap, soap_blist_Dot111);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__NetworkInterfaceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterfaceExtension, 0, sizeof(tt__NetworkInterfaceExtension), 0, soap_copy_tt__NetworkInterfaceExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_InterfaceType1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkInterfaceExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterfaceExtension);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterfaceExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterfaceExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterfaceExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterfaceExtension * SOAP_FMAC4 soap_get_tt__NetworkInterfaceExtension(struct soap *soap, tt__NetworkInterfaceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterfaceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterfaceExtension * SOAP_FMAC2 soap_instantiate_tt__NetworkInterfaceExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterfaceExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterfaceExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterfaceExtension);
		if (size)
			*size = sizeof(tt__NetworkInterfaceExtension);
		((tt__NetworkInterfaceExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterfaceExtension, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterfaceExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterfaceExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterfaceExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterfaceExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterfaceExtension %p -> %p\n", q, p));
	*(tt__NetworkInterfaceExtension*)p = *(tt__NetworkInterfaceExtension*)q;
}

void tt__NetworkInterface::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__NetworkInterface::Enabled);
	this->tt__NetworkInterface::Info = NULL;
	this->tt__NetworkInterface::Link = NULL;
	this->tt__NetworkInterface::IPv4 = NULL;
	this->tt__NetworkInterface::IPv6 = NULL;
	this->tt__NetworkInterface::Extension = NULL;
	this->tt__NetworkInterface::__anyAttribute = NULL;
}

void tt__NetworkInterface::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__NetworkInterface::Enabled, SOAP_TYPE_bool);
	soap_serialize_PointerTott__NetworkInterfaceInfo(soap, &this->tt__NetworkInterface::Info);
	soap_serialize_PointerTott__NetworkInterfaceLink(soap, &this->tt__NetworkInterface::Link);
	soap_serialize_PointerTott__IPv4NetworkInterface(soap, &this->tt__NetworkInterface::IPv4);
	soap_serialize_PointerTott__IPv6NetworkInterface(soap, &this->tt__NetworkInterface::IPv6);
	soap_serialize_PointerTott__NetworkInterfaceExtension(soap, &this->tt__NetworkInterface::Extension);
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__NetworkInterface::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__NetworkInterface(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkInterface(struct soap *soap, const char *tag, int id, const tt__NetworkInterface *a, const char *type)
{
	if (((tt__NetworkInterface*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__NetworkInterface*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkInterface), "tt:NetworkInterface"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:Enabled", -1, &(a->tt__NetworkInterface::Enabled), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceInfo(soap, "tt:Info", -1, &(a->tt__NetworkInterface::Info), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceLink(soap, "tt:Link", -1, &(a->tt__NetworkInterface::Link), ""))
		return soap->error;
	if (soap_out_PointerTott__IPv4NetworkInterface(soap, "tt:IPv4", -1, &(a->tt__NetworkInterface::IPv4), ""))
		return soap->error;
	if (soap_out_PointerTott__IPv6NetworkInterface(soap, "tt:IPv6", -1, &(a->tt__NetworkInterface::IPv6), ""))
		return soap->error;
	if (soap_out_PointerTott__NetworkInterfaceExtension(soap, "tt:Extension", -1, &(a->tt__NetworkInterface::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__NetworkInterface::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__NetworkInterface(soap, tag, this, type);
}

SOAP_FMAC3 tt__NetworkInterface * SOAP_FMAC4 soap_in_tt__NetworkInterface(struct soap *soap, const char *tag, tt__NetworkInterface *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__NetworkInterface *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkInterface, sizeof(tt__NetworkInterface), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__NetworkInterface)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__NetworkInterface *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__NetworkInterface*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__DeviceEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Enabled1 = 1;
	size_t soap_flag_Info1 = 1;
	size_t soap_flag_Link1 = 1;
	size_t soap_flag_IPv41 = 1;
	size_t soap_flag_IPv61 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Enabled1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Enabled", &(a->tt__NetworkInterface::Enabled), "xsd:boolean"))
				{	soap_flag_Enabled1--;
					continue;
				}
			if (soap_flag_Info1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceInfo(soap, "tt:Info", &(a->tt__NetworkInterface::Info), "tt:NetworkInterfaceInfo"))
				{	soap_flag_Info1--;
					continue;
				}
			if (soap_flag_Link1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceLink(soap, "tt:Link", &(a->tt__NetworkInterface::Link), "tt:NetworkInterfaceLink"))
				{	soap_flag_Link1--;
					continue;
				}
			if (soap_flag_IPv41 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv4NetworkInterface(soap, "tt:IPv4", &(a->tt__NetworkInterface::IPv4), "tt:IPv4NetworkInterface"))
				{	soap_flag_IPv41--;
					continue;
				}
			if (soap_flag_IPv61 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPv6NetworkInterface(soap, "tt:IPv6", &(a->tt__NetworkInterface::IPv6), "tt:IPv6NetworkInterface"))
				{	soap_flag_IPv61--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__NetworkInterfaceExtension(soap, "tt:Extension", &(a->tt__NetworkInterface::Extension), "tt:NetworkInterfaceExtension"))
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
	{	a = (tt__NetworkInterface *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkInterface, 0, sizeof(tt__NetworkInterface), 0, soap_copy_tt__NetworkInterface);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Enabled1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__NetworkInterface::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__NetworkInterface);
	if (this->soap_out(soap, tag?tag:"tt:NetworkInterface", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__NetworkInterface::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__NetworkInterface(soap, this, tag, type);
}

SOAP_FMAC3 tt__NetworkInterface * SOAP_FMAC4 soap_get_tt__NetworkInterface(struct soap *soap, tt__NetworkInterface *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__NetworkInterface(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__NetworkInterface * SOAP_FMAC2 soap_instantiate_tt__NetworkInterface(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__NetworkInterface(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__NetworkInterface, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__NetworkInterface);
		if (size)
			*size = sizeof(tt__NetworkInterface);
		((tt__NetworkInterface*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__NetworkInterface, n);
		if (size)
			*size = n * sizeof(tt__NetworkInterface);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__NetworkInterface*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__NetworkInterface*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__NetworkInterface(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__NetworkInterface %p -> %p\n", q, p));
	*(tt__NetworkInterface*)p = *(tt__NetworkInterface*)q;
}

void tt__Scope::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ScopeDefinition(soap, &this->tt__Scope::ScopeDef);
	soap_default_xsd__anyURI(soap, &this->tt__Scope::ScopeItem);
}

void tt__Scope::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__Scope::ScopeItem);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Scope::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Scope(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Scope(struct soap *soap, const char *tag, int id, const tt__Scope *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Scope), "tt:Scope"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__ScopeDefinition(soap, "tt:ScopeDef", -1, &(a->tt__Scope::ScopeDef), ""))
		return soap->error;
	if (a->tt__Scope::ScopeItem)
	{	if (soap_out_xsd__anyURI(soap, "tt:ScopeItem", -1, &a->tt__Scope::ScopeItem, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ScopeItem"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Scope::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Scope(soap, tag, this, type);
}

SOAP_FMAC3 tt__Scope * SOAP_FMAC4 soap_in_tt__Scope(struct soap *soap, const char *tag, tt__Scope *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Scope *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Scope, sizeof(tt__Scope), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Scope)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Scope *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_ScopeDef1 = 1;
	size_t soap_flag_ScopeItem1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_ScopeDef1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ScopeDefinition(soap, "tt:ScopeDef", &(a->tt__Scope::ScopeDef), "tt:ScopeDefinition"))
				{	soap_flag_ScopeDef1--;
					continue;
				}
			if (soap_flag_ScopeItem1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:ScopeItem", &(a->tt__Scope::ScopeItem), "xsd:anyURI"))
				{	soap_flag_ScopeItem1--;
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
	{	a = (tt__Scope *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Scope, 0, sizeof(tt__Scope), 0, soap_copy_tt__Scope);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ScopeDef1 > 0 || soap_flag_ScopeItem1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Scope::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Scope);
	if (this->soap_out(soap, tag?tag:"tt:Scope", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Scope::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Scope(soap, this, tag, type);
}

SOAP_FMAC3 tt__Scope * SOAP_FMAC4 soap_get_tt__Scope(struct soap *soap, tt__Scope *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Scope(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Scope * SOAP_FMAC2 soap_instantiate_tt__Scope(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Scope(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Scope, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Scope);
		if (size)
			*size = sizeof(tt__Scope);
		((tt__Scope*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Scope, n);
		if (size)
			*size = n * sizeof(tt__Scope);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Scope*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Scope*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Scope(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Scope %p -> %p\n", q, p));
	*(tt__Scope*)p = *(tt__Scope*)q;
}

void tt__MediaUri::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tt__MediaUri::Uri);
	soap_default_bool(soap, &this->tt__MediaUri::InvalidAfterConnect);
	soap_default_bool(soap, &this->tt__MediaUri::InvalidAfterReboot);
	soap_default_xsd__duration(soap, &this->tt__MediaUri::Timeout);
	this->tt__MediaUri::__size = 0;
	this->tt__MediaUri::__any = NULL;
	this->tt__MediaUri::__anyAttribute = NULL;
}

void tt__MediaUri::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tt__MediaUri::Uri);
	soap_embedded(soap, &this->tt__MediaUri::InvalidAfterConnect, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__MediaUri::InvalidAfterReboot, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__MediaUri::Timeout, SOAP_TYPE_xsd__duration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MediaUri::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MediaUri(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaUri(struct soap *soap, const char *tag, int id, const tt__MediaUri *a, const char *type)
{
	if (((tt__MediaUri*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MediaUri*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaUri), "tt:MediaUri"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MediaUri::Uri)
	{	if (soap_out_xsd__anyURI(soap, "tt:Uri", -1, &a->tt__MediaUri::Uri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Uri"))
		return soap->error;
	if (soap_out_bool(soap, "tt:InvalidAfterConnect", -1, &(a->tt__MediaUri::InvalidAfterConnect), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:InvalidAfterReboot", -1, &(a->tt__MediaUri::InvalidAfterReboot), ""))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:Timeout", -1, &(a->tt__MediaUri::Timeout), ""))
		return soap->error;
	if (a->tt__MediaUri::__any)
	{	int i;
		for (i = 0; i < a->tt__MediaUri::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MediaUri::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MediaUri::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MediaUri(soap, tag, this, type);
}

SOAP_FMAC3 tt__MediaUri * SOAP_FMAC4 soap_in_tt__MediaUri(struct soap *soap, const char *tag, tt__MediaUri *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MediaUri *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaUri, sizeof(tt__MediaUri), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MediaUri)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MediaUri *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MediaUri*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Uri1 = 1;
	size_t soap_flag_InvalidAfterConnect1 = 1;
	size_t soap_flag_InvalidAfterReboot1 = 1;
	size_t soap_flag_Timeout1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Uri1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Uri", &(a->tt__MediaUri::Uri), "xsd:anyURI"))
				{	soap_flag_Uri1--;
					continue;
				}
			if (soap_flag_InvalidAfterConnect1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:InvalidAfterConnect", &(a->tt__MediaUri::InvalidAfterConnect), "xsd:boolean"))
				{	soap_flag_InvalidAfterConnect1--;
					continue;
				}
			if (soap_flag_InvalidAfterReboot1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:InvalidAfterReboot", &(a->tt__MediaUri::InvalidAfterReboot), "xsd:boolean"))
				{	soap_flag_InvalidAfterReboot1--;
					continue;
				}
			if (soap_flag_Timeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:Timeout", &(a->tt__MediaUri::Timeout), "xsd:duration"))
				{	soap_flag_Timeout1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MediaUri::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MediaUri::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MediaUri::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MediaUri::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MediaUri::__any, "xsd:byte"))
				{	a->tt__MediaUri::__size++;
					a->tt__MediaUri::__any = NULL;
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
		if (a->tt__MediaUri::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MediaUri::__size)
			a->tt__MediaUri::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MediaUri::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MediaUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaUri, 0, sizeof(tt__MediaUri), 0, soap_copy_tt__MediaUri);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Uri1 > 0 || soap_flag_InvalidAfterConnect1 > 0 || soap_flag_InvalidAfterReboot1 > 0 || soap_flag_Timeout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MediaUri::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MediaUri);
	if (this->soap_out(soap, tag?tag:"tt:MediaUri", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MediaUri::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MediaUri(soap, this, tag, type);
}

SOAP_FMAC3 tt__MediaUri * SOAP_FMAC4 soap_get_tt__MediaUri(struct soap *soap, tt__MediaUri *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MediaUri * SOAP_FMAC2 soap_instantiate_tt__MediaUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MediaUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MediaUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MediaUri);
		if (size)
			*size = sizeof(tt__MediaUri);
		((tt__MediaUri*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MediaUri, n);
		if (size)
			*size = n * sizeof(tt__MediaUri);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MediaUri*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MediaUri*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MediaUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MediaUri %p -> %p\n", q, p));
	*(tt__MediaUri*)p = *(tt__MediaUri*)q;
}

void tt__Transport::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__TransportProtocol(soap, &this->tt__Transport::Protocol);
	this->tt__Transport::Tunnel = NULL;
}

void tt__Transport::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transport(soap, &this->tt__Transport::Tunnel);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Transport::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Transport(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Transport(struct soap *soap, const char *tag, int id, const tt__Transport *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Transport), "tt:Transport"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__TransportProtocol(soap, "tt:Protocol", -1, &(a->tt__Transport::Protocol), ""))
		return soap->error;
	if (soap_out_PointerTott__Transport(soap, "tt:Tunnel", -1, &(a->tt__Transport::Tunnel), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__Transport::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Transport(soap, tag, this, type);
}

SOAP_FMAC3 tt__Transport * SOAP_FMAC4 soap_in_tt__Transport(struct soap *soap, const char *tag, tt__Transport *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Transport *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Transport, sizeof(tt__Transport), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Transport)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Transport *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Protocol1 = 1;
	size_t soap_flag_Tunnel1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Protocol1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TransportProtocol(soap, "tt:Protocol", &(a->tt__Transport::Protocol), "tt:TransportProtocol"))
				{	soap_flag_Protocol1--;
					continue;
				}
			if (soap_flag_Tunnel1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transport(soap, "tt:Tunnel", &(a->tt__Transport::Tunnel), "tt:Transport"))
				{	soap_flag_Tunnel1--;
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
	{	a = (tt__Transport *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Transport, 0, sizeof(tt__Transport), 0, soap_copy_tt__Transport);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Protocol1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Transport::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Transport);
	if (this->soap_out(soap, tag?tag:"tt:Transport", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Transport::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Transport(soap, this, tag, type);
}

SOAP_FMAC3 tt__Transport * SOAP_FMAC4 soap_get_tt__Transport(struct soap *soap, tt__Transport *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Transport(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Transport * SOAP_FMAC2 soap_instantiate_tt__Transport(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Transport(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Transport, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Transport);
		if (size)
			*size = sizeof(tt__Transport);
		((tt__Transport*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Transport, n);
		if (size)
			*size = n * sizeof(tt__Transport);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Transport*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Transport*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Transport(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Transport %p -> %p\n", q, p));
	*(tt__Transport*)p = *(tt__Transport*)q;
}

void tt__StreamSetup::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__StreamType(soap, &this->tt__StreamSetup::Stream);
	this->tt__StreamSetup::Transport = NULL;
	this->tt__StreamSetup::__size = 0;
	this->tt__StreamSetup::__any = NULL;
	this->tt__StreamSetup::__anyAttribute = NULL;
}

void tt__StreamSetup::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transport(soap, &this->tt__StreamSetup::Transport);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__StreamSetup::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__StreamSetup(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__StreamSetup(struct soap *soap, const char *tag, int id, const tt__StreamSetup *a, const char *type)
{
	if (((tt__StreamSetup*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__StreamSetup*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__StreamSetup), "tt:StreamSetup"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_tt__StreamType(soap, "tt:Stream", -1, &(a->tt__StreamSetup::Stream), ""))
		return soap->error;
	if (a->tt__StreamSetup::Transport)
	{	if (soap_out_PointerTott__Transport(soap, "tt:Transport", -1, &a->tt__StreamSetup::Transport, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Transport"))
		return soap->error;
	if (a->tt__StreamSetup::__any)
	{	int i;
		for (i = 0; i < a->tt__StreamSetup::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__StreamSetup::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__StreamSetup::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__StreamSetup(soap, tag, this, type);
}

SOAP_FMAC3 tt__StreamSetup * SOAP_FMAC4 soap_in_tt__StreamSetup(struct soap *soap, const char *tag, tt__StreamSetup *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__StreamSetup *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__StreamSetup, sizeof(tt__StreamSetup), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__StreamSetup)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__StreamSetup *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__StreamSetup*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Stream1 = 1;
	size_t soap_flag_Transport1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Stream1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__StreamType(soap, "tt:Stream", &(a->tt__StreamSetup::Stream), "tt:StreamType"))
				{	soap_flag_Stream1--;
					continue;
				}
			if (soap_flag_Transport1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transport(soap, "tt:Transport", &(a->tt__StreamSetup::Transport), "tt:Transport"))
				{	soap_flag_Transport1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__StreamSetup::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__StreamSetup::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__StreamSetup::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__StreamSetup::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__StreamSetup::__any, "xsd:byte"))
				{	a->tt__StreamSetup::__size++;
					a->tt__StreamSetup::__any = NULL;
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
		if (a->tt__StreamSetup::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__StreamSetup::__size)
			a->tt__StreamSetup::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__StreamSetup::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__StreamSetup *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__StreamSetup, 0, sizeof(tt__StreamSetup), 0, soap_copy_tt__StreamSetup);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Stream1 > 0 || soap_flag_Transport1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__StreamSetup::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__StreamSetup);
	if (this->soap_out(soap, tag?tag:"tt:StreamSetup", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__StreamSetup::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__StreamSetup(soap, this, tag, type);
}

SOAP_FMAC3 tt__StreamSetup * SOAP_FMAC4 soap_get_tt__StreamSetup(struct soap *soap, tt__StreamSetup *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__StreamSetup(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__StreamSetup * SOAP_FMAC2 soap_instantiate_tt__StreamSetup(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__StreamSetup(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__StreamSetup, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__StreamSetup);
		if (size)
			*size = sizeof(tt__StreamSetup);
		((tt__StreamSetup*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__StreamSetup, n);
		if (size)
			*size = n * sizeof(tt__StreamSetup);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__StreamSetup*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__StreamSetup*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__StreamSetup(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__StreamSetup %p -> %p\n", q, p));
	*(tt__StreamSetup*)p = *(tt__StreamSetup*)q;
}

void tt__MulticastConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MulticastConfiguration::Address = NULL;
	soap_default_int(soap, &this->tt__MulticastConfiguration::Port);
	soap_default_int(soap, &this->tt__MulticastConfiguration::TTL);
	soap_default_bool(soap, &this->tt__MulticastConfiguration::AutoStart);
	this->tt__MulticastConfiguration::__size = 0;
	this->tt__MulticastConfiguration::__any = NULL;
	this->tt__MulticastConfiguration::__anyAttribute = NULL;
}

void tt__MulticastConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IPAddress(soap, &this->tt__MulticastConfiguration::Address);
	soap_embedded(soap, &this->tt__MulticastConfiguration::Port, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__MulticastConfiguration::TTL, SOAP_TYPE_int);
	soap_embedded(soap, &this->tt__MulticastConfiguration::AutoStart, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MulticastConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MulticastConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MulticastConfiguration(struct soap *soap, const char *tag, int id, const tt__MulticastConfiguration *a, const char *type)
{
	if (((tt__MulticastConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MulticastConfiguration*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MulticastConfiguration), "tt:MulticastConfiguration"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MulticastConfiguration::Address)
	{	if (soap_out_PointerTott__IPAddress(soap, "tt:Address", -1, &a->tt__MulticastConfiguration::Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (soap_out_int(soap, "tt:Port", -1, &(a->tt__MulticastConfiguration::Port), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:TTL", -1, &(a->tt__MulticastConfiguration::TTL), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:AutoStart", -1, &(a->tt__MulticastConfiguration::AutoStart), ""))
		return soap->error;
	if (a->tt__MulticastConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__MulticastConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MulticastConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MulticastConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MulticastConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__MulticastConfiguration * SOAP_FMAC4 soap_in_tt__MulticastConfiguration(struct soap *soap, const char *tag, tt__MulticastConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MulticastConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MulticastConfiguration, sizeof(tt__MulticastConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MulticastConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MulticastConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MulticastConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Address1 = 1;
	size_t soap_flag_Port1 = 1;
	size_t soap_flag_TTL1 = 1;
	size_t soap_flag_AutoStart1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Address1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IPAddress(soap, "tt:Address", &(a->tt__MulticastConfiguration::Address), "tt:IPAddress"))
				{	soap_flag_Address1--;
					continue;
				}
			if (soap_flag_Port1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Port", &(a->tt__MulticastConfiguration::Port), "xsd:int"))
				{	soap_flag_Port1--;
					continue;
				}
			if (soap_flag_TTL1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:TTL", &(a->tt__MulticastConfiguration::TTL), "xsd:int"))
				{	soap_flag_TTL1--;
					continue;
				}
			if (soap_flag_AutoStart1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:AutoStart", &(a->tt__MulticastConfiguration::AutoStart), "xsd:boolean"))
				{	soap_flag_AutoStart1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MulticastConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MulticastConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MulticastConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MulticastConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MulticastConfiguration::__any, "xsd:byte"))
				{	a->tt__MulticastConfiguration::__size++;
					a->tt__MulticastConfiguration::__any = NULL;
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
		if (a->tt__MulticastConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MulticastConfiguration::__size)
			a->tt__MulticastConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MulticastConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MulticastConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MulticastConfiguration, 0, sizeof(tt__MulticastConfiguration), 0, soap_copy_tt__MulticastConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Address1 > 0 || soap_flag_Port1 > 0 || soap_flag_TTL1 > 0 || soap_flag_AutoStart1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MulticastConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MulticastConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:MulticastConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MulticastConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MulticastConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__MulticastConfiguration * SOAP_FMAC4 soap_get_tt__MulticastConfiguration(struct soap *soap, tt__MulticastConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MulticastConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MulticastConfiguration * SOAP_FMAC2 soap_instantiate_tt__MulticastConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MulticastConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MulticastConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MulticastConfiguration);
		if (size)
			*size = sizeof(tt__MulticastConfiguration);
		((tt__MulticastConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MulticastConfiguration, n);
		if (size)
			*size = n * sizeof(tt__MulticastConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MulticastConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MulticastConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MulticastConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MulticastConfiguration %p -> %p\n", q, p));
	*(tt__MulticastConfiguration*)p = *(tt__MulticastConfiguration*)q;
}

void tt__AudioDecoderConfigurationOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioDecoderConfigurationOptionsExtension::__size = 0;
	this->tt__AudioDecoderConfigurationOptionsExtension::__any = NULL;
}

void tt__AudioDecoderConfigurationOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioDecoderConfigurationOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioDecoderConfigurationOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, int id, const tt__AudioDecoderConfigurationOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension), "tt:AudioDecoderConfigurationOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AudioDecoderConfigurationOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioDecoderConfigurationOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioDecoderConfigurationOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioDecoderConfigurationOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioDecoderConfigurationOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_in_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, tt__AudioDecoderConfigurationOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioDecoderConfigurationOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension, sizeof(tt__AudioDecoderConfigurationOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioDecoderConfigurationOptionsExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__AudioDecoderConfigurationOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioDecoderConfigurationOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioDecoderConfigurationOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioDecoderConfigurationOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioDecoderConfigurationOptionsExtension::__any, "xsd:byte"))
				{	a->tt__AudioDecoderConfigurationOptionsExtension::__size++;
					a->tt__AudioDecoderConfigurationOptionsExtension::__any = NULL;
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
		if (a->tt__AudioDecoderConfigurationOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioDecoderConfigurationOptionsExtension::__size)
			a->tt__AudioDecoderConfigurationOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioDecoderConfigurationOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioDecoderConfigurationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension, 0, sizeof(tt__AudioDecoderConfigurationOptionsExtension), 0, soap_copy_tt__AudioDecoderConfigurationOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AudioDecoderConfigurationOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:AudioDecoderConfigurationOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioDecoderConfigurationOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioDecoderConfigurationOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_get_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, tt__AudioDecoderConfigurationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfigurationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioDecoderConfigurationOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioDecoderConfigurationOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioDecoderConfigurationOptionsExtension);
		if (size)
			*size = sizeof(tt__AudioDecoderConfigurationOptionsExtension);
		((tt__AudioDecoderConfigurationOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioDecoderConfigurationOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__AudioDecoderConfigurationOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioDecoderConfigurationOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioDecoderConfigurationOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioDecoderConfigurationOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioDecoderConfigurationOptionsExtension %p -> %p\n", q, p));
	*(tt__AudioDecoderConfigurationOptionsExtension*)p = *(tt__AudioDecoderConfigurationOptionsExtension*)q;
}

void tt__G726DecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__G726DecOptions::Bitrate = NULL;
	this->tt__G726DecOptions::SampleRateRange = NULL;
	this->tt__G726DecOptions::__size = 0;
	this->tt__G726DecOptions::__any = NULL;
	this->tt__G726DecOptions::__anyAttribute = NULL;
}

void tt__G726DecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &this->tt__G726DecOptions::Bitrate);
	soap_serialize_PointerTott__IntList(soap, &this->tt__G726DecOptions::SampleRateRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__G726DecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__G726DecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__G726DecOptions(struct soap *soap, const char *tag, int id, const tt__G726DecOptions *a, const char *type)
{
	if (((tt__G726DecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__G726DecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__G726DecOptions), "tt:G726DecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__G726DecOptions::Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->tt__G726DecOptions::Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->tt__G726DecOptions::SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->tt__G726DecOptions::SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->tt__G726DecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__G726DecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__G726DecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__G726DecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__G726DecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__G726DecOptions * SOAP_FMAC4 soap_in_tt__G726DecOptions(struct soap *soap, const char *tag, tt__G726DecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__G726DecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__G726DecOptions, sizeof(tt__G726DecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__G726DecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__G726DecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__G726DecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Bitrate1 = 1;
	size_t soap_flag_SampleRateRange1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Bitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &(a->tt__G726DecOptions::Bitrate), "tt:IntList"))
				{	soap_flag_Bitrate1--;
					continue;
				}
			if (soap_flag_SampleRateRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &(a->tt__G726DecOptions::SampleRateRange), "tt:IntList"))
				{	soap_flag_SampleRateRange1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__G726DecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__G726DecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__G726DecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__G726DecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__G726DecOptions::__any, "xsd:byte"))
				{	a->tt__G726DecOptions::__size++;
					a->tt__G726DecOptions::__any = NULL;
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
		if (a->tt__G726DecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__G726DecOptions::__size)
			a->tt__G726DecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__G726DecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__G726DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__G726DecOptions, 0, sizeof(tt__G726DecOptions), 0, soap_copy_tt__G726DecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate1 > 0 || soap_flag_SampleRateRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__G726DecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__G726DecOptions);
	if (this->soap_out(soap, tag?tag:"tt:G726DecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__G726DecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__G726DecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__G726DecOptions * SOAP_FMAC4 soap_get_tt__G726DecOptions(struct soap *soap, tt__G726DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__G726DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__G726DecOptions * SOAP_FMAC2 soap_instantiate_tt__G726DecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__G726DecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__G726DecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__G726DecOptions);
		if (size)
			*size = sizeof(tt__G726DecOptions);
		((tt__G726DecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__G726DecOptions, n);
		if (size)
			*size = n * sizeof(tt__G726DecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__G726DecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__G726DecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__G726DecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__G726DecOptions %p -> %p\n", q, p));
	*(tt__G726DecOptions*)p = *(tt__G726DecOptions*)q;
}

void tt__AACDecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AACDecOptions::Bitrate = NULL;
	this->tt__AACDecOptions::SampleRateRange = NULL;
	this->tt__AACDecOptions::__size = 0;
	this->tt__AACDecOptions::__any = NULL;
	this->tt__AACDecOptions::__anyAttribute = NULL;
}

void tt__AACDecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &this->tt__AACDecOptions::Bitrate);
	soap_serialize_PointerTott__IntList(soap, &this->tt__AACDecOptions::SampleRateRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AACDecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AACDecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AACDecOptions(struct soap *soap, const char *tag, int id, const tt__AACDecOptions *a, const char *type)
{
	if (((tt__AACDecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AACDecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AACDecOptions), "tt:AACDecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AACDecOptions::Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->tt__AACDecOptions::Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->tt__AACDecOptions::SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->tt__AACDecOptions::SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->tt__AACDecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__AACDecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AACDecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AACDecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AACDecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__AACDecOptions * SOAP_FMAC4 soap_in_tt__AACDecOptions(struct soap *soap, const char *tag, tt__AACDecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AACDecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AACDecOptions, sizeof(tt__AACDecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AACDecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AACDecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AACDecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Bitrate1 = 1;
	size_t soap_flag_SampleRateRange1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Bitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &(a->tt__AACDecOptions::Bitrate), "tt:IntList"))
				{	soap_flag_Bitrate1--;
					continue;
				}
			if (soap_flag_SampleRateRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &(a->tt__AACDecOptions::SampleRateRange), "tt:IntList"))
				{	soap_flag_SampleRateRange1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AACDecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AACDecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AACDecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AACDecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AACDecOptions::__any, "xsd:byte"))
				{	a->tt__AACDecOptions::__size++;
					a->tt__AACDecOptions::__any = NULL;
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
		if (a->tt__AACDecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AACDecOptions::__size)
			a->tt__AACDecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AACDecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AACDecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AACDecOptions, 0, sizeof(tt__AACDecOptions), 0, soap_copy_tt__AACDecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate1 > 0 || soap_flag_SampleRateRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AACDecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AACDecOptions);
	if (this->soap_out(soap, tag?tag:"tt:AACDecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AACDecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AACDecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__AACDecOptions * SOAP_FMAC4 soap_get_tt__AACDecOptions(struct soap *soap, tt__AACDecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AACDecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AACDecOptions * SOAP_FMAC2 soap_instantiate_tt__AACDecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AACDecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AACDecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AACDecOptions);
		if (size)
			*size = sizeof(tt__AACDecOptions);
		((tt__AACDecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AACDecOptions, n);
		if (size)
			*size = n * sizeof(tt__AACDecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AACDecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AACDecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AACDecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AACDecOptions %p -> %p\n", q, p));
	*(tt__AACDecOptions*)p = *(tt__AACDecOptions*)q;
}

void tt__G711DecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__G711DecOptions::Bitrate = NULL;
	this->tt__G711DecOptions::SampleRateRange = NULL;
	this->tt__G711DecOptions::__size = 0;
	this->tt__G711DecOptions::__any = NULL;
	this->tt__G711DecOptions::__anyAttribute = NULL;
}

void tt__G711DecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &this->tt__G711DecOptions::Bitrate);
	soap_serialize_PointerTott__IntList(soap, &this->tt__G711DecOptions::SampleRateRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__G711DecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__G711DecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__G711DecOptions(struct soap *soap, const char *tag, int id, const tt__G711DecOptions *a, const char *type)
{
	if (((tt__G711DecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__G711DecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__G711DecOptions), "tt:G711DecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__G711DecOptions::Bitrate)
	{	if (soap_out_PointerTott__IntList(soap, "tt:Bitrate", -1, &a->tt__G711DecOptions::Bitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Bitrate"))
		return soap->error;
	if (a->tt__G711DecOptions::SampleRateRange)
	{	if (soap_out_PointerTott__IntList(soap, "tt:SampleRateRange", -1, &a->tt__G711DecOptions::SampleRateRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SampleRateRange"))
		return soap->error;
	if (a->tt__G711DecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__G711DecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__G711DecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__G711DecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__G711DecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__G711DecOptions * SOAP_FMAC4 soap_in_tt__G711DecOptions(struct soap *soap, const char *tag, tt__G711DecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__G711DecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__G711DecOptions, sizeof(tt__G711DecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__G711DecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__G711DecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__G711DecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Bitrate1 = 1;
	size_t soap_flag_SampleRateRange1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Bitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:Bitrate", &(a->tt__G711DecOptions::Bitrate), "tt:IntList"))
				{	soap_flag_Bitrate1--;
					continue;
				}
			if (soap_flag_SampleRateRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tt:SampleRateRange", &(a->tt__G711DecOptions::SampleRateRange), "tt:IntList"))
				{	soap_flag_SampleRateRange1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__G711DecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__G711DecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__G711DecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__G711DecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__G711DecOptions::__any, "xsd:byte"))
				{	a->tt__G711DecOptions::__size++;
					a->tt__G711DecOptions::__any = NULL;
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
		if (a->tt__G711DecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__G711DecOptions::__size)
			a->tt__G711DecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__G711DecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__G711DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__G711DecOptions, 0, sizeof(tt__G711DecOptions), 0, soap_copy_tt__G711DecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Bitrate1 > 0 || soap_flag_SampleRateRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__G711DecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__G711DecOptions);
	if (this->soap_out(soap, tag?tag:"tt:G711DecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__G711DecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__G711DecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__G711DecOptions * SOAP_FMAC4 soap_get_tt__G711DecOptions(struct soap *soap, tt__G711DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__G711DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__G711DecOptions * SOAP_FMAC2 soap_instantiate_tt__G711DecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__G711DecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__G711DecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__G711DecOptions);
		if (size)
			*size = sizeof(tt__G711DecOptions);
		((tt__G711DecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__G711DecOptions, n);
		if (size)
			*size = n * sizeof(tt__G711DecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__G711DecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__G711DecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__G711DecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__G711DecOptions %p -> %p\n", q, p));
	*(tt__G711DecOptions*)p = *(tt__G711DecOptions*)q;
}

void tt__AudioDecoderConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioDecoderConfigurationOptions::AACDecOptions = NULL;
	this->tt__AudioDecoderConfigurationOptions::G711DecOptions = NULL;
	this->tt__AudioDecoderConfigurationOptions::G726DecOptions = NULL;
	this->tt__AudioDecoderConfigurationOptions::Extension = NULL;
	this->tt__AudioDecoderConfigurationOptions::__anyAttribute = NULL;
}

void tt__AudioDecoderConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AACDecOptions(soap, &this->tt__AudioDecoderConfigurationOptions::AACDecOptions);
	soap_serialize_PointerTott__G711DecOptions(soap, &this->tt__AudioDecoderConfigurationOptions::G711DecOptions);
	soap_serialize_PointerTott__G726DecOptions(soap, &this->tt__AudioDecoderConfigurationOptions::G726DecOptions);
	soap_serialize_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, &this->tt__AudioDecoderConfigurationOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioDecoderConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioDecoderConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__AudioDecoderConfigurationOptions *a, const char *type)
{
	if (((tt__AudioDecoderConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioDecoderConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptions), "tt:AudioDecoderConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__AACDecOptions(soap, "tt:AACDecOptions", -1, &(a->tt__AudioDecoderConfigurationOptions::AACDecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__G711DecOptions(soap, "tt:G711DecOptions", -1, &(a->tt__AudioDecoderConfigurationOptions::G711DecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__G726DecOptions(soap, "tt:G726DecOptions", -1, &(a->tt__AudioDecoderConfigurationOptions::G726DecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, "tt:Extension", -1, &(a->tt__AudioDecoderConfigurationOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__AudioDecoderConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioDecoderConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioDecoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioDecoderConfigurationOptions(struct soap *soap, const char *tag, tt__AudioDecoderConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioDecoderConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfigurationOptions, sizeof(tt__AudioDecoderConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioDecoderConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioDecoderConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioDecoderConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AACDecOptions1 = 1;
	size_t soap_flag_G711DecOptions1 = 1;
	size_t soap_flag_G726DecOptions1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AACDecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AACDecOptions(soap, "tt:AACDecOptions", &(a->tt__AudioDecoderConfigurationOptions::AACDecOptions), "tt:AACDecOptions"))
				{	soap_flag_AACDecOptions1--;
					continue;
				}
			if (soap_flag_G711DecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__G711DecOptions(soap, "tt:G711DecOptions", &(a->tt__AudioDecoderConfigurationOptions::G711DecOptions), "tt:G711DecOptions"))
				{	soap_flag_G711DecOptions1--;
					continue;
				}
			if (soap_flag_G726DecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__G726DecOptions(soap, "tt:G726DecOptions", &(a->tt__AudioDecoderConfigurationOptions::G726DecOptions), "tt:G726DecOptions"))
				{	soap_flag_G726DecOptions1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfigurationOptionsExtension(soap, "tt:Extension", &(a->tt__AudioDecoderConfigurationOptions::Extension), "tt:AudioDecoderConfigurationOptionsExtension"))
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
	{	a = (tt__AudioDecoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfigurationOptions, 0, sizeof(tt__AudioDecoderConfigurationOptions), 0, soap_copy_tt__AudioDecoderConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AudioDecoderConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:AudioDecoderConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioDecoderConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioDecoderConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioDecoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioDecoderConfigurationOptions(struct soap *soap, tt__AudioDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioDecoderConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__AudioDecoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioDecoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioDecoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioDecoderConfigurationOptions);
		if (size)
			*size = sizeof(tt__AudioDecoderConfigurationOptions);
		((tt__AudioDecoderConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioDecoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__AudioDecoderConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioDecoderConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioDecoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioDecoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioDecoderConfigurationOptions %p -> %p\n", q, p));
	*(tt__AudioDecoderConfigurationOptions*)p = *(tt__AudioDecoderConfigurationOptions*)q;
}

void tt__AudioDecoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioDecoderConfiguration::__size = 0;
	this->tt__AudioDecoderConfiguration::__any = NULL;
	this->tt__AudioDecoderConfiguration::__anyAttribute = NULL;
}

void tt__AudioDecoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioDecoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioDecoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const tt__AudioDecoderConfiguration *a, const char *type)
{
	if (((tt__AudioDecoderConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioDecoderConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioDecoderConfiguration), "tt:AudioDecoderConfiguration"))
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
	if (a->tt__AudioDecoderConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioDecoderConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioDecoderConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioDecoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioDecoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioDecoderConfiguration * SOAP_FMAC4 soap_in_tt__AudioDecoderConfiguration(struct soap *soap, const char *tag, tt__AudioDecoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioDecoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioDecoderConfiguration, sizeof(tt__AudioDecoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioDecoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioDecoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioDecoderConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
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
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AudioDecoderConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioDecoderConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioDecoderConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioDecoderConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioDecoderConfiguration::__any, "xsd:byte"))
				{	a->tt__AudioDecoderConfiguration::__size++;
					a->tt__AudioDecoderConfiguration::__any = NULL;
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
		if (a->tt__AudioDecoderConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioDecoderConfiguration::__size)
			a->tt__AudioDecoderConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioDecoderConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioDecoderConfiguration, 0, sizeof(tt__AudioDecoderConfiguration), 0, soap_copy_tt__AudioDecoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AudioDecoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioDecoderConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:AudioDecoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioDecoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioDecoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioDecoderConfiguration * SOAP_FMAC4 soap_get_tt__AudioDecoderConfiguration(struct soap *soap, tt__AudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioDecoderConfiguration * SOAP_FMAC2 soap_instantiate_tt__AudioDecoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioDecoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioDecoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioDecoderConfiguration);
		if (size)
			*size = sizeof(tt__AudioDecoderConfiguration);
		((tt__AudioDecoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioDecoderConfiguration, n);
		if (size)
			*size = n * sizeof(tt__AudioDecoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioDecoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioDecoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioDecoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioDecoderConfiguration %p -> %p\n", q, p));
	*(tt__AudioDecoderConfiguration*)p = *(tt__AudioDecoderConfiguration*)q;
}

void tt__AudioOutputConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable = 0;
	this->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = NULL;
	this->tt__AudioOutputConfigurationOptions::__sizeSendPrimacyOptions = 0;
	this->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = NULL;
	this->tt__AudioOutputConfigurationOptions::OutputLevelRange = NULL;
	this->tt__AudioOutputConfigurationOptions::__size = 0;
	this->tt__AudioOutputConfigurationOptions::__any = NULL;
	this->tt__AudioOutputConfigurationOptions::__anyAttribute = NULL;
}

void tt__AudioOutputConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__AudioOutputConfigurationOptions::OutputTokensAvailable)
	{	int i;
		for (i = 0; i < this->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, this->tt__AudioOutputConfigurationOptions::OutputTokensAvailable + i);
		}
	}
	if (this->tt__AudioOutputConfigurationOptions::SendPrimacyOptions)
	{	int i;
		for (i = 0; i < this->tt__AudioOutputConfigurationOptions::__sizeSendPrimacyOptions; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->tt__AudioOutputConfigurationOptions::SendPrimacyOptions + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &this->tt__AudioOutputConfigurationOptions::OutputLevelRange);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioOutputConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioOutputConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__AudioOutputConfigurationOptions *a, const char *type)
{
	if (((tt__AudioOutputConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioOutputConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioOutputConfigurationOptions), "tt:AudioOutputConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable)
	{	int i;
		for (i = 0; i < a->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:OutputTokensAvailable", -1, a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable + i, ""))
				return soap->error;
	}
	if (a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions)
	{	int i;
		for (i = 0; i < a->tt__AudioOutputConfigurationOptions::__sizeSendPrimacyOptions; i++)
			if (soap_out_xsd__anyURI(soap, "tt:SendPrimacyOptions", -1, a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions + i, ""))
				return soap->error;
	}
	if (a->tt__AudioOutputConfigurationOptions::OutputLevelRange)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:OutputLevelRange", -1, &a->tt__AudioOutputConfigurationOptions::OutputLevelRange, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OutputLevelRange"))
		return soap->error;
	if (a->tt__AudioOutputConfigurationOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioOutputConfigurationOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioOutputConfigurationOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioOutputConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioOutputConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioOutputConfigurationOptions * SOAP_FMAC4 soap_in_tt__AudioOutputConfigurationOptions(struct soap *soap, const char *tag, tt__AudioOutputConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioOutputConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioOutputConfigurationOptions, sizeof(tt__AudioOutputConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioOutputConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioOutputConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioOutputConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_OutputTokensAvailable1 = NULL;
	struct soap_blist *soap_blist_SendPrimacyOptions1 = NULL;
	size_t soap_flag_OutputLevelRange1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:OutputTokensAvailable", 1, NULL))
			{	if (a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable == NULL)
				{	if (soap_blist_OutputTokensAvailable1 == NULL)
						soap_blist_OutputTokensAvailable1 = soap_new_block(soap);
					a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = (char **)soap_push_block(soap, soap_blist_OutputTokensAvailable1, sizeof(char *));
					if (a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable == NULL)
						return NULL;
					*a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:OutputTokensAvailable", a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable, "tt:ReferenceToken"))
				{	a->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable++;
					a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SendPrimacyOptions", 1, NULL))
			{	if (a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions == NULL)
				{	if (soap_blist_SendPrimacyOptions1 == NULL)
						soap_blist_SendPrimacyOptions1 = soap_new_block(soap);
					a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = (char **)soap_push_block(soap, soap_blist_SendPrimacyOptions1, sizeof(char *));
					if (a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions == NULL)
						return NULL;
					*a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:SendPrimacyOptions", a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions, "xsd:anyURI"))
				{	a->tt__AudioOutputConfigurationOptions::__sizeSendPrimacyOptions++;
					a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = NULL;
					continue;
				}
			}
			if (soap_flag_OutputLevelRange1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:OutputLevelRange", &(a->tt__AudioOutputConfigurationOptions::OutputLevelRange), "tt:IntRange"))
				{	soap_flag_OutputLevelRange1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AudioOutputConfigurationOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioOutputConfigurationOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioOutputConfigurationOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioOutputConfigurationOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioOutputConfigurationOptions::__any, "xsd:byte"))
				{	a->tt__AudioOutputConfigurationOptions::__size++;
					a->tt__AudioOutputConfigurationOptions::__any = NULL;
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
		if (a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable)
			soap_pop_block(soap, soap_blist_OutputTokensAvailable1);
		if (a->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable)
			a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = (char **)soap_save_block(soap, soap_blist_OutputTokensAvailable1, NULL, 1);
		else
		{	a->tt__AudioOutputConfigurationOptions::OutputTokensAvailable = NULL;
			if (soap_blist_OutputTokensAvailable1)
				soap_end_block(soap, soap_blist_OutputTokensAvailable1);
		}
		if (a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions)
			soap_pop_block(soap, soap_blist_SendPrimacyOptions1);
		if (a->tt__AudioOutputConfigurationOptions::__sizeSendPrimacyOptions)
			a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = (char **)soap_save_block(soap, soap_blist_SendPrimacyOptions1, NULL, 1);
		else
		{	a->tt__AudioOutputConfigurationOptions::SendPrimacyOptions = NULL;
			if (soap_blist_SendPrimacyOptions1)
				soap_end_block(soap, soap_blist_SendPrimacyOptions1);
		}
		if (a->tt__AudioOutputConfigurationOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioOutputConfigurationOptions::__size)
			a->tt__AudioOutputConfigurationOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioOutputConfigurationOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioOutputConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioOutputConfigurationOptions, 0, sizeof(tt__AudioOutputConfigurationOptions), 0, soap_copy_tt__AudioOutputConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__AudioOutputConfigurationOptions::__sizeOutputTokensAvailable < 1 || soap_flag_OutputLevelRange1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AudioOutputConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioOutputConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:AudioOutputConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioOutputConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioOutputConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioOutputConfigurationOptions * SOAP_FMAC4 soap_get_tt__AudioOutputConfigurationOptions(struct soap *soap, tt__AudioOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioOutputConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__AudioOutputConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioOutputConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioOutputConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioOutputConfigurationOptions);
		if (size)
			*size = sizeof(tt__AudioOutputConfigurationOptions);
		((tt__AudioOutputConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioOutputConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__AudioOutputConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioOutputConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioOutputConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioOutputConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioOutputConfigurationOptions %p -> %p\n", q, p));
	*(tt__AudioOutputConfigurationOptions*)p = *(tt__AudioOutputConfigurationOptions*)q;
}

void tt__AudioOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__AudioOutputConfiguration::OutputToken);
	soap_default_xsd__anyURI(soap, &this->tt__AudioOutputConfiguration::SendPrimacy);
	soap_default_int(soap, &this->tt__AudioOutputConfiguration::OutputLevel);
	this->tt__AudioOutputConfiguration::__size = 0;
	this->tt__AudioOutputConfiguration::__any = NULL;
	this->tt__AudioOutputConfiguration::__anyAttribute = NULL;
}

void tt__AudioOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__AudioOutputConfiguration::OutputToken);
	soap_serialize_xsd__anyURI(soap, &this->tt__AudioOutputConfiguration::SendPrimacy);
	soap_embedded(soap, &this->tt__AudioOutputConfiguration::OutputLevel, SOAP_TYPE_int);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioOutputConfiguration(struct soap *soap, const char *tag, int id, const tt__AudioOutputConfiguration *a, const char *type)
{
	if (((tt__AudioOutputConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioOutputConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioOutputConfiguration), "tt:AudioOutputConfiguration"))
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
	if (a->tt__AudioOutputConfiguration::OutputToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:OutputToken", -1, &a->tt__AudioOutputConfiguration::OutputToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OutputToken"))
		return soap->error;
	if (soap_out_xsd__anyURI(soap, "tt:SendPrimacy", -1, &(a->tt__AudioOutputConfiguration::SendPrimacy), ""))
		return soap->error;
	if (soap_out_int(soap, "tt:OutputLevel", -1, &(a->tt__AudioOutputConfiguration::OutputLevel), ""))
		return soap->error;
	if (a->tt__AudioOutputConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioOutputConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioOutputConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioOutputConfiguration * SOAP_FMAC4 soap_in_tt__AudioOutputConfiguration(struct soap *soap, const char *tag, tt__AudioOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioOutputConfiguration, sizeof(tt__AudioOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioOutputConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_OutputToken1 = 1;
	size_t soap_flag_SendPrimacy1 = 1;
	size_t soap_flag_OutputLevel1 = 1;
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
			if (soap_flag_OutputToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:OutputToken", &(a->tt__AudioOutputConfiguration::OutputToken), "tt:ReferenceToken"))
				{	soap_flag_OutputToken1--;
					continue;
				}
			if (soap_flag_SendPrimacy1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:SendPrimacy", &(a->tt__AudioOutputConfiguration::SendPrimacy), "xsd:anyURI"))
				{	soap_flag_SendPrimacy1--;
					continue;
				}
			if (soap_flag_OutputLevel1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:OutputLevel", &(a->tt__AudioOutputConfiguration::OutputLevel), "xsd:int"))
				{	soap_flag_OutputLevel1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AudioOutputConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioOutputConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioOutputConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioOutputConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioOutputConfiguration::__any, "xsd:byte"))
				{	a->tt__AudioOutputConfiguration::__size++;
					a->tt__AudioOutputConfiguration::__any = NULL;
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
		if (a->tt__AudioOutputConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioOutputConfiguration::__size)
			a->tt__AudioOutputConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioOutputConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioOutputConfiguration, 0, sizeof(tt__AudioOutputConfiguration), 0, soap_copy_tt__AudioOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_OutputToken1 > 0 || soap_flag_OutputLevel1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AudioOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:AudioOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioOutputConfiguration * SOAP_FMAC4 soap_get_tt__AudioOutputConfiguration(struct soap *soap, tt__AudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioOutputConfiguration * SOAP_FMAC2 soap_instantiate_tt__AudioOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioOutputConfiguration);
		if (size)
			*size = sizeof(tt__AudioOutputConfiguration);
		((tt__AudioOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioOutputConfiguration, n);
		if (size)
			*size = n * sizeof(tt__AudioOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioOutputConfiguration %p -> %p\n", q, p));
	*(tt__AudioOutputConfiguration*)p = *(tt__AudioOutputConfiguration*)q;
}

void tt__AudioOutput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__AudioOutput::__size = 0;
	this->tt__AudioOutput::__any = NULL;
	this->tt__AudioOutput::__anyAttribute = NULL;
}

void tt__AudioOutput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AudioOutput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AudioOutput(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioOutput(struct soap *soap, const char *tag, int id, const tt__AudioOutput *a, const char *type)
{
	if (((tt__AudioOutput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AudioOutput*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioOutput), "tt:AudioOutput"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AudioOutput::__any)
	{	int i;
		for (i = 0; i < a->tt__AudioOutput::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AudioOutput::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AudioOutput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AudioOutput(soap, tag, this, type);
}

SOAP_FMAC3 tt__AudioOutput * SOAP_FMAC4 soap_in_tt__AudioOutput(struct soap *soap, const char *tag, tt__AudioOutput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AudioOutput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioOutput, sizeof(tt__AudioOutput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AudioOutput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AudioOutput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AudioOutput*)a)->__anyAttribute, 0, -1))
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
			{	if (a->tt__AudioOutput::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AudioOutput::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AudioOutput::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AudioOutput::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AudioOutput::__any, "xsd:byte"))
				{	a->tt__AudioOutput::__size++;
					a->tt__AudioOutput::__any = NULL;
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
		if (a->tt__AudioOutput::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AudioOutput::__size)
			a->tt__AudioOutput::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AudioOutput::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AudioOutput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioOutput, 0, sizeof(tt__AudioOutput), 0, soap_copy_tt__AudioOutput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__AudioOutput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AudioOutput);
	if (this->soap_out(soap, tag?tag:"tt:AudioOutput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AudioOutput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AudioOutput(soap, this, tag, type);
}

SOAP_FMAC3 tt__AudioOutput * SOAP_FMAC4 soap_get_tt__AudioOutput(struct soap *soap, tt__AudioOutput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioOutput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AudioOutput * SOAP_FMAC2 soap_instantiate_tt__AudioOutput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AudioOutput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AudioOutput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__AudioOutput);
		if (size)
			*size = sizeof(tt__AudioOutput);
		((tt__AudioOutput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioOutput, n);
		if (size)
			*size = n * sizeof(tt__AudioOutput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__AudioOutput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__AudioOutput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AudioOutput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AudioOutput %p -> %p\n", q, p));
	*(tt__AudioOutput*)p = *(tt__AudioOutput*)q;
}

void tt__VideoDecoderConfigurationOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoDecoderConfigurationOptionsExtension::__size = 0;
	this->tt__VideoDecoderConfigurationOptionsExtension::__any = NULL;
}

void tt__VideoDecoderConfigurationOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoDecoderConfigurationOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoDecoderConfigurationOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, int id, const tt__VideoDecoderConfigurationOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension), "tt:VideoDecoderConfigurationOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoDecoderConfigurationOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoDecoderConfigurationOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoDecoderConfigurationOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoDecoderConfigurationOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoDecoderConfigurationOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_in_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, const char *tag, tt__VideoDecoderConfigurationOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoDecoderConfigurationOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension, sizeof(tt__VideoDecoderConfigurationOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoDecoderConfigurationOptionsExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__VideoDecoderConfigurationOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoDecoderConfigurationOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoDecoderConfigurationOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoDecoderConfigurationOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoDecoderConfigurationOptionsExtension::__any, "xsd:byte"))
				{	a->tt__VideoDecoderConfigurationOptionsExtension::__size++;
					a->tt__VideoDecoderConfigurationOptionsExtension::__any = NULL;
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
		if (a->tt__VideoDecoderConfigurationOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoDecoderConfigurationOptionsExtension::__size)
			a->tt__VideoDecoderConfigurationOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoDecoderConfigurationOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoDecoderConfigurationOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension, 0, sizeof(tt__VideoDecoderConfigurationOptionsExtension), 0, soap_copy_tt__VideoDecoderConfigurationOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoDecoderConfigurationOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:VideoDecoderConfigurationOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoDecoderConfigurationOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoDecoderConfigurationOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoDecoderConfigurationOptionsExtension * SOAP_FMAC4 soap_get_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, tt__VideoDecoderConfigurationOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoDecoderConfigurationOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoDecoderConfigurationOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoDecoderConfigurationOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoDecoderConfigurationOptionsExtension);
		if (size)
			*size = sizeof(tt__VideoDecoderConfigurationOptionsExtension);
		((tt__VideoDecoderConfigurationOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoDecoderConfigurationOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__VideoDecoderConfigurationOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoDecoderConfigurationOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoDecoderConfigurationOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoDecoderConfigurationOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoDecoderConfigurationOptionsExtension %p -> %p\n", q, p));
	*(tt__VideoDecoderConfigurationOptionsExtension*)p = *(tt__VideoDecoderConfigurationOptionsExtension*)q;
}

void tt__Mpeg4DecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__Mpeg4DecOptions::__sizeResolutionsAvailable = 0;
	this->tt__Mpeg4DecOptions::ResolutionsAvailable = NULL;
	this->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles = 0;
	this->tt__Mpeg4DecOptions::SupportedMpeg4Profiles = NULL;
	this->tt__Mpeg4DecOptions::SupportedInputBitrate = NULL;
	this->tt__Mpeg4DecOptions::SupportedFrameRate = NULL;
	this->tt__Mpeg4DecOptions::__size = 0;
	this->tt__Mpeg4DecOptions::__any = NULL;
	this->tt__Mpeg4DecOptions::__anyAttribute = NULL;
}

void tt__Mpeg4DecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__Mpeg4DecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < this->tt__Mpeg4DecOptions::__sizeResolutionsAvailable; i++)
		{
			soap_serialize_PointerTott__VideoResolution(soap, this->tt__Mpeg4DecOptions::ResolutionsAvailable + i);
		}
	}
	if (this->tt__Mpeg4DecOptions::SupportedMpeg4Profiles)
	{	int i;
		for (i = 0; i < this->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles; i++)
		{
			soap_embedded(soap, this->tt__Mpeg4DecOptions::SupportedMpeg4Profiles + i, SOAP_TYPE_tt__Mpeg4Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &this->tt__Mpeg4DecOptions::SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &this->tt__Mpeg4DecOptions::SupportedFrameRate);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__Mpeg4DecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__Mpeg4DecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Mpeg4DecOptions(struct soap *soap, const char *tag, int id, const tt__Mpeg4DecOptions *a, const char *type)
{
	if (((tt__Mpeg4DecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__Mpeg4DecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Mpeg4DecOptions), "tt:Mpeg4DecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__Mpeg4DecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->tt__Mpeg4DecOptions::__sizeResolutionsAvailable; i++)
			if (soap_out_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->tt__Mpeg4DecOptions::ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles)
	{	int i;
		for (i = 0; i < a->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles; i++)
			if (soap_out_tt__Mpeg4Profile(soap, "tt:SupportedMpeg4Profiles", -1, a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles + i, ""))
				return soap->error;
	}
	if (a->tt__Mpeg4DecOptions::SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->tt__Mpeg4DecOptions::SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->tt__Mpeg4DecOptions::SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->tt__Mpeg4DecOptions::SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->tt__Mpeg4DecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__Mpeg4DecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__Mpeg4DecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__Mpeg4DecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__Mpeg4DecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__Mpeg4DecOptions * SOAP_FMAC4 soap_in_tt__Mpeg4DecOptions(struct soap *soap, const char *tag, tt__Mpeg4DecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__Mpeg4DecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Mpeg4DecOptions, sizeof(tt__Mpeg4DecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__Mpeg4DecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__Mpeg4DecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__Mpeg4DecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_ResolutionsAvailable1 = NULL;
	struct soap_blist *soap_blist_SupportedMpeg4Profiles1 = NULL;
	size_t soap_flag_SupportedInputBitrate1 = 1;
	size_t soap_flag_SupportedFrameRate1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->tt__Mpeg4DecOptions::ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable1 == NULL)
						soap_blist_ResolutionsAvailable1 = soap_new_block(soap);
					a->tt__Mpeg4DecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_push_block(soap, soap_blist_ResolutionsAvailable1, sizeof(tt__VideoResolution *));
					if (a->tt__Mpeg4DecOptions::ResolutionsAvailable == NULL)
						return NULL;
					*a->tt__Mpeg4DecOptions::ResolutionsAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", a->tt__Mpeg4DecOptions::ResolutionsAvailable, "tt:VideoResolution"))
				{	a->tt__Mpeg4DecOptions::__sizeResolutionsAvailable++;
					a->tt__Mpeg4DecOptions::ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedMpeg4Profiles", 1, NULL))
			{	if (a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles == NULL)
				{	if (soap_blist_SupportedMpeg4Profiles1 == NULL)
						soap_blist_SupportedMpeg4Profiles1 = soap_new_block(soap);
					a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles = (enum tt__Mpeg4Profile *)soap_push_block(soap, soap_blist_SupportedMpeg4Profiles1, sizeof(enum tt__Mpeg4Profile));
					if (a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles == NULL)
						return NULL;
					soap_default_tt__Mpeg4Profile(soap, a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles);
				}
				soap_revert(soap);
				if (soap_in_tt__Mpeg4Profile(soap, "tt:SupportedMpeg4Profiles", a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles, "tt:Mpeg4Profile"))
				{	a->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles++;
					a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &(a->tt__Mpeg4DecOptions::SupportedInputBitrate), "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate1--;
					continue;
				}
			if (soap_flag_SupportedFrameRate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &(a->tt__Mpeg4DecOptions::SupportedFrameRate), "tt:IntRange"))
				{	soap_flag_SupportedFrameRate1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__Mpeg4DecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__Mpeg4DecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__Mpeg4DecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__Mpeg4DecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__Mpeg4DecOptions::__any, "xsd:byte"))
				{	a->tt__Mpeg4DecOptions::__size++;
					a->tt__Mpeg4DecOptions::__any = NULL;
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
		if (a->tt__Mpeg4DecOptions::ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable1);
		if (a->tt__Mpeg4DecOptions::__sizeResolutionsAvailable)
			a->tt__Mpeg4DecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_save_block(soap, soap_blist_ResolutionsAvailable1, NULL, 1);
		else
		{	a->tt__Mpeg4DecOptions::ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable1)
				soap_end_block(soap, soap_blist_ResolutionsAvailable1);
		}
		if (a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles)
			soap_pop_block(soap, soap_blist_SupportedMpeg4Profiles1);
		if (a->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles)
			a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles = (enum tt__Mpeg4Profile *)soap_save_block(soap, soap_blist_SupportedMpeg4Profiles1, NULL, 1);
		else
		{	a->tt__Mpeg4DecOptions::SupportedMpeg4Profiles = NULL;
			if (soap_blist_SupportedMpeg4Profiles1)
				soap_end_block(soap, soap_blist_SupportedMpeg4Profiles1);
		}
		if (a->tt__Mpeg4DecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__Mpeg4DecOptions::__size)
			a->tt__Mpeg4DecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__Mpeg4DecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__Mpeg4DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Mpeg4DecOptions, 0, sizeof(tt__Mpeg4DecOptions), 0, soap_copy_tt__Mpeg4DecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__Mpeg4DecOptions::__sizeResolutionsAvailable < 1 || a->tt__Mpeg4DecOptions::__sizeSupportedMpeg4Profiles < 1 || soap_flag_SupportedInputBitrate1 > 0 || soap_flag_SupportedFrameRate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__Mpeg4DecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__Mpeg4DecOptions);
	if (this->soap_out(soap, tag?tag:"tt:Mpeg4DecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__Mpeg4DecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__Mpeg4DecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__Mpeg4DecOptions * SOAP_FMAC4 soap_get_tt__Mpeg4DecOptions(struct soap *soap, tt__Mpeg4DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Mpeg4DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__Mpeg4DecOptions * SOAP_FMAC2 soap_instantiate_tt__Mpeg4DecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__Mpeg4DecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__Mpeg4DecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__Mpeg4DecOptions);
		if (size)
			*size = sizeof(tt__Mpeg4DecOptions);
		((tt__Mpeg4DecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Mpeg4DecOptions, n);
		if (size)
			*size = n * sizeof(tt__Mpeg4DecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__Mpeg4DecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__Mpeg4DecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__Mpeg4DecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__Mpeg4DecOptions %p -> %p\n", q, p));
	*(tt__Mpeg4DecOptions*)p = *(tt__Mpeg4DecOptions*)q;
}

void tt__JpegDecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__JpegDecOptions::__sizeResolutionsAvailable = 0;
	this->tt__JpegDecOptions::ResolutionsAvailable = NULL;
	this->tt__JpegDecOptions::SupportedInputBitrate = NULL;
	this->tt__JpegDecOptions::SupportedFrameRate = NULL;
	this->tt__JpegDecOptions::__size = 0;
	this->tt__JpegDecOptions::__any = NULL;
	this->tt__JpegDecOptions::__anyAttribute = NULL;
}

void tt__JpegDecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__JpegDecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < this->tt__JpegDecOptions::__sizeResolutionsAvailable; i++)
		{
			soap_serialize_PointerTott__VideoResolution(soap, this->tt__JpegDecOptions::ResolutionsAvailable + i);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &this->tt__JpegDecOptions::SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &this->tt__JpegDecOptions::SupportedFrameRate);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__JpegDecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__JpegDecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__JpegDecOptions(struct soap *soap, const char *tag, int id, const tt__JpegDecOptions *a, const char *type)
{
	if (((tt__JpegDecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__JpegDecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__JpegDecOptions), "tt:JpegDecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__JpegDecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->tt__JpegDecOptions::__sizeResolutionsAvailable; i++)
			if (soap_out_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->tt__JpegDecOptions::ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->tt__JpegDecOptions::SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->tt__JpegDecOptions::SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->tt__JpegDecOptions::SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->tt__JpegDecOptions::SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->tt__JpegDecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__JpegDecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__JpegDecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__JpegDecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__JpegDecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__JpegDecOptions * SOAP_FMAC4 soap_in_tt__JpegDecOptions(struct soap *soap, const char *tag, tt__JpegDecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__JpegDecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__JpegDecOptions, sizeof(tt__JpegDecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__JpegDecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__JpegDecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__JpegDecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_ResolutionsAvailable1 = NULL;
	size_t soap_flag_SupportedInputBitrate1 = 1;
	size_t soap_flag_SupportedFrameRate1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->tt__JpegDecOptions::ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable1 == NULL)
						soap_blist_ResolutionsAvailable1 = soap_new_block(soap);
					a->tt__JpegDecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_push_block(soap, soap_blist_ResolutionsAvailable1, sizeof(tt__VideoResolution *));
					if (a->tt__JpegDecOptions::ResolutionsAvailable == NULL)
						return NULL;
					*a->tt__JpegDecOptions::ResolutionsAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", a->tt__JpegDecOptions::ResolutionsAvailable, "tt:VideoResolution"))
				{	a->tt__JpegDecOptions::__sizeResolutionsAvailable++;
					a->tt__JpegDecOptions::ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &(a->tt__JpegDecOptions::SupportedInputBitrate), "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate1--;
					continue;
				}
			if (soap_flag_SupportedFrameRate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &(a->tt__JpegDecOptions::SupportedFrameRate), "tt:IntRange"))
				{	soap_flag_SupportedFrameRate1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__JpegDecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__JpegDecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__JpegDecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__JpegDecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__JpegDecOptions::__any, "xsd:byte"))
				{	a->tt__JpegDecOptions::__size++;
					a->tt__JpegDecOptions::__any = NULL;
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
		if (a->tt__JpegDecOptions::ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable1);
		if (a->tt__JpegDecOptions::__sizeResolutionsAvailable)
			a->tt__JpegDecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_save_block(soap, soap_blist_ResolutionsAvailable1, NULL, 1);
		else
		{	a->tt__JpegDecOptions::ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable1)
				soap_end_block(soap, soap_blist_ResolutionsAvailable1);
		}
		if (a->tt__JpegDecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__JpegDecOptions::__size)
			a->tt__JpegDecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__JpegDecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__JpegDecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__JpegDecOptions, 0, sizeof(tt__JpegDecOptions), 0, soap_copy_tt__JpegDecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__JpegDecOptions::__sizeResolutionsAvailable < 1 || soap_flag_SupportedInputBitrate1 > 0 || soap_flag_SupportedFrameRate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__JpegDecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__JpegDecOptions);
	if (this->soap_out(soap, tag?tag:"tt:JpegDecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__JpegDecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__JpegDecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__JpegDecOptions * SOAP_FMAC4 soap_get_tt__JpegDecOptions(struct soap *soap, tt__JpegDecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__JpegDecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__JpegDecOptions * SOAP_FMAC2 soap_instantiate_tt__JpegDecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__JpegDecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__JpegDecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__JpegDecOptions);
		if (size)
			*size = sizeof(tt__JpegDecOptions);
		((tt__JpegDecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__JpegDecOptions, n);
		if (size)
			*size = n * sizeof(tt__JpegDecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__JpegDecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__JpegDecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__JpegDecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__JpegDecOptions %p -> %p\n", q, p));
	*(tt__JpegDecOptions*)p = *(tt__JpegDecOptions*)q;
}

void tt__H264DecOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__H264DecOptions::__sizeResolutionsAvailable = 0;
	this->tt__H264DecOptions::ResolutionsAvailable = NULL;
	this->tt__H264DecOptions::__sizeSupportedH264Profiles = 0;
	this->tt__H264DecOptions::SupportedH264Profiles = NULL;
	this->tt__H264DecOptions::SupportedInputBitrate = NULL;
	this->tt__H264DecOptions::SupportedFrameRate = NULL;
	this->tt__H264DecOptions::__size = 0;
	this->tt__H264DecOptions::__any = NULL;
	this->tt__H264DecOptions::__anyAttribute = NULL;
}

void tt__H264DecOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__H264DecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < this->tt__H264DecOptions::__sizeResolutionsAvailable; i++)
		{
			soap_serialize_PointerTott__VideoResolution(soap, this->tt__H264DecOptions::ResolutionsAvailable + i);
		}
	}
	if (this->tt__H264DecOptions::SupportedH264Profiles)
	{	int i;
		for (i = 0; i < this->tt__H264DecOptions::__sizeSupportedH264Profiles; i++)
		{
			soap_embedded(soap, this->tt__H264DecOptions::SupportedH264Profiles + i, SOAP_TYPE_tt__H264Profile);
		}
	}
	soap_serialize_PointerTott__IntRange(soap, &this->tt__H264DecOptions::SupportedInputBitrate);
	soap_serialize_PointerTott__IntRange(soap, &this->tt__H264DecOptions::SupportedFrameRate);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__H264DecOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__H264DecOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__H264DecOptions(struct soap *soap, const char *tag, int id, const tt__H264DecOptions *a, const char *type)
{
	if (((tt__H264DecOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__H264DecOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__H264DecOptions), "tt:H264DecOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__H264DecOptions::ResolutionsAvailable)
	{	int i;
		for (i = 0; i < a->tt__H264DecOptions::__sizeResolutionsAvailable; i++)
			if (soap_out_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", -1, a->tt__H264DecOptions::ResolutionsAvailable + i, ""))
				return soap->error;
	}
	if (a->tt__H264DecOptions::SupportedH264Profiles)
	{	int i;
		for (i = 0; i < a->tt__H264DecOptions::__sizeSupportedH264Profiles; i++)
			if (soap_out_tt__H264Profile(soap, "tt:SupportedH264Profiles", -1, a->tt__H264DecOptions::SupportedH264Profiles + i, ""))
				return soap->error;
	}
	if (a->tt__H264DecOptions::SupportedInputBitrate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", -1, &a->tt__H264DecOptions::SupportedInputBitrate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedInputBitrate"))
		return soap->error;
	if (a->tt__H264DecOptions::SupportedFrameRate)
	{	if (soap_out_PointerTott__IntRange(soap, "tt:SupportedFrameRate", -1, &a->tt__H264DecOptions::SupportedFrameRate, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SupportedFrameRate"))
		return soap->error;
	if (a->tt__H264DecOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__H264DecOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__H264DecOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__H264DecOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__H264DecOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__H264DecOptions * SOAP_FMAC4 soap_in_tt__H264DecOptions(struct soap *soap, const char *tag, tt__H264DecOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__H264DecOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__H264DecOptions, sizeof(tt__H264DecOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__H264DecOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__H264DecOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__H264DecOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist_ResolutionsAvailable1 = NULL;
	struct soap_blist *soap_blist_SupportedH264Profiles1 = NULL;
	size_t soap_flag_SupportedInputBitrate1 = 1;
	size_t soap_flag_SupportedFrameRate1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ResolutionsAvailable", 1, NULL))
			{	if (a->tt__H264DecOptions::ResolutionsAvailable == NULL)
				{	if (soap_blist_ResolutionsAvailable1 == NULL)
						soap_blist_ResolutionsAvailable1 = soap_new_block(soap);
					a->tt__H264DecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_push_block(soap, soap_blist_ResolutionsAvailable1, sizeof(tt__VideoResolution *));
					if (a->tt__H264DecOptions::ResolutionsAvailable == NULL)
						return NULL;
					*a->tt__H264DecOptions::ResolutionsAvailable = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoResolution(soap, "tt:ResolutionsAvailable", a->tt__H264DecOptions::ResolutionsAvailable, "tt:VideoResolution"))
				{	a->tt__H264DecOptions::__sizeResolutionsAvailable++;
					a->tt__H264DecOptions::ResolutionsAvailable = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedH264Profiles", 1, NULL))
			{	if (a->tt__H264DecOptions::SupportedH264Profiles == NULL)
				{	if (soap_blist_SupportedH264Profiles1 == NULL)
						soap_blist_SupportedH264Profiles1 = soap_new_block(soap);
					a->tt__H264DecOptions::SupportedH264Profiles = (enum tt__H264Profile *)soap_push_block(soap, soap_blist_SupportedH264Profiles1, sizeof(enum tt__H264Profile));
					if (a->tt__H264DecOptions::SupportedH264Profiles == NULL)
						return NULL;
					soap_default_tt__H264Profile(soap, a->tt__H264DecOptions::SupportedH264Profiles);
				}
				soap_revert(soap);
				if (soap_in_tt__H264Profile(soap, "tt:SupportedH264Profiles", a->tt__H264DecOptions::SupportedH264Profiles, "tt:H264Profile"))
				{	a->tt__H264DecOptions::__sizeSupportedH264Profiles++;
					a->tt__H264DecOptions::SupportedH264Profiles = NULL;
					continue;
				}
			}
			if (soap_flag_SupportedInputBitrate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedInputBitrate", &(a->tt__H264DecOptions::SupportedInputBitrate), "tt:IntRange"))
				{	soap_flag_SupportedInputBitrate1--;
					continue;
				}
			if (soap_flag_SupportedFrameRate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntRange(soap, "tt:SupportedFrameRate", &(a->tt__H264DecOptions::SupportedFrameRate), "tt:IntRange"))
				{	soap_flag_SupportedFrameRate1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__H264DecOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__H264DecOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__H264DecOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__H264DecOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__H264DecOptions::__any, "xsd:byte"))
				{	a->tt__H264DecOptions::__size++;
					a->tt__H264DecOptions::__any = NULL;
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
		if (a->tt__H264DecOptions::ResolutionsAvailable)
			soap_pop_block(soap, soap_blist_ResolutionsAvailable1);
		if (a->tt__H264DecOptions::__sizeResolutionsAvailable)
			a->tt__H264DecOptions::ResolutionsAvailable = (tt__VideoResolution **)soap_save_block(soap, soap_blist_ResolutionsAvailable1, NULL, 1);
		else
		{	a->tt__H264DecOptions::ResolutionsAvailable = NULL;
			if (soap_blist_ResolutionsAvailable1)
				soap_end_block(soap, soap_blist_ResolutionsAvailable1);
		}
		if (a->tt__H264DecOptions::SupportedH264Profiles)
			soap_pop_block(soap, soap_blist_SupportedH264Profiles1);
		if (a->tt__H264DecOptions::__sizeSupportedH264Profiles)
			a->tt__H264DecOptions::SupportedH264Profiles = (enum tt__H264Profile *)soap_save_block(soap, soap_blist_SupportedH264Profiles1, NULL, 1);
		else
		{	a->tt__H264DecOptions::SupportedH264Profiles = NULL;
			if (soap_blist_SupportedH264Profiles1)
				soap_end_block(soap, soap_blist_SupportedH264Profiles1);
		}
		if (a->tt__H264DecOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__H264DecOptions::__size)
			a->tt__H264DecOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__H264DecOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__H264DecOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__H264DecOptions, 0, sizeof(tt__H264DecOptions), 0, soap_copy_tt__H264DecOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->tt__H264DecOptions::__sizeResolutionsAvailable < 1 || a->tt__H264DecOptions::__sizeSupportedH264Profiles < 1 || soap_flag_SupportedInputBitrate1 > 0 || soap_flag_SupportedFrameRate1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__H264DecOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__H264DecOptions);
	if (this->soap_out(soap, tag?tag:"tt:H264DecOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__H264DecOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__H264DecOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__H264DecOptions * SOAP_FMAC4 soap_get_tt__H264DecOptions(struct soap *soap, tt__H264DecOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__H264DecOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__H264DecOptions * SOAP_FMAC2 soap_instantiate_tt__H264DecOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__H264DecOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__H264DecOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__H264DecOptions);
		if (size)
			*size = sizeof(tt__H264DecOptions);
		((tt__H264DecOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__H264DecOptions, n);
		if (size)
			*size = n * sizeof(tt__H264DecOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__H264DecOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__H264DecOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__H264DecOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__H264DecOptions %p -> %p\n", q, p));
	*(tt__H264DecOptions*)p = *(tt__H264DecOptions*)q;
}

void tt__VideoDecoderConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoDecoderConfigurationOptions::JpegDecOptions = NULL;
	this->tt__VideoDecoderConfigurationOptions::H264DecOptions = NULL;
	this->tt__VideoDecoderConfigurationOptions::Mpeg4DecOptions = NULL;
	this->tt__VideoDecoderConfigurationOptions::Extension = NULL;
	this->tt__VideoDecoderConfigurationOptions::__anyAttribute = NULL;
}

void tt__VideoDecoderConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__JpegDecOptions(soap, &this->tt__VideoDecoderConfigurationOptions::JpegDecOptions);
	soap_serialize_PointerTott__H264DecOptions(soap, &this->tt__VideoDecoderConfigurationOptions::H264DecOptions);
	soap_serialize_PointerTott__Mpeg4DecOptions(soap, &this->tt__VideoDecoderConfigurationOptions::Mpeg4DecOptions);
	soap_serialize_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, &this->tt__VideoDecoderConfigurationOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoDecoderConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoDecoderConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__VideoDecoderConfigurationOptions *a, const char *type)
{
	if (((tt__VideoDecoderConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoDecoderConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptions), "tt:VideoDecoderConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTott__JpegDecOptions(soap, "tt:JpegDecOptions", -1, &(a->tt__VideoDecoderConfigurationOptions::JpegDecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__H264DecOptions(soap, "tt:H264DecOptions", -1, &(a->tt__VideoDecoderConfigurationOptions::H264DecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__Mpeg4DecOptions(soap, "tt:Mpeg4DecOptions", -1, &(a->tt__VideoDecoderConfigurationOptions::Mpeg4DecOptions), ""))
		return soap->error;
	if (soap_out_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, "tt:Extension", -1, &(a->tt__VideoDecoderConfigurationOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__VideoDecoderConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoDecoderConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoDecoderConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoDecoderConfigurationOptions(struct soap *soap, const char *tag, tt__VideoDecoderConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoDecoderConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoDecoderConfigurationOptions, sizeof(tt__VideoDecoderConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoDecoderConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoDecoderConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoDecoderConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_JpegDecOptions1 = 1;
	size_t soap_flag_H264DecOptions1 = 1;
	size_t soap_flag_Mpeg4DecOptions1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_JpegDecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__JpegDecOptions(soap, "tt:JpegDecOptions", &(a->tt__VideoDecoderConfigurationOptions::JpegDecOptions), "tt:JpegDecOptions"))
				{	soap_flag_JpegDecOptions1--;
					continue;
				}
			if (soap_flag_H264DecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__H264DecOptions(soap, "tt:H264DecOptions", &(a->tt__VideoDecoderConfigurationOptions::H264DecOptions), "tt:H264DecOptions"))
				{	soap_flag_H264DecOptions1--;
					continue;
				}
			if (soap_flag_Mpeg4DecOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Mpeg4DecOptions(soap, "tt:Mpeg4DecOptions", &(a->tt__VideoDecoderConfigurationOptions::Mpeg4DecOptions), "tt:Mpeg4DecOptions"))
				{	soap_flag_Mpeg4DecOptions1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoDecoderConfigurationOptionsExtension(soap, "tt:Extension", &(a->tt__VideoDecoderConfigurationOptions::Extension), "tt:VideoDecoderConfigurationOptionsExtension"))
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
	{	a = (tt__VideoDecoderConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoDecoderConfigurationOptions, 0, sizeof(tt__VideoDecoderConfigurationOptions), 0, soap_copy_tt__VideoDecoderConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoDecoderConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoDecoderConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:VideoDecoderConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoDecoderConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoDecoderConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoDecoderConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoDecoderConfigurationOptions(struct soap *soap, tt__VideoDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoDecoderConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__VideoDecoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoDecoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoDecoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoDecoderConfigurationOptions);
		if (size)
			*size = sizeof(tt__VideoDecoderConfigurationOptions);
		((tt__VideoDecoderConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoDecoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__VideoDecoderConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoDecoderConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoDecoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoDecoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoDecoderConfigurationOptions %p -> %p\n", q, p));
	*(tt__VideoDecoderConfigurationOptions*)p = *(tt__VideoDecoderConfigurationOptions*)q;
}

void tt__VideoOutputConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoOutputConfigurationOptions::__size = 0;
	this->tt__VideoOutputConfigurationOptions::__any = NULL;
	this->tt__VideoOutputConfigurationOptions::__anyAttribute = NULL;
}

void tt__VideoOutputConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoOutputConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoOutputConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__VideoOutputConfigurationOptions *a, const char *type)
{
	if (((tt__VideoOutputConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoOutputConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutputConfigurationOptions), "tt:VideoOutputConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoOutputConfigurationOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoOutputConfigurationOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoOutputConfigurationOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoOutputConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoOutputConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoOutputConfigurationOptions * SOAP_FMAC4 soap_in_tt__VideoOutputConfigurationOptions(struct soap *soap, const char *tag, tt__VideoOutputConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoOutputConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutputConfigurationOptions, sizeof(tt__VideoOutputConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoOutputConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoOutputConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoOutputConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__VideoOutputConfigurationOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoOutputConfigurationOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoOutputConfigurationOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoOutputConfigurationOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoOutputConfigurationOptions::__any, "xsd:byte"))
				{	a->tt__VideoOutputConfigurationOptions::__size++;
					a->tt__VideoOutputConfigurationOptions::__any = NULL;
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
		if (a->tt__VideoOutputConfigurationOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoOutputConfigurationOptions::__size)
			a->tt__VideoOutputConfigurationOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoOutputConfigurationOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoOutputConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutputConfigurationOptions, 0, sizeof(tt__VideoOutputConfigurationOptions), 0, soap_copy_tt__VideoOutputConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoOutputConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoOutputConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:VideoOutputConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoOutputConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoOutputConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoOutputConfigurationOptions * SOAP_FMAC4 soap_get_tt__VideoOutputConfigurationOptions(struct soap *soap, tt__VideoOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoOutputConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__VideoOutputConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoOutputConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoOutputConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoOutputConfigurationOptions);
		if (size)
			*size = sizeof(tt__VideoOutputConfigurationOptions);
		((tt__VideoOutputConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoOutputConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__VideoOutputConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoOutputConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoOutputConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoOutputConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoOutputConfigurationOptions %p -> %p\n", q, p));
	*(tt__VideoOutputConfigurationOptions*)p = *(tt__VideoOutputConfigurationOptions*)q;
}

void tt__VideoOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__VideoOutputConfiguration::OutputToken);
	this->tt__VideoOutputConfiguration::__size = 0;
	this->tt__VideoOutputConfiguration::__any = NULL;
	this->tt__VideoOutputConfiguration::__anyAttribute = NULL;
}

void tt__VideoOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__VideoOutputConfiguration::OutputToken);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutputConfiguration(struct soap *soap, const char *tag, int id, const tt__VideoOutputConfiguration *a, const char *type)
{
	if (((tt__VideoOutputConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoOutputConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutputConfiguration), "tt:VideoOutputConfiguration"))
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
	if (a->tt__VideoOutputConfiguration::OutputToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:OutputToken", -1, &a->tt__VideoOutputConfiguration::OutputToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:OutputToken"))
		return soap->error;
	if (a->tt__VideoOutputConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoOutputConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoOutputConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoOutputConfiguration * SOAP_FMAC4 soap_in_tt__VideoOutputConfiguration(struct soap *soap, const char *tag, tt__VideoOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutputConfiguration, sizeof(tt__VideoOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoOutputConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_OutputToken1 = 1;
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
			if (soap_flag_OutputToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:OutputToken", &(a->tt__VideoOutputConfiguration::OutputToken), "tt:ReferenceToken"))
				{	soap_flag_OutputToken1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__VideoOutputConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoOutputConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoOutputConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoOutputConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoOutputConfiguration::__any, "xsd:byte"))
				{	a->tt__VideoOutputConfiguration::__size++;
					a->tt__VideoOutputConfiguration::__any = NULL;
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
		if (a->tt__VideoOutputConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoOutputConfiguration::__size)
			a->tt__VideoOutputConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoOutputConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutputConfiguration, 0, sizeof(tt__VideoOutputConfiguration), 0, soap_copy_tt__VideoOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_OutputToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__VideoOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:VideoOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoOutputConfiguration * SOAP_FMAC4 soap_get_tt__VideoOutputConfiguration(struct soap *soap, tt__VideoOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoOutputConfiguration * SOAP_FMAC2 soap_instantiate_tt__VideoOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoOutputConfiguration);
		if (size)
			*size = sizeof(tt__VideoOutputConfiguration);
		((tt__VideoOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoOutputConfiguration, n);
		if (size)
			*size = n * sizeof(tt__VideoOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoOutputConfiguration %p -> %p\n", q, p));
	*(tt__VideoOutputConfiguration*)p = *(tt__VideoOutputConfiguration*)q;
}

void tt__VideoOutputExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoOutputExtension::__size = 0;
	this->tt__VideoOutputExtension::__any = NULL;
}

void tt__VideoOutputExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoOutputExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoOutputExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutputExtension(struct soap *soap, const char *tag, int id, const tt__VideoOutputExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutputExtension), "tt:VideoOutputExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoOutputExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoOutputExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoOutputExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoOutputExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoOutputExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoOutputExtension * SOAP_FMAC4 soap_in_tt__VideoOutputExtension(struct soap *soap, const char *tag, tt__VideoOutputExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoOutputExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutputExtension, sizeof(tt__VideoOutputExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoOutputExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoOutputExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__VideoOutputExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoOutputExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoOutputExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoOutputExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoOutputExtension::__any, "xsd:byte"))
				{	a->tt__VideoOutputExtension::__size++;
					a->tt__VideoOutputExtension::__any = NULL;
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
		if (a->tt__VideoOutputExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoOutputExtension::__size)
			a->tt__VideoOutputExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoOutputExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoOutputExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutputExtension, 0, sizeof(tt__VideoOutputExtension), 0, soap_copy_tt__VideoOutputExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__VideoOutputExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoOutputExtension);
	if (this->soap_out(soap, tag?tag:"tt:VideoOutputExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoOutputExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoOutputExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoOutputExtension * SOAP_FMAC4 soap_get_tt__VideoOutputExtension(struct soap *soap, tt__VideoOutputExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutputExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoOutputExtension * SOAP_FMAC2 soap_instantiate_tt__VideoOutputExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoOutputExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoOutputExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoOutputExtension);
		if (size)
			*size = sizeof(tt__VideoOutputExtension);
		((tt__VideoOutputExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoOutputExtension, n);
		if (size)
			*size = n * sizeof(tt__VideoOutputExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoOutputExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoOutputExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoOutputExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoOutputExtension %p -> %p\n", q, p));
	*(tt__VideoOutputExtension*)p = *(tt__VideoOutputExtension*)q;
}

void tt__VideoOutput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__DeviceEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoOutput::Layout = NULL;
	this->tt__VideoOutput::Resolution = NULL;
	this->tt__VideoOutput::RefreshRate = NULL;
	this->tt__VideoOutput::AspectRatio = NULL;
	this->tt__VideoOutput::Extension = NULL;
	this->tt__VideoOutput::__anyAttribute = NULL;
}

void tt__VideoOutput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Layout(soap, &this->tt__VideoOutput::Layout);
	soap_serialize_PointerTott__VideoResolution(soap, &this->tt__VideoOutput::Resolution);
	soap_serialize_PointerTofloat(soap, &this->tt__VideoOutput::RefreshRate);
	soap_serialize_PointerTofloat(soap, &this->tt__VideoOutput::AspectRatio);
	soap_serialize_PointerTott__VideoOutputExtension(soap, &this->tt__VideoOutput::Extension);
	this->tt__DeviceEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoOutput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoOutput(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutput(struct soap *soap, const char *tag, int id, const tt__VideoOutput *a, const char *type)
{
	if (((tt__VideoOutput*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoOutput*)a)->__anyAttribute, 1);
	if (((tt__DeviceEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__DeviceEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutput), "tt:VideoOutput"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__VideoOutput::Layout)
	{	if (soap_out_PointerTott__Layout(soap, "tt:Layout", -1, &a->tt__VideoOutput::Layout, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Layout"))
		return soap->error;
	if (soap_out_PointerTott__VideoResolution(soap, "tt:Resolution", -1, &(a->tt__VideoOutput::Resolution), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:RefreshRate", -1, &(a->tt__VideoOutput::RefreshRate), ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:AspectRatio", -1, &(a->tt__VideoOutput::AspectRatio), ""))
		return soap->error;
	if (soap_out_PointerTott__VideoOutputExtension(soap, "tt:Extension", -1, &(a->tt__VideoOutput::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__VideoOutput::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoOutput(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoOutput * SOAP_FMAC4 soap_in_tt__VideoOutput(struct soap *soap, const char *tag, tt__VideoOutput *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoOutput *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutput, sizeof(tt__VideoOutput), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoOutput)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoOutput *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoOutput*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__DeviceEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Layout1 = 1;
	size_t soap_flag_Resolution1 = 1;
	size_t soap_flag_RefreshRate1 = 1;
	size_t soap_flag_AspectRatio1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Layout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Layout(soap, "tt:Layout", &(a->tt__VideoOutput::Layout), "tt:Layout"))
				{	soap_flag_Layout1--;
					continue;
				}
			if (soap_flag_Resolution1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoResolution(soap, "tt:Resolution", &(a->tt__VideoOutput::Resolution), "tt:VideoResolution"))
				{	soap_flag_Resolution1--;
					continue;
				}
			if (soap_flag_RefreshRate1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:RefreshRate", &(a->tt__VideoOutput::RefreshRate), "xsd:float"))
				{	soap_flag_RefreshRate1--;
					continue;
				}
			if (soap_flag_AspectRatio1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:AspectRatio", &(a->tt__VideoOutput::AspectRatio), "xsd:float"))
				{	soap_flag_AspectRatio1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoOutputExtension(soap, "tt:Extension", &(a->tt__VideoOutput::Extension), "tt:VideoOutputExtension"))
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
	{	a = (tt__VideoOutput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutput, 0, sizeof(tt__VideoOutput), 0, soap_copy_tt__VideoOutput);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Layout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__VideoOutput::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoOutput);
	if (this->soap_out(soap, tag?tag:"tt:VideoOutput", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoOutput::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoOutput(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoOutput * SOAP_FMAC4 soap_get_tt__VideoOutput(struct soap *soap, tt__VideoOutput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__VideoOutput * SOAP_FMAC2 soap_instantiate_tt__VideoOutput(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__VideoOutput(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__VideoOutput, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__VideoOutput);
		if (size)
			*size = sizeof(tt__VideoOutput);
		((tt__VideoOutput*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoOutput, n);
		if (size)
			*size = n * sizeof(tt__VideoOutput);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__VideoOutput*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__VideoOutput*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__VideoOutput(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__VideoOutput %p -> %p\n", q, p));
	*(tt__VideoOutput*)p = *(tt__VideoOutput*)q;
}

void tt__PTZStatusFilterOptionsExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__PTZStatusFilterOptionsExtension::__size = 0;
	this->tt__PTZStatusFilterOptionsExtension::__any = NULL;
}

void tt__PTZStatusFilterOptionsExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZStatusFilterOptionsExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZStatusFilterOptionsExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const char *tag, int id, const tt__PTZStatusFilterOptionsExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension), "tt:PTZStatusFilterOptionsExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__PTZStatusFilterOptionsExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZStatusFilterOptionsExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZStatusFilterOptionsExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__PTZStatusFilterOptionsExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZStatusFilterOptionsExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZStatusFilterOptionsExtension * SOAP_FMAC4 soap_in_tt__PTZStatusFilterOptionsExtension(struct soap *soap, const char *tag, tt__PTZStatusFilterOptionsExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZStatusFilterOptionsExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension, sizeof(tt__PTZStatusFilterOptionsExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZStatusFilterOptionsExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZStatusFilterOptionsExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__PTZStatusFilterOptionsExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZStatusFilterOptionsExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZStatusFilterOptionsExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZStatusFilterOptionsExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZStatusFilterOptionsExtension::__any, "xsd:byte"))
				{	a->tt__PTZStatusFilterOptionsExtension::__size++;
					a->tt__PTZStatusFilterOptionsExtension::__any = NULL;
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
		if (a->tt__PTZStatusFilterOptionsExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZStatusFilterOptionsExtension::__size)
			a->tt__PTZStatusFilterOptionsExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZStatusFilterOptionsExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZStatusFilterOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension, 0, sizeof(tt__PTZStatusFilterOptionsExtension), 0, soap_copy_tt__PTZStatusFilterOptionsExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__PTZStatusFilterOptionsExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension);
	if (this->soap_out(soap, tag?tag:"tt:PTZStatusFilterOptionsExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZStatusFilterOptionsExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZStatusFilterOptionsExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZStatusFilterOptionsExtension * SOAP_FMAC4 soap_get_tt__PTZStatusFilterOptionsExtension(struct soap *soap, tt__PTZStatusFilterOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatusFilterOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZStatusFilterOptionsExtension * SOAP_FMAC2 soap_instantiate_tt__PTZStatusFilterOptionsExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZStatusFilterOptionsExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZStatusFilterOptionsExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZStatusFilterOptionsExtension);
		if (size)
			*size = sizeof(tt__PTZStatusFilterOptionsExtension);
		((tt__PTZStatusFilterOptionsExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZStatusFilterOptionsExtension, n);
		if (size)
			*size = n * sizeof(tt__PTZStatusFilterOptionsExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZStatusFilterOptionsExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZStatusFilterOptionsExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZStatusFilterOptionsExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZStatusFilterOptionsExtension %p -> %p\n", q, p));
	*(tt__PTZStatusFilterOptionsExtension*)p = *(tt__PTZStatusFilterOptionsExtension*)q;
}

void tt__PTZStatusFilterOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__PTZStatusFilterOptions::PanTiltStatusSupported);
	soap_default_bool(soap, &this->tt__PTZStatusFilterOptions::ZoomStatusSupported);
	this->tt__PTZStatusFilterOptions::__size = 0;
	this->tt__PTZStatusFilterOptions::__any = NULL;
	this->tt__PTZStatusFilterOptions::PanTiltPositionSupported = NULL;
	this->tt__PTZStatusFilterOptions::ZoomPositionSupported = NULL;
	this->tt__PTZStatusFilterOptions::Extension = NULL;
	this->tt__PTZStatusFilterOptions::__anyAttribute = NULL;
}

void tt__PTZStatusFilterOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZStatusFilterOptions::PanTiltStatusSupported, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__PTZStatusFilterOptions::ZoomStatusSupported, SOAP_TYPE_bool);
	soap_serialize_PointerTobool(soap, &this->tt__PTZStatusFilterOptions::PanTiltPositionSupported);
	soap_serialize_PointerTobool(soap, &this->tt__PTZStatusFilterOptions::ZoomPositionSupported);
	soap_serialize_PointerTott__PTZStatusFilterOptionsExtension(soap, &this->tt__PTZStatusFilterOptions::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZStatusFilterOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZStatusFilterOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStatusFilterOptions(struct soap *soap, const char *tag, int id, const tt__PTZStatusFilterOptions *a, const char *type)
{
	if (((tt__PTZStatusFilterOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZStatusFilterOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStatusFilterOptions), "tt:PTZStatusFilterOptions"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:PanTiltStatusSupported", -1, &(a->tt__PTZStatusFilterOptions::PanTiltStatusSupported), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:ZoomStatusSupported", -1, &(a->tt__PTZStatusFilterOptions::ZoomStatusSupported), ""))
		return soap->error;
	if (a->tt__PTZStatusFilterOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__PTZStatusFilterOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__PTZStatusFilterOptions::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "tt:PanTiltPositionSupported", -1, &(a->tt__PTZStatusFilterOptions::PanTiltPositionSupported), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:ZoomPositionSupported", -1, &(a->tt__PTZStatusFilterOptions::ZoomPositionSupported), ""))
		return soap->error;
	if (soap_out_PointerTott__PTZStatusFilterOptionsExtension(soap, "tt:Extension", -1, &(a->tt__PTZStatusFilterOptions::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZStatusFilterOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZStatusFilterOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZStatusFilterOptions * SOAP_FMAC4 soap_in_tt__PTZStatusFilterOptions(struct soap *soap, const char *tag, tt__PTZStatusFilterOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZStatusFilterOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStatusFilterOptions, sizeof(tt__PTZStatusFilterOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZStatusFilterOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZStatusFilterOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZStatusFilterOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PanTiltStatusSupported1 = 1;
	size_t soap_flag_ZoomStatusSupported1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_PanTiltPositionSupported1 = 1;
	size_t soap_flag_ZoomPositionSupported1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PanTiltStatusSupported1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:PanTiltStatusSupported", &(a->tt__PTZStatusFilterOptions::PanTiltStatusSupported), "xsd:boolean"))
				{	soap_flag_PanTiltStatusSupported1--;
					continue;
				}
			if (soap_flag_ZoomStatusSupported1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:ZoomStatusSupported", &(a->tt__PTZStatusFilterOptions::ZoomStatusSupported), "xsd:boolean"))
				{	soap_flag_ZoomStatusSupported1--;
					continue;
				}
			if (soap_flag_PanTiltPositionSupported1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:PanTiltPositionSupported", &(a->tt__PTZStatusFilterOptions::PanTiltPositionSupported), "xsd:boolean"))
				{	soap_flag_PanTiltPositionSupported1--;
					continue;
				}
			if (soap_flag_ZoomPositionSupported1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:ZoomPositionSupported", &(a->tt__PTZStatusFilterOptions::ZoomPositionSupported), "xsd:boolean"))
				{	soap_flag_ZoomPositionSupported1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatusFilterOptionsExtension(soap, "tt:Extension", &(a->tt__PTZStatusFilterOptions::Extension), "tt:PTZStatusFilterOptionsExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__PTZStatusFilterOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__PTZStatusFilterOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__PTZStatusFilterOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__PTZStatusFilterOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__PTZStatusFilterOptions::__any, "xsd:byte"))
				{	a->tt__PTZStatusFilterOptions::__size++;
					a->tt__PTZStatusFilterOptions::__any = NULL;
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
		if (a->tt__PTZStatusFilterOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__PTZStatusFilterOptions::__size)
			a->tt__PTZStatusFilterOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__PTZStatusFilterOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__PTZStatusFilterOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStatusFilterOptions, 0, sizeof(tt__PTZStatusFilterOptions), 0, soap_copy_tt__PTZStatusFilterOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PanTiltStatusSupported1 > 0 || soap_flag_ZoomStatusSupported1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZStatusFilterOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZStatusFilterOptions);
	if (this->soap_out(soap, tag?tag:"tt:PTZStatusFilterOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZStatusFilterOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZStatusFilterOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZStatusFilterOptions * SOAP_FMAC4 soap_get_tt__PTZStatusFilterOptions(struct soap *soap, tt__PTZStatusFilterOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStatusFilterOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZStatusFilterOptions * SOAP_FMAC2 soap_instantiate_tt__PTZStatusFilterOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZStatusFilterOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZStatusFilterOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZStatusFilterOptions);
		if (size)
			*size = sizeof(tt__PTZStatusFilterOptions);
		((tt__PTZStatusFilterOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZStatusFilterOptions, n);
		if (size)
			*size = n * sizeof(tt__PTZStatusFilterOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZStatusFilterOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZStatusFilterOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZStatusFilterOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZStatusFilterOptions %p -> %p\n", q, p));
	*(tt__PTZStatusFilterOptions*)p = *(tt__PTZStatusFilterOptions*)q;
}

void tt__MetadataConfigurationOptions::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataConfigurationOptions::PTZStatusFilterOptions = NULL;
	this->tt__MetadataConfigurationOptions::__size = 0;
	this->tt__MetadataConfigurationOptions::__any = NULL;
	this->tt__MetadataConfigurationOptions::__anyAttribute = NULL;
}

void tt__MetadataConfigurationOptions::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZStatusFilterOptions(soap, &this->tt__MetadataConfigurationOptions::PTZStatusFilterOptions);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataConfigurationOptions::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataConfigurationOptions(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfigurationOptions(struct soap *soap, const char *tag, int id, const tt__MetadataConfigurationOptions *a, const char *type)
{
	if (((tt__MetadataConfigurationOptions*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataConfigurationOptions*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfigurationOptions), "tt:MetadataConfigurationOptions"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataConfigurationOptions::PTZStatusFilterOptions)
	{	if (soap_out_PointerTott__PTZStatusFilterOptions(soap, "tt:PTZStatusFilterOptions", -1, &a->tt__MetadataConfigurationOptions::PTZStatusFilterOptions, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PTZStatusFilterOptions"))
		return soap->error;
	if (a->tt__MetadataConfigurationOptions::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataConfigurationOptions::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataConfigurationOptions::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataConfigurationOptions::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataConfigurationOptions(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataConfigurationOptions * SOAP_FMAC4 soap_in_tt__MetadataConfigurationOptions(struct soap *soap, const char *tag, tt__MetadataConfigurationOptions *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataConfigurationOptions *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfigurationOptions, sizeof(tt__MetadataConfigurationOptions), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataConfigurationOptions)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataConfigurationOptions *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataConfigurationOptions*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_PTZStatusFilterOptions1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_PTZStatusFilterOptions1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZStatusFilterOptions(soap, "tt:PTZStatusFilterOptions", &(a->tt__MetadataConfigurationOptions::PTZStatusFilterOptions), "tt:PTZStatusFilterOptions"))
				{	soap_flag_PTZStatusFilterOptions1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MetadataConfigurationOptions::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataConfigurationOptions::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataConfigurationOptions::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataConfigurationOptions::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataConfigurationOptions::__any, "xsd:byte"))
				{	a->tt__MetadataConfigurationOptions::__size++;
					a->tt__MetadataConfigurationOptions::__any = NULL;
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
		if (a->tt__MetadataConfigurationOptions::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataConfigurationOptions::__size)
			a->tt__MetadataConfigurationOptions::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataConfigurationOptions::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfigurationOptions, 0, sizeof(tt__MetadataConfigurationOptions), 0, soap_copy_tt__MetadataConfigurationOptions);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PTZStatusFilterOptions1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MetadataConfigurationOptions::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfigurationOptions);
	if (this->soap_out(soap, tag?tag:"tt:MetadataConfigurationOptions", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataConfigurationOptions::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataConfigurationOptions(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataConfigurationOptions * SOAP_FMAC4 soap_get_tt__MetadataConfigurationOptions(struct soap *soap, tt__MetadataConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataConfigurationOptions * SOAP_FMAC2 soap_instantiate_tt__MetadataConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataConfigurationOptions);
		if (size)
			*size = sizeof(tt__MetadataConfigurationOptions);
		((tt__MetadataConfigurationOptions*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataConfigurationOptions, n);
		if (size)
			*size = n * sizeof(tt__MetadataConfigurationOptions);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataConfigurationOptions*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataConfigurationOptions %p -> %p\n", q, p));
	*(tt__MetadataConfigurationOptions*)p = *(tt__MetadataConfigurationOptions*)q;
}

void tt__EventSubscription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__EventSubscription::Filter = NULL;
	this->tt__EventSubscription::SubscriptionPolicy = NULL;
	this->tt__EventSubscription::__size = 0;
	this->tt__EventSubscription::__any = NULL;
	this->tt__EventSubscription::__anyAttribute = NULL;
}

void tt__EventSubscription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowsnt__FilterType(soap, &this->tt__EventSubscription::Filter);
	soap_serialize_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, &this->tt__EventSubscription::SubscriptionPolicy);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__EventSubscription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__EventSubscription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventSubscription(struct soap *soap, const char *tag, int id, const tt__EventSubscription *a, const char *type)
{
	if (((tt__EventSubscription*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__EventSubscription*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventSubscription), "tt:EventSubscription"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowsnt__FilterType(soap, "tt:Filter", -1, &(a->tt__EventSubscription::Filter), ""))
		return soap->error;
	if (soap_out_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, "tt:SubscriptionPolicy", -1, &(a->tt__EventSubscription::SubscriptionPolicy), ""))
		return soap->error;
	if (a->tt__EventSubscription::__any)
	{	int i;
		for (i = 0; i < a->tt__EventSubscription::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__EventSubscription::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__EventSubscription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__EventSubscription(soap, tag, this, type);
}

SOAP_FMAC3 tt__EventSubscription * SOAP_FMAC4 soap_in_tt__EventSubscription(struct soap *soap, const char *tag, tt__EventSubscription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__EventSubscription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventSubscription, sizeof(tt__EventSubscription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__EventSubscription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__EventSubscription *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__EventSubscription*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Filter1 = 1;
	size_t soap_flag_SubscriptionPolicy1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Filter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "tt:Filter", &(a->tt__EventSubscription::Filter), "wsnt:FilterType"))
				{	soap_flag_Filter1--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__EventSubscription_SubscriptionPolicy(soap, "tt:SubscriptionPolicy", &(a->tt__EventSubscription::SubscriptionPolicy), ""))
				{	soap_flag_SubscriptionPolicy1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__EventSubscription::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__EventSubscription::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__EventSubscription::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__EventSubscription::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__EventSubscription::__any, "xsd:byte"))
				{	a->tt__EventSubscription::__size++;
					a->tt__EventSubscription::__any = NULL;
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
		if (a->tt__EventSubscription::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__EventSubscription::__size)
			a->tt__EventSubscription::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__EventSubscription::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__EventSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventSubscription, 0, sizeof(tt__EventSubscription), 0, soap_copy_tt__EventSubscription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__EventSubscription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__EventSubscription);
	if (this->soap_out(soap, tag?tag:"tt:EventSubscription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__EventSubscription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__EventSubscription(soap, this, tag, type);
}

SOAP_FMAC3 tt__EventSubscription * SOAP_FMAC4 soap_get_tt__EventSubscription(struct soap *soap, tt__EventSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__EventSubscription * SOAP_FMAC2 soap_instantiate_tt__EventSubscription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__EventSubscription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__EventSubscription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__EventSubscription);
		if (size)
			*size = sizeof(tt__EventSubscription);
		((tt__EventSubscription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__EventSubscription, n);
		if (size)
			*size = n * sizeof(tt__EventSubscription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__EventSubscription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__EventSubscription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__EventSubscription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__EventSubscription %p -> %p\n", q, p));
	*(tt__EventSubscription*)p = *(tt__EventSubscription*)q;
}

void tt__PTZFilter::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->tt__PTZFilter::Status);
	soap_default_bool(soap, &this->tt__PTZFilter::Position);
	this->tt__PTZFilter::__anyAttribute = NULL;
}

void tt__PTZFilter::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->tt__PTZFilter::Status, SOAP_TYPE_bool);
	soap_embedded(soap, &this->tt__PTZFilter::Position, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__PTZFilter::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__PTZFilter(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZFilter(struct soap *soap, const char *tag, int id, const tt__PTZFilter *a, const char *type)
{
	if (((tt__PTZFilter*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__PTZFilter*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZFilter), "tt:PTZFilter"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_bool(soap, "tt:Status", -1, &(a->tt__PTZFilter::Status), ""))
		return soap->error;
	if (soap_out_bool(soap, "tt:Position", -1, &(a->tt__PTZFilter::Position), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__PTZFilter::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__PTZFilter(soap, tag, this, type);
}

SOAP_FMAC3 tt__PTZFilter * SOAP_FMAC4 soap_in_tt__PTZFilter(struct soap *soap, const char *tag, tt__PTZFilter *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__PTZFilter *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZFilter, sizeof(tt__PTZFilter), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__PTZFilter)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__PTZFilter *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__PTZFilter*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Status1 = 1;
	size_t soap_flag_Position1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Status1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Status", &(a->tt__PTZFilter::Status), "xsd:boolean"))
				{	soap_flag_Status1--;
					continue;
				}
			if (soap_flag_Position1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tt:Position", &(a->tt__PTZFilter::Position), "xsd:boolean"))
				{	soap_flag_Position1--;
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
	{	a = (tt__PTZFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZFilter, 0, sizeof(tt__PTZFilter), 0, soap_copy_tt__PTZFilter);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Status1 > 0 || soap_flag_Position1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__PTZFilter::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__PTZFilter);
	if (this->soap_out(soap, tag?tag:"tt:PTZFilter", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__PTZFilter::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__PTZFilter(soap, this, tag, type);
}

SOAP_FMAC3 tt__PTZFilter * SOAP_FMAC4 soap_get_tt__PTZFilter(struct soap *soap, tt__PTZFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__PTZFilter * SOAP_FMAC2 soap_instantiate_tt__PTZFilter(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__PTZFilter(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__PTZFilter, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__PTZFilter);
		if (size)
			*size = sizeof(tt__PTZFilter);
		((tt__PTZFilter*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__PTZFilter, n);
		if (size)
			*size = n * sizeof(tt__PTZFilter);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__PTZFilter*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__PTZFilter*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__PTZFilter(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__PTZFilter %p -> %p\n", q, p));
	*(tt__PTZFilter*)p = *(tt__PTZFilter*)q;
}

void tt__MetadataConfigurationExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataConfigurationExtension::__size = 0;
	this->tt__MetadataConfigurationExtension::__any = NULL;
}

void tt__MetadataConfigurationExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataConfigurationExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataConfigurationExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfigurationExtension(struct soap *soap, const char *tag, int id, const tt__MetadataConfigurationExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfigurationExtension), "tt:MetadataConfigurationExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataConfigurationExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataConfigurationExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataConfigurationExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataConfigurationExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataConfigurationExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataConfigurationExtension * SOAP_FMAC4 soap_in_tt__MetadataConfigurationExtension(struct soap *soap, const char *tag, tt__MetadataConfigurationExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataConfigurationExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfigurationExtension, sizeof(tt__MetadataConfigurationExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataConfigurationExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataConfigurationExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__MetadataConfigurationExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataConfigurationExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataConfigurationExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataConfigurationExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataConfigurationExtension::__any, "xsd:byte"))
				{	a->tt__MetadataConfigurationExtension::__size++;
					a->tt__MetadataConfigurationExtension::__any = NULL;
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
		if (a->tt__MetadataConfigurationExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataConfigurationExtension::__size)
			a->tt__MetadataConfigurationExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataConfigurationExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfigurationExtension, 0, sizeof(tt__MetadataConfigurationExtension), 0, soap_copy_tt__MetadataConfigurationExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MetadataConfigurationExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfigurationExtension);
	if (this->soap_out(soap, tag?tag:"tt:MetadataConfigurationExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataConfigurationExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataConfigurationExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataConfigurationExtension * SOAP_FMAC4 soap_get_tt__MetadataConfigurationExtension(struct soap *soap, tt__MetadataConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataConfigurationExtension * SOAP_FMAC2 soap_instantiate_tt__MetadataConfigurationExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataConfigurationExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataConfigurationExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataConfigurationExtension);
		if (size)
			*size = sizeof(tt__MetadataConfigurationExtension);
		((tt__MetadataConfigurationExtension*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataConfigurationExtension, n);
		if (size)
			*size = n * sizeof(tt__MetadataConfigurationExtension);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataConfigurationExtension*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataConfigurationExtension*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataConfigurationExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataConfigurationExtension %p -> %p\n", q, p));
	*(tt__MetadataConfigurationExtension*)p = *(tt__MetadataConfigurationExtension*)q;
}

void tt__MetadataConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataConfiguration::PTZStatus = NULL;
	this->tt__MetadataConfiguration::Events = NULL;
	this->tt__MetadataConfiguration::Analytics = NULL;
	this->tt__MetadataConfiguration::Multicast = NULL;
	soap_default_xsd__duration(soap, &this->tt__MetadataConfiguration::SessionTimeout);
	this->tt__MetadataConfiguration::__size = 0;
	this->tt__MetadataConfiguration::__any = NULL;
	this->tt__MetadataConfiguration::AnalyticsEngineConfiguration = NULL;
	this->tt__MetadataConfiguration::Extension = NULL;
	this->tt__MetadataConfiguration::__anyAttribute = NULL;
}

void tt__MetadataConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZFilter(soap, &this->tt__MetadataConfiguration::PTZStatus);
	soap_serialize_PointerTott__EventSubscription(soap, &this->tt__MetadataConfiguration::Events);
	soap_serialize_PointerTobool(soap, &this->tt__MetadataConfiguration::Analytics);
	soap_serialize_PointerTott__MulticastConfiguration(soap, &this->tt__MetadataConfiguration::Multicast);
	soap_embedded(soap, &this->tt__MetadataConfiguration::SessionTimeout, SOAP_TYPE_xsd__duration);
	soap_serialize_PointerTott__AnalyticsEngineConfiguration(soap, &this->tt__MetadataConfiguration::AnalyticsEngineConfiguration);
	soap_serialize_PointerTott__MetadataConfigurationExtension(soap, &this->tt__MetadataConfiguration::Extension);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataConfiguration(struct soap *soap, const char *tag, int id, const tt__MetadataConfiguration *a, const char *type)
{
	if (((tt__MetadataConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__MetadataConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataConfiguration), "tt:MetadataConfiguration"))
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
	if (soap_out_PointerTott__PTZFilter(soap, "tt:PTZStatus", -1, &(a->tt__MetadataConfiguration::PTZStatus), ""))
		return soap->error;
	if (soap_out_PointerTott__EventSubscription(soap, "tt:Events", -1, &(a->tt__MetadataConfiguration::Events), ""))
		return soap->error;
	if (soap_out_PointerTobool(soap, "tt:Analytics", -1, &(a->tt__MetadataConfiguration::Analytics), ""))
		return soap->error;
	if (a->tt__MetadataConfiguration::Multicast)
	{	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &a->tt__MetadataConfiguration::Multicast, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Multicast"))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:SessionTimeout", -1, &(a->tt__MetadataConfiguration::SessionTimeout), ""))
		return soap->error;
	if (a->tt__MetadataConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataConfiguration::__any + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &(a->tt__MetadataConfiguration::AnalyticsEngineConfiguration), ""))
		return soap->error;
	if (soap_out_PointerTott__MetadataConfigurationExtension(soap, "tt:Extension", -1, &(a->tt__MetadataConfiguration::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataConfiguration * SOAP_FMAC4 soap_in_tt__MetadataConfiguration(struct soap *soap, const char *tag, tt__MetadataConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataConfiguration, sizeof(tt__MetadataConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__MetadataConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_PTZStatus1 = 1;
	size_t soap_flag_Events1 = 1;
	size_t soap_flag_Analytics1 = 1;
	size_t soap_flag_Multicast1 = 1;
	size_t soap_flag_SessionTimeout1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_AnalyticsEngineConfiguration1 = 1;
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
			if (soap_flag_PTZStatus1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZFilter(soap, "tt:PTZStatus", &(a->tt__MetadataConfiguration::PTZStatus), "tt:PTZFilter"))
				{	soap_flag_PTZStatus1--;
					continue;
				}
			if (soap_flag_Events1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EventSubscription(soap, "tt:Events", &(a->tt__MetadataConfiguration::Events), "tt:EventSubscription"))
				{	soap_flag_Events1--;
					continue;
				}
			if (soap_flag_Analytics1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "tt:Analytics", &(a->tt__MetadataConfiguration::Analytics), "xsd:boolean"))
				{	soap_flag_Analytics1--;
					continue;
				}
			if (soap_flag_Multicast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &(a->tt__MetadataConfiguration::Multicast), "tt:MulticastConfiguration"))
				{	soap_flag_Multicast1--;
					continue;
				}
			if (soap_flag_SessionTimeout1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:SessionTimeout", &(a->tt__MetadataConfiguration::SessionTimeout), "xsd:duration"))
				{	soap_flag_SessionTimeout1--;
					continue;
				}
			if (soap_flag_AnalyticsEngineConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &(a->tt__MetadataConfiguration::AnalyticsEngineConfiguration), "tt:AnalyticsEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataConfigurationExtension(soap, "tt:Extension", &(a->tt__MetadataConfiguration::Extension), "tt:MetadataConfigurationExtension"))
				{	soap_flag_Extension1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__MetadataConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataConfiguration::__any, "xsd:byte"))
				{	a->tt__MetadataConfiguration::__size++;
					a->tt__MetadataConfiguration::__any = NULL;
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
		if (a->tt__MetadataConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataConfiguration::__size)
			a->tt__MetadataConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataConfiguration, 0, sizeof(tt__MetadataConfiguration), 0, soap_copy_tt__MetadataConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_Multicast1 > 0 || soap_flag_SessionTimeout1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__MetadataConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:MetadataConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataConfiguration * SOAP_FMAC4 soap_get_tt__MetadataConfiguration(struct soap *soap, tt__MetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataConfiguration * SOAP_FMAC2 soap_instantiate_tt__MetadataConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tt__MetadataConfiguration);
		if (size)
			*size = sizeof(tt__MetadataConfiguration);
		((tt__MetadataConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataConfiguration, n);
		if (size)
			*size = n * sizeof(tt__MetadataConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tt__MetadataConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tt__MetadataConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataConfiguration %p -> %p\n", q, p));
	*(tt__MetadataConfiguration*)p = *(tt__MetadataConfiguration*)q;
}

void tt__VideoAnalyticsConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->tt__VideoAnalyticsConfiguration::AnalyticsEngineConfiguration = NULL;
	this->tt__VideoAnalyticsConfiguration::RuleEngineConfiguration = NULL;
	this->tt__VideoAnalyticsConfiguration::__size = 0;
	this->tt__VideoAnalyticsConfiguration::__any = NULL;
	this->tt__VideoAnalyticsConfiguration::__anyAttribute = NULL;
}

void tt__VideoAnalyticsConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineConfiguration(soap, &this->tt__VideoAnalyticsConfiguration::AnalyticsEngineConfiguration);
	soap_serialize_PointerTott__RuleEngineConfiguration(soap, &this->tt__VideoAnalyticsConfiguration::RuleEngineConfiguration);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__VideoAnalyticsConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__VideoAnalyticsConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const tt__VideoAnalyticsConfiguration *a, const char *type)
{
	if (((tt__VideoAnalyticsConfiguration*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__VideoAnalyticsConfiguration*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsConfiguration), "tt:VideoAnalyticsConfiguration"))
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
	if (a->tt__VideoAnalyticsConfiguration::AnalyticsEngineConfiguration)
	{	if (soap_out_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &a->tt__VideoAnalyticsConfiguration::AnalyticsEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineConfiguration"))
		return soap->error;
	if (a->tt__VideoAnalyticsConfiguration::RuleEngineConfiguration)
	{	if (soap_out_PointerTott__RuleEngineConfiguration(soap, "tt:RuleEngineConfiguration", -1, &a->tt__VideoAnalyticsConfiguration::RuleEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RuleEngineConfiguration"))
		return soap->error;
	if (a->tt__VideoAnalyticsConfiguration::__any)
	{	int i;
		for (i = 0; i < a->tt__VideoAnalyticsConfiguration::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__VideoAnalyticsConfiguration::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__VideoAnalyticsConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__VideoAnalyticsConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 tt__VideoAnalyticsConfiguration * SOAP_FMAC4 soap_in_tt__VideoAnalyticsConfiguration(struct soap *soap, const char *tag, tt__VideoAnalyticsConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__VideoAnalyticsConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsConfiguration, sizeof(tt__VideoAnalyticsConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__VideoAnalyticsConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__VideoAnalyticsConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__VideoAnalyticsConfiguration*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_AnalyticsEngineConfiguration1 = 1;
	size_t soap_flag_RuleEngineConfiguration1 = 1;
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
				if (soap_in_PointerTott__AnalyticsEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &(a->tt__VideoAnalyticsConfiguration::AnalyticsEngineConfiguration), "tt:AnalyticsEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration1--;
					continue;
				}
			if (soap_flag_RuleEngineConfiguration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RuleEngineConfiguration(soap, "tt:RuleEngineConfiguration", &(a->tt__VideoAnalyticsConfiguration::RuleEngineConfiguration), "tt:RuleEngineConfiguration"))
				{	soap_flag_RuleEngineConfiguration1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__VideoAnalyticsConfiguration::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__VideoAnalyticsConfiguration::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__VideoAnalyticsConfiguration::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__VideoAnalyticsConfiguration::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__VideoAnalyticsConfiguration::__any, "xsd:byte"))
				{	a->tt__VideoAnalyticsConfiguration::__size++;
					a->tt__VideoAnalyticsConfiguration::__any = NULL;
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
		if (a->tt__VideoAnalyticsConfiguration::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__VideoAnalyticsConfiguration::__size)
			a->tt__VideoAnalyticsConfiguration::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__VideoAnalyticsConfiguration::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__VideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsConfiguration, 0, sizeof(tt__VideoAnalyticsConfiguration), 0, soap_copy_tt__VideoAnalyticsConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_AnalyticsEngineConfiguration1 > 0 || soap_flag_RuleEngineConfiguration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__VideoAnalyticsConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsConfiguration);
	if (this->soap_out(soap, tag?tag:"tt:VideoAnalyticsConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__VideoAnalyticsConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__VideoAnalyticsConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 tt__VideoAnalyticsConfiguration * SOAP_FMAC4 soap_get_tt__VideoAnalyticsConfiguration(struct soap *soap, tt__VideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

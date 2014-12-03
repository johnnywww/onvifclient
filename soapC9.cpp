#include "soapH.h"

void *_tds__CreateUsers::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__CreateUsers(soap, tag, this, type);
}

SOAP_FMAC3 _tds__CreateUsers * SOAP_FMAC4 soap_in__tds__CreateUsers(struct soap *soap, const char *tag, _tds__CreateUsers *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__CreateUsers *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__CreateUsers, sizeof(_tds__CreateUsers), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__CreateUsers)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__CreateUsers *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_User1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:User", 1, NULL))
			{	if (a->_tds__CreateUsers::User == NULL)
				{	if (soap_blist_User1 == NULL)
						soap_blist_User1 = soap_new_block(soap);
					a->_tds__CreateUsers::User = (tt__User **)soap_push_block(soap, soap_blist_User1, sizeof(tt__User *));
					if (a->_tds__CreateUsers::User == NULL)
						return NULL;
					*a->_tds__CreateUsers::User = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__User(soap, "tds:User", a->_tds__CreateUsers::User, "tt:User"))
				{	a->_tds__CreateUsers::__sizeUser++;
					a->_tds__CreateUsers::User = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__CreateUsers::User)
			soap_pop_block(soap, soap_blist_User1);
		if (a->_tds__CreateUsers::__sizeUser)
			a->_tds__CreateUsers::User = (tt__User **)soap_save_block(soap, soap_blist_User1, NULL, 1);
		else
		{	a->_tds__CreateUsers::User = NULL;
			if (soap_blist_User1)
				soap_end_block(soap, soap_blist_User1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__CreateUsers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__CreateUsers, 0, sizeof(_tds__CreateUsers), 0, soap_copy__tds__CreateUsers);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__CreateUsers::__sizeUser < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__CreateUsers::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__CreateUsers);
	if (this->soap_out(soap, tag?tag:"tds:CreateUsers", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__CreateUsers::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__CreateUsers(soap, this, tag, type);
}

SOAP_FMAC3 _tds__CreateUsers * SOAP_FMAC4 soap_get__tds__CreateUsers(struct soap *soap, _tds__CreateUsers *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__CreateUsers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__CreateUsers * SOAP_FMAC2 soap_instantiate__tds__CreateUsers(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__CreateUsers(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__CreateUsers, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__CreateUsers);
		if (size)
			*size = sizeof(_tds__CreateUsers);
		((_tds__CreateUsers*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__CreateUsers, n);
		if (size)
			*size = n * sizeof(_tds__CreateUsers);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__CreateUsers*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__CreateUsers*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__CreateUsers(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__CreateUsers %p -> %p\n", q, p));
	*(_tds__CreateUsers*)p = *(_tds__CreateUsers*)q;
}

void _tds__GetUsersResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetUsersResponse::__sizeUser = 0;
	this->_tds__GetUsersResponse::User = NULL;
	/* transient soap skipped */
}

void _tds__GetUsersResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__GetUsersResponse::User)
	{	int i;
		for (i = 0; i < this->_tds__GetUsersResponse::__sizeUser; i++)
		{
			soap_serialize_PointerTott__User(soap, this->_tds__GetUsersResponse::User + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__GetUsersResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetUsersResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetUsersResponse(struct soap *soap, const char *tag, int id, const _tds__GetUsersResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetUsersResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeUser");
	if (a->_tds__GetUsersResponse::User)
	{	int i;
		for (i = 0; i < a->_tds__GetUsersResponse::__sizeUser; i++)
			if (soap_out_PointerTott__User(soap, "tds:User", -1, a->_tds__GetUsersResponse::User + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetUsersResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetUsersResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetUsersResponse * SOAP_FMAC4 soap_in__tds__GetUsersResponse(struct soap *soap, const char *tag, _tds__GetUsersResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetUsersResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetUsersResponse, sizeof(_tds__GetUsersResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetUsersResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetUsersResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_User1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:User", 1, NULL))
			{	if (a->_tds__GetUsersResponse::User == NULL)
				{	if (soap_blist_User1 == NULL)
						soap_blist_User1 = soap_new_block(soap);
					a->_tds__GetUsersResponse::User = (tt__User **)soap_push_block(soap, soap_blist_User1, sizeof(tt__User *));
					if (a->_tds__GetUsersResponse::User == NULL)
						return NULL;
					*a->_tds__GetUsersResponse::User = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__User(soap, "tds:User", a->_tds__GetUsersResponse::User, "tt:User"))
				{	a->_tds__GetUsersResponse::__sizeUser++;
					a->_tds__GetUsersResponse::User = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeUser");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetUsersResponse::User)
			soap_pop_block(soap, soap_blist_User1);
		if (a->_tds__GetUsersResponse::__sizeUser)
			a->_tds__GetUsersResponse::User = (tt__User **)soap_save_block(soap, soap_blist_User1, NULL, 1);
		else
		{	a->_tds__GetUsersResponse::User = NULL;
			if (soap_blist_User1)
				soap_end_block(soap, soap_blist_User1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetUsersResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetUsersResponse, 0, sizeof(_tds__GetUsersResponse), 0, soap_copy__tds__GetUsersResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetUsersResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetUsersResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetUsersResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetUsersResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetUsersResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetUsersResponse * SOAP_FMAC4 soap_get__tds__GetUsersResponse(struct soap *soap, _tds__GetUsersResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetUsersResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetUsersResponse * SOAP_FMAC2 soap_instantiate__tds__GetUsersResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetUsersResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetUsersResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetUsersResponse);
		if (size)
			*size = sizeof(_tds__GetUsersResponse);
		((_tds__GetUsersResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetUsersResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetUsersResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetUsersResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetUsersResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetUsersResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetUsersResponse %p -> %p\n", q, p));
	*(_tds__GetUsersResponse*)p = *(_tds__GetUsersResponse*)q;
}

void _tds__GetUsers::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetUsers::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetUsers::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetUsers(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetUsers(struct soap *soap, const char *tag, int id, const _tds__GetUsers *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetUsers), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetUsers::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetUsers(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetUsers * SOAP_FMAC4 soap_in__tds__GetUsers(struct soap *soap, const char *tag, _tds__GetUsers *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetUsers *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetUsers, sizeof(_tds__GetUsers), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetUsers)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetUsers *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetUsers *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetUsers, 0, sizeof(_tds__GetUsers), 0, soap_copy__tds__GetUsers);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetUsers::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetUsers);
	if (this->soap_out(soap, tag?tag:"tds:GetUsers", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetUsers::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetUsers(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetUsers * SOAP_FMAC4 soap_get__tds__GetUsers(struct soap *soap, _tds__GetUsers *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetUsers(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetUsers * SOAP_FMAC2 soap_instantiate__tds__GetUsers(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetUsers(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetUsers, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetUsers);
		if (size)
			*size = sizeof(_tds__GetUsers);
		((_tds__GetUsers*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetUsers, n);
		if (size)
			*size = n * sizeof(_tds__GetUsers);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetUsers*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetUsers*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetUsers(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetUsers %p -> %p\n", q, p));
	*(_tds__GetUsers*)p = *(_tds__GetUsers*)q;
}

void _tds__SetRemoteUserResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetRemoteUserResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetRemoteUserResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetRemoteUserResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetRemoteUserResponse(struct soap *soap, const char *tag, int id, const _tds__SetRemoteUserResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetRemoteUserResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetRemoteUserResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetRemoteUserResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetRemoteUserResponse * SOAP_FMAC4 soap_in__tds__SetRemoteUserResponse(struct soap *soap, const char *tag, _tds__SetRemoteUserResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetRemoteUserResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetRemoteUserResponse, sizeof(_tds__SetRemoteUserResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetRemoteUserResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetRemoteUserResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetRemoteUserResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetRemoteUserResponse, 0, sizeof(_tds__SetRemoteUserResponse), 0, soap_copy__tds__SetRemoteUserResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetRemoteUserResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetRemoteUserResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetRemoteUserResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetRemoteUserResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetRemoteUserResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetRemoteUserResponse * SOAP_FMAC4 soap_get__tds__SetRemoteUserResponse(struct soap *soap, _tds__SetRemoteUserResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetRemoteUserResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetRemoteUserResponse * SOAP_FMAC2 soap_instantiate__tds__SetRemoteUserResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetRemoteUserResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetRemoteUserResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetRemoteUserResponse);
		if (size)
			*size = sizeof(_tds__SetRemoteUserResponse);
		((_tds__SetRemoteUserResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetRemoteUserResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetRemoteUserResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetRemoteUserResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetRemoteUserResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetRemoteUserResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetRemoteUserResponse %p -> %p\n", q, p));
	*(_tds__SetRemoteUserResponse*)p = *(_tds__SetRemoteUserResponse*)q;
}

void _tds__SetRemoteUser::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__SetRemoteUser::RemoteUser = NULL;
	/* transient soap skipped */
}

void _tds__SetRemoteUser::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RemoteUser(soap, &this->_tds__SetRemoteUser::RemoteUser);
	/* transient soap skipped */
#endif
}

int _tds__SetRemoteUser::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetRemoteUser(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetRemoteUser(struct soap *soap, const char *tag, int id, const _tds__SetRemoteUser *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetRemoteUser), type))
		return soap->error;
	if (soap_out_PointerTott__RemoteUser(soap, "tds:RemoteUser", -1, &(a->_tds__SetRemoteUser::RemoteUser), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetRemoteUser::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetRemoteUser(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetRemoteUser * SOAP_FMAC4 soap_in__tds__SetRemoteUser(struct soap *soap, const char *tag, _tds__SetRemoteUser *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetRemoteUser *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetRemoteUser, sizeof(_tds__SetRemoteUser), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetRemoteUser)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetRemoteUser *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_RemoteUser1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RemoteUser1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RemoteUser(soap, "tds:RemoteUser", &(a->_tds__SetRemoteUser::RemoteUser), "tt:RemoteUser"))
				{	soap_flag_RemoteUser1--;
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
	{	a = (_tds__SetRemoteUser *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetRemoteUser, 0, sizeof(_tds__SetRemoteUser), 0, soap_copy__tds__SetRemoteUser);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetRemoteUser::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetRemoteUser);
	if (this->soap_out(soap, tag?tag:"tds:SetRemoteUser", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetRemoteUser::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetRemoteUser(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetRemoteUser * SOAP_FMAC4 soap_get__tds__SetRemoteUser(struct soap *soap, _tds__SetRemoteUser *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetRemoteUser(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetRemoteUser * SOAP_FMAC2 soap_instantiate__tds__SetRemoteUser(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetRemoteUser(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetRemoteUser, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetRemoteUser);
		if (size)
			*size = sizeof(_tds__SetRemoteUser);
		((_tds__SetRemoteUser*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetRemoteUser, n);
		if (size)
			*size = n * sizeof(_tds__SetRemoteUser);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetRemoteUser*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetRemoteUser*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetRemoteUser(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetRemoteUser %p -> %p\n", q, p));
	*(_tds__SetRemoteUser*)p = *(_tds__SetRemoteUser*)q;
}

void _tds__GetRemoteUserResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetRemoteUserResponse::RemoteUser = NULL;
	/* transient soap skipped */
}

void _tds__GetRemoteUserResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RemoteUser(soap, &this->_tds__GetRemoteUserResponse::RemoteUser);
	/* transient soap skipped */
#endif
}

int _tds__GetRemoteUserResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetRemoteUserResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetRemoteUserResponse(struct soap *soap, const char *tag, int id, const _tds__GetRemoteUserResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetRemoteUserResponse), type))
		return soap->error;
	if (a->RemoteUser)
		soap_element_result(soap, "tds:RemoteUser");
	if (soap_out_PointerTott__RemoteUser(soap, "tds:RemoteUser", -1, &(a->_tds__GetRemoteUserResponse::RemoteUser), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetRemoteUserResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetRemoteUserResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetRemoteUserResponse * SOAP_FMAC4 soap_in__tds__GetRemoteUserResponse(struct soap *soap, const char *tag, _tds__GetRemoteUserResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetRemoteUserResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetRemoteUserResponse, sizeof(_tds__GetRemoteUserResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetRemoteUserResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetRemoteUserResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_RemoteUser1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RemoteUser1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RemoteUser(soap, "tds:RemoteUser", &(a->_tds__GetRemoteUserResponse::RemoteUser), "tt:RemoteUser"))
				{	soap_flag_RemoteUser1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:RemoteUser");
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
	{	a = (_tds__GetRemoteUserResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetRemoteUserResponse, 0, sizeof(_tds__GetRemoteUserResponse), 0, soap_copy__tds__GetRemoteUserResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetRemoteUserResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetRemoteUserResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetRemoteUserResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetRemoteUserResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetRemoteUserResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetRemoteUserResponse * SOAP_FMAC4 soap_get__tds__GetRemoteUserResponse(struct soap *soap, _tds__GetRemoteUserResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetRemoteUserResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetRemoteUserResponse * SOAP_FMAC2 soap_instantiate__tds__GetRemoteUserResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetRemoteUserResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetRemoteUserResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetRemoteUserResponse);
		if (size)
			*size = sizeof(_tds__GetRemoteUserResponse);
		((_tds__GetRemoteUserResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetRemoteUserResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetRemoteUserResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetRemoteUserResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetRemoteUserResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetRemoteUserResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetRemoteUserResponse %p -> %p\n", q, p));
	*(_tds__GetRemoteUserResponse*)p = *(_tds__GetRemoteUserResponse*)q;
}

void _tds__GetRemoteUser::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetRemoteUser::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetRemoteUser::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetRemoteUser(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetRemoteUser(struct soap *soap, const char *tag, int id, const _tds__GetRemoteUser *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetRemoteUser), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetRemoteUser::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetRemoteUser(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetRemoteUser * SOAP_FMAC4 soap_in__tds__GetRemoteUser(struct soap *soap, const char *tag, _tds__GetRemoteUser *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetRemoteUser *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetRemoteUser, sizeof(_tds__GetRemoteUser), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetRemoteUser)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetRemoteUser *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetRemoteUser *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetRemoteUser, 0, sizeof(_tds__GetRemoteUser), 0, soap_copy__tds__GetRemoteUser);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetRemoteUser::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetRemoteUser);
	if (this->soap_out(soap, tag?tag:"tds:GetRemoteUser", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetRemoteUser::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetRemoteUser(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetRemoteUser * SOAP_FMAC4 soap_get__tds__GetRemoteUser(struct soap *soap, _tds__GetRemoteUser *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetRemoteUser(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetRemoteUser * SOAP_FMAC2 soap_instantiate__tds__GetRemoteUser(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetRemoteUser(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetRemoteUser, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetRemoteUser);
		if (size)
			*size = sizeof(_tds__GetRemoteUser);
		((_tds__GetRemoteUser*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetRemoteUser, n);
		if (size)
			*size = n * sizeof(_tds__GetRemoteUser);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetRemoteUser*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetRemoteUser*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetRemoteUser(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetRemoteUser %p -> %p\n", q, p));
	*(_tds__GetRemoteUser*)p = *(_tds__GetRemoteUser*)q;
}

void _tds__GetEndpointReferenceResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_string(soap, &this->_tds__GetEndpointReferenceResponse::GUID);
	this->_tds__GetEndpointReferenceResponse::__size = 0;
	this->_tds__GetEndpointReferenceResponse::__any = NULL;
	/* transient soap skipped */
}

void _tds__GetEndpointReferenceResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->_tds__GetEndpointReferenceResponse::GUID);
	/* transient soap skipped */
#endif
}

int _tds__GetEndpointReferenceResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetEndpointReferenceResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetEndpointReferenceResponse(struct soap *soap, const char *tag, int id, const _tds__GetEndpointReferenceResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetEndpointReferenceResponse), type))
		return soap->error;
	if (a->GUID)
		soap_element_result(soap, "tds:GUID");
	if (a->_tds__GetEndpointReferenceResponse::GUID)
	{	if (soap_out_string(soap, "tds:GUID", -1, &a->_tds__GetEndpointReferenceResponse::GUID, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:GUID"))
		return soap->error;
	if (a->_tds__GetEndpointReferenceResponse::__any)
	{	int i;
		for (i = 0; i < a->_tds__GetEndpointReferenceResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_tds__GetEndpointReferenceResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetEndpointReferenceResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetEndpointReferenceResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetEndpointReferenceResponse * SOAP_FMAC4 soap_in__tds__GetEndpointReferenceResponse(struct soap *soap, const char *tag, _tds__GetEndpointReferenceResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetEndpointReferenceResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetEndpointReferenceResponse, sizeof(_tds__GetEndpointReferenceResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetEndpointReferenceResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetEndpointReferenceResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_GUID1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_GUID1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:GUID", &(a->_tds__GetEndpointReferenceResponse::GUID), "xsd:string"))
				{	soap_flag_GUID1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_tds__GetEndpointReferenceResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_tds__GetEndpointReferenceResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_tds__GetEndpointReferenceResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_tds__GetEndpointReferenceResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_tds__GetEndpointReferenceResponse::__any, "xsd:byte"))
				{	a->_tds__GetEndpointReferenceResponse::__size++;
					a->_tds__GetEndpointReferenceResponse::__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "tds:GUID");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetEndpointReferenceResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_tds__GetEndpointReferenceResponse::__size)
			a->_tds__GetEndpointReferenceResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_tds__GetEndpointReferenceResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetEndpointReferenceResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetEndpointReferenceResponse, 0, sizeof(_tds__GetEndpointReferenceResponse), 0, soap_copy__tds__GetEndpointReferenceResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_GUID1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetEndpointReferenceResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetEndpointReferenceResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetEndpointReferenceResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetEndpointReferenceResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetEndpointReferenceResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetEndpointReferenceResponse * SOAP_FMAC4 soap_get__tds__GetEndpointReferenceResponse(struct soap *soap, _tds__GetEndpointReferenceResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetEndpointReferenceResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetEndpointReferenceResponse * SOAP_FMAC2 soap_instantiate__tds__GetEndpointReferenceResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetEndpointReferenceResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetEndpointReferenceResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetEndpointReferenceResponse);
		if (size)
			*size = sizeof(_tds__GetEndpointReferenceResponse);
		((_tds__GetEndpointReferenceResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetEndpointReferenceResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetEndpointReferenceResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetEndpointReferenceResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetEndpointReferenceResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetEndpointReferenceResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetEndpointReferenceResponse %p -> %p\n", q, p));
	*(_tds__GetEndpointReferenceResponse*)p = *(_tds__GetEndpointReferenceResponse*)q;
}

void _tds__GetEndpointReference::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetEndpointReference::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetEndpointReference::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetEndpointReference(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetEndpointReference(struct soap *soap, const char *tag, int id, const _tds__GetEndpointReference *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetEndpointReference), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetEndpointReference::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetEndpointReference(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetEndpointReference * SOAP_FMAC4 soap_in__tds__GetEndpointReference(struct soap *soap, const char *tag, _tds__GetEndpointReference *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetEndpointReference *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetEndpointReference, sizeof(_tds__GetEndpointReference), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetEndpointReference)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetEndpointReference *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetEndpointReference *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetEndpointReference, 0, sizeof(_tds__GetEndpointReference), 0, soap_copy__tds__GetEndpointReference);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetEndpointReference::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetEndpointReference);
	if (this->soap_out(soap, tag?tag:"tds:GetEndpointReference", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetEndpointReference::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetEndpointReference(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetEndpointReference * SOAP_FMAC4 soap_get__tds__GetEndpointReference(struct soap *soap, _tds__GetEndpointReference *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetEndpointReference(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetEndpointReference * SOAP_FMAC2 soap_instantiate__tds__GetEndpointReference(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetEndpointReference(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetEndpointReference, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetEndpointReference);
		if (size)
			*size = sizeof(_tds__GetEndpointReference);
		((_tds__GetEndpointReference*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetEndpointReference, n);
		if (size)
			*size = n * sizeof(_tds__GetEndpointReference);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetEndpointReference*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetEndpointReference*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetEndpointReference(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetEndpointReference %p -> %p\n", q, p));
	*(_tds__GetEndpointReference*)p = *(_tds__GetEndpointReference*)q;
}

void _tds__SetDPAddressesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetDPAddressesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetDPAddressesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetDPAddressesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetDPAddressesResponse(struct soap *soap, const char *tag, int id, const _tds__SetDPAddressesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetDPAddressesResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetDPAddressesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetDPAddressesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetDPAddressesResponse * SOAP_FMAC4 soap_in__tds__SetDPAddressesResponse(struct soap *soap, const char *tag, _tds__SetDPAddressesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetDPAddressesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetDPAddressesResponse, sizeof(_tds__SetDPAddressesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetDPAddressesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetDPAddressesResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetDPAddressesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetDPAddressesResponse, 0, sizeof(_tds__SetDPAddressesResponse), 0, soap_copy__tds__SetDPAddressesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetDPAddressesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetDPAddressesResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetDPAddressesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetDPAddressesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetDPAddressesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetDPAddressesResponse * SOAP_FMAC4 soap_get__tds__SetDPAddressesResponse(struct soap *soap, _tds__SetDPAddressesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetDPAddressesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetDPAddressesResponse * SOAP_FMAC2 soap_instantiate__tds__SetDPAddressesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetDPAddressesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetDPAddressesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetDPAddressesResponse);
		if (size)
			*size = sizeof(_tds__SetDPAddressesResponse);
		((_tds__SetDPAddressesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetDPAddressesResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetDPAddressesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetDPAddressesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetDPAddressesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetDPAddressesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetDPAddressesResponse %p -> %p\n", q, p));
	*(_tds__SetDPAddressesResponse*)p = *(_tds__SetDPAddressesResponse*)q;
}

void _tds__SetDPAddresses::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__SetDPAddresses::__sizeDPAddress = 0;
	this->_tds__SetDPAddresses::DPAddress = NULL;
	/* transient soap skipped */
}

void _tds__SetDPAddresses::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__SetDPAddresses::DPAddress)
	{	int i;
		for (i = 0; i < this->_tds__SetDPAddresses::__sizeDPAddress; i++)
		{
			soap_serialize_PointerTott__NetworkHost(soap, this->_tds__SetDPAddresses::DPAddress + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__SetDPAddresses::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetDPAddresses(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetDPAddresses(struct soap *soap, const char *tag, int id, const _tds__SetDPAddresses *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetDPAddresses), type))
		return soap->error;
	if (a->_tds__SetDPAddresses::DPAddress)
	{	int i;
		for (i = 0; i < a->_tds__SetDPAddresses::__sizeDPAddress; i++)
			if (soap_out_PointerTott__NetworkHost(soap, "tds:DPAddress", -1, a->_tds__SetDPAddresses::DPAddress + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetDPAddresses::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetDPAddresses(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetDPAddresses * SOAP_FMAC4 soap_in__tds__SetDPAddresses(struct soap *soap, const char *tag, _tds__SetDPAddresses *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetDPAddresses *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetDPAddresses, sizeof(_tds__SetDPAddresses), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetDPAddresses)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetDPAddresses *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_DPAddress1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:DPAddress", 1, NULL))
			{	if (a->_tds__SetDPAddresses::DPAddress == NULL)
				{	if (soap_blist_DPAddress1 == NULL)
						soap_blist_DPAddress1 = soap_new_block(soap);
					a->_tds__SetDPAddresses::DPAddress = (tt__NetworkHost **)soap_push_block(soap, soap_blist_DPAddress1, sizeof(tt__NetworkHost *));
					if (a->_tds__SetDPAddresses::DPAddress == NULL)
						return NULL;
					*a->_tds__SetDPAddresses::DPAddress = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__NetworkHost(soap, "tds:DPAddress", a->_tds__SetDPAddresses::DPAddress, "tt:NetworkHost"))
				{	a->_tds__SetDPAddresses::__sizeDPAddress++;
					a->_tds__SetDPAddresses::DPAddress = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__SetDPAddresses::DPAddress)
			soap_pop_block(soap, soap_blist_DPAddress1);
		if (a->_tds__SetDPAddresses::__sizeDPAddress)
			a->_tds__SetDPAddresses::DPAddress = (tt__NetworkHost **)soap_save_block(soap, soap_blist_DPAddress1, NULL, 1);
		else
		{	a->_tds__SetDPAddresses::DPAddress = NULL;
			if (soap_blist_DPAddress1)
				soap_end_block(soap, soap_blist_DPAddress1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__SetDPAddresses *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetDPAddresses, 0, sizeof(_tds__SetDPAddresses), 0, soap_copy__tds__SetDPAddresses);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetDPAddresses::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetDPAddresses);
	if (this->soap_out(soap, tag?tag:"tds:SetDPAddresses", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetDPAddresses::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetDPAddresses(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetDPAddresses * SOAP_FMAC4 soap_get__tds__SetDPAddresses(struct soap *soap, _tds__SetDPAddresses *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetDPAddresses(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetDPAddresses * SOAP_FMAC2 soap_instantiate__tds__SetDPAddresses(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetDPAddresses(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetDPAddresses, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetDPAddresses);
		if (size)
			*size = sizeof(_tds__SetDPAddresses);
		((_tds__SetDPAddresses*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetDPAddresses, n);
		if (size)
			*size = n * sizeof(_tds__SetDPAddresses);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetDPAddresses*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetDPAddresses*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetDPAddresses(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetDPAddresses %p -> %p\n", q, p));
	*(_tds__SetDPAddresses*)p = *(_tds__SetDPAddresses*)q;
}

void _tds__GetDPAddressesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetDPAddressesResponse::__sizeDPAddress = 0;
	this->_tds__GetDPAddressesResponse::DPAddress = NULL;
	/* transient soap skipped */
}

void _tds__GetDPAddressesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__GetDPAddressesResponse::DPAddress)
	{	int i;
		for (i = 0; i < this->_tds__GetDPAddressesResponse::__sizeDPAddress; i++)
		{
			soap_serialize_PointerTott__NetworkHost(soap, this->_tds__GetDPAddressesResponse::DPAddress + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__GetDPAddressesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDPAddressesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDPAddressesResponse(struct soap *soap, const char *tag, int id, const _tds__GetDPAddressesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDPAddressesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeDPAddress");
	if (a->_tds__GetDPAddressesResponse::DPAddress)
	{	int i;
		for (i = 0; i < a->_tds__GetDPAddressesResponse::__sizeDPAddress; i++)
			if (soap_out_PointerTott__NetworkHost(soap, "tds:DPAddress", -1, a->_tds__GetDPAddressesResponse::DPAddress + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDPAddressesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDPAddressesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDPAddressesResponse * SOAP_FMAC4 soap_in__tds__GetDPAddressesResponse(struct soap *soap, const char *tag, _tds__GetDPAddressesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDPAddressesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDPAddressesResponse, sizeof(_tds__GetDPAddressesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDPAddressesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDPAddressesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_DPAddress1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:DPAddress", 1, NULL))
			{	if (a->_tds__GetDPAddressesResponse::DPAddress == NULL)
				{	if (soap_blist_DPAddress1 == NULL)
						soap_blist_DPAddress1 = soap_new_block(soap);
					a->_tds__GetDPAddressesResponse::DPAddress = (tt__NetworkHost **)soap_push_block(soap, soap_blist_DPAddress1, sizeof(tt__NetworkHost *));
					if (a->_tds__GetDPAddressesResponse::DPAddress == NULL)
						return NULL;
					*a->_tds__GetDPAddressesResponse::DPAddress = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__NetworkHost(soap, "tds:DPAddress", a->_tds__GetDPAddressesResponse::DPAddress, "tt:NetworkHost"))
				{	a->_tds__GetDPAddressesResponse::__sizeDPAddress++;
					a->_tds__GetDPAddressesResponse::DPAddress = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeDPAddress");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetDPAddressesResponse::DPAddress)
			soap_pop_block(soap, soap_blist_DPAddress1);
		if (a->_tds__GetDPAddressesResponse::__sizeDPAddress)
			a->_tds__GetDPAddressesResponse::DPAddress = (tt__NetworkHost **)soap_save_block(soap, soap_blist_DPAddress1, NULL, 1);
		else
		{	a->_tds__GetDPAddressesResponse::DPAddress = NULL;
			if (soap_blist_DPAddress1)
				soap_end_block(soap, soap_blist_DPAddress1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetDPAddressesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDPAddressesResponse, 0, sizeof(_tds__GetDPAddressesResponse), 0, soap_copy__tds__GetDPAddressesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetDPAddressesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDPAddressesResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetDPAddressesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDPAddressesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDPAddressesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDPAddressesResponse * SOAP_FMAC4 soap_get__tds__GetDPAddressesResponse(struct soap *soap, _tds__GetDPAddressesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDPAddressesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDPAddressesResponse * SOAP_FMAC2 soap_instantiate__tds__GetDPAddressesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDPAddressesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDPAddressesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDPAddressesResponse);
		if (size)
			*size = sizeof(_tds__GetDPAddressesResponse);
		((_tds__GetDPAddressesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDPAddressesResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetDPAddressesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDPAddressesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDPAddressesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDPAddressesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDPAddressesResponse %p -> %p\n", q, p));
	*(_tds__GetDPAddressesResponse*)p = *(_tds__GetDPAddressesResponse*)q;
}

void _tds__GetDPAddresses::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetDPAddresses::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetDPAddresses::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDPAddresses(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDPAddresses(struct soap *soap, const char *tag, int id, const _tds__GetDPAddresses *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDPAddresses), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDPAddresses::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDPAddresses(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDPAddresses * SOAP_FMAC4 soap_in__tds__GetDPAddresses(struct soap *soap, const char *tag, _tds__GetDPAddresses *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDPAddresses *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDPAddresses, sizeof(_tds__GetDPAddresses), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDPAddresses)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDPAddresses *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetDPAddresses *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDPAddresses, 0, sizeof(_tds__GetDPAddresses), 0, soap_copy__tds__GetDPAddresses);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetDPAddresses::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDPAddresses);
	if (this->soap_out(soap, tag?tag:"tds:GetDPAddresses", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDPAddresses::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDPAddresses(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDPAddresses * SOAP_FMAC4 soap_get__tds__GetDPAddresses(struct soap *soap, _tds__GetDPAddresses *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDPAddresses(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDPAddresses * SOAP_FMAC2 soap_instantiate__tds__GetDPAddresses(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDPAddresses(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDPAddresses, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDPAddresses);
		if (size)
			*size = sizeof(_tds__GetDPAddresses);
		((_tds__GetDPAddresses*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDPAddresses, n);
		if (size)
			*size = n * sizeof(_tds__GetDPAddresses);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDPAddresses*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDPAddresses*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDPAddresses(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDPAddresses %p -> %p\n", q, p));
	*(_tds__GetDPAddresses*)p = *(_tds__GetDPAddresses*)q;
}

void _tds__SetRemoteDiscoveryModeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetRemoteDiscoveryModeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetRemoteDiscoveryModeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetRemoteDiscoveryModeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetRemoteDiscoveryModeResponse(struct soap *soap, const char *tag, int id, const _tds__SetRemoteDiscoveryModeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetRemoteDiscoveryModeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetRemoteDiscoveryModeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetRemoteDiscoveryModeResponse * SOAP_FMAC4 soap_in__tds__SetRemoteDiscoveryModeResponse(struct soap *soap, const char *tag, _tds__SetRemoteDiscoveryModeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetRemoteDiscoveryModeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse, sizeof(_tds__SetRemoteDiscoveryModeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetRemoteDiscoveryModeResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetRemoteDiscoveryModeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse, 0, sizeof(_tds__SetRemoteDiscoveryModeResponse), 0, soap_copy__tds__SetRemoteDiscoveryModeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetRemoteDiscoveryModeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetRemoteDiscoveryModeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetRemoteDiscoveryModeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetRemoteDiscoveryModeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetRemoteDiscoveryModeResponse * SOAP_FMAC4 soap_get__tds__SetRemoteDiscoveryModeResponse(struct soap *soap, _tds__SetRemoteDiscoveryModeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetRemoteDiscoveryModeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetRemoteDiscoveryModeResponse * SOAP_FMAC2 soap_instantiate__tds__SetRemoteDiscoveryModeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetRemoteDiscoveryModeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetRemoteDiscoveryModeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetRemoteDiscoveryModeResponse);
		if (size)
			*size = sizeof(_tds__SetRemoteDiscoveryModeResponse);
		((_tds__SetRemoteDiscoveryModeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetRemoteDiscoveryModeResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetRemoteDiscoveryModeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetRemoteDiscoveryModeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetRemoteDiscoveryModeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetRemoteDiscoveryModeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetRemoteDiscoveryModeResponse %p -> %p\n", q, p));
	*(_tds__SetRemoteDiscoveryModeResponse*)p = *(_tds__SetRemoteDiscoveryModeResponse*)q;
}

void _tds__SetRemoteDiscoveryMode::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__DiscoveryMode(soap, &this->_tds__SetRemoteDiscoveryMode::RemoteDiscoveryMode);
	/* transient soap skipped */
}

void _tds__SetRemoteDiscoveryMode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetRemoteDiscoveryMode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetRemoteDiscoveryMode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetRemoteDiscoveryMode(struct soap *soap, const char *tag, int id, const _tds__SetRemoteDiscoveryMode *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetRemoteDiscoveryMode), type))
		return soap->error;
	if (soap_out_tt__DiscoveryMode(soap, "tds:RemoteDiscoveryMode", -1, &(a->_tds__SetRemoteDiscoveryMode::RemoteDiscoveryMode), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetRemoteDiscoveryMode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetRemoteDiscoveryMode(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetRemoteDiscoveryMode * SOAP_FMAC4 soap_in__tds__SetRemoteDiscoveryMode(struct soap *soap, const char *tag, _tds__SetRemoteDiscoveryMode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetRemoteDiscoveryMode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetRemoteDiscoveryMode, sizeof(_tds__SetRemoteDiscoveryMode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetRemoteDiscoveryMode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetRemoteDiscoveryMode *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_RemoteDiscoveryMode1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RemoteDiscoveryMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DiscoveryMode(soap, "tds:RemoteDiscoveryMode", &(a->_tds__SetRemoteDiscoveryMode::RemoteDiscoveryMode), "tt:DiscoveryMode"))
				{	soap_flag_RemoteDiscoveryMode1--;
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
	{	a = (_tds__SetRemoteDiscoveryMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetRemoteDiscoveryMode, 0, sizeof(_tds__SetRemoteDiscoveryMode), 0, soap_copy__tds__SetRemoteDiscoveryMode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RemoteDiscoveryMode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SetRemoteDiscoveryMode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetRemoteDiscoveryMode);
	if (this->soap_out(soap, tag?tag:"tds:SetRemoteDiscoveryMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetRemoteDiscoveryMode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetRemoteDiscoveryMode(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetRemoteDiscoveryMode * SOAP_FMAC4 soap_get__tds__SetRemoteDiscoveryMode(struct soap *soap, _tds__SetRemoteDiscoveryMode *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetRemoteDiscoveryMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetRemoteDiscoveryMode * SOAP_FMAC2 soap_instantiate__tds__SetRemoteDiscoveryMode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetRemoteDiscoveryMode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetRemoteDiscoveryMode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetRemoteDiscoveryMode);
		if (size)
			*size = sizeof(_tds__SetRemoteDiscoveryMode);
		((_tds__SetRemoteDiscoveryMode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetRemoteDiscoveryMode, n);
		if (size)
			*size = n * sizeof(_tds__SetRemoteDiscoveryMode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetRemoteDiscoveryMode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetRemoteDiscoveryMode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetRemoteDiscoveryMode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetRemoteDiscoveryMode %p -> %p\n", q, p));
	*(_tds__SetRemoteDiscoveryMode*)p = *(_tds__SetRemoteDiscoveryMode*)q;
}

void _tds__GetRemoteDiscoveryModeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__DiscoveryMode(soap, &this->_tds__GetRemoteDiscoveryModeResponse::RemoteDiscoveryMode);
	/* transient soap skipped */
}

void _tds__GetRemoteDiscoveryModeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetRemoteDiscoveryModeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetRemoteDiscoveryModeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetRemoteDiscoveryModeResponse(struct soap *soap, const char *tag, int id, const _tds__GetRemoteDiscoveryModeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse), type))
		return soap->error;
	soap_element_result(soap, "tds:RemoteDiscoveryMode");
	if (soap_out_tt__DiscoveryMode(soap, "tds:RemoteDiscoveryMode", -1, &(a->_tds__GetRemoteDiscoveryModeResponse::RemoteDiscoveryMode), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetRemoteDiscoveryModeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetRemoteDiscoveryModeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetRemoteDiscoveryModeResponse * SOAP_FMAC4 soap_in__tds__GetRemoteDiscoveryModeResponse(struct soap *soap, const char *tag, _tds__GetRemoteDiscoveryModeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetRemoteDiscoveryModeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse, sizeof(_tds__GetRemoteDiscoveryModeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetRemoteDiscoveryModeResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_RemoteDiscoveryMode1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RemoteDiscoveryMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DiscoveryMode(soap, "tds:RemoteDiscoveryMode", &(a->_tds__GetRemoteDiscoveryModeResponse::RemoteDiscoveryMode), "tt:DiscoveryMode"))
				{	soap_flag_RemoteDiscoveryMode1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:RemoteDiscoveryMode");
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
	{	a = (_tds__GetRemoteDiscoveryModeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse, 0, sizeof(_tds__GetRemoteDiscoveryModeResponse), 0, soap_copy__tds__GetRemoteDiscoveryModeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RemoteDiscoveryMode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetRemoteDiscoveryModeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetRemoteDiscoveryModeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetRemoteDiscoveryModeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetRemoteDiscoveryModeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetRemoteDiscoveryModeResponse * SOAP_FMAC4 soap_get__tds__GetRemoteDiscoveryModeResponse(struct soap *soap, _tds__GetRemoteDiscoveryModeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetRemoteDiscoveryModeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetRemoteDiscoveryModeResponse * SOAP_FMAC2 soap_instantiate__tds__GetRemoteDiscoveryModeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetRemoteDiscoveryModeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetRemoteDiscoveryModeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetRemoteDiscoveryModeResponse);
		if (size)
			*size = sizeof(_tds__GetRemoteDiscoveryModeResponse);
		((_tds__GetRemoteDiscoveryModeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetRemoteDiscoveryModeResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetRemoteDiscoveryModeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetRemoteDiscoveryModeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetRemoteDiscoveryModeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetRemoteDiscoveryModeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetRemoteDiscoveryModeResponse %p -> %p\n", q, p));
	*(_tds__GetRemoteDiscoveryModeResponse*)p = *(_tds__GetRemoteDiscoveryModeResponse*)q;
}

void _tds__GetRemoteDiscoveryMode::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetRemoteDiscoveryMode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetRemoteDiscoveryMode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetRemoteDiscoveryMode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetRemoteDiscoveryMode(struct soap *soap, const char *tag, int id, const _tds__GetRemoteDiscoveryMode *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetRemoteDiscoveryMode), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetRemoteDiscoveryMode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetRemoteDiscoveryMode(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetRemoteDiscoveryMode * SOAP_FMAC4 soap_in__tds__GetRemoteDiscoveryMode(struct soap *soap, const char *tag, _tds__GetRemoteDiscoveryMode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetRemoteDiscoveryMode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetRemoteDiscoveryMode, sizeof(_tds__GetRemoteDiscoveryMode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetRemoteDiscoveryMode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetRemoteDiscoveryMode *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetRemoteDiscoveryMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetRemoteDiscoveryMode, 0, sizeof(_tds__GetRemoteDiscoveryMode), 0, soap_copy__tds__GetRemoteDiscoveryMode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetRemoteDiscoveryMode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetRemoteDiscoveryMode);
	if (this->soap_out(soap, tag?tag:"tds:GetRemoteDiscoveryMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetRemoteDiscoveryMode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetRemoteDiscoveryMode(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetRemoteDiscoveryMode * SOAP_FMAC4 soap_get__tds__GetRemoteDiscoveryMode(struct soap *soap, _tds__GetRemoteDiscoveryMode *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetRemoteDiscoveryMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetRemoteDiscoveryMode * SOAP_FMAC2 soap_instantiate__tds__GetRemoteDiscoveryMode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetRemoteDiscoveryMode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetRemoteDiscoveryMode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetRemoteDiscoveryMode);
		if (size)
			*size = sizeof(_tds__GetRemoteDiscoveryMode);
		((_tds__GetRemoteDiscoveryMode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetRemoteDiscoveryMode, n);
		if (size)
			*size = n * sizeof(_tds__GetRemoteDiscoveryMode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetRemoteDiscoveryMode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetRemoteDiscoveryMode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetRemoteDiscoveryMode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetRemoteDiscoveryMode %p -> %p\n", q, p));
	*(_tds__GetRemoteDiscoveryMode*)p = *(_tds__GetRemoteDiscoveryMode*)q;
}

void _tds__SetDiscoveryModeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetDiscoveryModeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetDiscoveryModeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetDiscoveryModeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetDiscoveryModeResponse(struct soap *soap, const char *tag, int id, const _tds__SetDiscoveryModeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetDiscoveryModeResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetDiscoveryModeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetDiscoveryModeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetDiscoveryModeResponse * SOAP_FMAC4 soap_in__tds__SetDiscoveryModeResponse(struct soap *soap, const char *tag, _tds__SetDiscoveryModeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetDiscoveryModeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetDiscoveryModeResponse, sizeof(_tds__SetDiscoveryModeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetDiscoveryModeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetDiscoveryModeResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetDiscoveryModeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetDiscoveryModeResponse, 0, sizeof(_tds__SetDiscoveryModeResponse), 0, soap_copy__tds__SetDiscoveryModeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetDiscoveryModeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetDiscoveryModeResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetDiscoveryModeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetDiscoveryModeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetDiscoveryModeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetDiscoveryModeResponse * SOAP_FMAC4 soap_get__tds__SetDiscoveryModeResponse(struct soap *soap, _tds__SetDiscoveryModeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetDiscoveryModeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetDiscoveryModeResponse * SOAP_FMAC2 soap_instantiate__tds__SetDiscoveryModeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetDiscoveryModeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetDiscoveryModeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetDiscoveryModeResponse);
		if (size)
			*size = sizeof(_tds__SetDiscoveryModeResponse);
		((_tds__SetDiscoveryModeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetDiscoveryModeResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetDiscoveryModeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetDiscoveryModeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetDiscoveryModeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetDiscoveryModeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetDiscoveryModeResponse %p -> %p\n", q, p));
	*(_tds__SetDiscoveryModeResponse*)p = *(_tds__SetDiscoveryModeResponse*)q;
}

void _tds__SetDiscoveryMode::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__DiscoveryMode(soap, &this->_tds__SetDiscoveryMode::DiscoveryMode);
	/* transient soap skipped */
}

void _tds__SetDiscoveryMode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetDiscoveryMode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetDiscoveryMode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetDiscoveryMode(struct soap *soap, const char *tag, int id, const _tds__SetDiscoveryMode *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetDiscoveryMode), type))
		return soap->error;
	if (soap_out_tt__DiscoveryMode(soap, "tds:DiscoveryMode", -1, &(a->_tds__SetDiscoveryMode::DiscoveryMode), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetDiscoveryMode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetDiscoveryMode(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetDiscoveryMode * SOAP_FMAC4 soap_in__tds__SetDiscoveryMode(struct soap *soap, const char *tag, _tds__SetDiscoveryMode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetDiscoveryMode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetDiscoveryMode, sizeof(_tds__SetDiscoveryMode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetDiscoveryMode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetDiscoveryMode *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_DiscoveryMode1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DiscoveryMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DiscoveryMode(soap, "tds:DiscoveryMode", &(a->_tds__SetDiscoveryMode::DiscoveryMode), "tt:DiscoveryMode"))
				{	soap_flag_DiscoveryMode1--;
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
	{	a = (_tds__SetDiscoveryMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetDiscoveryMode, 0, sizeof(_tds__SetDiscoveryMode), 0, soap_copy__tds__SetDiscoveryMode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DiscoveryMode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SetDiscoveryMode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetDiscoveryMode);
	if (this->soap_out(soap, tag?tag:"tds:SetDiscoveryMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetDiscoveryMode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetDiscoveryMode(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetDiscoveryMode * SOAP_FMAC4 soap_get__tds__SetDiscoveryMode(struct soap *soap, _tds__SetDiscoveryMode *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetDiscoveryMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetDiscoveryMode * SOAP_FMAC2 soap_instantiate__tds__SetDiscoveryMode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetDiscoveryMode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetDiscoveryMode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetDiscoveryMode);
		if (size)
			*size = sizeof(_tds__SetDiscoveryMode);
		((_tds__SetDiscoveryMode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetDiscoveryMode, n);
		if (size)
			*size = n * sizeof(_tds__SetDiscoveryMode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetDiscoveryMode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetDiscoveryMode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetDiscoveryMode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetDiscoveryMode %p -> %p\n", q, p));
	*(_tds__SetDiscoveryMode*)p = *(_tds__SetDiscoveryMode*)q;
}

void _tds__GetDiscoveryModeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__DiscoveryMode(soap, &this->_tds__GetDiscoveryModeResponse::DiscoveryMode);
	/* transient soap skipped */
}

void _tds__GetDiscoveryModeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetDiscoveryModeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDiscoveryModeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDiscoveryModeResponse(struct soap *soap, const char *tag, int id, const _tds__GetDiscoveryModeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDiscoveryModeResponse), type))
		return soap->error;
	soap_element_result(soap, "tds:DiscoveryMode");
	if (soap_out_tt__DiscoveryMode(soap, "tds:DiscoveryMode", -1, &(a->_tds__GetDiscoveryModeResponse::DiscoveryMode), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDiscoveryModeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDiscoveryModeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDiscoveryModeResponse * SOAP_FMAC4 soap_in__tds__GetDiscoveryModeResponse(struct soap *soap, const char *tag, _tds__GetDiscoveryModeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDiscoveryModeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDiscoveryModeResponse, sizeof(_tds__GetDiscoveryModeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDiscoveryModeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDiscoveryModeResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_DiscoveryMode1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DiscoveryMode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__DiscoveryMode(soap, "tds:DiscoveryMode", &(a->_tds__GetDiscoveryModeResponse::DiscoveryMode), "tt:DiscoveryMode"))
				{	soap_flag_DiscoveryMode1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:DiscoveryMode");
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
	{	a = (_tds__GetDiscoveryModeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDiscoveryModeResponse, 0, sizeof(_tds__GetDiscoveryModeResponse), 0, soap_copy__tds__GetDiscoveryModeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DiscoveryMode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetDiscoveryModeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDiscoveryModeResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetDiscoveryModeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDiscoveryModeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDiscoveryModeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDiscoveryModeResponse * SOAP_FMAC4 soap_get__tds__GetDiscoveryModeResponse(struct soap *soap, _tds__GetDiscoveryModeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDiscoveryModeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDiscoveryModeResponse * SOAP_FMAC2 soap_instantiate__tds__GetDiscoveryModeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDiscoveryModeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDiscoveryModeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDiscoveryModeResponse);
		if (size)
			*size = sizeof(_tds__GetDiscoveryModeResponse);
		((_tds__GetDiscoveryModeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDiscoveryModeResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetDiscoveryModeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDiscoveryModeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDiscoveryModeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDiscoveryModeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDiscoveryModeResponse %p -> %p\n", q, p));
	*(_tds__GetDiscoveryModeResponse*)p = *(_tds__GetDiscoveryModeResponse*)q;
}

void _tds__GetDiscoveryMode::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetDiscoveryMode::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetDiscoveryMode::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDiscoveryMode(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDiscoveryMode(struct soap *soap, const char *tag, int id, const _tds__GetDiscoveryMode *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDiscoveryMode), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDiscoveryMode::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDiscoveryMode(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDiscoveryMode * SOAP_FMAC4 soap_in__tds__GetDiscoveryMode(struct soap *soap, const char *tag, _tds__GetDiscoveryMode *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDiscoveryMode *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDiscoveryMode, sizeof(_tds__GetDiscoveryMode), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDiscoveryMode)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDiscoveryMode *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetDiscoveryMode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDiscoveryMode, 0, sizeof(_tds__GetDiscoveryMode), 0, soap_copy__tds__GetDiscoveryMode);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetDiscoveryMode::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDiscoveryMode);
	if (this->soap_out(soap, tag?tag:"tds:GetDiscoveryMode", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDiscoveryMode::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDiscoveryMode(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDiscoveryMode * SOAP_FMAC4 soap_get__tds__GetDiscoveryMode(struct soap *soap, _tds__GetDiscoveryMode *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDiscoveryMode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDiscoveryMode * SOAP_FMAC2 soap_instantiate__tds__GetDiscoveryMode(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDiscoveryMode(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDiscoveryMode, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDiscoveryMode);
		if (size)
			*size = sizeof(_tds__GetDiscoveryMode);
		((_tds__GetDiscoveryMode*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDiscoveryMode, n);
		if (size)
			*size = n * sizeof(_tds__GetDiscoveryMode);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDiscoveryMode*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDiscoveryMode*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDiscoveryMode(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDiscoveryMode %p -> %p\n", q, p));
	*(_tds__GetDiscoveryMode*)p = *(_tds__GetDiscoveryMode*)q;
}

void _tds__RemoveScopesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__RemoveScopesResponse::__sizeScopeItem = 0;
	this->_tds__RemoveScopesResponse::ScopeItem = NULL;
	/* transient soap skipped */
}

void _tds__RemoveScopesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__RemoveScopesResponse::ScopeItem)
	{	int i;
		for (i = 0; i < this->_tds__RemoveScopesResponse::__sizeScopeItem; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->_tds__RemoveScopesResponse::ScopeItem + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__RemoveScopesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__RemoveScopesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__RemoveScopesResponse(struct soap *soap, const char *tag, int id, const _tds__RemoveScopesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__RemoveScopesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeScopeItem");
	if (a->_tds__RemoveScopesResponse::ScopeItem)
	{	int i;
		for (i = 0; i < a->_tds__RemoveScopesResponse::__sizeScopeItem; i++)
			if (soap_out_xsd__anyURI(soap, "tds:ScopeItem", -1, a->_tds__RemoveScopesResponse::ScopeItem + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__RemoveScopesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__RemoveScopesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__RemoveScopesResponse * SOAP_FMAC4 soap_in__tds__RemoveScopesResponse(struct soap *soap, const char *tag, _tds__RemoveScopesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__RemoveScopesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__RemoveScopesResponse, sizeof(_tds__RemoveScopesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__RemoveScopesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__RemoveScopesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_ScopeItem1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:ScopeItem", 1, NULL))
			{	if (a->_tds__RemoveScopesResponse::ScopeItem == NULL)
				{	if (soap_blist_ScopeItem1 == NULL)
						soap_blist_ScopeItem1 = soap_new_block(soap);
					a->_tds__RemoveScopesResponse::ScopeItem = (char **)soap_push_block(soap, soap_blist_ScopeItem1, sizeof(char *));
					if (a->_tds__RemoveScopesResponse::ScopeItem == NULL)
						return NULL;
					*a->_tds__RemoveScopesResponse::ScopeItem = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tds:ScopeItem", a->_tds__RemoveScopesResponse::ScopeItem, "xsd:anyURI"))
				{	a->_tds__RemoveScopesResponse::__sizeScopeItem++;
					a->_tds__RemoveScopesResponse::ScopeItem = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeScopeItem");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__RemoveScopesResponse::ScopeItem)
			soap_pop_block(soap, soap_blist_ScopeItem1);
		if (a->_tds__RemoveScopesResponse::__sizeScopeItem)
			a->_tds__RemoveScopesResponse::ScopeItem = (char **)soap_save_block(soap, soap_blist_ScopeItem1, NULL, 1);
		else
		{	a->_tds__RemoveScopesResponse::ScopeItem = NULL;
			if (soap_blist_ScopeItem1)
				soap_end_block(soap, soap_blist_ScopeItem1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__RemoveScopesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__RemoveScopesResponse, 0, sizeof(_tds__RemoveScopesResponse), 0, soap_copy__tds__RemoveScopesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__RemoveScopesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__RemoveScopesResponse);
	if (this->soap_out(soap, tag?tag:"tds:RemoveScopesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__RemoveScopesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__RemoveScopesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__RemoveScopesResponse * SOAP_FMAC4 soap_get__tds__RemoveScopesResponse(struct soap *soap, _tds__RemoveScopesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__RemoveScopesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__RemoveScopesResponse * SOAP_FMAC2 soap_instantiate__tds__RemoveScopesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__RemoveScopesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__RemoveScopesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__RemoveScopesResponse);
		if (size)
			*size = sizeof(_tds__RemoveScopesResponse);
		((_tds__RemoveScopesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__RemoveScopesResponse, n);
		if (size)
			*size = n * sizeof(_tds__RemoveScopesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__RemoveScopesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__RemoveScopesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__RemoveScopesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__RemoveScopesResponse %p -> %p\n", q, p));
	*(_tds__RemoveScopesResponse*)p = *(_tds__RemoveScopesResponse*)q;
}

void _tds__RemoveScopes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__RemoveScopes::__sizeScopeItem = 0;
	this->_tds__RemoveScopes::ScopeItem = NULL;
	/* transient soap skipped */
}

void _tds__RemoveScopes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__RemoveScopes::ScopeItem)
	{	int i;
		for (i = 0; i < this->_tds__RemoveScopes::__sizeScopeItem; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->_tds__RemoveScopes::ScopeItem + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__RemoveScopes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__RemoveScopes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__RemoveScopes(struct soap *soap, const char *tag, int id, const _tds__RemoveScopes *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__RemoveScopes), type))
		return soap->error;
	if (a->_tds__RemoveScopes::ScopeItem)
	{	int i;
		for (i = 0; i < a->_tds__RemoveScopes::__sizeScopeItem; i++)
			if (soap_out_xsd__anyURI(soap, "tds:ScopeItem", -1, a->_tds__RemoveScopes::ScopeItem + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__RemoveScopes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__RemoveScopes(soap, tag, this, type);
}

SOAP_FMAC3 _tds__RemoveScopes * SOAP_FMAC4 soap_in__tds__RemoveScopes(struct soap *soap, const char *tag, _tds__RemoveScopes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__RemoveScopes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__RemoveScopes, sizeof(_tds__RemoveScopes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__RemoveScopes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__RemoveScopes *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_ScopeItem1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:ScopeItem", 1, NULL))
			{	if (a->_tds__RemoveScopes::ScopeItem == NULL)
				{	if (soap_blist_ScopeItem1 == NULL)
						soap_blist_ScopeItem1 = soap_new_block(soap);
					a->_tds__RemoveScopes::ScopeItem = (char **)soap_push_block(soap, soap_blist_ScopeItem1, sizeof(char *));
					if (a->_tds__RemoveScopes::ScopeItem == NULL)
						return NULL;
					*a->_tds__RemoveScopes::ScopeItem = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tds:ScopeItem", a->_tds__RemoveScopes::ScopeItem, "xsd:anyURI"))
				{	a->_tds__RemoveScopes::__sizeScopeItem++;
					a->_tds__RemoveScopes::ScopeItem = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__RemoveScopes::ScopeItem)
			soap_pop_block(soap, soap_blist_ScopeItem1);
		if (a->_tds__RemoveScopes::__sizeScopeItem)
			a->_tds__RemoveScopes::ScopeItem = (char **)soap_save_block(soap, soap_blist_ScopeItem1, NULL, 1);
		else
		{	a->_tds__RemoveScopes::ScopeItem = NULL;
			if (soap_blist_ScopeItem1)
				soap_end_block(soap, soap_blist_ScopeItem1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__RemoveScopes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__RemoveScopes, 0, sizeof(_tds__RemoveScopes), 0, soap_copy__tds__RemoveScopes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__RemoveScopes::__sizeScopeItem < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__RemoveScopes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__RemoveScopes);
	if (this->soap_out(soap, tag?tag:"tds:RemoveScopes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__RemoveScopes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__RemoveScopes(soap, this, tag, type);
}

SOAP_FMAC3 _tds__RemoveScopes * SOAP_FMAC4 soap_get__tds__RemoveScopes(struct soap *soap, _tds__RemoveScopes *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__RemoveScopes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__RemoveScopes * SOAP_FMAC2 soap_instantiate__tds__RemoveScopes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__RemoveScopes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__RemoveScopes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__RemoveScopes);
		if (size)
			*size = sizeof(_tds__RemoveScopes);
		((_tds__RemoveScopes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__RemoveScopes, n);
		if (size)
			*size = n * sizeof(_tds__RemoveScopes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__RemoveScopes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__RemoveScopes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__RemoveScopes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__RemoveScopes %p -> %p\n", q, p));
	*(_tds__RemoveScopes*)p = *(_tds__RemoveScopes*)q;
}

void _tds__AddScopesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__AddScopesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__AddScopesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__AddScopesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__AddScopesResponse(struct soap *soap, const char *tag, int id, const _tds__AddScopesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__AddScopesResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__AddScopesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__AddScopesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__AddScopesResponse * SOAP_FMAC4 soap_in__tds__AddScopesResponse(struct soap *soap, const char *tag, _tds__AddScopesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__AddScopesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__AddScopesResponse, sizeof(_tds__AddScopesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__AddScopesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__AddScopesResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__AddScopesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__AddScopesResponse, 0, sizeof(_tds__AddScopesResponse), 0, soap_copy__tds__AddScopesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__AddScopesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__AddScopesResponse);
	if (this->soap_out(soap, tag?tag:"tds:AddScopesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__AddScopesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__AddScopesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__AddScopesResponse * SOAP_FMAC4 soap_get__tds__AddScopesResponse(struct soap *soap, _tds__AddScopesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__AddScopesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__AddScopesResponse * SOAP_FMAC2 soap_instantiate__tds__AddScopesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__AddScopesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__AddScopesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__AddScopesResponse);
		if (size)
			*size = sizeof(_tds__AddScopesResponse);
		((_tds__AddScopesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__AddScopesResponse, n);
		if (size)
			*size = n * sizeof(_tds__AddScopesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__AddScopesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__AddScopesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__AddScopesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__AddScopesResponse %p -> %p\n", q, p));
	*(_tds__AddScopesResponse*)p = *(_tds__AddScopesResponse*)q;
}

void _tds__AddScopes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__AddScopes::__sizeScopeItem = 0;
	this->_tds__AddScopes::ScopeItem = NULL;
	/* transient soap skipped */
}

void _tds__AddScopes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__AddScopes::ScopeItem)
	{	int i;
		for (i = 0; i < this->_tds__AddScopes::__sizeScopeItem; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->_tds__AddScopes::ScopeItem + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__AddScopes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__AddScopes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__AddScopes(struct soap *soap, const char *tag, int id, const _tds__AddScopes *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__AddScopes), type))
		return soap->error;
	if (a->_tds__AddScopes::ScopeItem)
	{	int i;
		for (i = 0; i < a->_tds__AddScopes::__sizeScopeItem; i++)
			if (soap_out_xsd__anyURI(soap, "tds:ScopeItem", -1, a->_tds__AddScopes::ScopeItem + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__AddScopes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__AddScopes(soap, tag, this, type);
}

SOAP_FMAC3 _tds__AddScopes * SOAP_FMAC4 soap_in__tds__AddScopes(struct soap *soap, const char *tag, _tds__AddScopes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__AddScopes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__AddScopes, sizeof(_tds__AddScopes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__AddScopes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__AddScopes *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_ScopeItem1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:ScopeItem", 1, NULL))
			{	if (a->_tds__AddScopes::ScopeItem == NULL)
				{	if (soap_blist_ScopeItem1 == NULL)
						soap_blist_ScopeItem1 = soap_new_block(soap);
					a->_tds__AddScopes::ScopeItem = (char **)soap_push_block(soap, soap_blist_ScopeItem1, sizeof(char *));
					if (a->_tds__AddScopes::ScopeItem == NULL)
						return NULL;
					*a->_tds__AddScopes::ScopeItem = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tds:ScopeItem", a->_tds__AddScopes::ScopeItem, "xsd:anyURI"))
				{	a->_tds__AddScopes::__sizeScopeItem++;
					a->_tds__AddScopes::ScopeItem = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__AddScopes::ScopeItem)
			soap_pop_block(soap, soap_blist_ScopeItem1);
		if (a->_tds__AddScopes::__sizeScopeItem)
			a->_tds__AddScopes::ScopeItem = (char **)soap_save_block(soap, soap_blist_ScopeItem1, NULL, 1);
		else
		{	a->_tds__AddScopes::ScopeItem = NULL;
			if (soap_blist_ScopeItem1)
				soap_end_block(soap, soap_blist_ScopeItem1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__AddScopes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__AddScopes, 0, sizeof(_tds__AddScopes), 0, soap_copy__tds__AddScopes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__AddScopes::__sizeScopeItem < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__AddScopes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__AddScopes);
	if (this->soap_out(soap, tag?tag:"tds:AddScopes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__AddScopes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__AddScopes(soap, this, tag, type);
}

SOAP_FMAC3 _tds__AddScopes * SOAP_FMAC4 soap_get__tds__AddScopes(struct soap *soap, _tds__AddScopes *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__AddScopes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__AddScopes * SOAP_FMAC2 soap_instantiate__tds__AddScopes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__AddScopes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__AddScopes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__AddScopes);
		if (size)
			*size = sizeof(_tds__AddScopes);
		((_tds__AddScopes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__AddScopes, n);
		if (size)
			*size = n * sizeof(_tds__AddScopes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__AddScopes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__AddScopes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__AddScopes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__AddScopes %p -> %p\n", q, p));
	*(_tds__AddScopes*)p = *(_tds__AddScopes*)q;
}

void _tds__SetScopesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetScopesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetScopesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetScopesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetScopesResponse(struct soap *soap, const char *tag, int id, const _tds__SetScopesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetScopesResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetScopesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetScopesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetScopesResponse * SOAP_FMAC4 soap_in__tds__SetScopesResponse(struct soap *soap, const char *tag, _tds__SetScopesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetScopesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetScopesResponse, sizeof(_tds__SetScopesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetScopesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetScopesResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetScopesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetScopesResponse, 0, sizeof(_tds__SetScopesResponse), 0, soap_copy__tds__SetScopesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetScopesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetScopesResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetScopesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetScopesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetScopesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetScopesResponse * SOAP_FMAC4 soap_get__tds__SetScopesResponse(struct soap *soap, _tds__SetScopesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetScopesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetScopesResponse * SOAP_FMAC2 soap_instantiate__tds__SetScopesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetScopesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetScopesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetScopesResponse);
		if (size)
			*size = sizeof(_tds__SetScopesResponse);
		((_tds__SetScopesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetScopesResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetScopesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetScopesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetScopesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetScopesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetScopesResponse %p -> %p\n", q, p));
	*(_tds__SetScopesResponse*)p = *(_tds__SetScopesResponse*)q;
}

void _tds__SetScopes::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__SetScopes::__sizeScopes = 0;
	this->_tds__SetScopes::Scopes = NULL;
	/* transient soap skipped */
}

void _tds__SetScopes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__SetScopes::Scopes)
	{	int i;
		for (i = 0; i < this->_tds__SetScopes::__sizeScopes; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->_tds__SetScopes::Scopes + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__SetScopes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetScopes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetScopes(struct soap *soap, const char *tag, int id, const _tds__SetScopes *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetScopes), type))
		return soap->error;
	if (a->_tds__SetScopes::Scopes)
	{	int i;
		for (i = 0; i < a->_tds__SetScopes::__sizeScopes; i++)
			if (soap_out_xsd__anyURI(soap, "tds:Scopes", -1, a->_tds__SetScopes::Scopes + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetScopes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetScopes(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetScopes * SOAP_FMAC4 soap_in__tds__SetScopes(struct soap *soap, const char *tag, _tds__SetScopes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetScopes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetScopes, sizeof(_tds__SetScopes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetScopes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetScopes *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Scopes1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:Scopes", 1, NULL))
			{	if (a->_tds__SetScopes::Scopes == NULL)
				{	if (soap_blist_Scopes1 == NULL)
						soap_blist_Scopes1 = soap_new_block(soap);
					a->_tds__SetScopes::Scopes = (char **)soap_push_block(soap, soap_blist_Scopes1, sizeof(char *));
					if (a->_tds__SetScopes::Scopes == NULL)
						return NULL;
					*a->_tds__SetScopes::Scopes = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tds:Scopes", a->_tds__SetScopes::Scopes, "xsd:anyURI"))
				{	a->_tds__SetScopes::__sizeScopes++;
					a->_tds__SetScopes::Scopes = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__SetScopes::Scopes)
			soap_pop_block(soap, soap_blist_Scopes1);
		if (a->_tds__SetScopes::__sizeScopes)
			a->_tds__SetScopes::Scopes = (char **)soap_save_block(soap, soap_blist_Scopes1, NULL, 1);
		else
		{	a->_tds__SetScopes::Scopes = NULL;
			if (soap_blist_Scopes1)
				soap_end_block(soap, soap_blist_Scopes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__SetScopes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetScopes, 0, sizeof(_tds__SetScopes), 0, soap_copy__tds__SetScopes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__SetScopes::__sizeScopes < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SetScopes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetScopes);
	if (this->soap_out(soap, tag?tag:"tds:SetScopes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetScopes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetScopes(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetScopes * SOAP_FMAC4 soap_get__tds__SetScopes(struct soap *soap, _tds__SetScopes *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetScopes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetScopes * SOAP_FMAC2 soap_instantiate__tds__SetScopes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetScopes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetScopes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetScopes);
		if (size)
			*size = sizeof(_tds__SetScopes);
		((_tds__SetScopes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetScopes, n);
		if (size)
			*size = n * sizeof(_tds__SetScopes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetScopes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetScopes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetScopes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetScopes %p -> %p\n", q, p));
	*(_tds__SetScopes*)p = *(_tds__SetScopes*)q;
}

void _tds__GetScopesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetScopesResponse::__sizeScopes = 0;
	this->_tds__GetScopesResponse::Scopes = NULL;
	/* transient soap skipped */
}

void _tds__GetScopesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__GetScopesResponse::Scopes)
	{	int i;
		for (i = 0; i < this->_tds__GetScopesResponse::__sizeScopes; i++)
		{
			soap_serialize_PointerTott__Scope(soap, this->_tds__GetScopesResponse::Scopes + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__GetScopesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetScopesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetScopesResponse(struct soap *soap, const char *tag, int id, const _tds__GetScopesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetScopesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeScopes");
	if (a->_tds__GetScopesResponse::Scopes)
	{	int i;
		for (i = 0; i < a->_tds__GetScopesResponse::__sizeScopes; i++)
			if (soap_out_PointerTott__Scope(soap, "tds:Scopes", -1, a->_tds__GetScopesResponse::Scopes + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetScopesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetScopesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetScopesResponse * SOAP_FMAC4 soap_in__tds__GetScopesResponse(struct soap *soap, const char *tag, _tds__GetScopesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetScopesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetScopesResponse, sizeof(_tds__GetScopesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetScopesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetScopesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Scopes1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:Scopes", 1, NULL))
			{	if (a->_tds__GetScopesResponse::Scopes == NULL)
				{	if (soap_blist_Scopes1 == NULL)
						soap_blist_Scopes1 = soap_new_block(soap);
					a->_tds__GetScopesResponse::Scopes = (tt__Scope **)soap_push_block(soap, soap_blist_Scopes1, sizeof(tt__Scope *));
					if (a->_tds__GetScopesResponse::Scopes == NULL)
						return NULL;
					*a->_tds__GetScopesResponse::Scopes = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Scope(soap, "tds:Scopes", a->_tds__GetScopesResponse::Scopes, "tt:Scope"))
				{	a->_tds__GetScopesResponse::__sizeScopes++;
					a->_tds__GetScopesResponse::Scopes = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeScopes");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetScopesResponse::Scopes)
			soap_pop_block(soap, soap_blist_Scopes1);
		if (a->_tds__GetScopesResponse::__sizeScopes)
			a->_tds__GetScopesResponse::Scopes = (tt__Scope **)soap_save_block(soap, soap_blist_Scopes1, NULL, 1);
		else
		{	a->_tds__GetScopesResponse::Scopes = NULL;
			if (soap_blist_Scopes1)
				soap_end_block(soap, soap_blist_Scopes1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetScopesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetScopesResponse, 0, sizeof(_tds__GetScopesResponse), 0, soap_copy__tds__GetScopesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__GetScopesResponse::__sizeScopes < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetScopesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetScopesResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetScopesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetScopesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetScopesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetScopesResponse * SOAP_FMAC4 soap_get__tds__GetScopesResponse(struct soap *soap, _tds__GetScopesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetScopesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetScopesResponse * SOAP_FMAC2 soap_instantiate__tds__GetScopesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetScopesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetScopesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetScopesResponse);
		if (size)
			*size = sizeof(_tds__GetScopesResponse);
		((_tds__GetScopesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetScopesResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetScopesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetScopesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetScopesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetScopesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetScopesResponse %p -> %p\n", q, p));
	*(_tds__GetScopesResponse*)p = *(_tds__GetScopesResponse*)q;
}

void _tds__GetScopes::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetScopes::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetScopes::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetScopes(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetScopes(struct soap *soap, const char *tag, int id, const _tds__GetScopes *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetScopes), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetScopes::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetScopes(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetScopes * SOAP_FMAC4 soap_in__tds__GetScopes(struct soap *soap, const char *tag, _tds__GetScopes *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetScopes *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetScopes, sizeof(_tds__GetScopes), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetScopes)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetScopes *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetScopes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetScopes, 0, sizeof(_tds__GetScopes), 0, soap_copy__tds__GetScopes);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetScopes::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetScopes);
	if (this->soap_out(soap, tag?tag:"tds:GetScopes", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetScopes::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetScopes(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetScopes * SOAP_FMAC4 soap_get__tds__GetScopes(struct soap *soap, _tds__GetScopes *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetScopes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetScopes * SOAP_FMAC2 soap_instantiate__tds__GetScopes(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetScopes(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetScopes, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetScopes);
		if (size)
			*size = sizeof(_tds__GetScopes);
		((_tds__GetScopes*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetScopes, n);
		if (size)
			*size = n * sizeof(_tds__GetScopes);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetScopes*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetScopes*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetScopes(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetScopes %p -> %p\n", q, p));
	*(_tds__GetScopes*)p = *(_tds__GetScopes*)q;
}

void _tds__GetSystemLogResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetSystemLogResponse::SystemLog = NULL;
	/* transient soap skipped */
}

void _tds__GetSystemLogResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SystemLog(soap, &this->_tds__GetSystemLogResponse::SystemLog);
	/* transient soap skipped */
#endif
}

int _tds__GetSystemLogResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemLogResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemLogResponse(struct soap *soap, const char *tag, int id, const _tds__GetSystemLogResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemLogResponse), type))
		return soap->error;
	if (a->SystemLog)
		soap_element_result(soap, "tds:SystemLog");
	if (a->_tds__GetSystemLogResponse::SystemLog)
	{	if (soap_out_PointerTott__SystemLog(soap, "tds:SystemLog", -1, &a->_tds__GetSystemLogResponse::SystemLog, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:SystemLog"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemLogResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemLogResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemLogResponse * SOAP_FMAC4 soap_in__tds__GetSystemLogResponse(struct soap *soap, const char *tag, _tds__GetSystemLogResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemLogResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemLogResponse, sizeof(_tds__GetSystemLogResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemLogResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemLogResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_SystemLog1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SystemLog1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemLog(soap, "tds:SystemLog", &(a->_tds__GetSystemLogResponse::SystemLog), "tt:SystemLog"))
				{	soap_flag_SystemLog1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:SystemLog");
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
	{	a = (_tds__GetSystemLogResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemLogResponse, 0, sizeof(_tds__GetSystemLogResponse), 0, soap_copy__tds__GetSystemLogResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SystemLog1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetSystemLogResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemLogResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemLogResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemLogResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemLogResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemLogResponse * SOAP_FMAC4 soap_get__tds__GetSystemLogResponse(struct soap *soap, _tds__GetSystemLogResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemLogResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemLogResponse * SOAP_FMAC2 soap_instantiate__tds__GetSystemLogResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemLogResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemLogResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemLogResponse);
		if (size)
			*size = sizeof(_tds__GetSystemLogResponse);
		((_tds__GetSystemLogResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemLogResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemLogResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemLogResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemLogResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemLogResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemLogResponse %p -> %p\n", q, p));
	*(_tds__GetSystemLogResponse*)p = *(_tds__GetSystemLogResponse*)q;
}

void _tds__GetSystemLog::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__SystemLogType(soap, &this->_tds__GetSystemLog::LogType);
	/* transient soap skipped */
}

void _tds__GetSystemLog::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetSystemLog::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemLog(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemLog(struct soap *soap, const char *tag, int id, const _tds__GetSystemLog *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemLog), type))
		return soap->error;
	if (soap_out_tt__SystemLogType(soap, "tds:LogType", -1, &(a->_tds__GetSystemLog::LogType), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemLog::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemLog(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemLog * SOAP_FMAC4 soap_in__tds__GetSystemLog(struct soap *soap, const char *tag, _tds__GetSystemLog *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemLog *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemLog, sizeof(_tds__GetSystemLog), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemLog)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemLog *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_LogType1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_LogType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SystemLogType(soap, "tds:LogType", &(a->_tds__GetSystemLog::LogType), "tt:SystemLogType"))
				{	soap_flag_LogType1--;
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
	{	a = (_tds__GetSystemLog *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemLog, 0, sizeof(_tds__GetSystemLog), 0, soap_copy__tds__GetSystemLog);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_LogType1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetSystemLog::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemLog);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemLog", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemLog::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemLog(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemLog * SOAP_FMAC4 soap_get__tds__GetSystemLog(struct soap *soap, _tds__GetSystemLog *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemLog(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemLog * SOAP_FMAC2 soap_instantiate__tds__GetSystemLog(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemLog(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemLog, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemLog);
		if (size)
			*size = sizeof(_tds__GetSystemLog);
		((_tds__GetSystemLog*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemLog, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemLog);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemLog*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemLog*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemLog(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemLog %p -> %p\n", q, p));
	*(_tds__GetSystemLog*)p = *(_tds__GetSystemLog*)q;
}

void _tds__GetSystemSupportInformationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetSystemSupportInformationResponse::SupportInformation = NULL;
	/* transient soap skipped */
}

void _tds__GetSystemSupportInformationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SupportInformation(soap, &this->_tds__GetSystemSupportInformationResponse::SupportInformation);
	/* transient soap skipped */
#endif
}

int _tds__GetSystemSupportInformationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemSupportInformationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemSupportInformationResponse(struct soap *soap, const char *tag, int id, const _tds__GetSystemSupportInformationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemSupportInformationResponse), type))
		return soap->error;
	if (a->SupportInformation)
		soap_element_result(soap, "tds:SupportInformation");
	if (a->_tds__GetSystemSupportInformationResponse::SupportInformation)
	{	if (soap_out_PointerTott__SupportInformation(soap, "tds:SupportInformation", -1, &a->_tds__GetSystemSupportInformationResponse::SupportInformation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:SupportInformation"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemSupportInformationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemSupportInformationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemSupportInformationResponse * SOAP_FMAC4 soap_in__tds__GetSystemSupportInformationResponse(struct soap *soap, const char *tag, _tds__GetSystemSupportInformationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemSupportInformationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemSupportInformationResponse, sizeof(_tds__GetSystemSupportInformationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemSupportInformationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemSupportInformationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_SupportInformation1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SupportInformation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportInformation(soap, "tds:SupportInformation", &(a->_tds__GetSystemSupportInformationResponse::SupportInformation), "tt:SupportInformation"))
				{	soap_flag_SupportInformation1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:SupportInformation");
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
	{	a = (_tds__GetSystemSupportInformationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemSupportInformationResponse, 0, sizeof(_tds__GetSystemSupportInformationResponse), 0, soap_copy__tds__GetSystemSupportInformationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportInformation1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetSystemSupportInformationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemSupportInformationResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemSupportInformationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemSupportInformationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemSupportInformationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemSupportInformationResponse * SOAP_FMAC4 soap_get__tds__GetSystemSupportInformationResponse(struct soap *soap, _tds__GetSystemSupportInformationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemSupportInformationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemSupportInformationResponse * SOAP_FMAC2 soap_instantiate__tds__GetSystemSupportInformationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemSupportInformationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemSupportInformationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemSupportInformationResponse);
		if (size)
			*size = sizeof(_tds__GetSystemSupportInformationResponse);
		((_tds__GetSystemSupportInformationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemSupportInformationResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemSupportInformationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemSupportInformationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemSupportInformationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemSupportInformationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemSupportInformationResponse %p -> %p\n", q, p));
	*(_tds__GetSystemSupportInformationResponse*)p = *(_tds__GetSystemSupportInformationResponse*)q;
}

void _tds__GetSystemSupportInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetSystemSupportInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetSystemSupportInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemSupportInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemSupportInformation(struct soap *soap, const char *tag, int id, const _tds__GetSystemSupportInformation *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemSupportInformation), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemSupportInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemSupportInformation(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemSupportInformation * SOAP_FMAC4 soap_in__tds__GetSystemSupportInformation(struct soap *soap, const char *tag, _tds__GetSystemSupportInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemSupportInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemSupportInformation, sizeof(_tds__GetSystemSupportInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemSupportInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemSupportInformation *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetSystemSupportInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemSupportInformation, 0, sizeof(_tds__GetSystemSupportInformation), 0, soap_copy__tds__GetSystemSupportInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetSystemSupportInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemSupportInformation);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemSupportInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemSupportInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemSupportInformation(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemSupportInformation * SOAP_FMAC4 soap_get__tds__GetSystemSupportInformation(struct soap *soap, _tds__GetSystemSupportInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemSupportInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemSupportInformation * SOAP_FMAC2 soap_instantiate__tds__GetSystemSupportInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemSupportInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemSupportInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemSupportInformation);
		if (size)
			*size = sizeof(_tds__GetSystemSupportInformation);
		((_tds__GetSystemSupportInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemSupportInformation, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemSupportInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemSupportInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemSupportInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemSupportInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemSupportInformation %p -> %p\n", q, p));
	*(_tds__GetSystemSupportInformation*)p = *(_tds__GetSystemSupportInformation*)q;
}

void _tds__GetSystemBackupResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetSystemBackupResponse::__sizeBackupFiles = 0;
	this->_tds__GetSystemBackupResponse::BackupFiles = NULL;
	/* transient soap skipped */
}

void _tds__GetSystemBackupResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__GetSystemBackupResponse::BackupFiles)
	{	int i;
		for (i = 0; i < this->_tds__GetSystemBackupResponse::__sizeBackupFiles; i++)
		{
			soap_serialize_PointerTott__BackupFile(soap, this->_tds__GetSystemBackupResponse::BackupFiles + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__GetSystemBackupResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemBackupResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemBackupResponse(struct soap *soap, const char *tag, int id, const _tds__GetSystemBackupResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemBackupResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeBackupFiles");
	if (a->_tds__GetSystemBackupResponse::BackupFiles)
	{	int i;
		for (i = 0; i < a->_tds__GetSystemBackupResponse::__sizeBackupFiles; i++)
			if (soap_out_PointerTott__BackupFile(soap, "tds:BackupFiles", -1, a->_tds__GetSystemBackupResponse::BackupFiles + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemBackupResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemBackupResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemBackupResponse * SOAP_FMAC4 soap_in__tds__GetSystemBackupResponse(struct soap *soap, const char *tag, _tds__GetSystemBackupResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemBackupResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemBackupResponse, sizeof(_tds__GetSystemBackupResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemBackupResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemBackupResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_BackupFiles1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:BackupFiles", 1, NULL))
			{	if (a->_tds__GetSystemBackupResponse::BackupFiles == NULL)
				{	if (soap_blist_BackupFiles1 == NULL)
						soap_blist_BackupFiles1 = soap_new_block(soap);
					a->_tds__GetSystemBackupResponse::BackupFiles = (tt__BackupFile **)soap_push_block(soap, soap_blist_BackupFiles1, sizeof(tt__BackupFile *));
					if (a->_tds__GetSystemBackupResponse::BackupFiles == NULL)
						return NULL;
					*a->_tds__GetSystemBackupResponse::BackupFiles = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__BackupFile(soap, "tds:BackupFiles", a->_tds__GetSystemBackupResponse::BackupFiles, "tt:BackupFile"))
				{	a->_tds__GetSystemBackupResponse::__sizeBackupFiles++;
					a->_tds__GetSystemBackupResponse::BackupFiles = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeBackupFiles");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetSystemBackupResponse::BackupFiles)
			soap_pop_block(soap, soap_blist_BackupFiles1);
		if (a->_tds__GetSystemBackupResponse::__sizeBackupFiles)
			a->_tds__GetSystemBackupResponse::BackupFiles = (tt__BackupFile **)soap_save_block(soap, soap_blist_BackupFiles1, NULL, 1);
		else
		{	a->_tds__GetSystemBackupResponse::BackupFiles = NULL;
			if (soap_blist_BackupFiles1)
				soap_end_block(soap, soap_blist_BackupFiles1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetSystemBackupResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemBackupResponse, 0, sizeof(_tds__GetSystemBackupResponse), 0, soap_copy__tds__GetSystemBackupResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__GetSystemBackupResponse::__sizeBackupFiles < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetSystemBackupResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemBackupResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemBackupResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemBackupResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemBackupResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemBackupResponse * SOAP_FMAC4 soap_get__tds__GetSystemBackupResponse(struct soap *soap, _tds__GetSystemBackupResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemBackupResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemBackupResponse * SOAP_FMAC2 soap_instantiate__tds__GetSystemBackupResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemBackupResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemBackupResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemBackupResponse);
		if (size)
			*size = sizeof(_tds__GetSystemBackupResponse);
		((_tds__GetSystemBackupResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemBackupResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemBackupResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemBackupResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemBackupResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemBackupResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemBackupResponse %p -> %p\n", q, p));
	*(_tds__GetSystemBackupResponse*)p = *(_tds__GetSystemBackupResponse*)q;
}

void _tds__GetSystemBackup::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetSystemBackup::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetSystemBackup::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemBackup(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemBackup(struct soap *soap, const char *tag, int id, const _tds__GetSystemBackup *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemBackup), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemBackup::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemBackup(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemBackup * SOAP_FMAC4 soap_in__tds__GetSystemBackup(struct soap *soap, const char *tag, _tds__GetSystemBackup *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemBackup *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemBackup, sizeof(_tds__GetSystemBackup), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemBackup)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemBackup *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetSystemBackup *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemBackup, 0, sizeof(_tds__GetSystemBackup), 0, soap_copy__tds__GetSystemBackup);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetSystemBackup::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemBackup);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemBackup", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemBackup::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemBackup(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemBackup * SOAP_FMAC4 soap_get__tds__GetSystemBackup(struct soap *soap, _tds__GetSystemBackup *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemBackup(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemBackup * SOAP_FMAC2 soap_instantiate__tds__GetSystemBackup(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemBackup(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemBackup, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemBackup);
		if (size)
			*size = sizeof(_tds__GetSystemBackup);
		((_tds__GetSystemBackup*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemBackup, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemBackup);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemBackup*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemBackup*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemBackup(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemBackup %p -> %p\n", q, p));
	*(_tds__GetSystemBackup*)p = *(_tds__GetSystemBackup*)q;
}

void _tds__RestoreSystemResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__RestoreSystemResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__RestoreSystemResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__RestoreSystemResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__RestoreSystemResponse(struct soap *soap, const char *tag, int id, const _tds__RestoreSystemResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__RestoreSystemResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__RestoreSystemResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__RestoreSystemResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__RestoreSystemResponse * SOAP_FMAC4 soap_in__tds__RestoreSystemResponse(struct soap *soap, const char *tag, _tds__RestoreSystemResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__RestoreSystemResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__RestoreSystemResponse, sizeof(_tds__RestoreSystemResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__RestoreSystemResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__RestoreSystemResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__RestoreSystemResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__RestoreSystemResponse, 0, sizeof(_tds__RestoreSystemResponse), 0, soap_copy__tds__RestoreSystemResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__RestoreSystemResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__RestoreSystemResponse);
	if (this->soap_out(soap, tag?tag:"tds:RestoreSystemResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__RestoreSystemResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__RestoreSystemResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__RestoreSystemResponse * SOAP_FMAC4 soap_get__tds__RestoreSystemResponse(struct soap *soap, _tds__RestoreSystemResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__RestoreSystemResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__RestoreSystemResponse * SOAP_FMAC2 soap_instantiate__tds__RestoreSystemResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__RestoreSystemResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__RestoreSystemResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__RestoreSystemResponse);
		if (size)
			*size = sizeof(_tds__RestoreSystemResponse);
		((_tds__RestoreSystemResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__RestoreSystemResponse, n);
		if (size)
			*size = n * sizeof(_tds__RestoreSystemResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__RestoreSystemResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__RestoreSystemResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__RestoreSystemResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__RestoreSystemResponse %p -> %p\n", q, p));
	*(_tds__RestoreSystemResponse*)p = *(_tds__RestoreSystemResponse*)q;
}

void _tds__RestoreSystem::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__RestoreSystem::__sizeBackupFiles = 0;
	this->_tds__RestoreSystem::BackupFiles = NULL;
	/* transient soap skipped */
}

void _tds__RestoreSystem::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__RestoreSystem::BackupFiles)
	{	int i;
		for (i = 0; i < this->_tds__RestoreSystem::__sizeBackupFiles; i++)
		{
			soap_serialize_PointerTott__BackupFile(soap, this->_tds__RestoreSystem::BackupFiles + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__RestoreSystem::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__RestoreSystem(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__RestoreSystem(struct soap *soap, const char *tag, int id, const _tds__RestoreSystem *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__RestoreSystem), type))
		return soap->error;
	if (a->_tds__RestoreSystem::BackupFiles)
	{	int i;
		for (i = 0; i < a->_tds__RestoreSystem::__sizeBackupFiles; i++)
			if (soap_out_PointerTott__BackupFile(soap, "tds:BackupFiles", -1, a->_tds__RestoreSystem::BackupFiles + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__RestoreSystem::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__RestoreSystem(soap, tag, this, type);
}

SOAP_FMAC3 _tds__RestoreSystem * SOAP_FMAC4 soap_in__tds__RestoreSystem(struct soap *soap, const char *tag, _tds__RestoreSystem *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__RestoreSystem *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__RestoreSystem, sizeof(_tds__RestoreSystem), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__RestoreSystem)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__RestoreSystem *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_BackupFiles1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:BackupFiles", 1, NULL))
			{	if (a->_tds__RestoreSystem::BackupFiles == NULL)
				{	if (soap_blist_BackupFiles1 == NULL)
						soap_blist_BackupFiles1 = soap_new_block(soap);
					a->_tds__RestoreSystem::BackupFiles = (tt__BackupFile **)soap_push_block(soap, soap_blist_BackupFiles1, sizeof(tt__BackupFile *));
					if (a->_tds__RestoreSystem::BackupFiles == NULL)
						return NULL;
					*a->_tds__RestoreSystem::BackupFiles = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__BackupFile(soap, "tds:BackupFiles", a->_tds__RestoreSystem::BackupFiles, "tt:BackupFile"))
				{	a->_tds__RestoreSystem::__sizeBackupFiles++;
					a->_tds__RestoreSystem::BackupFiles = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__RestoreSystem::BackupFiles)
			soap_pop_block(soap, soap_blist_BackupFiles1);
		if (a->_tds__RestoreSystem::__sizeBackupFiles)
			a->_tds__RestoreSystem::BackupFiles = (tt__BackupFile **)soap_save_block(soap, soap_blist_BackupFiles1, NULL, 1);
		else
		{	a->_tds__RestoreSystem::BackupFiles = NULL;
			if (soap_blist_BackupFiles1)
				soap_end_block(soap, soap_blist_BackupFiles1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__RestoreSystem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__RestoreSystem, 0, sizeof(_tds__RestoreSystem), 0, soap_copy__tds__RestoreSystem);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__RestoreSystem::__sizeBackupFiles < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__RestoreSystem::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__RestoreSystem);
	if (this->soap_out(soap, tag?tag:"tds:RestoreSystem", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__RestoreSystem::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__RestoreSystem(soap, this, tag, type);
}

SOAP_FMAC3 _tds__RestoreSystem * SOAP_FMAC4 soap_get__tds__RestoreSystem(struct soap *soap, _tds__RestoreSystem *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__RestoreSystem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__RestoreSystem * SOAP_FMAC2 soap_instantiate__tds__RestoreSystem(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__RestoreSystem(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__RestoreSystem, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__RestoreSystem);
		if (size)
			*size = sizeof(_tds__RestoreSystem);
		((_tds__RestoreSystem*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__RestoreSystem, n);
		if (size)
			*size = n * sizeof(_tds__RestoreSystem);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__RestoreSystem*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__RestoreSystem*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__RestoreSystem(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__RestoreSystem %p -> %p\n", q, p));
	*(_tds__RestoreSystem*)p = *(_tds__RestoreSystem*)q;
}

void _tds__SystemRebootResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_string(soap, &this->_tds__SystemRebootResponse::Message);
	/* transient soap skipped */
}

void _tds__SystemRebootResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->_tds__SystemRebootResponse::Message);
	/* transient soap skipped */
#endif
}

int _tds__SystemRebootResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SystemRebootResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SystemRebootResponse(struct soap *soap, const char *tag, int id, const _tds__SystemRebootResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SystemRebootResponse), type))
		return soap->error;
	if (a->Message)
		soap_element_result(soap, "tds:Message");
	if (a->_tds__SystemRebootResponse::Message)
	{	if (soap_out_string(soap, "tds:Message", -1, &a->_tds__SystemRebootResponse::Message, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Message"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SystemRebootResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SystemRebootResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SystemRebootResponse * SOAP_FMAC4 soap_in__tds__SystemRebootResponse(struct soap *soap, const char *tag, _tds__SystemRebootResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SystemRebootResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SystemRebootResponse, sizeof(_tds__SystemRebootResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SystemRebootResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SystemRebootResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Message1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Message1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:Message", &(a->_tds__SystemRebootResponse::Message), "xsd:string"))
				{	soap_flag_Message1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:Message");
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
	{	a = (_tds__SystemRebootResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SystemRebootResponse, 0, sizeof(_tds__SystemRebootResponse), 0, soap_copy__tds__SystemRebootResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Message1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SystemRebootResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SystemRebootResponse);
	if (this->soap_out(soap, tag?tag:"tds:SystemRebootResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SystemRebootResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SystemRebootResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SystemRebootResponse * SOAP_FMAC4 soap_get__tds__SystemRebootResponse(struct soap *soap, _tds__SystemRebootResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SystemRebootResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SystemRebootResponse * SOAP_FMAC2 soap_instantiate__tds__SystemRebootResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SystemRebootResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SystemRebootResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SystemRebootResponse);
		if (size)
			*size = sizeof(_tds__SystemRebootResponse);
		((_tds__SystemRebootResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SystemRebootResponse, n);
		if (size)
			*size = n * sizeof(_tds__SystemRebootResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SystemRebootResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SystemRebootResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SystemRebootResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SystemRebootResponse %p -> %p\n", q, p));
	*(_tds__SystemRebootResponse*)p = *(_tds__SystemRebootResponse*)q;
}

void _tds__SystemReboot::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SystemReboot::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SystemReboot::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SystemReboot(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SystemReboot(struct soap *soap, const char *tag, int id, const _tds__SystemReboot *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SystemReboot), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SystemReboot::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SystemReboot(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SystemReboot * SOAP_FMAC4 soap_in__tds__SystemReboot(struct soap *soap, const char *tag, _tds__SystemReboot *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SystemReboot *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SystemReboot, sizeof(_tds__SystemReboot), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SystemReboot)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SystemReboot *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SystemReboot *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SystemReboot, 0, sizeof(_tds__SystemReboot), 0, soap_copy__tds__SystemReboot);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SystemReboot::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SystemReboot);
	if (this->soap_out(soap, tag?tag:"tds:SystemReboot", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SystemReboot::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SystemReboot(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SystemReboot * SOAP_FMAC4 soap_get__tds__SystemReboot(struct soap *soap, _tds__SystemReboot *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SystemReboot(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SystemReboot * SOAP_FMAC2 soap_instantiate__tds__SystemReboot(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SystemReboot(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SystemReboot, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SystemReboot);
		if (size)
			*size = sizeof(_tds__SystemReboot);
		((_tds__SystemReboot*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SystemReboot, n);
		if (size)
			*size = n * sizeof(_tds__SystemReboot);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SystemReboot*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SystemReboot*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SystemReboot(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SystemReboot %p -> %p\n", q, p));
	*(_tds__SystemReboot*)p = *(_tds__SystemReboot*)q;
}

void _tds__UpgradeSystemFirmwareResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_string(soap, &this->_tds__UpgradeSystemFirmwareResponse::Message);
	/* transient soap skipped */
}

void _tds__UpgradeSystemFirmwareResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->_tds__UpgradeSystemFirmwareResponse::Message);
	/* transient soap skipped */
#endif
}

int _tds__UpgradeSystemFirmwareResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__UpgradeSystemFirmwareResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__UpgradeSystemFirmwareResponse(struct soap *soap, const char *tag, int id, const _tds__UpgradeSystemFirmwareResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__UpgradeSystemFirmwareResponse), type))
		return soap->error;
	if (a->Message)
		soap_element_result(soap, "tds:Message");
	if (soap_out_string(soap, "tds:Message", -1, &(a->_tds__UpgradeSystemFirmwareResponse::Message), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__UpgradeSystemFirmwareResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__UpgradeSystemFirmwareResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__UpgradeSystemFirmwareResponse * SOAP_FMAC4 soap_in__tds__UpgradeSystemFirmwareResponse(struct soap *soap, const char *tag, _tds__UpgradeSystemFirmwareResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__UpgradeSystemFirmwareResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__UpgradeSystemFirmwareResponse, sizeof(_tds__UpgradeSystemFirmwareResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__UpgradeSystemFirmwareResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__UpgradeSystemFirmwareResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Message1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Message1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:Message", &(a->_tds__UpgradeSystemFirmwareResponse::Message), "xsd:string"))
				{	soap_flag_Message1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:Message");
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
	{	a = (_tds__UpgradeSystemFirmwareResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__UpgradeSystemFirmwareResponse, 0, sizeof(_tds__UpgradeSystemFirmwareResponse), 0, soap_copy__tds__UpgradeSystemFirmwareResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__UpgradeSystemFirmwareResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__UpgradeSystemFirmwareResponse);
	if (this->soap_out(soap, tag?tag:"tds:UpgradeSystemFirmwareResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__UpgradeSystemFirmwareResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__UpgradeSystemFirmwareResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__UpgradeSystemFirmwareResponse * SOAP_FMAC4 soap_get__tds__UpgradeSystemFirmwareResponse(struct soap *soap, _tds__UpgradeSystemFirmwareResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__UpgradeSystemFirmwareResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__UpgradeSystemFirmwareResponse * SOAP_FMAC2 soap_instantiate__tds__UpgradeSystemFirmwareResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__UpgradeSystemFirmwareResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__UpgradeSystemFirmwareResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__UpgradeSystemFirmwareResponse);
		if (size)
			*size = sizeof(_tds__UpgradeSystemFirmwareResponse);
		((_tds__UpgradeSystemFirmwareResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__UpgradeSystemFirmwareResponse, n);
		if (size)
			*size = n * sizeof(_tds__UpgradeSystemFirmwareResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__UpgradeSystemFirmwareResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__UpgradeSystemFirmwareResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__UpgradeSystemFirmwareResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__UpgradeSystemFirmwareResponse %p -> %p\n", q, p));
	*(_tds__UpgradeSystemFirmwareResponse*)p = *(_tds__UpgradeSystemFirmwareResponse*)q;
}

void _tds__UpgradeSystemFirmware::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__UpgradeSystemFirmware::Firmware = NULL;
	/* transient soap skipped */
}

void _tds__UpgradeSystemFirmware::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AttachmentData(soap, &this->_tds__UpgradeSystemFirmware::Firmware);
	/* transient soap skipped */
#endif
}

int _tds__UpgradeSystemFirmware::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__UpgradeSystemFirmware(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__UpgradeSystemFirmware(struct soap *soap, const char *tag, int id, const _tds__UpgradeSystemFirmware *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__UpgradeSystemFirmware), type))
		return soap->error;
	if (a->_tds__UpgradeSystemFirmware::Firmware)
	{	if (soap_out_PointerTott__AttachmentData(soap, "tds:Firmware", -1, &a->_tds__UpgradeSystemFirmware::Firmware, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Firmware"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__UpgradeSystemFirmware::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__UpgradeSystemFirmware(soap, tag, this, type);
}

SOAP_FMAC3 _tds__UpgradeSystemFirmware * SOAP_FMAC4 soap_in__tds__UpgradeSystemFirmware(struct soap *soap, const char *tag, _tds__UpgradeSystemFirmware *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__UpgradeSystemFirmware *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__UpgradeSystemFirmware, sizeof(_tds__UpgradeSystemFirmware), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__UpgradeSystemFirmware)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__UpgradeSystemFirmware *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Firmware1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Firmware1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AttachmentData(soap, "tds:Firmware", &(a->_tds__UpgradeSystemFirmware::Firmware), "tt:AttachmentData"))
				{	soap_flag_Firmware1--;
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
	{	a = (_tds__UpgradeSystemFirmware *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__UpgradeSystemFirmware, 0, sizeof(_tds__UpgradeSystemFirmware), 0, soap_copy__tds__UpgradeSystemFirmware);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Firmware1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__UpgradeSystemFirmware::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__UpgradeSystemFirmware);
	if (this->soap_out(soap, tag?tag:"tds:UpgradeSystemFirmware", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__UpgradeSystemFirmware::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__UpgradeSystemFirmware(soap, this, tag, type);
}

SOAP_FMAC3 _tds__UpgradeSystemFirmware * SOAP_FMAC4 soap_get__tds__UpgradeSystemFirmware(struct soap *soap, _tds__UpgradeSystemFirmware *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__UpgradeSystemFirmware(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__UpgradeSystemFirmware * SOAP_FMAC2 soap_instantiate__tds__UpgradeSystemFirmware(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__UpgradeSystemFirmware(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__UpgradeSystemFirmware, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__UpgradeSystemFirmware);
		if (size)
			*size = sizeof(_tds__UpgradeSystemFirmware);
		((_tds__UpgradeSystemFirmware*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__UpgradeSystemFirmware, n);
		if (size)
			*size = n * sizeof(_tds__UpgradeSystemFirmware);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__UpgradeSystemFirmware*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__UpgradeSystemFirmware*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__UpgradeSystemFirmware(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__UpgradeSystemFirmware %p -> %p\n", q, p));
	*(_tds__UpgradeSystemFirmware*)p = *(_tds__UpgradeSystemFirmware*)q;
}

void _tds__SetSystemFactoryDefaultResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetSystemFactoryDefaultResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetSystemFactoryDefaultResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetSystemFactoryDefaultResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetSystemFactoryDefaultResponse(struct soap *soap, const char *tag, int id, const _tds__SetSystemFactoryDefaultResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetSystemFactoryDefaultResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetSystemFactoryDefaultResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetSystemFactoryDefaultResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetSystemFactoryDefaultResponse * SOAP_FMAC4 soap_in__tds__SetSystemFactoryDefaultResponse(struct soap *soap, const char *tag, _tds__SetSystemFactoryDefaultResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetSystemFactoryDefaultResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetSystemFactoryDefaultResponse, sizeof(_tds__SetSystemFactoryDefaultResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetSystemFactoryDefaultResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetSystemFactoryDefaultResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetSystemFactoryDefaultResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetSystemFactoryDefaultResponse, 0, sizeof(_tds__SetSystemFactoryDefaultResponse), 0, soap_copy__tds__SetSystemFactoryDefaultResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetSystemFactoryDefaultResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetSystemFactoryDefaultResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetSystemFactoryDefaultResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetSystemFactoryDefaultResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetSystemFactoryDefaultResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetSystemFactoryDefaultResponse * SOAP_FMAC4 soap_get__tds__SetSystemFactoryDefaultResponse(struct soap *soap, _tds__SetSystemFactoryDefaultResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetSystemFactoryDefaultResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetSystemFactoryDefaultResponse * SOAP_FMAC2 soap_instantiate__tds__SetSystemFactoryDefaultResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetSystemFactoryDefaultResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetSystemFactoryDefaultResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetSystemFactoryDefaultResponse);
		if (size)
			*size = sizeof(_tds__SetSystemFactoryDefaultResponse);
		((_tds__SetSystemFactoryDefaultResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetSystemFactoryDefaultResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetSystemFactoryDefaultResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetSystemFactoryDefaultResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetSystemFactoryDefaultResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetSystemFactoryDefaultResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetSystemFactoryDefaultResponse %p -> %p\n", q, p));
	*(_tds__SetSystemFactoryDefaultResponse*)p = *(_tds__SetSystemFactoryDefaultResponse*)q;
}

void _tds__SetSystemFactoryDefault::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__FactoryDefaultType(soap, &this->_tds__SetSystemFactoryDefault::FactoryDefault);
	/* transient soap skipped */
}

void _tds__SetSystemFactoryDefault::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetSystemFactoryDefault::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetSystemFactoryDefault(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetSystemFactoryDefault(struct soap *soap, const char *tag, int id, const _tds__SetSystemFactoryDefault *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetSystemFactoryDefault), type))
		return soap->error;
	if (soap_out_tt__FactoryDefaultType(soap, "tds:FactoryDefault", -1, &(a->_tds__SetSystemFactoryDefault::FactoryDefault), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetSystemFactoryDefault::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetSystemFactoryDefault(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetSystemFactoryDefault * SOAP_FMAC4 soap_in__tds__SetSystemFactoryDefault(struct soap *soap, const char *tag, _tds__SetSystemFactoryDefault *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetSystemFactoryDefault *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetSystemFactoryDefault, sizeof(_tds__SetSystemFactoryDefault), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetSystemFactoryDefault)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetSystemFactoryDefault *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_FactoryDefault1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_FactoryDefault1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__FactoryDefaultType(soap, "tds:FactoryDefault", &(a->_tds__SetSystemFactoryDefault::FactoryDefault), "tt:FactoryDefaultType"))
				{	soap_flag_FactoryDefault1--;
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
	{	a = (_tds__SetSystemFactoryDefault *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetSystemFactoryDefault, 0, sizeof(_tds__SetSystemFactoryDefault), 0, soap_copy__tds__SetSystemFactoryDefault);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_FactoryDefault1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SetSystemFactoryDefault::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetSystemFactoryDefault);
	if (this->soap_out(soap, tag?tag:"tds:SetSystemFactoryDefault", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetSystemFactoryDefault::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetSystemFactoryDefault(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetSystemFactoryDefault * SOAP_FMAC4 soap_get__tds__SetSystemFactoryDefault(struct soap *soap, _tds__SetSystemFactoryDefault *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetSystemFactoryDefault(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetSystemFactoryDefault * SOAP_FMAC2 soap_instantiate__tds__SetSystemFactoryDefault(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetSystemFactoryDefault(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetSystemFactoryDefault, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetSystemFactoryDefault);
		if (size)
			*size = sizeof(_tds__SetSystemFactoryDefault);
		((_tds__SetSystemFactoryDefault*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetSystemFactoryDefault, n);
		if (size)
			*size = n * sizeof(_tds__SetSystemFactoryDefault);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetSystemFactoryDefault*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetSystemFactoryDefault*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetSystemFactoryDefault(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetSystemFactoryDefault %p -> %p\n", q, p));
	*(_tds__SetSystemFactoryDefault*)p = *(_tds__SetSystemFactoryDefault*)q;
}

void _tds__GetSystemDateAndTimeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetSystemDateAndTimeResponse::SystemDateAndTime = NULL;
	/* transient soap skipped */
}

void _tds__GetSystemDateAndTimeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SystemDateTime(soap, &this->_tds__GetSystemDateAndTimeResponse::SystemDateAndTime);
	/* transient soap skipped */
#endif
}

int _tds__GetSystemDateAndTimeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemDateAndTimeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemDateAndTimeResponse(struct soap *soap, const char *tag, int id, const _tds__GetSystemDateAndTimeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemDateAndTimeResponse), type))
		return soap->error;
	if (a->SystemDateAndTime)
		soap_element_result(soap, "tds:SystemDateAndTime");
	if (a->_tds__GetSystemDateAndTimeResponse::SystemDateAndTime)
	{	if (soap_out_PointerTott__SystemDateTime(soap, "tds:SystemDateAndTime", -1, &a->_tds__GetSystemDateAndTimeResponse::SystemDateAndTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:SystemDateAndTime"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemDateAndTimeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemDateAndTimeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemDateAndTimeResponse * SOAP_FMAC4 soap_in__tds__GetSystemDateAndTimeResponse(struct soap *soap, const char *tag, _tds__GetSystemDateAndTimeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemDateAndTimeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemDateAndTimeResponse, sizeof(_tds__GetSystemDateAndTimeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemDateAndTimeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemDateAndTimeResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_SystemDateAndTime1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SystemDateAndTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SystemDateTime(soap, "tds:SystemDateAndTime", &(a->_tds__GetSystemDateAndTimeResponse::SystemDateAndTime), "tt:SystemDateTime"))
				{	soap_flag_SystemDateAndTime1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:SystemDateAndTime");
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
	{	a = (_tds__GetSystemDateAndTimeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemDateAndTimeResponse, 0, sizeof(_tds__GetSystemDateAndTimeResponse), 0, soap_copy__tds__GetSystemDateAndTimeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SystemDateAndTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetSystemDateAndTimeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemDateAndTimeResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemDateAndTimeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemDateAndTimeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemDateAndTimeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemDateAndTimeResponse * SOAP_FMAC4 soap_get__tds__GetSystemDateAndTimeResponse(struct soap *soap, _tds__GetSystemDateAndTimeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemDateAndTimeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemDateAndTimeResponse * SOAP_FMAC2 soap_instantiate__tds__GetSystemDateAndTimeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemDateAndTimeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemDateAndTimeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemDateAndTimeResponse);
		if (size)
			*size = sizeof(_tds__GetSystemDateAndTimeResponse);
		((_tds__GetSystemDateAndTimeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemDateAndTimeResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemDateAndTimeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemDateAndTimeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemDateAndTimeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemDateAndTimeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemDateAndTimeResponse %p -> %p\n", q, p));
	*(_tds__GetSystemDateAndTimeResponse*)p = *(_tds__GetSystemDateAndTimeResponse*)q;
}

void _tds__GetSystemDateAndTime::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetSystemDateAndTime::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetSystemDateAndTime::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetSystemDateAndTime(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetSystemDateAndTime(struct soap *soap, const char *tag, int id, const _tds__GetSystemDateAndTime *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetSystemDateAndTime), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetSystemDateAndTime::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetSystemDateAndTime(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetSystemDateAndTime * SOAP_FMAC4 soap_in__tds__GetSystemDateAndTime(struct soap *soap, const char *tag, _tds__GetSystemDateAndTime *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetSystemDateAndTime *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetSystemDateAndTime, sizeof(_tds__GetSystemDateAndTime), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetSystemDateAndTime)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetSystemDateAndTime *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetSystemDateAndTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetSystemDateAndTime, 0, sizeof(_tds__GetSystemDateAndTime), 0, soap_copy__tds__GetSystemDateAndTime);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetSystemDateAndTime::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetSystemDateAndTime);
	if (this->soap_out(soap, tag?tag:"tds:GetSystemDateAndTime", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetSystemDateAndTime::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetSystemDateAndTime(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetSystemDateAndTime * SOAP_FMAC4 soap_get__tds__GetSystemDateAndTime(struct soap *soap, _tds__GetSystemDateAndTime *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetSystemDateAndTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetSystemDateAndTime * SOAP_FMAC2 soap_instantiate__tds__GetSystemDateAndTime(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetSystemDateAndTime(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetSystemDateAndTime, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetSystemDateAndTime);
		if (size)
			*size = sizeof(_tds__GetSystemDateAndTime);
		((_tds__GetSystemDateAndTime*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetSystemDateAndTime, n);
		if (size)
			*size = n * sizeof(_tds__GetSystemDateAndTime);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetSystemDateAndTime*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetSystemDateAndTime*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetSystemDateAndTime(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetSystemDateAndTime %p -> %p\n", q, p));
	*(_tds__GetSystemDateAndTime*)p = *(_tds__GetSystemDateAndTime*)q;
}

void _tds__SetSystemDateAndTimeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__SetSystemDateAndTimeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__SetSystemDateAndTimeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetSystemDateAndTimeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetSystemDateAndTimeResponse(struct soap *soap, const char *tag, int id, const _tds__SetSystemDateAndTimeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetSystemDateAndTimeResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetSystemDateAndTimeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetSystemDateAndTimeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetSystemDateAndTimeResponse * SOAP_FMAC4 soap_in__tds__SetSystemDateAndTimeResponse(struct soap *soap, const char *tag, _tds__SetSystemDateAndTimeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetSystemDateAndTimeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetSystemDateAndTimeResponse, sizeof(_tds__SetSystemDateAndTimeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetSystemDateAndTimeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetSystemDateAndTimeResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__SetSystemDateAndTimeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetSystemDateAndTimeResponse, 0, sizeof(_tds__SetSystemDateAndTimeResponse), 0, soap_copy__tds__SetSystemDateAndTimeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__SetSystemDateAndTimeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetSystemDateAndTimeResponse);
	if (this->soap_out(soap, tag?tag:"tds:SetSystemDateAndTimeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetSystemDateAndTimeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetSystemDateAndTimeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetSystemDateAndTimeResponse * SOAP_FMAC4 soap_get__tds__SetSystemDateAndTimeResponse(struct soap *soap, _tds__SetSystemDateAndTimeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetSystemDateAndTimeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetSystemDateAndTimeResponse * SOAP_FMAC2 soap_instantiate__tds__SetSystemDateAndTimeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetSystemDateAndTimeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetSystemDateAndTimeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetSystemDateAndTimeResponse);
		if (size)
			*size = sizeof(_tds__SetSystemDateAndTimeResponse);
		((_tds__SetSystemDateAndTimeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetSystemDateAndTimeResponse, n);
		if (size)
			*size = n * sizeof(_tds__SetSystemDateAndTimeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetSystemDateAndTimeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetSystemDateAndTimeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetSystemDateAndTimeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetSystemDateAndTimeResponse %p -> %p\n", q, p));
	*(_tds__SetSystemDateAndTimeResponse*)p = *(_tds__SetSystemDateAndTimeResponse*)q;
}

void _tds__SetSystemDateAndTime::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__SetDateTimeType(soap, &this->_tds__SetSystemDateAndTime::DateTimeType);
	soap_default_bool(soap, &this->_tds__SetSystemDateAndTime::DaylightSavings);
	this->_tds__SetSystemDateAndTime::TimeZone = NULL;
	this->_tds__SetSystemDateAndTime::UTCDateTime = NULL;
	/* transient soap skipped */
}

void _tds__SetSystemDateAndTime::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_tds__SetSystemDateAndTime::DaylightSavings, SOAP_TYPE_bool);
	soap_serialize_PointerTott__TimeZone(soap, &this->_tds__SetSystemDateAndTime::TimeZone);
	soap_serialize_PointerTott__DateTime(soap, &this->_tds__SetSystemDateAndTime::UTCDateTime);
	/* transient soap skipped */
#endif
}

int _tds__SetSystemDateAndTime::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__SetSystemDateAndTime(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__SetSystemDateAndTime(struct soap *soap, const char *tag, int id, const _tds__SetSystemDateAndTime *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__SetSystemDateAndTime), type))
		return soap->error;
	if (soap_out_tt__SetDateTimeType(soap, "tds:DateTimeType", -1, &(a->_tds__SetSystemDateAndTime::DateTimeType), ""))
		return soap->error;
	if (soap_out_bool(soap, "tds:DaylightSavings", -1, &(a->_tds__SetSystemDateAndTime::DaylightSavings), ""))
		return soap->error;
	if (soap_out_PointerTott__TimeZone(soap, "tds:TimeZone", -1, &(a->_tds__SetSystemDateAndTime::TimeZone), ""))
		return soap->error;
	if (soap_out_PointerTott__DateTime(soap, "tds:UTCDateTime", -1, &(a->_tds__SetSystemDateAndTime::UTCDateTime), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__SetSystemDateAndTime::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__SetSystemDateAndTime(soap, tag, this, type);
}

SOAP_FMAC3 _tds__SetSystemDateAndTime * SOAP_FMAC4 soap_in__tds__SetSystemDateAndTime(struct soap *soap, const char *tag, _tds__SetSystemDateAndTime *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__SetSystemDateAndTime *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__SetSystemDateAndTime, sizeof(_tds__SetSystemDateAndTime), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__SetSystemDateAndTime)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__SetSystemDateAndTime *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_DateTimeType1 = 1;
	size_t soap_flag_DaylightSavings1 = 1;
	size_t soap_flag_TimeZone1 = 1;
	size_t soap_flag_UTCDateTime1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DateTimeType1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SetDateTimeType(soap, "tds:DateTimeType", &(a->_tds__SetSystemDateAndTime::DateTimeType), "tt:SetDateTimeType"))
				{	soap_flag_DateTimeType1--;
					continue;
				}
			if (soap_flag_DaylightSavings1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tds:DaylightSavings", &(a->_tds__SetSystemDateAndTime::DaylightSavings), "xsd:boolean"))
				{	soap_flag_DaylightSavings1--;
					continue;
				}
			if (soap_flag_TimeZone1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TimeZone(soap, "tds:TimeZone", &(a->_tds__SetSystemDateAndTime::TimeZone), "tt:TimeZone"))
				{	soap_flag_TimeZone1--;
					continue;
				}
			if (soap_flag_UTCDateTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DateTime(soap, "tds:UTCDateTime", &(a->_tds__SetSystemDateAndTime::UTCDateTime), "tt:DateTime"))
				{	soap_flag_UTCDateTime1--;
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
	{	a = (_tds__SetSystemDateAndTime *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__SetSystemDateAndTime, 0, sizeof(_tds__SetSystemDateAndTime), 0, soap_copy__tds__SetSystemDateAndTime);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DateTimeType1 > 0 || soap_flag_DaylightSavings1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__SetSystemDateAndTime::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__SetSystemDateAndTime);
	if (this->soap_out(soap, tag?tag:"tds:SetSystemDateAndTime", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__SetSystemDateAndTime::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__SetSystemDateAndTime(soap, this, tag, type);
}

SOAP_FMAC3 _tds__SetSystemDateAndTime * SOAP_FMAC4 soap_get__tds__SetSystemDateAndTime(struct soap *soap, _tds__SetSystemDateAndTime *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__SetSystemDateAndTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__SetSystemDateAndTime * SOAP_FMAC2 soap_instantiate__tds__SetSystemDateAndTime(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__SetSystemDateAndTime(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__SetSystemDateAndTime, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__SetSystemDateAndTime);
		if (size)
			*size = sizeof(_tds__SetSystemDateAndTime);
		((_tds__SetSystemDateAndTime*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__SetSystemDateAndTime, n);
		if (size)
			*size = n * sizeof(_tds__SetSystemDateAndTime);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__SetSystemDateAndTime*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__SetSystemDateAndTime*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__SetSystemDateAndTime(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__SetSystemDateAndTime %p -> %p\n", q, p));
	*(_tds__SetSystemDateAndTime*)p = *(_tds__SetSystemDateAndTime*)q;
}

void _tds__GetDeviceInformationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_string(soap, &this->_tds__GetDeviceInformationResponse::Manufacturer);
	soap_default_string(soap, &this->_tds__GetDeviceInformationResponse::Model);
	soap_default_string(soap, &this->_tds__GetDeviceInformationResponse::FirmwareVersion);
	soap_default_string(soap, &this->_tds__GetDeviceInformationResponse::SerialNumber);
	soap_default_string(soap, &this->_tds__GetDeviceInformationResponse::HardwareId);
	/* transient soap skipped */
}

void _tds__GetDeviceInformationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->_tds__GetDeviceInformationResponse::Manufacturer);
	soap_serialize_string(soap, &this->_tds__GetDeviceInformationResponse::Model);
	soap_serialize_string(soap, &this->_tds__GetDeviceInformationResponse::FirmwareVersion);
	soap_serialize_string(soap, &this->_tds__GetDeviceInformationResponse::SerialNumber);
	soap_serialize_string(soap, &this->_tds__GetDeviceInformationResponse::HardwareId);
	/* transient soap skipped */
#endif
}

int _tds__GetDeviceInformationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDeviceInformationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDeviceInformationResponse(struct soap *soap, const char *tag, int id, const _tds__GetDeviceInformationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDeviceInformationResponse), type))
		return soap->error;
	if (a->Manufacturer)
		soap_element_result(soap, "tds:Manufacturer");
	if (a->_tds__GetDeviceInformationResponse::Manufacturer)
	{	if (soap_out_string(soap, "tds:Manufacturer", -1, &a->_tds__GetDeviceInformationResponse::Manufacturer, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Manufacturer"))
		return soap->error;
	if (a->_tds__GetDeviceInformationResponse::Model)
	{	if (soap_out_string(soap, "tds:Model", -1, &a->_tds__GetDeviceInformationResponse::Model, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Model"))
		return soap->error;
	if (a->_tds__GetDeviceInformationResponse::FirmwareVersion)
	{	if (soap_out_string(soap, "tds:FirmwareVersion", -1, &a->_tds__GetDeviceInformationResponse::FirmwareVersion, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:FirmwareVersion"))
		return soap->error;
	if (a->_tds__GetDeviceInformationResponse::SerialNumber)
	{	if (soap_out_string(soap, "tds:SerialNumber", -1, &a->_tds__GetDeviceInformationResponse::SerialNumber, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:SerialNumber"))
		return soap->error;
	if (a->_tds__GetDeviceInformationResponse::HardwareId)
	{	if (soap_out_string(soap, "tds:HardwareId", -1, &a->_tds__GetDeviceInformationResponse::HardwareId, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:HardwareId"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDeviceInformationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDeviceInformationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDeviceInformationResponse * SOAP_FMAC4 soap_in__tds__GetDeviceInformationResponse(struct soap *soap, const char *tag, _tds__GetDeviceInformationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDeviceInformationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDeviceInformationResponse, sizeof(_tds__GetDeviceInformationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDeviceInformationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDeviceInformationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Manufacturer1 = 1;
	size_t soap_flag_Model1 = 1;
	size_t soap_flag_FirmwareVersion1 = 1;
	size_t soap_flag_SerialNumber1 = 1;
	size_t soap_flag_HardwareId1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Manufacturer1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:Manufacturer", &(a->_tds__GetDeviceInformationResponse::Manufacturer), "xsd:string"))
				{	soap_flag_Manufacturer1--;
					continue;
				}
			if (soap_flag_Model1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:Model", &(a->_tds__GetDeviceInformationResponse::Model), "xsd:string"))
				{	soap_flag_Model1--;
					continue;
				}
			if (soap_flag_FirmwareVersion1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:FirmwareVersion", &(a->_tds__GetDeviceInformationResponse::FirmwareVersion), "xsd:string"))
				{	soap_flag_FirmwareVersion1--;
					continue;
				}
			if (soap_flag_SerialNumber1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:SerialNumber", &(a->_tds__GetDeviceInformationResponse::SerialNumber), "xsd:string"))
				{	soap_flag_SerialNumber1--;
					continue;
				}
			if (soap_flag_HardwareId1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tds:HardwareId", &(a->_tds__GetDeviceInformationResponse::HardwareId), "xsd:string"))
				{	soap_flag_HardwareId1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:Manufacturer");
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
	{	a = (_tds__GetDeviceInformationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDeviceInformationResponse, 0, sizeof(_tds__GetDeviceInformationResponse), 0, soap_copy__tds__GetDeviceInformationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Manufacturer1 > 0 || soap_flag_Model1 > 0 || soap_flag_FirmwareVersion1 > 0 || soap_flag_SerialNumber1 > 0 || soap_flag_HardwareId1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetDeviceInformationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDeviceInformationResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetDeviceInformationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDeviceInformationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDeviceInformationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDeviceInformationResponse * SOAP_FMAC4 soap_get__tds__GetDeviceInformationResponse(struct soap *soap, _tds__GetDeviceInformationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDeviceInformationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDeviceInformationResponse * SOAP_FMAC2 soap_instantiate__tds__GetDeviceInformationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDeviceInformationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDeviceInformationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDeviceInformationResponse);
		if (size)
			*size = sizeof(_tds__GetDeviceInformationResponse);
		((_tds__GetDeviceInformationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDeviceInformationResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetDeviceInformationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDeviceInformationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDeviceInformationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDeviceInformationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDeviceInformationResponse %p -> %p\n", q, p));
	*(_tds__GetDeviceInformationResponse*)p = *(_tds__GetDeviceInformationResponse*)q;
}

void _tds__GetDeviceInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetDeviceInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetDeviceInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetDeviceInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetDeviceInformation(struct soap *soap, const char *tag, int id, const _tds__GetDeviceInformation *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetDeviceInformation), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetDeviceInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetDeviceInformation(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetDeviceInformation * SOAP_FMAC4 soap_in__tds__GetDeviceInformation(struct soap *soap, const char *tag, _tds__GetDeviceInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetDeviceInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetDeviceInformation, sizeof(_tds__GetDeviceInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetDeviceInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetDeviceInformation *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetDeviceInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetDeviceInformation, 0, sizeof(_tds__GetDeviceInformation), 0, soap_copy__tds__GetDeviceInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetDeviceInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetDeviceInformation);
	if (this->soap_out(soap, tag?tag:"tds:GetDeviceInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetDeviceInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetDeviceInformation(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetDeviceInformation * SOAP_FMAC4 soap_get__tds__GetDeviceInformation(struct soap *soap, _tds__GetDeviceInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetDeviceInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetDeviceInformation * SOAP_FMAC2 soap_instantiate__tds__GetDeviceInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetDeviceInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetDeviceInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetDeviceInformation);
		if (size)
			*size = sizeof(_tds__GetDeviceInformation);
		((_tds__GetDeviceInformation*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetDeviceInformation, n);
		if (size)
			*size = n * sizeof(_tds__GetDeviceInformation);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetDeviceInformation*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetDeviceInformation*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetDeviceInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetDeviceInformation %p -> %p\n", q, p));
	*(_tds__GetDeviceInformation*)p = *(_tds__GetDeviceInformation*)q;
}

void _tds__GetServiceCapabilitiesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetServiceCapabilitiesResponse::Capabilities = NULL;
	/* transient soap skipped */
}

void _tds__GetServiceCapabilitiesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotds__DeviceServiceCapabilities(soap, &this->_tds__GetServiceCapabilitiesResponse::Capabilities);
	/* transient soap skipped */
#endif
}

int _tds__GetServiceCapabilitiesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetServiceCapabilitiesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const _tds__GetServiceCapabilitiesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tds:Capabilities");
	if (a->_tds__GetServiceCapabilitiesResponse::Capabilities)
	{	if (soap_out_PointerTotds__DeviceServiceCapabilities(soap, "tds:Capabilities", -1, &a->_tds__GetServiceCapabilitiesResponse::Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetServiceCapabilitiesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetServiceCapabilitiesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__tds__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, _tds__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetServiceCapabilitiesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetServiceCapabilitiesResponse, sizeof(_tds__GetServiceCapabilitiesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetServiceCapabilitiesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetServiceCapabilitiesResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Capabilities1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotds__DeviceServiceCapabilities(soap, "tds:Capabilities", &(a->_tds__GetServiceCapabilitiesResponse::Capabilities), "tds:DeviceServiceCapabilities"))
				{	soap_flag_Capabilities1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "tds:Capabilities");
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
	{	a = (_tds__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetServiceCapabilitiesResponse, 0, sizeof(_tds__GetServiceCapabilitiesResponse), 0, soap_copy__tds__GetServiceCapabilitiesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetServiceCapabilitiesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetServiceCapabilitiesResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetServiceCapabilitiesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetServiceCapabilitiesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetServiceCapabilitiesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__tds__GetServiceCapabilitiesResponse(struct soap *soap, _tds__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetServiceCapabilitiesResponse * SOAP_FMAC2 soap_instantiate__tds__GetServiceCapabilitiesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetServiceCapabilitiesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetServiceCapabilitiesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetServiceCapabilitiesResponse);
		if (size)
			*size = sizeof(_tds__GetServiceCapabilitiesResponse);
		((_tds__GetServiceCapabilitiesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetServiceCapabilitiesResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetServiceCapabilitiesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetServiceCapabilitiesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetServiceCapabilitiesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetServiceCapabilitiesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetServiceCapabilitiesResponse %p -> %p\n", q, p));
	*(_tds__GetServiceCapabilitiesResponse*)p = *(_tds__GetServiceCapabilitiesResponse*)q;
}

void _tds__GetServiceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _tds__GetServiceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _tds__GetServiceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetServiceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const _tds__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetServiceCapabilities), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetServiceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetServiceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetServiceCapabilities * SOAP_FMAC4 soap_in__tds__GetServiceCapabilities(struct soap *soap, const char *tag, _tds__GetServiceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetServiceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetServiceCapabilities, sizeof(_tds__GetServiceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetServiceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetServiceCapabilities *)a->soap_in(soap, tag, type);
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
	{	a = (_tds__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetServiceCapabilities, 0, sizeof(_tds__GetServiceCapabilities), 0, soap_copy__tds__GetServiceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tds__GetServiceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetServiceCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:GetServiceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetServiceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetServiceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetServiceCapabilities * SOAP_FMAC4 soap_get__tds__GetServiceCapabilities(struct soap *soap, _tds__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetServiceCapabilities * SOAP_FMAC2 soap_instantiate__tds__GetServiceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetServiceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetServiceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetServiceCapabilities);
		if (size)
			*size = sizeof(_tds__GetServiceCapabilities);
		((_tds__GetServiceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetServiceCapabilities, n);
		if (size)
			*size = n * sizeof(_tds__GetServiceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetServiceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetServiceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetServiceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetServiceCapabilities %p -> %p\n", q, p));
	*(_tds__GetServiceCapabilities*)p = *(_tds__GetServiceCapabilities*)q;
}

void _tds__GetServicesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tds__GetServicesResponse::__sizeService = 0;
	this->_tds__GetServicesResponse::Service = NULL;
	/* transient soap skipped */
}

void _tds__GetServicesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_tds__GetServicesResponse::Service)
	{	int i;
		for (i = 0; i < this->_tds__GetServicesResponse::__sizeService; i++)
		{
			soap_serialize_PointerTotds__Service(soap, this->_tds__GetServicesResponse::Service + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _tds__GetServicesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetServicesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetServicesResponse(struct soap *soap, const char *tag, int id, const _tds__GetServicesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetServicesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeService");
	if (a->_tds__GetServicesResponse::Service)
	{	int i;
		for (i = 0; i < a->_tds__GetServicesResponse::__sizeService; i++)
			if (soap_out_PointerTotds__Service(soap, "tds:Service", -1, a->_tds__GetServicesResponse::Service + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetServicesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetServicesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetServicesResponse * SOAP_FMAC4 soap_in__tds__GetServicesResponse(struct soap *soap, const char *tag, _tds__GetServicesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetServicesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetServicesResponse, sizeof(_tds__GetServicesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetServicesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetServicesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Service1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:Service", 1, NULL))
			{	if (a->_tds__GetServicesResponse::Service == NULL)
				{	if (soap_blist_Service1 == NULL)
						soap_blist_Service1 = soap_new_block(soap);
					a->_tds__GetServicesResponse::Service = (tds__Service **)soap_push_block(soap, soap_blist_Service1, sizeof(tds__Service *));
					if (a->_tds__GetServicesResponse::Service == NULL)
						return NULL;
					*a->_tds__GetServicesResponse::Service = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTotds__Service(soap, "tds:Service", a->_tds__GetServicesResponse::Service, "tds:Service"))
				{	a->_tds__GetServicesResponse::__sizeService++;
					a->_tds__GetServicesResponse::Service = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeService");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_tds__GetServicesResponse::Service)
			soap_pop_block(soap, soap_blist_Service1);
		if (a->_tds__GetServicesResponse::__sizeService)
			a->_tds__GetServicesResponse::Service = (tds__Service **)soap_save_block(soap, soap_blist_Service1, NULL, 1);
		else
		{	a->_tds__GetServicesResponse::Service = NULL;
			if (soap_blist_Service1)
				soap_end_block(soap, soap_blist_Service1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_tds__GetServicesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetServicesResponse, 0, sizeof(_tds__GetServicesResponse), 0, soap_copy__tds__GetServicesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_tds__GetServicesResponse::__sizeService < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetServicesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetServicesResponse);
	if (this->soap_out(soap, tag?tag:"tds:GetServicesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetServicesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetServicesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetServicesResponse * SOAP_FMAC4 soap_get__tds__GetServicesResponse(struct soap *soap, _tds__GetServicesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetServicesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetServicesResponse * SOAP_FMAC2 soap_instantiate__tds__GetServicesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetServicesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetServicesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetServicesResponse);
		if (size)
			*size = sizeof(_tds__GetServicesResponse);
		((_tds__GetServicesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetServicesResponse, n);
		if (size)
			*size = n * sizeof(_tds__GetServicesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetServicesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetServicesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetServicesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetServicesResponse %p -> %p\n", q, p));
	*(_tds__GetServicesResponse*)p = *(_tds__GetServicesResponse*)q;
}

void _tds__GetServices::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_bool(soap, &this->_tds__GetServices::IncludeCapability);
	/* transient soap skipped */
}

void _tds__GetServices::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_tds__GetServices::IncludeCapability, SOAP_TYPE_bool);
	/* transient soap skipped */
#endif
}

int _tds__GetServices::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tds__GetServices(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetServices(struct soap *soap, const char *tag, int id, const _tds__GetServices *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetServices), type))
		return soap->error;
	if (soap_out_bool(soap, "tds:IncludeCapability", -1, &(a->_tds__GetServices::IncludeCapability), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tds__GetServices::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tds__GetServices(soap, tag, this, type);
}

SOAP_FMAC3 _tds__GetServices * SOAP_FMAC4 soap_in__tds__GetServices(struct soap *soap, const char *tag, _tds__GetServices *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tds__GetServices *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetServices, sizeof(_tds__GetServices), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tds__GetServices)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tds__GetServices *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_IncludeCapability1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_IncludeCapability1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_bool(soap, "tds:IncludeCapability", &(a->_tds__GetServices::IncludeCapability), "xsd:boolean"))
				{	soap_flag_IncludeCapability1--;
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
	{	a = (_tds__GetServices *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetServices, 0, sizeof(_tds__GetServices), 0, soap_copy__tds__GetServices);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_IncludeCapability1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _tds__GetServices::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tds__GetServices);
	if (this->soap_out(soap, tag?tag:"tds:GetServices", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tds__GetServices::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tds__GetServices(soap, this, tag, type);
}

SOAP_FMAC3 _tds__GetServices * SOAP_FMAC4 soap_get__tds__GetServices(struct soap *soap, _tds__GetServices *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetServices(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tds__GetServices * SOAP_FMAC2 soap_instantiate__tds__GetServices(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tds__GetServices(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tds__GetServices, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tds__GetServices);
		if (size)
			*size = sizeof(_tds__GetServices);
		((_tds__GetServices*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tds__GetServices, n);
		if (size)
			*size = n * sizeof(_tds__GetServices);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tds__GetServices*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tds__GetServices*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tds__GetServices(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tds__GetServices %p -> %p\n", q, p));
	*(_tds__GetServices*)p = *(_tds__GetServices*)q;
}

void tds__MiscCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__StringAttrList(soap, &this->tds__MiscCapabilities::AuxiliaryCommands);
	this->tds__MiscCapabilities::__anyAttribute = NULL;
}

void tds__MiscCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__MiscCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__MiscCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__MiscCapabilities(struct soap *soap, const char *tag, int id, const tds__MiscCapabilities *a, const char *type)
{
	if (((tds__MiscCapabilities*)a)->AuxiliaryCommands)
		soap_set_attr(soap, "AuxiliaryCommands", ((tds__MiscCapabilities*)a)->AuxiliaryCommands, 1);
	if (((tds__MiscCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tds__MiscCapabilities*)a)->__anyAttribute, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tds:MiscCapabilities");
}

void *tds__MiscCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__MiscCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tds__MiscCapabilities * SOAP_FMAC4 soap_in_tds__MiscCapabilities(struct soap *soap, const char *tag, tds__MiscCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tds__MiscCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__MiscCapabilities, sizeof(tds__MiscCapabilities), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__MiscCapabilities)
			return (tds__MiscCapabilities *)a->soap_in(soap, tag, type);
	}
	if (soap_s2string(soap, soap_attr_value(soap, "AuxiliaryCommands", 0), &((tds__MiscCapabilities*)a)->AuxiliaryCommands, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tds__MiscCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tds__MiscCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__MiscCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:MiscCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__MiscCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__MiscCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tds__MiscCapabilities * SOAP_FMAC4 soap_get_tds__MiscCapabilities(struct soap *soap, tds__MiscCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__MiscCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__MiscCapabilities * SOAP_FMAC2 soap_instantiate_tds__MiscCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__MiscCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__MiscCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__MiscCapabilities);
		if (size)
			*size = sizeof(tds__MiscCapabilities);
		((tds__MiscCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__MiscCapabilities, n);
		if (size)
			*size = n * sizeof(tds__MiscCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__MiscCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__MiscCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__MiscCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__MiscCapabilities %p -> %p\n", q, p));
	*(tds__MiscCapabilities*)p = *(tds__MiscCapabilities*)q;
}

void tds__SystemCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tds__SystemCapabilities::DiscoveryResolve = NULL;
	this->tds__SystemCapabilities::DiscoveryBye = NULL;
	this->tds__SystemCapabilities::RemoteDiscovery = NULL;
	this->tds__SystemCapabilities::SystemBackup = NULL;
	this->tds__SystemCapabilities::SystemLogging = NULL;
	this->tds__SystemCapabilities::FirmwareUpgrade = NULL;
	this->tds__SystemCapabilities::HttpFirmwareUpgrade = NULL;
	this->tds__SystemCapabilities::HttpSystemBackup = NULL;
	this->tds__SystemCapabilities::HttpSystemLogging = NULL;
	this->tds__SystemCapabilities::HttpSupportInformation = NULL;
	this->tds__SystemCapabilities::__anyAttribute = NULL;
}

void tds__SystemCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__SystemCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__SystemCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__SystemCapabilities(struct soap *soap, const char *tag, int id, const tds__SystemCapabilities *a, const char *type)
{
	if (((tds__SystemCapabilities*)a)->DiscoveryResolve)
		soap_set_attr(soap, "DiscoveryResolve", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->DiscoveryResolve), 1);
	if (((tds__SystemCapabilities*)a)->DiscoveryBye)
		soap_set_attr(soap, "DiscoveryBye", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->DiscoveryBye), 1);
	if (((tds__SystemCapabilities*)a)->RemoteDiscovery)
		soap_set_attr(soap, "RemoteDiscovery", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->RemoteDiscovery), 1);
	if (((tds__SystemCapabilities*)a)->SystemBackup)
		soap_set_attr(soap, "SystemBackup", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->SystemBackup), 1);
	if (((tds__SystemCapabilities*)a)->SystemLogging)
		soap_set_attr(soap, "SystemLogging", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->SystemLogging), 1);
	if (((tds__SystemCapabilities*)a)->FirmwareUpgrade)
		soap_set_attr(soap, "FirmwareUpgrade", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->FirmwareUpgrade), 1);
	if (((tds__SystemCapabilities*)a)->HttpFirmwareUpgrade)
		soap_set_attr(soap, "HttpFirmwareUpgrade", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->HttpFirmwareUpgrade), 1);
	if (((tds__SystemCapabilities*)a)->HttpSystemBackup)
		soap_set_attr(soap, "HttpSystemBackup", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->HttpSystemBackup), 1);
	if (((tds__SystemCapabilities*)a)->HttpSystemLogging)
		soap_set_attr(soap, "HttpSystemLogging", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->HttpSystemLogging), 1);
	if (((tds__SystemCapabilities*)a)->HttpSupportInformation)
		soap_set_attr(soap, "HttpSupportInformation", soap_bool2s(soap, *((tds__SystemCapabilities*)a)->HttpSupportInformation), 1);
	if (((tds__SystemCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tds__SystemCapabilities*)a)->__anyAttribute, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tds:SystemCapabilities");
}

void *tds__SystemCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__SystemCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tds__SystemCapabilities * SOAP_FMAC4 soap_in_tds__SystemCapabilities(struct soap *soap, const char *tag, tds__SystemCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tds__SystemCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__SystemCapabilities, sizeof(tds__SystemCapabilities), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__SystemCapabilities)
			return (tds__SystemCapabilities *)a->soap_in(soap, tag, type);
	}
	{	const char *t = soap_attr_value(soap, "DiscoveryResolve", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->DiscoveryResolve = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->DiscoveryResolve))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "DiscoveryBye", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->DiscoveryBye = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->DiscoveryBye))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "RemoteDiscovery", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->RemoteDiscovery = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->RemoteDiscovery))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "SystemBackup", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->SystemBackup = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->SystemBackup))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "SystemLogging", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->SystemLogging = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->SystemLogging))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "FirmwareUpgrade", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->FirmwareUpgrade = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->FirmwareUpgrade))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HttpFirmwareUpgrade", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->HttpFirmwareUpgrade = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->HttpFirmwareUpgrade))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HttpSystemBackup", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->HttpSystemBackup = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->HttpSystemBackup))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HttpSystemLogging", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->HttpSystemLogging = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->HttpSystemLogging))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HttpSupportInformation", 0);
		if (t)
		{
			if (!(((tds__SystemCapabilities*)a)->HttpSupportInformation = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SystemCapabilities*)a)->HttpSupportInformation))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tds__SystemCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tds__SystemCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__SystemCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:SystemCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__SystemCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__SystemCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tds__SystemCapabilities * SOAP_FMAC4 soap_get_tds__SystemCapabilities(struct soap *soap, tds__SystemCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__SystemCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__SystemCapabilities * SOAP_FMAC2 soap_instantiate_tds__SystemCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__SystemCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__SystemCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__SystemCapabilities);
		if (size)
			*size = sizeof(tds__SystemCapabilities);
		((tds__SystemCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__SystemCapabilities, n);
		if (size)
			*size = n * sizeof(tds__SystemCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__SystemCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__SystemCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__SystemCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__SystemCapabilities %p -> %p\n", q, p));
	*(tds__SystemCapabilities*)p = *(tds__SystemCapabilities*)q;
}

void tds__SecurityCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tds__SecurityCapabilities::TLS1_x002e0 = NULL;
	this->tds__SecurityCapabilities::TLS1_x002e1 = NULL;
	this->tds__SecurityCapabilities::TLS1_x002e2 = NULL;
	this->tds__SecurityCapabilities::OnboardKeyGeneration = NULL;
	this->tds__SecurityCapabilities::AccessPolicyConfig = NULL;
	this->tds__SecurityCapabilities::DefaultAccessPolicy = NULL;
	this->tds__SecurityCapabilities::Dot1X = NULL;
	this->tds__SecurityCapabilities::RemoteUserHandling = NULL;
	this->tds__SecurityCapabilities::X_x002e509Token = NULL;
	this->tds__SecurityCapabilities::SAMLToken = NULL;
	this->tds__SecurityCapabilities::KerberosToken = NULL;
	this->tds__SecurityCapabilities::UsernameToken = NULL;
	this->tds__SecurityCapabilities::HttpDigest = NULL;
	this->tds__SecurityCapabilities::RELToken = NULL;
	soap_default_tds__EAPMethodTypes(soap, &this->tds__SecurityCapabilities::SupportedEAPMethods);
	this->tds__SecurityCapabilities::__anyAttribute = NULL;
}

void tds__SecurityCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__SecurityCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__SecurityCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__SecurityCapabilities(struct soap *soap, const char *tag, int id, const tds__SecurityCapabilities *a, const char *type)
{
	if (((tds__SecurityCapabilities*)a)->TLS1_x002e0)
		soap_set_attr(soap, "TLS1.0", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->TLS1_x002e0), 1);
	if (((tds__SecurityCapabilities*)a)->TLS1_x002e1)
		soap_set_attr(soap, "TLS1.1", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->TLS1_x002e1), 1);
	if (((tds__SecurityCapabilities*)a)->TLS1_x002e2)
		soap_set_attr(soap, "TLS1.2", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->TLS1_x002e2), 1);
	if (((tds__SecurityCapabilities*)a)->OnboardKeyGeneration)
		soap_set_attr(soap, "OnboardKeyGeneration", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->OnboardKeyGeneration), 1);
	if (((tds__SecurityCapabilities*)a)->AccessPolicyConfig)
		soap_set_attr(soap, "AccessPolicyConfig", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->AccessPolicyConfig), 1);
	if (((tds__SecurityCapabilities*)a)->DefaultAccessPolicy)
		soap_set_attr(soap, "DefaultAccessPolicy", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->DefaultAccessPolicy), 1);
	if (((tds__SecurityCapabilities*)a)->Dot1X)
		soap_set_attr(soap, "Dot1X", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->Dot1X), 1);
	if (((tds__SecurityCapabilities*)a)->RemoteUserHandling)
		soap_set_attr(soap, "RemoteUserHandling", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->RemoteUserHandling), 1);
	if (((tds__SecurityCapabilities*)a)->X_x002e509Token)
		soap_set_attr(soap, "X.509Token", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->X_x002e509Token), 1);
	if (((tds__SecurityCapabilities*)a)->SAMLToken)
		soap_set_attr(soap, "SAMLToken", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->SAMLToken), 1);
	if (((tds__SecurityCapabilities*)a)->KerberosToken)
		soap_set_attr(soap, "KerberosToken", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->KerberosToken), 1);
	if (((tds__SecurityCapabilities*)a)->UsernameToken)
		soap_set_attr(soap, "UsernameToken", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->UsernameToken), 1);
	if (((tds__SecurityCapabilities*)a)->HttpDigest)
		soap_set_attr(soap, "HttpDigest", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->HttpDigest), 1);
	if (((tds__SecurityCapabilities*)a)->RELToken)
		soap_set_attr(soap, "RELToken", soap_bool2s(soap, *((tds__SecurityCapabilities*)a)->RELToken), 1);
	if (((tds__SecurityCapabilities*)a)->SupportedEAPMethods)
		soap_set_attr(soap, "SupportedEAPMethods", ((tds__SecurityCapabilities*)a)->SupportedEAPMethods, 1);
	if (((tds__SecurityCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tds__SecurityCapabilities*)a)->__anyAttribute, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tds:SecurityCapabilities");
}

void *tds__SecurityCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__SecurityCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tds__SecurityCapabilities * SOAP_FMAC4 soap_in_tds__SecurityCapabilities(struct soap *soap, const char *tag, tds__SecurityCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tds__SecurityCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__SecurityCapabilities, sizeof(tds__SecurityCapabilities), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__SecurityCapabilities)
			return (tds__SecurityCapabilities *)a->soap_in(soap, tag, type);
	}
	{	const char *t = soap_attr_value(soap, "TLS1.0", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->TLS1_x002e0 = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->TLS1_x002e0))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "TLS1.1", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->TLS1_x002e1 = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->TLS1_x002e1))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "TLS1.2", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->TLS1_x002e2 = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->TLS1_x002e2))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "OnboardKeyGeneration", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->OnboardKeyGeneration = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->OnboardKeyGeneration))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "AccessPolicyConfig", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->AccessPolicyConfig = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->AccessPolicyConfig))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "DefaultAccessPolicy", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->DefaultAccessPolicy = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->DefaultAccessPolicy))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "Dot1X", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->Dot1X = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->Dot1X))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "RemoteUserHandling", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->RemoteUserHandling = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->RemoteUserHandling))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "X.509Token", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->X_x002e509Token = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->X_x002e509Token))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "SAMLToken", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->SAMLToken = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->SAMLToken))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "KerberosToken", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->KerberosToken = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->KerberosToken))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "UsernameToken", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->UsernameToken = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->UsernameToken))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HttpDigest", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->HttpDigest = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->HttpDigest))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "RELToken", 0);
		if (t)
		{
			if (!(((tds__SecurityCapabilities*)a)->RELToken = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__SecurityCapabilities*)a)->RELToken))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "SupportedEAPMethods", 0), &((tds__SecurityCapabilities*)a)->SupportedEAPMethods, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tds__SecurityCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tds__SecurityCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__SecurityCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:SecurityCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__SecurityCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__SecurityCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tds__SecurityCapabilities * SOAP_FMAC4 soap_get_tds__SecurityCapabilities(struct soap *soap, tds__SecurityCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__SecurityCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__SecurityCapabilities * SOAP_FMAC2 soap_instantiate_tds__SecurityCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__SecurityCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__SecurityCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__SecurityCapabilities);
		if (size)
			*size = sizeof(tds__SecurityCapabilities);
		((tds__SecurityCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__SecurityCapabilities, n);
		if (size)
			*size = n * sizeof(tds__SecurityCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__SecurityCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__SecurityCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__SecurityCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__SecurityCapabilities %p -> %p\n", q, p));
	*(tds__SecurityCapabilities*)p = *(tds__SecurityCapabilities*)q;
}

void tds__NetworkCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tds__NetworkCapabilities::IPFilter = NULL;
	this->tds__NetworkCapabilities::ZeroConfiguration = NULL;
	this->tds__NetworkCapabilities::IPVersion6 = NULL;
	this->tds__NetworkCapabilities::DynDNS = NULL;
	this->tds__NetworkCapabilities::Dot11Configuration = NULL;
	this->tds__NetworkCapabilities::Dot1XConfigurations = NULL;
	this->tds__NetworkCapabilities::HostnameFromDHCP = NULL;
	this->tds__NetworkCapabilities::NTP = NULL;
	this->tds__NetworkCapabilities::DHCPv6 = NULL;
	this->tds__NetworkCapabilities::__anyAttribute = NULL;
}

void tds__NetworkCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__NetworkCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__NetworkCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__NetworkCapabilities(struct soap *soap, const char *tag, int id, const tds__NetworkCapabilities *a, const char *type)
{
	if (((tds__NetworkCapabilities*)a)->IPFilter)
		soap_set_attr(soap, "IPFilter", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->IPFilter), 1);
	if (((tds__NetworkCapabilities*)a)->ZeroConfiguration)
		soap_set_attr(soap, "ZeroConfiguration", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->ZeroConfiguration), 1);
	if (((tds__NetworkCapabilities*)a)->IPVersion6)
		soap_set_attr(soap, "IPVersion6", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->IPVersion6), 1);
	if (((tds__NetworkCapabilities*)a)->DynDNS)
		soap_set_attr(soap, "DynDNS", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->DynDNS), 1);
	if (((tds__NetworkCapabilities*)a)->Dot11Configuration)
		soap_set_attr(soap, "Dot11Configuration", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->Dot11Configuration), 1);
	if (((tds__NetworkCapabilities*)a)->Dot1XConfigurations)
		soap_set_attr(soap, "Dot1XConfigurations", soap_int2s(soap, *((tds__NetworkCapabilities*)a)->Dot1XConfigurations), 1);
	if (((tds__NetworkCapabilities*)a)->HostnameFromDHCP)
		soap_set_attr(soap, "HostnameFromDHCP", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->HostnameFromDHCP), 1);
	if (((tds__NetworkCapabilities*)a)->NTP)
		soap_set_attr(soap, "NTP", soap_int2s(soap, *((tds__NetworkCapabilities*)a)->NTP), 1);
	if (((tds__NetworkCapabilities*)a)->DHCPv6)
		soap_set_attr(soap, "DHCPv6", soap_bool2s(soap, *((tds__NetworkCapabilities*)a)->DHCPv6), 1);
	if (((tds__NetworkCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tds__NetworkCapabilities*)a)->__anyAttribute, 1);
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), "tds:NetworkCapabilities");
}

void *tds__NetworkCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__NetworkCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tds__NetworkCapabilities * SOAP_FMAC4 soap_in_tds__NetworkCapabilities(struct soap *soap, const char *tag, tds__NetworkCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (tds__NetworkCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__NetworkCapabilities, sizeof(tds__NetworkCapabilities), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__NetworkCapabilities)
			return (tds__NetworkCapabilities *)a->soap_in(soap, tag, type);
	}
	{	const char *t = soap_attr_value(soap, "IPFilter", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->IPFilter = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->IPFilter))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "ZeroConfiguration", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->ZeroConfiguration = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->ZeroConfiguration))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "IPVersion6", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->IPVersion6 = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->IPVersion6))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "DynDNS", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->DynDNS = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->DynDNS))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "Dot11Configuration", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->Dot11Configuration = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->Dot11Configuration))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "Dot1XConfigurations", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->Dot1XConfigurations = (int *)soap_malloc(soap, sizeof(int))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2int(soap, t, ((tds__NetworkCapabilities*)a)->Dot1XConfigurations))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "HostnameFromDHCP", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->HostnameFromDHCP = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->HostnameFromDHCP))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "NTP", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->NTP = (int *)soap_malloc(soap, sizeof(int))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2int(soap, t, ((tds__NetworkCapabilities*)a)->NTP))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "DHCPv6", 0);
		if (t)
		{
			if (!(((tds__NetworkCapabilities*)a)->DHCPv6 = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((tds__NetworkCapabilities*)a)->DHCPv6))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tds__NetworkCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int tds__NetworkCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__NetworkCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:NetworkCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__NetworkCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__NetworkCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tds__NetworkCapabilities * SOAP_FMAC4 soap_get_tds__NetworkCapabilities(struct soap *soap, tds__NetworkCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__NetworkCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__NetworkCapabilities * SOAP_FMAC2 soap_instantiate_tds__NetworkCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__NetworkCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__NetworkCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__NetworkCapabilities);
		if (size)
			*size = sizeof(tds__NetworkCapabilities);
		((tds__NetworkCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__NetworkCapabilities, n);
		if (size)
			*size = n * sizeof(tds__NetworkCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__NetworkCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__NetworkCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__NetworkCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__NetworkCapabilities %p -> %p\n", q, p));
	*(tds__NetworkCapabilities*)p = *(tds__NetworkCapabilities*)q;
}

void tds__DeviceServiceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tds__DeviceServiceCapabilities::Network = NULL;
	this->tds__DeviceServiceCapabilities::Security = NULL;
	this->tds__DeviceServiceCapabilities::System = NULL;
	this->tds__DeviceServiceCapabilities::Misc = NULL;
}

void tds__DeviceServiceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotds__NetworkCapabilities(soap, &this->tds__DeviceServiceCapabilities::Network);
	soap_serialize_PointerTotds__SecurityCapabilities(soap, &this->tds__DeviceServiceCapabilities::Security);
	soap_serialize_PointerTotds__SystemCapabilities(soap, &this->tds__DeviceServiceCapabilities::System);
	soap_serialize_PointerTotds__MiscCapabilities(soap, &this->tds__DeviceServiceCapabilities::Misc);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__DeviceServiceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__DeviceServiceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__DeviceServiceCapabilities(struct soap *soap, const char *tag, int id, const tds__DeviceServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tds__DeviceServiceCapabilities), "tds:DeviceServiceCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->tds__DeviceServiceCapabilities::Network)
	{	if (soap_out_PointerTotds__NetworkCapabilities(soap, "tds:Network", -1, &a->tds__DeviceServiceCapabilities::Network, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Network"))
		return soap->error;
	if (a->tds__DeviceServiceCapabilities::Security)
	{	if (soap_out_PointerTotds__SecurityCapabilities(soap, "tds:Security", -1, &a->tds__DeviceServiceCapabilities::Security, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Security"))
		return soap->error;
	if (a->tds__DeviceServiceCapabilities::System)
	{	if (soap_out_PointerTotds__SystemCapabilities(soap, "tds:System", -1, &a->tds__DeviceServiceCapabilities::System, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:System"))
		return soap->error;
	if (soap_out_PointerTotds__MiscCapabilities(soap, "tds:Misc", -1, &(a->tds__DeviceServiceCapabilities::Misc), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tds__DeviceServiceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__DeviceServiceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 tds__DeviceServiceCapabilities * SOAP_FMAC4 soap_in_tds__DeviceServiceCapabilities(struct soap *soap, const char *tag, tds__DeviceServiceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tds__DeviceServiceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__DeviceServiceCapabilities, sizeof(tds__DeviceServiceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__DeviceServiceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tds__DeviceServiceCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Network1 = 1;
	size_t soap_flag_Security1 = 1;
	size_t soap_flag_System1 = 1;
	size_t soap_flag_Misc1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Network1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotds__NetworkCapabilities(soap, "tds:Network", &(a->tds__DeviceServiceCapabilities::Network), "tds:NetworkCapabilities"))
				{	soap_flag_Network1--;
					continue;
				}
			if (soap_flag_Security1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotds__SecurityCapabilities(soap, "tds:Security", &(a->tds__DeviceServiceCapabilities::Security), "tds:SecurityCapabilities"))
				{	soap_flag_Security1--;
					continue;
				}
			if (soap_flag_System1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotds__SystemCapabilities(soap, "tds:System", &(a->tds__DeviceServiceCapabilities::System), "tds:SystemCapabilities"))
				{	soap_flag_System1--;
					continue;
				}
			if (soap_flag_Misc1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotds__MiscCapabilities(soap, "tds:Misc", &(a->tds__DeviceServiceCapabilities::Misc), "tds:MiscCapabilities"))
				{	soap_flag_Misc1--;
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
	{	a = (tds__DeviceServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tds__DeviceServiceCapabilities, 0, sizeof(tds__DeviceServiceCapabilities), 0, soap_copy_tds__DeviceServiceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Network1 > 0 || soap_flag_Security1 > 0 || soap_flag_System1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tds__DeviceServiceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__DeviceServiceCapabilities);
	if (this->soap_out(soap, tag?tag:"tds:DeviceServiceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__DeviceServiceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__DeviceServiceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 tds__DeviceServiceCapabilities * SOAP_FMAC4 soap_get_tds__DeviceServiceCapabilities(struct soap *soap, tds__DeviceServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__DeviceServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__DeviceServiceCapabilities * SOAP_FMAC2 soap_instantiate_tds__DeviceServiceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__DeviceServiceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__DeviceServiceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__DeviceServiceCapabilities);
		if (size)
			*size = sizeof(tds__DeviceServiceCapabilities);
		((tds__DeviceServiceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__DeviceServiceCapabilities, n);
		if (size)
			*size = n * sizeof(tds__DeviceServiceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__DeviceServiceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__DeviceServiceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__DeviceServiceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__DeviceServiceCapabilities %p -> %p\n", q, p));
	*(tds__DeviceServiceCapabilities*)p = *(tds__DeviceServiceCapabilities*)q;
}

void tds__Service::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->tds__Service::Namespace);
	soap_default_xsd__anyURI(soap, &this->tds__Service::XAddr);
	this->tds__Service::Capabilities = NULL;
	this->tds__Service::Version = NULL;
	this->tds__Service::__size = 0;
	this->tds__Service::__any = NULL;
	this->tds__Service::__anyAttribute = NULL;
}

void tds__Service::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->tds__Service::Namespace);
	soap_serialize_xsd__anyURI(soap, &this->tds__Service::XAddr);
	soap_serialize_PointerTo_tds__Service_Capabilities(soap, &this->tds__Service::Capabilities);
	soap_serialize_PointerTott__OnvifVersion(soap, &this->tds__Service::Version);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tds__Service::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tds__Service(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tds__Service(struct soap *soap, const char *tag, int id, const tds__Service *a, const char *type)
{
	if (((tds__Service*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tds__Service*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tds__Service), "tds:Service"))
		return soap->error;
	/* transient soap skipped */
	if (a->tds__Service::Namespace)
	{	if (soap_out_xsd__anyURI(soap, "tds:Namespace", -1, &a->tds__Service::Namespace, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Namespace"))
		return soap->error;
	if (a->tds__Service::XAddr)
	{	if (soap_out_xsd__anyURI(soap, "tds:XAddr", -1, &a->tds__Service::XAddr, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:XAddr"))
		return soap->error;
	if (soap_out_PointerTo_tds__Service_Capabilities(soap, "tds:Capabilities", -1, &(a->tds__Service::Capabilities), ""))
		return soap->error;
	if (a->tds__Service::Version)
	{	if (soap_out_PointerTott__OnvifVersion(soap, "tds:Version", -1, &a->tds__Service::Version, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Version"))
		return soap->error;
	if (a->tds__Service::__any)
	{	int i;
		for (i = 0; i < a->tds__Service::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tds__Service::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tds__Service::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tds__Service(soap, tag, this, type);
}

SOAP_FMAC3 tds__Service * SOAP_FMAC4 soap_in_tds__Service(struct soap *soap, const char *tag, tds__Service *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tds__Service *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tds__Service, sizeof(tds__Service), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tds__Service)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tds__Service *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tds__Service*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Namespace1 = 1;
	size_t soap_flag_XAddr1 = 1;
	size_t soap_flag_Capabilities1 = 1;
	size_t soap_flag_Version1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Namespace1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tds:Namespace", &(a->tds__Service::Namespace), "xsd:anyURI"))
				{	soap_flag_Namespace1--;
					continue;
				}
			if (soap_flag_XAddr1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tds:XAddr", &(a->tds__Service::XAddr), "xsd:anyURI"))
				{	soap_flag_XAddr1--;
					continue;
				}
			if (soap_flag_Capabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tds__Service_Capabilities(soap, "tds:Capabilities", &(a->tds__Service::Capabilities), ""))
				{	soap_flag_Capabilities1--;
					continue;
				}
			if (soap_flag_Version1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__OnvifVersion(soap, "tds:Version", &(a->tds__Service::Version), "tt:OnvifVersion"))
				{	soap_flag_Version1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tds__Service::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tds__Service::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tds__Service::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tds__Service::__any);
				}
				if (soap_in_byte(soap, "-any", a->tds__Service::__any, "xsd:byte"))
				{	a->tds__Service::__size++;
					a->tds__Service::__any = NULL;
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
		if (a->tds__Service::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tds__Service::__size)
			a->tds__Service::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tds__Service::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tds__Service *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tds__Service, 0, sizeof(tds__Service), 0, soap_copy_tds__Service);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Namespace1 > 0 || soap_flag_XAddr1 > 0 || soap_flag_Version1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tds__Service::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tds__Service);
	if (this->soap_out(soap, tag?tag:"tds:Service", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tds__Service::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tds__Service(soap, this, tag, type);
}

SOAP_FMAC3 tds__Service * SOAP_FMAC4 soap_get_tds__Service(struct soap *soap, tds__Service *p, const char *tag, const char *type)
{
	if ((p = soap_in_tds__Service(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tds__Service * SOAP_FMAC2 soap_instantiate_tds__Service(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tds__Service(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tds__Service, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(tds__Service);
		if (size)
			*size = sizeof(tds__Service);
		((tds__Service*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__Service, n);
		if (size)
			*size = n * sizeof(tds__Service);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((tds__Service*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (tds__Service*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tds__Service(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tds__Service %p -> %p\n", q, p));
	*(tds__Service*)p = *(tds__Service*)q;
}

void xsd__token_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__token(soap, &this->xsd__token_::__item);
}

void xsd__token_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__token(soap, &this->xsd__token_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__token_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__token_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__token_(struct soap *soap, const char *tag, int id, const xsd__token_ *a, const char *type)
{
	return soap_out_xsd__token(soap, tag, id, &(a->xsd__token_::__item), "xsd:token");
}

void *xsd__token_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__token_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__token_ * SOAP_FMAC4 soap_in_xsd__token_(struct soap *soap, const char *tag, xsd__token_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__token_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__token_, sizeof(xsd__token_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__token_)
			return (xsd__token_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__token(soap, tag, &(a->xsd__token_::__item), "xsd:token"))
		return NULL;
	return a;
}

int xsd__token_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__token_);
	if (this->soap_out(soap, tag?tag:"xsd:token", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__token_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__token_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__token_ * SOAP_FMAC4 soap_get_xsd__token_(struct soap *soap, xsd__token_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__token_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__token_ * SOAP_FMAC2 soap_instantiate_xsd__token_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__token_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__token_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__token_);
		if (size)
			*size = sizeof(xsd__token_);
		((xsd__token_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__token_, n);
		if (size)
			*size = n * sizeof(xsd__token_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__token_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__token_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__token_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__token_ %p -> %p\n", q, p));
	*(xsd__token_*)p = *(xsd__token_*)q;
}

void xsd__string::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->xsd__string::__item);
}

void xsd__string::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->xsd__string::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__string::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__string(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__string(struct soap *soap, const char *tag, int id, const xsd__string *a, const char *type)
{
	return soap_out_string(soap, tag, id, &(a->xsd__string::__item), "xsd:string");
}

void *xsd__string::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__string(soap, tag, this, type);
}

SOAP_FMAC3 xsd__string * SOAP_FMAC4 soap_in_xsd__string(struct soap *soap, const char *tag, xsd__string *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__string *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__string, sizeof(xsd__string), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__string)
			return (xsd__string *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_string(soap, tag, &(a->xsd__string::__item), "xsd:string"))
		return NULL;
	return a;
}

int xsd__string::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__string);
	if (this->soap_out(soap, tag?tag:"xsd:string", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__string::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__string(soap, this, tag, type);
}

SOAP_FMAC3 xsd__string * SOAP_FMAC4 soap_get_xsd__string(struct soap *soap, xsd__string *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__string(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__string * SOAP_FMAC2 soap_instantiate_xsd__string(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__string(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__string, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__string);
		if (size)
			*size = sizeof(xsd__string);
		((xsd__string*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__string, n);
		if (size)
			*size = n * sizeof(xsd__string);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__string*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__string*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__string(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__string %p -> %p\n", q, p));
	*(xsd__string*)p = *(xsd__string*)q;
}

void xsd__nonNegativeInteger_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__nonNegativeInteger(soap, &this->xsd__nonNegativeInteger_::__item);
}

void xsd__nonNegativeInteger_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__nonNegativeInteger(soap, &this->xsd__nonNegativeInteger_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__nonNegativeInteger_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__nonNegativeInteger_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__nonNegativeInteger_(struct soap *soap, const char *tag, int id, const xsd__nonNegativeInteger_ *a, const char *type)
{
	return soap_out_xsd__nonNegativeInteger(soap, tag, id, &(a->xsd__nonNegativeInteger_::__item), "xsd:nonNegativeInteger");
}

void *xsd__nonNegativeInteger_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__nonNegativeInteger_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__nonNegativeInteger_ * SOAP_FMAC4 soap_in_xsd__nonNegativeInteger_(struct soap *soap, const char *tag, xsd__nonNegativeInteger_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__nonNegativeInteger_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__nonNegativeInteger_, sizeof(xsd__nonNegativeInteger_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__nonNegativeInteger_)
			return (xsd__nonNegativeInteger_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__nonNegativeInteger(soap, tag, &(a->xsd__nonNegativeInteger_::__item), "xsd:nonNegativeInteger"))
		return NULL;
	return a;
}

int xsd__nonNegativeInteger_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__nonNegativeInteger_);
	if (this->soap_out(soap, tag?tag:"xsd:nonNegativeInteger", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__nonNegativeInteger_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__nonNegativeInteger_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__nonNegativeInteger_ * SOAP_FMAC4 soap_get_xsd__nonNegativeInteger_(struct soap *soap, xsd__nonNegativeInteger_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__nonNegativeInteger_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__nonNegativeInteger_ * SOAP_FMAC2 soap_instantiate_xsd__nonNegativeInteger_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__nonNegativeInteger_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__nonNegativeInteger_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__nonNegativeInteger_);
		if (size)
			*size = sizeof(xsd__nonNegativeInteger_);
		((xsd__nonNegativeInteger_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__nonNegativeInteger_, n);
		if (size)
			*size = n * sizeof(xsd__nonNegativeInteger_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__nonNegativeInteger_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__nonNegativeInteger_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__nonNegativeInteger_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__nonNegativeInteger_ %p -> %p\n", q, p));
	*(xsd__nonNegativeInteger_*)p = *(xsd__nonNegativeInteger_*)q;
}

void xsd__integer_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__integer(soap, &this->xsd__integer_::__item);
}

void xsd__integer_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__integer(soap, &this->xsd__integer_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__integer_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__integer_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__integer_(struct soap *soap, const char *tag, int id, const xsd__integer_ *a, const char *type)
{
	return soap_out_xsd__integer(soap, tag, id, &(a->xsd__integer_::__item), "xsd:integer");
}

void *xsd__integer_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__integer_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__integer_ * SOAP_FMAC4 soap_in_xsd__integer_(struct soap *soap, const char *tag, xsd__integer_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__integer_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__integer_, sizeof(xsd__integer_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__integer_)
			return (xsd__integer_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__integer(soap, tag, &(a->xsd__integer_::__item), "xsd:integer"))
		return NULL;
	return a;
}

int xsd__integer_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__integer_);
	if (this->soap_out(soap, tag?tag:"xsd:integer", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__integer_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__integer_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__integer_ * SOAP_FMAC4 soap_get_xsd__integer_(struct soap *soap, xsd__integer_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__integer_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__integer_ * SOAP_FMAC2 soap_instantiate_xsd__integer_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__integer_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__integer_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__integer_);
		if (size)
			*size = sizeof(xsd__integer_);
		((xsd__integer_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__integer_, n);
		if (size)
			*size = n * sizeof(xsd__integer_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__integer_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__integer_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__integer_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__integer_ %p -> %p\n", q, p));
	*(xsd__integer_*)p = *(xsd__integer_*)q;
}

void xsd__int::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_int(soap, &this->xsd__int::__item);
}

void xsd__int::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->xsd__int::__item, SOAP_TYPE_int);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__int::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__int(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__int(struct soap *soap, const char *tag, int id, const xsd__int *a, const char *type)
{
	return soap_out_int(soap, tag, id, &(a->xsd__int::__item), "xsd:int");
}

void *xsd__int::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__int(soap, tag, this, type);
}

SOAP_FMAC3 xsd__int * SOAP_FMAC4 soap_in_xsd__int(struct soap *soap, const char *tag, xsd__int *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__int *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__int, sizeof(xsd__int), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__int)
			return (xsd__int *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_int(soap, tag, &(a->xsd__int::__item), "xsd:int"))
		return NULL;
	return a;
}

int xsd__int::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__int);
	if (this->soap_out(soap, tag?tag:"xsd:int", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__int::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__int(soap, this, tag, type);
}

SOAP_FMAC3 xsd__int * SOAP_FMAC4 soap_get_xsd__int(struct soap *soap, xsd__int *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__int(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__int * SOAP_FMAC2 soap_instantiate_xsd__int(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__int(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__int, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__int);
		if (size)
			*size = sizeof(xsd__int);
		((xsd__int*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__int, n);
		if (size)
			*size = n * sizeof(xsd__int);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__int*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__int*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__int(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__int %p -> %p\n", q, p));
	*(xsd__int*)p = *(xsd__int*)q;
}

void xsd__hexBinary_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->xsd__hexBinary_::__item.xsd__hexBinary::soap_default(soap);
}

void xsd__hexBinary_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__hexBinary_::__item.soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__hexBinary_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__hexBinary_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__hexBinary_(struct soap *soap, const char *tag, int id, const xsd__hexBinary_ *a, const char *type)
{
	return (a->xsd__hexBinary_::__item).soap_out(soap, tag, id, "xsd:hexBinary");
}

void *xsd__hexBinary_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__hexBinary_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__hexBinary_ * SOAP_FMAC4 soap_in_xsd__hexBinary_(struct soap *soap, const char *tag, xsd__hexBinary_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__hexBinary_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__hexBinary_, sizeof(xsd__hexBinary_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__hexBinary_)
			return (xsd__hexBinary_ *)a->soap_in(soap, tag, type);
	}
	if (!(a->xsd__hexBinary_::__item).soap_in(soap, tag, "xsd:hexBinary"))
		return NULL;
	return a;
}

int xsd__hexBinary_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__hexBinary_);
	if (this->soap_out(soap, tag?tag:"xsd:hexBinary", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__hexBinary_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__hexBinary_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__hexBinary_ * SOAP_FMAC4 soap_get_xsd__hexBinary_(struct soap *soap, xsd__hexBinary_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__hexBinary_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__hexBinary_ * SOAP_FMAC2 soap_instantiate_xsd__hexBinary_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__hexBinary_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__hexBinary_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__hexBinary_);
		if (size)
			*size = sizeof(xsd__hexBinary_);
		((xsd__hexBinary_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__hexBinary_, n);
		if (size)
			*size = n * sizeof(xsd__hexBinary_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__hexBinary_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__hexBinary_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__hexBinary_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__hexBinary_ %p -> %p\n", q, p));
	*(xsd__hexBinary_*)p = *(xsd__hexBinary_*)q;
}

void xsd__float::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_float(soap, &this->xsd__float::__item);
}

void xsd__float::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->xsd__float::__item, SOAP_TYPE_float);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__float::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__float(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__float(struct soap *soap, const char *tag, int id, const xsd__float *a, const char *type)
{
	return soap_out_float(soap, tag, id, &(a->xsd__float::__item), "xsd:float");
}

void *xsd__float::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__float(soap, tag, this, type);
}

SOAP_FMAC3 xsd__float * SOAP_FMAC4 soap_in_xsd__float(struct soap *soap, const char *tag, xsd__float *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__float *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__float, sizeof(xsd__float), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__float)
			return (xsd__float *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_float(soap, tag, &(a->xsd__float::__item), "xsd:float"))
		return NULL;
	return a;
}

int xsd__float::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__float);
	if (this->soap_out(soap, tag?tag:"xsd:float", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__float::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__float(soap, this, tag, type);
}

SOAP_FMAC3 xsd__float * SOAP_FMAC4 soap_get_xsd__float(struct soap *soap, xsd__float *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__float(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__float * SOAP_FMAC2 soap_instantiate_xsd__float(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__float(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__float, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__float);
		if (size)
			*size = sizeof(xsd__float);
		((xsd__float*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__float, n);
		if (size)
			*size = n * sizeof(xsd__float);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__float*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__float*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__float(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__float %p -> %p\n", q, p));
	*(xsd__float*)p = *(xsd__float*)q;
}

void xsd__duration_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__duration(soap, &this->xsd__duration_::__item);
}

void xsd__duration_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->xsd__duration_::__item, SOAP_TYPE_xsd__duration);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__duration_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__duration_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__duration_(struct soap *soap, const char *tag, int id, const xsd__duration_ *a, const char *type)
{
	return soap_out_xsd__duration(soap, tag, id, &(a->xsd__duration_::__item), "xsd:duration");
}

void *xsd__duration_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__duration_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__duration_ * SOAP_FMAC4 soap_in_xsd__duration_(struct soap *soap, const char *tag, xsd__duration_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__duration_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__duration_, sizeof(xsd__duration_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__duration_)
			return (xsd__duration_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__duration(soap, tag, &(a->xsd__duration_::__item), "xsd:duration"))
		return NULL;
	return a;
}

int xsd__duration_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__duration_);
	if (this->soap_out(soap, tag?tag:"xsd:duration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__duration_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__duration_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__duration_ * SOAP_FMAC4 soap_get_xsd__duration_(struct soap *soap, xsd__duration_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__duration_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__duration_ * SOAP_FMAC2 soap_instantiate_xsd__duration_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__duration_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__duration_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__duration_);
		if (size)
			*size = sizeof(xsd__duration_);
		((xsd__duration_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__duration_, n);
		if (size)
			*size = n * sizeof(xsd__duration_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__duration_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__duration_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__duration_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__duration_ %p -> %p\n", q, p));
	*(xsd__duration_*)p = *(xsd__duration_*)q;
}

void xsd__dateTime::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_time(soap, &this->xsd__dateTime::__item);
}

void xsd__dateTime::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->xsd__dateTime::__item, SOAP_TYPE_time);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__dateTime::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__dateTime(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__dateTime(struct soap *soap, const char *tag, int id, const xsd__dateTime *a, const char *type)
{
	return soap_out_time(soap, tag, id, &(a->xsd__dateTime::__item), "xsd:dateTime");
}

void *xsd__dateTime::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__dateTime(soap, tag, this, type);
}

SOAP_FMAC3 xsd__dateTime * SOAP_FMAC4 soap_in_xsd__dateTime(struct soap *soap, const char *tag, xsd__dateTime *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__dateTime *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__dateTime, sizeof(xsd__dateTime), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__dateTime)
			return (xsd__dateTime *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_time(soap, tag, &(a->xsd__dateTime::__item), "xsd:dateTime"))
		return NULL;
	return a;
}

int xsd__dateTime::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__dateTime);
	if (this->soap_out(soap, tag?tag:"xsd:dateTime", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__dateTime::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__dateTime(soap, this, tag, type);
}

SOAP_FMAC3 xsd__dateTime * SOAP_FMAC4 soap_get_xsd__dateTime(struct soap *soap, xsd__dateTime *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__dateTime(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__dateTime * SOAP_FMAC2 soap_instantiate_xsd__dateTime(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__dateTime(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__dateTime, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__dateTime);
		if (size)
			*size = sizeof(xsd__dateTime);
		((xsd__dateTime*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__dateTime, n);
		if (size)
			*size = n * sizeof(xsd__dateTime);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__dateTime*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__dateTime*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__dateTime(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__dateTime %p -> %p\n", q, p));
	*(xsd__dateTime*)p = *(xsd__dateTime*)q;
}

void xsd__boolean::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_bool(soap, &this->xsd__boolean::__item);
}

void xsd__boolean::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->xsd__boolean::__item, SOAP_TYPE_bool);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__boolean::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__boolean(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__boolean(struct soap *soap, const char *tag, int id, const xsd__boolean *a, const char *type)
{
	return soap_out_bool(soap, tag, id, &(a->xsd__boolean::__item), "xsd:boolean");
}

void *xsd__boolean::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__boolean(soap, tag, this, type);
}

SOAP_FMAC3 xsd__boolean * SOAP_FMAC4 soap_in_xsd__boolean(struct soap *soap, const char *tag, xsd__boolean *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__boolean *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__boolean, sizeof(xsd__boolean), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__boolean)
			return (xsd__boolean *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_bool(soap, tag, &(a->xsd__boolean::__item), "xsd:boolean"))
		return NULL;
	return a;
}

int xsd__boolean::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__boolean);
	if (this->soap_out(soap, tag?tag:"xsd:boolean", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__boolean::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__boolean(soap, this, tag, type);
}

SOAP_FMAC3 xsd__boolean * SOAP_FMAC4 soap_get_xsd__boolean(struct soap *soap, xsd__boolean *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__boolean(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__boolean * SOAP_FMAC2 soap_instantiate_xsd__boolean(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__boolean(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__boolean, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__boolean);
		if (size)
			*size = sizeof(xsd__boolean);
		((xsd__boolean*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__boolean, n);
		if (size)
			*size = n * sizeof(xsd__boolean);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__boolean*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__boolean*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__boolean(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__boolean %p -> %p\n", q, p));
	*(xsd__boolean*)p = *(xsd__boolean*)q;
}

void xsd__base64Binary_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->xsd__base64Binary_::__item.xsd__base64Binary::soap_default(soap);
}

void xsd__base64Binary_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__base64Binary_::__item.soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__base64Binary_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__base64Binary_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__base64Binary_(struct soap *soap, const char *tag, int id, const xsd__base64Binary_ *a, const char *type)
{
	return (a->xsd__base64Binary_::__item).soap_out(soap, tag, id, "xsd:base64Binary");
}

void *xsd__base64Binary_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__base64Binary_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__base64Binary_ * SOAP_FMAC4 soap_in_xsd__base64Binary_(struct soap *soap, const char *tag, xsd__base64Binary_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__base64Binary_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__base64Binary_, sizeof(xsd__base64Binary_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__base64Binary_)
			return (xsd__base64Binary_ *)a->soap_in(soap, tag, type);
	}
	if (!(a->xsd__base64Binary_::__item).soap_in(soap, tag, "xsd:base64Binary"))
		return NULL;
	return a;
}

int xsd__base64Binary_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__base64Binary_);
	if (this->soap_out(soap, tag?tag:"xsd:base64Binary", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__base64Binary_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__base64Binary_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__base64Binary_ * SOAP_FMAC4 soap_get_xsd__base64Binary_(struct soap *soap, xsd__base64Binary_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__base64Binary_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__base64Binary_ * SOAP_FMAC2 soap_instantiate_xsd__base64Binary_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__base64Binary_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__base64Binary_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__base64Binary_);
		if (size)
			*size = sizeof(xsd__base64Binary_);
		((xsd__base64Binary_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__base64Binary_, n);
		if (size)
			*size = n * sizeof(xsd__base64Binary_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__base64Binary_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__base64Binary_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__base64Binary_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__base64Binary_ %p -> %p\n", q, p));
	*(xsd__base64Binary_*)p = *(xsd__base64Binary_*)q;
}

void xsd__anyURI_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anyURI(soap, &this->xsd__anyURI_::__item);
}

void xsd__anyURI_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &this->xsd__anyURI_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__anyURI_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__anyURI_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__anyURI_(struct soap *soap, const char *tag, int id, const xsd__anyURI_ *a, const char *type)
{
	return soap_out_xsd__anyURI(soap, tag, id, &(a->xsd__anyURI_::__item), "xsd:anyURI");
}

void *xsd__anyURI_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__anyURI_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__anyURI_ * SOAP_FMAC4 soap_in_xsd__anyURI_(struct soap *soap, const char *tag, xsd__anyURI_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__anyURI_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__anyURI_, sizeof(xsd__anyURI_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__anyURI_)
			return (xsd__anyURI_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__anyURI(soap, tag, &(a->xsd__anyURI_::__item), "xsd:anyURI"))
		return NULL;
	return a;
}

int xsd__anyURI_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__anyURI_);
	if (this->soap_out(soap, tag?tag:"xsd:anyURI", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__anyURI_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__anyURI_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__anyURI_ * SOAP_FMAC4 soap_get_xsd__anyURI_(struct soap *soap, xsd__anyURI_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__anyURI_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__anyURI_ * SOAP_FMAC2 soap_instantiate_xsd__anyURI_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__anyURI_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__anyURI_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__anyURI_);
		if (size)
			*size = sizeof(xsd__anyURI_);
		((xsd__anyURI_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__anyURI_, n);
		if (size)
			*size = n * sizeof(xsd__anyURI_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__anyURI_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__anyURI_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__anyURI_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__anyURI_ %p -> %p\n", q, p));
	*(xsd__anyURI_*)p = *(xsd__anyURI_*)q;
}

void xsd__anySimpleType_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__anySimpleType(soap, &this->xsd__anySimpleType_::__item);
}

void xsd__anySimpleType_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__anySimpleType(soap, &this->xsd__anySimpleType_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__anySimpleType_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__anySimpleType_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__anySimpleType_(struct soap *soap, const char *tag, int id, const xsd__anySimpleType_ *a, const char *type)
{
	return soap_out_xsd__anySimpleType(soap, tag, id, &(a->xsd__anySimpleType_::__item), "xsd:anySimpleType");
}

void *xsd__anySimpleType_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__anySimpleType_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__anySimpleType_ * SOAP_FMAC4 soap_in_xsd__anySimpleType_(struct soap *soap, const char *tag, xsd__anySimpleType_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__anySimpleType_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__anySimpleType_, sizeof(xsd__anySimpleType_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__anySimpleType_)
			return (xsd__anySimpleType_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__anySimpleType(soap, tag, &(a->xsd__anySimpleType_::__item), "xsd:anySimpleType"))
		return NULL;
	return a;
}

int xsd__anySimpleType_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__anySimpleType_);
	if (this->soap_out(soap, tag?tag:"xsd:anySimpleType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__anySimpleType_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__anySimpleType_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__anySimpleType_ * SOAP_FMAC4 soap_get_xsd__anySimpleType_(struct soap *soap, xsd__anySimpleType_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__anySimpleType_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__anySimpleType_ * SOAP_FMAC2 soap_instantiate_xsd__anySimpleType_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__anySimpleType_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__anySimpleType_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__anySimpleType_);
		if (size)
			*size = sizeof(xsd__anySimpleType_);
		((xsd__anySimpleType_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__anySimpleType_, n);
		if (size)
			*size = n * sizeof(xsd__anySimpleType_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__anySimpleType_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__anySimpleType_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__anySimpleType_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__anySimpleType_ %p -> %p\n", q, p));
	*(xsd__anySimpleType_*)p = *(xsd__anySimpleType_*)q;
}

void xsd__QName::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default__QName(soap, &this->xsd__QName::__item);
}

void xsd__QName::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize__QName(soap, &this->xsd__QName::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__QName::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__QName(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__QName(struct soap *soap, const char *tag, int id, const xsd__QName *a, const char *type)
{
	const char *soap_tmp___item = soap_QName2s(soap, a->__item);
	return soap_out__QName(soap, tag, id, (char*const*)&soap_tmp___item, "xsd:QName");
}

void *xsd__QName::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__QName(soap, tag, this, type);
}

SOAP_FMAC3 xsd__QName * SOAP_FMAC4 soap_in_xsd__QName(struct soap *soap, const char *tag, xsd__QName *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__QName *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__QName, sizeof(xsd__QName), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__QName)
			return (xsd__QName *)a->soap_in(soap, tag, type);
	}
	if (!soap_in__QName(soap, tag, &(a->xsd__QName::__item), "xsd:QName"))
		return NULL;
	return a;
}

int xsd__QName::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__QName);
	if (this->soap_out(soap, tag?tag:"xsd:QName", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__QName::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__QName(soap, this, tag, type);
}

SOAP_FMAC3 xsd__QName * SOAP_FMAC4 soap_get_xsd__QName(struct soap *soap, xsd__QName *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__QName(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__QName * SOAP_FMAC2 soap_instantiate_xsd__QName(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__QName(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__QName, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__QName);
		if (size)
			*size = sizeof(xsd__QName);
		((xsd__QName*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__QName, n);
		if (size)
			*size = n * sizeof(xsd__QName);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__QName*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__QName*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__QName(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__QName %p -> %p\n", q, p));
	*(xsd__QName*)p = *(xsd__QName*)q;
}

void xsd__NCName_::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_xsd__NCName(soap, &this->xsd__NCName_::__item);
}

void xsd__NCName_::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__NCName(soap, &this->xsd__NCName_::__item);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int xsd__NCName_::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__NCName_(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__NCName_(struct soap *soap, const char *tag, int id, const xsd__NCName_ *a, const char *type)
{
	return soap_out_xsd__NCName(soap, tag, id, &(a->xsd__NCName_::__item), "xsd:NCName");
}

void *xsd__NCName_::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__NCName_(soap, tag, this, type);
}

SOAP_FMAC3 xsd__NCName_ * SOAP_FMAC4 soap_in_xsd__NCName_(struct soap *soap, const char *tag, xsd__NCName_ *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__NCName_ *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__NCName_, sizeof(xsd__NCName_), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__NCName_)
			return (xsd__NCName_ *)a->soap_in(soap, tag, type);
	}
	if (!soap_in_xsd__NCName(soap, tag, &(a->xsd__NCName_::__item), "xsd:NCName"))
		return NULL;
	return a;
}

int xsd__NCName_::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__NCName_);
	if (this->soap_out(soap, tag?tag:"xsd:NCName", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__NCName_::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__NCName_(soap, this, tag, type);
}

SOAP_FMAC3 xsd__NCName_ * SOAP_FMAC4 soap_get_xsd__NCName_(struct soap *soap, xsd__NCName_ *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__NCName_(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__NCName_ * SOAP_FMAC2 soap_instantiate_xsd__NCName_(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__NCName_(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__NCName_, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__NCName_);
		if (size)
			*size = sizeof(xsd__NCName_);
		((xsd__NCName_*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__NCName_, n);
		if (size)
			*size = n * sizeof(xsd__NCName_);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__NCName_*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__NCName_*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__NCName_(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__NCName_ %p -> %p\n", q, p));
	*(xsd__NCName_*)p = *(xsd__NCName_*)q;
}

void xsd__hexBinary::soap_default(struct soap *soap)
{
	(void)soap; /* appease -Wall -Werror */
	this->__size = 0;
	this->__ptr = NULL;
}

void xsd__hexBinary::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	if (this->__ptr)
		soap_array_reference(soap, this, (struct soap_array*)&this->__ptr, 1, SOAP_TYPE_xsd__hexBinary);
#endif
}

int xsd__hexBinary::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{	return soap_out_xsd__hexBinary(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__hexBinary(struct soap *soap, const char *tag, int id, const xsd__hexBinary *a, const char *type)
{
	id = soap_element_id(soap, tag, id, a, (struct soap_array*)&a->__ptr, 1, type, SOAP_TYPE_xsd__hexBinary);
	if (id < 0)
		return soap->error;
	if (soap_element_begin_out(soap, tag, id, type))
		return soap->error;
	if (soap_puthex(soap, a->__ptr, a->__size))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *xsd__hexBinary::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__hexBinary(soap, tag, this, type);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_in_xsd__hexBinary(struct soap *soap, const char *tag, xsd__hexBinary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":hexBinary"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (xsd__hexBinary *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__hexBinary, sizeof(xsd__hexBinary), soap->type, soap->arrayType);
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
	{	a = (xsd__hexBinary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_xsd__hexBinary, 0, sizeof(xsd__hexBinary), 0, soap_copy_xsd__hexBinary);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int xsd__hexBinary::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, (struct soap_array*)&this->__ptr, 1, tag, SOAP_TYPE_xsd__hexBinary);
	if (this->soap_out(soap, tag?tag:"xsd:hexBinary", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__hexBinary::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__hexBinary(soap, this, tag, type);
}

SOAP_FMAC3 xsd__hexBinary * SOAP_FMAC4 soap_get_xsd__hexBinary(struct soap *soap, xsd__hexBinary *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__hexBinary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__hexBinary * SOAP_FMAC2 soap_instantiate_xsd__hexBinary(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__hexBinary(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__hexBinary, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__hexBinary);
		if (size)
			*size = sizeof(xsd__hexBinary);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__hexBinary, n);
		if (size)
			*size = n * sizeof(xsd__hexBinary);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__hexBinary*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__hexBinary(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__hexBinary %p -> %p\n", q, p));
	*(xsd__hexBinary*)p = *(xsd__hexBinary*)q;
}

void xsd__base64Binary::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->__size = 0;
	this->__ptr = NULL;
	this->id = NULL;
	this->type = NULL;
	this->options = NULL;
}

void xsd__base64Binary::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	if (this->__ptr && !soap_array_reference(soap, this, (struct soap_array*)&this->__ptr, 1, SOAP_TYPE_xsd__base64Binary))
		if (this->id || this->type)
			soap->mode |= SOAP_ENC_DIME;
#endif
}

int xsd__base64Binary::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{	return soap_out_xsd__base64Binary(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__base64Binary(struct soap *soap, const char *tag, int id, const xsd__base64Binary *a, const char *type)
{
#ifndef WITH_LEANER
	id = soap_attachment(soap, tag, id, a, (struct soap_array*)&a->__ptr, a->id, a->type, a->options, 1, type, SOAP_TYPE_xsd__base64Binary);
#else
	id = soap_element_id(soap, tag, id, a, (struct soap_array*)&a->__ptr, 1, type, SOAP_TYPE_xsd__base64Binary);
#endif
	if (id < 0)
		return soap->error;
	if (soap_element_begin_out(soap, tag, id, type))
		return soap->error;
	if (soap_putbase64(soap, a->__ptr, a->__size))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *xsd__base64Binary::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__base64Binary(soap, tag, this, type);
}

SOAP_FMAC3 xsd__base64Binary * SOAP_FMAC4 soap_in_xsd__base64Binary(struct soap *soap, const char *tag, xsd__base64Binary *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (*soap->type && soap_match_tag(soap, soap->type, type) && soap_match_tag(soap, soap->type, ":base64Binary") && soap_match_tag(soap, soap->type, ":base64"))
	{	soap->error = SOAP_TYPE;
		return NULL;
	}
	a = (xsd__base64Binary *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__base64Binary, sizeof(xsd__base64Binary), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
		a->soap_default(soap);
	if (soap->body && !*soap->href)
	{
		a->__ptr = soap_getbase64(soap, &a->__size, 0);
#ifndef WITH_LEANER
		if (soap_xop_forward(soap, &a->__ptr, &a->__size, &a->id, &a->type, &a->options))
			return NULL;
#endif
		if ((!a->__ptr && soap->error) || soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	
#ifndef WITH_LEANER
		if (*soap->href != '#')
		{	if (soap_dime_forward(soap, &a->__ptr, &a->__size, &a->id, &a->type, &a->options))
				return NULL;
		}
		else
#endif
			a = (xsd__base64Binary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_xsd__base64Binary, 0, sizeof(xsd__base64Binary), 0, soap_copy_xsd__base64Binary);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int xsd__base64Binary::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, (struct soap_array*)&this->__ptr, 1, tag, SOAP_TYPE_xsd__base64Binary);
	if (this->soap_out(soap, tag?tag:"xsd:base64Binary", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__base64Binary::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__base64Binary(soap, this, tag, type);
}

SOAP_FMAC3 xsd__base64Binary * SOAP_FMAC4 soap_get_xsd__base64Binary(struct soap *soap, xsd__base64Binary *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__base64Binary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__base64Binary * SOAP_FMAC2 soap_instantiate_xsd__base64Binary(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__base64Binary(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__base64Binary, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__base64Binary);
		if (size)
			*size = sizeof(xsd__base64Binary);
		((xsd__base64Binary*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__base64Binary, n);
		if (size)
			*size = n * sizeof(xsd__base64Binary);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__base64Binary*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__base64Binary*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__base64Binary(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__base64Binary %p -> %p\n", q, p));
	*(xsd__base64Binary*)p = *(xsd__base64Binary*)q;
}

void xsd__anyType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::__item = NULL;
	/* transient soap skipped */
}

void xsd__anyType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int xsd__anyType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_xsd__anyType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__anyType(struct soap *soap, const char *tag, int id, const xsd__anyType *a, const char *type)
{
	return soap_outliteral(soap, tag, &(a->xsd__anyType::__item), NULL);
}

void *xsd__anyType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_xsd__anyType(soap, tag, this, type);
}

SOAP_FMAC3 xsd__anyType * SOAP_FMAC4 soap_in_xsd__anyType(struct soap *soap, const char *tag, xsd__anyType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (xsd__anyType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__anyType, sizeof(xsd__anyType), soap->type, soap->arrayType)))
	{	soap->error = SOAP_TAG_MISMATCH;
		return NULL;
	}
	soap_revert(soap);
	*soap->id = '\0';
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_xsd__anyType)
			return (xsd__anyType *)a->soap_in(soap, tag, type);
	}
	if (!soap_inliteral(soap, tag, &(a->xsd__anyType::__item)))
		return NULL;
	return a;
}

int xsd__anyType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_xsd__anyType);
	if (this->soap_out(soap, tag?tag:"xsd:anyType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *xsd__anyType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_xsd__anyType(soap, this, tag, type);
}

SOAP_FMAC3 xsd__anyType * SOAP_FMAC4 soap_get_xsd__anyType(struct soap *soap, xsd__anyType *p, const char *tag, const char *type)
{
	if ((p = soap_in_xsd__anyType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 xsd__anyType * SOAP_FMAC2 soap_instantiate_xsd__anyType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__anyType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_xsd__anyType, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (type && !soap_match_tag(soap, type, "xsd:NCName"))
	{	cp->type = SOAP_TYPE_xsd__NCName_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__NCName_);
			if (size)
				*size = sizeof(xsd__NCName_);
			((xsd__NCName_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__NCName_, n);
			if (size)
				*size = n * sizeof(xsd__NCName_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__NCName_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__NCName_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:QName"))
	{	cp->type = SOAP_TYPE_xsd__QName;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__QName);
			if (size)
				*size = sizeof(xsd__QName);
			((xsd__QName*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__QName, n);
			if (size)
				*size = n * sizeof(xsd__QName);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__QName*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__QName*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:anySimpleType"))
	{	cp->type = SOAP_TYPE_xsd__anySimpleType_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__anySimpleType_);
			if (size)
				*size = sizeof(xsd__anySimpleType_);
			((xsd__anySimpleType_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__anySimpleType_, n);
			if (size)
				*size = n * sizeof(xsd__anySimpleType_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__anySimpleType_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__anySimpleType_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:anyURI"))
	{	cp->type = SOAP_TYPE_xsd__anyURI_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__anyURI_);
			if (size)
				*size = sizeof(xsd__anyURI_);
			((xsd__anyURI_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__anyURI_, n);
			if (size)
				*size = n * sizeof(xsd__anyURI_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__anyURI_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__anyURI_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:base64Binary"))
	{	cp->type = SOAP_TYPE_xsd__base64Binary_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__base64Binary_);
			if (size)
				*size = sizeof(xsd__base64Binary_);
			((xsd__base64Binary_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__base64Binary_, n);
			if (size)
				*size = n * sizeof(xsd__base64Binary_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__base64Binary_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__base64Binary_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:boolean"))
	{	cp->type = SOAP_TYPE_xsd__boolean;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__boolean);
			if (size)
				*size = sizeof(xsd__boolean);
			((xsd__boolean*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__boolean, n);
			if (size)
				*size = n * sizeof(xsd__boolean);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__boolean*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__boolean*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:dateTime"))
	{	cp->type = SOAP_TYPE_xsd__dateTime;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__dateTime);
			if (size)
				*size = sizeof(xsd__dateTime);
			((xsd__dateTime*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__dateTime, n);
			if (size)
				*size = n * sizeof(xsd__dateTime);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__dateTime*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__dateTime*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:duration"))
	{	cp->type = SOAP_TYPE_xsd__duration_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__duration_);
			if (size)
				*size = sizeof(xsd__duration_);
			((xsd__duration_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__duration_, n);
			if (size)
				*size = n * sizeof(xsd__duration_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__duration_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__duration_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:float"))
	{	cp->type = SOAP_TYPE_xsd__float;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__float);
			if (size)
				*size = sizeof(xsd__float);
			((xsd__float*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__float, n);
			if (size)
				*size = n * sizeof(xsd__float);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__float*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__float*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:hexBinary"))
	{	cp->type = SOAP_TYPE_xsd__hexBinary_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__hexBinary_);
			if (size)
				*size = sizeof(xsd__hexBinary_);
			((xsd__hexBinary_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__hexBinary_, n);
			if (size)
				*size = n * sizeof(xsd__hexBinary_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__hexBinary_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__hexBinary_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:int"))
	{	cp->type = SOAP_TYPE_xsd__int;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__int);
			if (size)
				*size = sizeof(xsd__int);
			((xsd__int*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__int, n);
			if (size)
				*size = n * sizeof(xsd__int);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__int*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__int*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:integer"))
	{	cp->type = SOAP_TYPE_xsd__integer_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__integer_);
			if (size)
				*size = sizeof(xsd__integer_);
			((xsd__integer_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__integer_, n);
			if (size)
				*size = n * sizeof(xsd__integer_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__integer_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__integer_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:nonNegativeInteger"))
	{	cp->type = SOAP_TYPE_xsd__nonNegativeInteger_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__nonNegativeInteger_);
			if (size)
				*size = sizeof(xsd__nonNegativeInteger_);
			((xsd__nonNegativeInteger_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__nonNegativeInteger_, n);
			if (size)
				*size = n * sizeof(xsd__nonNegativeInteger_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__nonNegativeInteger_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__nonNegativeInteger_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:string"))
	{	cp->type = SOAP_TYPE_xsd__string;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__string);
			if (size)
				*size = sizeof(xsd__string);
			((xsd__string*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__string, n);
			if (size)
				*size = n * sizeof(xsd__string);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__string*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__string*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "xsd:token"))
	{	cp->type = SOAP_TYPE_xsd__token_;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(xsd__token_);
			if (size)
				*size = sizeof(xsd__token_);
			((xsd__token_*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__token_, n);
			if (size)
				*size = n * sizeof(xsd__token_);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((xsd__token_*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (xsd__token_*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ReferenceToken"))
	{	cp->type = SOAP_TYPE_tt__ReferenceToken__;
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
	if (type && !soap_match_tag(soap, type, "tt:Name"))
	{	cp->type = SOAP_TYPE_tt__Name__;
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
	if (type && !soap_match_tag(soap, type, "tt:RotateMode"))
	{	cp->type = SOAP_TYPE_tt__RotateMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoEncoding"))
	{	cp->type = SOAP_TYPE_tt__VideoEncoding_;
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
	if (type && !soap_match_tag(soap, type, "tt:Mpeg4Profile"))
	{	cp->type = SOAP_TYPE_tt__Mpeg4Profile_;
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
	if (type && !soap_match_tag(soap, type, "tt:H264Profile"))
	{	cp->type = SOAP_TYPE_tt__H264Profile_;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioEncoding"))
	{	cp->type = SOAP_TYPE_tt__AudioEncoding_;
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
	if (type && !soap_match_tag(soap, type, "tt:StreamType"))
	{	cp->type = SOAP_TYPE_tt__StreamType_;
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
	if (type && !soap_match_tag(soap, type, "tt:TransportProtocol"))
	{	cp->type = SOAP_TYPE_tt__TransportProtocol_;
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
	if (type && !soap_match_tag(soap, type, "tt:ScopeDefinition"))
	{	cp->type = SOAP_TYPE_tt__ScopeDefinition_;
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
	if (type && !soap_match_tag(soap, type, "tt:DiscoveryMode"))
	{	cp->type = SOAP_TYPE_tt__DiscoveryMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceConfigPriority"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceConfigPriority__;
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
	if (type && !soap_match_tag(soap, type, "tt:Duplex"))
	{	cp->type = SOAP_TYPE_tt__Duplex_;
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
	if (type && !soap_match_tag(soap, type, "tt:IANA-IfTypes"))
	{	cp->type = SOAP_TYPE_tt__IANA_IfTypes__;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6DHCPConfiguration"))
	{	cp->type = SOAP_TYPE_tt__IPv6DHCPConfiguration_;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkProtocolType"))
	{	cp->type = SOAP_TYPE_tt__NetworkProtocolType_;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkHostType"))
	{	cp->type = SOAP_TYPE_tt__NetworkHostType_;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv4Address"))
	{	cp->type = SOAP_TYPE_tt__IPv4Address__;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6Address"))
	{	cp->type = SOAP_TYPE_tt__IPv6Address__;
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
	if (type && !soap_match_tag(soap, type, "tt:HwAddress"))
	{	cp->type = SOAP_TYPE_tt__HwAddress__;
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
	if (type && !soap_match_tag(soap, type, "tt:IPType"))
	{	cp->type = SOAP_TYPE_tt__IPType_;
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
	if (type && !soap_match_tag(soap, type, "tt:DNSName"))
	{	cp->type = SOAP_TYPE_tt__DNSName__;
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
	if (type && !soap_match_tag(soap, type, "tt:Domain"))
	{	cp->type = SOAP_TYPE_tt__Domain__;
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
	if (type && !soap_match_tag(soap, type, "tt:IPAddressFilterType"))
	{	cp->type = SOAP_TYPE_tt__IPAddressFilterType_;
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
	if (type && !soap_match_tag(soap, type, "tt:DynamicDNSType"))
	{	cp->type = SOAP_TYPE_tt__DynamicDNSType_;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11SSIDType"))
	{	cp->type = SOAP_TYPE_tt__Dot11SSIDType__;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11StationMode"))
	{	cp->type = SOAP_TYPE_tt__Dot11StationMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11SecurityMode"))
	{	cp->type = SOAP_TYPE_tt__Dot11SecurityMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11Cipher"))
	{	cp->type = SOAP_TYPE_tt__Dot11Cipher_;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11PSK"))
	{	cp->type = SOAP_TYPE_tt__Dot11PSK__;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11PSKPassphrase"))
	{	cp->type = SOAP_TYPE_tt__Dot11PSKPassphrase__;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11SignalStrength"))
	{	cp->type = SOAP_TYPE_tt__Dot11SignalStrength_;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11AuthAndMangementSuite"))
	{	cp->type = SOAP_TYPE_tt__Dot11AuthAndMangementSuite_;
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
	if (type && !soap_match_tag(soap, type, "tt:CapabilityCategory"))
	{	cp->type = SOAP_TYPE_tt__CapabilityCategory_;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemLogType"))
	{	cp->type = SOAP_TYPE_tt__SystemLogType_;
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
	if (type && !soap_match_tag(soap, type, "tt:FactoryDefaultType"))
	{	cp->type = SOAP_TYPE_tt__FactoryDefaultType_;
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
	if (type && !soap_match_tag(soap, type, "tt:SetDateTimeType"))
	{	cp->type = SOAP_TYPE_tt__SetDateTimeType_;
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
	if (type && !soap_match_tag(soap, type, "tt:UserLevel"))
	{	cp->type = SOAP_TYPE_tt__UserLevel_;
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
	if (type && !soap_match_tag(soap, type, "tt:RelayLogicalState"))
	{	cp->type = SOAP_TYPE_tt__RelayLogicalState_;
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
	if (type && !soap_match_tag(soap, type, "tt:RelayIdleState"))
	{	cp->type = SOAP_TYPE_tt__RelayIdleState_;
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
	if (type && !soap_match_tag(soap, type, "tt:RelayMode"))
	{	cp->type = SOAP_TYPE_tt__RelayMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:EFlipMode"))
	{	cp->type = SOAP_TYPE_tt__EFlipMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:ReverseMode"))
	{	cp->type = SOAP_TYPE_tt__ReverseMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:AuxiliaryData"))
	{	cp->type = SOAP_TYPE_tt__AuxiliaryData__;
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
	if (type && !soap_match_tag(soap, type, "tt:MoveStatus"))
	{	cp->type = SOAP_TYPE_tt__MoveStatus_;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourState"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourState_;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourDirection"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourDirection_;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourOperation"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourOperation_;
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
	if (type && !soap_match_tag(soap, type, "tt:AutoFocusMode"))
	{	cp->type = SOAP_TYPE_tt__AutoFocusMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:WideDynamicMode"))
	{	cp->type = SOAP_TYPE_tt__WideDynamicMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:BacklightCompensationMode"))
	{	cp->type = SOAP_TYPE_tt__BacklightCompensationMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:ExposurePriority"))
	{	cp->type = SOAP_TYPE_tt__ExposurePriority_;
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
	if (type && !soap_match_tag(soap, type, "tt:ExposureMode"))
	{	cp->type = SOAP_TYPE_tt__ExposureMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:Enabled"))
	{	cp->type = SOAP_TYPE_tt__Enabled_;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalanceMode"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalanceMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:IrCutFilterMode"))
	{	cp->type = SOAP_TYPE_tt__IrCutFilterMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:ImageStabilizationMode"))
	{	cp->type = SOAP_TYPE_tt__ImageStabilizationMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:TopicNamespaceLocation"))
	{	cp->type = SOAP_TYPE_tt__TopicNamespaceLocation__;
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
	if (type && !soap_match_tag(soap, type, "tt:PropertyOperation"))
	{	cp->type = SOAP_TYPE_tt__PropertyOperation_;
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
	if (type && !soap_match_tag(soap, type, "tt:Direction"))
	{	cp->type = SOAP_TYPE_tt__Direction_;
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
	if (type && !soap_match_tag(soap, type, "tt:ClassType"))
	{	cp->type = SOAP_TYPE_tt__ClassType_;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverMode"))
	{	cp->type = SOAP_TYPE_tt__ReceiverMode_;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverState"))
	{	cp->type = SOAP_TYPE_tt__ReceiverState_;
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
	if (type && !soap_match_tag(soap, type, "tt:Description"))
	{	cp->type = SOAP_TYPE_tt__Description__;
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
	if (type && !soap_match_tag(soap, type, "tt:XPathExpression"))
	{	cp->type = SOAP_TYPE_tt__XPathExpression__;
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
	if (type && !soap_match_tag(soap, type, "tt:SearchState"))
	{	cp->type = SOAP_TYPE_tt__SearchState_;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingStatus"))
	{	cp->type = SOAP_TYPE_tt__RecordingStatus_;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackType"))
	{	cp->type = SOAP_TYPE_tt__TrackType_;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobMode"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobMode__;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobState"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobState__;
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
	if (type && !soap_match_tag(soap, type, "tt:ModeOfOperation"))
	{	cp->type = SOAP_TYPE_tt__ModeOfOperation_;
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
	if (type && !soap_match_tag(soap, type, "wstop:FullTopicExpression"))
	{	cp->type = SOAP_TYPE_wstop__FullTopicExpression__;
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
	if (type && !soap_match_tag(soap, type, "wstop:ConcreteTopicExpression"))
	{	cp->type = SOAP_TYPE_wstop__ConcreteTopicExpression__;
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
	if (type && !soap_match_tag(soap, type, "wstop:SimpleTopicExpression"))
	{	cp->type = SOAP_TYPE_wstop__SimpleTopicExpression__;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverReference"))
	{	cp->type = SOAP_TYPE_tt__ReceiverReference__;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingReference"))
	{	cp->type = SOAP_TYPE_tt__RecordingReference__;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackReference"))
	{	cp->type = SOAP_TYPE_tt__TrackReference__;
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
	if (type && !soap_match_tag(soap, type, "tt:JobToken"))
	{	cp->type = SOAP_TYPE_tt__JobToken__;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobReference"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobReference__;
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
	if (type && !soap_match_tag(soap, type, "tds:Service"))
	{	cp->type = SOAP_TYPE_tds__Service;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__Service);
			if (size)
				*size = sizeof(tds__Service);
			((tds__Service*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__Service, n);
			if (size)
				*size = n * sizeof(tds__Service);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__Service*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__Service*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tds:DeviceServiceCapabilities"))
	{	cp->type = SOAP_TYPE_tds__DeviceServiceCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__DeviceServiceCapabilities);
			if (size)
				*size = sizeof(tds__DeviceServiceCapabilities);
			((tds__DeviceServiceCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__DeviceServiceCapabilities, n);
			if (size)
				*size = n * sizeof(tds__DeviceServiceCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__DeviceServiceCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__DeviceServiceCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tds:NetworkCapabilities"))
	{	cp->type = SOAP_TYPE_tds__NetworkCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__NetworkCapabilities);
			if (size)
				*size = sizeof(tds__NetworkCapabilities);
			((tds__NetworkCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__NetworkCapabilities, n);
			if (size)
				*size = n * sizeof(tds__NetworkCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__NetworkCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__NetworkCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tds:SecurityCapabilities"))
	{	cp->type = SOAP_TYPE_tds__SecurityCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__SecurityCapabilities);
			if (size)
				*size = sizeof(tds__SecurityCapabilities);
			((tds__SecurityCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__SecurityCapabilities, n);
			if (size)
				*size = n * sizeof(tds__SecurityCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__SecurityCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__SecurityCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tds:SystemCapabilities"))
	{	cp->type = SOAP_TYPE_tds__SystemCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__SystemCapabilities);
			if (size)
				*size = sizeof(tds__SystemCapabilities);
			((tds__SystemCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__SystemCapabilities, n);
			if (size)
				*size = n * sizeof(tds__SystemCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__SystemCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__SystemCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tds:MiscCapabilities"))
	{	cp->type = SOAP_TYPE_tds__MiscCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tds__MiscCapabilities);
			if (size)
				*size = sizeof(tds__MiscCapabilities);
			((tds__MiscCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tds__MiscCapabilities, n);
			if (size)
				*size = n * sizeof(tds__MiscCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tds__MiscCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tds__MiscCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:DeviceEntity"))
	{	cp->type = SOAP_TYPE_tt__DeviceEntity;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__DeviceEntity);
			if (size)
				*size = sizeof(tt__DeviceEntity);
			((tt__DeviceEntity*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DeviceEntity, n);
			if (size)
				*size = n * sizeof(tt__DeviceEntity);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__DeviceEntity*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__DeviceEntity*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:IntRectangle"))
	{	cp->type = SOAP_TYPE_tt__IntRectangle;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__IntRectangle);
			if (size)
				*size = sizeof(tt__IntRectangle);
			((tt__IntRectangle*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IntRectangle, n);
			if (size)
				*size = n * sizeof(tt__IntRectangle);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__IntRectangle*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__IntRectangle*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:IntRectangleRange"))
	{	cp->type = SOAP_TYPE_tt__IntRectangleRange;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__IntRectangleRange);
			if (size)
				*size = sizeof(tt__IntRectangleRange);
			((tt__IntRectangleRange*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IntRectangleRange, n);
			if (size)
				*size = n * sizeof(tt__IntRectangleRange);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__IntRectangleRange*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__IntRectangleRange*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:IntRange"))
	{	cp->type = SOAP_TYPE_tt__IntRange;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__IntRange);
			if (size)
				*size = sizeof(tt__IntRange);
			((tt__IntRange*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IntRange, n);
			if (size)
				*size = n * sizeof(tt__IntRange);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__IntRange*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__IntRange*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:FloatRange"))
	{	cp->type = SOAP_TYPE_tt__FloatRange;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__FloatRange);
			if (size)
				*size = sizeof(tt__FloatRange);
			((tt__FloatRange*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FloatRange, n);
			if (size)
				*size = n * sizeof(tt__FloatRange);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__FloatRange*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__FloatRange*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:DurationRange"))
	{	cp->type = SOAP_TYPE_tt__DurationRange;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__DurationRange);
			if (size)
				*size = sizeof(tt__DurationRange);
			((tt__DurationRange*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__DurationRange, n);
			if (size)
				*size = n * sizeof(tt__DurationRange);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__DurationRange*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__DurationRange*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:IntList"))
	{	cp->type = SOAP_TYPE_tt__IntList;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__IntList);
			if (size)
				*size = sizeof(tt__IntList);
			((tt__IntList*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__IntList, n);
			if (size)
				*size = n * sizeof(tt__IntList);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__IntList*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__IntList*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:FloatList"))
	{	cp->type = SOAP_TYPE_tt__FloatList;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__FloatList);
			if (size)
				*size = sizeof(tt__FloatList);
			((tt__FloatList*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__FloatList, n);
			if (size)
				*size = n * sizeof(tt__FloatList);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__FloatList*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__FloatList*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AnyHolder"))
	{	cp->type = SOAP_TYPE_tt__AnyHolder;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AnyHolder);
			if (size)
				*size = sizeof(tt__AnyHolder);
			((tt__AnyHolder*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnyHolder, n);
			if (size)
				*size = n * sizeof(tt__AnyHolder);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AnyHolder*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AnyHolder*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceExtension);
			if (size)
				*size = sizeof(tt__VideoSourceExtension);
			((tt__VideoSourceExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceExtension, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceExtension2"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceExtension2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceExtension2);
			if (size)
				*size = sizeof(tt__VideoSourceExtension2);
			((tt__VideoSourceExtension2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceExtension2, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceExtension2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceExtension2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceExtension2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:Profile"))
	{	cp->type = SOAP_TYPE_tt__Profile;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Profile);
			if (size)
				*size = sizeof(tt__Profile);
			((tt__Profile*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Profile, n);
			if (size)
				*size = n * sizeof(tt__Profile);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Profile*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Profile*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ProfileExtension"))
	{	cp->type = SOAP_TYPE_tt__ProfileExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__ProfileExtension);
			if (size)
				*size = sizeof(tt__ProfileExtension);
			((tt__ProfileExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ProfileExtension, n);
			if (size)
				*size = n * sizeof(tt__ProfileExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__ProfileExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__ProfileExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ProfileExtension2"))
	{	cp->type = SOAP_TYPE_tt__ProfileExtension2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__ProfileExtension2);
			if (size)
				*size = sizeof(tt__ProfileExtension2);
			((tt__ProfileExtension2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ProfileExtension2, n);
			if (size)
				*size = n * sizeof(tt__ProfileExtension2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__ProfileExtension2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__ProfileExtension2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ConfigurationEntity"))
	{	cp->type = SOAP_TYPE_tt__ConfigurationEntity;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__ConfigurationEntity);
			if (size)
				*size = sizeof(tt__ConfigurationEntity);
			((tt__ConfigurationEntity*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ConfigurationEntity, n);
			if (size)
				*size = n * sizeof(tt__ConfigurationEntity);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__ConfigurationEntity*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__ConfigurationEntity*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfigurationExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfigurationExtension);
			if (size)
				*size = sizeof(tt__VideoSourceConfigurationExtension);
			((tt__VideoSourceConfigurationExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfigurationExtension, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfigurationExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfigurationExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfigurationExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfigurationExtension2"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfigurationExtension2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfigurationExtension2);
			if (size)
				*size = sizeof(tt__VideoSourceConfigurationExtension2);
			((tt__VideoSourceConfigurationExtension2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfigurationExtension2, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfigurationExtension2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfigurationExtension2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfigurationExtension2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:Rotate"))
	{	cp->type = SOAP_TYPE_tt__Rotate;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Rotate);
			if (size)
				*size = sizeof(tt__Rotate);
			((tt__Rotate*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Rotate, n);
			if (size)
				*size = n * sizeof(tt__Rotate);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Rotate*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Rotate*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:RotateExtension"))
	{	cp->type = SOAP_TYPE_tt__RotateExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__RotateExtension);
			if (size)
				*size = sizeof(tt__RotateExtension);
			((tt__RotateExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RotateExtension, n);
			if (size)
				*size = n * sizeof(tt__RotateExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__RotateExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__RotateExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfigurationOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfigurationOptions);
			if (size)
				*size = sizeof(tt__VideoSourceConfigurationOptions);
			((tt__VideoSourceConfigurationOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfigurationOptions, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfigurationOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfigurationOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfigurationOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfigurationOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfigurationOptionsExtension);
			if (size)
				*size = sizeof(tt__VideoSourceConfigurationOptionsExtension);
			((tt__VideoSourceConfigurationOptionsExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfigurationOptionsExtension, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfigurationOptionsExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfigurationOptionsExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfigurationOptionsExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfigurationOptionsExtension2"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfigurationOptionsExtension2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfigurationOptionsExtension2);
			if (size)
				*size = sizeof(tt__VideoSourceConfigurationOptionsExtension2);
			((tt__VideoSourceConfigurationOptionsExtension2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfigurationOptionsExtension2, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfigurationOptionsExtension2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfigurationOptionsExtension2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfigurationOptionsExtension2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:RotateOptions"))
	{	cp->type = SOAP_TYPE_tt__RotateOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__RotateOptions);
			if (size)
				*size = sizeof(tt__RotateOptions);
			((tt__RotateOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RotateOptions, n);
			if (size)
				*size = n * sizeof(tt__RotateOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__RotateOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__RotateOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:RotateOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__RotateOptionsExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__RotateOptionsExtension);
			if (size)
				*size = sizeof(tt__RotateOptionsExtension);
			((tt__RotateOptionsExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__RotateOptionsExtension, n);
			if (size)
				*size = n * sizeof(tt__RotateOptionsExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__RotateOptionsExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__RotateOptionsExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoResolution"))
	{	cp->type = SOAP_TYPE_tt__VideoResolution;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoResolution);
			if (size)
				*size = sizeof(tt__VideoResolution);
			((tt__VideoResolution*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoResolution, n);
			if (size)
				*size = n * sizeof(tt__VideoResolution);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoResolution*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoResolution*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoRateControl"))
	{	cp->type = SOAP_TYPE_tt__VideoRateControl;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoRateControl);
			if (size)
				*size = sizeof(tt__VideoRateControl);
			((tt__VideoRateControl*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoRateControl, n);
			if (size)
				*size = n * sizeof(tt__VideoRateControl);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoRateControl*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoRateControl*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:Mpeg4Configuration"))
	{	cp->type = SOAP_TYPE_tt__Mpeg4Configuration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Mpeg4Configuration);
			if (size)
				*size = sizeof(tt__Mpeg4Configuration);
			((tt__Mpeg4Configuration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Mpeg4Configuration, n);
			if (size)
				*size = n * sizeof(tt__Mpeg4Configuration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Mpeg4Configuration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Mpeg4Configuration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:H264Configuration"))
	{	cp->type = SOAP_TYPE_tt__H264Configuration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__H264Configuration);
			if (size)
				*size = sizeof(tt__H264Configuration);
			((tt__H264Configuration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__H264Configuration, n);
			if (size)
				*size = n * sizeof(tt__H264Configuration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__H264Configuration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__H264Configuration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoEncoderConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__VideoEncoderConfigurationOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoEncoderConfigurationOptions);
			if (size)
				*size = sizeof(tt__VideoEncoderConfigurationOptions);
			((tt__VideoEncoderConfigurationOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoEncoderConfigurationOptions, n);
			if (size)
				*size = n * sizeof(tt__VideoEncoderConfigurationOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoEncoderConfigurationOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoEncoderConfigurationOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoEncoderOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoEncoderOptionsExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoEncoderOptionsExtension);
			if (size)
				*size = sizeof(tt__VideoEncoderOptionsExtension);
			((tt__VideoEncoderOptionsExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoEncoderOptionsExtension, n);
			if (size)
				*size = n * sizeof(tt__VideoEncoderOptionsExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoEncoderOptionsExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoEncoderOptionsExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoEncoderOptionsExtension2"))
	{	cp->type = SOAP_TYPE_tt__VideoEncoderOptionsExtension2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoEncoderOptionsExtension2);
			if (size)
				*size = sizeof(tt__VideoEncoderOptionsExtension2);
			((tt__VideoEncoderOptionsExtension2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoEncoderOptionsExtension2, n);
			if (size)
				*size = n * sizeof(tt__VideoEncoderOptionsExtension2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoEncoderOptionsExtension2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoEncoderOptionsExtension2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:JpegOptions"))
	{	cp->type = SOAP_TYPE_tt__JpegOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__JpegOptions);
			if (size)
				*size = sizeof(tt__JpegOptions);
			((tt__JpegOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__JpegOptions, n);
			if (size)
				*size = n * sizeof(tt__JpegOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__JpegOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__JpegOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:Mpeg4Options"))
	{	cp->type = SOAP_TYPE_tt__Mpeg4Options;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Mpeg4Options);
			if (size)
				*size = sizeof(tt__Mpeg4Options);
			((tt__Mpeg4Options*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Mpeg4Options, n);
			if (size)
				*size = n * sizeof(tt__Mpeg4Options);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Mpeg4Options*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Mpeg4Options*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:H264Options"))
	{	cp->type = SOAP_TYPE_tt__H264Options;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__H264Options);
			if (size)
				*size = sizeof(tt__H264Options);
			((tt__H264Options*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__H264Options, n);
			if (size)
				*size = n * sizeof(tt__H264Options);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__H264Options*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__H264Options*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioSourceConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__AudioSourceConfigurationOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioSourceConfigurationOptions);
			if (size)
				*size = sizeof(tt__AudioSourceConfigurationOptions);
			((tt__AudioSourceConfigurationOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioSourceConfigurationOptions, n);
			if (size)
				*size = n * sizeof(tt__AudioSourceConfigurationOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioSourceConfigurationOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioSourceConfigurationOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioSourceOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__AudioSourceOptionsExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioSourceOptionsExtension);
			if (size)
				*size = sizeof(tt__AudioSourceOptionsExtension);
			((tt__AudioSourceOptionsExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioSourceOptionsExtension, n);
			if (size)
				*size = n * sizeof(tt__AudioSourceOptionsExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioSourceOptionsExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioSourceOptionsExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioEncoderConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__AudioEncoderConfigurationOptions;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioEncoderConfigurationOptions);
			if (size)
				*size = sizeof(tt__AudioEncoderConfigurationOptions);
			((tt__AudioEncoderConfigurationOptions*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioEncoderConfigurationOptions, n);
			if (size)
				*size = n * sizeof(tt__AudioEncoderConfigurationOptions);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioEncoderConfigurationOptions*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioEncoderConfigurationOptions*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioEncoderConfigurationOption"))
	{	cp->type = SOAP_TYPE_tt__AudioEncoderConfigurationOption;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioEncoderConfigurationOption);
			if (size)
				*size = sizeof(tt__AudioEncoderConfigurationOption);
			((tt__AudioEncoderConfigurationOption*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioEncoderConfigurationOption, n);
			if (size)
				*size = n * sizeof(tt__AudioEncoderConfigurationOption);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioEncoderConfigurationOption*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioEncoderConfigurationOption*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:MetadataConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__MetadataConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZFilter"))
	{	cp->type = SOAP_TYPE_tt__PTZFilter;
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
	if (type && !soap_match_tag(soap, type, "tt:EventSubscription"))
	{	cp->type = SOAP_TYPE_tt__EventSubscription;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__MetadataConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZStatusFilterOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZStatusFilterOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZStatusFilterOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZStatusFilterOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoOutputExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoOutputExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoOutputConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__VideoOutputConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoDecoderConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__VideoDecoderConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:H264DecOptions"))
	{	cp->type = SOAP_TYPE_tt__H264DecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:JpegDecOptions"))
	{	cp->type = SOAP_TYPE_tt__JpegDecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:Mpeg4DecOptions"))
	{	cp->type = SOAP_TYPE_tt__Mpeg4DecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoDecoderConfigurationOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoDecoderConfigurationOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioOutputConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__AudioOutputConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioDecoderConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__AudioDecoderConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:G711DecOptions"))
	{	cp->type = SOAP_TYPE_tt__G711DecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:AACDecOptions"))
	{	cp->type = SOAP_TYPE_tt__AACDecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:G726DecOptions"))
	{	cp->type = SOAP_TYPE_tt__G726DecOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioDecoderConfigurationOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__AudioDecoderConfigurationOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:MulticastConfiguration"))
	{	cp->type = SOAP_TYPE_tt__MulticastConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:StreamSetup"))
	{	cp->type = SOAP_TYPE_tt__StreamSetup;
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
	if (type && !soap_match_tag(soap, type, "tt:Transport"))
	{	cp->type = SOAP_TYPE_tt__Transport;
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
	if (type && !soap_match_tag(soap, type, "tt:MediaUri"))
	{	cp->type = SOAP_TYPE_tt__MediaUri;
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
	if (type && !soap_match_tag(soap, type, "tt:Scope"))
	{	cp->type = SOAP_TYPE_tt__Scope;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot3Configuration"))
	{	cp->type = SOAP_TYPE_tt__Dot3Configuration;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceExtension2"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceLink"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceLink;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceConnectionSetting"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceConnectionSetting;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceInfo"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceInfo;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6NetworkInterface"))
	{	cp->type = SOAP_TYPE_tt__IPv6NetworkInterface;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv4NetworkInterface"))
	{	cp->type = SOAP_TYPE_tt__IPv4NetworkInterface;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv4Configuration"))
	{	cp->type = SOAP_TYPE_tt__IPv4Configuration;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6Configuration"))
	{	cp->type = SOAP_TYPE_tt__IPv6Configuration;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6ConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__IPv6ConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkProtocol"))
	{	cp->type = SOAP_TYPE_tt__NetworkProtocol;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkProtocolExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkProtocolExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkHost"))
	{	cp->type = SOAP_TYPE_tt__NetworkHost;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkHostExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkHostExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:IPAddress"))
	{	cp->type = SOAP_TYPE_tt__IPAddress;
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
	if (type && !soap_match_tag(soap, type, "tt:PrefixedIPv4Address"))
	{	cp->type = SOAP_TYPE_tt__PrefixedIPv4Address;
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
	if (type && !soap_match_tag(soap, type, "tt:PrefixedIPv6Address"))
	{	cp->type = SOAP_TYPE_tt__PrefixedIPv6Address;
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
	if (type && !soap_match_tag(soap, type, "tt:HostnameInformation"))
	{	cp->type = SOAP_TYPE_tt__HostnameInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:HostnameInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__HostnameInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:DNSInformation"))
	{	cp->type = SOAP_TYPE_tt__DNSInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:DNSInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__DNSInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NTPInformation"))
	{	cp->type = SOAP_TYPE_tt__NTPInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:NTPInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__NTPInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:DynamicDNSInformation"))
	{	cp->type = SOAP_TYPE_tt__DynamicDNSInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:DynamicDNSInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__DynamicDNSInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceSetConfiguration"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceSetConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceSetConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv6NetworkInterfaceSetConfiguration"))
	{	cp->type = SOAP_TYPE_tt__IPv6NetworkInterfaceSetConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:IPv4NetworkInterfaceSetConfiguration"))
	{	cp->type = SOAP_TYPE_tt__IPv4NetworkInterfaceSetConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkGateway"))
	{	cp->type = SOAP_TYPE_tt__NetworkGateway;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkZeroConfiguration"))
	{	cp->type = SOAP_TYPE_tt__NetworkZeroConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkZeroConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkZeroConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkZeroConfigurationExtension2"))
	{	cp->type = SOAP_TYPE_tt__NetworkZeroConfigurationExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:IPAddressFilter"))
	{	cp->type = SOAP_TYPE_tt__IPAddressFilter;
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
	if (type && !soap_match_tag(soap, type, "tt:IPAddressFilterExtension"))
	{	cp->type = SOAP_TYPE_tt__IPAddressFilterExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11Configuration"))
	{	cp->type = SOAP_TYPE_tt__Dot11Configuration;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11SecurityConfiguration"))
	{	cp->type = SOAP_TYPE_tt__Dot11SecurityConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11SecurityConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__Dot11SecurityConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11PSKSet"))
	{	cp->type = SOAP_TYPE_tt__Dot11PSKSet;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11PSKSetExtension"))
	{	cp->type = SOAP_TYPE_tt__Dot11PSKSetExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterfaceSetConfigurationExtension2"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterfaceSetConfigurationExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11Capabilities"))
	{	cp->type = SOAP_TYPE_tt__Dot11Capabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11Status"))
	{	cp->type = SOAP_TYPE_tt__Dot11Status;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11AvailableNetworks"))
	{	cp->type = SOAP_TYPE_tt__Dot11AvailableNetworks;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot11AvailableNetworksExtension"))
	{	cp->type = SOAP_TYPE_tt__Dot11AvailableNetworksExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Capabilities"))
	{	cp->type = SOAP_TYPE_tt__Capabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:CapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__CapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:CapabilitiesExtension2"))
	{	cp->type = SOAP_TYPE_tt__CapabilitiesExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsCapabilities"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:DeviceCapabilities"))
	{	cp->type = SOAP_TYPE_tt__DeviceCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:DeviceCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__DeviceCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EventCapabilities"))
	{	cp->type = SOAP_TYPE_tt__EventCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:IOCapabilities"))
	{	cp->type = SOAP_TYPE_tt__IOCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:IOCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__IOCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:IOCapabilitiesExtension2"))
	{	cp->type = SOAP_TYPE_tt__IOCapabilitiesExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:MediaCapabilities"))
	{	cp->type = SOAP_TYPE_tt__MediaCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:MediaCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__MediaCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RealTimeStreamingCapabilities"))
	{	cp->type = SOAP_TYPE_tt__RealTimeStreamingCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:RealTimeStreamingCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ProfileCapabilities"))
	{	cp->type = SOAP_TYPE_tt__ProfileCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkCapabilities"))
	{	cp->type = SOAP_TYPE_tt__NetworkCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__NetworkCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkCapabilitiesExtension2"))
	{	cp->type = SOAP_TYPE_tt__NetworkCapabilitiesExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:SecurityCapabilities"))
	{	cp->type = SOAP_TYPE_tt__SecurityCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:SecurityCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__SecurityCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SecurityCapabilitiesExtension2"))
	{	cp->type = SOAP_TYPE_tt__SecurityCapabilitiesExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemCapabilities"))
	{	cp->type = SOAP_TYPE_tt__SystemCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemCapabilitiesExtension"))
	{	cp->type = SOAP_TYPE_tt__SystemCapabilitiesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemCapabilitiesExtension2"))
	{	cp->type = SOAP_TYPE_tt__SystemCapabilitiesExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:OnvifVersion"))
	{	cp->type = SOAP_TYPE_tt__OnvifVersion;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingCapabilities"))
	{	cp->type = SOAP_TYPE_tt__ImagingCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZCapabilities"))
	{	cp->type = SOAP_TYPE_tt__PTZCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:DeviceIOCapabilities"))
	{	cp->type = SOAP_TYPE_tt__DeviceIOCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:DisplayCapabilities"))
	{	cp->type = SOAP_TYPE_tt__DisplayCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingCapabilities"))
	{	cp->type = SOAP_TYPE_tt__RecordingCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:SearchCapabilities"))
	{	cp->type = SOAP_TYPE_tt__SearchCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:ReplayCapabilities"))
	{	cp->type = SOAP_TYPE_tt__ReplayCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverCapabilities"))
	{	cp->type = SOAP_TYPE_tt__ReceiverCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsDeviceCapabilities"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsDeviceCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsDeviceExtension"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsDeviceExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemLog"))
	{	cp->type = SOAP_TYPE_tt__SystemLog;
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
	if (type && !soap_match_tag(soap, type, "tt:SupportInformation"))
	{	cp->type = SOAP_TYPE_tt__SupportInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:BinaryData"))
	{	cp->type = SOAP_TYPE_tt__BinaryData;
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
	if (type && !soap_match_tag(soap, type, "tt:AttachmentData"))
	{	cp->type = SOAP_TYPE_tt__AttachmentData;
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
	if (type && !soap_match_tag(soap, type, "tt:BackupFile"))
	{	cp->type = SOAP_TYPE_tt__BackupFile;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemLogUriList"))
	{	cp->type = SOAP_TYPE_tt__SystemLogUriList;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemLogUri"))
	{	cp->type = SOAP_TYPE_tt__SystemLogUri;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemDateTime"))
	{	cp->type = SOAP_TYPE_tt__SystemDateTime;
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
	if (type && !soap_match_tag(soap, type, "tt:SystemDateTimeExtension"))
	{	cp->type = SOAP_TYPE_tt__SystemDateTimeExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:DateTime"))
	{	cp->type = SOAP_TYPE_tt__DateTime;
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
	if (type && !soap_match_tag(soap, type, "tt:Date"))
	{	cp->type = SOAP_TYPE_tt__Date;
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
	if (type && !soap_match_tag(soap, type, "tt:Time"))
	{	cp->type = SOAP_TYPE_tt__Time;
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
	if (type && !soap_match_tag(soap, type, "tt:TimeZone"))
	{	cp->type = SOAP_TYPE_tt__TimeZone;
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
	if (type && !soap_match_tag(soap, type, "tt:RemoteUser"))
	{	cp->type = SOAP_TYPE_tt__RemoteUser;
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
	if (type && !soap_match_tag(soap, type, "tt:User"))
	{	cp->type = SOAP_TYPE_tt__User;
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
	if (type && !soap_match_tag(soap, type, "tt:UserExtension"))
	{	cp->type = SOAP_TYPE_tt__UserExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateGenerationParameters"))
	{	cp->type = SOAP_TYPE_tt__CertificateGenerationParameters;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateGenerationParametersExtension"))
	{	cp->type = SOAP_TYPE_tt__CertificateGenerationParametersExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Certificate"))
	{	cp->type = SOAP_TYPE_tt__Certificate;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateStatus"))
	{	cp->type = SOAP_TYPE_tt__CertificateStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateWithPrivateKey"))
	{	cp->type = SOAP_TYPE_tt__CertificateWithPrivateKey;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateInformation"))
	{	cp->type = SOAP_TYPE_tt__CertificateInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__CertificateInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot1XConfiguration"))
	{	cp->type = SOAP_TYPE_tt__Dot1XConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:Dot1XConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__Dot1XConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EAPMethodConfiguration"))
	{	cp->type = SOAP_TYPE_tt__EAPMethodConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:EapMethodExtension"))
	{	cp->type = SOAP_TYPE_tt__EapMethodExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:TLSConfiguration"))
	{	cp->type = SOAP_TYPE_tt__TLSConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:GenericEapPwdConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__GenericEapPwdConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RelayOutputSettings"))
	{	cp->type = SOAP_TYPE_tt__RelayOutputSettings;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZNodeExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZNodeExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZNodeExtension2"))
	{	cp->type = SOAP_TYPE_tt__PTZNodeExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourSupported"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourSupported;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourSupportedExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourSupportedExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZConfigurationExtension2"))
	{	cp->type = SOAP_TYPE_tt__PTZConfigurationExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:PTControlDirection"))
	{	cp->type = SOAP_TYPE_tt__PTControlDirection;
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
	if (type && !soap_match_tag(soap, type, "tt:PTControlDirectionExtension"))
	{	cp->type = SOAP_TYPE_tt__PTControlDirectionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EFlip"))
	{	cp->type = SOAP_TYPE_tt__EFlip;
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
	if (type && !soap_match_tag(soap, type, "tt:Reverse"))
	{	cp->type = SOAP_TYPE_tt__Reverse;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZConfigurationOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZConfigurationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZConfigurationOptions2"))
	{	cp->type = SOAP_TYPE_tt__PTZConfigurationOptions2;
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
	if (type && !soap_match_tag(soap, type, "tt:PTControlDirectionOptions"))
	{	cp->type = SOAP_TYPE_tt__PTControlDirectionOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTControlDirectionOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__PTControlDirectionOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EFlipOptions"))
	{	cp->type = SOAP_TYPE_tt__EFlipOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:EFlipOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__EFlipOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ReverseOptions"))
	{	cp->type = SOAP_TYPE_tt__ReverseOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:ReverseOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__ReverseOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PanTiltLimits"))
	{	cp->type = SOAP_TYPE_tt__PanTiltLimits;
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
	if (type && !soap_match_tag(soap, type, "tt:ZoomLimits"))
	{	cp->type = SOAP_TYPE_tt__ZoomLimits;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZSpaces"))
	{	cp->type = SOAP_TYPE_tt__PTZSpaces;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZSpacesExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZSpacesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Space2DDescription"))
	{	cp->type = SOAP_TYPE_tt__Space2DDescription;
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
	if (type && !soap_match_tag(soap, type, "tt:Space1DDescription"))
	{	cp->type = SOAP_TYPE_tt__Space1DDescription;
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
	if (type && !soap_match_tag(soap, type, "tt:Vector2D"))
	{	cp->type = SOAP_TYPE_tt__Vector2D;
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
	if (type && !soap_match_tag(soap, type, "tt:Vector1D"))
	{	cp->type = SOAP_TYPE_tt__Vector1D;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZVector"))
	{	cp->type = SOAP_TYPE_tt__PTZVector;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZSpeed"))
	{	cp->type = SOAP_TYPE_tt__PTZSpeed;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZStatus"))
	{	cp->type = SOAP_TYPE_tt__PTZStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPreset"))
	{	cp->type = SOAP_TYPE_tt__PTZPreset;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZMoveStatus"))
	{	cp->type = SOAP_TYPE_tt__PTZMoveStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:PresetTour"))
	{	cp->type = SOAP_TYPE_tt__PresetTour;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourSpot"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourSpot;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourSpotExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourSpotExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourPresetDetail"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourPresetDetail;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourTypeExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourTypeExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStatus"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStatusExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStatusExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStartingCondition"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStartingCondition;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStartingConditionExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStartingConditionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourSpotOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourSpotOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourPresetDetailOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourPresetDetailOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourPresetDetailOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourPresetDetailOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStartingConditionOptions"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStartingConditionOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPresetTourStartingConditionOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZPresetTourStartingConditionOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingStatus"))
	{	cp->type = SOAP_TYPE_tt__ImagingStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusStatus"))
	{	cp->type = SOAP_TYPE_tt__FocusStatus;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusConfiguration"))
	{	cp->type = SOAP_TYPE_tt__FocusConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingSettings"))
	{	cp->type = SOAP_TYPE_tt__ImagingSettings;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingSettingsExtension"))
	{	cp->type = SOAP_TYPE_tt__ImagingSettingsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Exposure"))
	{	cp->type = SOAP_TYPE_tt__Exposure;
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
	if (type && !soap_match_tag(soap, type, "tt:WideDynamicRange"))
	{	cp->type = SOAP_TYPE_tt__WideDynamicRange;
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
	if (type && !soap_match_tag(soap, type, "tt:BacklightCompensation"))
	{	cp->type = SOAP_TYPE_tt__BacklightCompensation;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingOptions"))
	{	cp->type = SOAP_TYPE_tt__ImagingOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:WideDynamicRangeOptions"))
	{	cp->type = SOAP_TYPE_tt__WideDynamicRangeOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:BacklightCompensationOptions"))
	{	cp->type = SOAP_TYPE_tt__BacklightCompensationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusOptions"))
	{	cp->type = SOAP_TYPE_tt__FocusOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:ExposureOptions"))
	{	cp->type = SOAP_TYPE_tt__ExposureOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalanceOptions"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalanceOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusMove"))
	{	cp->type = SOAP_TYPE_tt__FocusMove;
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
	if (type && !soap_match_tag(soap, type, "tt:AbsoluteFocus"))
	{	cp->type = SOAP_TYPE_tt__AbsoluteFocus;
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
	if (type && !soap_match_tag(soap, type, "tt:RelativeFocus"))
	{	cp->type = SOAP_TYPE_tt__RelativeFocus;
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
	if (type && !soap_match_tag(soap, type, "tt:ContinuousFocus"))
	{	cp->type = SOAP_TYPE_tt__ContinuousFocus;
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
	if (type && !soap_match_tag(soap, type, "tt:MoveOptions"))
	{	cp->type = SOAP_TYPE_tt__MoveOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:AbsoluteFocusOptions"))
	{	cp->type = SOAP_TYPE_tt__AbsoluteFocusOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:RelativeFocusOptions"))
	{	cp->type = SOAP_TYPE_tt__RelativeFocusOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:ContinuousFocusOptions"))
	{	cp->type = SOAP_TYPE_tt__ContinuousFocusOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalance"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalance;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingStatus20"))
	{	cp->type = SOAP_TYPE_tt__ImagingStatus20;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingStatus20Extension"))
	{	cp->type = SOAP_TYPE_tt__ImagingStatus20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusStatus20"))
	{	cp->type = SOAP_TYPE_tt__FocusStatus20;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusStatus20Extension"))
	{	cp->type = SOAP_TYPE_tt__FocusStatus20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingSettings20"))
	{	cp->type = SOAP_TYPE_tt__ImagingSettings20;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingSettingsExtension20"))
	{	cp->type = SOAP_TYPE_tt__ImagingSettingsExtension20;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingSettingsExtension202"))
	{	cp->type = SOAP_TYPE_tt__ImagingSettingsExtension202;
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
	if (type && !soap_match_tag(soap, type, "tt:ImageStabilization"))
	{	cp->type = SOAP_TYPE_tt__ImageStabilization;
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
	if (type && !soap_match_tag(soap, type, "tt:ImageStabilizationExtension"))
	{	cp->type = SOAP_TYPE_tt__ImageStabilizationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:WideDynamicRange20"))
	{	cp->type = SOAP_TYPE_tt__WideDynamicRange20;
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
	if (type && !soap_match_tag(soap, type, "tt:BacklightCompensation20"))
	{	cp->type = SOAP_TYPE_tt__BacklightCompensation20;
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
	if (type && !soap_match_tag(soap, type, "tt:Exposure20"))
	{	cp->type = SOAP_TYPE_tt__Exposure20;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingOptions20"))
	{	cp->type = SOAP_TYPE_tt__ImagingOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingOptions20Extension"))
	{	cp->type = SOAP_TYPE_tt__ImagingOptions20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:ImagingOptions20Extension2"))
	{	cp->type = SOAP_TYPE_tt__ImagingOptions20Extension2;
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
	if (type && !soap_match_tag(soap, type, "tt:ImageStabilizationOptions"))
	{	cp->type = SOAP_TYPE_tt__ImageStabilizationOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:ImageStabilizationOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__ImageStabilizationOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:WideDynamicRangeOptions20"))
	{	cp->type = SOAP_TYPE_tt__WideDynamicRangeOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:BacklightCompensationOptions20"))
	{	cp->type = SOAP_TYPE_tt__BacklightCompensationOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:ExposureOptions20"))
	{	cp->type = SOAP_TYPE_tt__ExposureOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:MoveOptions20"))
	{	cp->type = SOAP_TYPE_tt__MoveOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:RelativeFocusOptions20"))
	{	cp->type = SOAP_TYPE_tt__RelativeFocusOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalance20"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalance20;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalance20Extension"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalance20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusConfiguration20"))
	{	cp->type = SOAP_TYPE_tt__FocusConfiguration20;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusConfiguration20Extension"))
	{	cp->type = SOAP_TYPE_tt__FocusConfiguration20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalanceOptions20"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalanceOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:WhiteBalanceOptions20Extension"))
	{	cp->type = SOAP_TYPE_tt__WhiteBalanceOptions20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusOptions20"))
	{	cp->type = SOAP_TYPE_tt__FocusOptions20;
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
	if (type && !soap_match_tag(soap, type, "tt:FocusOptions20Extension"))
	{	cp->type = SOAP_TYPE_tt__FocusOptions20Extension;
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
	if (type && !soap_match_tag(soap, type, "tt:MessageExtension"))
	{	cp->type = SOAP_TYPE_tt__MessageExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ItemList"))
	{	cp->type = SOAP_TYPE_tt__ItemList;
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
	if (type && !soap_match_tag(soap, type, "tt:ItemListExtension"))
	{	cp->type = SOAP_TYPE_tt__ItemListExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:MessageDescription"))
	{	cp->type = SOAP_TYPE_tt__MessageDescription;
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
	if (type && !soap_match_tag(soap, type, "tt:MessageDescriptionExtension"))
	{	cp->type = SOAP_TYPE_tt__MessageDescriptionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ItemListDescription"))
	{	cp->type = SOAP_TYPE_tt__ItemListDescription;
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
	if (type && !soap_match_tag(soap, type, "tt:ItemListDescriptionExtension"))
	{	cp->type = SOAP_TYPE_tt__ItemListDescriptionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Vector"))
	{	cp->type = SOAP_TYPE_tt__Vector;
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
	if (type && !soap_match_tag(soap, type, "tt:Rectangle"))
	{	cp->type = SOAP_TYPE_tt__Rectangle;
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
	if (type && !soap_match_tag(soap, type, "tt:Polygon"))
	{	cp->type = SOAP_TYPE_tt__Polygon;
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
	if (type && !soap_match_tag(soap, type, "tt:Polyline"))
	{	cp->type = SOAP_TYPE_tt__Polyline;
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
	if (type && !soap_match_tag(soap, type, "tt:Color"))
	{	cp->type = SOAP_TYPE_tt__Color;
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
	if (type && !soap_match_tag(soap, type, "tt:ColorCovariance"))
	{	cp->type = SOAP_TYPE_tt__ColorCovariance;
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
	if (type && !soap_match_tag(soap, type, "tt:Appearance"))
	{	cp->type = SOAP_TYPE_tt__Appearance;
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
	if (type && !soap_match_tag(soap, type, "tt:AppearanceExtension"))
	{	cp->type = SOAP_TYPE_tt__AppearanceExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ShapeDescriptor"))
	{	cp->type = SOAP_TYPE_tt__ShapeDescriptor;
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
	if (type && !soap_match_tag(soap, type, "tt:ShapeDescriptorExtension"))
	{	cp->type = SOAP_TYPE_tt__ShapeDescriptorExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ColorDescriptor"))
	{	cp->type = SOAP_TYPE_tt__ColorDescriptor;
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
	if (type && !soap_match_tag(soap, type, "tt:ColorDescriptorExtension"))
	{	cp->type = SOAP_TYPE_tt__ColorDescriptorExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ClassDescriptor"))
	{	cp->type = SOAP_TYPE_tt__ClassDescriptor;
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
	if (type && !soap_match_tag(soap, type, "tt:ClassDescriptorExtension"))
	{	cp->type = SOAP_TYPE_tt__ClassDescriptorExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ClassDescriptorExtension2"))
	{	cp->type = SOAP_TYPE_tt__ClassDescriptorExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:OtherType"))
	{	cp->type = SOAP_TYPE_tt__OtherType;
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
	if (type && !soap_match_tag(soap, type, "tt:ObjectExtension"))
	{	cp->type = SOAP_TYPE_tt__ObjectExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Transformation"))
	{	cp->type = SOAP_TYPE_tt__Transformation;
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
	if (type && !soap_match_tag(soap, type, "tt:TransformationExtension"))
	{	cp->type = SOAP_TYPE_tt__TransformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Frame"))
	{	cp->type = SOAP_TYPE_tt__Frame;
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
	if (type && !soap_match_tag(soap, type, "tt:FrameExtension"))
	{	cp->type = SOAP_TYPE_tt__FrameExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:FrameExtension2"))
	{	cp->type = SOAP_TYPE_tt__FrameExtension2;
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
	if (type && !soap_match_tag(soap, type, "tt:Merge"))
	{	cp->type = SOAP_TYPE_tt__Merge;
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
	if (type && !soap_match_tag(soap, type, "tt:Split"))
	{	cp->type = SOAP_TYPE_tt__Split;
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
	if (type && !soap_match_tag(soap, type, "tt:Rename"))
	{	cp->type = SOAP_TYPE_tt__Rename;
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
	if (type && !soap_match_tag(soap, type, "tt:ObjectId"))
	{	cp->type = SOAP_TYPE_tt__ObjectId;
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
	if (type && !soap_match_tag(soap, type, "tt:Behaviour"))
	{	cp->type = SOAP_TYPE_tt__Behaviour;
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
	if (type && !soap_match_tag(soap, type, "tt:BehaviourExtension"))
	{	cp->type = SOAP_TYPE_tt__BehaviourExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:ObjectTree"))
	{	cp->type = SOAP_TYPE_tt__ObjectTree;
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
	if (type && !soap_match_tag(soap, type, "tt:ObjectTreeExtension"))
	{	cp->type = SOAP_TYPE_tt__ObjectTreeExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:MotionInCells"))
	{	cp->type = SOAP_TYPE_tt__MotionInCells;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RuleEngineConfiguration"))
	{	cp->type = SOAP_TYPE_tt__RuleEngineConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:RuleEngineConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__RuleEngineConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Config"))
	{	cp->type = SOAP_TYPE_tt__Config;
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
	if (type && !soap_match_tag(soap, type, "tt:ConfigDescription"))
	{	cp->type = SOAP_TYPE_tt__ConfigDescription;
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
	if (type && !soap_match_tag(soap, type, "tt:ConfigDescriptionExtension"))
	{	cp->type = SOAP_TYPE_tt__ConfigDescriptionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SupportedRules"))
	{	cp->type = SOAP_TYPE_tt__SupportedRules;
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
	if (type && !soap_match_tag(soap, type, "tt:SupportedRulesExtension"))
	{	cp->type = SOAP_TYPE_tt__SupportedRulesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SupportedAnalyticsModules"))
	{	cp->type = SOAP_TYPE_tt__SupportedAnalyticsModules;
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
	if (type && !soap_match_tag(soap, type, "tt:SupportedAnalyticsModulesExtension"))
	{	cp->type = SOAP_TYPE_tt__SupportedAnalyticsModulesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PolygonConfiguration"))
	{	cp->type = SOAP_TYPE_tt__PolygonConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:PolylineArray"))
	{	cp->type = SOAP_TYPE_tt__PolylineArray;
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
	if (type && !soap_match_tag(soap, type, "tt:PolylineArrayExtension"))
	{	cp->type = SOAP_TYPE_tt__PolylineArrayExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PolylineArrayConfiguration"))
	{	cp->type = SOAP_TYPE_tt__PolylineArrayConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:MotionExpression"))
	{	cp->type = SOAP_TYPE_tt__MotionExpression;
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
	if (type && !soap_match_tag(soap, type, "tt:MotionExpressionConfiguration"))
	{	cp->type = SOAP_TYPE_tt__MotionExpressionConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:CellLayout"))
	{	cp->type = SOAP_TYPE_tt__CellLayout;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataStream"))
	{	cp->type = SOAP_TYPE_tt__MetadataStream;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataStreamExtension"))
	{	cp->type = SOAP_TYPE_tt__MetadataStreamExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoAnalyticsStream"))
	{	cp->type = SOAP_TYPE_tt__VideoAnalyticsStream;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoAnalyticsStreamExtension"))
	{	cp->type = SOAP_TYPE_tt__VideoAnalyticsStreamExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZStream"))
	{	cp->type = SOAP_TYPE_tt__PTZStream;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZStreamExtension"))
	{	cp->type = SOAP_TYPE_tt__PTZStreamExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EventStream"))
	{	cp->type = SOAP_TYPE_tt__EventStream;
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
	if (type && !soap_match_tag(soap, type, "tt:EventStreamExtension"))
	{	cp->type = SOAP_TYPE_tt__EventStreamExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PaneConfiguration"))
	{	cp->type = SOAP_TYPE_tt__PaneConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:PaneLayout"))
	{	cp->type = SOAP_TYPE_tt__PaneLayout;
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
	if (type && !soap_match_tag(soap, type, "tt:Layout"))
	{	cp->type = SOAP_TYPE_tt__Layout;
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
	if (type && !soap_match_tag(soap, type, "tt:LayoutExtension"))
	{	cp->type = SOAP_TYPE_tt__LayoutExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:CodingCapabilities"))
	{	cp->type = SOAP_TYPE_tt__CodingCapabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:LayoutOptions"))
	{	cp->type = SOAP_TYPE_tt__LayoutOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:LayoutOptionsExtension"))
	{	cp->type = SOAP_TYPE_tt__LayoutOptionsExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PaneLayoutOptions"))
	{	cp->type = SOAP_TYPE_tt__PaneLayoutOptions;
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
	if (type && !soap_match_tag(soap, type, "tt:PaneOptionExtension"))
	{	cp->type = SOAP_TYPE_tt__PaneOptionExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:Receiver"))
	{	cp->type = SOAP_TYPE_tt__Receiver;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverConfiguration"))
	{	cp->type = SOAP_TYPE_tt__ReceiverConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:ReceiverStateInformation"))
	{	cp->type = SOAP_TYPE_tt__ReceiverStateInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:SourceReference"))
	{	cp->type = SOAP_TYPE_tt__SourceReference;
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
	if (type && !soap_match_tag(soap, type, "tt:DateTimeRange"))
	{	cp->type = SOAP_TYPE_tt__DateTimeRange;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingSummary"))
	{	cp->type = SOAP_TYPE_tt__RecordingSummary;
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
	if (type && !soap_match_tag(soap, type, "tt:SearchScope"))
	{	cp->type = SOAP_TYPE_tt__SearchScope;
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
	if (type && !soap_match_tag(soap, type, "tt:SearchScopeExtension"))
	{	cp->type = SOAP_TYPE_tt__SearchScopeExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZPositionFilter"))
	{	cp->type = SOAP_TYPE_tt__PTZPositionFilter;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataFilter"))
	{	cp->type = SOAP_TYPE_tt__MetadataFilter;
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
	if (type && !soap_match_tag(soap, type, "tt:FindRecordingResultList"))
	{	cp->type = SOAP_TYPE_tt__FindRecordingResultList;
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
	if (type && !soap_match_tag(soap, type, "tt:FindEventResultList"))
	{	cp->type = SOAP_TYPE_tt__FindEventResultList;
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
	if (type && !soap_match_tag(soap, type, "tt:FindEventResult"))
	{	cp->type = SOAP_TYPE_tt__FindEventResult;
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
	if (type && !soap_match_tag(soap, type, "tt:FindPTZPositionResultList"))
	{	cp->type = SOAP_TYPE_tt__FindPTZPositionResultList;
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
	if (type && !soap_match_tag(soap, type, "tt:FindPTZPositionResult"))
	{	cp->type = SOAP_TYPE_tt__FindPTZPositionResult;
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
	if (type && !soap_match_tag(soap, type, "tt:FindMetadataResultList"))
	{	cp->type = SOAP_TYPE_tt__FindMetadataResultList;
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
	if (type && !soap_match_tag(soap, type, "tt:FindMetadataResult"))
	{	cp->type = SOAP_TYPE_tt__FindMetadataResult;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingInformation"))
	{	cp->type = SOAP_TYPE_tt__RecordingInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingSourceInformation"))
	{	cp->type = SOAP_TYPE_tt__RecordingSourceInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackInformation"))
	{	cp->type = SOAP_TYPE_tt__TrackInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:MediaAttributes"))
	{	cp->type = SOAP_TYPE_tt__MediaAttributes;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackAttributes"))
	{	cp->type = SOAP_TYPE_tt__TrackAttributes;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackAttributesExtension"))
	{	cp->type = SOAP_TYPE_tt__TrackAttributesExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoAttributes"))
	{	cp->type = SOAP_TYPE_tt__VideoAttributes;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioAttributes"))
	{	cp->type = SOAP_TYPE_tt__AudioAttributes;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataAttributes"))
	{	cp->type = SOAP_TYPE_tt__MetadataAttributes;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingConfiguration"))
	{	cp->type = SOAP_TYPE_tt__RecordingConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:TrackConfiguration"))
	{	cp->type = SOAP_TYPE_tt__TrackConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:GetRecordingsResponseItem"))
	{	cp->type = SOAP_TYPE_tt__GetRecordingsResponseItem;
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
	if (type && !soap_match_tag(soap, type, "tt:GetTracksResponseList"))
	{	cp->type = SOAP_TYPE_tt__GetTracksResponseList;
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
	if (type && !soap_match_tag(soap, type, "tt:GetTracksResponseItem"))
	{	cp->type = SOAP_TYPE_tt__GetTracksResponseItem;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobConfiguration"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobSource"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobSource;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobSourceExtension"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobSourceExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobTrack"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobTrack;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobStateInformation"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobStateInformation;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobStateInformationExtension"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobStateInformationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobStateSource"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobStateSource;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobStateTracks"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobStateTracks;
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
	if (type && !soap_match_tag(soap, type, "tt:RecordingJobStateTrack"))
	{	cp->type = SOAP_TYPE_tt__RecordingJobStateTrack;
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
	if (type && !soap_match_tag(soap, type, "tt:GetRecordingJobsResponseItem"))
	{	cp->type = SOAP_TYPE_tt__GetRecordingJobsResponseItem;
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
	if (type && !soap_match_tag(soap, type, "tt:ReplayConfiguration"))
	{	cp->type = SOAP_TYPE_tt__ReplayConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsDeviceEngineConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsDeviceEngineConfigurationExtension"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:EngineConfiguration"))
	{	cp->type = SOAP_TYPE_tt__EngineConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineInputInfo"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineInputInfo;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineInputInfoExtension"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:SourceIdentification"))
	{	cp->type = SOAP_TYPE_tt__SourceIdentification;
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
	if (type && !soap_match_tag(soap, type, "tt:SourceIdentificationExtension"))
	{	cp->type = SOAP_TYPE_tt__SourceIdentificationExtension;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataInput"))
	{	cp->type = SOAP_TYPE_tt__MetadataInput;
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
	if (type && !soap_match_tag(soap, type, "tt:MetadataInputExtension"))
	{	cp->type = SOAP_TYPE_tt__MetadataInputExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__MetadataInputExtension);
			if (size)
				*size = sizeof(tt__MetadataInputExtension);
			((tt__MetadataInputExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__MetadataInputExtension, n);
			if (size)
				*size = n * sizeof(tt__MetadataInputExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__MetadataInputExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__MetadataInputExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsStateInformation"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsStateInformation;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsStateInformation);
			if (size)
				*size = sizeof(tt__AnalyticsStateInformation);
			((tt__AnalyticsStateInformation*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsStateInformation, n);
			if (size)
				*size = n * sizeof(tt__AnalyticsStateInformation);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AnalyticsStateInformation*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AnalyticsStateInformation*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsState"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsState;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsState);
			if (size)
				*size = sizeof(tt__AnalyticsState);
			((tt__AnalyticsState*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsState, n);
			if (size)
				*size = n * sizeof(tt__AnalyticsState);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AnalyticsState*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AnalyticsState*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ActionEngineEventPayload"))
	{	cp->type = SOAP_TYPE_tt__ActionEngineEventPayload;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__ActionEngineEventPayload);
			if (size)
				*size = sizeof(tt__ActionEngineEventPayload);
			((tt__ActionEngineEventPayload*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ActionEngineEventPayload, n);
			if (size)
				*size = n * sizeof(tt__ActionEngineEventPayload);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__ActionEngineEventPayload*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__ActionEngineEventPayload*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:ActionEngineEventPayloadExtension"))
	{	cp->type = SOAP_TYPE_tt__ActionEngineEventPayloadExtension;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__ActionEngineEventPayloadExtension);
			if (size)
				*size = sizeof(tt__ActionEngineEventPayloadExtension);
			((tt__ActionEngineEventPayloadExtension*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__ActionEngineEventPayloadExtension, n);
			if (size)
				*size = n * sizeof(tt__ActionEngineEventPayloadExtension);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__ActionEngineEventPayloadExtension*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__ActionEngineEventPayloadExtension*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:QueryExpressionType"))
	{	cp->type = SOAP_TYPE_wsnt__QueryExpressionType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__QueryExpressionType);
			if (size)
				*size = sizeof(wsnt__QueryExpressionType);
			((wsnt__QueryExpressionType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__QueryExpressionType, n);
			if (size)
				*size = n * sizeof(wsnt__QueryExpressionType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__QueryExpressionType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__QueryExpressionType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:TopicExpressionType"))
	{	cp->type = SOAP_TYPE_wsnt__TopicExpressionType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__TopicExpressionType);
			if (size)
				*size = sizeof(wsnt__TopicExpressionType);
			((wsnt__TopicExpressionType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__TopicExpressionType, n);
			if (size)
				*size = n * sizeof(wsnt__TopicExpressionType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__TopicExpressionType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__TopicExpressionType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:FilterType"))
	{	cp->type = SOAP_TYPE_wsnt__FilterType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__FilterType);
			if (size)
				*size = sizeof(wsnt__FilterType);
			((wsnt__FilterType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__FilterType, n);
			if (size)
				*size = n * sizeof(wsnt__FilterType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__FilterType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__FilterType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:SubscriptionPolicyType"))
	{	cp->type = SOAP_TYPE_wsnt__SubscriptionPolicyType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__SubscriptionPolicyType);
			if (size)
				*size = sizeof(wsnt__SubscriptionPolicyType);
			((wsnt__SubscriptionPolicyType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__SubscriptionPolicyType, n);
			if (size)
				*size = n * sizeof(wsnt__SubscriptionPolicyType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__SubscriptionPolicyType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__SubscriptionPolicyType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:NotificationMessageHolderType"))
	{	cp->type = SOAP_TYPE_wsnt__NotificationMessageHolderType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__NotificationMessageHolderType);
			if (size)
				*size = sizeof(wsnt__NotificationMessageHolderType);
			((wsnt__NotificationMessageHolderType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__NotificationMessageHolderType, n);
			if (size)
				*size = n * sizeof(wsnt__NotificationMessageHolderType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__NotificationMessageHolderType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__NotificationMessageHolderType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsrfbf:BaseFaultType"))
	{	cp->type = SOAP_TYPE_wsrfbf__BaseFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsrfbf__BaseFaultType);
			if (size)
				*size = sizeof(wsrfbf__BaseFaultType);
			((wsrfbf__BaseFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsrfbf__BaseFaultType, n);
			if (size)
				*size = n * sizeof(wsrfbf__BaseFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsrfbf__BaseFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsrfbf__BaseFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:Documentation"))
	{	cp->type = SOAP_TYPE_wstop__Documentation;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__Documentation);
			if (size)
				*size = sizeof(wstop__Documentation);
			((wstop__Documentation*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__Documentation, n);
			if (size)
				*size = n * sizeof(wstop__Documentation);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__Documentation*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__Documentation*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:ExtensibleDocumented"))
	{	cp->type = SOAP_TYPE_wstop__ExtensibleDocumented;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__ExtensibleDocumented);
			if (size)
				*size = sizeof(wstop__ExtensibleDocumented);
			((wstop__ExtensibleDocumented*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__ExtensibleDocumented, n);
			if (size)
				*size = n * sizeof(wstop__ExtensibleDocumented);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__ExtensibleDocumented*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__ExtensibleDocumented*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:QueryExpressionType"))
	{	cp->type = SOAP_TYPE_wstop__QueryExpressionType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__QueryExpressionType);
			if (size)
				*size = sizeof(wstop__QueryExpressionType);
			((wstop__QueryExpressionType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__QueryExpressionType, n);
			if (size)
				*size = n * sizeof(wstop__QueryExpressionType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__QueryExpressionType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__QueryExpressionType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "trt:Capabilities"))
	{	cp->type = SOAP_TYPE_trt__Capabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(trt__Capabilities);
			if (size)
				*size = sizeof(trt__Capabilities);
			((trt__Capabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(trt__Capabilities, n);
			if (size)
				*size = n * sizeof(trt__Capabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((trt__Capabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (trt__Capabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "trt:ProfileCapabilities"))
	{	cp->type = SOAP_TYPE_trt__ProfileCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(trt__ProfileCapabilities);
			if (size)
				*size = sizeof(trt__ProfileCapabilities);
			((trt__ProfileCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(trt__ProfileCapabilities, n);
			if (size)
				*size = n * sizeof(trt__ProfileCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((trt__ProfileCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (trt__ProfileCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "trt:StreamingCapabilities"))
	{	cp->type = SOAP_TYPE_trt__StreamingCapabilities;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(trt__StreamingCapabilities);
			if (size)
				*size = sizeof(trt__StreamingCapabilities);
			((trt__StreamingCapabilities*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(trt__StreamingCapabilities, n);
			if (size)
				*size = n * sizeof(trt__StreamingCapabilities);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((trt__StreamingCapabilities*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (trt__StreamingCapabilities*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tptz:Capabilities"))
	{	cp->type = SOAP_TYPE_tptz__Capabilities;
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
	if (type && !soap_match_tag(soap, type, "timg:Capabilities"))
	{	cp->type = SOAP_TYPE_timg__Capabilities;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoSource"))
	{	cp->type = SOAP_TYPE_tt__VideoSource;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSource);
			if (size)
				*size = sizeof(tt__VideoSource);
			((tt__VideoSource*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSource, n);
			if (size)
				*size = n * sizeof(tt__VideoSource);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSource*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSource*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioSource"))
	{	cp->type = SOAP_TYPE_tt__AudioSource;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioSource);
			if (size)
				*size = sizeof(tt__AudioSource);
			((tt__AudioSource*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioSource, n);
			if (size)
				*size = n * sizeof(tt__AudioSource);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioSource*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioSource*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoSourceConfiguration"))
	{	cp->type = SOAP_TYPE_tt__VideoSourceConfiguration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoSourceConfiguration);
			if (size)
				*size = sizeof(tt__VideoSourceConfiguration);
			((tt__VideoSourceConfiguration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoSourceConfiguration, n);
			if (size)
				*size = n * sizeof(tt__VideoSourceConfiguration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoSourceConfiguration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoSourceConfiguration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoEncoderConfiguration"))
	{	cp->type = SOAP_TYPE_tt__VideoEncoderConfiguration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoEncoderConfiguration);
			if (size)
				*size = sizeof(tt__VideoEncoderConfiguration);
			((tt__VideoEncoderConfiguration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoEncoderConfiguration, n);
			if (size)
				*size = n * sizeof(tt__VideoEncoderConfiguration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoEncoderConfiguration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoEncoderConfiguration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:JpegOptions2"))
	{	cp->type = SOAP_TYPE_tt__JpegOptions2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__JpegOptions2);
			if (size)
				*size = sizeof(tt__JpegOptions2);
			((tt__JpegOptions2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__JpegOptions2, n);
			if (size)
				*size = n * sizeof(tt__JpegOptions2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__JpegOptions2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__JpegOptions2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:Mpeg4Options2"))
	{	cp->type = SOAP_TYPE_tt__Mpeg4Options2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__Mpeg4Options2);
			if (size)
				*size = sizeof(tt__Mpeg4Options2);
			((tt__Mpeg4Options2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__Mpeg4Options2, n);
			if (size)
				*size = n * sizeof(tt__Mpeg4Options2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__Mpeg4Options2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__Mpeg4Options2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:H264Options2"))
	{	cp->type = SOAP_TYPE_tt__H264Options2;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__H264Options2);
			if (size)
				*size = sizeof(tt__H264Options2);
			((tt__H264Options2*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__H264Options2, n);
			if (size)
				*size = n * sizeof(tt__H264Options2);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__H264Options2*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__H264Options2*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioSourceConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AudioSourceConfiguration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioSourceConfiguration);
			if (size)
				*size = sizeof(tt__AudioSourceConfiguration);
			((tt__AudioSourceConfiguration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioSourceConfiguration, n);
			if (size)
				*size = n * sizeof(tt__AudioSourceConfiguration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioSourceConfiguration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioSourceConfiguration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:AudioEncoderConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AudioEncoderConfiguration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AudioEncoderConfiguration);
			if (size)
				*size = sizeof(tt__AudioEncoderConfiguration);
			((tt__AudioEncoderConfiguration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AudioEncoderConfiguration, n);
			if (size)
				*size = n * sizeof(tt__AudioEncoderConfiguration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AudioEncoderConfiguration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AudioEncoderConfiguration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:VideoAnalyticsConfiguration"))
	{	cp->type = SOAP_TYPE_tt__VideoAnalyticsConfiguration;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__VideoAnalyticsConfiguration);
			if (size)
				*size = sizeof(tt__VideoAnalyticsConfiguration);
			((tt__VideoAnalyticsConfiguration*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__VideoAnalyticsConfiguration, n);
			if (size)
				*size = n * sizeof(tt__VideoAnalyticsConfiguration);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__VideoAnalyticsConfiguration*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__VideoAnalyticsConfiguration*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "tt:MetadataConfiguration"))
	{	cp->type = SOAP_TYPE_tt__MetadataConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoOutput"))
	{	cp->type = SOAP_TYPE_tt__VideoOutput;
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
	if (type && !soap_match_tag(soap, type, "tt:VideoOutputConfiguration"))
	{	cp->type = SOAP_TYPE_tt__VideoOutputConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioOutput"))
	{	cp->type = SOAP_TYPE_tt__AudioOutput;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioOutputConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AudioOutputConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:AudioDecoderConfiguration"))
	{	cp->type = SOAP_TYPE_tt__AudioDecoderConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:NetworkInterface"))
	{	cp->type = SOAP_TYPE_tt__NetworkInterface;
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
	if (type && !soap_match_tag(soap, type, "tt:CertificateUsage"))
	{	cp->type = SOAP_TYPE_tt__CertificateUsage;
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
	if (type && !soap_match_tag(soap, type, "tt:RelayOutput"))
	{	cp->type = SOAP_TYPE_tt__RelayOutput;
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
	if (type && !soap_match_tag(soap, type, "tt:DigitalInput"))
	{	cp->type = SOAP_TYPE_tt__DigitalInput;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZNode"))
	{	cp->type = SOAP_TYPE_tt__PTZNode;
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
	if (type && !soap_match_tag(soap, type, "tt:PTZConfiguration"))
	{	cp->type = SOAP_TYPE_tt__PTZConfiguration;
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
	if (type && !soap_match_tag(soap, type, "tt:EventFilter"))
	{	cp->type = SOAP_TYPE_tt__EventFilter;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngine"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngine;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineInput"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineInput;
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
	if (type && !soap_match_tag(soap, type, "tt:AnalyticsEngineControl"))
	{	cp->type = SOAP_TYPE_tt__AnalyticsEngineControl;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(tt__AnalyticsEngineControl);
			if (size)
				*size = sizeof(tt__AnalyticsEngineControl);
			((tt__AnalyticsEngineControl*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(tt__AnalyticsEngineControl, n);
			if (size)
				*size = n * sizeof(tt__AnalyticsEngineControl);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((tt__AnalyticsEngineControl*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (tt__AnalyticsEngineControl*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:SubscribeCreationFailedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__SubscribeCreationFailedFaultType);
			if (size)
				*size = sizeof(wsnt__SubscribeCreationFailedFaultType);
			((wsnt__SubscribeCreationFailedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__SubscribeCreationFailedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__SubscribeCreationFailedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__SubscribeCreationFailedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__SubscribeCreationFailedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:InvalidFilterFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__InvalidFilterFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__InvalidFilterFaultType);
			if (size)
				*size = sizeof(wsnt__InvalidFilterFaultType);
			((wsnt__InvalidFilterFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__InvalidFilterFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__InvalidFilterFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__InvalidFilterFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__InvalidFilterFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:TopicExpressionDialectUnknownFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__TopicExpressionDialectUnknownFaultType);
			if (size)
				*size = sizeof(wsnt__TopicExpressionDialectUnknownFaultType);
			((wsnt__TopicExpressionDialectUnknownFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__TopicExpressionDialectUnknownFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__TopicExpressionDialectUnknownFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__TopicExpressionDialectUnknownFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__TopicExpressionDialectUnknownFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:InvalidTopicExpressionFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__InvalidTopicExpressionFaultType);
			if (size)
				*size = sizeof(wsnt__InvalidTopicExpressionFaultType);
			((wsnt__InvalidTopicExpressionFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__InvalidTopicExpressionFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__InvalidTopicExpressionFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__InvalidTopicExpressionFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__InvalidTopicExpressionFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:TopicNotSupportedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__TopicNotSupportedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__TopicNotSupportedFaultType);
			if (size)
				*size = sizeof(wsnt__TopicNotSupportedFaultType);
			((wsnt__TopicNotSupportedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__TopicNotSupportedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__TopicNotSupportedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__TopicNotSupportedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__TopicNotSupportedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:MultipleTopicsSpecifiedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__MultipleTopicsSpecifiedFaultType);
			if (size)
				*size = sizeof(wsnt__MultipleTopicsSpecifiedFaultType);
			((wsnt__MultipleTopicsSpecifiedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__MultipleTopicsSpecifiedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__MultipleTopicsSpecifiedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__MultipleTopicsSpecifiedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__MultipleTopicsSpecifiedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:InvalidProducerPropertiesExpressionFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__InvalidProducerPropertiesExpressionFaultType);
			if (size)
				*size = sizeof(wsnt__InvalidProducerPropertiesExpressionFaultType);
			((wsnt__InvalidProducerPropertiesExpressionFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__InvalidProducerPropertiesExpressionFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__InvalidProducerPropertiesExpressionFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__InvalidProducerPropertiesExpressionFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__InvalidProducerPropertiesExpressionFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:InvalidMessageContentExpressionFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__InvalidMessageContentExpressionFaultType);
			if (size)
				*size = sizeof(wsnt__InvalidMessageContentExpressionFaultType);
			((wsnt__InvalidMessageContentExpressionFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__InvalidMessageContentExpressionFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__InvalidMessageContentExpressionFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__InvalidMessageContentExpressionFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__InvalidMessageContentExpressionFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnrecognizedPolicyRequestFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnrecognizedPolicyRequestFaultType);
			if (size)
				*size = sizeof(wsnt__UnrecognizedPolicyRequestFaultType);
			((wsnt__UnrecognizedPolicyRequestFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnrecognizedPolicyRequestFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnrecognizedPolicyRequestFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnrecognizedPolicyRequestFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnrecognizedPolicyRequestFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnsupportedPolicyRequestFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnsupportedPolicyRequestFaultType);
			if (size)
				*size = sizeof(wsnt__UnsupportedPolicyRequestFaultType);
			((wsnt__UnsupportedPolicyRequestFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnsupportedPolicyRequestFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnsupportedPolicyRequestFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnsupportedPolicyRequestFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnsupportedPolicyRequestFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:NotifyMessageNotSupportedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__NotifyMessageNotSupportedFaultType);
			if (size)
				*size = sizeof(wsnt__NotifyMessageNotSupportedFaultType);
			((wsnt__NotifyMessageNotSupportedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__NotifyMessageNotSupportedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__NotifyMessageNotSupportedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__NotifyMessageNotSupportedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__NotifyMessageNotSupportedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnacceptableInitialTerminationTimeFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnacceptableInitialTerminationTimeFaultType);
			if (size)
				*size = sizeof(wsnt__UnacceptableInitialTerminationTimeFaultType);
			((wsnt__UnacceptableInitialTerminationTimeFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnacceptableInitialTerminationTimeFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnacceptableInitialTerminationTimeFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnacceptableInitialTerminationTimeFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnacceptableInitialTerminationTimeFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:NoCurrentMessageOnTopicFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__NoCurrentMessageOnTopicFaultType);
			if (size)
				*size = sizeof(wsnt__NoCurrentMessageOnTopicFaultType);
			((wsnt__NoCurrentMessageOnTopicFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__NoCurrentMessageOnTopicFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__NoCurrentMessageOnTopicFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__NoCurrentMessageOnTopicFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__NoCurrentMessageOnTopicFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnableToGetMessagesFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnableToGetMessagesFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnableToGetMessagesFaultType);
			if (size)
				*size = sizeof(wsnt__UnableToGetMessagesFaultType);
			((wsnt__UnableToGetMessagesFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnableToGetMessagesFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnableToGetMessagesFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnableToGetMessagesFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnableToGetMessagesFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnableToDestroyPullPointFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnableToDestroyPullPointFaultType);
			if (size)
				*size = sizeof(wsnt__UnableToDestroyPullPointFaultType);
			((wsnt__UnableToDestroyPullPointFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnableToDestroyPullPointFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnableToDestroyPullPointFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnableToDestroyPullPointFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnableToDestroyPullPointFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnableToCreatePullPointFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnableToCreatePullPointFaultType);
			if (size)
				*size = sizeof(wsnt__UnableToCreatePullPointFaultType);
			((wsnt__UnableToCreatePullPointFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnableToCreatePullPointFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnableToCreatePullPointFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnableToCreatePullPointFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnableToCreatePullPointFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnacceptableTerminationTimeFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnacceptableTerminationTimeFaultType);
			if (size)
				*size = sizeof(wsnt__UnacceptableTerminationTimeFaultType);
			((wsnt__UnacceptableTerminationTimeFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnacceptableTerminationTimeFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnacceptableTerminationTimeFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnacceptableTerminationTimeFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnacceptableTerminationTimeFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:UnableToDestroySubscriptionFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__UnableToDestroySubscriptionFaultType);
			if (size)
				*size = sizeof(wsnt__UnableToDestroySubscriptionFaultType);
			((wsnt__UnableToDestroySubscriptionFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__UnableToDestroySubscriptionFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__UnableToDestroySubscriptionFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__UnableToDestroySubscriptionFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__UnableToDestroySubscriptionFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:PauseFailedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__PauseFailedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__PauseFailedFaultType);
			if (size)
				*size = sizeof(wsnt__PauseFailedFaultType);
			((wsnt__PauseFailedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__PauseFailedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__PauseFailedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__PauseFailedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__PauseFailedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wsnt:ResumeFailedFaultType"))
	{	cp->type = SOAP_TYPE_wsnt__ResumeFailedFaultType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wsnt__ResumeFailedFaultType);
			if (size)
				*size = sizeof(wsnt__ResumeFailedFaultType);
			((wsnt__ResumeFailedFaultType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wsnt__ResumeFailedFaultType, n);
			if (size)
				*size = n * sizeof(wsnt__ResumeFailedFaultType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wsnt__ResumeFailedFaultType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wsnt__ResumeFailedFaultType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:TopicNamespaceType"))
	{	cp->type = SOAP_TYPE_wstop__TopicNamespaceType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__TopicNamespaceType);
			if (size)
				*size = sizeof(wstop__TopicNamespaceType);
			((wstop__TopicNamespaceType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__TopicNamespaceType, n);
			if (size)
				*size = n * sizeof(wstop__TopicNamespaceType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__TopicNamespaceType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__TopicNamespaceType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:TopicType"))
	{	cp->type = SOAP_TYPE_wstop__TopicType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__TopicType);
			if (size)
				*size = sizeof(wstop__TopicType);
			((wstop__TopicType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__TopicType, n);
			if (size)
				*size = n * sizeof(wstop__TopicType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__TopicType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__TopicType*)cp->ptr;
	}
	if (type && !soap_match_tag(soap, type, "wstop:TopicSetType"))
	{	cp->type = SOAP_TYPE_wstop__TopicSetType;
		if (n < 0)
		{	cp->ptr = (void*)SOAP_NEW(wstop__TopicSetType);
			if (size)
				*size = sizeof(wstop__TopicSetType);
			((wstop__TopicSetType*)cp->ptr)->soap = soap;
		}
		else
		{	cp->ptr = (void*)SOAP_NEW_ARRAY(wstop__TopicSetType, n);
			if (size)
				*size = n * sizeof(wstop__TopicSetType);
			if (cp->ptr)
				for (int i = 0; i < n; i++)
					((wstop__TopicSetType*)cp->ptr)[i].soap = soap;
		}
		DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
		if (!cp->ptr)
			soap->error = SOAP_EOM;
		return (wstop__TopicSetType*)cp->ptr;
	}
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(xsd__anyType);
		if (size)
			*size = sizeof(xsd__anyType);
		((xsd__anyType*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(xsd__anyType, n);
		if (size)
			*size = n * sizeof(xsd__anyType);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((xsd__anyType*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (xsd__anyType*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_xsd__anyType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying xsd__anyType %p -> %p\n", q, p));
	*(xsd__anyType*)p = *(xsd__anyType*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetSnapshotUri(struct soap *soap, struct __trt__GetSnapshotUri *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetSnapshotUri = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetSnapshotUri(struct soap *soap, const struct __trt__GetSnapshotUri *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetSnapshotUri(soap, &a->trt__GetSnapshotUri);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetSnapshotUri(struct soap *soap, const char *tag, int id, const struct __trt__GetSnapshotUri *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetSnapshotUri(soap, "trt:GetSnapshotUri", -1, &a->trt__GetSnapshotUri, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetSnapshotUri * SOAP_FMAC4 soap_in___trt__GetSnapshotUri(struct soap *soap, const char *tag, struct __trt__GetSnapshotUri *a, const char *type)
{
	size_t soap_flag_trt__GetSnapshotUri = 1;
	short soap_flag;
	a = (struct __trt__GetSnapshotUri *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetSnapshotUri, sizeof(struct __trt__GetSnapshotUri), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetSnapshotUri(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetSnapshotUri && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetSnapshotUri(soap, "trt:GetSnapshotUri", &a->trt__GetSnapshotUri, ""))
				{	soap_flag_trt__GetSnapshotUri--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetSnapshotUri(struct soap *soap, const struct __trt__GetSnapshotUri *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetSnapshotUri(soap, tag?tag:"-trt:GetSnapshotUri", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetSnapshotUri * SOAP_FMAC4 soap_get___trt__GetSnapshotUri(struct soap *soap, struct __trt__GetSnapshotUri *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetSnapshotUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetSnapshotUri * SOAP_FMAC2 soap_instantiate___trt__GetSnapshotUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetSnapshotUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetSnapshotUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetSnapshotUri);
		if (size)
			*size = sizeof(struct __trt__GetSnapshotUri);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetSnapshotUri, n);
		if (size)
			*size = n * sizeof(struct __trt__GetSnapshotUri);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetSnapshotUri*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetSnapshotUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetSnapshotUri %p -> %p\n", q, p));
	*(struct __trt__GetSnapshotUri*)p = *(struct __trt__GetSnapshotUri*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__SetSynchronizationPoint(struct soap *soap, struct __trt__SetSynchronizationPoint *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__SetSynchronizationPoint = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__SetSynchronizationPoint(struct soap *soap, const struct __trt__SetSynchronizationPoint *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__SetSynchronizationPoint(soap, &a->trt__SetSynchronizationPoint);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__SetSynchronizationPoint(struct soap *soap, const char *tag, int id, const struct __trt__SetSynchronizationPoint *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__SetSynchronizationPoint(soap, "trt:SetSynchronizationPoint", -1, &a->trt__SetSynchronizationPoint, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__SetSynchronizationPoint * SOAP_FMAC4 soap_in___trt__SetSynchronizationPoint(struct soap *soap, const char *tag, struct __trt__SetSynchronizationPoint *a, const char *type)
{
	size_t soap_flag_trt__SetSynchronizationPoint = 1;
	short soap_flag;
	a = (struct __trt__SetSynchronizationPoint *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__SetSynchronizationPoint, sizeof(struct __trt__SetSynchronizationPoint), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__SetSynchronizationPoint(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__SetSynchronizationPoint && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__SetSynchronizationPoint(soap, "trt:SetSynchronizationPoint", &a->trt__SetSynchronizationPoint, ""))
				{	soap_flag_trt__SetSynchronizationPoint--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__SetSynchronizationPoint(struct soap *soap, const struct __trt__SetSynchronizationPoint *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__SetSynchronizationPoint(soap, tag?tag:"-trt:SetSynchronizationPoint", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__SetSynchronizationPoint * SOAP_FMAC4 soap_get___trt__SetSynchronizationPoint(struct soap *soap, struct __trt__SetSynchronizationPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__SetSynchronizationPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__SetSynchronizationPoint * SOAP_FMAC2 soap_instantiate___trt__SetSynchronizationPoint(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__SetSynchronizationPoint(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__SetSynchronizationPoint, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__SetSynchronizationPoint);
		if (size)
			*size = sizeof(struct __trt__SetSynchronizationPoint);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__SetSynchronizationPoint, n);
		if (size)
			*size = n * sizeof(struct __trt__SetSynchronizationPoint);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__SetSynchronizationPoint*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__SetSynchronizationPoint(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__SetSynchronizationPoint %p -> %p\n", q, p));
	*(struct __trt__SetSynchronizationPoint*)p = *(struct __trt__SetSynchronizationPoint*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__StopMulticastStreaming(struct soap *soap, struct __trt__StopMulticastStreaming *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__StopMulticastStreaming = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__StopMulticastStreaming(struct soap *soap, const struct __trt__StopMulticastStreaming *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__StopMulticastStreaming(soap, &a->trt__StopMulticastStreaming);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__StopMulticastStreaming(struct soap *soap, const char *tag, int id, const struct __trt__StopMulticastStreaming *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__StopMulticastStreaming(soap, "trt:StopMulticastStreaming", -1, &a->trt__StopMulticastStreaming, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__StopMulticastStreaming * SOAP_FMAC4 soap_in___trt__StopMulticastStreaming(struct soap *soap, const char *tag, struct __trt__StopMulticastStreaming *a, const char *type)
{
	size_t soap_flag_trt__StopMulticastStreaming = 1;
	short soap_flag;
	a = (struct __trt__StopMulticastStreaming *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__StopMulticastStreaming, sizeof(struct __trt__StopMulticastStreaming), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__StopMulticastStreaming(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__StopMulticastStreaming && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__StopMulticastStreaming(soap, "trt:StopMulticastStreaming", &a->trt__StopMulticastStreaming, ""))
				{	soap_flag_trt__StopMulticastStreaming--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__StopMulticastStreaming(struct soap *soap, const struct __trt__StopMulticastStreaming *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__StopMulticastStreaming(soap, tag?tag:"-trt:StopMulticastStreaming", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__StopMulticastStreaming * SOAP_FMAC4 soap_get___trt__StopMulticastStreaming(struct soap *soap, struct __trt__StopMulticastStreaming *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__StopMulticastStreaming(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__StopMulticastStreaming * SOAP_FMAC2 soap_instantiate___trt__StopMulticastStreaming(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__StopMulticastStreaming(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__StopMulticastStreaming, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__StopMulticastStreaming);
		if (size)
			*size = sizeof(struct __trt__StopMulticastStreaming);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__StopMulticastStreaming, n);
		if (size)
			*size = n * sizeof(struct __trt__StopMulticastStreaming);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__StopMulticastStreaming*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__StopMulticastStreaming(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__StopMulticastStreaming %p -> %p\n", q, p));
	*(struct __trt__StopMulticastStreaming*)p = *(struct __trt__StopMulticastStreaming*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__StartMulticastStreaming(struct soap *soap, struct __trt__StartMulticastStreaming *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__StartMulticastStreaming = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__StartMulticastStreaming(struct soap *soap, const struct __trt__StartMulticastStreaming *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__StartMulticastStreaming(soap, &a->trt__StartMulticastStreaming);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__StartMulticastStreaming(struct soap *soap, const char *tag, int id, const struct __trt__StartMulticastStreaming *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__StartMulticastStreaming(soap, "trt:StartMulticastStreaming", -1, &a->trt__StartMulticastStreaming, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__StartMulticastStreaming * SOAP_FMAC4 soap_in___trt__StartMulticastStreaming(struct soap *soap, const char *tag, struct __trt__StartMulticastStreaming *a, const char *type)
{
	size_t soap_flag_trt__StartMulticastStreaming = 1;
	short soap_flag;
	a = (struct __trt__StartMulticastStreaming *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__StartMulticastStreaming, sizeof(struct __trt__StartMulticastStreaming), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__StartMulticastStreaming(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__StartMulticastStreaming && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__StartMulticastStreaming(soap, "trt:StartMulticastStreaming", &a->trt__StartMulticastStreaming, ""))
				{	soap_flag_trt__StartMulticastStreaming--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__StartMulticastStreaming(struct soap *soap, const struct __trt__StartMulticastStreaming *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__StartMulticastStreaming(soap, tag?tag:"-trt:StartMulticastStreaming", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__StartMulticastStreaming * SOAP_FMAC4 soap_get___trt__StartMulticastStreaming(struct soap *soap, struct __trt__StartMulticastStreaming *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__StartMulticastStreaming(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__StartMulticastStreaming * SOAP_FMAC2 soap_instantiate___trt__StartMulticastStreaming(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__StartMulticastStreaming(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__StartMulticastStreaming, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__StartMulticastStreaming);
		if (size)
			*size = sizeof(struct __trt__StartMulticastStreaming);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__StartMulticastStreaming, n);
		if (size)
			*size = n * sizeof(struct __trt__StartMulticastStreaming);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__StartMulticastStreaming*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__StartMulticastStreaming(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__StartMulticastStreaming %p -> %p\n", q, p));
	*(struct __trt__StartMulticastStreaming*)p = *(struct __trt__StartMulticastStreaming*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetStreamUri(struct soap *soap, struct __trt__GetStreamUri *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetStreamUri = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetStreamUri(struct soap *soap, const struct __trt__GetStreamUri *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetStreamUri(soap, &a->trt__GetStreamUri);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetStreamUri(struct soap *soap, const char *tag, int id, const struct __trt__GetStreamUri *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetStreamUri(soap, "trt:GetStreamUri", -1, &a->trt__GetStreamUri, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetStreamUri * SOAP_FMAC4 soap_in___trt__GetStreamUri(struct soap *soap, const char *tag, struct __trt__GetStreamUri *a, const char *type)
{
	size_t soap_flag_trt__GetStreamUri = 1;
	short soap_flag;
	a = (struct __trt__GetStreamUri *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetStreamUri, sizeof(struct __trt__GetStreamUri), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetStreamUri(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetStreamUri && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetStreamUri(soap, "trt:GetStreamUri", &a->trt__GetStreamUri, ""))
				{	soap_flag_trt__GetStreamUri--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetStreamUri(struct soap *soap, const struct __trt__GetStreamUri *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetStreamUri(soap, tag?tag:"-trt:GetStreamUri", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetStreamUri * SOAP_FMAC4 soap_get___trt__GetStreamUri(struct soap *soap, struct __trt__GetStreamUri *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetStreamUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetStreamUri * SOAP_FMAC2 soap_instantiate___trt__GetStreamUri(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetStreamUri(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetStreamUri, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetStreamUri);
		if (size)
			*size = sizeof(struct __trt__GetStreamUri);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetStreamUri, n);
		if (size)
			*size = n * sizeof(struct __trt__GetStreamUri);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetStreamUri*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetStreamUri(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetStreamUri %p -> %p\n", q, p));
	*(struct __trt__GetStreamUri*)p = *(struct __trt__GetStreamUri*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetGuaranteedNumberOfVideoEncoderInstances = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, &a->trt__GetGuaranteedNumberOfVideoEncoderInstances);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const char *tag, int id, const struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, "trt:GetGuaranteedNumberOfVideoEncoderInstances", -1, &a->trt__GetGuaranteedNumberOfVideoEncoderInstances, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC4 soap_in___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const char *tag, struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *a, const char *type)
{
	size_t soap_flag_trt__GetGuaranteedNumberOfVideoEncoderInstances = 1;
	short soap_flag;
	a = (struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetGuaranteedNumberOfVideoEncoderInstances, sizeof(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetGuaranteedNumberOfVideoEncoderInstances && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, "trt:GetGuaranteedNumberOfVideoEncoderInstances", &a->trt__GetGuaranteedNumberOfVideoEncoderInstances, ""))
				{	soap_flag_trt__GetGuaranteedNumberOfVideoEncoderInstances--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, const struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, tag?tag:"-trt:GetGuaranteedNumberOfVideoEncoderInstances", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC4 soap_get___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, struct __trt__GetGuaranteedNumberOfVideoEncoderInstances *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetGuaranteedNumberOfVideoEncoderInstances(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetGuaranteedNumberOfVideoEncoderInstances * SOAP_FMAC2 soap_instantiate___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetGuaranteedNumberOfVideoEncoderInstances(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetGuaranteedNumberOfVideoEncoderInstances, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances);
		if (size)
			*size = sizeof(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances, n);
		if (size)
			*size = n * sizeof(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetGuaranteedNumberOfVideoEncoderInstances*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetGuaranteedNumberOfVideoEncoderInstances(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetGuaranteedNumberOfVideoEncoderInstances %p -> %p\n", q, p));
	*(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances*)p = *(struct __trt__GetGuaranteedNumberOfVideoEncoderInstances*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, struct __trt__GetAudioDecoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetAudioDecoderConfigurationOptions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const struct __trt__GetAudioDecoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetAudioDecoderConfigurationOptions(soap, &a->trt__GetAudioDecoderConfigurationOptions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const char *tag, int id, const struct __trt__GetAudioDecoderConfigurationOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetAudioDecoderConfigurationOptions(soap, "trt:GetAudioDecoderConfigurationOptions", -1, &a->trt__GetAudioDecoderConfigurationOptions, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC4 soap_in___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const char *tag, struct __trt__GetAudioDecoderConfigurationOptions *a, const char *type)
{
	size_t soap_flag_trt__GetAudioDecoderConfigurationOptions = 1;
	short soap_flag;
	a = (struct __trt__GetAudioDecoderConfigurationOptions *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetAudioDecoderConfigurationOptions, sizeof(struct __trt__GetAudioDecoderConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetAudioDecoderConfigurationOptions(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetAudioDecoderConfigurationOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetAudioDecoderConfigurationOptions(soap, "trt:GetAudioDecoderConfigurationOptions", &a->trt__GetAudioDecoderConfigurationOptions, ""))
				{	soap_flag_trt__GetAudioDecoderConfigurationOptions--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, const struct __trt__GetAudioDecoderConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetAudioDecoderConfigurationOptions(soap, tag?tag:"-trt:GetAudioDecoderConfigurationOptions", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC4 soap_get___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, struct __trt__GetAudioDecoderConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetAudioDecoderConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetAudioDecoderConfigurationOptions * SOAP_FMAC2 soap_instantiate___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetAudioDecoderConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetAudioDecoderConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetAudioDecoderConfigurationOptions);
		if (size)
			*size = sizeof(struct __trt__GetAudioDecoderConfigurationOptions);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetAudioDecoderConfigurationOptions, n);
		if (size)
			*size = n * sizeof(struct __trt__GetAudioDecoderConfigurationOptions);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetAudioDecoderConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetAudioDecoderConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetAudioDecoderConfigurationOptions %p -> %p\n", q, p));
	*(struct __trt__GetAudioDecoderConfigurationOptions*)p = *(struct __trt__GetAudioDecoderConfigurationOptions*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetAudioOutputConfigurationOptions(struct soap *soap, struct __trt__GetAudioOutputConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetAudioOutputConfigurationOptions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetAudioOutputConfigurationOptions(struct soap *soap, const struct __trt__GetAudioOutputConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetAudioOutputConfigurationOptions(soap, &a->trt__GetAudioOutputConfigurationOptions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetAudioOutputConfigurationOptions(struct soap *soap, const char *tag, int id, const struct __trt__GetAudioOutputConfigurationOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetAudioOutputConfigurationOptions(soap, "trt:GetAudioOutputConfigurationOptions", -1, &a->trt__GetAudioOutputConfigurationOptions, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetAudioOutputConfigurationOptions * SOAP_FMAC4 soap_in___trt__GetAudioOutputConfigurationOptions(struct soap *soap, const char *tag, struct __trt__GetAudioOutputConfigurationOptions *a, const char *type)
{
	size_t soap_flag_trt__GetAudioOutputConfigurationOptions = 1;
	short soap_flag;
	a = (struct __trt__GetAudioOutputConfigurationOptions *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetAudioOutputConfigurationOptions, sizeof(struct __trt__GetAudioOutputConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetAudioOutputConfigurationOptions(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetAudioOutputConfigurationOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetAudioOutputConfigurationOptions(soap, "trt:GetAudioOutputConfigurationOptions", &a->trt__GetAudioOutputConfigurationOptions, ""))
				{	soap_flag_trt__GetAudioOutputConfigurationOptions--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetAudioOutputConfigurationOptions(struct soap *soap, const struct __trt__GetAudioOutputConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetAudioOutputConfigurationOptions(soap, tag?tag:"-trt:GetAudioOutputConfigurationOptions", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetAudioOutputConfigurationOptions * SOAP_FMAC4 soap_get___trt__GetAudioOutputConfigurationOptions(struct soap *soap, struct __trt__GetAudioOutputConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetAudioOutputConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetAudioOutputConfigurationOptions * SOAP_FMAC2 soap_instantiate___trt__GetAudioOutputConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetAudioOutputConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetAudioOutputConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetAudioOutputConfigurationOptions);
		if (size)
			*size = sizeof(struct __trt__GetAudioOutputConfigurationOptions);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetAudioOutputConfigurationOptions, n);
		if (size)
			*size = n * sizeof(struct __trt__GetAudioOutputConfigurationOptions);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetAudioOutputConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetAudioOutputConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetAudioOutputConfigurationOptions %p -> %p\n", q, p));
	*(struct __trt__GetAudioOutputConfigurationOptions*)p = *(struct __trt__GetAudioOutputConfigurationOptions*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetMetadataConfigurationOptions(struct soap *soap, struct __trt__GetMetadataConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetMetadataConfigurationOptions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetMetadataConfigurationOptions(struct soap *soap, const struct __trt__GetMetadataConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetMetadataConfigurationOptions(soap, &a->trt__GetMetadataConfigurationOptions);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___trt__GetMetadataConfigurationOptions(struct soap *soap, const char *tag, int id, const struct __trt__GetMetadataConfigurationOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out_PointerTo_trt__GetMetadataConfigurationOptions(soap, "trt:GetMetadataConfigurationOptions", -1, &a->trt__GetMetadataConfigurationOptions, ""))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetMetadataConfigurationOptions * SOAP_FMAC4 soap_in___trt__GetMetadataConfigurationOptions(struct soap *soap, const char *tag, struct __trt__GetMetadataConfigurationOptions *a, const char *type)
{
	size_t soap_flag_trt__GetMetadataConfigurationOptions = 1;
	short soap_flag;
	a = (struct __trt__GetMetadataConfigurationOptions *)soap_id_enter(soap, "", a, SOAP_TYPE___trt__GetMetadataConfigurationOptions, sizeof(struct __trt__GetMetadataConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___trt__GetMetadataConfigurationOptions(soap, a);
		for (soap_flag = 0;; soap_flag = 1)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_trt__GetMetadataConfigurationOptions && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_trt__GetMetadataConfigurationOptions(soap, "trt:GetMetadataConfigurationOptions", &a->trt__GetMetadataConfigurationOptions, ""))
				{	soap_flag_trt__GetMetadataConfigurationOptions--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				if (soap_flag)
				{	soap->error = SOAP_OK;
					break;
				}
			if (soap_flag && soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___trt__GetMetadataConfigurationOptions(struct soap *soap, const struct __trt__GetMetadataConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___trt__GetMetadataConfigurationOptions(soap, tag?tag:"-trt:GetMetadataConfigurationOptions", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __trt__GetMetadataConfigurationOptions * SOAP_FMAC4 soap_get___trt__GetMetadataConfigurationOptions(struct soap *soap, struct __trt__GetMetadataConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in___trt__GetMetadataConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 struct __trt__GetMetadataConfigurationOptions * SOAP_FMAC2 soap_instantiate___trt__GetMetadataConfigurationOptions(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate___trt__GetMetadataConfigurationOptions(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE___trt__GetMetadataConfigurationOptions, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(struct __trt__GetMetadataConfigurationOptions);
		if (size)
			*size = sizeof(struct __trt__GetMetadataConfigurationOptions);
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(struct __trt__GetMetadataConfigurationOptions, n);
		if (size)
			*size = n * sizeof(struct __trt__GetMetadataConfigurationOptions);
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (struct __trt__GetMetadataConfigurationOptions*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy___trt__GetMetadataConfigurationOptions(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying struct __trt__GetMetadataConfigurationOptions %p -> %p\n", q, p));
	*(struct __trt__GetMetadataConfigurationOptions*)p = *(struct __trt__GetMetadataConfigurationOptions*)q;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___trt__GetAudioEncoderConfigurationOptions(struct soap *soap, struct __trt__GetAudioEncoderConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->trt__GetAudioEncoderConfigurationOptions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___trt__GetAudioEncoderConfigurationOptions(struct soap *soap, const struct __trt__GetAudioEncoderConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_trt__GetAudioEncoderConfigurationOptions(soap, &a->trt__GetAudioEncoderConfigurationOptions);
#endif
}
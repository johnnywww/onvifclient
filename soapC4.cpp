#include "soapH.h"

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "trt:Configuration");
	if (a->_trt__GetVideoSourceConfigurationResponse::Configuration)
	{	if (soap_out_PointerTott__VideoSourceConfiguration(soap, "trt:Configuration", -1, &a->_trt__GetVideoSourceConfigurationResponse::Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Configuration"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__GetVideoSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationResponse, sizeof(_trt__GetVideoSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfigurationResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Configuration1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "trt:Configuration", &(a->_trt__GetVideoSourceConfigurationResponse::Configuration), "tt:VideoSourceConfiguration"))
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
	{	a = (_trt__GetVideoSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfigurationResponse, 0, sizeof(_trt__GetVideoSourceConfigurationResponse), 0, soap_copy__trt__GetVideoSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfigurationResponse(struct soap *soap, _trt__GetVideoSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfigurationResponse);
		((_trt__GetVideoSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfigurationResponse*)p = *(_trt__GetVideoSourceConfigurationResponse*)q;
}

void _trt__GetVideoSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetVideoSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfiguration), type))
		return soap->error;
	if (a->_trt__GetVideoSourceConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__GetVideoSourceConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfiguration * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfiguration(struct soap *soap, const char *tag, _trt__GetVideoSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfiguration, sizeof(_trt__GetVideoSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__GetVideoSourceConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__GetVideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfiguration, 0, sizeof(_trt__GetVideoSourceConfiguration), 0, soap_copy__trt__GetVideoSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfiguration * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfiguration(struct soap *soap, _trt__GetVideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfiguration);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfiguration);
		((_trt__GetVideoSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfiguration %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfiguration*)p = *(_trt__GetVideoSourceConfiguration*)q;
}

void _trt__GetAudioDecoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioDecoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetAudioDecoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioDecoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioDecoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioDecoderConfiguration(soap, this->_trt__GetAudioDecoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetAudioDecoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioDecoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioDecoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetAudioDecoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse, sizeof(_trt__GetAudioDecoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetAudioDecoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetAudioDecoderConfigurationsResponse::Configurations = (tt__AudioDecoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioDecoderConfiguration *));
					if (a->_trt__GetAudioDecoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetAudioDecoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioDecoderConfiguration(soap, "trt:Configurations", a->_trt__GetAudioDecoderConfigurationsResponse::Configurations, "tt:AudioDecoderConfiguration"))
				{	a->_trt__GetAudioDecoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetAudioDecoderConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetAudioDecoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetAudioDecoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetAudioDecoderConfigurationsResponse::Configurations = (tt__AudioDecoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetAudioDecoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioDecoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse, 0, sizeof(_trt__GetAudioDecoderConfigurationsResponse), 0, soap_copy__trt__GetAudioDecoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfigurationsResponse(struct soap *soap, _trt__GetAudioDecoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfigurationsResponse);
		((_trt__GetAudioDecoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfigurationsResponse*)p = *(_trt__GetAudioDecoderConfigurationsResponse*)q;
}

void _trt__GetAudioDecoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioDecoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioDecoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioDecoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioDecoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetAudioDecoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioDecoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioDecoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurations * SOAP_FMAC4 soap_in__trt__GetAudioDecoderConfigurations(struct soap *soap, const char *tag, _trt__GetAudioDecoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioDecoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioDecoderConfigurations, sizeof(_trt__GetAudioDecoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioDecoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioDecoderConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioDecoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioDecoderConfigurations, 0, sizeof(_trt__GetAudioDecoderConfigurations), 0, soap_copy__trt__GetAudioDecoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioDecoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioDecoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioDecoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioDecoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioDecoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioDecoderConfigurations * SOAP_FMAC4 soap_get__trt__GetAudioDecoderConfigurations(struct soap *soap, _trt__GetAudioDecoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioDecoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioDecoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetAudioDecoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioDecoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioDecoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioDecoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetAudioDecoderConfigurations);
		((_trt__GetAudioDecoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioDecoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioDecoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioDecoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioDecoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioDecoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioDecoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetAudioDecoderConfigurations*)p = *(_trt__GetAudioDecoderConfigurations*)q;
}

void _trt__GetAudioOutputConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioOutputConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetAudioOutputConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioOutputConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioOutputConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioOutputConfiguration(soap, this->_trt__GetAudioOutputConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetAudioOutputConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioOutputConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioOutputConfiguration(soap, "trt:Configurations", -1, a->_trt__GetAudioOutputConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetAudioOutputConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse, sizeof(_trt__GetAudioOutputConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetAudioOutputConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetAudioOutputConfigurationsResponse::Configurations = (tt__AudioOutputConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioOutputConfiguration *));
					if (a->_trt__GetAudioOutputConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetAudioOutputConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "trt:Configurations", a->_trt__GetAudioOutputConfigurationsResponse::Configurations, "tt:AudioOutputConfiguration"))
				{	a->_trt__GetAudioOutputConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetAudioOutputConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetAudioOutputConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetAudioOutputConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetAudioOutputConfigurationsResponse::Configurations = (tt__AudioOutputConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetAudioOutputConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioOutputConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse, 0, sizeof(_trt__GetAudioOutputConfigurationsResponse), 0, soap_copy__trt__GetAudioOutputConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfigurationsResponse(struct soap *soap, _trt__GetAudioOutputConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfigurationsResponse);
		((_trt__GetAudioOutputConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfigurationsResponse*)p = *(_trt__GetAudioOutputConfigurationsResponse*)q;
}

void _trt__GetAudioOutputConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioOutputConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurations * SOAP_FMAC4 soap_in__trt__GetAudioOutputConfigurations(struct soap *soap, const char *tag, _trt__GetAudioOutputConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputConfigurations, sizeof(_trt__GetAudioOutputConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioOutputConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputConfigurations, 0, sizeof(_trt__GetAudioOutputConfigurations), 0, soap_copy__trt__GetAudioOutputConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioOutputConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputConfigurations * SOAP_FMAC4 soap_get__trt__GetAudioOutputConfigurations(struct soap *soap, _trt__GetAudioOutputConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputConfigurations);
		if (size)
			*size = sizeof(_trt__GetAudioOutputConfigurations);
		((_trt__GetAudioOutputConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputConfigurations %p -> %p\n", q, p));
	*(_trt__GetAudioOutputConfigurations*)p = *(_trt__GetAudioOutputConfigurations*)q;
}

void _trt__GetMetadataConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetMetadataConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetMetadataConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetMetadataConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetMetadataConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetMetadataConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__MetadataConfiguration(soap, this->_trt__GetMetadataConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetMetadataConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetMetadataConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__MetadataConfiguration(soap, "trt:Configurations", -1, a->_trt__GetMetadataConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetMetadataConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetMetadataConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfigurationsResponse, sizeof(_trt__GetMetadataConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetMetadataConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetMetadataConfigurationsResponse::Configurations = (tt__MetadataConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__MetadataConfiguration *));
					if (a->_trt__GetMetadataConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetMetadataConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__MetadataConfiguration(soap, "trt:Configurations", a->_trt__GetMetadataConfigurationsResponse::Configurations, "tt:MetadataConfiguration"))
				{	a->_trt__GetMetadataConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetMetadataConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetMetadataConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetMetadataConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetMetadataConfigurationsResponse::Configurations = (tt__MetadataConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetMetadataConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetMetadataConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfigurationsResponse, 0, sizeof(_trt__GetMetadataConfigurationsResponse), 0, soap_copy__trt__GetMetadataConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetMetadataConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetMetadataConfigurationsResponse(struct soap *soap, _trt__GetMetadataConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetMetadataConfigurationsResponse);
		((_trt__GetMetadataConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetMetadataConfigurationsResponse*)p = *(_trt__GetMetadataConfigurationsResponse*)q;
}

void _trt__GetMetadataConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetMetadataConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetMetadataConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetMetadataConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetMetadataConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetMetadataConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetMetadataConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetMetadataConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetMetadataConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurations * SOAP_FMAC4 soap_in__trt__GetMetadataConfigurations(struct soap *soap, const char *tag, _trt__GetMetadataConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetMetadataConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetMetadataConfigurations, sizeof(_trt__GetMetadataConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetMetadataConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetMetadataConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetMetadataConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetMetadataConfigurations, 0, sizeof(_trt__GetMetadataConfigurations), 0, soap_copy__trt__GetMetadataConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetMetadataConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetMetadataConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetMetadataConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetMetadataConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetMetadataConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetMetadataConfigurations * SOAP_FMAC4 soap_get__trt__GetMetadataConfigurations(struct soap *soap, _trt__GetMetadataConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetMetadataConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetMetadataConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetMetadataConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetMetadataConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetMetadataConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetMetadataConfigurations);
		if (size)
			*size = sizeof(_trt__GetMetadataConfigurations);
		((_trt__GetMetadataConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetMetadataConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetMetadataConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetMetadataConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetMetadataConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetMetadataConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetMetadataConfigurations %p -> %p\n", q, p));
	*(_trt__GetMetadataConfigurations*)p = *(_trt__GetMetadataConfigurations*)q;
}

void _trt__GetVideoAnalyticsConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoAnalyticsConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoAnalyticsConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetVideoAnalyticsConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, this->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetVideoAnalyticsConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoAnalyticsConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoAnalyticsConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoAnalyticsConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetVideoAnalyticsConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configurations", -1, a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoAnalyticsConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoAnalyticsConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetVideoAnalyticsConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetVideoAnalyticsConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoAnalyticsConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse, sizeof(_trt__GetVideoAnalyticsConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoAnalyticsConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = (tt__VideoAnalyticsConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoAnalyticsConfiguration *));
					if (a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "trt:Configurations", a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations, "tt:VideoAnalyticsConfiguration"))
				{	a->_trt__GetVideoAnalyticsConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetVideoAnalyticsConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = (tt__VideoAnalyticsConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetVideoAnalyticsConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetVideoAnalyticsConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse, 0, sizeof(_trt__GetVideoAnalyticsConfigurationsResponse), 0, soap_copy__trt__GetVideoAnalyticsConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoAnalyticsConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoAnalyticsConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoAnalyticsConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoAnalyticsConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetVideoAnalyticsConfigurationsResponse(struct soap *soap, _trt__GetVideoAnalyticsConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoAnalyticsConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoAnalyticsConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoAnalyticsConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoAnalyticsConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoAnalyticsConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoAnalyticsConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetVideoAnalyticsConfigurationsResponse);
		((_trt__GetVideoAnalyticsConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoAnalyticsConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoAnalyticsConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoAnalyticsConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoAnalyticsConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoAnalyticsConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoAnalyticsConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetVideoAnalyticsConfigurationsResponse*)p = *(_trt__GetVideoAnalyticsConfigurationsResponse*)q;
}

void _trt__GetVideoAnalyticsConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetVideoAnalyticsConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetVideoAnalyticsConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoAnalyticsConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoAnalyticsConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetVideoAnalyticsConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoAnalyticsConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoAnalyticsConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurations * SOAP_FMAC4 soap_in__trt__GetVideoAnalyticsConfigurations(struct soap *soap, const char *tag, _trt__GetVideoAnalyticsConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoAnalyticsConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoAnalyticsConfigurations, sizeof(_trt__GetVideoAnalyticsConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoAnalyticsConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoAnalyticsConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetVideoAnalyticsConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoAnalyticsConfigurations, 0, sizeof(_trt__GetVideoAnalyticsConfigurations), 0, soap_copy__trt__GetVideoAnalyticsConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoAnalyticsConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoAnalyticsConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoAnalyticsConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoAnalyticsConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoAnalyticsConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoAnalyticsConfigurations * SOAP_FMAC4 soap_get__trt__GetVideoAnalyticsConfigurations(struct soap *soap, _trt__GetVideoAnalyticsConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoAnalyticsConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoAnalyticsConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetVideoAnalyticsConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoAnalyticsConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoAnalyticsConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoAnalyticsConfigurations);
		if (size)
			*size = sizeof(_trt__GetVideoAnalyticsConfigurations);
		((_trt__GetVideoAnalyticsConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoAnalyticsConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoAnalyticsConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoAnalyticsConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoAnalyticsConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoAnalyticsConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoAnalyticsConfigurations %p -> %p\n", q, p));
	*(_trt__GetVideoAnalyticsConfigurations*)p = *(_trt__GetVideoAnalyticsConfigurations*)q;
}

void _trt__GetAudioSourceConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioSourceConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetAudioSourceConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioSourceConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioSourceConfiguration(soap, this->_trt__GetAudioSourceConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetAudioSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioSourceConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioSourceConfiguration(soap, "trt:Configurations", -1, a->_trt__GetAudioSourceConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetAudioSourceConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse, sizeof(_trt__GetAudioSourceConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetAudioSourceConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetAudioSourceConfigurationsResponse::Configurations = (tt__AudioSourceConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioSourceConfiguration *));
					if (a->_trt__GetAudioSourceConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetAudioSourceConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "trt:Configurations", a->_trt__GetAudioSourceConfigurationsResponse::Configurations, "tt:AudioSourceConfiguration"))
				{	a->_trt__GetAudioSourceConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetAudioSourceConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetAudioSourceConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetAudioSourceConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetAudioSourceConfigurationsResponse::Configurations = (tt__AudioSourceConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetAudioSourceConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioSourceConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse, 0, sizeof(_trt__GetAudioSourceConfigurationsResponse), 0, soap_copy__trt__GetAudioSourceConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfigurationsResponse(struct soap *soap, _trt__GetAudioSourceConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfigurationsResponse);
		((_trt__GetAudioSourceConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfigurationsResponse*)p = *(_trt__GetAudioSourceConfigurationsResponse*)q;
}

void _trt__GetAudioSourceConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioSourceConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourceConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourceConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourceConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourceConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourceConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourceConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourceConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurations * SOAP_FMAC4 soap_in__trt__GetAudioSourceConfigurations(struct soap *soap, const char *tag, _trt__GetAudioSourceConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourceConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourceConfigurations, sizeof(_trt__GetAudioSourceConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourceConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourceConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioSourceConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourceConfigurations, 0, sizeof(_trt__GetAudioSourceConfigurations), 0, soap_copy__trt__GetAudioSourceConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioSourceConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourceConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourceConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourceConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourceConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourceConfigurations * SOAP_FMAC4 soap_get__trt__GetAudioSourceConfigurations(struct soap *soap, _trt__GetAudioSourceConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourceConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourceConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourceConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourceConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourceConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourceConfigurations);
		if (size)
			*size = sizeof(_trt__GetAudioSourceConfigurations);
		((_trt__GetAudioSourceConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourceConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourceConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourceConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourceConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourceConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourceConfigurations %p -> %p\n", q, p));
	*(_trt__GetAudioSourceConfigurations*)p = *(_trt__GetAudioSourceConfigurations*)q;
}

void _trt__GetAudioEncoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioEncoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetAudioEncoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioEncoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__AudioEncoderConfiguration(soap, this->_trt__GetAudioEncoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetAudioEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioEncoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetAudioEncoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse, sizeof(_trt__GetAudioEncoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetAudioEncoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetAudioEncoderConfigurationsResponse::Configurations = (tt__AudioEncoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__AudioEncoderConfiguration *));
					if (a->_trt__GetAudioEncoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetAudioEncoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "trt:Configurations", a->_trt__GetAudioEncoderConfigurationsResponse::Configurations, "tt:AudioEncoderConfiguration"))
				{	a->_trt__GetAudioEncoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetAudioEncoderConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetAudioEncoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetAudioEncoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetAudioEncoderConfigurationsResponse::Configurations = (tt__AudioEncoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetAudioEncoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioEncoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse, 0, sizeof(_trt__GetAudioEncoderConfigurationsResponse), 0, soap_copy__trt__GetAudioEncoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfigurationsResponse(struct soap *soap, _trt__GetAudioEncoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfigurationsResponse);
		((_trt__GetAudioEncoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfigurationsResponse*)p = *(_trt__GetAudioEncoderConfigurationsResponse*)q;
}

void _trt__GetAudioEncoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioEncoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioEncoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioEncoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioEncoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetAudioEncoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioEncoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioEncoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurations * SOAP_FMAC4 soap_in__trt__GetAudioEncoderConfigurations(struct soap *soap, const char *tag, _trt__GetAudioEncoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioEncoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioEncoderConfigurations, sizeof(_trt__GetAudioEncoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioEncoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioEncoderConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioEncoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioEncoderConfigurations, 0, sizeof(_trt__GetAudioEncoderConfigurations), 0, soap_copy__trt__GetAudioEncoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioEncoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioEncoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioEncoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioEncoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioEncoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioEncoderConfigurations * SOAP_FMAC4 soap_get__trt__GetAudioEncoderConfigurations(struct soap *soap, _trt__GetAudioEncoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioEncoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioEncoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetAudioEncoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioEncoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioEncoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioEncoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetAudioEncoderConfigurations);
		((_trt__GetAudioEncoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioEncoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioEncoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioEncoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioEncoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioEncoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioEncoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetAudioEncoderConfigurations*)p = *(_trt__GetAudioEncoderConfigurations*)q;
}

void _trt__GetVideoSourceConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoSourceConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetVideoSourceConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetVideoSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetVideoSourceConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoSourceConfiguration(soap, this->_trt__GetVideoSourceConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetVideoSourceConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetVideoSourceConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoSourceConfiguration(soap, "trt:Configurations", -1, a->_trt__GetVideoSourceConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetVideoSourceConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse, sizeof(_trt__GetVideoSourceConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetVideoSourceConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetVideoSourceConfigurationsResponse::Configurations = (tt__VideoSourceConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoSourceConfiguration *));
					if (a->_trt__GetVideoSourceConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetVideoSourceConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "trt:Configurations", a->_trt__GetVideoSourceConfigurationsResponse::Configurations, "tt:VideoSourceConfiguration"))
				{	a->_trt__GetVideoSourceConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetVideoSourceConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetVideoSourceConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetVideoSourceConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetVideoSourceConfigurationsResponse::Configurations = (tt__VideoSourceConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetVideoSourceConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetVideoSourceConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse, 0, sizeof(_trt__GetVideoSourceConfigurationsResponse), 0, soap_copy__trt__GetVideoSourceConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfigurationsResponse(struct soap *soap, _trt__GetVideoSourceConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfigurationsResponse);
		((_trt__GetVideoSourceConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfigurationsResponse*)p = *(_trt__GetVideoSourceConfigurationsResponse*)q;
}

void _trt__GetVideoSourceConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetVideoSourceConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourceConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourceConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourceConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourceConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourceConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourceConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourceConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurations * SOAP_FMAC4 soap_in__trt__GetVideoSourceConfigurations(struct soap *soap, const char *tag, _trt__GetVideoSourceConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourceConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourceConfigurations, sizeof(_trt__GetVideoSourceConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourceConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourceConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetVideoSourceConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourceConfigurations, 0, sizeof(_trt__GetVideoSourceConfigurations), 0, soap_copy__trt__GetVideoSourceConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoSourceConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourceConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourceConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourceConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourceConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourceConfigurations * SOAP_FMAC4 soap_get__trt__GetVideoSourceConfigurations(struct soap *soap, _trt__GetVideoSourceConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourceConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourceConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourceConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourceConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourceConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourceConfigurations);
		if (size)
			*size = sizeof(_trt__GetVideoSourceConfigurations);
		((_trt__GetVideoSourceConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourceConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourceConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourceConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourceConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourceConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourceConfigurations %p -> %p\n", q, p));
	*(_trt__GetVideoSourceConfigurations*)p = *(_trt__GetVideoSourceConfigurations*)q;
}

void _trt__GetVideoEncoderConfigurationsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoEncoderConfigurationsResponse::__sizeConfigurations = 0;
	this->_trt__GetVideoEncoderConfigurationsResponse::Configurations = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfigurationsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetVideoEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < this->_trt__GetVideoEncoderConfigurationsResponse::__sizeConfigurations; i++)
		{
			soap_serialize_PointerTott__VideoEncoderConfiguration(soap, this->_trt__GetVideoEncoderConfigurationsResponse::Configurations + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfigurationsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfigurationsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfigurationsResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfigurationsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfigurations");
	if (a->_trt__GetVideoEncoderConfigurationsResponse::Configurations)
	{	int i;
		for (i = 0; i < a->_trt__GetVideoEncoderConfigurationsResponse::__sizeConfigurations; i++)
			if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "trt:Configurations", -1, a->_trt__GetVideoEncoderConfigurationsResponse::Configurations + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfigurationsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfigurationsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationsResponse * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfigurationsResponse(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfigurationsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfigurationsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse, sizeof(_trt__GetVideoEncoderConfigurationsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfigurationsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Configurations1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Configurations", 1, NULL))
			{	if (a->_trt__GetVideoEncoderConfigurationsResponse::Configurations == NULL)
				{	if (soap_blist_Configurations1 == NULL)
						soap_blist_Configurations1 = soap_new_block(soap);
					a->_trt__GetVideoEncoderConfigurationsResponse::Configurations = (tt__VideoEncoderConfiguration **)soap_push_block(soap, soap_blist_Configurations1, sizeof(tt__VideoEncoderConfiguration *));
					if (a->_trt__GetVideoEncoderConfigurationsResponse::Configurations == NULL)
						return NULL;
					*a->_trt__GetVideoEncoderConfigurationsResponse::Configurations = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "trt:Configurations", a->_trt__GetVideoEncoderConfigurationsResponse::Configurations, "tt:VideoEncoderConfiguration"))
				{	a->_trt__GetVideoEncoderConfigurationsResponse::__sizeConfigurations++;
					a->_trt__GetVideoEncoderConfigurationsResponse::Configurations = NULL;
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
		if (a->_trt__GetVideoEncoderConfigurationsResponse::Configurations)
			soap_pop_block(soap, soap_blist_Configurations1);
		if (a->_trt__GetVideoEncoderConfigurationsResponse::__sizeConfigurations)
			a->_trt__GetVideoEncoderConfigurationsResponse::Configurations = (tt__VideoEncoderConfiguration **)soap_save_block(soap, soap_blist_Configurations1, NULL, 1);
		else
		{	a->_trt__GetVideoEncoderConfigurationsResponse::Configurations = NULL;
			if (soap_blist_Configurations1)
				soap_end_block(soap, soap_blist_Configurations1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetVideoEncoderConfigurationsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse, 0, sizeof(_trt__GetVideoEncoderConfigurationsResponse), 0, soap_copy__trt__GetVideoEncoderConfigurationsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfigurationsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfigurationsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfigurationsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfigurationsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurationsResponse * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfigurationsResponse(struct soap *soap, _trt__GetVideoEncoderConfigurationsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfigurationsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfigurationsResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfigurationsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfigurationsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfigurationsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfigurationsResponse);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfigurationsResponse);
		((_trt__GetVideoEncoderConfigurationsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfigurationsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfigurationsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfigurationsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfigurationsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfigurationsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfigurationsResponse %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfigurationsResponse*)p = *(_trt__GetVideoEncoderConfigurationsResponse*)q;
}

void _trt__GetVideoEncoderConfigurations::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetVideoEncoderConfigurations::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetVideoEncoderConfigurations::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoEncoderConfigurations(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoEncoderConfigurations(struct soap *soap, const char *tag, int id, const _trt__GetVideoEncoderConfigurations *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurations), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoEncoderConfigurations::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoEncoderConfigurations(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurations * SOAP_FMAC4 soap_in__trt__GetVideoEncoderConfigurations(struct soap *soap, const char *tag, _trt__GetVideoEncoderConfigurations *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoEncoderConfigurations *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoEncoderConfigurations, sizeof(_trt__GetVideoEncoderConfigurations), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoEncoderConfigurations)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoEncoderConfigurations *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetVideoEncoderConfigurations *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoEncoderConfigurations, 0, sizeof(_trt__GetVideoEncoderConfigurations), 0, soap_copy__trt__GetVideoEncoderConfigurations);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoEncoderConfigurations::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoEncoderConfigurations);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoEncoderConfigurations", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoEncoderConfigurations::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoEncoderConfigurations(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoEncoderConfigurations * SOAP_FMAC4 soap_get__trt__GetVideoEncoderConfigurations(struct soap *soap, _trt__GetVideoEncoderConfigurations *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoEncoderConfigurations(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoEncoderConfigurations * SOAP_FMAC2 soap_instantiate__trt__GetVideoEncoderConfigurations(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoEncoderConfigurations(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoEncoderConfigurations, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoEncoderConfigurations);
		if (size)
			*size = sizeof(_trt__GetVideoEncoderConfigurations);
		((_trt__GetVideoEncoderConfigurations*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoEncoderConfigurations, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoEncoderConfigurations);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoEncoderConfigurations*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoEncoderConfigurations*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoEncoderConfigurations(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoEncoderConfigurations %p -> %p\n", q, p));
	*(_trt__GetVideoEncoderConfigurations*)p = *(_trt__GetVideoEncoderConfigurations*)q;
}

void _trt__DeleteProfileResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__DeleteProfileResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__DeleteProfileResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__DeleteProfileResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__DeleteProfileResponse(struct soap *soap, const char *tag, int id, const _trt__DeleteProfileResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__DeleteProfileResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__DeleteProfileResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__DeleteProfileResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__DeleteProfileResponse * SOAP_FMAC4 soap_in__trt__DeleteProfileResponse(struct soap *soap, const char *tag, _trt__DeleteProfileResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__DeleteProfileResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__DeleteProfileResponse, sizeof(_trt__DeleteProfileResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__DeleteProfileResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__DeleteProfileResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__DeleteProfileResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__DeleteProfileResponse, 0, sizeof(_trt__DeleteProfileResponse), 0, soap_copy__trt__DeleteProfileResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__DeleteProfileResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__DeleteProfileResponse);
	if (this->soap_out(soap, tag?tag:"trt:DeleteProfileResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__DeleteProfileResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__DeleteProfileResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__DeleteProfileResponse * SOAP_FMAC4 soap_get__trt__DeleteProfileResponse(struct soap *soap, _trt__DeleteProfileResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__DeleteProfileResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__DeleteProfileResponse * SOAP_FMAC2 soap_instantiate__trt__DeleteProfileResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__DeleteProfileResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__DeleteProfileResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__DeleteProfileResponse);
		if (size)
			*size = sizeof(_trt__DeleteProfileResponse);
		((_trt__DeleteProfileResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__DeleteProfileResponse, n);
		if (size)
			*size = n * sizeof(_trt__DeleteProfileResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__DeleteProfileResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__DeleteProfileResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__DeleteProfileResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__DeleteProfileResponse %p -> %p\n", q, p));
	*(_trt__DeleteProfileResponse*)p = *(_trt__DeleteProfileResponse*)q;
}

void _trt__DeleteProfile::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__DeleteProfile::ProfileToken);
	/* transient soap skipped */
}

void _trt__DeleteProfile::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__DeleteProfile::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__DeleteProfile::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__DeleteProfile(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__DeleteProfile(struct soap *soap, const char *tag, int id, const _trt__DeleteProfile *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__DeleteProfile), type))
		return soap->error;
	if (a->_trt__DeleteProfile::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__DeleteProfile::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__DeleteProfile::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__DeleteProfile(soap, tag, this, type);
}

SOAP_FMAC3 _trt__DeleteProfile * SOAP_FMAC4 soap_in__trt__DeleteProfile(struct soap *soap, const char *tag, _trt__DeleteProfile *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__DeleteProfile *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__DeleteProfile, sizeof(_trt__DeleteProfile), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__DeleteProfile)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__DeleteProfile *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__DeleteProfile::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__DeleteProfile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__DeleteProfile, 0, sizeof(_trt__DeleteProfile), 0, soap_copy__trt__DeleteProfile);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__DeleteProfile::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__DeleteProfile);
	if (this->soap_out(soap, tag?tag:"trt:DeleteProfile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__DeleteProfile::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__DeleteProfile(soap, this, tag, type);
}

SOAP_FMAC3 _trt__DeleteProfile * SOAP_FMAC4 soap_get__trt__DeleteProfile(struct soap *soap, _trt__DeleteProfile *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__DeleteProfile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__DeleteProfile * SOAP_FMAC2 soap_instantiate__trt__DeleteProfile(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__DeleteProfile(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__DeleteProfile, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__DeleteProfile);
		if (size)
			*size = sizeof(_trt__DeleteProfile);
		((_trt__DeleteProfile*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__DeleteProfile, n);
		if (size)
			*size = n * sizeof(_trt__DeleteProfile);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__DeleteProfile*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__DeleteProfile*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__DeleteProfile(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__DeleteProfile %p -> %p\n", q, p));
	*(_trt__DeleteProfile*)p = *(_trt__DeleteProfile*)q;
}

void _trt__RemoveAudioDecoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveAudioDecoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioDecoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioDecoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioDecoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioDecoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioDecoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveAudioDecoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioDecoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse, sizeof(_trt__RemoveAudioDecoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioDecoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveAudioDecoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse, 0, sizeof(_trt__RemoveAudioDecoderConfigurationResponse), 0, soap_copy__trt__RemoveAudioDecoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveAudioDecoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioDecoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioDecoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioDecoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveAudioDecoderConfigurationResponse(struct soap *soap, _trt__RemoveAudioDecoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioDecoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioDecoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioDecoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioDecoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioDecoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioDecoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveAudioDecoderConfigurationResponse);
		((_trt__RemoveAudioDecoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioDecoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioDecoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioDecoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioDecoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioDecoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioDecoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveAudioDecoderConfigurationResponse*)p = *(_trt__RemoveAudioDecoderConfigurationResponse*)q;
}

void _trt__RemoveAudioDecoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveAudioDecoderConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveAudioDecoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveAudioDecoderConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioDecoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioDecoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioDecoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioDecoderConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveAudioDecoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveAudioDecoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioDecoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioDecoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioDecoderConfiguration * SOAP_FMAC4 soap_in__trt__RemoveAudioDecoderConfiguration(struct soap *soap, const char *tag, _trt__RemoveAudioDecoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioDecoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioDecoderConfiguration, sizeof(_trt__RemoveAudioDecoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioDecoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioDecoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveAudioDecoderConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveAudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioDecoderConfiguration, 0, sizeof(_trt__RemoveAudioDecoderConfiguration), 0, soap_copy__trt__RemoveAudioDecoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveAudioDecoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioDecoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioDecoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioDecoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioDecoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioDecoderConfiguration * SOAP_FMAC4 soap_get__trt__RemoveAudioDecoderConfiguration(struct soap *soap, _trt__RemoveAudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioDecoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioDecoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioDecoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioDecoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioDecoderConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveAudioDecoderConfiguration);
		((_trt__RemoveAudioDecoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioDecoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioDecoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioDecoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioDecoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioDecoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioDecoderConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveAudioDecoderConfiguration*)p = *(_trt__RemoveAudioDecoderConfiguration*)q;
}

void _trt__AddAudioDecoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddAudioDecoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddAudioDecoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioDecoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddAudioDecoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioDecoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioDecoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddAudioDecoderConfigurationResponse(struct soap *soap, const char *tag, _trt__AddAudioDecoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioDecoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse, sizeof(_trt__AddAudioDecoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioDecoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddAudioDecoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse, 0, sizeof(_trt__AddAudioDecoderConfigurationResponse), 0, soap_copy__trt__AddAudioDecoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddAudioDecoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioDecoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioDecoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioDecoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioDecoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddAudioDecoderConfigurationResponse(struct soap *soap, _trt__AddAudioDecoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioDecoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioDecoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddAudioDecoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioDecoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioDecoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioDecoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddAudioDecoderConfigurationResponse);
		((_trt__AddAudioDecoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioDecoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioDecoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioDecoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioDecoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioDecoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioDecoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddAudioDecoderConfigurationResponse*)p = *(_trt__AddAudioDecoderConfigurationResponse*)q;
}

void _trt__AddAudioDecoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioDecoderConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioDecoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddAudioDecoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioDecoderConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioDecoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddAudioDecoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioDecoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioDecoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddAudioDecoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioDecoderConfiguration), type))
		return soap->error;
	if (a->_trt__AddAudioDecoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddAudioDecoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddAudioDecoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddAudioDecoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioDecoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioDecoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioDecoderConfiguration * SOAP_FMAC4 soap_in__trt__AddAudioDecoderConfiguration(struct soap *soap, const char *tag, _trt__AddAudioDecoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioDecoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioDecoderConfiguration, sizeof(_trt__AddAudioDecoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioDecoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioDecoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddAudioDecoderConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddAudioDecoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddAudioDecoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioDecoderConfiguration, 0, sizeof(_trt__AddAudioDecoderConfiguration), 0, soap_copy__trt__AddAudioDecoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddAudioDecoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioDecoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioDecoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioDecoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioDecoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioDecoderConfiguration * SOAP_FMAC4 soap_get__trt__AddAudioDecoderConfiguration(struct soap *soap, _trt__AddAudioDecoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioDecoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioDecoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddAudioDecoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioDecoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioDecoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioDecoderConfiguration);
		if (size)
			*size = sizeof(_trt__AddAudioDecoderConfiguration);
		((_trt__AddAudioDecoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioDecoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioDecoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioDecoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioDecoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioDecoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioDecoderConfiguration %p -> %p\n", q, p));
	*(_trt__AddAudioDecoderConfiguration*)p = *(_trt__AddAudioDecoderConfiguration*)q;
}

void _trt__RemoveAudioOutputConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveAudioOutputConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioOutputConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioOutputConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioOutputConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioOutputConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioOutputConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioOutputConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioOutputConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveAudioOutputConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveAudioOutputConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioOutputConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse, sizeof(_trt__RemoveAudioOutputConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioOutputConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveAudioOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse, 0, sizeof(_trt__RemoveAudioOutputConfigurationResponse), 0, soap_copy__trt__RemoveAudioOutputConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveAudioOutputConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioOutputConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioOutputConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioOutputConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioOutputConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveAudioOutputConfigurationResponse(struct soap *soap, _trt__RemoveAudioOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioOutputConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioOutputConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioOutputConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioOutputConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioOutputConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveAudioOutputConfigurationResponse);
		((_trt__RemoveAudioOutputConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioOutputConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioOutputConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioOutputConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioOutputConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioOutputConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioOutputConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveAudioOutputConfigurationResponse*)p = *(_trt__RemoveAudioOutputConfigurationResponse*)q;
}

void _trt__RemoveAudioOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveAudioOutputConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveAudioOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveAudioOutputConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioOutputConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioOutputConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioOutputConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveAudioOutputConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveAudioOutputConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioOutputConfiguration * SOAP_FMAC4 soap_in__trt__RemoveAudioOutputConfiguration(struct soap *soap, const char *tag, _trt__RemoveAudioOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioOutputConfiguration, sizeof(_trt__RemoveAudioOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveAudioOutputConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveAudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioOutputConfiguration, 0, sizeof(_trt__RemoveAudioOutputConfiguration), 0, soap_copy__trt__RemoveAudioOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveAudioOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioOutputConfiguration * SOAP_FMAC4 soap_get__trt__RemoveAudioOutputConfiguration(struct soap *soap, _trt__RemoveAudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioOutputConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioOutputConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveAudioOutputConfiguration);
		((_trt__RemoveAudioOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioOutputConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioOutputConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveAudioOutputConfiguration*)p = *(_trt__RemoveAudioOutputConfiguration*)q;
}

void _trt__AddAudioOutputConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddAudioOutputConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddAudioOutputConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioOutputConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioOutputConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddAudioOutputConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioOutputConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioOutputConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioOutputConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioOutputConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddAudioOutputConfigurationResponse(struct soap *soap, const char *tag, _trt__AddAudioOutputConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioOutputConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioOutputConfigurationResponse, sizeof(_trt__AddAudioOutputConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioOutputConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioOutputConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddAudioOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioOutputConfigurationResponse, 0, sizeof(_trt__AddAudioOutputConfigurationResponse), 0, soap_copy__trt__AddAudioOutputConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddAudioOutputConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioOutputConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioOutputConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioOutputConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioOutputConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioOutputConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddAudioOutputConfigurationResponse(struct soap *soap, _trt__AddAudioOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioOutputConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddAudioOutputConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioOutputConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioOutputConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioOutputConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddAudioOutputConfigurationResponse);
		((_trt__AddAudioOutputConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioOutputConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioOutputConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioOutputConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioOutputConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioOutputConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioOutputConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddAudioOutputConfigurationResponse*)p = *(_trt__AddAudioOutputConfigurationResponse*)q;
}

void _trt__AddAudioOutputConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioOutputConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioOutputConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddAudioOutputConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioOutputConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioOutputConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddAudioOutputConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioOutputConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioOutputConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddAudioOutputConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioOutputConfiguration), type))
		return soap->error;
	if (a->_trt__AddAudioOutputConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddAudioOutputConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddAudioOutputConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddAudioOutputConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioOutputConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioOutputConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioOutputConfiguration * SOAP_FMAC4 soap_in__trt__AddAudioOutputConfiguration(struct soap *soap, const char *tag, _trt__AddAudioOutputConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioOutputConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioOutputConfiguration, sizeof(_trt__AddAudioOutputConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioOutputConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioOutputConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddAudioOutputConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddAudioOutputConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddAudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioOutputConfiguration, 0, sizeof(_trt__AddAudioOutputConfiguration), 0, soap_copy__trt__AddAudioOutputConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddAudioOutputConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioOutputConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioOutputConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioOutputConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioOutputConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioOutputConfiguration * SOAP_FMAC4 soap_get__trt__AddAudioOutputConfiguration(struct soap *soap, _trt__AddAudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioOutputConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddAudioOutputConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioOutputConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioOutputConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioOutputConfiguration);
		if (size)
			*size = sizeof(_trt__AddAudioOutputConfiguration);
		((_trt__AddAudioOutputConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioOutputConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioOutputConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioOutputConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioOutputConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioOutputConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioOutputConfiguration %p -> %p\n", q, p));
	*(_trt__AddAudioOutputConfiguration*)p = *(_trt__AddAudioOutputConfiguration*)q;
}

void _trt__RemoveMetadataConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveMetadataConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveMetadataConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveMetadataConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveMetadataConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveMetadataConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveMetadataConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveMetadataConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveMetadataConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveMetadataConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveMetadataConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveMetadataConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveMetadataConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveMetadataConfigurationResponse, sizeof(_trt__RemoveMetadataConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveMetadataConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveMetadataConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveMetadataConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveMetadataConfigurationResponse, 0, sizeof(_trt__RemoveMetadataConfigurationResponse), 0, soap_copy__trt__RemoveMetadataConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveMetadataConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveMetadataConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveMetadataConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveMetadataConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveMetadataConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveMetadataConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveMetadataConfigurationResponse(struct soap *soap, _trt__RemoveMetadataConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveMetadataConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveMetadataConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveMetadataConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveMetadataConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveMetadataConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveMetadataConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveMetadataConfigurationResponse);
		((_trt__RemoveMetadataConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveMetadataConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveMetadataConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveMetadataConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveMetadataConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveMetadataConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveMetadataConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveMetadataConfigurationResponse*)p = *(_trt__RemoveMetadataConfigurationResponse*)q;
}

void _trt__RemoveMetadataConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveMetadataConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveMetadataConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveMetadataConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveMetadataConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveMetadataConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveMetadataConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveMetadataConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveMetadataConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveMetadataConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveMetadataConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveMetadataConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveMetadataConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveMetadataConfiguration * SOAP_FMAC4 soap_in__trt__RemoveMetadataConfiguration(struct soap *soap, const char *tag, _trt__RemoveMetadataConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveMetadataConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveMetadataConfiguration, sizeof(_trt__RemoveMetadataConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveMetadataConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveMetadataConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveMetadataConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveMetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveMetadataConfiguration, 0, sizeof(_trt__RemoveMetadataConfiguration), 0, soap_copy__trt__RemoveMetadataConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveMetadataConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveMetadataConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveMetadataConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveMetadataConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveMetadataConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveMetadataConfiguration * SOAP_FMAC4 soap_get__trt__RemoveMetadataConfiguration(struct soap *soap, _trt__RemoveMetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveMetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveMetadataConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveMetadataConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveMetadataConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveMetadataConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveMetadataConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveMetadataConfiguration);
		((_trt__RemoveMetadataConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveMetadataConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveMetadataConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveMetadataConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveMetadataConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveMetadataConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveMetadataConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveMetadataConfiguration*)p = *(_trt__RemoveMetadataConfiguration*)q;
}

void _trt__AddMetadataConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddMetadataConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddMetadataConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddMetadataConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddMetadataConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddMetadataConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddMetadataConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddMetadataConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddMetadataConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddMetadataConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddMetadataConfigurationResponse(struct soap *soap, const char *tag, _trt__AddMetadataConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddMetadataConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddMetadataConfigurationResponse, sizeof(_trt__AddMetadataConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddMetadataConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddMetadataConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddMetadataConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddMetadataConfigurationResponse, 0, sizeof(_trt__AddMetadataConfigurationResponse), 0, soap_copy__trt__AddMetadataConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddMetadataConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddMetadataConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddMetadataConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddMetadataConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddMetadataConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddMetadataConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddMetadataConfigurationResponse(struct soap *soap, _trt__AddMetadataConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddMetadataConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddMetadataConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddMetadataConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddMetadataConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddMetadataConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddMetadataConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddMetadataConfigurationResponse);
		((_trt__AddMetadataConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddMetadataConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddMetadataConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddMetadataConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddMetadataConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddMetadataConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddMetadataConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddMetadataConfigurationResponse*)p = *(_trt__AddMetadataConfigurationResponse*)q;
}

void _trt__AddMetadataConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddMetadataConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddMetadataConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddMetadataConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddMetadataConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddMetadataConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddMetadataConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddMetadataConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddMetadataConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddMetadataConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddMetadataConfiguration), type))
		return soap->error;
	if (a->_trt__AddMetadataConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddMetadataConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddMetadataConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddMetadataConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddMetadataConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddMetadataConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddMetadataConfiguration * SOAP_FMAC4 soap_in__trt__AddMetadataConfiguration(struct soap *soap, const char *tag, _trt__AddMetadataConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddMetadataConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddMetadataConfiguration, sizeof(_trt__AddMetadataConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddMetadataConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddMetadataConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddMetadataConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddMetadataConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddMetadataConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddMetadataConfiguration, 0, sizeof(_trt__AddMetadataConfiguration), 0, soap_copy__trt__AddMetadataConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddMetadataConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddMetadataConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddMetadataConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddMetadataConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddMetadataConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddMetadataConfiguration * SOAP_FMAC4 soap_get__trt__AddMetadataConfiguration(struct soap *soap, _trt__AddMetadataConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddMetadataConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddMetadataConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddMetadataConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddMetadataConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddMetadataConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddMetadataConfiguration);
		if (size)
			*size = sizeof(_trt__AddMetadataConfiguration);
		((_trt__AddMetadataConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddMetadataConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddMetadataConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddMetadataConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddMetadataConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddMetadataConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddMetadataConfiguration %p -> %p\n", q, p));
	*(_trt__AddMetadataConfiguration*)p = *(_trt__AddMetadataConfiguration*)q;
}

void _trt__RemoveVideoAnalyticsConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveVideoAnalyticsConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoAnalyticsConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoAnalyticsConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoAnalyticsConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoAnalyticsConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoAnalyticsConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoAnalyticsConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse, sizeof(_trt__RemoveVideoAnalyticsConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoAnalyticsConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse, 0, sizeof(_trt__RemoveVideoAnalyticsConfigurationResponse), 0, soap_copy__trt__RemoveVideoAnalyticsConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveVideoAnalyticsConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoAnalyticsConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoAnalyticsConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoAnalyticsConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveVideoAnalyticsConfigurationResponse(struct soap *soap, _trt__RemoveVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoAnalyticsConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoAnalyticsConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoAnalyticsConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoAnalyticsConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoAnalyticsConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveVideoAnalyticsConfigurationResponse);
		((_trt__RemoveVideoAnalyticsConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoAnalyticsConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoAnalyticsConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoAnalyticsConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoAnalyticsConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoAnalyticsConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoAnalyticsConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveVideoAnalyticsConfigurationResponse*)p = *(_trt__RemoveVideoAnalyticsConfigurationResponse*)q;
}

void _trt__RemoveVideoAnalyticsConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveVideoAnalyticsConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveVideoAnalyticsConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveVideoAnalyticsConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoAnalyticsConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoAnalyticsConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoAnalyticsConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveVideoAnalyticsConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveVideoAnalyticsConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoAnalyticsConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoAnalyticsConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__trt__RemoveVideoAnalyticsConfiguration(struct soap *soap, const char *tag, _trt__RemoveVideoAnalyticsConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoAnalyticsConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration, sizeof(_trt__RemoveVideoAnalyticsConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoAnalyticsConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveVideoAnalyticsConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration, 0, sizeof(_trt__RemoveVideoAnalyticsConfiguration), 0, soap_copy__trt__RemoveVideoAnalyticsConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveVideoAnalyticsConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoAnalyticsConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoAnalyticsConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoAnalyticsConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__trt__RemoveVideoAnalyticsConfiguration(struct soap *soap, _trt__RemoveVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoAnalyticsConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoAnalyticsConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoAnalyticsConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoAnalyticsConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoAnalyticsConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveVideoAnalyticsConfiguration);
		((_trt__RemoveVideoAnalyticsConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoAnalyticsConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoAnalyticsConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoAnalyticsConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoAnalyticsConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoAnalyticsConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoAnalyticsConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveVideoAnalyticsConfiguration*)p = *(_trt__RemoveVideoAnalyticsConfiguration*)q;
}

void _trt__AddVideoAnalyticsConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddVideoAnalyticsConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddVideoAnalyticsConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoAnalyticsConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddVideoAnalyticsConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoAnalyticsConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoAnalyticsConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, _trt__AddVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoAnalyticsConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse, sizeof(_trt__AddVideoAnalyticsConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoAnalyticsConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse, 0, sizeof(_trt__AddVideoAnalyticsConfigurationResponse), 0, soap_copy__trt__AddVideoAnalyticsConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddVideoAnalyticsConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoAnalyticsConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoAnalyticsConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoAnalyticsConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddVideoAnalyticsConfigurationResponse(struct soap *soap, _trt__AddVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoAnalyticsConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddVideoAnalyticsConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoAnalyticsConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoAnalyticsConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoAnalyticsConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddVideoAnalyticsConfigurationResponse);
		((_trt__AddVideoAnalyticsConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoAnalyticsConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoAnalyticsConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoAnalyticsConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoAnalyticsConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoAnalyticsConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoAnalyticsConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddVideoAnalyticsConfigurationResponse*)p = *(_trt__AddVideoAnalyticsConfigurationResponse*)q;
}

void _trt__AddVideoAnalyticsConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoAnalyticsConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoAnalyticsConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddVideoAnalyticsConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoAnalyticsConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoAnalyticsConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddVideoAnalyticsConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoAnalyticsConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddVideoAnalyticsConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->_trt__AddVideoAnalyticsConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddVideoAnalyticsConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddVideoAnalyticsConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddVideoAnalyticsConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoAnalyticsConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoAnalyticsConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__trt__AddVideoAnalyticsConfiguration(struct soap *soap, const char *tag, _trt__AddVideoAnalyticsConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoAnalyticsConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoAnalyticsConfiguration, sizeof(_trt__AddVideoAnalyticsConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoAnalyticsConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoAnalyticsConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddVideoAnalyticsConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddVideoAnalyticsConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoAnalyticsConfiguration, 0, sizeof(_trt__AddVideoAnalyticsConfiguration), 0, soap_copy__trt__AddVideoAnalyticsConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddVideoAnalyticsConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoAnalyticsConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoAnalyticsConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoAnalyticsConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoAnalyticsConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__trt__AddVideoAnalyticsConfiguration(struct soap *soap, _trt__AddVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoAnalyticsConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddVideoAnalyticsConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoAnalyticsConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoAnalyticsConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoAnalyticsConfiguration);
		if (size)
			*size = sizeof(_trt__AddVideoAnalyticsConfiguration);
		((_trt__AddVideoAnalyticsConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoAnalyticsConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoAnalyticsConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoAnalyticsConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoAnalyticsConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoAnalyticsConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoAnalyticsConfiguration %p -> %p\n", q, p));
	*(_trt__AddVideoAnalyticsConfiguration*)p = *(_trt__AddVideoAnalyticsConfiguration*)q;
}

void _trt__RemovePTZConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemovePTZConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemovePTZConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemovePTZConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemovePTZConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemovePTZConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemovePTZConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemovePTZConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemovePTZConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemovePTZConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemovePTZConfigurationResponse(struct soap *soap, const char *tag, _trt__RemovePTZConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemovePTZConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemovePTZConfigurationResponse, sizeof(_trt__RemovePTZConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemovePTZConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemovePTZConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemovePTZConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemovePTZConfigurationResponse, 0, sizeof(_trt__RemovePTZConfigurationResponse), 0, soap_copy__trt__RemovePTZConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemovePTZConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemovePTZConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemovePTZConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemovePTZConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemovePTZConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemovePTZConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemovePTZConfigurationResponse(struct soap *soap, _trt__RemovePTZConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemovePTZConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemovePTZConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemovePTZConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemovePTZConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemovePTZConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemovePTZConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemovePTZConfigurationResponse);
		((_trt__RemovePTZConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemovePTZConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemovePTZConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemovePTZConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemovePTZConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemovePTZConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemovePTZConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemovePTZConfigurationResponse*)p = *(_trt__RemovePTZConfigurationResponse*)q;
}

void _trt__RemovePTZConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemovePTZConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemovePTZConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemovePTZConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemovePTZConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemovePTZConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemovePTZConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemovePTZConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemovePTZConfiguration), type))
		return soap->error;
	if (a->_trt__RemovePTZConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemovePTZConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemovePTZConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemovePTZConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemovePTZConfiguration * SOAP_FMAC4 soap_in__trt__RemovePTZConfiguration(struct soap *soap, const char *tag, _trt__RemovePTZConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemovePTZConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemovePTZConfiguration, sizeof(_trt__RemovePTZConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemovePTZConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemovePTZConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemovePTZConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemovePTZConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemovePTZConfiguration, 0, sizeof(_trt__RemovePTZConfiguration), 0, soap_copy__trt__RemovePTZConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemovePTZConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemovePTZConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemovePTZConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemovePTZConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemovePTZConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemovePTZConfiguration * SOAP_FMAC4 soap_get__trt__RemovePTZConfiguration(struct soap *soap, _trt__RemovePTZConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemovePTZConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemovePTZConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemovePTZConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemovePTZConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemovePTZConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemovePTZConfiguration);
		if (size)
			*size = sizeof(_trt__RemovePTZConfiguration);
		((_trt__RemovePTZConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemovePTZConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemovePTZConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemovePTZConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemovePTZConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemovePTZConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemovePTZConfiguration %p -> %p\n", q, p));
	*(_trt__RemovePTZConfiguration*)p = *(_trt__RemovePTZConfiguration*)q;
}

void _trt__AddPTZConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddPTZConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddPTZConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddPTZConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddPTZConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddPTZConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddPTZConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddPTZConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddPTZConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddPTZConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddPTZConfigurationResponse(struct soap *soap, const char *tag, _trt__AddPTZConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddPTZConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddPTZConfigurationResponse, sizeof(_trt__AddPTZConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddPTZConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddPTZConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddPTZConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddPTZConfigurationResponse, 0, sizeof(_trt__AddPTZConfigurationResponse), 0, soap_copy__trt__AddPTZConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddPTZConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddPTZConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddPTZConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddPTZConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddPTZConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddPTZConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddPTZConfigurationResponse(struct soap *soap, _trt__AddPTZConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddPTZConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddPTZConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddPTZConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddPTZConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddPTZConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddPTZConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddPTZConfigurationResponse);
		((_trt__AddPTZConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddPTZConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddPTZConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddPTZConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddPTZConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddPTZConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddPTZConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddPTZConfigurationResponse*)p = *(_trt__AddPTZConfigurationResponse*)q;
}

void _trt__AddPTZConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddPTZConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddPTZConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddPTZConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddPTZConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddPTZConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddPTZConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddPTZConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddPTZConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddPTZConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddPTZConfiguration), type))
		return soap->error;
	if (a->_trt__AddPTZConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddPTZConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddPTZConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddPTZConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddPTZConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddPTZConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddPTZConfiguration * SOAP_FMAC4 soap_in__trt__AddPTZConfiguration(struct soap *soap, const char *tag, _trt__AddPTZConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddPTZConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddPTZConfiguration, sizeof(_trt__AddPTZConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddPTZConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddPTZConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddPTZConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddPTZConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddPTZConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddPTZConfiguration, 0, sizeof(_trt__AddPTZConfiguration), 0, soap_copy__trt__AddPTZConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddPTZConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddPTZConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddPTZConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddPTZConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddPTZConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddPTZConfiguration * SOAP_FMAC4 soap_get__trt__AddPTZConfiguration(struct soap *soap, _trt__AddPTZConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddPTZConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddPTZConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddPTZConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddPTZConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddPTZConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddPTZConfiguration);
		if (size)
			*size = sizeof(_trt__AddPTZConfiguration);
		((_trt__AddPTZConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddPTZConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddPTZConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddPTZConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddPTZConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddPTZConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddPTZConfiguration %p -> %p\n", q, p));
	*(_trt__AddPTZConfiguration*)p = *(_trt__AddPTZConfiguration*)q;
}

void _trt__RemoveAudioSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveAudioSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveAudioSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveAudioSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse, sizeof(_trt__RemoveAudioSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioSourceConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveAudioSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse, 0, sizeof(_trt__RemoveAudioSourceConfigurationResponse), 0, soap_copy__trt__RemoveAudioSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveAudioSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveAudioSourceConfigurationResponse(struct soap *soap, _trt__RemoveAudioSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveAudioSourceConfigurationResponse);
		((_trt__RemoveAudioSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveAudioSourceConfigurationResponse*)p = *(_trt__RemoveAudioSourceConfigurationResponse*)q;
}

void _trt__RemoveAudioSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveAudioSourceConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveAudioSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveAudioSourceConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioSourceConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveAudioSourceConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveAudioSourceConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioSourceConfiguration * SOAP_FMAC4 soap_in__trt__RemoveAudioSourceConfiguration(struct soap *soap, const char *tag, _trt__RemoveAudioSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioSourceConfiguration, sizeof(_trt__RemoveAudioSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveAudioSourceConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveAudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioSourceConfiguration, 0, sizeof(_trt__RemoveAudioSourceConfiguration), 0, soap_copy__trt__RemoveAudioSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveAudioSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioSourceConfiguration * SOAP_FMAC4 soap_get__trt__RemoveAudioSourceConfiguration(struct soap *soap, _trt__RemoveAudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioSourceConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveAudioSourceConfiguration);
		((_trt__RemoveAudioSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioSourceConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveAudioSourceConfiguration*)p = *(_trt__RemoveAudioSourceConfiguration*)q;
}

void _trt__AddAudioSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddAudioSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddAudioSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddAudioSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddAudioSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__AddAudioSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioSourceConfigurationResponse, sizeof(_trt__AddAudioSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioSourceConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddAudioSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioSourceConfigurationResponse, 0, sizeof(_trt__AddAudioSourceConfigurationResponse), 0, soap_copy__trt__AddAudioSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddAudioSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddAudioSourceConfigurationResponse(struct soap *soap, _trt__AddAudioSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddAudioSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddAudioSourceConfigurationResponse);
		((_trt__AddAudioSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddAudioSourceConfigurationResponse*)p = *(_trt__AddAudioSourceConfigurationResponse*)q;
}

void _trt__AddAudioSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioSourceConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddAudioSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioSourceConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddAudioSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddAudioSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioSourceConfiguration), type))
		return soap->error;
	if (a->_trt__AddAudioSourceConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddAudioSourceConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddAudioSourceConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddAudioSourceConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioSourceConfiguration * SOAP_FMAC4 soap_in__trt__AddAudioSourceConfiguration(struct soap *soap, const char *tag, _trt__AddAudioSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioSourceConfiguration, sizeof(_trt__AddAudioSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddAudioSourceConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddAudioSourceConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddAudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioSourceConfiguration, 0, sizeof(_trt__AddAudioSourceConfiguration), 0, soap_copy__trt__AddAudioSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddAudioSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioSourceConfiguration * SOAP_FMAC4 soap_get__trt__AddAudioSourceConfiguration(struct soap *soap, _trt__AddAudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddAudioSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioSourceConfiguration);
		if (size)
			*size = sizeof(_trt__AddAudioSourceConfiguration);
		((_trt__AddAudioSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioSourceConfiguration %p -> %p\n", q, p));
	*(_trt__AddAudioSourceConfiguration*)p = *(_trt__AddAudioSourceConfiguration*)q;
}

void _trt__RemoveAudioEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveAudioEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveAudioEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse, sizeof(_trt__RemoveAudioEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveAudioEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse, 0, sizeof(_trt__RemoveAudioEncoderConfigurationResponse), 0, soap_copy__trt__RemoveAudioEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveAudioEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveAudioEncoderConfigurationResponse(struct soap *soap, _trt__RemoveAudioEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveAudioEncoderConfigurationResponse);
		((_trt__RemoveAudioEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveAudioEncoderConfigurationResponse*)p = *(_trt__RemoveAudioEncoderConfigurationResponse*)q;
}

void _trt__RemoveAudioEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveAudioEncoderConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveAudioEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveAudioEncoderConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveAudioEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveAudioEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveAudioEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveAudioEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveAudioEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveAudioEncoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveAudioEncoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveAudioEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveAudioEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveAudioEncoderConfiguration * SOAP_FMAC4 soap_in__trt__RemoveAudioEncoderConfiguration(struct soap *soap, const char *tag, _trt__RemoveAudioEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveAudioEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveAudioEncoderConfiguration, sizeof(_trt__RemoveAudioEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveAudioEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveAudioEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveAudioEncoderConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveAudioEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveAudioEncoderConfiguration, 0, sizeof(_trt__RemoveAudioEncoderConfiguration), 0, soap_copy__trt__RemoveAudioEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveAudioEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveAudioEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveAudioEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveAudioEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveAudioEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveAudioEncoderConfiguration * SOAP_FMAC4 soap_get__trt__RemoveAudioEncoderConfiguration(struct soap *soap, _trt__RemoveAudioEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveAudioEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveAudioEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveAudioEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveAudioEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveAudioEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveAudioEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveAudioEncoderConfiguration);
		((_trt__RemoveAudioEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveAudioEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveAudioEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveAudioEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveAudioEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveAudioEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveAudioEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveAudioEncoderConfiguration*)p = *(_trt__RemoveAudioEncoderConfiguration*)q;
}

void _trt__AddAudioEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddAudioEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddAudioEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddAudioEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddAudioEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__AddAudioEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse, sizeof(_trt__AddAudioEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddAudioEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse, 0, sizeof(_trt__AddAudioEncoderConfigurationResponse), 0, soap_copy__trt__AddAudioEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddAudioEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddAudioEncoderConfigurationResponse(struct soap *soap, _trt__AddAudioEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddAudioEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddAudioEncoderConfigurationResponse);
		((_trt__AddAudioEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddAudioEncoderConfigurationResponse*)p = *(_trt__AddAudioEncoderConfigurationResponse*)q;
}

void _trt__AddAudioEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioEncoderConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddAudioEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddAudioEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioEncoderConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddAudioEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddAudioEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddAudioEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddAudioEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddAudioEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddAudioEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__AddAudioEncoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddAudioEncoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddAudioEncoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddAudioEncoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddAudioEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddAudioEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddAudioEncoderConfiguration * SOAP_FMAC4 soap_in__trt__AddAudioEncoderConfiguration(struct soap *soap, const char *tag, _trt__AddAudioEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddAudioEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddAudioEncoderConfiguration, sizeof(_trt__AddAudioEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddAudioEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddAudioEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddAudioEncoderConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddAudioEncoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddAudioEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddAudioEncoderConfiguration, 0, sizeof(_trt__AddAudioEncoderConfiguration), 0, soap_copy__trt__AddAudioEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddAudioEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddAudioEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddAudioEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddAudioEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddAudioEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddAudioEncoderConfiguration * SOAP_FMAC4 soap_get__trt__AddAudioEncoderConfiguration(struct soap *soap, _trt__AddAudioEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddAudioEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddAudioEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddAudioEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddAudioEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddAudioEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddAudioEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__AddAudioEncoderConfiguration);
		((_trt__AddAudioEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddAudioEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddAudioEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddAudioEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddAudioEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddAudioEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddAudioEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__AddAudioEncoderConfiguration*)p = *(_trt__AddAudioEncoderConfiguration*)q;
}

void _trt__RemoveVideoSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveVideoSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveVideoSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveVideoSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse, sizeof(_trt__RemoveVideoSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoSourceConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveVideoSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse, 0, sizeof(_trt__RemoveVideoSourceConfigurationResponse), 0, soap_copy__trt__RemoveVideoSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveVideoSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveVideoSourceConfigurationResponse(struct soap *soap, _trt__RemoveVideoSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveVideoSourceConfigurationResponse);
		((_trt__RemoveVideoSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveVideoSourceConfigurationResponse*)p = *(_trt__RemoveVideoSourceConfigurationResponse*)q;
}

void _trt__RemoveVideoSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveVideoSourceConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveVideoSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveVideoSourceConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoSourceConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveVideoSourceConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveVideoSourceConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoSourceConfiguration * SOAP_FMAC4 soap_in__trt__RemoveVideoSourceConfiguration(struct soap *soap, const char *tag, _trt__RemoveVideoSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoSourceConfiguration, sizeof(_trt__RemoveVideoSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveVideoSourceConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveVideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoSourceConfiguration, 0, sizeof(_trt__RemoveVideoSourceConfiguration), 0, soap_copy__trt__RemoveVideoSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveVideoSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoSourceConfiguration * SOAP_FMAC4 soap_get__trt__RemoveVideoSourceConfiguration(struct soap *soap, _trt__RemoveVideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoSourceConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveVideoSourceConfiguration);
		((_trt__RemoveVideoSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoSourceConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveVideoSourceConfiguration*)p = *(_trt__RemoveVideoSourceConfiguration*)q;
}

void _trt__AddVideoSourceConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddVideoSourceConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddVideoSourceConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoSourceConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddVideoSourceConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoSourceConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoSourceConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoSourceConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoSourceConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddVideoSourceConfigurationResponse(struct soap *soap, const char *tag, _trt__AddVideoSourceConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoSourceConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoSourceConfigurationResponse, sizeof(_trt__AddVideoSourceConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoSourceConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoSourceConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddVideoSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoSourceConfigurationResponse, 0, sizeof(_trt__AddVideoSourceConfigurationResponse), 0, soap_copy__trt__AddVideoSourceConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddVideoSourceConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoSourceConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoSourceConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoSourceConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoSourceConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoSourceConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddVideoSourceConfigurationResponse(struct soap *soap, _trt__AddVideoSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoSourceConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddVideoSourceConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoSourceConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoSourceConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoSourceConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddVideoSourceConfigurationResponse);
		((_trt__AddVideoSourceConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoSourceConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoSourceConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoSourceConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoSourceConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoSourceConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoSourceConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddVideoSourceConfigurationResponse*)p = *(_trt__AddVideoSourceConfigurationResponse*)q;
}

void _trt__AddVideoSourceConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoSourceConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddVideoSourceConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoSourceConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoSourceConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddVideoSourceConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoSourceConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoSourceConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddVideoSourceConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoSourceConfiguration), type))
		return soap->error;
	if (a->_trt__AddVideoSourceConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddVideoSourceConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddVideoSourceConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddVideoSourceConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoSourceConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoSourceConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoSourceConfiguration * SOAP_FMAC4 soap_in__trt__AddVideoSourceConfiguration(struct soap *soap, const char *tag, _trt__AddVideoSourceConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoSourceConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoSourceConfiguration, sizeof(_trt__AddVideoSourceConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoSourceConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoSourceConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddVideoSourceConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddVideoSourceConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddVideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoSourceConfiguration, 0, sizeof(_trt__AddVideoSourceConfiguration), 0, soap_copy__trt__AddVideoSourceConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddVideoSourceConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoSourceConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoSourceConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoSourceConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoSourceConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoSourceConfiguration * SOAP_FMAC4 soap_get__trt__AddVideoSourceConfiguration(struct soap *soap, _trt__AddVideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoSourceConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddVideoSourceConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoSourceConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoSourceConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoSourceConfiguration);
		if (size)
			*size = sizeof(_trt__AddVideoSourceConfiguration);
		((_trt__AddVideoSourceConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoSourceConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoSourceConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoSourceConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoSourceConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoSourceConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoSourceConfiguration %p -> %p\n", q, p));
	*(_trt__AddVideoSourceConfiguration*)p = *(_trt__AddVideoSourceConfiguration*)q;
}

void _trt__RemoveVideoEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__RemoveVideoEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__RemoveVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__RemoveVideoEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse, sizeof(_trt__RemoveVideoEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__RemoveVideoEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse, 0, sizeof(_trt__RemoveVideoEncoderConfigurationResponse), 0, soap_copy__trt__RemoveVideoEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__RemoveVideoEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__RemoveVideoEncoderConfigurationResponse(struct soap *soap, _trt__RemoveVideoEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__RemoveVideoEncoderConfigurationResponse);
		((_trt__RemoveVideoEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__RemoveVideoEncoderConfigurationResponse*)p = *(_trt__RemoveVideoEncoderConfigurationResponse*)q;
}

void _trt__RemoveVideoEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__RemoveVideoEncoderConfiguration::ProfileToken);
	/* transient soap skipped */
}

void _trt__RemoveVideoEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__RemoveVideoEncoderConfiguration::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__RemoveVideoEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__RemoveVideoEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__RemoveVideoEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__RemoveVideoEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__RemoveVideoEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__RemoveVideoEncoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__RemoveVideoEncoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__RemoveVideoEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__RemoveVideoEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__RemoveVideoEncoderConfiguration * SOAP_FMAC4 soap_in__trt__RemoveVideoEncoderConfiguration(struct soap *soap, const char *tag, _trt__RemoveVideoEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__RemoveVideoEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__RemoveVideoEncoderConfiguration, sizeof(_trt__RemoveVideoEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__RemoveVideoEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__RemoveVideoEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__RemoveVideoEncoderConfiguration::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__RemoveVideoEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__RemoveVideoEncoderConfiguration, 0, sizeof(_trt__RemoveVideoEncoderConfiguration), 0, soap_copy__trt__RemoveVideoEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__RemoveVideoEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__RemoveVideoEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:RemoveVideoEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__RemoveVideoEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__RemoveVideoEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__RemoveVideoEncoderConfiguration * SOAP_FMAC4 soap_get__trt__RemoveVideoEncoderConfiguration(struct soap *soap, _trt__RemoveVideoEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__RemoveVideoEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__RemoveVideoEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__RemoveVideoEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__RemoveVideoEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__RemoveVideoEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__RemoveVideoEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__RemoveVideoEncoderConfiguration);
		((_trt__RemoveVideoEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__RemoveVideoEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__RemoveVideoEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__RemoveVideoEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__RemoveVideoEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__RemoveVideoEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__RemoveVideoEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__RemoveVideoEncoderConfiguration*)p = *(_trt__RemoveVideoEncoderConfiguration*)q;
}

void _trt__AddVideoEncoderConfigurationResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__AddVideoEncoderConfigurationResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__AddVideoEncoderConfigurationResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoEncoderConfigurationResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, int id, const _trt__AddVideoEncoderConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoEncoderConfigurationResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoEncoderConfigurationResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_in__trt__AddVideoEncoderConfigurationResponse(struct soap *soap, const char *tag, _trt__AddVideoEncoderConfigurationResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoEncoderConfigurationResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse, sizeof(_trt__AddVideoEncoderConfigurationResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoEncoderConfigurationResponse *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__AddVideoEncoderConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse, 0, sizeof(_trt__AddVideoEncoderConfigurationResponse), 0, soap_copy__trt__AddVideoEncoderConfigurationResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__AddVideoEncoderConfigurationResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoEncoderConfigurationResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoEncoderConfigurationResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoEncoderConfigurationResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoEncoderConfigurationResponse * SOAP_FMAC4 soap_get__trt__AddVideoEncoderConfigurationResponse(struct soap *soap, _trt__AddVideoEncoderConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoEncoderConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoEncoderConfigurationResponse * SOAP_FMAC2 soap_instantiate__trt__AddVideoEncoderConfigurationResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoEncoderConfigurationResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoEncoderConfigurationResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoEncoderConfigurationResponse);
		if (size)
			*size = sizeof(_trt__AddVideoEncoderConfigurationResponse);
		((_trt__AddVideoEncoderConfigurationResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoEncoderConfigurationResponse, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoEncoderConfigurationResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoEncoderConfigurationResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoEncoderConfigurationResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoEncoderConfigurationResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoEncoderConfigurationResponse %p -> %p\n", q, p));
	*(_trt__AddVideoEncoderConfigurationResponse*)p = *(_trt__AddVideoEncoderConfigurationResponse*)q;
}

void _trt__AddVideoEncoderConfiguration::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoEncoderConfiguration::ProfileToken);
	soap_default_tt__ReferenceToken(soap, &this->_trt__AddVideoEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
}

void _trt__AddVideoEncoderConfiguration::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoEncoderConfiguration::ProfileToken);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__AddVideoEncoderConfiguration::ConfigurationToken);
	/* transient soap skipped */
#endif
}

int _trt__AddVideoEncoderConfiguration::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__AddVideoEncoderConfiguration(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__AddVideoEncoderConfiguration(struct soap *soap, const char *tag, int id, const _trt__AddVideoEncoderConfiguration *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__AddVideoEncoderConfiguration), type))
		return soap->error;
	if (a->_trt__AddVideoEncoderConfiguration::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__AddVideoEncoderConfiguration::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	if (a->_trt__AddVideoEncoderConfiguration::ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ConfigurationToken", -1, &a->_trt__AddVideoEncoderConfiguration::ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ConfigurationToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__AddVideoEncoderConfiguration::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__AddVideoEncoderConfiguration(soap, tag, this, type);
}

SOAP_FMAC3 _trt__AddVideoEncoderConfiguration * SOAP_FMAC4 soap_in__trt__AddVideoEncoderConfiguration(struct soap *soap, const char *tag, _trt__AddVideoEncoderConfiguration *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__AddVideoEncoderConfiguration *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__AddVideoEncoderConfiguration, sizeof(_trt__AddVideoEncoderConfiguration), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__AddVideoEncoderConfiguration)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__AddVideoEncoderConfiguration *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	size_t soap_flag_ConfigurationToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__AddVideoEncoderConfiguration::ProfileToken), "tt:ReferenceToken"))
				{	soap_flag_ProfileToken1--;
					continue;
				}
			if (soap_flag_ConfigurationToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ConfigurationToken", &(a->_trt__AddVideoEncoderConfiguration::ConfigurationToken), "tt:ReferenceToken"))
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
	{	a = (_trt__AddVideoEncoderConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__AddVideoEncoderConfiguration, 0, sizeof(_trt__AddVideoEncoderConfiguration), 0, soap_copy__trt__AddVideoEncoderConfiguration);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0 || soap_flag_ConfigurationToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__AddVideoEncoderConfiguration::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__AddVideoEncoderConfiguration);
	if (this->soap_out(soap, tag?tag:"trt:AddVideoEncoderConfiguration", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__AddVideoEncoderConfiguration::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__AddVideoEncoderConfiguration(soap, this, tag, type);
}

SOAP_FMAC3 _trt__AddVideoEncoderConfiguration * SOAP_FMAC4 soap_get__trt__AddVideoEncoderConfiguration(struct soap *soap, _trt__AddVideoEncoderConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__AddVideoEncoderConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__AddVideoEncoderConfiguration * SOAP_FMAC2 soap_instantiate__trt__AddVideoEncoderConfiguration(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__AddVideoEncoderConfiguration(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__AddVideoEncoderConfiguration, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__AddVideoEncoderConfiguration);
		if (size)
			*size = sizeof(_trt__AddVideoEncoderConfiguration);
		((_trt__AddVideoEncoderConfiguration*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__AddVideoEncoderConfiguration, n);
		if (size)
			*size = n * sizeof(_trt__AddVideoEncoderConfiguration);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__AddVideoEncoderConfiguration*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__AddVideoEncoderConfiguration*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__AddVideoEncoderConfiguration(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__AddVideoEncoderConfiguration %p -> %p\n", q, p));
	*(_trt__AddVideoEncoderConfiguration*)p = *(_trt__AddVideoEncoderConfiguration*)q;
}

void _trt__GetProfilesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetProfilesResponse::__sizeProfiles = 0;
	this->_trt__GetProfilesResponse::Profiles = NULL;
	/* transient soap skipped */
}

void _trt__GetProfilesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetProfilesResponse::Profiles)
	{	int i;
		for (i = 0; i < this->_trt__GetProfilesResponse::__sizeProfiles; i++)
		{
			soap_serialize_PointerTott__Profile(soap, this->_trt__GetProfilesResponse::Profiles + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetProfilesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetProfilesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetProfilesResponse(struct soap *soap, const char *tag, int id, const _trt__GetProfilesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetProfilesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeProfiles");
	if (a->_trt__GetProfilesResponse::Profiles)
	{	int i;
		for (i = 0; i < a->_trt__GetProfilesResponse::__sizeProfiles; i++)
			if (soap_out_PointerTott__Profile(soap, "trt:Profiles", -1, a->_trt__GetProfilesResponse::Profiles + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetProfilesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetProfilesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetProfilesResponse * SOAP_FMAC4 soap_in__trt__GetProfilesResponse(struct soap *soap, const char *tag, _trt__GetProfilesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetProfilesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetProfilesResponse, sizeof(_trt__GetProfilesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetProfilesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetProfilesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_Profiles1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:Profiles", 1, NULL))
			{	if (a->_trt__GetProfilesResponse::Profiles == NULL)
				{	if (soap_blist_Profiles1 == NULL)
						soap_blist_Profiles1 = soap_new_block(soap);
					a->_trt__GetProfilesResponse::Profiles = (tt__Profile **)soap_push_block(soap, soap_blist_Profiles1, sizeof(tt__Profile *));
					if (a->_trt__GetProfilesResponse::Profiles == NULL)
						return NULL;
					*a->_trt__GetProfilesResponse::Profiles = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__Profile(soap, "trt:Profiles", a->_trt__GetProfilesResponse::Profiles, "tt:Profile"))
				{	a->_trt__GetProfilesResponse::__sizeProfiles++;
					a->_trt__GetProfilesResponse::Profiles = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeProfiles");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetProfilesResponse::Profiles)
			soap_pop_block(soap, soap_blist_Profiles1);
		if (a->_trt__GetProfilesResponse::__sizeProfiles)
			a->_trt__GetProfilesResponse::Profiles = (tt__Profile **)soap_save_block(soap, soap_blist_Profiles1, NULL, 1);
		else
		{	a->_trt__GetProfilesResponse::Profiles = NULL;
			if (soap_blist_Profiles1)
				soap_end_block(soap, soap_blist_Profiles1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetProfilesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetProfilesResponse, 0, sizeof(_trt__GetProfilesResponse), 0, soap_copy__trt__GetProfilesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetProfilesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetProfilesResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetProfilesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetProfilesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetProfilesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetProfilesResponse * SOAP_FMAC4 soap_get__trt__GetProfilesResponse(struct soap *soap, _trt__GetProfilesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetProfilesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetProfilesResponse * SOAP_FMAC2 soap_instantiate__trt__GetProfilesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetProfilesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetProfilesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetProfilesResponse);
		if (size)
			*size = sizeof(_trt__GetProfilesResponse);
		((_trt__GetProfilesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetProfilesResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetProfilesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetProfilesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetProfilesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetProfilesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetProfilesResponse %p -> %p\n", q, p));
	*(_trt__GetProfilesResponse*)p = *(_trt__GetProfilesResponse*)q;
}

void _trt__GetProfiles::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetProfiles::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetProfiles::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetProfiles(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetProfiles(struct soap *soap, const char *tag, int id, const _trt__GetProfiles *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetProfiles), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetProfiles::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetProfiles(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetProfiles * SOAP_FMAC4 soap_in__trt__GetProfiles(struct soap *soap, const char *tag, _trt__GetProfiles *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetProfiles *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetProfiles, sizeof(_trt__GetProfiles), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetProfiles)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetProfiles *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetProfiles *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetProfiles, 0, sizeof(_trt__GetProfiles), 0, soap_copy__trt__GetProfiles);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetProfiles::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetProfiles);
	if (this->soap_out(soap, tag?tag:"trt:GetProfiles", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetProfiles::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetProfiles(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetProfiles * SOAP_FMAC4 soap_get__trt__GetProfiles(struct soap *soap, _trt__GetProfiles *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetProfiles(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetProfiles * SOAP_FMAC2 soap_instantiate__trt__GetProfiles(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetProfiles(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetProfiles, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetProfiles);
		if (size)
			*size = sizeof(_trt__GetProfiles);
		((_trt__GetProfiles*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetProfiles, n);
		if (size)
			*size = n * sizeof(_trt__GetProfiles);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetProfiles*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetProfiles*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetProfiles(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetProfiles %p -> %p\n", q, p));
	*(_trt__GetProfiles*)p = *(_trt__GetProfiles*)q;
}

void _trt__GetProfileResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetProfileResponse::Profile = NULL;
	/* transient soap skipped */
}

void _trt__GetProfileResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Profile(soap, &this->_trt__GetProfileResponse::Profile);
	/* transient soap skipped */
#endif
}

int _trt__GetProfileResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetProfileResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetProfileResponse(struct soap *soap, const char *tag, int id, const _trt__GetProfileResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetProfileResponse), type))
		return soap->error;
	if (a->Profile)
		soap_element_result(soap, "trt:Profile");
	if (a->_trt__GetProfileResponse::Profile)
	{	if (soap_out_PointerTott__Profile(soap, "trt:Profile", -1, &a->_trt__GetProfileResponse::Profile, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Profile"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetProfileResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetProfileResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetProfileResponse * SOAP_FMAC4 soap_in__trt__GetProfileResponse(struct soap *soap, const char *tag, _trt__GetProfileResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetProfileResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetProfileResponse, sizeof(_trt__GetProfileResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetProfileResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetProfileResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Profile1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Profile1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Profile(soap, "trt:Profile", &(a->_trt__GetProfileResponse::Profile), "tt:Profile"))
				{	soap_flag_Profile1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Profile");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetProfileResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetProfileResponse, 0, sizeof(_trt__GetProfileResponse), 0, soap_copy__trt__GetProfileResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Profile1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetProfileResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetProfileResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetProfileResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetProfileResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetProfileResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetProfileResponse * SOAP_FMAC4 soap_get__trt__GetProfileResponse(struct soap *soap, _trt__GetProfileResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetProfileResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetProfileResponse * SOAP_FMAC2 soap_instantiate__trt__GetProfileResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetProfileResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetProfileResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetProfileResponse);
		if (size)
			*size = sizeof(_trt__GetProfileResponse);
		((_trt__GetProfileResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetProfileResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetProfileResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetProfileResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetProfileResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetProfileResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetProfileResponse %p -> %p\n", q, p));
	*(_trt__GetProfileResponse*)p = *(_trt__GetProfileResponse*)q;
}

void _trt__GetProfile::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__ReferenceToken(soap, &this->_trt__GetProfile::ProfileToken);
	/* transient soap skipped */
}

void _trt__GetProfile::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__GetProfile::ProfileToken);
	/* transient soap skipped */
#endif
}

int _trt__GetProfile::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetProfile(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetProfile(struct soap *soap, const char *tag, int id, const _trt__GetProfile *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetProfile), type))
		return soap->error;
	if (a->_trt__GetProfile::ProfileToken)
	{	if (soap_out_tt__ReferenceToken(soap, "trt:ProfileToken", -1, &a->_trt__GetProfile::ProfileToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileToken"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetProfile::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetProfile(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetProfile * SOAP_FMAC4 soap_in__trt__GetProfile(struct soap *soap, const char *tag, _trt__GetProfile *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetProfile *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetProfile, sizeof(_trt__GetProfile), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetProfile)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetProfile *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ProfileToken1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ProfileToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:ProfileToken", &(a->_trt__GetProfile::ProfileToken), "tt:ReferenceToken"))
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
	{	a = (_trt__GetProfile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetProfile, 0, sizeof(_trt__GetProfile), 0, soap_copy__trt__GetProfile);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileToken1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetProfile::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetProfile);
	if (this->soap_out(soap, tag?tag:"trt:GetProfile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetProfile::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetProfile(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetProfile * SOAP_FMAC4 soap_get__trt__GetProfile(struct soap *soap, _trt__GetProfile *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetProfile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetProfile * SOAP_FMAC2 soap_instantiate__trt__GetProfile(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetProfile(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetProfile, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetProfile);
		if (size)
			*size = sizeof(_trt__GetProfile);
		((_trt__GetProfile*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetProfile, n);
		if (size)
			*size = n * sizeof(_trt__GetProfile);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetProfile*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetProfile*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetProfile(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetProfile %p -> %p\n", q, p));
	*(_trt__GetProfile*)p = *(_trt__GetProfile*)q;
}

void _trt__CreateProfileResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__CreateProfileResponse::Profile = NULL;
	/* transient soap skipped */
}

void _trt__CreateProfileResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Profile(soap, &this->_trt__CreateProfileResponse::Profile);
	/* transient soap skipped */
#endif
}

int _trt__CreateProfileResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__CreateProfileResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__CreateProfileResponse(struct soap *soap, const char *tag, int id, const _trt__CreateProfileResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__CreateProfileResponse), type))
		return soap->error;
	if (a->Profile)
		soap_element_result(soap, "trt:Profile");
	if (a->_trt__CreateProfileResponse::Profile)
	{	if (soap_out_PointerTott__Profile(soap, "trt:Profile", -1, &a->_trt__CreateProfileResponse::Profile, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Profile"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__CreateProfileResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__CreateProfileResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__CreateProfileResponse * SOAP_FMAC4 soap_in__trt__CreateProfileResponse(struct soap *soap, const char *tag, _trt__CreateProfileResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__CreateProfileResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__CreateProfileResponse, sizeof(_trt__CreateProfileResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__CreateProfileResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__CreateProfileResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Profile1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Profile1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Profile(soap, "trt:Profile", &(a->_trt__CreateProfileResponse::Profile), "tt:Profile"))
				{	soap_flag_Profile1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Profile");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__CreateProfileResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__CreateProfileResponse, 0, sizeof(_trt__CreateProfileResponse), 0, soap_copy__trt__CreateProfileResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Profile1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__CreateProfileResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__CreateProfileResponse);
	if (this->soap_out(soap, tag?tag:"trt:CreateProfileResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__CreateProfileResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__CreateProfileResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__CreateProfileResponse * SOAP_FMAC4 soap_get__trt__CreateProfileResponse(struct soap *soap, _trt__CreateProfileResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__CreateProfileResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__CreateProfileResponse * SOAP_FMAC2 soap_instantiate__trt__CreateProfileResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__CreateProfileResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__CreateProfileResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__CreateProfileResponse);
		if (size)
			*size = sizeof(_trt__CreateProfileResponse);
		((_trt__CreateProfileResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__CreateProfileResponse, n);
		if (size)
			*size = n * sizeof(_trt__CreateProfileResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__CreateProfileResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__CreateProfileResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__CreateProfileResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__CreateProfileResponse %p -> %p\n", q, p));
	*(_trt__CreateProfileResponse*)p = *(_trt__CreateProfileResponse*)q;
}

void _trt__CreateProfile::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_tt__Name(soap, &this->_trt__CreateProfile::Name);
	soap_default_tt__ReferenceToken(soap, &this->_trt__CreateProfile::Token);
	/* transient soap skipped */
}

void _trt__CreateProfile::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &this->_trt__CreateProfile::Name);
	soap_serialize_tt__ReferenceToken(soap, &this->_trt__CreateProfile::Token);
	/* transient soap skipped */
#endif
}

int _trt__CreateProfile::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__CreateProfile(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__CreateProfile(struct soap *soap, const char *tag, int id, const _trt__CreateProfile *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__CreateProfile), type))
		return soap->error;
	if (a->_trt__CreateProfile::Name)
	{	if (soap_out_tt__Name(soap, "trt:Name", -1, &a->_trt__CreateProfile::Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Name"))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "trt:Token", -1, &(a->_trt__CreateProfile::Token), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__CreateProfile::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__CreateProfile(soap, tag, this, type);
}

SOAP_FMAC3 _trt__CreateProfile * SOAP_FMAC4 soap_in__trt__CreateProfile(struct soap *soap, const char *tag, _trt__CreateProfile *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__CreateProfile *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__CreateProfile, sizeof(_trt__CreateProfile), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__CreateProfile)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__CreateProfile *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Name1 = 1;
	size_t soap_flag_Token1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "trt:Name", &(a->_trt__CreateProfile::Name), "tt:Name"))
				{	soap_flag_Name1--;
					continue;
				}
			if (soap_flag_Token1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "trt:Token", &(a->_trt__CreateProfile::Token), "tt:ReferenceToken"))
				{	soap_flag_Token1--;
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
	{	a = (_trt__CreateProfile *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__CreateProfile, 0, sizeof(_trt__CreateProfile), 0, soap_copy__trt__CreateProfile);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__CreateProfile::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__CreateProfile);
	if (this->soap_out(soap, tag?tag:"trt:CreateProfile", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__CreateProfile::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__CreateProfile(soap, this, tag, type);
}

SOAP_FMAC3 _trt__CreateProfile * SOAP_FMAC4 soap_get__trt__CreateProfile(struct soap *soap, _trt__CreateProfile *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__CreateProfile(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__CreateProfile * SOAP_FMAC2 soap_instantiate__trt__CreateProfile(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__CreateProfile(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__CreateProfile, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__CreateProfile);
		if (size)
			*size = sizeof(_trt__CreateProfile);
		((_trt__CreateProfile*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__CreateProfile, n);
		if (size)
			*size = n * sizeof(_trt__CreateProfile);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__CreateProfile*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__CreateProfile*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__CreateProfile(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__CreateProfile %p -> %p\n", q, p));
	*(_trt__CreateProfile*)p = *(_trt__CreateProfile*)q;
}

void _trt__GetAudioOutputsResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioOutputsResponse::__sizeAudioOutputs = 0;
	this->_trt__GetAudioOutputsResponse::AudioOutputs = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioOutputsResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioOutputsResponse::AudioOutputs)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioOutputsResponse::__sizeAudioOutputs; i++)
		{
			soap_serialize_PointerTott__AudioOutput(soap, this->_trt__GetAudioOutputsResponse::AudioOutputs + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputsResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputsResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputsResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputsResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAudioOutputs");
	if (a->_trt__GetAudioOutputsResponse::AudioOutputs)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioOutputsResponse::__sizeAudioOutputs; i++)
			if (soap_out_PointerTott__AudioOutput(soap, "trt:AudioOutputs", -1, a->_trt__GetAudioOutputsResponse::AudioOutputs + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputsResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputsResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputsResponse * SOAP_FMAC4 soap_in__trt__GetAudioOutputsResponse(struct soap *soap, const char *tag, _trt__GetAudioOutputsResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputsResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputsResponse, sizeof(_trt__GetAudioOutputsResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputsResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputsResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_AudioOutputs1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:AudioOutputs", 1, NULL))
			{	if (a->_trt__GetAudioOutputsResponse::AudioOutputs == NULL)
				{	if (soap_blist_AudioOutputs1 == NULL)
						soap_blist_AudioOutputs1 = soap_new_block(soap);
					a->_trt__GetAudioOutputsResponse::AudioOutputs = (tt__AudioOutput **)soap_push_block(soap, soap_blist_AudioOutputs1, sizeof(tt__AudioOutput *));
					if (a->_trt__GetAudioOutputsResponse::AudioOutputs == NULL)
						return NULL;
					*a->_trt__GetAudioOutputsResponse::AudioOutputs = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioOutput(soap, "trt:AudioOutputs", a->_trt__GetAudioOutputsResponse::AudioOutputs, "tt:AudioOutput"))
				{	a->_trt__GetAudioOutputsResponse::__sizeAudioOutputs++;
					a->_trt__GetAudioOutputsResponse::AudioOutputs = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeAudioOutputs");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetAudioOutputsResponse::AudioOutputs)
			soap_pop_block(soap, soap_blist_AudioOutputs1);
		if (a->_trt__GetAudioOutputsResponse::__sizeAudioOutputs)
			a->_trt__GetAudioOutputsResponse::AudioOutputs = (tt__AudioOutput **)soap_save_block(soap, soap_blist_AudioOutputs1, NULL, 1);
		else
		{	a->_trt__GetAudioOutputsResponse::AudioOutputs = NULL;
			if (soap_blist_AudioOutputs1)
				soap_end_block(soap, soap_blist_AudioOutputs1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioOutputsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputsResponse, 0, sizeof(_trt__GetAudioOutputsResponse), 0, soap_copy__trt__GetAudioOutputsResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioOutputsResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputsResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputsResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputsResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputsResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputsResponse * SOAP_FMAC4 soap_get__trt__GetAudioOutputsResponse(struct soap *soap, _trt__GetAudioOutputsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputsResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputsResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputsResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputsResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputsResponse);
		if (size)
			*size = sizeof(_trt__GetAudioOutputsResponse);
		((_trt__GetAudioOutputsResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputsResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputsResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputsResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputsResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputsResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputsResponse %p -> %p\n", q, p));
	*(_trt__GetAudioOutputsResponse*)p = *(_trt__GetAudioOutputsResponse*)q;
}

void _trt__GetAudioOutputs::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioOutputs::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioOutputs::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioOutputs(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioOutputs(struct soap *soap, const char *tag, int id, const _trt__GetAudioOutputs *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioOutputs), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioOutputs::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioOutputs(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioOutputs * SOAP_FMAC4 soap_in__trt__GetAudioOutputs(struct soap *soap, const char *tag, _trt__GetAudioOutputs *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioOutputs *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioOutputs, sizeof(_trt__GetAudioOutputs), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioOutputs)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioOutputs *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioOutputs *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioOutputs, 0, sizeof(_trt__GetAudioOutputs), 0, soap_copy__trt__GetAudioOutputs);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioOutputs::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioOutputs);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioOutputs", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioOutputs::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioOutputs(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioOutputs * SOAP_FMAC4 soap_get__trt__GetAudioOutputs(struct soap *soap, _trt__GetAudioOutputs *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioOutputs(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioOutputs * SOAP_FMAC2 soap_instantiate__trt__GetAudioOutputs(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioOutputs(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioOutputs, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioOutputs);
		if (size)
			*size = sizeof(_trt__GetAudioOutputs);
		((_trt__GetAudioOutputs*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioOutputs, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioOutputs);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioOutputs*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioOutputs*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioOutputs(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioOutputs %p -> %p\n", q, p));
	*(_trt__GetAudioOutputs*)p = *(_trt__GetAudioOutputs*)q;
}

void _trt__GetAudioSourcesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetAudioSourcesResponse::__sizeAudioSources = 0;
	this->_trt__GetAudioSourcesResponse::AudioSources = NULL;
	/* transient soap skipped */
}

void _trt__GetAudioSourcesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetAudioSourcesResponse::AudioSources)
	{	int i;
		for (i = 0; i < this->_trt__GetAudioSourcesResponse::__sizeAudioSources; i++)
		{
			soap_serialize_PointerTott__AudioSource(soap, this->_trt__GetAudioSourcesResponse::AudioSources + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSourcesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSourcesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSourcesResponse(struct soap *soap, const char *tag, int id, const _trt__GetAudioSourcesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSourcesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAudioSources");
	if (a->_trt__GetAudioSourcesResponse::AudioSources)
	{	int i;
		for (i = 0; i < a->_trt__GetAudioSourcesResponse::__sizeAudioSources; i++)
			if (soap_out_PointerTott__AudioSource(soap, "trt:AudioSources", -1, a->_trt__GetAudioSourcesResponse::AudioSources + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSourcesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSourcesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSourcesResponse * SOAP_FMAC4 soap_in__trt__GetAudioSourcesResponse(struct soap *soap, const char *tag, _trt__GetAudioSourcesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSourcesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSourcesResponse, sizeof(_trt__GetAudioSourcesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSourcesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSourcesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_AudioSources1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:AudioSources", 1, NULL))
			{	if (a->_trt__GetAudioSourcesResponse::AudioSources == NULL)
				{	if (soap_blist_AudioSources1 == NULL)
						soap_blist_AudioSources1 = soap_new_block(soap);
					a->_trt__GetAudioSourcesResponse::AudioSources = (tt__AudioSource **)soap_push_block(soap, soap_blist_AudioSources1, sizeof(tt__AudioSource *));
					if (a->_trt__GetAudioSourcesResponse::AudioSources == NULL)
						return NULL;
					*a->_trt__GetAudioSourcesResponse::AudioSources = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__AudioSource(soap, "trt:AudioSources", a->_trt__GetAudioSourcesResponse::AudioSources, "tt:AudioSource"))
				{	a->_trt__GetAudioSourcesResponse::__sizeAudioSources++;
					a->_trt__GetAudioSourcesResponse::AudioSources = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeAudioSources");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetAudioSourcesResponse::AudioSources)
			soap_pop_block(soap, soap_blist_AudioSources1);
		if (a->_trt__GetAudioSourcesResponse::__sizeAudioSources)
			a->_trt__GetAudioSourcesResponse::AudioSources = (tt__AudioSource **)soap_save_block(soap, soap_blist_AudioSources1, NULL, 1);
		else
		{	a->_trt__GetAudioSourcesResponse::AudioSources = NULL;
			if (soap_blist_AudioSources1)
				soap_end_block(soap, soap_blist_AudioSources1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetAudioSourcesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSourcesResponse, 0, sizeof(_trt__GetAudioSourcesResponse), 0, soap_copy__trt__GetAudioSourcesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioSourcesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSourcesResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSourcesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSourcesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSourcesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSourcesResponse * SOAP_FMAC4 soap_get__trt__GetAudioSourcesResponse(struct soap *soap, _trt__GetAudioSourcesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSourcesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSourcesResponse * SOAP_FMAC2 soap_instantiate__trt__GetAudioSourcesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSourcesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSourcesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSourcesResponse);
		if (size)
			*size = sizeof(_trt__GetAudioSourcesResponse);
		((_trt__GetAudioSourcesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSourcesResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSourcesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSourcesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSourcesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSourcesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSourcesResponse %p -> %p\n", q, p));
	*(_trt__GetAudioSourcesResponse*)p = *(_trt__GetAudioSourcesResponse*)q;
}

void _trt__GetAudioSources::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetAudioSources::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetAudioSources::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetAudioSources(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetAudioSources(struct soap *soap, const char *tag, int id, const _trt__GetAudioSources *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetAudioSources), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetAudioSources::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetAudioSources(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetAudioSources * SOAP_FMAC4 soap_in__trt__GetAudioSources(struct soap *soap, const char *tag, _trt__GetAudioSources *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetAudioSources *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetAudioSources, sizeof(_trt__GetAudioSources), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetAudioSources)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetAudioSources *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetAudioSources *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetAudioSources, 0, sizeof(_trt__GetAudioSources), 0, soap_copy__trt__GetAudioSources);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetAudioSources::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetAudioSources);
	if (this->soap_out(soap, tag?tag:"trt:GetAudioSources", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetAudioSources::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetAudioSources(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetAudioSources * SOAP_FMAC4 soap_get__trt__GetAudioSources(struct soap *soap, _trt__GetAudioSources *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetAudioSources(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetAudioSources * SOAP_FMAC2 soap_instantiate__trt__GetAudioSources(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetAudioSources(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetAudioSources, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetAudioSources);
		if (size)
			*size = sizeof(_trt__GetAudioSources);
		((_trt__GetAudioSources*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetAudioSources, n);
		if (size)
			*size = n * sizeof(_trt__GetAudioSources);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetAudioSources*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetAudioSources*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetAudioSources(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetAudioSources %p -> %p\n", q, p));
	*(_trt__GetAudioSources*)p = *(_trt__GetAudioSources*)q;
}

void _trt__GetVideoSourcesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetVideoSourcesResponse::__sizeVideoSources = 0;
	this->_trt__GetVideoSourcesResponse::VideoSources = NULL;
	/* transient soap skipped */
}

void _trt__GetVideoSourcesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_trt__GetVideoSourcesResponse::VideoSources)
	{	int i;
		for (i = 0; i < this->_trt__GetVideoSourcesResponse::__sizeVideoSources; i++)
		{
			soap_serialize_PointerTott__VideoSource(soap, this->_trt__GetVideoSourcesResponse::VideoSources + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSourcesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSourcesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSourcesResponse(struct soap *soap, const char *tag, int id, const _trt__GetVideoSourcesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSourcesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeVideoSources");
	if (a->_trt__GetVideoSourcesResponse::VideoSources)
	{	int i;
		for (i = 0; i < a->_trt__GetVideoSourcesResponse::__sizeVideoSources; i++)
			if (soap_out_PointerTott__VideoSource(soap, "trt:VideoSources", -1, a->_trt__GetVideoSourcesResponse::VideoSources + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSourcesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSourcesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSourcesResponse * SOAP_FMAC4 soap_in__trt__GetVideoSourcesResponse(struct soap *soap, const char *tag, _trt__GetVideoSourcesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSourcesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSourcesResponse, sizeof(_trt__GetVideoSourcesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSourcesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSourcesResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_VideoSources1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "trt:VideoSources", 1, NULL))
			{	if (a->_trt__GetVideoSourcesResponse::VideoSources == NULL)
				{	if (soap_blist_VideoSources1 == NULL)
						soap_blist_VideoSources1 = soap_new_block(soap);
					a->_trt__GetVideoSourcesResponse::VideoSources = (tt__VideoSource **)soap_push_block(soap, soap_blist_VideoSources1, sizeof(tt__VideoSource *));
					if (a->_trt__GetVideoSourcesResponse::VideoSources == NULL)
						return NULL;
					*a->_trt__GetVideoSourcesResponse::VideoSources = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTott__VideoSource(soap, "trt:VideoSources", a->_trt__GetVideoSourcesResponse::VideoSources, "tt:VideoSource"))
				{	a->_trt__GetVideoSourcesResponse::__sizeVideoSources++;
					a->_trt__GetVideoSourcesResponse::VideoSources = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			soap_check_result(soap, "-sizeVideoSources");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->_trt__GetVideoSourcesResponse::VideoSources)
			soap_pop_block(soap, soap_blist_VideoSources1);
		if (a->_trt__GetVideoSourcesResponse::__sizeVideoSources)
			a->_trt__GetVideoSourcesResponse::VideoSources = (tt__VideoSource **)soap_save_block(soap, soap_blist_VideoSources1, NULL, 1);
		else
		{	a->_trt__GetVideoSourcesResponse::VideoSources = NULL;
			if (soap_blist_VideoSources1)
				soap_end_block(soap, soap_blist_VideoSources1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetVideoSourcesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSourcesResponse, 0, sizeof(_trt__GetVideoSourcesResponse), 0, soap_copy__trt__GetVideoSourcesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoSourcesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSourcesResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSourcesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSourcesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSourcesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSourcesResponse * SOAP_FMAC4 soap_get__trt__GetVideoSourcesResponse(struct soap *soap, _trt__GetVideoSourcesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSourcesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSourcesResponse * SOAP_FMAC2 soap_instantiate__trt__GetVideoSourcesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSourcesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSourcesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSourcesResponse);
		if (size)
			*size = sizeof(_trt__GetVideoSourcesResponse);
		((_trt__GetVideoSourcesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSourcesResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSourcesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSourcesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSourcesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSourcesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSourcesResponse %p -> %p\n", q, p));
	*(_trt__GetVideoSourcesResponse*)p = *(_trt__GetVideoSourcesResponse*)q;
}

void _trt__GetVideoSources::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetVideoSources::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetVideoSources::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetVideoSources(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetVideoSources(struct soap *soap, const char *tag, int id, const _trt__GetVideoSources *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetVideoSources), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetVideoSources::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetVideoSources(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetVideoSources * SOAP_FMAC4 soap_in__trt__GetVideoSources(struct soap *soap, const char *tag, _trt__GetVideoSources *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetVideoSources *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetVideoSources, sizeof(_trt__GetVideoSources), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetVideoSources)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetVideoSources *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetVideoSources *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetVideoSources, 0, sizeof(_trt__GetVideoSources), 0, soap_copy__trt__GetVideoSources);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetVideoSources::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetVideoSources);
	if (this->soap_out(soap, tag?tag:"trt:GetVideoSources", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetVideoSources::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetVideoSources(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetVideoSources * SOAP_FMAC4 soap_get__trt__GetVideoSources(struct soap *soap, _trt__GetVideoSources *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetVideoSources(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetVideoSources * SOAP_FMAC2 soap_instantiate__trt__GetVideoSources(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetVideoSources(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetVideoSources, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetVideoSources);
		if (size)
			*size = sizeof(_trt__GetVideoSources);
		((_trt__GetVideoSources*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetVideoSources, n);
		if (size)
			*size = n * sizeof(_trt__GetVideoSources);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetVideoSources*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetVideoSources*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetVideoSources(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetVideoSources %p -> %p\n", q, p));
	*(_trt__GetVideoSources*)p = *(_trt__GetVideoSources*)q;
}

void _trt__GetServiceCapabilitiesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_trt__GetServiceCapabilitiesResponse::Capabilities = NULL;
	/* transient soap skipped */
}

void _trt__GetServiceCapabilitiesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotrt__Capabilities(soap, &this->_trt__GetServiceCapabilitiesResponse::Capabilities);
	/* transient soap skipped */
#endif
}

int _trt__GetServiceCapabilitiesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetServiceCapabilitiesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const _trt__GetServiceCapabilitiesResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "trt:Capabilities");
	if (a->_trt__GetServiceCapabilitiesResponse::Capabilities)
	{	if (soap_out_PointerTotrt__Capabilities(soap, "trt:Capabilities", -1, &a->_trt__GetServiceCapabilitiesResponse::Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetServiceCapabilitiesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetServiceCapabilitiesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__trt__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, _trt__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetServiceCapabilitiesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetServiceCapabilitiesResponse, sizeof(_trt__GetServiceCapabilitiesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetServiceCapabilitiesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetServiceCapabilitiesResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Capabilities1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotrt__Capabilities(soap, "trt:Capabilities", &(a->_trt__GetServiceCapabilitiesResponse::Capabilities), "trt:Capabilities"))
				{	soap_flag_Capabilities1--;
					continue;
				}
			/* transient soap skipped */
			soap_check_result(soap, "trt:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_trt__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetServiceCapabilitiesResponse, 0, sizeof(_trt__GetServiceCapabilitiesResponse), 0, soap_copy__trt__GetServiceCapabilitiesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _trt__GetServiceCapabilitiesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetServiceCapabilitiesResponse);
	if (this->soap_out(soap, tag?tag:"trt:GetServiceCapabilitiesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetServiceCapabilitiesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetServiceCapabilitiesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__trt__GetServiceCapabilitiesResponse(struct soap *soap, _trt__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetServiceCapabilitiesResponse * SOAP_FMAC2 soap_instantiate__trt__GetServiceCapabilitiesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetServiceCapabilitiesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetServiceCapabilitiesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetServiceCapabilitiesResponse);
		if (size)
			*size = sizeof(_trt__GetServiceCapabilitiesResponse);
		((_trt__GetServiceCapabilitiesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetServiceCapabilitiesResponse, n);
		if (size)
			*size = n * sizeof(_trt__GetServiceCapabilitiesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetServiceCapabilitiesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetServiceCapabilitiesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetServiceCapabilitiesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetServiceCapabilitiesResponse %p -> %p\n", q, p));
	*(_trt__GetServiceCapabilitiesResponse*)p = *(_trt__GetServiceCapabilitiesResponse*)q;
}

void _trt__GetServiceCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _trt__GetServiceCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _trt__GetServiceCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__trt__GetServiceCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__trt__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const _trt__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__trt__GetServiceCapabilities), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_trt__GetServiceCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__trt__GetServiceCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 _trt__GetServiceCapabilities * SOAP_FMAC4 soap_in__trt__GetServiceCapabilities(struct soap *soap, const char *tag, _trt__GetServiceCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_trt__GetServiceCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__trt__GetServiceCapabilities, sizeof(_trt__GetServiceCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__trt__GetServiceCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_trt__GetServiceCapabilities *)a->soap_in(soap, tag, type);
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
	{	a = (_trt__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__trt__GetServiceCapabilities, 0, sizeof(_trt__GetServiceCapabilities), 0, soap_copy__trt__GetServiceCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _trt__GetServiceCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__trt__GetServiceCapabilities);
	if (this->soap_out(soap, tag?tag:"trt:GetServiceCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_trt__GetServiceCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__trt__GetServiceCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 _trt__GetServiceCapabilities * SOAP_FMAC4 soap_get__trt__GetServiceCapabilities(struct soap *soap, _trt__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__trt__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _trt__GetServiceCapabilities * SOAP_FMAC2 soap_instantiate__trt__GetServiceCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__trt__GetServiceCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__trt__GetServiceCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_trt__GetServiceCapabilities);
		if (size)
			*size = sizeof(_trt__GetServiceCapabilities);
		((_trt__GetServiceCapabilities*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_trt__GetServiceCapabilities, n);
		if (size)
			*size = n * sizeof(_trt__GetServiceCapabilities);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_trt__GetServiceCapabilities*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_trt__GetServiceCapabilities*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__trt__GetServiceCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _trt__GetServiceCapabilities %p -> %p\n", q, p));
	*(_trt__GetServiceCapabilities*)p = *(_trt__GetServiceCapabilities*)q;
}

void trt__StreamingCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->trt__StreamingCapabilities::__size = 0;
	this->trt__StreamingCapabilities::__any = NULL;
	this->trt__StreamingCapabilities::RTPMulticast = NULL;
	this->trt__StreamingCapabilities::RTP_USCORETCP = NULL;
	this->trt__StreamingCapabilities::RTP_USCORERTSP_USCORETCP = NULL;
	this->trt__StreamingCapabilities::NonAggregateControl = NULL;
	this->trt__StreamingCapabilities::__anyAttribute = NULL;
}

void trt__StreamingCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int trt__StreamingCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_trt__StreamingCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_trt__StreamingCapabilities(struct soap *soap, const char *tag, int id, const trt__StreamingCapabilities *a, const char *type)
{
	if (((trt__StreamingCapabilities*)a)->RTPMulticast)
		soap_set_attr(soap, "RTPMulticast", soap_bool2s(soap, *((trt__StreamingCapabilities*)a)->RTPMulticast), 1);
	if (((trt__StreamingCapabilities*)a)->RTP_USCORETCP)
		soap_set_attr(soap, "RTP_TCP", soap_bool2s(soap, *((trt__StreamingCapabilities*)a)->RTP_USCORETCP), 1);
	if (((trt__StreamingCapabilities*)a)->RTP_USCORERTSP_USCORETCP)
		soap_set_attr(soap, "RTP_RTSP_TCP", soap_bool2s(soap, *((trt__StreamingCapabilities*)a)->RTP_USCORERTSP_USCORETCP), 1);
	if (((trt__StreamingCapabilities*)a)->NonAggregateControl)
		soap_set_attr(soap, "NonAggregateControl", soap_bool2s(soap, *((trt__StreamingCapabilities*)a)->NonAggregateControl), 1);
	if (((trt__StreamingCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((trt__StreamingCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_trt__StreamingCapabilities), "trt:StreamingCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->trt__StreamingCapabilities::__any)
	{	int i;
		for (i = 0; i < a->trt__StreamingCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->trt__StreamingCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *trt__StreamingCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_trt__StreamingCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 trt__StreamingCapabilities * SOAP_FMAC4 soap_in_trt__StreamingCapabilities(struct soap *soap, const char *tag, trt__StreamingCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (trt__StreamingCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_trt__StreamingCapabilities, sizeof(trt__StreamingCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_trt__StreamingCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (trt__StreamingCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "RTPMulticast", 0);
		if (t)
		{
			if (!(((trt__StreamingCapabilities*)a)->RTPMulticast = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__StreamingCapabilities*)a)->RTPMulticast))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "RTP_TCP", 0);
		if (t)
		{
			if (!(((trt__StreamingCapabilities*)a)->RTP_USCORETCP = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__StreamingCapabilities*)a)->RTP_USCORETCP))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "RTP_RTSP_TCP", 0);
		if (t)
		{
			if (!(((trt__StreamingCapabilities*)a)->RTP_USCORERTSP_USCORETCP = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__StreamingCapabilities*)a)->RTP_USCORERTSP_USCORETCP))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "NonAggregateControl", 0);
		if (t)
		{
			if (!(((trt__StreamingCapabilities*)a)->NonAggregateControl = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__StreamingCapabilities*)a)->NonAggregateControl))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((trt__StreamingCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->trt__StreamingCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->trt__StreamingCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->trt__StreamingCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->trt__StreamingCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->trt__StreamingCapabilities::__any, "xsd:byte"))
				{	a->trt__StreamingCapabilities::__size++;
					a->trt__StreamingCapabilities::__any = NULL;
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
		if (a->trt__StreamingCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->trt__StreamingCapabilities::__size)
			a->trt__StreamingCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->trt__StreamingCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (trt__StreamingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_trt__StreamingCapabilities, 0, sizeof(trt__StreamingCapabilities), 0, soap_copy_trt__StreamingCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int trt__StreamingCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_trt__StreamingCapabilities);
	if (this->soap_out(soap, tag?tag:"trt:StreamingCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *trt__StreamingCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_trt__StreamingCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 trt__StreamingCapabilities * SOAP_FMAC4 soap_get_trt__StreamingCapabilities(struct soap *soap, trt__StreamingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_trt__StreamingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 trt__StreamingCapabilities * SOAP_FMAC2 soap_instantiate_trt__StreamingCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_trt__StreamingCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_trt__StreamingCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_trt__StreamingCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying trt__StreamingCapabilities %p -> %p\n", q, p));
	*(trt__StreamingCapabilities*)p = *(trt__StreamingCapabilities*)q;
}

void trt__ProfileCapabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->trt__ProfileCapabilities::__size = 0;
	this->trt__ProfileCapabilities::__any = NULL;
	this->trt__ProfileCapabilities::MaximumNumberOfProfiles = NULL;
	this->trt__ProfileCapabilities::__anyAttribute = NULL;
}

void trt__ProfileCapabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int trt__ProfileCapabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_trt__ProfileCapabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_trt__ProfileCapabilities(struct soap *soap, const char *tag, int id, const trt__ProfileCapabilities *a, const char *type)
{
	if (((trt__ProfileCapabilities*)a)->MaximumNumberOfProfiles)
		soap_set_attr(soap, "MaximumNumberOfProfiles", soap_int2s(soap, *((trt__ProfileCapabilities*)a)->MaximumNumberOfProfiles), 1);
	if (((trt__ProfileCapabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((trt__ProfileCapabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_trt__ProfileCapabilities), "trt:ProfileCapabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->trt__ProfileCapabilities::__any)
	{	int i;
		for (i = 0; i < a->trt__ProfileCapabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->trt__ProfileCapabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *trt__ProfileCapabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_trt__ProfileCapabilities(soap, tag, this, type);
}

SOAP_FMAC3 trt__ProfileCapabilities * SOAP_FMAC4 soap_in_trt__ProfileCapabilities(struct soap *soap, const char *tag, trt__ProfileCapabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (trt__ProfileCapabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_trt__ProfileCapabilities, sizeof(trt__ProfileCapabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_trt__ProfileCapabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (trt__ProfileCapabilities *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "MaximumNumberOfProfiles", 0);
		if (t)
		{
			if (!(((trt__ProfileCapabilities*)a)->MaximumNumberOfProfiles = (int *)soap_malloc(soap, sizeof(int))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2int(soap, t, ((trt__ProfileCapabilities*)a)->MaximumNumberOfProfiles))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((trt__ProfileCapabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->trt__ProfileCapabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->trt__ProfileCapabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->trt__ProfileCapabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->trt__ProfileCapabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->trt__ProfileCapabilities::__any, "xsd:byte"))
				{	a->trt__ProfileCapabilities::__size++;
					a->trt__ProfileCapabilities::__any = NULL;
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
		if (a->trt__ProfileCapabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->trt__ProfileCapabilities::__size)
			a->trt__ProfileCapabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->trt__ProfileCapabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (trt__ProfileCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_trt__ProfileCapabilities, 0, sizeof(trt__ProfileCapabilities), 0, soap_copy_trt__ProfileCapabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int trt__ProfileCapabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_trt__ProfileCapabilities);
	if (this->soap_out(soap, tag?tag:"trt:ProfileCapabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *trt__ProfileCapabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_trt__ProfileCapabilities(soap, this, tag, type);
}

SOAP_FMAC3 trt__ProfileCapabilities * SOAP_FMAC4 soap_get_trt__ProfileCapabilities(struct soap *soap, trt__ProfileCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_trt__ProfileCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 trt__ProfileCapabilities * SOAP_FMAC2 soap_instantiate_trt__ProfileCapabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_trt__ProfileCapabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_trt__ProfileCapabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_trt__ProfileCapabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying trt__ProfileCapabilities %p -> %p\n", q, p));
	*(trt__ProfileCapabilities*)p = *(trt__ProfileCapabilities*)q;
}

void trt__Capabilities::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->trt__Capabilities::ProfileCapabilities = NULL;
	this->trt__Capabilities::StreamingCapabilities = NULL;
	this->trt__Capabilities::__size = 0;
	this->trt__Capabilities::__any = NULL;
	this->trt__Capabilities::SnapshotUri = NULL;
	this->trt__Capabilities::Rotation = NULL;
	this->trt__Capabilities::__anyAttribute = NULL;
}

void trt__Capabilities::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTotrt__ProfileCapabilities(soap, &this->trt__Capabilities::ProfileCapabilities);
	soap_serialize_PointerTotrt__StreamingCapabilities(soap, &this->trt__Capabilities::StreamingCapabilities);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int trt__Capabilities::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_trt__Capabilities(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_trt__Capabilities(struct soap *soap, const char *tag, int id, const trt__Capabilities *a, const char *type)
{
	if (((trt__Capabilities*)a)->SnapshotUri)
		soap_set_attr(soap, "SnapshotUri", soap_bool2s(soap, *((trt__Capabilities*)a)->SnapshotUri), 1);
	if (((trt__Capabilities*)a)->Rotation)
		soap_set_attr(soap, "Rotation", soap_bool2s(soap, *((trt__Capabilities*)a)->Rotation), 1);
	if (((trt__Capabilities*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((trt__Capabilities*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_trt__Capabilities), "trt:Capabilities"))
		return soap->error;
	/* transient soap skipped */
	if (a->trt__Capabilities::ProfileCapabilities)
	{	if (soap_out_PointerTotrt__ProfileCapabilities(soap, "trt:ProfileCapabilities", -1, &a->trt__Capabilities::ProfileCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:ProfileCapabilities"))
		return soap->error;
	if (a->trt__Capabilities::StreamingCapabilities)
	{	if (soap_out_PointerTotrt__StreamingCapabilities(soap, "trt:StreamingCapabilities", -1, &a->trt__Capabilities::StreamingCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "trt:StreamingCapabilities"))
		return soap->error;
	if (a->trt__Capabilities::__any)
	{	int i;
		for (i = 0; i < a->trt__Capabilities::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->trt__Capabilities::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *trt__Capabilities::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_trt__Capabilities(soap, tag, this, type);
}

SOAP_FMAC3 trt__Capabilities * SOAP_FMAC4 soap_in_trt__Capabilities(struct soap *soap, const char *tag, trt__Capabilities *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (trt__Capabilities *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_trt__Capabilities, sizeof(trt__Capabilities), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_trt__Capabilities)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (trt__Capabilities *)a->soap_in(soap, tag, type);
		}
	}
	{	const char *t = soap_attr_value(soap, "SnapshotUri", 0);
		if (t)
		{
			if (!(((trt__Capabilities*)a)->SnapshotUri = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__Capabilities*)a)->SnapshotUri))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "Rotation", 0);
		if (t)
		{
			if (!(((trt__Capabilities*)a)->Rotation = (bool *)soap_malloc(soap, sizeof(bool))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2bool(soap, t, ((trt__Capabilities*)a)->Rotation))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((trt__Capabilities*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_ProfileCapabilities1 = 1;
	size_t soap_flag_StreamingCapabilities1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_ProfileCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotrt__ProfileCapabilities(soap, "trt:ProfileCapabilities", &(a->trt__Capabilities::ProfileCapabilities), "trt:ProfileCapabilities"))
				{	soap_flag_ProfileCapabilities1--;
					continue;
				}
			if (soap_flag_StreamingCapabilities1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotrt__StreamingCapabilities(soap, "trt:StreamingCapabilities", &(a->trt__Capabilities::StreamingCapabilities), "trt:StreamingCapabilities"))
				{	soap_flag_StreamingCapabilities1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->trt__Capabilities::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->trt__Capabilities::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->trt__Capabilities::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->trt__Capabilities::__any);
				}
				if (soap_in_byte(soap, "-any", a->trt__Capabilities::__any, "xsd:byte"))
				{	a->trt__Capabilities::__size++;
					a->trt__Capabilities::__any = NULL;
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
		if (a->trt__Capabilities::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->trt__Capabilities::__size)
			a->trt__Capabilities::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->trt__Capabilities::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (trt__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_trt__Capabilities, 0, sizeof(trt__Capabilities), 0, soap_copy_trt__Capabilities);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileCapabilities1 > 0 || soap_flag_StreamingCapabilities1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int trt__Capabilities::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_trt__Capabilities);
	if (this->soap_out(soap, tag?tag:"trt:Capabilities", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *trt__Capabilities::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_trt__Capabilities(soap, this, tag, type);
}

SOAP_FMAC3 trt__Capabilities * SOAP_FMAC4 soap_get_trt__Capabilities(struct soap *soap, trt__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_trt__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 trt__Capabilities * SOAP_FMAC2 soap_instantiate_trt__Capabilities(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_trt__Capabilities(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_trt__Capabilities, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_trt__Capabilities(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying trt__Capabilities %p -> %p\n", q, p));
	*(trt__Capabilities*)p = *(trt__Capabilities*)q;
}

void wstop__TopicSetType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wstop__ExtensibleDocumented::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wstop__TopicSetType::__size = 0;
	this->wstop__TopicSetType::__any = NULL;
}

void wstop__TopicSetType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wstop__ExtensibleDocumented::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__TopicSetType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__TopicSetType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__TopicSetType(struct soap *soap, const char *tag, int id, const wstop__TopicSetType *a, const char *type)
{
	if (((wstop__ExtensibleDocumented*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wstop__ExtensibleDocumented*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__TopicSetType), "wstop:TopicSetType"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &(a->wstop__ExtensibleDocumented::documentation), ""))
		return soap->error;
	if (a->wstop__TopicSetType::__any)
	{	int i;
		for (i = 0; i < a->wstop__TopicSetType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wstop__TopicSetType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *wstop__TopicSetType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__TopicSetType(soap, tag, this, type);
}

SOAP_FMAC3 wstop__TopicSetType * SOAP_FMAC4 soap_in_wstop__TopicSetType(struct soap *soap, const char *tag, wstop__TopicSetType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__TopicSetType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__TopicSetType, sizeof(wstop__TopicSetType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__TopicSetType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__TopicSetType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wstop__ExtensibleDocumented*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_documentation2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_documentation2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &(a->wstop__ExtensibleDocumented::documentation), "wstop:Documentation"))
				{	soap_flag_documentation2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wstop__TopicSetType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wstop__TopicSetType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wstop__TopicSetType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wstop__TopicSetType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wstop__TopicSetType::__any, "xsd:byte"))
				{	a->wstop__TopicSetType::__size++;
					a->wstop__TopicSetType::__any = NULL;
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
		if (a->wstop__TopicSetType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wstop__TopicSetType::__size)
			a->wstop__TopicSetType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wstop__TopicSetType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wstop__TopicSetType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__TopicSetType, 0, sizeof(wstop__TopicSetType), 0, soap_copy_wstop__TopicSetType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__TopicSetType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__TopicSetType);
	if (this->soap_out(soap, tag?tag:"wstop:TopicSetType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__TopicSetType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__TopicSetType(soap, this, tag, type);
}

SOAP_FMAC3 wstop__TopicSetType * SOAP_FMAC4 soap_get_wstop__TopicSetType(struct soap *soap, wstop__TopicSetType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__TopicSetType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__TopicSetType * SOAP_FMAC2 soap_instantiate_wstop__TopicSetType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__TopicSetType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__TopicSetType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__TopicSetType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__TopicSetType %p -> %p\n", q, p));
	*(wstop__TopicSetType*)p = *(wstop__TopicSetType*)q;
}

void wstop__TopicType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wstop__ExtensibleDocumented::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wstop__TopicType::MessagePattern = NULL;
	this->wstop__TopicType::__sizeTopic = 0;
	this->wstop__TopicType::Topic = NULL;
	this->wstop__TopicType::__size = 0;
	this->wstop__TopicType::__any = NULL;
	soap_default_xsd__NCName(soap, &this->wstop__TopicType::name);
	this->wstop__TopicType::messageTypes = NULL;
	this->wstop__TopicType::final = (bool)0;
}

void wstop__TopicType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowstop__QueryExpressionType(soap, &this->wstop__TopicType::MessagePattern);
	if (this->wstop__TopicType::Topic)
	{	int i;
		for (i = 0; i < this->wstop__TopicType::__sizeTopic; i++)
		{
			soap_serialize_PointerTowstop__TopicType(soap, this->wstop__TopicType::Topic + i);
		}
	}
	this->wstop__ExtensibleDocumented::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__TopicType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__TopicType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__TopicType(struct soap *soap, const char *tag, int id, const wstop__TopicType *a, const char *type)
{
	if (((wstop__TopicType*)a)->name)
		soap_set_attr(soap, "name", ((wstop__TopicType*)a)->name, 1);
	if (((wstop__TopicType*)a)->messageTypes)
		if (*((wstop__TopicType*)a)->messageTypes)
			soap_set_attr(soap, "messageTypes", soap_QName2s(soap, *((wstop__TopicType*)a)->messageTypes), 1);
	soap_set_attr(soap, "final", soap_bool2s(soap, ((wstop__TopicType*)a)->final), 1);
	if (((wstop__ExtensibleDocumented*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wstop__ExtensibleDocumented*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__TopicType), "wstop:TopicType"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &(a->wstop__ExtensibleDocumented::documentation), ""))
		return soap->error;
	if (soap_out_PointerTowstop__QueryExpressionType(soap, "wstop:MessagePattern", -1, &(a->wstop__TopicType::MessagePattern), ""))
		return soap->error;
	if (a->wstop__TopicType::Topic)
	{	int i;
		for (i = 0; i < a->wstop__TopicType::__sizeTopic; i++)
			if (soap_out_PointerTowstop__TopicType(soap, "wstop:Topic", -1, a->wstop__TopicType::Topic + i, ""))
				return soap->error;
	}
	if (a->wstop__TopicType::__any)
	{	int i;
		for (i = 0; i < a->wstop__TopicType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wstop__TopicType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *wstop__TopicType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__TopicType(soap, tag, this, type);
}

SOAP_FMAC3 wstop__TopicType * SOAP_FMAC4 soap_in_wstop__TopicType(struct soap *soap, const char *tag, wstop__TopicType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__TopicType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__TopicType, sizeof(wstop__TopicType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__TopicType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__TopicType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "name", 1), &((wstop__TopicType*)a)->name, 0, -1))
		return NULL;
	{	const char *t = soap_attr_value(soap, "messageTypes", 0);
		if (t)
		{
			if (!(((wstop__TopicType*)a)->messageTypes = (char **)soap_malloc(soap, sizeof(char *))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2QName(soap, t, ((wstop__TopicType*)a)->messageTypes, 0, -1))
				return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2bool(soap, soap_attr_value(soap, "final", 0), &((wstop__TopicType*)a)->final))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wstop__ExtensibleDocumented*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_documentation2 = 1;
	size_t soap_flag_MessagePattern1 = 1;
	struct soap_blist *soap_blist_Topic1 = NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_documentation2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &(a->wstop__ExtensibleDocumented::documentation), "wstop:Documentation"))
				{	soap_flag_documentation2--;
					continue;
				}
			if (soap_flag_MessagePattern1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__QueryExpressionType(soap, "wstop:MessagePattern", &(a->wstop__TopicType::MessagePattern), "wstop:QueryExpressionType"))
				{	soap_flag_MessagePattern1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wstop:Topic", 1, NULL))
			{	if (a->wstop__TopicType::Topic == NULL)
				{	if (soap_blist_Topic1 == NULL)
						soap_blist_Topic1 = soap_new_block(soap);
					a->wstop__TopicType::Topic = (wstop__TopicType **)soap_push_block(soap, soap_blist_Topic1, sizeof(wstop__TopicType *));
					if (a->wstop__TopicType::Topic == NULL)
						return NULL;
					*a->wstop__TopicType::Topic = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTowstop__TopicType(soap, "wstop:Topic", a->wstop__TopicType::Topic, "wstop:TopicType"))
				{	a->wstop__TopicType::__sizeTopic++;
					a->wstop__TopicType::Topic = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wstop__TopicType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wstop__TopicType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wstop__TopicType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wstop__TopicType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wstop__TopicType::__any, "xsd:byte"))
				{	a->wstop__TopicType::__size++;
					a->wstop__TopicType::__any = NULL;
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
		if (a->wstop__TopicType::Topic)
			soap_pop_block(soap, soap_blist_Topic1);
		if (a->wstop__TopicType::__sizeTopic)
			a->wstop__TopicType::Topic = (wstop__TopicType **)soap_save_block(soap, soap_blist_Topic1, NULL, 1);
		else
		{	a->wstop__TopicType::Topic = NULL;
			if (soap_blist_Topic1)
				soap_end_block(soap, soap_blist_Topic1);
		}
		if (a->wstop__TopicType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wstop__TopicType::__size)
			a->wstop__TopicType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wstop__TopicType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wstop__TopicType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__TopicType, 0, sizeof(wstop__TopicType), 0, soap_copy_wstop__TopicType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__TopicType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__TopicType);
	if (this->soap_out(soap, tag?tag:"wstop:TopicType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__TopicType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__TopicType(soap, this, tag, type);
}

SOAP_FMAC3 wstop__TopicType * SOAP_FMAC4 soap_get_wstop__TopicType(struct soap *soap, wstop__TopicType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__TopicType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__TopicType * SOAP_FMAC2 soap_instantiate_wstop__TopicType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__TopicType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__TopicType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__TopicType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__TopicType %p -> %p\n", q, p));
	*(wstop__TopicType*)p = *(wstop__TopicType*)q;
}

void wstop__TopicNamespaceType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wstop__ExtensibleDocumented::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wstop__TopicNamespaceType::__sizeTopic = 0;
	this->wstop__TopicNamespaceType::Topic = NULL;
	this->wstop__TopicNamespaceType::__size = 0;
	this->wstop__TopicNamespaceType::__any = NULL;
	soap_default_xsd__NCName(soap, &this->wstop__TopicNamespaceType::name);
	soap_default_xsd__anyURI(soap, &this->wstop__TopicNamespaceType::targetNamespace);
	this->wstop__TopicNamespaceType::final = (bool)0;
}

void wstop__TopicNamespaceType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->wstop__TopicNamespaceType::Topic)
	{	int i;
		for (i = 0; i < this->wstop__TopicNamespaceType::__sizeTopic; i++)
		{
			soap_embedded(soap, this->wstop__TopicNamespaceType::Topic + i, SOAP_TYPE__wstop__TopicNamespaceType_Topic);
			this->wstop__TopicNamespaceType::Topic[i].soap_serialize(soap);
		}
	}
	this->wstop__ExtensibleDocumented::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__TopicNamespaceType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__TopicNamespaceType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__TopicNamespaceType(struct soap *soap, const char *tag, int id, const wstop__TopicNamespaceType *a, const char *type)
{
	if (((wstop__TopicNamespaceType*)a)->name)
		soap_set_attr(soap, "name", ((wstop__TopicNamespaceType*)a)->name, 1);
	if (((wstop__TopicNamespaceType*)a)->targetNamespace)
		soap_set_attr(soap, "targetNamespace", ((wstop__TopicNamespaceType*)a)->targetNamespace, 1);
	soap_set_attr(soap, "final", soap_bool2s(soap, ((wstop__TopicNamespaceType*)a)->final), 1);
	if (((wstop__ExtensibleDocumented*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wstop__ExtensibleDocumented*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__TopicNamespaceType), "wstop:TopicNamespaceType"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &(a->wstop__ExtensibleDocumented::documentation), ""))
		return soap->error;
	if (a->wstop__TopicNamespaceType::Topic)
	{	int i;
		for (i = 0; i < a->wstop__TopicNamespaceType::__sizeTopic; i++)
			if (a->wstop__TopicNamespaceType::Topic[i].soap_out(soap, "wstop:Topic", -1, ""))
				return soap->error;
	}
	if (a->wstop__TopicNamespaceType::__any)
	{	int i;
		for (i = 0; i < a->wstop__TopicNamespaceType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wstop__TopicNamespaceType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *wstop__TopicNamespaceType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__TopicNamespaceType(soap, tag, this, type);
}

SOAP_FMAC3 wstop__TopicNamespaceType * SOAP_FMAC4 soap_in_wstop__TopicNamespaceType(struct soap *soap, const char *tag, wstop__TopicNamespaceType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__TopicNamespaceType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__TopicNamespaceType, sizeof(wstop__TopicNamespaceType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__TopicNamespaceType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__TopicNamespaceType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "name", 0), &((wstop__TopicNamespaceType*)a)->name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "targetNamespace", 1), &((wstop__TopicNamespaceType*)a)->targetNamespace, 0, -1))
		return NULL;
	if (soap_s2bool(soap, soap_attr_value(soap, "final", 0), &((wstop__TopicNamespaceType*)a)->final))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wstop__ExtensibleDocumented*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_documentation2 = 1;
	struct soap_blist *soap_blist_Topic1 = NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_documentation2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &(a->wstop__ExtensibleDocumented::documentation), "wstop:Documentation"))
				{	soap_flag_documentation2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wstop:Topic", 1, NULL))
			{	if (a->wstop__TopicNamespaceType::Topic == NULL)
				{	if (soap_blist_Topic1 == NULL)
						soap_blist_Topic1 = soap_new_block(soap);
					a->wstop__TopicNamespaceType::Topic = (_wstop__TopicNamespaceType_Topic *)soap_push_block(soap, soap_blist_Topic1, sizeof(_wstop__TopicNamespaceType_Topic));
					if (a->wstop__TopicNamespaceType::Topic == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wstop__TopicNamespaceType::Topic, _wstop__TopicNamespaceType_Topic);
					a->wstop__TopicNamespaceType::Topic->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wstop__TopicNamespaceType_Topic(soap, "wstop:Topic", a->wstop__TopicNamespaceType::Topic, ""))
				{	a->wstop__TopicNamespaceType::__sizeTopic++;
					a->wstop__TopicNamespaceType::Topic = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wstop__TopicNamespaceType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wstop__TopicNamespaceType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wstop__TopicNamespaceType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wstop__TopicNamespaceType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wstop__TopicNamespaceType::__any, "xsd:byte"))
				{	a->wstop__TopicNamespaceType::__size++;
					a->wstop__TopicNamespaceType::__any = NULL;
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
		if (a->wstop__TopicNamespaceType::Topic)
			soap_pop_block(soap, soap_blist_Topic1);
		if (a->wstop__TopicNamespaceType::__sizeTopic)
			a->wstop__TopicNamespaceType::Topic = (_wstop__TopicNamespaceType_Topic *)soap_save_block(soap, soap_blist_Topic1, NULL, 1);
		else
		{	a->wstop__TopicNamespaceType::Topic = NULL;
			if (soap_blist_Topic1)
				soap_end_block(soap, soap_blist_Topic1);
		}
		if (a->wstop__TopicNamespaceType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wstop__TopicNamespaceType::__size)
			a->wstop__TopicNamespaceType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wstop__TopicNamespaceType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wstop__TopicNamespaceType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__TopicNamespaceType, 0, sizeof(wstop__TopicNamespaceType), 0, soap_copy_wstop__TopicNamespaceType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__TopicNamespaceType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__TopicNamespaceType);
	if (this->soap_out(soap, tag?tag:"wstop:TopicNamespaceType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__TopicNamespaceType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__TopicNamespaceType(soap, this, tag, type);
}

SOAP_FMAC3 wstop__TopicNamespaceType * SOAP_FMAC4 soap_get_wstop__TopicNamespaceType(struct soap *soap, wstop__TopicNamespaceType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__TopicNamespaceType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__TopicNamespaceType * SOAP_FMAC2 soap_instantiate_wstop__TopicNamespaceType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__TopicNamespaceType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__TopicNamespaceType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__TopicNamespaceType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__TopicNamespaceType %p -> %p\n", q, p));
	*(wstop__TopicNamespaceType*)p = *(wstop__TopicNamespaceType*)q;
}

void wstop__QueryExpressionType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wstop__QueryExpressionType::__any = NULL;
	soap_default_xsd__anyURI(soap, &this->wstop__QueryExpressionType::Dialect);
	this->wstop__QueryExpressionType::__mixed = NULL;
}

void wstop__QueryExpressionType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__QueryExpressionType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__QueryExpressionType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__QueryExpressionType(struct soap *soap, const char *tag, int id, const wstop__QueryExpressionType *a, const char *type)
{
	if (((wstop__QueryExpressionType*)a)->Dialect)
		soap_set_attr(soap, "Dialect", ((wstop__QueryExpressionType*)a)->Dialect, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__QueryExpressionType), "wstop:QueryExpressionType"))
		return soap->error;
	/* transient soap skipped */
	soap_outliteral(soap, "-any", &(a->wstop__QueryExpressionType::__any), NULL);
	soap_outliteral(soap, "-mixed", &(a->wstop__QueryExpressionType::__mixed), NULL);
	return soap_element_end_out(soap, tag);
}

void *wstop__QueryExpressionType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__QueryExpressionType(soap, tag, this, type);
}

SOAP_FMAC3 wstop__QueryExpressionType * SOAP_FMAC4 soap_in_wstop__QueryExpressionType(struct soap *soap, const char *tag, wstop__QueryExpressionType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__QueryExpressionType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__QueryExpressionType, sizeof(wstop__QueryExpressionType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__QueryExpressionType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__QueryExpressionType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Dialect", 1), &((wstop__QueryExpressionType*)a)->Dialect, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag___any1 = 1;
	size_t soap_flag___mixed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->wstop__QueryExpressionType::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap_flag___mixed1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &(a->wstop__QueryExpressionType::__mixed)))
				{	soap_flag___mixed1--;
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
	{	a = (wstop__QueryExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__QueryExpressionType, 0, sizeof(wstop__QueryExpressionType), 0, soap_copy_wstop__QueryExpressionType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__QueryExpressionType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__QueryExpressionType);
	if (this->soap_out(soap, tag?tag:"wstop:QueryExpressionType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__QueryExpressionType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__QueryExpressionType(soap, this, tag, type);
}

SOAP_FMAC3 wstop__QueryExpressionType * SOAP_FMAC4 soap_get_wstop__QueryExpressionType(struct soap *soap, wstop__QueryExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__QueryExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__QueryExpressionType * SOAP_FMAC2 soap_instantiate_wstop__QueryExpressionType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__QueryExpressionType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__QueryExpressionType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__QueryExpressionType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__QueryExpressionType %p -> %p\n", q, p));
	*(wstop__QueryExpressionType*)p = *(wstop__QueryExpressionType*)q;
}

void wstop__ExtensibleDocumented::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wstop__ExtensibleDocumented::documentation = NULL;
	this->wstop__ExtensibleDocumented::__anyAttribute = NULL;
}

void wstop__ExtensibleDocumented::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowstop__Documentation(soap, &this->wstop__ExtensibleDocumented::documentation);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__ExtensibleDocumented::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__ExtensibleDocumented(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__ExtensibleDocumented(struct soap *soap, const char *tag, int id, const wstop__ExtensibleDocumented *a, const char *type)
{
	if (((wstop__ExtensibleDocumented*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wstop__ExtensibleDocumented*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__ExtensibleDocumented), "wstop:ExtensibleDocumented"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &(a->wstop__ExtensibleDocumented::documentation), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wstop__ExtensibleDocumented::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__ExtensibleDocumented(soap, tag, this, type);
}

SOAP_FMAC3 wstop__ExtensibleDocumented * SOAP_FMAC4 soap_in_wstop__ExtensibleDocumented(struct soap *soap, const char *tag, wstop__ExtensibleDocumented *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__ExtensibleDocumented *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__ExtensibleDocumented, sizeof(wstop__ExtensibleDocumented), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__ExtensibleDocumented)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__ExtensibleDocumented *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wstop__ExtensibleDocumented*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_documentation1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_documentation1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &(a->wstop__ExtensibleDocumented::documentation), "wstop:Documentation"))
				{	soap_flag_documentation1--;
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
	{	a = (wstop__ExtensibleDocumented *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__ExtensibleDocumented, 0, sizeof(wstop__ExtensibleDocumented), 0, soap_copy_wstop__ExtensibleDocumented);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__ExtensibleDocumented::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__ExtensibleDocumented);
	if (this->soap_out(soap, tag?tag:"wstop:ExtensibleDocumented", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__ExtensibleDocumented::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__ExtensibleDocumented(soap, this, tag, type);
}

SOAP_FMAC3 wstop__ExtensibleDocumented * SOAP_FMAC4 soap_get_wstop__ExtensibleDocumented(struct soap *soap, wstop__ExtensibleDocumented *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__ExtensibleDocumented(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__ExtensibleDocumented * SOAP_FMAC2 soap_instantiate_wstop__ExtensibleDocumented(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__ExtensibleDocumented(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__ExtensibleDocumented, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__ExtensibleDocumented(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__ExtensibleDocumented %p -> %p\n", q, p));
	*(wstop__ExtensibleDocumented*)p = *(wstop__ExtensibleDocumented*)q;
}

void wstop__Documentation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wstop__Documentation::__size = 0;
	this->wstop__Documentation::__any = NULL;
	this->wstop__Documentation::__mixed = NULL;
}

void wstop__Documentation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wstop__Documentation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wstop__Documentation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__Documentation(struct soap *soap, const char *tag, int id, const wstop__Documentation *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__Documentation), "wstop:Documentation"))
		return soap->error;
	/* transient soap skipped */
	if (a->wstop__Documentation::__any)
	{	int i;
		for (i = 0; i < a->wstop__Documentation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wstop__Documentation::__any + i, ""))
				return soap->error;
	}
	soap_outliteral(soap, "-mixed", &(a->wstop__Documentation::__mixed), NULL);
	return soap_element_end_out(soap, tag);
}

void *wstop__Documentation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wstop__Documentation(soap, tag, this, type);
}

SOAP_FMAC3 wstop__Documentation * SOAP_FMAC4 soap_in_wstop__Documentation(struct soap *soap, const char *tag, wstop__Documentation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wstop__Documentation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__Documentation, sizeof(wstop__Documentation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wstop__Documentation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wstop__Documentation *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag___mixed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wstop__Documentation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wstop__Documentation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wstop__Documentation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wstop__Documentation::__any);
				}
				if (soap_in_byte(soap, "-any", a->wstop__Documentation::__any, "xsd:byte"))
				{	a->wstop__Documentation::__size++;
					a->wstop__Documentation::__any = NULL;
					continue;
				}
			}
			if (soap_flag___mixed1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &(a->wstop__Documentation::__mixed)))
				{	soap_flag___mixed1--;
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
		if (a->wstop__Documentation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wstop__Documentation::__size)
			a->wstop__Documentation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wstop__Documentation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wstop__Documentation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__Documentation, 0, sizeof(wstop__Documentation), 0, soap_copy_wstop__Documentation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wstop__Documentation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wstop__Documentation);
	if (this->soap_out(soap, tag?tag:"wstop:Documentation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wstop__Documentation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wstop__Documentation(soap, this, tag, type);
}

SOAP_FMAC3 wstop__Documentation * SOAP_FMAC4 soap_get_wstop__Documentation(struct soap *soap, wstop__Documentation *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__Documentation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wstop__Documentation * SOAP_FMAC2 soap_instantiate_wstop__Documentation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wstop__Documentation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wstop__Documentation, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wstop__Documentation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wstop__Documentation %p -> %p\n", q, p));
	*(wstop__Documentation*)p = *(wstop__Documentation*)q;
}

void wsrfbf__BaseFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsrfbf__BaseFaultType::__size = 0;
	this->wsrfbf__BaseFaultType::__any = NULL;
	soap_default_time(soap, &this->wsrfbf__BaseFaultType::Timestamp);
	this->wsrfbf__BaseFaultType::Originator = NULL;
	this->wsrfbf__BaseFaultType::ErrorCode = NULL;
	this->wsrfbf__BaseFaultType::__sizeDescription = 0;
	this->wsrfbf__BaseFaultType::Description = NULL;
	this->wsrfbf__BaseFaultType::FaultCause = NULL;
	this->wsrfbf__BaseFaultType::__anyAttribute = NULL;
}

void wsrfbf__BaseFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->wsrfbf__BaseFaultType::Timestamp, SOAP_TYPE_time);
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &this->wsrfbf__BaseFaultType::Originator);
	soap_serialize_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, &this->wsrfbf__BaseFaultType::ErrorCode);
	if (this->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < this->wsrfbf__BaseFaultType::__sizeDescription; i++)
		{
			soap_embedded(soap, this->wsrfbf__BaseFaultType::Description + i, SOAP_TYPE__wsrfbf__BaseFaultType_Description);
			this->wsrfbf__BaseFaultType::Description[i].soap_serialize(soap);
		}
	}
	soap_serialize_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, &this->wsrfbf__BaseFaultType::FaultCause);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsrfbf__BaseFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsrfbf__BaseFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsrfbf__BaseFaultType(struct soap *soap, const char *tag, int id, const wsrfbf__BaseFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsrfbf__BaseFaultType), "wsrfbf:BaseFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsrfbf__BaseFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsrfbf__BaseFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsrfbf__BaseFaultType * SOAP_FMAC4 soap_in_wsrfbf__BaseFaultType(struct soap *soap, const char *tag, wsrfbf__BaseFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsrfbf__BaseFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsrfbf__BaseFaultType, sizeof(wsrfbf__BaseFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsrfbf__BaseFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsrfbf__BaseFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	size_t soap_flag_Timestamp1 = 1;
	size_t soap_flag_Originator1 = 1;
	size_t soap_flag_ErrorCode1 = 1;
	struct soap_blist *soap_blist_Description1 = NULL;
	size_t soap_flag_FaultCause1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp1--;
					continue;
				}
			if (soap_flag_Originator1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator1--;
					continue;
				}
			if (soap_flag_ErrorCode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description1 == NULL)
						soap_blist_Description1 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description1, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description1);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description1, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description1)
				soap_end_block(soap, soap_blist_Description1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsrfbf__BaseFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsrfbf__BaseFaultType, 0, sizeof(wsrfbf__BaseFaultType), 0, soap_copy_wsrfbf__BaseFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsrfbf__BaseFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsrfbf__BaseFaultType);
	if (this->soap_out(soap, tag?tag:"wsrfbf:BaseFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsrfbf__BaseFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsrfbf__BaseFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsrfbf__BaseFaultType * SOAP_FMAC4 soap_get_wsrfbf__BaseFaultType(struct soap *soap, wsrfbf__BaseFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsrfbf__BaseFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsrfbf__BaseFaultType * SOAP_FMAC2 soap_instantiate_wsrfbf__BaseFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsrfbf__BaseFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsrfbf__BaseFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsrfbf__BaseFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsrfbf__BaseFaultType %p -> %p\n", q, p));
	*(wsrfbf__BaseFaultType*)p = *(wsrfbf__BaseFaultType*)q;
}

void _wsnt__ResumeSubscriptionResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__ResumeSubscriptionResponse::__size = 0;
	this->_wsnt__ResumeSubscriptionResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__ResumeSubscriptionResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__ResumeSubscriptionResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__ResumeSubscriptionResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__ResumeSubscriptionResponse(struct soap *soap, const char *tag, int id, const _wsnt__ResumeSubscriptionResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__ResumeSubscriptionResponse), type))
		return soap->error;
	if (a->_wsnt__ResumeSubscriptionResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__ResumeSubscriptionResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__ResumeSubscriptionResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__ResumeSubscriptionResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__ResumeSubscriptionResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__ResumeSubscriptionResponse * SOAP_FMAC4 soap_in__wsnt__ResumeSubscriptionResponse(struct soap *soap, const char *tag, _wsnt__ResumeSubscriptionResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__ResumeSubscriptionResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__ResumeSubscriptionResponse, sizeof(_wsnt__ResumeSubscriptionResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__ResumeSubscriptionResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__ResumeSubscriptionResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__ResumeSubscriptionResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__ResumeSubscriptionResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__ResumeSubscriptionResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__ResumeSubscriptionResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__ResumeSubscriptionResponse::__any, "xsd:byte"))
				{	a->_wsnt__ResumeSubscriptionResponse::__size++;
					a->_wsnt__ResumeSubscriptionResponse::__any = NULL;
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
		if (a->_wsnt__ResumeSubscriptionResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__ResumeSubscriptionResponse::__size)
			a->_wsnt__ResumeSubscriptionResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__ResumeSubscriptionResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__ResumeSubscriptionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__ResumeSubscriptionResponse, 0, sizeof(_wsnt__ResumeSubscriptionResponse), 0, soap_copy__wsnt__ResumeSubscriptionResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__ResumeSubscriptionResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__ResumeSubscriptionResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:ResumeSubscriptionResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__ResumeSubscriptionResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__ResumeSubscriptionResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__ResumeSubscriptionResponse * SOAP_FMAC4 soap_get__wsnt__ResumeSubscriptionResponse(struct soap *soap, _wsnt__ResumeSubscriptionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__ResumeSubscriptionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__ResumeSubscriptionResponse * SOAP_FMAC2 soap_instantiate__wsnt__ResumeSubscriptionResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__ResumeSubscriptionResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__ResumeSubscriptionResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__ResumeSubscriptionResponse);
		if (size)
			*size = sizeof(_wsnt__ResumeSubscriptionResponse);
		((_wsnt__ResumeSubscriptionResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__ResumeSubscriptionResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__ResumeSubscriptionResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__ResumeSubscriptionResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__ResumeSubscriptionResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__ResumeSubscriptionResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__ResumeSubscriptionResponse %p -> %p\n", q, p));
	*(_wsnt__ResumeSubscriptionResponse*)p = *(_wsnt__ResumeSubscriptionResponse*)q;
}

void _wsnt__ResumeSubscription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__ResumeSubscription::__size = 0;
	this->_wsnt__ResumeSubscription::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__ResumeSubscription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__ResumeSubscription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__ResumeSubscription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__ResumeSubscription(struct soap *soap, const char *tag, int id, const _wsnt__ResumeSubscription *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__ResumeSubscription), type))
		return soap->error;
	if (a->_wsnt__ResumeSubscription::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__ResumeSubscription::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__ResumeSubscription::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__ResumeSubscription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__ResumeSubscription(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__ResumeSubscription * SOAP_FMAC4 soap_in__wsnt__ResumeSubscription(struct soap *soap, const char *tag, _wsnt__ResumeSubscription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__ResumeSubscription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__ResumeSubscription, sizeof(_wsnt__ResumeSubscription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__ResumeSubscription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__ResumeSubscription *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__ResumeSubscription::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__ResumeSubscription::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__ResumeSubscription::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__ResumeSubscription::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__ResumeSubscription::__any, "xsd:byte"))
				{	a->_wsnt__ResumeSubscription::__size++;
					a->_wsnt__ResumeSubscription::__any = NULL;
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
		if (a->_wsnt__ResumeSubscription::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__ResumeSubscription::__size)
			a->_wsnt__ResumeSubscription::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__ResumeSubscription::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__ResumeSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__ResumeSubscription, 0, sizeof(_wsnt__ResumeSubscription), 0, soap_copy__wsnt__ResumeSubscription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__ResumeSubscription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__ResumeSubscription);
	if (this->soap_out(soap, tag?tag:"wsnt:ResumeSubscription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__ResumeSubscription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__ResumeSubscription(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__ResumeSubscription * SOAP_FMAC4 soap_get__wsnt__ResumeSubscription(struct soap *soap, _wsnt__ResumeSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__ResumeSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__ResumeSubscription * SOAP_FMAC2 soap_instantiate__wsnt__ResumeSubscription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__ResumeSubscription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__ResumeSubscription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__ResumeSubscription);
		if (size)
			*size = sizeof(_wsnt__ResumeSubscription);
		((_wsnt__ResumeSubscription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__ResumeSubscription, n);
		if (size)
			*size = n * sizeof(_wsnt__ResumeSubscription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__ResumeSubscription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__ResumeSubscription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__ResumeSubscription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__ResumeSubscription %p -> %p\n", q, p));
	*(_wsnt__ResumeSubscription*)p = *(_wsnt__ResumeSubscription*)q;
}

void _wsnt__PauseSubscriptionResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__PauseSubscriptionResponse::__size = 0;
	this->_wsnt__PauseSubscriptionResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__PauseSubscriptionResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__PauseSubscriptionResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__PauseSubscriptionResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__PauseSubscriptionResponse(struct soap *soap, const char *tag, int id, const _wsnt__PauseSubscriptionResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__PauseSubscriptionResponse), type))
		return soap->error;
	if (a->_wsnt__PauseSubscriptionResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__PauseSubscriptionResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__PauseSubscriptionResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__PauseSubscriptionResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__PauseSubscriptionResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__PauseSubscriptionResponse * SOAP_FMAC4 soap_in__wsnt__PauseSubscriptionResponse(struct soap *soap, const char *tag, _wsnt__PauseSubscriptionResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__PauseSubscriptionResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__PauseSubscriptionResponse, sizeof(_wsnt__PauseSubscriptionResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__PauseSubscriptionResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__PauseSubscriptionResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__PauseSubscriptionResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__PauseSubscriptionResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__PauseSubscriptionResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__PauseSubscriptionResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__PauseSubscriptionResponse::__any, "xsd:byte"))
				{	a->_wsnt__PauseSubscriptionResponse::__size++;
					a->_wsnt__PauseSubscriptionResponse::__any = NULL;
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
		if (a->_wsnt__PauseSubscriptionResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__PauseSubscriptionResponse::__size)
			a->_wsnt__PauseSubscriptionResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__PauseSubscriptionResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__PauseSubscriptionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__PauseSubscriptionResponse, 0, sizeof(_wsnt__PauseSubscriptionResponse), 0, soap_copy__wsnt__PauseSubscriptionResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__PauseSubscriptionResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__PauseSubscriptionResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:PauseSubscriptionResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__PauseSubscriptionResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__PauseSubscriptionResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__PauseSubscriptionResponse * SOAP_FMAC4 soap_get__wsnt__PauseSubscriptionResponse(struct soap *soap, _wsnt__PauseSubscriptionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__PauseSubscriptionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__PauseSubscriptionResponse * SOAP_FMAC2 soap_instantiate__wsnt__PauseSubscriptionResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__PauseSubscriptionResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__PauseSubscriptionResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__PauseSubscriptionResponse);
		if (size)
			*size = sizeof(_wsnt__PauseSubscriptionResponse);
		((_wsnt__PauseSubscriptionResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__PauseSubscriptionResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__PauseSubscriptionResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__PauseSubscriptionResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__PauseSubscriptionResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__PauseSubscriptionResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__PauseSubscriptionResponse %p -> %p\n", q, p));
	*(_wsnt__PauseSubscriptionResponse*)p = *(_wsnt__PauseSubscriptionResponse*)q;
}

void _wsnt__PauseSubscription::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__PauseSubscription::__size = 0;
	this->_wsnt__PauseSubscription::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__PauseSubscription::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__PauseSubscription::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__PauseSubscription(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__PauseSubscription(struct soap *soap, const char *tag, int id, const _wsnt__PauseSubscription *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__PauseSubscription), type))
		return soap->error;
	if (a->_wsnt__PauseSubscription::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__PauseSubscription::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__PauseSubscription::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__PauseSubscription::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__PauseSubscription(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__PauseSubscription * SOAP_FMAC4 soap_in__wsnt__PauseSubscription(struct soap *soap, const char *tag, _wsnt__PauseSubscription *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__PauseSubscription *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__PauseSubscription, sizeof(_wsnt__PauseSubscription), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__PauseSubscription)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__PauseSubscription *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__PauseSubscription::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__PauseSubscription::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__PauseSubscription::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__PauseSubscription::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__PauseSubscription::__any, "xsd:byte"))
				{	a->_wsnt__PauseSubscription::__size++;
					a->_wsnt__PauseSubscription::__any = NULL;
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
		if (a->_wsnt__PauseSubscription::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__PauseSubscription::__size)
			a->_wsnt__PauseSubscription::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__PauseSubscription::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__PauseSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__PauseSubscription, 0, sizeof(_wsnt__PauseSubscription), 0, soap_copy__wsnt__PauseSubscription);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__PauseSubscription::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__PauseSubscription);
	if (this->soap_out(soap, tag?tag:"wsnt:PauseSubscription", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__PauseSubscription::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__PauseSubscription(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__PauseSubscription * SOAP_FMAC4 soap_get__wsnt__PauseSubscription(struct soap *soap, _wsnt__PauseSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__PauseSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__PauseSubscription * SOAP_FMAC2 soap_instantiate__wsnt__PauseSubscription(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__PauseSubscription(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__PauseSubscription, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__PauseSubscription);
		if (size)
			*size = sizeof(_wsnt__PauseSubscription);
		((_wsnt__PauseSubscription*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__PauseSubscription, n);
		if (size)
			*size = n * sizeof(_wsnt__PauseSubscription);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__PauseSubscription*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__PauseSubscription*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__PauseSubscription(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__PauseSubscription %p -> %p\n", q, p));
	*(_wsnt__PauseSubscription*)p = *(_wsnt__PauseSubscription*)q;
}

void _wsnt__UnsubscribeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__UnsubscribeResponse::__size = 0;
	this->_wsnt__UnsubscribeResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__UnsubscribeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__UnsubscribeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__UnsubscribeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__UnsubscribeResponse(struct soap *soap, const char *tag, int id, const _wsnt__UnsubscribeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__UnsubscribeResponse), type))
		return soap->error;
	if (a->_wsnt__UnsubscribeResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__UnsubscribeResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__UnsubscribeResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__UnsubscribeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__UnsubscribeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__UnsubscribeResponse * SOAP_FMAC4 soap_in__wsnt__UnsubscribeResponse(struct soap *soap, const char *tag, _wsnt__UnsubscribeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__UnsubscribeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__UnsubscribeResponse, sizeof(_wsnt__UnsubscribeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__UnsubscribeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__UnsubscribeResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__UnsubscribeResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__UnsubscribeResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__UnsubscribeResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__UnsubscribeResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__UnsubscribeResponse::__any, "xsd:byte"))
				{	a->_wsnt__UnsubscribeResponse::__size++;
					a->_wsnt__UnsubscribeResponse::__any = NULL;
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
		if (a->_wsnt__UnsubscribeResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__UnsubscribeResponse::__size)
			a->_wsnt__UnsubscribeResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__UnsubscribeResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__UnsubscribeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__UnsubscribeResponse, 0, sizeof(_wsnt__UnsubscribeResponse), 0, soap_copy__wsnt__UnsubscribeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__UnsubscribeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__UnsubscribeResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:UnsubscribeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__UnsubscribeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__UnsubscribeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__UnsubscribeResponse * SOAP_FMAC4 soap_get__wsnt__UnsubscribeResponse(struct soap *soap, _wsnt__UnsubscribeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__UnsubscribeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__UnsubscribeResponse * SOAP_FMAC2 soap_instantiate__wsnt__UnsubscribeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__UnsubscribeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__UnsubscribeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__UnsubscribeResponse);
		if (size)
			*size = sizeof(_wsnt__UnsubscribeResponse);
		((_wsnt__UnsubscribeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__UnsubscribeResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__UnsubscribeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__UnsubscribeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__UnsubscribeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__UnsubscribeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__UnsubscribeResponse %p -> %p\n", q, p));
	*(_wsnt__UnsubscribeResponse*)p = *(_wsnt__UnsubscribeResponse*)q;
}

void _wsnt__Unsubscribe::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__Unsubscribe::__size = 0;
	this->_wsnt__Unsubscribe::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__Unsubscribe::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__Unsubscribe::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__Unsubscribe(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Unsubscribe(struct soap *soap, const char *tag, int id, const _wsnt__Unsubscribe *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Unsubscribe), type))
		return soap->error;
	if (a->_wsnt__Unsubscribe::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__Unsubscribe::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__Unsubscribe::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__Unsubscribe::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__Unsubscribe(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__Unsubscribe * SOAP_FMAC4 soap_in__wsnt__Unsubscribe(struct soap *soap, const char *tag, _wsnt__Unsubscribe *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__Unsubscribe *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Unsubscribe, sizeof(_wsnt__Unsubscribe), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__Unsubscribe)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__Unsubscribe *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__Unsubscribe::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__Unsubscribe::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__Unsubscribe::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__Unsubscribe::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__Unsubscribe::__any, "xsd:byte"))
				{	a->_wsnt__Unsubscribe::__size++;
					a->_wsnt__Unsubscribe::__any = NULL;
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
		if (a->_wsnt__Unsubscribe::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__Unsubscribe::__size)
			a->_wsnt__Unsubscribe::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__Unsubscribe::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__Unsubscribe *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Unsubscribe, 0, sizeof(_wsnt__Unsubscribe), 0, soap_copy__wsnt__Unsubscribe);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__Unsubscribe::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__Unsubscribe);
	if (this->soap_out(soap, tag?tag:"wsnt:Unsubscribe", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__Unsubscribe::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__Unsubscribe(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__Unsubscribe * SOAP_FMAC4 soap_get__wsnt__Unsubscribe(struct soap *soap, _wsnt__Unsubscribe *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Unsubscribe(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__Unsubscribe * SOAP_FMAC2 soap_instantiate__wsnt__Unsubscribe(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__Unsubscribe(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__Unsubscribe, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__Unsubscribe);
		if (size)
			*size = sizeof(_wsnt__Unsubscribe);
		((_wsnt__Unsubscribe*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__Unsubscribe, n);
		if (size)
			*size = n * sizeof(_wsnt__Unsubscribe);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__Unsubscribe*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__Unsubscribe*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__Unsubscribe(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__Unsubscribe %p -> %p\n", q, p));
	*(_wsnt__Unsubscribe*)p = *(_wsnt__Unsubscribe*)q;
}

void _wsnt__RenewResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_time(soap, &this->_wsnt__RenewResponse::TerminationTime);
	this->_wsnt__RenewResponse::CurrentTime = NULL;
	this->_wsnt__RenewResponse::__size = 0;
	this->_wsnt__RenewResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__RenewResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_wsnt__RenewResponse::TerminationTime, SOAP_TYPE_time);
	soap_serialize_PointerTotime(soap, &this->_wsnt__RenewResponse::CurrentTime);
	/* transient soap skipped */
#endif
}

int _wsnt__RenewResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__RenewResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__RenewResponse(struct soap *soap, const char *tag, int id, const _wsnt__RenewResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__RenewResponse), type))
		return soap->error;
	if (soap_out_time(soap, "wsnt:TerminationTime", -1, &(a->_wsnt__RenewResponse::TerminationTime), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CurrentTime", -1, &(a->_wsnt__RenewResponse::CurrentTime), ""))
		return soap->error;
	if (a->_wsnt__RenewResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__RenewResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__RenewResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__RenewResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__RenewResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__RenewResponse * SOAP_FMAC4 soap_in__wsnt__RenewResponse(struct soap *soap, const char *tag, _wsnt__RenewResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__RenewResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__RenewResponse, sizeof(_wsnt__RenewResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__RenewResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__RenewResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_TerminationTime1 = 1;
	size_t soap_flag_CurrentTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TerminationTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsnt:TerminationTime", &(a->_wsnt__RenewResponse::TerminationTime), "xsd:dateTime"))
				{	soap_flag_TerminationTime1--;
					continue;
				}
			if (soap_flag_CurrentTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CurrentTime", &(a->_wsnt__RenewResponse::CurrentTime), "xsd:dateTime"))
				{	soap_flag_CurrentTime1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__RenewResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__RenewResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__RenewResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__RenewResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__RenewResponse::__any, "xsd:byte"))
				{	a->_wsnt__RenewResponse::__size++;
					a->_wsnt__RenewResponse::__any = NULL;
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
		if (a->_wsnt__RenewResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__RenewResponse::__size)
			a->_wsnt__RenewResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__RenewResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__RenewResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__RenewResponse, 0, sizeof(_wsnt__RenewResponse), 0, soap_copy__wsnt__RenewResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TerminationTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__RenewResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__RenewResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:RenewResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__RenewResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__RenewResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__RenewResponse * SOAP_FMAC4 soap_get__wsnt__RenewResponse(struct soap *soap, _wsnt__RenewResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__RenewResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__RenewResponse * SOAP_FMAC2 soap_instantiate__wsnt__RenewResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__RenewResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__RenewResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__RenewResponse);
		if (size)
			*size = sizeof(_wsnt__RenewResponse);
		((_wsnt__RenewResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__RenewResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__RenewResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__RenewResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__RenewResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__RenewResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__RenewResponse %p -> %p\n", q, p));
	*(_wsnt__RenewResponse*)p = *(_wsnt__RenewResponse*)q;
}

void _wsnt__Renew::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_wsnt__AbsoluteOrRelativeTimeType(soap, &this->_wsnt__Renew::TerminationTime);
	this->_wsnt__Renew::__size = 0;
	this->_wsnt__Renew::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__Renew::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_wsnt__AbsoluteOrRelativeTimeType(soap, &this->_wsnt__Renew::TerminationTime);
	/* transient soap skipped */
#endif
}

int _wsnt__Renew::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__Renew(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Renew(struct soap *soap, const char *tag, int id, const _wsnt__Renew *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Renew), type))
		return soap->error;
	if (a->_wsnt__Renew::TerminationTime)
	{	if (soap_out_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:TerminationTime", -1, &a->_wsnt__Renew::TerminationTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "wsnt:TerminationTime"))
		return soap->error;
	if (a->_wsnt__Renew::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__Renew::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__Renew::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__Renew::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__Renew(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__Renew * SOAP_FMAC4 soap_in__wsnt__Renew(struct soap *soap, const char *tag, _wsnt__Renew *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__Renew *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Renew, sizeof(_wsnt__Renew), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__Renew)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__Renew *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_TerminationTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TerminationTime1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:TerminationTime", &(a->_wsnt__Renew::TerminationTime), "wsnt:AbsoluteOrRelativeTimeType"))
				{	soap_flag_TerminationTime1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__Renew::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__Renew::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__Renew::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__Renew::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__Renew::__any, "xsd:byte"))
				{	a->_wsnt__Renew::__size++;
					a->_wsnt__Renew::__any = NULL;
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
		if (a->_wsnt__Renew::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__Renew::__size)
			a->_wsnt__Renew::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__Renew::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__Renew *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Renew, 0, sizeof(_wsnt__Renew), 0, soap_copy__wsnt__Renew);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TerminationTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__Renew::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__Renew);
	if (this->soap_out(soap, tag?tag:"wsnt:Renew", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__Renew::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__Renew(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__Renew * SOAP_FMAC4 soap_get__wsnt__Renew(struct soap *soap, _wsnt__Renew *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Renew(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__Renew * SOAP_FMAC2 soap_instantiate__wsnt__Renew(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__Renew(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__Renew, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__Renew);
		if (size)
			*size = sizeof(_wsnt__Renew);
		((_wsnt__Renew*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__Renew, n);
		if (size)
			*size = n * sizeof(_wsnt__Renew);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__Renew*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__Renew*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__Renew(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__Renew %p -> %p\n", q, p));
	*(_wsnt__Renew*)p = *(_wsnt__Renew*)q;
}

void _wsnt__CreatePullPointResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_wsa5__EndpointReferenceType(soap, &this->_wsnt__CreatePullPointResponse::PullPoint);
	this->_wsnt__CreatePullPointResponse::__size = 0;
	this->_wsnt__CreatePullPointResponse::__any = NULL;
	this->_wsnt__CreatePullPointResponse::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__CreatePullPointResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_wsnt__CreatePullPointResponse::PullPoint, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &this->_wsnt__CreatePullPointResponse::PullPoint);
	/* transient soap skipped */
#endif
}

int _wsnt__CreatePullPointResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__CreatePullPointResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__CreatePullPointResponse(struct soap *soap, const char *tag, int id, const _wsnt__CreatePullPointResponse *a, const char *type)
{
	if (((_wsnt__CreatePullPointResponse*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__CreatePullPointResponse*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__CreatePullPointResponse), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:PullPoint", -1, &(a->_wsnt__CreatePullPointResponse::PullPoint), ""))
		return soap->error;
	if (a->_wsnt__CreatePullPointResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__CreatePullPointResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__CreatePullPointResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__CreatePullPointResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__CreatePullPointResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__CreatePullPointResponse * SOAP_FMAC4 soap_in__wsnt__CreatePullPointResponse(struct soap *soap, const char *tag, _wsnt__CreatePullPointResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__CreatePullPointResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__CreatePullPointResponse, sizeof(_wsnt__CreatePullPointResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__CreatePullPointResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__CreatePullPointResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__CreatePullPointResponse*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag_PullPoint1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PullPoint1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:PullPoint", &(a->_wsnt__CreatePullPointResponse::PullPoint), "wsa5:EndpointReferenceType"))
				{	soap_flag_PullPoint1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__CreatePullPointResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__CreatePullPointResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__CreatePullPointResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__CreatePullPointResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__CreatePullPointResponse::__any, "xsd:byte"))
				{	a->_wsnt__CreatePullPointResponse::__size++;
					a->_wsnt__CreatePullPointResponse::__any = NULL;
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
		if (a->_wsnt__CreatePullPointResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__CreatePullPointResponse::__size)
			a->_wsnt__CreatePullPointResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__CreatePullPointResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__CreatePullPointResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__CreatePullPointResponse, 0, sizeof(_wsnt__CreatePullPointResponse), 0, soap_copy__wsnt__CreatePullPointResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PullPoint1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__CreatePullPointResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__CreatePullPointResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:CreatePullPointResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__CreatePullPointResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__CreatePullPointResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__CreatePullPointResponse * SOAP_FMAC4 soap_get__wsnt__CreatePullPointResponse(struct soap *soap, _wsnt__CreatePullPointResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__CreatePullPointResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__CreatePullPointResponse * SOAP_FMAC2 soap_instantiate__wsnt__CreatePullPointResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__CreatePullPointResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__CreatePullPointResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__CreatePullPointResponse);
		if (size)
			*size = sizeof(_wsnt__CreatePullPointResponse);
		((_wsnt__CreatePullPointResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__CreatePullPointResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__CreatePullPointResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__CreatePullPointResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__CreatePullPointResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__CreatePullPointResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__CreatePullPointResponse %p -> %p\n", q, p));
	*(_wsnt__CreatePullPointResponse*)p = *(_wsnt__CreatePullPointResponse*)q;
}

void _wsnt__CreatePullPoint::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__CreatePullPoint::__size = 0;
	this->_wsnt__CreatePullPoint::__any = NULL;
	this->_wsnt__CreatePullPoint::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__CreatePullPoint::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__CreatePullPoint::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__CreatePullPoint(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__CreatePullPoint(struct soap *soap, const char *tag, int id, const _wsnt__CreatePullPoint *a, const char *type)
{
	if (((_wsnt__CreatePullPoint*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__CreatePullPoint*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__CreatePullPoint), type))
		return soap->error;
	if (a->_wsnt__CreatePullPoint::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__CreatePullPoint::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__CreatePullPoint::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__CreatePullPoint::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__CreatePullPoint(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__CreatePullPoint * SOAP_FMAC4 soap_in__wsnt__CreatePullPoint(struct soap *soap, const char *tag, _wsnt__CreatePullPoint *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__CreatePullPoint *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__CreatePullPoint, sizeof(_wsnt__CreatePullPoint), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__CreatePullPoint)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__CreatePullPoint *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__CreatePullPoint*)a)->__anyAttribute, 0, -1))
		return NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__CreatePullPoint::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__CreatePullPoint::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__CreatePullPoint::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__CreatePullPoint::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__CreatePullPoint::__any, "xsd:byte"))
				{	a->_wsnt__CreatePullPoint::__size++;
					a->_wsnt__CreatePullPoint::__any = NULL;
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
		if (a->_wsnt__CreatePullPoint::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__CreatePullPoint::__size)
			a->_wsnt__CreatePullPoint::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__CreatePullPoint::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__CreatePullPoint *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__CreatePullPoint, 0, sizeof(_wsnt__CreatePullPoint), 0, soap_copy__wsnt__CreatePullPoint);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__CreatePullPoint::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__CreatePullPoint);
	if (this->soap_out(soap, tag?tag:"wsnt:CreatePullPoint", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__CreatePullPoint::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__CreatePullPoint(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__CreatePullPoint * SOAP_FMAC4 soap_get__wsnt__CreatePullPoint(struct soap *soap, _wsnt__CreatePullPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__CreatePullPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__CreatePullPoint * SOAP_FMAC2 soap_instantiate__wsnt__CreatePullPoint(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__CreatePullPoint(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__CreatePullPoint, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__CreatePullPoint);
		if (size)
			*size = sizeof(_wsnt__CreatePullPoint);
		((_wsnt__CreatePullPoint*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__CreatePullPoint, n);
		if (size)
			*size = n * sizeof(_wsnt__CreatePullPoint);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__CreatePullPoint*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__CreatePullPoint*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__CreatePullPoint(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__CreatePullPoint %p -> %p\n", q, p));
	*(_wsnt__CreatePullPoint*)p = *(_wsnt__CreatePullPoint*)q;
}

void _wsnt__DestroyPullPointResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__DestroyPullPointResponse::__size = 0;
	this->_wsnt__DestroyPullPointResponse::__any = NULL;
	this->_wsnt__DestroyPullPointResponse::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__DestroyPullPointResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__DestroyPullPointResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__DestroyPullPointResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__DestroyPullPointResponse(struct soap *soap, const char *tag, int id, const _wsnt__DestroyPullPointResponse *a, const char *type)
{
	if (((_wsnt__DestroyPullPointResponse*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__DestroyPullPointResponse*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__DestroyPullPointResponse), type))
		return soap->error;
	if (a->_wsnt__DestroyPullPointResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__DestroyPullPointResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__DestroyPullPointResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__DestroyPullPointResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__DestroyPullPointResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__DestroyPullPointResponse * SOAP_FMAC4 soap_in__wsnt__DestroyPullPointResponse(struct soap *soap, const char *tag, _wsnt__DestroyPullPointResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__DestroyPullPointResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__DestroyPullPointResponse, sizeof(_wsnt__DestroyPullPointResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__DestroyPullPointResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__DestroyPullPointResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__DestroyPullPointResponse*)a)->__anyAttribute, 0, -1))
		return NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__DestroyPullPointResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__DestroyPullPointResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__DestroyPullPointResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__DestroyPullPointResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__DestroyPullPointResponse::__any, "xsd:byte"))
				{	a->_wsnt__DestroyPullPointResponse::__size++;
					a->_wsnt__DestroyPullPointResponse::__any = NULL;
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
		if (a->_wsnt__DestroyPullPointResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__DestroyPullPointResponse::__size)
			a->_wsnt__DestroyPullPointResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__DestroyPullPointResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__DestroyPullPointResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__DestroyPullPointResponse, 0, sizeof(_wsnt__DestroyPullPointResponse), 0, soap_copy__wsnt__DestroyPullPointResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__DestroyPullPointResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__DestroyPullPointResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:DestroyPullPointResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__DestroyPullPointResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__DestroyPullPointResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__DestroyPullPointResponse * SOAP_FMAC4 soap_get__wsnt__DestroyPullPointResponse(struct soap *soap, _wsnt__DestroyPullPointResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__DestroyPullPointResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__DestroyPullPointResponse * SOAP_FMAC2 soap_instantiate__wsnt__DestroyPullPointResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__DestroyPullPointResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__DestroyPullPointResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__DestroyPullPointResponse);
		if (size)
			*size = sizeof(_wsnt__DestroyPullPointResponse);
		((_wsnt__DestroyPullPointResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__DestroyPullPointResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__DestroyPullPointResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__DestroyPullPointResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__DestroyPullPointResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__DestroyPullPointResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__DestroyPullPointResponse %p -> %p\n", q, p));
	*(_wsnt__DestroyPullPointResponse*)p = *(_wsnt__DestroyPullPointResponse*)q;
}

void _wsnt__DestroyPullPoint::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__DestroyPullPoint::__size = 0;
	this->_wsnt__DestroyPullPoint::__any = NULL;
	this->_wsnt__DestroyPullPoint::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__DestroyPullPoint::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__DestroyPullPoint::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__DestroyPullPoint(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__DestroyPullPoint(struct soap *soap, const char *tag, int id, const _wsnt__DestroyPullPoint *a, const char *type)
{
	if (((_wsnt__DestroyPullPoint*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__DestroyPullPoint*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__DestroyPullPoint), type))
		return soap->error;
	if (a->_wsnt__DestroyPullPoint::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__DestroyPullPoint::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__DestroyPullPoint::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__DestroyPullPoint::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__DestroyPullPoint(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__DestroyPullPoint * SOAP_FMAC4 soap_in__wsnt__DestroyPullPoint(struct soap *soap, const char *tag, _wsnt__DestroyPullPoint *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__DestroyPullPoint *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__DestroyPullPoint, sizeof(_wsnt__DestroyPullPoint), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__DestroyPullPoint)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__DestroyPullPoint *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__DestroyPullPoint*)a)->__anyAttribute, 0, -1))
		return NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__DestroyPullPoint::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__DestroyPullPoint::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__DestroyPullPoint::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__DestroyPullPoint::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__DestroyPullPoint::__any, "xsd:byte"))
				{	a->_wsnt__DestroyPullPoint::__size++;
					a->_wsnt__DestroyPullPoint::__any = NULL;
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
		if (a->_wsnt__DestroyPullPoint::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__DestroyPullPoint::__size)
			a->_wsnt__DestroyPullPoint::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__DestroyPullPoint::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__DestroyPullPoint *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__DestroyPullPoint, 0, sizeof(_wsnt__DestroyPullPoint), 0, soap_copy__wsnt__DestroyPullPoint);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__DestroyPullPoint::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__DestroyPullPoint);
	if (this->soap_out(soap, tag?tag:"wsnt:DestroyPullPoint", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__DestroyPullPoint::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__DestroyPullPoint(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__DestroyPullPoint * SOAP_FMAC4 soap_get__wsnt__DestroyPullPoint(struct soap *soap, _wsnt__DestroyPullPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__DestroyPullPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__DestroyPullPoint * SOAP_FMAC2 soap_instantiate__wsnt__DestroyPullPoint(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__DestroyPullPoint(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__DestroyPullPoint, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__DestroyPullPoint);
		if (size)
			*size = sizeof(_wsnt__DestroyPullPoint);
		((_wsnt__DestroyPullPoint*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__DestroyPullPoint, n);
		if (size)
			*size = n * sizeof(_wsnt__DestroyPullPoint);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__DestroyPullPoint*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__DestroyPullPoint*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__DestroyPullPoint(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__DestroyPullPoint %p -> %p\n", q, p));
	*(_wsnt__DestroyPullPoint*)p = *(_wsnt__DestroyPullPoint*)q;
}

void _wsnt__GetMessagesResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__GetMessagesResponse::__sizeNotificationMessage = 0;
	this->_wsnt__GetMessagesResponse::NotificationMessage = NULL;
	this->_wsnt__GetMessagesResponse::__size = 0;
	this->_wsnt__GetMessagesResponse::__any = NULL;
	this->_wsnt__GetMessagesResponse::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__GetMessagesResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_wsnt__GetMessagesResponse::NotificationMessage)
	{	int i;
		for (i = 0; i < this->_wsnt__GetMessagesResponse::__sizeNotificationMessage; i++)
		{
			soap_serialize_PointerTowsnt__NotificationMessageHolderType(soap, this->_wsnt__GetMessagesResponse::NotificationMessage + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _wsnt__GetMessagesResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__GetMessagesResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetMessagesResponse(struct soap *soap, const char *tag, int id, const _wsnt__GetMessagesResponse *a, const char *type)
{
	if (((_wsnt__GetMessagesResponse*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__GetMessagesResponse*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetMessagesResponse), type))
		return soap->error;
	if (a->_wsnt__GetMessagesResponse::NotificationMessage)
	{	int i;
		for (i = 0; i < a->_wsnt__GetMessagesResponse::__sizeNotificationMessage; i++)
			if (soap_out_PointerTowsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", -1, a->_wsnt__GetMessagesResponse::NotificationMessage + i, ""))
				return soap->error;
	}
	if (a->_wsnt__GetMessagesResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__GetMessagesResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__GetMessagesResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__GetMessagesResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__GetMessagesResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__GetMessagesResponse * SOAP_FMAC4 soap_in__wsnt__GetMessagesResponse(struct soap *soap, const char *tag, _wsnt__GetMessagesResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__GetMessagesResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetMessagesResponse, sizeof(_wsnt__GetMessagesResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__GetMessagesResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__GetMessagesResponse *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__GetMessagesResponse*)a)->__anyAttribute, 0, -1))
		return NULL;
	struct soap_blist *soap_blist_NotificationMessage1 = NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:NotificationMessage", 1, NULL))
			{	if (a->_wsnt__GetMessagesResponse::NotificationMessage == NULL)
				{	if (soap_blist_NotificationMessage1 == NULL)
						soap_blist_NotificationMessage1 = soap_new_block(soap);
					a->_wsnt__GetMessagesResponse::NotificationMessage = (wsnt__NotificationMessageHolderType **)soap_push_block(soap, soap_blist_NotificationMessage1, sizeof(wsnt__NotificationMessageHolderType *));
					if (a->_wsnt__GetMessagesResponse::NotificationMessage == NULL)
						return NULL;
					*a->_wsnt__GetMessagesResponse::NotificationMessage = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTowsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", a->_wsnt__GetMessagesResponse::NotificationMessage, "wsnt:NotificationMessageHolderType"))
				{	a->_wsnt__GetMessagesResponse::__sizeNotificationMessage++;
					a->_wsnt__GetMessagesResponse::NotificationMessage = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__GetMessagesResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__GetMessagesResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__GetMessagesResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__GetMessagesResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__GetMessagesResponse::__any, "xsd:byte"))
				{	a->_wsnt__GetMessagesResponse::__size++;
					a->_wsnt__GetMessagesResponse::__any = NULL;
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
		if (a->_wsnt__GetMessagesResponse::NotificationMessage)
			soap_pop_block(soap, soap_blist_NotificationMessage1);
		if (a->_wsnt__GetMessagesResponse::__sizeNotificationMessage)
			a->_wsnt__GetMessagesResponse::NotificationMessage = (wsnt__NotificationMessageHolderType **)soap_save_block(soap, soap_blist_NotificationMessage1, NULL, 1);
		else
		{	a->_wsnt__GetMessagesResponse::NotificationMessage = NULL;
			if (soap_blist_NotificationMessage1)
				soap_end_block(soap, soap_blist_NotificationMessage1);
		}
		if (a->_wsnt__GetMessagesResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__GetMessagesResponse::__size)
			a->_wsnt__GetMessagesResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__GetMessagesResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__GetMessagesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetMessagesResponse, 0, sizeof(_wsnt__GetMessagesResponse), 0, soap_copy__wsnt__GetMessagesResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__GetMessagesResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__GetMessagesResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:GetMessagesResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__GetMessagesResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__GetMessagesResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__GetMessagesResponse * SOAP_FMAC4 soap_get__wsnt__GetMessagesResponse(struct soap *soap, _wsnt__GetMessagesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetMessagesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__GetMessagesResponse * SOAP_FMAC2 soap_instantiate__wsnt__GetMessagesResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__GetMessagesResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__GetMessagesResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__GetMessagesResponse);
		if (size)
			*size = sizeof(_wsnt__GetMessagesResponse);
		((_wsnt__GetMessagesResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__GetMessagesResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__GetMessagesResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__GetMessagesResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__GetMessagesResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__GetMessagesResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__GetMessagesResponse %p -> %p\n", q, p));
	*(_wsnt__GetMessagesResponse*)p = *(_wsnt__GetMessagesResponse*)q;
}

void _wsnt__GetMessages::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_xsd__nonNegativeInteger(soap, &this->_wsnt__GetMessages::MaximumNumber);
	this->_wsnt__GetMessages::__size = 0;
	this->_wsnt__GetMessages::__any = NULL;
	this->_wsnt__GetMessages::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _wsnt__GetMessages::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_xsd__nonNegativeInteger(soap, &this->_wsnt__GetMessages::MaximumNumber);
	/* transient soap skipped */
#endif
}

int _wsnt__GetMessages::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__GetMessages(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetMessages(struct soap *soap, const char *tag, int id, const _wsnt__GetMessages *a, const char *type)
{
	if (((_wsnt__GetMessages*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_wsnt__GetMessages*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetMessages), type))
		return soap->error;
	if (soap_out_xsd__nonNegativeInteger(soap, "wsnt:MaximumNumber", -1, &(a->_wsnt__GetMessages::MaximumNumber), ""))
		return soap->error;
	if (a->_wsnt__GetMessages::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__GetMessages::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__GetMessages::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__GetMessages::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__GetMessages(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__GetMessages * SOAP_FMAC4 soap_in__wsnt__GetMessages(struct soap *soap, const char *tag, _wsnt__GetMessages *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__GetMessages *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetMessages, sizeof(_wsnt__GetMessages), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__GetMessages)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__GetMessages *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_wsnt__GetMessages*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag_MaximumNumber1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MaximumNumber1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__nonNegativeInteger(soap, "wsnt:MaximumNumber", &(a->_wsnt__GetMessages::MaximumNumber), "xsd:nonNegativeInteger"))
				{	soap_flag_MaximumNumber1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__GetMessages::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__GetMessages::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__GetMessages::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__GetMessages::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__GetMessages::__any, "xsd:byte"))
				{	a->_wsnt__GetMessages::__size++;
					a->_wsnt__GetMessages::__any = NULL;
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
		if (a->_wsnt__GetMessages::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__GetMessages::__size)
			a->_wsnt__GetMessages::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__GetMessages::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__GetMessages *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetMessages, 0, sizeof(_wsnt__GetMessages), 0, soap_copy__wsnt__GetMessages);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__GetMessages::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__GetMessages);
	if (this->soap_out(soap, tag?tag:"wsnt:GetMessages", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__GetMessages::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__GetMessages(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__GetMessages * SOAP_FMAC4 soap_get__wsnt__GetMessages(struct soap *soap, _wsnt__GetMessages *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetMessages(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__GetMessages * SOAP_FMAC2 soap_instantiate__wsnt__GetMessages(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__GetMessages(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__GetMessages, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__GetMessages);
		if (size)
			*size = sizeof(_wsnt__GetMessages);
		((_wsnt__GetMessages*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__GetMessages, n);
		if (size)
			*size = n * sizeof(_wsnt__GetMessages);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__GetMessages*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__GetMessages*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__GetMessages(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__GetMessages %p -> %p\n", q, p));
	*(_wsnt__GetMessages*)p = *(_wsnt__GetMessages*)q;
}

void _wsnt__GetCurrentMessageResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__GetCurrentMessageResponse::__size = 0;
	this->_wsnt__GetCurrentMessageResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__GetCurrentMessageResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__GetCurrentMessageResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__GetCurrentMessageResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetCurrentMessageResponse(struct soap *soap, const char *tag, int id, const _wsnt__GetCurrentMessageResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetCurrentMessageResponse), type))
		return soap->error;
	if (a->_wsnt__GetCurrentMessageResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__GetCurrentMessageResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__GetCurrentMessageResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__GetCurrentMessageResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__GetCurrentMessageResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__GetCurrentMessageResponse * SOAP_FMAC4 soap_in__wsnt__GetCurrentMessageResponse(struct soap *soap, const char *tag, _wsnt__GetCurrentMessageResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__GetCurrentMessageResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetCurrentMessageResponse, sizeof(_wsnt__GetCurrentMessageResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__GetCurrentMessageResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__GetCurrentMessageResponse *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__GetCurrentMessageResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__GetCurrentMessageResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__GetCurrentMessageResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__GetCurrentMessageResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__GetCurrentMessageResponse::__any, "xsd:byte"))
				{	a->_wsnt__GetCurrentMessageResponse::__size++;
					a->_wsnt__GetCurrentMessageResponse::__any = NULL;
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
		if (a->_wsnt__GetCurrentMessageResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__GetCurrentMessageResponse::__size)
			a->_wsnt__GetCurrentMessageResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__GetCurrentMessageResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__GetCurrentMessageResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetCurrentMessageResponse, 0, sizeof(_wsnt__GetCurrentMessageResponse), 0, soap_copy__wsnt__GetCurrentMessageResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__GetCurrentMessageResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__GetCurrentMessageResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:GetCurrentMessageResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__GetCurrentMessageResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__GetCurrentMessageResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__GetCurrentMessageResponse * SOAP_FMAC4 soap_get__wsnt__GetCurrentMessageResponse(struct soap *soap, _wsnt__GetCurrentMessageResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetCurrentMessageResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__GetCurrentMessageResponse * SOAP_FMAC2 soap_instantiate__wsnt__GetCurrentMessageResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__GetCurrentMessageResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__GetCurrentMessageResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__GetCurrentMessageResponse);
		if (size)
			*size = sizeof(_wsnt__GetCurrentMessageResponse);
		((_wsnt__GetCurrentMessageResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__GetCurrentMessageResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__GetCurrentMessageResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__GetCurrentMessageResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__GetCurrentMessageResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__GetCurrentMessageResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__GetCurrentMessageResponse %p -> %p\n", q, p));
	*(_wsnt__GetCurrentMessageResponse*)p = *(_wsnt__GetCurrentMessageResponse*)q;
}

void _wsnt__GetCurrentMessage::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__GetCurrentMessage::Topic = NULL;
	this->_wsnt__GetCurrentMessage::__size = 0;
	this->_wsnt__GetCurrentMessage::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__GetCurrentMessage::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowsnt__TopicExpressionType(soap, &this->_wsnt__GetCurrentMessage::Topic);
	/* transient soap skipped */
#endif
}

int _wsnt__GetCurrentMessage::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__GetCurrentMessage(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetCurrentMessage(struct soap *soap, const char *tag, int id, const _wsnt__GetCurrentMessage *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetCurrentMessage), type))
		return soap->error;
	if (a->_wsnt__GetCurrentMessage::Topic)
	{	if (soap_out_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", -1, &a->_wsnt__GetCurrentMessage::Topic, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "wsnt:Topic"))
		return soap->error;
	if (a->_wsnt__GetCurrentMessage::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__GetCurrentMessage::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__GetCurrentMessage::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__GetCurrentMessage::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__GetCurrentMessage(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__GetCurrentMessage * SOAP_FMAC4 soap_in__wsnt__GetCurrentMessage(struct soap *soap, const char *tag, _wsnt__GetCurrentMessage *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__GetCurrentMessage *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetCurrentMessage, sizeof(_wsnt__GetCurrentMessage), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__GetCurrentMessage)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__GetCurrentMessage *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_Topic1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Topic1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", &(a->_wsnt__GetCurrentMessage::Topic), "wsnt:TopicExpressionType"))
				{	soap_flag_Topic1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__GetCurrentMessage::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__GetCurrentMessage::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__GetCurrentMessage::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__GetCurrentMessage::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__GetCurrentMessage::__any, "xsd:byte"))
				{	a->_wsnt__GetCurrentMessage::__size++;
					a->_wsnt__GetCurrentMessage::__any = NULL;
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
		if (a->_wsnt__GetCurrentMessage::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__GetCurrentMessage::__size)
			a->_wsnt__GetCurrentMessage::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__GetCurrentMessage::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__GetCurrentMessage *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetCurrentMessage, 0, sizeof(_wsnt__GetCurrentMessage), 0, soap_copy__wsnt__GetCurrentMessage);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Topic1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__GetCurrentMessage::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__GetCurrentMessage);
	if (this->soap_out(soap, tag?tag:"wsnt:GetCurrentMessage", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__GetCurrentMessage::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__GetCurrentMessage(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__GetCurrentMessage * SOAP_FMAC4 soap_get__wsnt__GetCurrentMessage(struct soap *soap, _wsnt__GetCurrentMessage *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetCurrentMessage(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__GetCurrentMessage * SOAP_FMAC2 soap_instantiate__wsnt__GetCurrentMessage(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__GetCurrentMessage(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__GetCurrentMessage, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__GetCurrentMessage);
		if (size)
			*size = sizeof(_wsnt__GetCurrentMessage);
		((_wsnt__GetCurrentMessage*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__GetCurrentMessage, n);
		if (size)
			*size = n * sizeof(_wsnt__GetCurrentMessage);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__GetCurrentMessage*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__GetCurrentMessage*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__GetCurrentMessage(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__GetCurrentMessage %p -> %p\n", q, p));
	*(_wsnt__GetCurrentMessage*)p = *(_wsnt__GetCurrentMessage*)q;
}

void _wsnt__SubscribeResponse::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_wsa5__EndpointReferenceType(soap, &this->_wsnt__SubscribeResponse::SubscriptionReference);
	this->_wsnt__SubscribeResponse::CurrentTime = NULL;
	this->_wsnt__SubscribeResponse::TerminationTime = NULL;
	this->_wsnt__SubscribeResponse::__size = 0;
	this->_wsnt__SubscribeResponse::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__SubscribeResponse::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_wsnt__SubscribeResponse::SubscriptionReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &this->_wsnt__SubscribeResponse::SubscriptionReference);
	soap_serialize_PointerTotime(soap, &this->_wsnt__SubscribeResponse::CurrentTime);
	soap_serialize_PointerTotime(soap, &this->_wsnt__SubscribeResponse::TerminationTime);
	/* transient soap skipped */
#endif
}

int _wsnt__SubscribeResponse::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__SubscribeResponse(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__SubscribeResponse(struct soap *soap, const char *tag, int id, const _wsnt__SubscribeResponse *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__SubscribeResponse), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", -1, &(a->_wsnt__SubscribeResponse::SubscriptionReference), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CurrentTime", -1, &(a->_wsnt__SubscribeResponse::CurrentTime), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:TerminationTime", -1, &(a->_wsnt__SubscribeResponse::TerminationTime), ""))
		return soap->error;
	if (a->_wsnt__SubscribeResponse::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__SubscribeResponse::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__SubscribeResponse::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__SubscribeResponse::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__SubscribeResponse(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__SubscribeResponse * SOAP_FMAC4 soap_in__wsnt__SubscribeResponse(struct soap *soap, const char *tag, _wsnt__SubscribeResponse *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__SubscribeResponse *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__SubscribeResponse, sizeof(_wsnt__SubscribeResponse), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__SubscribeResponse)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__SubscribeResponse *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_SubscriptionReference1 = 1;
	size_t soap_flag_CurrentTime1 = 1;
	size_t soap_flag_TerminationTime1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SubscriptionReference1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", &(a->_wsnt__SubscribeResponse::SubscriptionReference), "wsa5:EndpointReferenceType"))
				{	soap_flag_SubscriptionReference1--;
					continue;
				}
			if (soap_flag_CurrentTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CurrentTime", &(a->_wsnt__SubscribeResponse::CurrentTime), "xsd:dateTime"))
				{	soap_flag_CurrentTime1--;
					continue;
				}
			if (soap_flag_TerminationTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:TerminationTime", &(a->_wsnt__SubscribeResponse::TerminationTime), "xsd:dateTime"))
				{	soap_flag_TerminationTime1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__SubscribeResponse::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__SubscribeResponse::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__SubscribeResponse::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__SubscribeResponse::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__SubscribeResponse::__any, "xsd:byte"))
				{	a->_wsnt__SubscribeResponse::__size++;
					a->_wsnt__SubscribeResponse::__any = NULL;
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
		if (a->_wsnt__SubscribeResponse::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__SubscribeResponse::__size)
			a->_wsnt__SubscribeResponse::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__SubscribeResponse::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__SubscribeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__SubscribeResponse, 0, sizeof(_wsnt__SubscribeResponse), 0, soap_copy__wsnt__SubscribeResponse);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SubscriptionReference1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__SubscribeResponse::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__SubscribeResponse);
	if (this->soap_out(soap, tag?tag:"wsnt:SubscribeResponse", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__SubscribeResponse::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__SubscribeResponse(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__SubscribeResponse * SOAP_FMAC4 soap_get__wsnt__SubscribeResponse(struct soap *soap, _wsnt__SubscribeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__SubscribeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__SubscribeResponse * SOAP_FMAC2 soap_instantiate__wsnt__SubscribeResponse(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__SubscribeResponse(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__SubscribeResponse, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__SubscribeResponse);
		if (size)
			*size = sizeof(_wsnt__SubscribeResponse);
		((_wsnt__SubscribeResponse*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__SubscribeResponse, n);
		if (size)
			*size = n * sizeof(_wsnt__SubscribeResponse);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__SubscribeResponse*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__SubscribeResponse*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__SubscribeResponse(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__SubscribeResponse %p -> %p\n", q, p));
	*(_wsnt__SubscribeResponse*)p = *(_wsnt__SubscribeResponse*)q;
}

void _wsnt__Subscribe::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_wsa5__EndpointReferenceType(soap, &this->_wsnt__Subscribe::ConsumerReference);
	this->_wsnt__Subscribe::Filter = NULL;
	soap_default_wsnt__AbsoluteOrRelativeTimeType(soap, &this->_wsnt__Subscribe::InitialTerminationTime);
	this->_wsnt__Subscribe::SubscriptionPolicy = NULL;
	this->_wsnt__Subscribe::__size = 0;
	this->_wsnt__Subscribe::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__Subscribe::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_wsnt__Subscribe::ConsumerReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &this->_wsnt__Subscribe::ConsumerReference);
	soap_serialize_PointerTowsnt__FilterType(soap, &this->_wsnt__Subscribe::Filter);
	soap_serialize_wsnt__AbsoluteOrRelativeTimeType(soap, &this->_wsnt__Subscribe::InitialTerminationTime);
	soap_serialize_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, &this->_wsnt__Subscribe::SubscriptionPolicy);
	/* transient soap skipped */
#endif
}

int _wsnt__Subscribe::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__Subscribe(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Subscribe(struct soap *soap, const char *tag, int id, const _wsnt__Subscribe *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Subscribe), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", -1, &(a->_wsnt__Subscribe::ConsumerReference), ""))
		return soap->error;
	if (soap_out_PointerTowsnt__FilterType(soap, "wsnt:Filter", -1, &(a->_wsnt__Subscribe::Filter), ""))
		return soap->error;
	if (soap_out_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:InitialTerminationTime", -1, &(a->_wsnt__Subscribe::InitialTerminationTime), ""))
		return soap->error;
	if (soap_out_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, "wsnt:SubscriptionPolicy", -1, &(a->_wsnt__Subscribe::SubscriptionPolicy), ""))
		return soap->error;
	if (a->_wsnt__Subscribe::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__Subscribe::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__Subscribe::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__Subscribe::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__Subscribe(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__Subscribe * SOAP_FMAC4 soap_in__wsnt__Subscribe(struct soap *soap, const char *tag, _wsnt__Subscribe *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__Subscribe *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Subscribe, sizeof(_wsnt__Subscribe), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__Subscribe)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__Subscribe *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConsumerReference1 = 1;
	size_t soap_flag_Filter1 = 1;
	size_t soap_flag_InitialTerminationTime1 = 1;
	size_t soap_flag_SubscriptionPolicy1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConsumerReference1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", &(a->_wsnt__Subscribe::ConsumerReference), "wsa5:EndpointReferenceType"))
				{	soap_flag_ConsumerReference1--;
					continue;
				}
			if (soap_flag_Filter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "wsnt:Filter", &(a->_wsnt__Subscribe::Filter), "wsnt:FilterType"))
				{	soap_flag_Filter1--;
					continue;
				}
			if (soap_flag_InitialTerminationTime1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:InitialTerminationTime", &(a->_wsnt__Subscribe::InitialTerminationTime), "wsnt:AbsoluteOrRelativeTimeType"))
				{	soap_flag_InitialTerminationTime1--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, "wsnt:SubscriptionPolicy", &(a->_wsnt__Subscribe::SubscriptionPolicy), ""))
				{	soap_flag_SubscriptionPolicy1--;
					continue;
				}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__Subscribe::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__Subscribe::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__Subscribe::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__Subscribe::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__Subscribe::__any, "xsd:byte"))
				{	a->_wsnt__Subscribe::__size++;
					a->_wsnt__Subscribe::__any = NULL;
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
		if (a->_wsnt__Subscribe::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__Subscribe::__size)
			a->_wsnt__Subscribe::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__Subscribe::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__Subscribe *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Subscribe, 0, sizeof(_wsnt__Subscribe), 0, soap_copy__wsnt__Subscribe);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConsumerReference1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__Subscribe::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__Subscribe);
	if (this->soap_out(soap, tag?tag:"wsnt:Subscribe", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__Subscribe::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__Subscribe(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__Subscribe * SOAP_FMAC4 soap_get__wsnt__Subscribe(struct soap *soap, _wsnt__Subscribe *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Subscribe(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__Subscribe * SOAP_FMAC2 soap_instantiate__wsnt__Subscribe(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__Subscribe(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__Subscribe, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__Subscribe);
		if (size)
			*size = sizeof(_wsnt__Subscribe);
		((_wsnt__Subscribe*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__Subscribe, n);
		if (size)
			*size = n * sizeof(_wsnt__Subscribe);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__Subscribe*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__Subscribe*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__Subscribe(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__Subscribe %p -> %p\n", q, p));
	*(_wsnt__Subscribe*)p = *(_wsnt__Subscribe*)q;
}

void _wsnt__UseRaw::soap_default(struct soap *soap)
{
	this->soap = soap;
	/* transient soap skipped */
}

void _wsnt__UseRaw::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	/* transient soap skipped */
#endif
}

int _wsnt__UseRaw::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__UseRaw(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__UseRaw(struct soap *soap, const char *tag, int id, const _wsnt__UseRaw *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__UseRaw), type))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__UseRaw::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__UseRaw(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__UseRaw * SOAP_FMAC4 soap_in__wsnt__UseRaw(struct soap *soap, const char *tag, _wsnt__UseRaw *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__UseRaw *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__UseRaw, sizeof(_wsnt__UseRaw), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__UseRaw)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__UseRaw *)a->soap_in(soap, tag, type);
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
	{	a = (_wsnt__UseRaw *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__UseRaw, 0, sizeof(_wsnt__UseRaw), 0, soap_copy__wsnt__UseRaw);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__UseRaw::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__UseRaw);
	if (this->soap_out(soap, tag?tag:"wsnt:UseRaw", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__UseRaw::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__UseRaw(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__UseRaw * SOAP_FMAC4 soap_get__wsnt__UseRaw(struct soap *soap, _wsnt__UseRaw *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__UseRaw(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__UseRaw * SOAP_FMAC2 soap_instantiate__wsnt__UseRaw(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__UseRaw(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__UseRaw, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__UseRaw);
		if (size)
			*size = sizeof(_wsnt__UseRaw);
		((_wsnt__UseRaw*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__UseRaw, n);
		if (size)
			*size = n * sizeof(_wsnt__UseRaw);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__UseRaw*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__UseRaw*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__UseRaw(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__UseRaw %p -> %p\n", q, p));
	*(_wsnt__UseRaw*)p = *(_wsnt__UseRaw*)q;
}

void _wsnt__Notify::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__Notify::__sizeNotificationMessage = 0;
	this->_wsnt__Notify::NotificationMessage = NULL;
	this->_wsnt__Notify::__size = 0;
	this->_wsnt__Notify::__any = NULL;
	/* transient soap skipped */
}

void _wsnt__Notify::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_wsnt__Notify::NotificationMessage)
	{	int i;
		for (i = 0; i < this->_wsnt__Notify::__sizeNotificationMessage; i++)
		{
			soap_serialize_PointerTowsnt__NotificationMessageHolderType(soap, this->_wsnt__Notify::NotificationMessage + i);
		}
	}
	/* transient soap skipped */
#endif
}

int _wsnt__Notify::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__Notify(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Notify(struct soap *soap, const char *tag, int id, const _wsnt__Notify *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Notify), type))
		return soap->error;
	if (a->_wsnt__Notify::NotificationMessage)
	{	int i;
		for (i = 0; i < a->_wsnt__Notify::__sizeNotificationMessage; i++)
			if (soap_out_PointerTowsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", -1, a->_wsnt__Notify::NotificationMessage + i, ""))
				return soap->error;
	}
	if (a->_wsnt__Notify::__any)
	{	int i;
		for (i = 0; i < a->_wsnt__Notify::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->_wsnt__Notify::__any + i, ""))
				return soap->error;
	}
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__Notify::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__Notify(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__Notify * SOAP_FMAC4 soap_in__wsnt__Notify(struct soap *soap, const char *tag, _wsnt__Notify *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__Notify *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Notify, sizeof(_wsnt__Notify), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__Notify)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__Notify *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_NotificationMessage1 = NULL;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:NotificationMessage", 1, NULL))
			{	if (a->_wsnt__Notify::NotificationMessage == NULL)
				{	if (soap_blist_NotificationMessage1 == NULL)
						soap_blist_NotificationMessage1 = soap_new_block(soap);
					a->_wsnt__Notify::NotificationMessage = (wsnt__NotificationMessageHolderType **)soap_push_block(soap, soap_blist_NotificationMessage1, sizeof(wsnt__NotificationMessageHolderType *));
					if (a->_wsnt__Notify::NotificationMessage == NULL)
						return NULL;
					*a->_wsnt__Notify::NotificationMessage = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTowsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", a->_wsnt__Notify::NotificationMessage, "wsnt:NotificationMessageHolderType"))
				{	a->_wsnt__Notify::__sizeNotificationMessage++;
					a->_wsnt__Notify::NotificationMessage = NULL;
					continue;
				}
			}
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->_wsnt__Notify::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->_wsnt__Notify::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->_wsnt__Notify::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->_wsnt__Notify::__any);
				}
				if (soap_in_byte(soap, "-any", a->_wsnt__Notify::__any, "xsd:byte"))
				{	a->_wsnt__Notify::__size++;
					a->_wsnt__Notify::__any = NULL;
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
		if (a->_wsnt__Notify::NotificationMessage)
			soap_pop_block(soap, soap_blist_NotificationMessage1);
		if (a->_wsnt__Notify::__sizeNotificationMessage)
			a->_wsnt__Notify::NotificationMessage = (wsnt__NotificationMessageHolderType **)soap_save_block(soap, soap_blist_NotificationMessage1, NULL, 1);
		else
		{	a->_wsnt__Notify::NotificationMessage = NULL;
			if (soap_blist_NotificationMessage1)
				soap_end_block(soap, soap_blist_NotificationMessage1);
		}
		if (a->_wsnt__Notify::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->_wsnt__Notify::__size)
			a->_wsnt__Notify::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->_wsnt__Notify::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__Notify *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Notify, 0, sizeof(_wsnt__Notify), 0, soap_copy__wsnt__Notify);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->_wsnt__Notify::__sizeNotificationMessage < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__Notify::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__Notify);
	if (this->soap_out(soap, tag?tag:"wsnt:Notify", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__Notify::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__Notify(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__Notify * SOAP_FMAC4 soap_get__wsnt__Notify(struct soap *soap, _wsnt__Notify *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Notify(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__Notify * SOAP_FMAC2 soap_instantiate__wsnt__Notify(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__Notify(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__Notify, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__Notify);
		if (size)
			*size = sizeof(_wsnt__Notify);
		((_wsnt__Notify*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__Notify, n);
		if (size)
			*size = n * sizeof(_wsnt__Notify);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__Notify*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__Notify*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__Notify(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__Notify %p -> %p\n", q, p));
	*(_wsnt__Notify*)p = *(_wsnt__Notify*)q;
}

void _wsnt__SubscriptionManagerRP::soap_default(struct soap *soap)
{
	this->soap = soap;
	soap_default_wsa5__EndpointReferenceType(soap, &this->_wsnt__SubscriptionManagerRP::ConsumerReference);
	this->_wsnt__SubscriptionManagerRP::Filter = NULL;
	this->_wsnt__SubscriptionManagerRP::SubscriptionPolicy = NULL;
	this->_wsnt__SubscriptionManagerRP::CreationTime = NULL;
	/* transient soap skipped */
}

void _wsnt__SubscriptionManagerRP::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->_wsnt__SubscriptionManagerRP::ConsumerReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &this->_wsnt__SubscriptionManagerRP::ConsumerReference);
	soap_serialize_PointerTowsnt__FilterType(soap, &this->_wsnt__SubscriptionManagerRP::Filter);
	soap_serialize_PointerTowsnt__SubscriptionPolicyType(soap, &this->_wsnt__SubscriptionManagerRP::SubscriptionPolicy);
	soap_serialize_PointerTotime(soap, &this->_wsnt__SubscriptionManagerRP::CreationTime);
	/* transient soap skipped */
#endif
}

int _wsnt__SubscriptionManagerRP::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__SubscriptionManagerRP(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__SubscriptionManagerRP(struct soap *soap, const char *tag, int id, const _wsnt__SubscriptionManagerRP *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__SubscriptionManagerRP), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", -1, &(a->_wsnt__SubscriptionManagerRP::ConsumerReference), ""))
		return soap->error;
	if (soap_out_PointerTowsnt__FilterType(soap, "wsnt:Filter", -1, &(a->_wsnt__SubscriptionManagerRP::Filter), ""))
		return soap->error;
	if (soap_out_PointerTowsnt__SubscriptionPolicyType(soap, "wsnt:SubscriptionPolicy", -1, &(a->_wsnt__SubscriptionManagerRP::SubscriptionPolicy), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CreationTime", -1, &(a->_wsnt__SubscriptionManagerRP::CreationTime), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__SubscriptionManagerRP::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__SubscriptionManagerRP(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__SubscriptionManagerRP * SOAP_FMAC4 soap_in__wsnt__SubscriptionManagerRP(struct soap *soap, const char *tag, _wsnt__SubscriptionManagerRP *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__SubscriptionManagerRP *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__SubscriptionManagerRP, sizeof(_wsnt__SubscriptionManagerRP), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__SubscriptionManagerRP)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__SubscriptionManagerRP *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag_ConsumerReference1 = 1;
	size_t soap_flag_Filter1 = 1;
	size_t soap_flag_SubscriptionPolicy1 = 1;
	size_t soap_flag_CreationTime1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConsumerReference1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", &(a->_wsnt__SubscriptionManagerRP::ConsumerReference), "wsa5:EndpointReferenceType"))
				{	soap_flag_ConsumerReference1--;
					continue;
				}
			if (soap_flag_Filter1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "wsnt:Filter", &(a->_wsnt__SubscriptionManagerRP::Filter), "wsnt:FilterType"))
				{	soap_flag_Filter1--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__SubscriptionPolicyType(soap, "wsnt:SubscriptionPolicy", &(a->_wsnt__SubscriptionManagerRP::SubscriptionPolicy), "wsnt:SubscriptionPolicyType"))
				{	soap_flag_SubscriptionPolicy1--;
					continue;
				}
			if (soap_flag_CreationTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CreationTime", &(a->_wsnt__SubscriptionManagerRP::CreationTime), "xsd:dateTime"))
				{	soap_flag_CreationTime1--;
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
	{	a = (_wsnt__SubscriptionManagerRP *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__SubscriptionManagerRP, 0, sizeof(_wsnt__SubscriptionManagerRP), 0, soap_copy__wsnt__SubscriptionManagerRP);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConsumerReference1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int _wsnt__SubscriptionManagerRP::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__SubscriptionManagerRP);
	if (this->soap_out(soap, tag?tag:"wsnt:SubscriptionManagerRP", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__SubscriptionManagerRP::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__SubscriptionManagerRP(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__SubscriptionManagerRP * SOAP_FMAC4 soap_get__wsnt__SubscriptionManagerRP(struct soap *soap, _wsnt__SubscriptionManagerRP *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__SubscriptionManagerRP(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__SubscriptionManagerRP * SOAP_FMAC2 soap_instantiate__wsnt__SubscriptionManagerRP(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__SubscriptionManagerRP(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__SubscriptionManagerRP, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__SubscriptionManagerRP);
		if (size)
			*size = sizeof(_wsnt__SubscriptionManagerRP);
		((_wsnt__SubscriptionManagerRP*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__SubscriptionManagerRP, n);
		if (size)
			*size = n * sizeof(_wsnt__SubscriptionManagerRP);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__SubscriptionManagerRP*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__SubscriptionManagerRP*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__SubscriptionManagerRP(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__SubscriptionManagerRP %p -> %p\n", q, p));
	*(_wsnt__SubscriptionManagerRP*)p = *(_wsnt__SubscriptionManagerRP*)q;
}

void _wsnt__NotificationProducerRP::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_wsnt__NotificationProducerRP::__sizeTopicExpression = 0;
	this->_wsnt__NotificationProducerRP::TopicExpression = NULL;
	this->_wsnt__NotificationProducerRP::FixedTopicSet = NULL;
	this->_wsnt__NotificationProducerRP::__sizeTopicExpressionDialect = 0;
	this->_wsnt__NotificationProducerRP::TopicExpressionDialect = NULL;
	this->_wsnt__NotificationProducerRP::wstop__TopicSet = NULL;
	/* transient soap skipped */
}

void _wsnt__NotificationProducerRP::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->_wsnt__NotificationProducerRP::TopicExpression)
	{	int i;
		for (i = 0; i < this->_wsnt__NotificationProducerRP::__sizeTopicExpression; i++)
		{
			soap_serialize_PointerTowsnt__TopicExpressionType(soap, this->_wsnt__NotificationProducerRP::TopicExpression + i);
		}
	}
	soap_serialize_PointerTobool(soap, &this->_wsnt__NotificationProducerRP::FixedTopicSet);
	if (this->_wsnt__NotificationProducerRP::TopicExpressionDialect)
	{	int i;
		for (i = 0; i < this->_wsnt__NotificationProducerRP::__sizeTopicExpressionDialect; i++)
		{
			soap_serialize_xsd__anyURI(soap, this->_wsnt__NotificationProducerRP::TopicExpressionDialect + i);
		}
	}
	soap_serialize_PointerTowstop__TopicSetType(soap, &this->_wsnt__NotificationProducerRP::wstop__TopicSet);
	/* transient soap skipped */
#endif
}

int _wsnt__NotificationProducerRP::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__wsnt__NotificationProducerRP(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__NotificationProducerRP(struct soap *soap, const char *tag, int id, const _wsnt__NotificationProducerRP *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__NotificationProducerRP), type))
		return soap->error;
	if (a->_wsnt__NotificationProducerRP::TopicExpression)
	{	int i;
		for (i = 0; i < a->_wsnt__NotificationProducerRP::__sizeTopicExpression; i++)
			if (soap_out_PointerTowsnt__TopicExpressionType(soap, "wsnt:TopicExpression", -1, a->_wsnt__NotificationProducerRP::TopicExpression + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTobool(soap, "wsnt:FixedTopicSet", -1, &(a->_wsnt__NotificationProducerRP::FixedTopicSet), ""))
		return soap->error;
	if (a->_wsnt__NotificationProducerRP::TopicExpressionDialect)
	{	int i;
		for (i = 0; i < a->_wsnt__NotificationProducerRP::__sizeTopicExpressionDialect; i++)
			if (soap_out_xsd__anyURI(soap, "wsnt:TopicExpressionDialect", -1, a->_wsnt__NotificationProducerRP::TopicExpressionDialect + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTowstop__TopicSetType(soap, "wstop:TopicSet", -1, &(a->_wsnt__NotificationProducerRP::wstop__TopicSet), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_wsnt__NotificationProducerRP::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__wsnt__NotificationProducerRP(soap, tag, this, type);
}

SOAP_FMAC3 _wsnt__NotificationProducerRP * SOAP_FMAC4 soap_in__wsnt__NotificationProducerRP(struct soap *soap, const char *tag, _wsnt__NotificationProducerRP *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_wsnt__NotificationProducerRP *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__NotificationProducerRP, sizeof(_wsnt__NotificationProducerRP), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__wsnt__NotificationProducerRP)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_wsnt__NotificationProducerRP *)a->soap_in(soap, tag, type);
		}
	}
	struct soap_blist *soap_blist_TopicExpression1 = NULL;
	size_t soap_flag_FixedTopicSet1 = 1;
	struct soap_blist *soap_blist_TopicExpressionDialect1 = NULL;
	size_t soap_flag_wstop__TopicSet1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:TopicExpression", 1, NULL))
			{	if (a->_wsnt__NotificationProducerRP::TopicExpression == NULL)
				{	if (soap_blist_TopicExpression1 == NULL)
						soap_blist_TopicExpression1 = soap_new_block(soap);
					a->_wsnt__NotificationProducerRP::TopicExpression = (wsnt__TopicExpressionType **)soap_push_block(soap, soap_blist_TopicExpression1, sizeof(wsnt__TopicExpressionType *));
					if (a->_wsnt__NotificationProducerRP::TopicExpression == NULL)
						return NULL;
					*a->_wsnt__NotificationProducerRP::TopicExpression = NULL;
				}
				soap_revert(soap);
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "wsnt:TopicExpression", a->_wsnt__NotificationProducerRP::TopicExpression, "wsnt:TopicExpressionType"))
				{	a->_wsnt__NotificationProducerRP::__sizeTopicExpression++;
					a->_wsnt__NotificationProducerRP::TopicExpression = NULL;
					continue;
				}
			}
			if (soap_flag_FixedTopicSet1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTobool(soap, "wsnt:FixedTopicSet", &(a->_wsnt__NotificationProducerRP::FixedTopicSet), "xsd:boolean"))
				{	soap_flag_FixedTopicSet1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:TopicExpressionDialect", 1, NULL))
			{	if (a->_wsnt__NotificationProducerRP::TopicExpressionDialect == NULL)
				{	if (soap_blist_TopicExpressionDialect1 == NULL)
						soap_blist_TopicExpressionDialect1 = soap_new_block(soap);
					a->_wsnt__NotificationProducerRP::TopicExpressionDialect = (char **)soap_push_block(soap, soap_blist_TopicExpressionDialect1, sizeof(char *));
					if (a->_wsnt__NotificationProducerRP::TopicExpressionDialect == NULL)
						return NULL;
					*a->_wsnt__NotificationProducerRP::TopicExpressionDialect = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "wsnt:TopicExpressionDialect", a->_wsnt__NotificationProducerRP::TopicExpressionDialect, "xsd:anyURI"))
				{	a->_wsnt__NotificationProducerRP::__sizeTopicExpressionDialect++;
					a->_wsnt__NotificationProducerRP::TopicExpressionDialect = NULL;
					continue;
				}
			}
			if (soap_flag_wstop__TopicSet1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__TopicSetType(soap, "wstop:TopicSet", &(a->_wsnt__NotificationProducerRP::wstop__TopicSet), "wstop:TopicSetType"))
				{	soap_flag_wstop__TopicSet1--;
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
		if (a->_wsnt__NotificationProducerRP::TopicExpression)
			soap_pop_block(soap, soap_blist_TopicExpression1);
		if (a->_wsnt__NotificationProducerRP::__sizeTopicExpression)
			a->_wsnt__NotificationProducerRP::TopicExpression = (wsnt__TopicExpressionType **)soap_save_block(soap, soap_blist_TopicExpression1, NULL, 1);
		else
		{	a->_wsnt__NotificationProducerRP::TopicExpression = NULL;
			if (soap_blist_TopicExpression1)
				soap_end_block(soap, soap_blist_TopicExpression1);
		}
		if (a->_wsnt__NotificationProducerRP::TopicExpressionDialect)
			soap_pop_block(soap, soap_blist_TopicExpressionDialect1);
		if (a->_wsnt__NotificationProducerRP::__sizeTopicExpressionDialect)
			a->_wsnt__NotificationProducerRP::TopicExpressionDialect = (char **)soap_save_block(soap, soap_blist_TopicExpressionDialect1, NULL, 1);
		else
		{	a->_wsnt__NotificationProducerRP::TopicExpressionDialect = NULL;
			if (soap_blist_TopicExpressionDialect1)
				soap_end_block(soap, soap_blist_TopicExpressionDialect1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (_wsnt__NotificationProducerRP *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__NotificationProducerRP, 0, sizeof(_wsnt__NotificationProducerRP), 0, soap_copy__wsnt__NotificationProducerRP);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _wsnt__NotificationProducerRP::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__wsnt__NotificationProducerRP);
	if (this->soap_out(soap, tag?tag:"wsnt:NotificationProducerRP", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_wsnt__NotificationProducerRP::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__wsnt__NotificationProducerRP(soap, this, tag, type);
}

SOAP_FMAC3 _wsnt__NotificationProducerRP * SOAP_FMAC4 soap_get__wsnt__NotificationProducerRP(struct soap *soap, _wsnt__NotificationProducerRP *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__NotificationProducerRP(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _wsnt__NotificationProducerRP * SOAP_FMAC2 soap_instantiate__wsnt__NotificationProducerRP(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__wsnt__NotificationProducerRP(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__wsnt__NotificationProducerRP, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_wsnt__NotificationProducerRP);
		if (size)
			*size = sizeof(_wsnt__NotificationProducerRP);
		((_wsnt__NotificationProducerRP*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_wsnt__NotificationProducerRP, n);
		if (size)
			*size = n * sizeof(_wsnt__NotificationProducerRP);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_wsnt__NotificationProducerRP*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_wsnt__NotificationProducerRP*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__wsnt__NotificationProducerRP(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _wsnt__NotificationProducerRP %p -> %p\n", q, p));
	*(_wsnt__NotificationProducerRP*)p = *(_wsnt__NotificationProducerRP*)q;
}

void wsnt__ResumeFailedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__ResumeFailedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__ResumeFailedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__ResumeFailedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__ResumeFailedFaultType(struct soap *soap, const char *tag, int id, const wsnt__ResumeFailedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__ResumeFailedFaultType), "wsnt:ResumeFailedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__ResumeFailedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__ResumeFailedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__ResumeFailedFaultType * SOAP_FMAC4 soap_in_wsnt__ResumeFailedFaultType(struct soap *soap, const char *tag, wsnt__ResumeFailedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__ResumeFailedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__ResumeFailedFaultType, sizeof(wsnt__ResumeFailedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__ResumeFailedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__ResumeFailedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__ResumeFailedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__ResumeFailedFaultType, 0, sizeof(wsnt__ResumeFailedFaultType), 0, soap_copy_wsnt__ResumeFailedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__ResumeFailedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__ResumeFailedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:ResumeFailedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__ResumeFailedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__ResumeFailedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__ResumeFailedFaultType * SOAP_FMAC4 soap_get_wsnt__ResumeFailedFaultType(struct soap *soap, wsnt__ResumeFailedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__ResumeFailedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__ResumeFailedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__ResumeFailedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__ResumeFailedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__ResumeFailedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__ResumeFailedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__ResumeFailedFaultType %p -> %p\n", q, p));
	*(wsnt__ResumeFailedFaultType*)p = *(wsnt__ResumeFailedFaultType*)q;
}

void wsnt__PauseFailedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__PauseFailedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__PauseFailedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__PauseFailedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__PauseFailedFaultType(struct soap *soap, const char *tag, int id, const wsnt__PauseFailedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__PauseFailedFaultType), "wsnt:PauseFailedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__PauseFailedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__PauseFailedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__PauseFailedFaultType * SOAP_FMAC4 soap_in_wsnt__PauseFailedFaultType(struct soap *soap, const char *tag, wsnt__PauseFailedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__PauseFailedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__PauseFailedFaultType, sizeof(wsnt__PauseFailedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__PauseFailedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__PauseFailedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__PauseFailedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__PauseFailedFaultType, 0, sizeof(wsnt__PauseFailedFaultType), 0, soap_copy_wsnt__PauseFailedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__PauseFailedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__PauseFailedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:PauseFailedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__PauseFailedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__PauseFailedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__PauseFailedFaultType * SOAP_FMAC4 soap_get_wsnt__PauseFailedFaultType(struct soap *soap, wsnt__PauseFailedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__PauseFailedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__PauseFailedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__PauseFailedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__PauseFailedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__PauseFailedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__PauseFailedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__PauseFailedFaultType %p -> %p\n", q, p));
	*(wsnt__PauseFailedFaultType*)p = *(wsnt__PauseFailedFaultType*)q;
}

void wsnt__UnableToDestroySubscriptionFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__UnableToDestroySubscriptionFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnableToDestroySubscriptionFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnableToDestroySubscriptionFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnableToDestroySubscriptionFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnableToDestroySubscriptionFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType), "wsnt:UnableToDestroySubscriptionFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnableToDestroySubscriptionFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnableToDestroySubscriptionFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnableToDestroySubscriptionFaultType * SOAP_FMAC4 soap_in_wsnt__UnableToDestroySubscriptionFaultType(struct soap *soap, const char *tag, wsnt__UnableToDestroySubscriptionFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnableToDestroySubscriptionFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType, sizeof(wsnt__UnableToDestroySubscriptionFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnableToDestroySubscriptionFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnableToDestroySubscriptionFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType, 0, sizeof(wsnt__UnableToDestroySubscriptionFaultType), 0, soap_copy_wsnt__UnableToDestroySubscriptionFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnableToDestroySubscriptionFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnableToDestroySubscriptionFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnableToDestroySubscriptionFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnableToDestroySubscriptionFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnableToDestroySubscriptionFaultType * SOAP_FMAC4 soap_get_wsnt__UnableToDestroySubscriptionFaultType(struct soap *soap, wsnt__UnableToDestroySubscriptionFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnableToDestroySubscriptionFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnableToDestroySubscriptionFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnableToDestroySubscriptionFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnableToDestroySubscriptionFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnableToDestroySubscriptionFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnableToDestroySubscriptionFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnableToDestroySubscriptionFaultType %p -> %p\n", q, p));
	*(wsnt__UnableToDestroySubscriptionFaultType*)p = *(wsnt__UnableToDestroySubscriptionFaultType*)q;
}

void wsnt__UnacceptableTerminationTimeFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_time(soap, &this->wsnt__UnacceptableTerminationTimeFaultType::MinimumTime);
	this->wsnt__UnacceptableTerminationTimeFaultType::MaximumTime = NULL;
}

void wsnt__UnacceptableTerminationTimeFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->wsnt__UnacceptableTerminationTimeFaultType::MinimumTime, SOAP_TYPE_time);
	soap_serialize_PointerTotime(soap, &this->wsnt__UnacceptableTerminationTimeFaultType::MaximumTime);
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnacceptableTerminationTimeFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnacceptableTerminationTimeFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnacceptableTerminationTimeFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnacceptableTerminationTimeFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType), "wsnt:UnacceptableTerminationTimeFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	if (soap_out_time(soap, "wsnt:MinimumTime", -1, &(a->wsnt__UnacceptableTerminationTimeFaultType::MinimumTime), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:MaximumTime", -1, &(a->wsnt__UnacceptableTerminationTimeFaultType::MaximumTime), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnacceptableTerminationTimeFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnacceptableTerminationTimeFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnacceptableTerminationTimeFaultType * SOAP_FMAC4 soap_in_wsnt__UnacceptableTerminationTimeFaultType(struct soap *soap, const char *tag, wsnt__UnacceptableTerminationTimeFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnacceptableTerminationTimeFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType, sizeof(wsnt__UnacceptableTerminationTimeFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnacceptableTerminationTimeFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	size_t soap_flag_MinimumTime1 = 1;
	size_t soap_flag_MaximumTime1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap_flag_MinimumTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsnt:MinimumTime", &(a->wsnt__UnacceptableTerminationTimeFaultType::MinimumTime), "xsd:dateTime"))
				{	soap_flag_MinimumTime1--;
					continue;
				}
			if (soap_flag_MaximumTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:MaximumTime", &(a->wsnt__UnacceptableTerminationTimeFaultType::MaximumTime), "xsd:dateTime"))
				{	soap_flag_MaximumTime1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnacceptableTerminationTimeFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType, 0, sizeof(wsnt__UnacceptableTerminationTimeFaultType), 0, soap_copy_wsnt__UnacceptableTerminationTimeFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0 || soap_flag_MinimumTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnacceptableTerminationTimeFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnacceptableTerminationTimeFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnacceptableTerminationTimeFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnacceptableTerminationTimeFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnacceptableTerminationTimeFaultType * SOAP_FMAC4 soap_get_wsnt__UnacceptableTerminationTimeFaultType(struct soap *soap, wsnt__UnacceptableTerminationTimeFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnacceptableTerminationTimeFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnacceptableTerminationTimeFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnacceptableTerminationTimeFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnacceptableTerminationTimeFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnacceptableTerminationTimeFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnacceptableTerminationTimeFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnacceptableTerminationTimeFaultType %p -> %p\n", q, p));
	*(wsnt__UnacceptableTerminationTimeFaultType*)p = *(wsnt__UnacceptableTerminationTimeFaultType*)q;
}

void wsnt__UnableToCreatePullPointFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__UnableToCreatePullPointFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnableToCreatePullPointFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnableToCreatePullPointFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnableToCreatePullPointFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnableToCreatePullPointFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType), "wsnt:UnableToCreatePullPointFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnableToCreatePullPointFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnableToCreatePullPointFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnableToCreatePullPointFaultType * SOAP_FMAC4 soap_in_wsnt__UnableToCreatePullPointFaultType(struct soap *soap, const char *tag, wsnt__UnableToCreatePullPointFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnableToCreatePullPointFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType, sizeof(wsnt__UnableToCreatePullPointFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnableToCreatePullPointFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnableToCreatePullPointFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType, 0, sizeof(wsnt__UnableToCreatePullPointFaultType), 0, soap_copy_wsnt__UnableToCreatePullPointFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnableToCreatePullPointFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnableToCreatePullPointFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnableToCreatePullPointFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnableToCreatePullPointFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnableToCreatePullPointFaultType * SOAP_FMAC4 soap_get_wsnt__UnableToCreatePullPointFaultType(struct soap *soap, wsnt__UnableToCreatePullPointFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnableToCreatePullPointFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnableToCreatePullPointFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnableToCreatePullPointFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnableToCreatePullPointFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnableToCreatePullPointFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnableToCreatePullPointFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnableToCreatePullPointFaultType %p -> %p\n", q, p));
	*(wsnt__UnableToCreatePullPointFaultType*)p = *(wsnt__UnableToCreatePullPointFaultType*)q;
}

void wsnt__UnableToDestroyPullPointFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__UnableToDestroyPullPointFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnableToDestroyPullPointFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnableToDestroyPullPointFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnableToDestroyPullPointFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnableToDestroyPullPointFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType), "wsnt:UnableToDestroyPullPointFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnableToDestroyPullPointFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnableToDestroyPullPointFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnableToDestroyPullPointFaultType * SOAP_FMAC4 soap_in_wsnt__UnableToDestroyPullPointFaultType(struct soap *soap, const char *tag, wsnt__UnableToDestroyPullPointFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnableToDestroyPullPointFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType, sizeof(wsnt__UnableToDestroyPullPointFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnableToDestroyPullPointFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnableToDestroyPullPointFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType, 0, sizeof(wsnt__UnableToDestroyPullPointFaultType), 0, soap_copy_wsnt__UnableToDestroyPullPointFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnableToDestroyPullPointFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnableToDestroyPullPointFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnableToDestroyPullPointFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnableToDestroyPullPointFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnableToDestroyPullPointFaultType * SOAP_FMAC4 soap_get_wsnt__UnableToDestroyPullPointFaultType(struct soap *soap, wsnt__UnableToDestroyPullPointFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnableToDestroyPullPointFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnableToDestroyPullPointFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnableToDestroyPullPointFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnableToDestroyPullPointFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnableToDestroyPullPointFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnableToDestroyPullPointFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnableToDestroyPullPointFaultType %p -> %p\n", q, p));
	*(wsnt__UnableToDestroyPullPointFaultType*)p = *(wsnt__UnableToDestroyPullPointFaultType*)q;
}

void wsnt__UnableToGetMessagesFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__UnableToGetMessagesFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnableToGetMessagesFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnableToGetMessagesFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnableToGetMessagesFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnableToGetMessagesFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnableToGetMessagesFaultType), "wsnt:UnableToGetMessagesFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnableToGetMessagesFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnableToGetMessagesFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnableToGetMessagesFaultType * SOAP_FMAC4 soap_in_wsnt__UnableToGetMessagesFaultType(struct soap *soap, const char *tag, wsnt__UnableToGetMessagesFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnableToGetMessagesFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnableToGetMessagesFaultType, sizeof(wsnt__UnableToGetMessagesFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnableToGetMessagesFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnableToGetMessagesFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnableToGetMessagesFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnableToGetMessagesFaultType, 0, sizeof(wsnt__UnableToGetMessagesFaultType), 0, soap_copy_wsnt__UnableToGetMessagesFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnableToGetMessagesFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnableToGetMessagesFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnableToGetMessagesFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnableToGetMessagesFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnableToGetMessagesFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnableToGetMessagesFaultType * SOAP_FMAC4 soap_get_wsnt__UnableToGetMessagesFaultType(struct soap *soap, wsnt__UnableToGetMessagesFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnableToGetMessagesFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnableToGetMessagesFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnableToGetMessagesFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnableToGetMessagesFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnableToGetMessagesFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnableToGetMessagesFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnableToGetMessagesFaultType %p -> %p\n", q, p));
	*(wsnt__UnableToGetMessagesFaultType*)p = *(wsnt__UnableToGetMessagesFaultType*)q;
}

void wsnt__NoCurrentMessageOnTopicFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__NoCurrentMessageOnTopicFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__NoCurrentMessageOnTopicFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__NoCurrentMessageOnTopicFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__NoCurrentMessageOnTopicFaultType(struct soap *soap, const char *tag, int id, const wsnt__NoCurrentMessageOnTopicFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType), "wsnt:NoCurrentMessageOnTopicFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__NoCurrentMessageOnTopicFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__NoCurrentMessageOnTopicFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__NoCurrentMessageOnTopicFaultType * SOAP_FMAC4 soap_in_wsnt__NoCurrentMessageOnTopicFaultType(struct soap *soap, const char *tag, wsnt__NoCurrentMessageOnTopicFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__NoCurrentMessageOnTopicFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType, sizeof(wsnt__NoCurrentMessageOnTopicFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__NoCurrentMessageOnTopicFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__NoCurrentMessageOnTopicFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType, 0, sizeof(wsnt__NoCurrentMessageOnTopicFaultType), 0, soap_copy_wsnt__NoCurrentMessageOnTopicFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__NoCurrentMessageOnTopicFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:NoCurrentMessageOnTopicFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__NoCurrentMessageOnTopicFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__NoCurrentMessageOnTopicFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__NoCurrentMessageOnTopicFaultType * SOAP_FMAC4 soap_get_wsnt__NoCurrentMessageOnTopicFaultType(struct soap *soap, wsnt__NoCurrentMessageOnTopicFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__NoCurrentMessageOnTopicFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__NoCurrentMessageOnTopicFaultType * SOAP_FMAC2 soap_instantiate_wsnt__NoCurrentMessageOnTopicFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__NoCurrentMessageOnTopicFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__NoCurrentMessageOnTopicFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__NoCurrentMessageOnTopicFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__NoCurrentMessageOnTopicFaultType %p -> %p\n", q, p));
	*(wsnt__NoCurrentMessageOnTopicFaultType*)p = *(wsnt__NoCurrentMessageOnTopicFaultType*)q;
}

void wsnt__UnacceptableInitialTerminationTimeFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_time(soap, &this->wsnt__UnacceptableInitialTerminationTimeFaultType::MinimumTime);
	this->wsnt__UnacceptableInitialTerminationTimeFaultType::MaximumTime = NULL;
}

void wsnt__UnacceptableInitialTerminationTimeFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_embedded(soap, &this->wsnt__UnacceptableInitialTerminationTimeFaultType::MinimumTime, SOAP_TYPE_time);
	soap_serialize_PointerTotime(soap, &this->wsnt__UnacceptableInitialTerminationTimeFaultType::MaximumTime);
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnacceptableInitialTerminationTimeFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnacceptableInitialTerminationTimeFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnacceptableInitialTerminationTimeFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnacceptableInitialTerminationTimeFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType), "wsnt:UnacceptableInitialTerminationTimeFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	if (soap_out_time(soap, "wsnt:MinimumTime", -1, &(a->wsnt__UnacceptableInitialTerminationTimeFaultType::MinimumTime), ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:MaximumTime", -1, &(a->wsnt__UnacceptableInitialTerminationTimeFaultType::MaximumTime), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnacceptableInitialTerminationTimeFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnacceptableInitialTerminationTimeFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnacceptableInitialTerminationTimeFaultType * SOAP_FMAC4 soap_in_wsnt__UnacceptableInitialTerminationTimeFaultType(struct soap *soap, const char *tag, wsnt__UnacceptableInitialTerminationTimeFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnacceptableInitialTerminationTimeFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType, sizeof(wsnt__UnacceptableInitialTerminationTimeFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnacceptableInitialTerminationTimeFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	size_t soap_flag_MinimumTime1 = 1;
	size_t soap_flag_MaximumTime1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap_flag_MinimumTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsnt:MinimumTime", &(a->wsnt__UnacceptableInitialTerminationTimeFaultType::MinimumTime), "xsd:dateTime"))
				{	soap_flag_MinimumTime1--;
					continue;
				}
			if (soap_flag_MaximumTime1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:MaximumTime", &(a->wsnt__UnacceptableInitialTerminationTimeFaultType::MaximumTime), "xsd:dateTime"))
				{	soap_flag_MaximumTime1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnacceptableInitialTerminationTimeFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType, 0, sizeof(wsnt__UnacceptableInitialTerminationTimeFaultType), 0, soap_copy_wsnt__UnacceptableInitialTerminationTimeFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0 || soap_flag_MinimumTime1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnacceptableInitialTerminationTimeFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnacceptableInitialTerminationTimeFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnacceptableInitialTerminationTimeFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnacceptableInitialTerminationTimeFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnacceptableInitialTerminationTimeFaultType * SOAP_FMAC4 soap_get_wsnt__UnacceptableInitialTerminationTimeFaultType(struct soap *soap, wsnt__UnacceptableInitialTerminationTimeFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnacceptableInitialTerminationTimeFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnacceptableInitialTerminationTimeFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnacceptableInitialTerminationTimeFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnacceptableInitialTerminationTimeFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnacceptableInitialTerminationTimeFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnacceptableInitialTerminationTimeFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnacceptableInitialTerminationTimeFaultType %p -> %p\n", q, p));
	*(wsnt__UnacceptableInitialTerminationTimeFaultType*)p = *(wsnt__UnacceptableInitialTerminationTimeFaultType*)q;
}

void wsnt__NotifyMessageNotSupportedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__NotifyMessageNotSupportedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__NotifyMessageNotSupportedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__NotifyMessageNotSupportedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__NotifyMessageNotSupportedFaultType(struct soap *soap, const char *tag, int id, const wsnt__NotifyMessageNotSupportedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType), "wsnt:NotifyMessageNotSupportedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__NotifyMessageNotSupportedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__NotifyMessageNotSupportedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__NotifyMessageNotSupportedFaultType * SOAP_FMAC4 soap_in_wsnt__NotifyMessageNotSupportedFaultType(struct soap *soap, const char *tag, wsnt__NotifyMessageNotSupportedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__NotifyMessageNotSupportedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType, sizeof(wsnt__NotifyMessageNotSupportedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__NotifyMessageNotSupportedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__NotifyMessageNotSupportedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType, 0, sizeof(wsnt__NotifyMessageNotSupportedFaultType), 0, soap_copy_wsnt__NotifyMessageNotSupportedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__NotifyMessageNotSupportedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:NotifyMessageNotSupportedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__NotifyMessageNotSupportedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__NotifyMessageNotSupportedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__NotifyMessageNotSupportedFaultType * SOAP_FMAC4 soap_get_wsnt__NotifyMessageNotSupportedFaultType(struct soap *soap, wsnt__NotifyMessageNotSupportedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__NotifyMessageNotSupportedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__NotifyMessageNotSupportedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__NotifyMessageNotSupportedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__NotifyMessageNotSupportedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__NotifyMessageNotSupportedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__NotifyMessageNotSupportedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__NotifyMessageNotSupportedFaultType %p -> %p\n", q, p));
	*(wsnt__NotifyMessageNotSupportedFaultType*)p = *(wsnt__NotifyMessageNotSupportedFaultType*)q;
}

void wsnt__UnsupportedPolicyRequestFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wsnt__UnsupportedPolicyRequestFaultType::__sizeUnsupportedPolicy = 0;
	this->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = NULL;
}

void wsnt__UnsupportedPolicyRequestFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy)
	{	int i;
		for (i = 0; i < this->wsnt__UnsupportedPolicyRequestFaultType::__sizeUnsupportedPolicy; i++)
		{
			soap_serialize__QName(soap, this->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy + i);
		}
	}
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnsupportedPolicyRequestFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnsupportedPolicyRequestFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnsupportedPolicyRequestFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnsupportedPolicyRequestFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType), "wsnt:UnsupportedPolicyRequestFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	if (a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy)
	{	int i;
		for (i = 0; i < a->wsnt__UnsupportedPolicyRequestFaultType::__sizeUnsupportedPolicy; i++)
		{	const char *soap_tmp_UnsupportedPolicy = soap_QName2s(soap, a->UnsupportedPolicy[i]);
			if (soap_out__QName(soap, "wsnt:UnsupportedPolicy", -1, (char*const*)&soap_tmp_UnsupportedPolicy, ""))
				return soap->error;
		}
	}
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnsupportedPolicyRequestFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnsupportedPolicyRequestFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnsupportedPolicyRequestFaultType * SOAP_FMAC4 soap_in_wsnt__UnsupportedPolicyRequestFaultType(struct soap *soap, const char *tag, wsnt__UnsupportedPolicyRequestFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnsupportedPolicyRequestFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType, sizeof(wsnt__UnsupportedPolicyRequestFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnsupportedPolicyRequestFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	struct soap_blist *soap_blist_UnsupportedPolicy1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:UnsupportedPolicy", 1, NULL))
			{	if (a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy == NULL)
				{	if (soap_blist_UnsupportedPolicy1 == NULL)
						soap_blist_UnsupportedPolicy1 = soap_new_block(soap);
					a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = (char **)soap_push_block(soap, soap_blist_UnsupportedPolicy1, sizeof(char *));
					if (a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy == NULL)
						return NULL;
					*a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = NULL;
				}
				soap_revert(soap);
				if (soap_in__QName(soap, "wsnt:UnsupportedPolicy", a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy, ""))
				{	a->wsnt__UnsupportedPolicyRequestFaultType::__sizeUnsupportedPolicy++;
					a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy)
			soap_pop_block(soap, soap_blist_UnsupportedPolicy1);
		if (a->wsnt__UnsupportedPolicyRequestFaultType::__sizeUnsupportedPolicy)
			a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = (char **)soap_save_block(soap, soap_blist_UnsupportedPolicy1, NULL, 1);
		else
		{	a->wsnt__UnsupportedPolicyRequestFaultType::UnsupportedPolicy = NULL;
			if (soap_blist_UnsupportedPolicy1)
				soap_end_block(soap, soap_blist_UnsupportedPolicy1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnsupportedPolicyRequestFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType, 0, sizeof(wsnt__UnsupportedPolicyRequestFaultType), 0, soap_copy_wsnt__UnsupportedPolicyRequestFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnsupportedPolicyRequestFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnsupportedPolicyRequestFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnsupportedPolicyRequestFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnsupportedPolicyRequestFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnsupportedPolicyRequestFaultType * SOAP_FMAC4 soap_get_wsnt__UnsupportedPolicyRequestFaultType(struct soap *soap, wsnt__UnsupportedPolicyRequestFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnsupportedPolicyRequestFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnsupportedPolicyRequestFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnsupportedPolicyRequestFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnsupportedPolicyRequestFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnsupportedPolicyRequestFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnsupportedPolicyRequestFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnsupportedPolicyRequestFaultType %p -> %p\n", q, p));
	*(wsnt__UnsupportedPolicyRequestFaultType*)p = *(wsnt__UnsupportedPolicyRequestFaultType*)q;
}

void wsnt__UnrecognizedPolicyRequestFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wsnt__UnrecognizedPolicyRequestFaultType::__sizeUnrecognizedPolicy = 0;
	this->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = NULL;
}

void wsnt__UnrecognizedPolicyRequestFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy)
	{	int i;
		for (i = 0; i < this->wsnt__UnrecognizedPolicyRequestFaultType::__sizeUnrecognizedPolicy; i++)
		{
			soap_serialize__QName(soap, this->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy + i);
		}
	}
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__UnrecognizedPolicyRequestFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__UnrecognizedPolicyRequestFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__UnrecognizedPolicyRequestFaultType(struct soap *soap, const char *tag, int id, const wsnt__UnrecognizedPolicyRequestFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType), "wsnt:UnrecognizedPolicyRequestFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	if (a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy)
	{	int i;
		for (i = 0; i < a->wsnt__UnrecognizedPolicyRequestFaultType::__sizeUnrecognizedPolicy; i++)
		{	const char *soap_tmp_UnrecognizedPolicy = soap_QName2s(soap, a->UnrecognizedPolicy[i]);
			if (soap_out__QName(soap, "wsnt:UnrecognizedPolicy", -1, (char*const*)&soap_tmp_UnrecognizedPolicy, ""))
				return soap->error;
		}
	}
	return soap_element_end_out(soap, tag);
}

void *wsnt__UnrecognizedPolicyRequestFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__UnrecognizedPolicyRequestFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__UnrecognizedPolicyRequestFaultType * SOAP_FMAC4 soap_in_wsnt__UnrecognizedPolicyRequestFaultType(struct soap *soap, const char *tag, wsnt__UnrecognizedPolicyRequestFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__UnrecognizedPolicyRequestFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType, sizeof(wsnt__UnrecognizedPolicyRequestFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__UnrecognizedPolicyRequestFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	struct soap_blist *soap_blist_UnrecognizedPolicy1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:UnrecognizedPolicy", 1, NULL))
			{	if (a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy == NULL)
				{	if (soap_blist_UnrecognizedPolicy1 == NULL)
						soap_blist_UnrecognizedPolicy1 = soap_new_block(soap);
					a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = (char **)soap_push_block(soap, soap_blist_UnrecognizedPolicy1, sizeof(char *));
					if (a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy == NULL)
						return NULL;
					*a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = NULL;
				}
				soap_revert(soap);
				if (soap_in__QName(soap, "wsnt:UnrecognizedPolicy", a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy, ""))
				{	a->wsnt__UnrecognizedPolicyRequestFaultType::__sizeUnrecognizedPolicy++;
					a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy)
			soap_pop_block(soap, soap_blist_UnrecognizedPolicy1);
		if (a->wsnt__UnrecognizedPolicyRequestFaultType::__sizeUnrecognizedPolicy)
			a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = (char **)soap_save_block(soap, soap_blist_UnrecognizedPolicy1, NULL, 1);
		else
		{	a->wsnt__UnrecognizedPolicyRequestFaultType::UnrecognizedPolicy = NULL;
			if (soap_blist_UnrecognizedPolicy1)
				soap_end_block(soap, soap_blist_UnrecognizedPolicy1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__UnrecognizedPolicyRequestFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType, 0, sizeof(wsnt__UnrecognizedPolicyRequestFaultType), 0, soap_copy_wsnt__UnrecognizedPolicyRequestFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__UnrecognizedPolicyRequestFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:UnrecognizedPolicyRequestFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__UnrecognizedPolicyRequestFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__UnrecognizedPolicyRequestFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__UnrecognizedPolicyRequestFaultType * SOAP_FMAC4 soap_get_wsnt__UnrecognizedPolicyRequestFaultType(struct soap *soap, wsnt__UnrecognizedPolicyRequestFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__UnrecognizedPolicyRequestFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__UnrecognizedPolicyRequestFaultType * SOAP_FMAC2 soap_instantiate_wsnt__UnrecognizedPolicyRequestFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__UnrecognizedPolicyRequestFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__UnrecognizedPolicyRequestFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__UnrecognizedPolicyRequestFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__UnrecognizedPolicyRequestFaultType %p -> %p\n", q, p));
	*(wsnt__UnrecognizedPolicyRequestFaultType*)p = *(wsnt__UnrecognizedPolicyRequestFaultType*)q;
}

void wsnt__InvalidMessageContentExpressionFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__InvalidMessageContentExpressionFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__InvalidMessageContentExpressionFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__InvalidMessageContentExpressionFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__InvalidMessageContentExpressionFaultType(struct soap *soap, const char *tag, int id, const wsnt__InvalidMessageContentExpressionFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType), "wsnt:InvalidMessageContentExpressionFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__InvalidMessageContentExpressionFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__InvalidMessageContentExpressionFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__InvalidMessageContentExpressionFaultType * SOAP_FMAC4 soap_in_wsnt__InvalidMessageContentExpressionFaultType(struct soap *soap, const char *tag, wsnt__InvalidMessageContentExpressionFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__InvalidMessageContentExpressionFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType, sizeof(wsnt__InvalidMessageContentExpressionFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__InvalidMessageContentExpressionFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__InvalidMessageContentExpressionFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType, 0, sizeof(wsnt__InvalidMessageContentExpressionFaultType), 0, soap_copy_wsnt__InvalidMessageContentExpressionFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__InvalidMessageContentExpressionFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:InvalidMessageContentExpressionFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__InvalidMessageContentExpressionFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__InvalidMessageContentExpressionFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__InvalidMessageContentExpressionFaultType * SOAP_FMAC4 soap_get_wsnt__InvalidMessageContentExpressionFaultType(struct soap *soap, wsnt__InvalidMessageContentExpressionFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__InvalidMessageContentExpressionFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__InvalidMessageContentExpressionFaultType * SOAP_FMAC2 soap_instantiate_wsnt__InvalidMessageContentExpressionFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__InvalidMessageContentExpressionFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__InvalidMessageContentExpressionFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__InvalidMessageContentExpressionFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__InvalidMessageContentExpressionFaultType %p -> %p\n", q, p));
	*(wsnt__InvalidMessageContentExpressionFaultType*)p = *(wsnt__InvalidMessageContentExpressionFaultType*)q;
}

void wsnt__InvalidProducerPropertiesExpressionFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__InvalidProducerPropertiesExpressionFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__InvalidProducerPropertiesExpressionFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__InvalidProducerPropertiesExpressionFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__InvalidProducerPropertiesExpressionFaultType(struct soap *soap, const char *tag, int id, const wsnt__InvalidProducerPropertiesExpressionFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType), "wsnt:InvalidProducerPropertiesExpressionFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__InvalidProducerPropertiesExpressionFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__InvalidProducerPropertiesExpressionFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__InvalidProducerPropertiesExpressionFaultType * SOAP_FMAC4 soap_in_wsnt__InvalidProducerPropertiesExpressionFaultType(struct soap *soap, const char *tag, wsnt__InvalidProducerPropertiesExpressionFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__InvalidProducerPropertiesExpressionFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType, sizeof(wsnt__InvalidProducerPropertiesExpressionFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__InvalidProducerPropertiesExpressionFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__InvalidProducerPropertiesExpressionFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType, 0, sizeof(wsnt__InvalidProducerPropertiesExpressionFaultType), 0, soap_copy_wsnt__InvalidProducerPropertiesExpressionFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__InvalidProducerPropertiesExpressionFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:InvalidProducerPropertiesExpressionFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__InvalidProducerPropertiesExpressionFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__InvalidProducerPropertiesExpressionFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__InvalidProducerPropertiesExpressionFaultType * SOAP_FMAC4 soap_get_wsnt__InvalidProducerPropertiesExpressionFaultType(struct soap *soap, wsnt__InvalidProducerPropertiesExpressionFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__InvalidProducerPropertiesExpressionFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__InvalidProducerPropertiesExpressionFaultType * SOAP_FMAC2 soap_instantiate_wsnt__InvalidProducerPropertiesExpressionFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__InvalidProducerPropertiesExpressionFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__InvalidProducerPropertiesExpressionFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__InvalidProducerPropertiesExpressionFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__InvalidProducerPropertiesExpressionFaultType %p -> %p\n", q, p));
	*(wsnt__InvalidProducerPropertiesExpressionFaultType*)p = *(wsnt__InvalidProducerPropertiesExpressionFaultType*)q;
}

void wsnt__MultipleTopicsSpecifiedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__MultipleTopicsSpecifiedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__MultipleTopicsSpecifiedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__MultipleTopicsSpecifiedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__MultipleTopicsSpecifiedFaultType(struct soap *soap, const char *tag, int id, const wsnt__MultipleTopicsSpecifiedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType), "wsnt:MultipleTopicsSpecifiedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__MultipleTopicsSpecifiedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__MultipleTopicsSpecifiedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__MultipleTopicsSpecifiedFaultType * SOAP_FMAC4 soap_in_wsnt__MultipleTopicsSpecifiedFaultType(struct soap *soap, const char *tag, wsnt__MultipleTopicsSpecifiedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__MultipleTopicsSpecifiedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType, sizeof(wsnt__MultipleTopicsSpecifiedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__MultipleTopicsSpecifiedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__MultipleTopicsSpecifiedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType, 0, sizeof(wsnt__MultipleTopicsSpecifiedFaultType), 0, soap_copy_wsnt__MultipleTopicsSpecifiedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__MultipleTopicsSpecifiedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:MultipleTopicsSpecifiedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__MultipleTopicsSpecifiedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__MultipleTopicsSpecifiedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__MultipleTopicsSpecifiedFaultType * SOAP_FMAC4 soap_get_wsnt__MultipleTopicsSpecifiedFaultType(struct soap *soap, wsnt__MultipleTopicsSpecifiedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__MultipleTopicsSpecifiedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__MultipleTopicsSpecifiedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__MultipleTopicsSpecifiedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__MultipleTopicsSpecifiedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__MultipleTopicsSpecifiedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__MultipleTopicsSpecifiedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__MultipleTopicsSpecifiedFaultType %p -> %p\n", q, p));
	*(wsnt__MultipleTopicsSpecifiedFaultType*)p = *(wsnt__MultipleTopicsSpecifiedFaultType*)q;
}

void wsnt__TopicNotSupportedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__TopicNotSupportedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__TopicNotSupportedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__TopicNotSupportedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__TopicNotSupportedFaultType(struct soap *soap, const char *tag, int id, const wsnt__TopicNotSupportedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__TopicNotSupportedFaultType), "wsnt:TopicNotSupportedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__TopicNotSupportedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__TopicNotSupportedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__TopicNotSupportedFaultType * SOAP_FMAC4 soap_in_wsnt__TopicNotSupportedFaultType(struct soap *soap, const char *tag, wsnt__TopicNotSupportedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__TopicNotSupportedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__TopicNotSupportedFaultType, sizeof(wsnt__TopicNotSupportedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__TopicNotSupportedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__TopicNotSupportedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__TopicNotSupportedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__TopicNotSupportedFaultType, 0, sizeof(wsnt__TopicNotSupportedFaultType), 0, soap_copy_wsnt__TopicNotSupportedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__TopicNotSupportedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__TopicNotSupportedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:TopicNotSupportedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__TopicNotSupportedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__TopicNotSupportedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__TopicNotSupportedFaultType * SOAP_FMAC4 soap_get_wsnt__TopicNotSupportedFaultType(struct soap *soap, wsnt__TopicNotSupportedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__TopicNotSupportedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__TopicNotSupportedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__TopicNotSupportedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__TopicNotSupportedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__TopicNotSupportedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__TopicNotSupportedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__TopicNotSupportedFaultType %p -> %p\n", q, p));
	*(wsnt__TopicNotSupportedFaultType*)p = *(wsnt__TopicNotSupportedFaultType*)q;
}

void wsnt__InvalidTopicExpressionFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__InvalidTopicExpressionFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__InvalidTopicExpressionFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__InvalidTopicExpressionFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__InvalidTopicExpressionFaultType(struct soap *soap, const char *tag, int id, const wsnt__InvalidTopicExpressionFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType), "wsnt:InvalidTopicExpressionFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__InvalidTopicExpressionFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__InvalidTopicExpressionFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__InvalidTopicExpressionFaultType * SOAP_FMAC4 soap_in_wsnt__InvalidTopicExpressionFaultType(struct soap *soap, const char *tag, wsnt__InvalidTopicExpressionFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__InvalidTopicExpressionFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType, sizeof(wsnt__InvalidTopicExpressionFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__InvalidTopicExpressionFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__InvalidTopicExpressionFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType, 0, sizeof(wsnt__InvalidTopicExpressionFaultType), 0, soap_copy_wsnt__InvalidTopicExpressionFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__InvalidTopicExpressionFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:InvalidTopicExpressionFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__InvalidTopicExpressionFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__InvalidTopicExpressionFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__InvalidTopicExpressionFaultType * SOAP_FMAC4 soap_get_wsnt__InvalidTopicExpressionFaultType(struct soap *soap, wsnt__InvalidTopicExpressionFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__InvalidTopicExpressionFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__InvalidTopicExpressionFaultType * SOAP_FMAC2 soap_instantiate_wsnt__InvalidTopicExpressionFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__InvalidTopicExpressionFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__InvalidTopicExpressionFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__InvalidTopicExpressionFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__InvalidTopicExpressionFaultType %p -> %p\n", q, p));
	*(wsnt__InvalidTopicExpressionFaultType*)p = *(wsnt__InvalidTopicExpressionFaultType*)q;
}

void wsnt__TopicExpressionDialectUnknownFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__TopicExpressionDialectUnknownFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__TopicExpressionDialectUnknownFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__TopicExpressionDialectUnknownFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__TopicExpressionDialectUnknownFaultType(struct soap *soap, const char *tag, int id, const wsnt__TopicExpressionDialectUnknownFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType), "wsnt:TopicExpressionDialectUnknownFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__TopicExpressionDialectUnknownFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__TopicExpressionDialectUnknownFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__TopicExpressionDialectUnknownFaultType * SOAP_FMAC4 soap_in_wsnt__TopicExpressionDialectUnknownFaultType(struct soap *soap, const char *tag, wsnt__TopicExpressionDialectUnknownFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__TopicExpressionDialectUnknownFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType, sizeof(wsnt__TopicExpressionDialectUnknownFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__TopicExpressionDialectUnknownFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__TopicExpressionDialectUnknownFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType, 0, sizeof(wsnt__TopicExpressionDialectUnknownFaultType), 0, soap_copy_wsnt__TopicExpressionDialectUnknownFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__TopicExpressionDialectUnknownFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:TopicExpressionDialectUnknownFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__TopicExpressionDialectUnknownFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__TopicExpressionDialectUnknownFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__TopicExpressionDialectUnknownFaultType * SOAP_FMAC4 soap_get_wsnt__TopicExpressionDialectUnknownFaultType(struct soap *soap, wsnt__TopicExpressionDialectUnknownFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__TopicExpressionDialectUnknownFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__TopicExpressionDialectUnknownFaultType * SOAP_FMAC2 soap_instantiate_wsnt__TopicExpressionDialectUnknownFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__TopicExpressionDialectUnknownFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__TopicExpressionDialectUnknownFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__TopicExpressionDialectUnknownFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__TopicExpressionDialectUnknownFaultType %p -> %p\n", q, p));
	*(wsnt__TopicExpressionDialectUnknownFaultType*)p = *(wsnt__TopicExpressionDialectUnknownFaultType*)q;
}

void wsnt__InvalidFilterFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	this->wsnt__InvalidFilterFaultType::__sizeUnknownFilter = 0;
	this->wsnt__InvalidFilterFaultType::UnknownFilter = NULL;
}

void wsnt__InvalidFilterFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->wsnt__InvalidFilterFaultType::UnknownFilter)
	{	int i;
		for (i = 0; i < this->wsnt__InvalidFilterFaultType::__sizeUnknownFilter; i++)
		{
			soap_serialize__QName(soap, this->wsnt__InvalidFilterFaultType::UnknownFilter + i);
		}
	}
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__InvalidFilterFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__InvalidFilterFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__InvalidFilterFaultType(struct soap *soap, const char *tag, int id, const wsnt__InvalidFilterFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__InvalidFilterFaultType), "wsnt:InvalidFilterFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	if (a->wsnt__InvalidFilterFaultType::UnknownFilter)
	{	int i;
		for (i = 0; i < a->wsnt__InvalidFilterFaultType::__sizeUnknownFilter; i++)
		{	const char *soap_tmp_UnknownFilter = soap_QName2s(soap, a->UnknownFilter[i]);
			if (soap_out__QName(soap, "wsnt:UnknownFilter", -1, (char*const*)&soap_tmp_UnknownFilter, ""))
				return soap->error;
		}
	}
	return soap_element_end_out(soap, tag);
}

void *wsnt__InvalidFilterFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__InvalidFilterFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__InvalidFilterFaultType * SOAP_FMAC4 soap_in_wsnt__InvalidFilterFaultType(struct soap *soap, const char *tag, wsnt__InvalidFilterFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__InvalidFilterFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__InvalidFilterFaultType, sizeof(wsnt__InvalidFilterFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__InvalidFilterFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__InvalidFilterFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	struct soap_blist *soap_blist_UnknownFilter1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:UnknownFilter", 1, NULL))
			{	if (a->wsnt__InvalidFilterFaultType::UnknownFilter == NULL)
				{	if (soap_blist_UnknownFilter1 == NULL)
						soap_blist_UnknownFilter1 = soap_new_block(soap);
					a->wsnt__InvalidFilterFaultType::UnknownFilter = (char **)soap_push_block(soap, soap_blist_UnknownFilter1, sizeof(char *));
					if (a->wsnt__InvalidFilterFaultType::UnknownFilter == NULL)
						return NULL;
					*a->wsnt__InvalidFilterFaultType::UnknownFilter = NULL;
				}
				soap_revert(soap);
				if (soap_in__QName(soap, "wsnt:UnknownFilter", a->wsnt__InvalidFilterFaultType::UnknownFilter, ""))
				{	a->wsnt__InvalidFilterFaultType::__sizeUnknownFilter++;
					a->wsnt__InvalidFilterFaultType::UnknownFilter = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (a->wsnt__InvalidFilterFaultType::UnknownFilter)
			soap_pop_block(soap, soap_blist_UnknownFilter1);
		if (a->wsnt__InvalidFilterFaultType::__sizeUnknownFilter)
			a->wsnt__InvalidFilterFaultType::UnknownFilter = (char **)soap_save_block(soap, soap_blist_UnknownFilter1, NULL, 1);
		else
		{	a->wsnt__InvalidFilterFaultType::UnknownFilter = NULL;
			if (soap_blist_UnknownFilter1)
				soap_end_block(soap, soap_blist_UnknownFilter1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__InvalidFilterFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__InvalidFilterFaultType, 0, sizeof(wsnt__InvalidFilterFaultType), 0, soap_copy_wsnt__InvalidFilterFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0 || a->wsnt__InvalidFilterFaultType::__sizeUnknownFilter < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__InvalidFilterFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__InvalidFilterFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:InvalidFilterFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__InvalidFilterFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__InvalidFilterFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__InvalidFilterFaultType * SOAP_FMAC4 soap_get_wsnt__InvalidFilterFaultType(struct soap *soap, wsnt__InvalidFilterFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__InvalidFilterFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__InvalidFilterFaultType * SOAP_FMAC2 soap_instantiate_wsnt__InvalidFilterFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__InvalidFilterFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__InvalidFilterFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__InvalidFilterFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__InvalidFilterFaultType %p -> %p\n", q, p));
	*(wsnt__InvalidFilterFaultType*)p = *(wsnt__InvalidFilterFaultType*)q;
}

void wsnt__SubscribeCreationFailedFaultType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->wsrfbf__BaseFaultType::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
}

void wsnt__SubscribeCreationFailedFaultType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->wsrfbf__BaseFaultType::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__SubscribeCreationFailedFaultType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__SubscribeCreationFailedFaultType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__SubscribeCreationFailedFaultType(struct soap *soap, const char *tag, int id, const wsnt__SubscribeCreationFailedFaultType *a, const char *type)
{
	if (((wsrfbf__BaseFaultType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsrfbf__BaseFaultType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType), "wsnt:SubscribeCreationFailedFaultType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsrfbf__BaseFaultType::__any)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsrfbf__BaseFaultType::__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &(a->wsrfbf__BaseFaultType::Timestamp), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &(a->wsrfbf__BaseFaultType::Originator), ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
		return soap->error;
	if (a->wsrfbf__BaseFaultType::Description)
	{	int i;
		for (i = 0; i < a->wsrfbf__BaseFaultType::__sizeDescription; i++)
			if (a->wsrfbf__BaseFaultType::Description[i].soap_out(soap, "wsrfbf:Description", -1, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &(a->wsrfbf__BaseFaultType::FaultCause), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__SubscribeCreationFailedFaultType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__SubscribeCreationFailedFaultType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__SubscribeCreationFailedFaultType * SOAP_FMAC4 soap_in_wsnt__SubscribeCreationFailedFaultType(struct soap *soap, const char *tag, wsnt__SubscribeCreationFailedFaultType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__SubscribeCreationFailedFaultType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType, sizeof(wsnt__SubscribeCreationFailedFaultType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__SubscribeCreationFailedFaultType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsrfbf__BaseFaultType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item3 = 1;
	struct soap_blist *soap_blist___any2 = NULL;
	size_t soap_flag_Timestamp2 = 1;
	size_t soap_flag_Originator2 = 1;
	size_t soap_flag_ErrorCode2 = 1;
	struct soap_blist *soap_blist_Description2 = NULL;
	size_t soap_flag_FaultCause2 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Timestamp2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &(a->wsrfbf__BaseFaultType::Timestamp), "xsd:dateTime"))
				{	soap_flag_Timestamp2--;
					continue;
				}
			if (soap_flag_Originator2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &(a->wsrfbf__BaseFaultType::Originator), "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator2--;
					continue;
				}
			if (soap_flag_ErrorCode2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &(a->wsrfbf__BaseFaultType::ErrorCode), ""))
				{	soap_flag_ErrorCode2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->wsrfbf__BaseFaultType::Description == NULL)
				{	if (soap_blist_Description2 == NULL)
						soap_blist_Description2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description2, sizeof(_wsrfbf__BaseFaultType_Description));
					if (a->wsrfbf__BaseFaultType::Description == NULL)
						return NULL;
					SOAP_PLACEMENT_NEW(a->wsrfbf__BaseFaultType::Description, _wsrfbf__BaseFaultType_Description);
					a->wsrfbf__BaseFaultType::Description->soap_default(soap);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->wsrfbf__BaseFaultType::Description, ""))
				{	a->wsrfbf__BaseFaultType::__sizeDescription++;
					a->wsrfbf__BaseFaultType::Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause2 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &(a->wsrfbf__BaseFaultType::FaultCause), ""))
				{	soap_flag_FaultCause2--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->wsrfbf__BaseFaultType::__any == NULL)
				{	if (soap_blist___any2 == NULL)
						soap_blist___any2 = soap_new_block(soap);
					a->wsrfbf__BaseFaultType::__any = (char *)soap_push_block(soap, soap_blist___any2, sizeof(char));
					if (a->wsrfbf__BaseFaultType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsrfbf__BaseFaultType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsrfbf__BaseFaultType::__any, "xsd:byte"))
				{	a->wsrfbf__BaseFaultType::__size++;
					a->wsrfbf__BaseFaultType::__any = NULL;
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
		if (a->wsrfbf__BaseFaultType::__any)
			soap_pop_block(soap, soap_blist___any2);
		if (a->wsrfbf__BaseFaultType::__size)
			a->wsrfbf__BaseFaultType::__any = (char *)soap_save_block(soap, soap_blist___any2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::__any = NULL;
			if (soap_blist___any2)
				soap_end_block(soap, soap_blist___any2);
		}
		if (a->wsrfbf__BaseFaultType::Description)
			soap_pop_block(soap, soap_blist_Description2);
		if (a->wsrfbf__BaseFaultType::__sizeDescription)
			a->wsrfbf__BaseFaultType::Description = (_wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description2, NULL, 1);
		else
		{	a->wsrfbf__BaseFaultType::Description = NULL;
			if (soap_blist_Description2)
				soap_end_block(soap, soap_blist_Description2);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__SubscribeCreationFailedFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType, 0, sizeof(wsnt__SubscribeCreationFailedFaultType), 0, soap_copy_wsnt__SubscribeCreationFailedFaultType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp2 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__SubscribeCreationFailedFaultType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType);
	if (this->soap_out(soap, tag?tag:"wsnt:SubscribeCreationFailedFaultType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__SubscribeCreationFailedFaultType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__SubscribeCreationFailedFaultType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__SubscribeCreationFailedFaultType * SOAP_FMAC4 soap_get_wsnt__SubscribeCreationFailedFaultType(struct soap *soap, wsnt__SubscribeCreationFailedFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__SubscribeCreationFailedFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__SubscribeCreationFailedFaultType * SOAP_FMAC2 soap_instantiate_wsnt__SubscribeCreationFailedFaultType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__SubscribeCreationFailedFaultType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__SubscribeCreationFailedFaultType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__SubscribeCreationFailedFaultType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__SubscribeCreationFailedFaultType %p -> %p\n", q, p));
	*(wsnt__SubscribeCreationFailedFaultType*)p = *(wsnt__SubscribeCreationFailedFaultType*)q;
}

void wsnt__NotificationMessageHolderType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsnt__NotificationMessageHolderType::SubscriptionReference = NULL;
	this->wsnt__NotificationMessageHolderType::Topic = NULL;
	this->wsnt__NotificationMessageHolderType::ProducerReference = NULL;
	this->wsnt__NotificationMessageHolderType::Message._wsnt__NotificationMessageHolderType_Message::soap_default(soap);
}

void wsnt__NotificationMessageHolderType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &this->wsnt__NotificationMessageHolderType::SubscriptionReference);
	soap_serialize_PointerTowsnt__TopicExpressionType(soap, &this->wsnt__NotificationMessageHolderType::Topic);
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &this->wsnt__NotificationMessageHolderType::ProducerReference);
	this->wsnt__NotificationMessageHolderType::Message.soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__NotificationMessageHolderType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__NotificationMessageHolderType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__NotificationMessageHolderType(struct soap *soap, const char *tag, int id, const wsnt__NotificationMessageHolderType *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__NotificationMessageHolderType), "wsnt:NotificationMessageHolderType"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", -1, &(a->wsnt__NotificationMessageHolderType::SubscriptionReference), ""))
		return soap->error;
	if (soap_out_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", -1, &(a->wsnt__NotificationMessageHolderType::Topic), ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsnt:ProducerReference", -1, &(a->wsnt__NotificationMessageHolderType::ProducerReference), ""))
		return soap->error;
	if ((a->wsnt__NotificationMessageHolderType::Message).soap_out(soap, "wsnt:Message", -1, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *wsnt__NotificationMessageHolderType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__NotificationMessageHolderType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__NotificationMessageHolderType * SOAP_FMAC4 soap_in_wsnt__NotificationMessageHolderType(struct soap *soap, const char *tag, wsnt__NotificationMessageHolderType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__NotificationMessageHolderType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__NotificationMessageHolderType, sizeof(wsnt__NotificationMessageHolderType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__NotificationMessageHolderType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__NotificationMessageHolderType *)a->soap_in(soap, tag, type);
		}
	}
	size_t soap_flag___item2 = 1;
	size_t soap_flag_SubscriptionReference1 = 1;
	size_t soap_flag_Topic1 = 1;
	size_t soap_flag_ProducerReference1 = 1;
	size_t soap_flag_Message1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_SubscriptionReference1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", &(a->wsnt__NotificationMessageHolderType::SubscriptionReference), "wsa5:EndpointReferenceType"))
				{	soap_flag_SubscriptionReference1--;
					continue;
				}
			if (soap_flag_Topic1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", &(a->wsnt__NotificationMessageHolderType::Topic), "wsnt:TopicExpressionType"))
				{	soap_flag_Topic1--;
					continue;
				}
			if (soap_flag_ProducerReference1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsnt:ProducerReference", &(a->wsnt__NotificationMessageHolderType::ProducerReference), "wsa5:EndpointReferenceType"))
				{	soap_flag_ProducerReference1--;
					continue;
				}
			if (soap_flag_Message1 && soap->error == SOAP_TAG_MISMATCH)
				if ((a->wsnt__NotificationMessageHolderType::Message).soap_in(soap, "wsnt:Message", ""))
				{	soap_flag_Message1--;
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
	{	a = (wsnt__NotificationMessageHolderType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__NotificationMessageHolderType, 0, sizeof(wsnt__NotificationMessageHolderType), 0, soap_copy_wsnt__NotificationMessageHolderType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Message1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int wsnt__NotificationMessageHolderType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__NotificationMessageHolderType);
	if (this->soap_out(soap, tag?tag:"wsnt:NotificationMessageHolderType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__NotificationMessageHolderType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__NotificationMessageHolderType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__NotificationMessageHolderType * SOAP_FMAC4 soap_get_wsnt__NotificationMessageHolderType(struct soap *soap, wsnt__NotificationMessageHolderType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__NotificationMessageHolderType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__NotificationMessageHolderType * SOAP_FMAC2 soap_instantiate_wsnt__NotificationMessageHolderType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__NotificationMessageHolderType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__NotificationMessageHolderType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__NotificationMessageHolderType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__NotificationMessageHolderType %p -> %p\n", q, p));
	*(wsnt__NotificationMessageHolderType*)p = *(wsnt__NotificationMessageHolderType*)q;
}

void wsnt__SubscriptionPolicyType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsnt__SubscriptionPolicyType::__size = 0;
	this->wsnt__SubscriptionPolicyType::__any = NULL;
}

void wsnt__SubscriptionPolicyType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__SubscriptionPolicyType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__SubscriptionPolicyType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__SubscriptionPolicyType(struct soap *soap, const char *tag, int id, const wsnt__SubscriptionPolicyType *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__SubscriptionPolicyType), "wsnt:SubscriptionPolicyType"))
		return soap->error;
	/* transient soap skipped */
	if (a->wsnt__SubscriptionPolicyType::__any)
	{	int i;
		for (i = 0; i < a->wsnt__SubscriptionPolicyType::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->wsnt__SubscriptionPolicyType::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *wsnt__SubscriptionPolicyType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__SubscriptionPolicyType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__SubscriptionPolicyType * SOAP_FMAC4 soap_in_wsnt__SubscriptionPolicyType(struct soap *soap, const char *tag, wsnt__SubscriptionPolicyType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__SubscriptionPolicyType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__SubscriptionPolicyType, sizeof(wsnt__SubscriptionPolicyType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__SubscriptionPolicyType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__SubscriptionPolicyType *)a->soap_in(soap, tag, type);
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
			{	if (a->wsnt__SubscriptionPolicyType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wsnt__SubscriptionPolicyType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->wsnt__SubscriptionPolicyType::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->wsnt__SubscriptionPolicyType::__any);
				}
				if (soap_in_byte(soap, "-any", a->wsnt__SubscriptionPolicyType::__any, "xsd:byte"))
				{	a->wsnt__SubscriptionPolicyType::__size++;
					a->wsnt__SubscriptionPolicyType::__any = NULL;
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
		if (a->wsnt__SubscriptionPolicyType::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->wsnt__SubscriptionPolicyType::__size)
			a->wsnt__SubscriptionPolicyType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wsnt__SubscriptionPolicyType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__SubscriptionPolicyType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__SubscriptionPolicyType, 0, sizeof(wsnt__SubscriptionPolicyType), 0, soap_copy_wsnt__SubscriptionPolicyType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wsnt__SubscriptionPolicyType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__SubscriptionPolicyType);
	if (this->soap_out(soap, tag?tag:"wsnt:SubscriptionPolicyType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__SubscriptionPolicyType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__SubscriptionPolicyType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__SubscriptionPolicyType * SOAP_FMAC4 soap_get_wsnt__SubscriptionPolicyType(struct soap *soap, wsnt__SubscriptionPolicyType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__SubscriptionPolicyType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__SubscriptionPolicyType * SOAP_FMAC2 soap_instantiate_wsnt__SubscriptionPolicyType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__SubscriptionPolicyType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__SubscriptionPolicyType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__SubscriptionPolicyType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__SubscriptionPolicyType %p -> %p\n", q, p));
	*(wsnt__SubscriptionPolicyType*)p = *(wsnt__SubscriptionPolicyType*)q;
}

void wsnt__FilterType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsnt__FilterType::__size = 0;
	this->wsnt__FilterType::__any = NULL;
}

void wsnt__FilterType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__FilterType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__FilterType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__FilterType(struct soap *soap, const char *tag, int id, const wsnt__FilterType *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__FilterType), "wsnt:FilterType"))
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

void *wsnt__FilterType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__FilterType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__FilterType * SOAP_FMAC4 soap_in_wsnt__FilterType(struct soap *soap, const char *tag, wsnt__FilterType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__FilterType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__FilterType, sizeof(wsnt__FilterType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__FilterType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__FilterType *)a->soap_in(soap, tag, type);
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
			{	if (a->wsnt__FilterType::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->wsnt__FilterType::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
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
			if (soap_flag___item2 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-item", &(a->xsd__anyType::__item)))
				{	soap_flag___item2--;
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
			soap_pop_block(soap, soap_blist___any1);
		if (a->wsnt__FilterType::__size)
			a->wsnt__FilterType::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->wsnt__FilterType::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (wsnt__FilterType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__FilterType, 0, sizeof(wsnt__FilterType), 0, soap_copy_wsnt__FilterType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wsnt__FilterType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__FilterType);
	if (this->soap_out(soap, tag?tag:"wsnt:FilterType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__FilterType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__FilterType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__FilterType * SOAP_FMAC4 soap_get_wsnt__FilterType(struct soap *soap, wsnt__FilterType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__FilterType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__FilterType * SOAP_FMAC2 soap_instantiate_wsnt__FilterType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__FilterType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__FilterType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__FilterType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__FilterType %p -> %p\n", q, p));
	*(wsnt__FilterType*)p = *(wsnt__FilterType*)q;
}

void wsnt__TopicExpressionType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsnt__TopicExpressionType::__any = NULL;
	soap_default_xsd__anyURI(soap, &this->wsnt__TopicExpressionType::Dialect);
	this->wsnt__TopicExpressionType::__anyAttribute = NULL;
	this->wsnt__TopicExpressionType::__mixed = NULL;
}

void wsnt__TopicExpressionType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__TopicExpressionType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__TopicExpressionType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__TopicExpressionType(struct soap *soap, const char *tag, int id, const wsnt__TopicExpressionType *a, const char *type)
{
	if (((wsnt__TopicExpressionType*)a)->Dialect)
		soap_set_attr(soap, "Dialect", ((wsnt__TopicExpressionType*)a)->Dialect, 1);
	if (((wsnt__TopicExpressionType*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((wsnt__TopicExpressionType*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__TopicExpressionType), "wsnt:TopicExpressionType"))
		return soap->error;
	/* transient soap skipped */
	soap_outliteral(soap, "-any", &(a->wsnt__TopicExpressionType::__any), NULL);
	soap_outliteral(soap, "-mixed", &(a->wsnt__TopicExpressionType::__mixed), NULL);
	return soap_element_end_out(soap, tag);
}

void *wsnt__TopicExpressionType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__TopicExpressionType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__TopicExpressionType * SOAP_FMAC4 soap_in_wsnt__TopicExpressionType(struct soap *soap, const char *tag, wsnt__TopicExpressionType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__TopicExpressionType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__TopicExpressionType, sizeof(wsnt__TopicExpressionType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__TopicExpressionType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__TopicExpressionType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Dialect", 1), &((wsnt__TopicExpressionType*)a)->Dialect, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((wsnt__TopicExpressionType*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag___any1 = 1;
	size_t soap_flag___mixed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->wsnt__TopicExpressionType::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap_flag___mixed1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &(a->wsnt__TopicExpressionType::__mixed)))
				{	soap_flag___mixed1--;
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
	{	a = (wsnt__TopicExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__TopicExpressionType, 0, sizeof(wsnt__TopicExpressionType), 0, soap_copy_wsnt__TopicExpressionType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wsnt__TopicExpressionType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__TopicExpressionType);
	if (this->soap_out(soap, tag?tag:"wsnt:TopicExpressionType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__TopicExpressionType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__TopicExpressionType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__TopicExpressionType * SOAP_FMAC4 soap_get_wsnt__TopicExpressionType(struct soap *soap, wsnt__TopicExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__TopicExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__TopicExpressionType * SOAP_FMAC2 soap_instantiate_wsnt__TopicExpressionType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__TopicExpressionType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__TopicExpressionType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__TopicExpressionType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__TopicExpressionType %p -> %p\n", q, p));
	*(wsnt__TopicExpressionType*)p = *(wsnt__TopicExpressionType*)q;
}

void wsnt__QueryExpressionType::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->wsnt__QueryExpressionType::__any = NULL;
	soap_default_xsd__anyURI(soap, &this->wsnt__QueryExpressionType::Dialect);
	this->wsnt__QueryExpressionType::__mixed = NULL;
}

void wsnt__QueryExpressionType::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int wsnt__QueryExpressionType::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_wsnt__QueryExpressionType(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__QueryExpressionType(struct soap *soap, const char *tag, int id, const wsnt__QueryExpressionType *a, const char *type)
{
	if (((wsnt__QueryExpressionType*)a)->Dialect)
		soap_set_attr(soap, "Dialect", ((wsnt__QueryExpressionType*)a)->Dialect, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__QueryExpressionType), "wsnt:QueryExpressionType"))
		return soap->error;
	/* transient soap skipped */
	soap_outliteral(soap, "-any", &(a->wsnt__QueryExpressionType::__any), NULL);
	soap_outliteral(soap, "-mixed", &(a->wsnt__QueryExpressionType::__mixed), NULL);
	return soap_element_end_out(soap, tag);
}

void *wsnt__QueryExpressionType::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_wsnt__QueryExpressionType(soap, tag, this, type);
}

SOAP_FMAC3 wsnt__QueryExpressionType * SOAP_FMAC4 soap_in_wsnt__QueryExpressionType(struct soap *soap, const char *tag, wsnt__QueryExpressionType *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (wsnt__QueryExpressionType *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__QueryExpressionType, sizeof(wsnt__QueryExpressionType), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_wsnt__QueryExpressionType)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (wsnt__QueryExpressionType *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "Dialect", 1), &((wsnt__QueryExpressionType*)a)->Dialect, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag___any1 = 1;
	size_t soap_flag___mixed1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag___any1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &(a->wsnt__QueryExpressionType::__any)))
				{	soap_flag___any1--;
					continue;
				}
			if (soap_flag___mixed1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &(a->wsnt__QueryExpressionType::__mixed)))
				{	soap_flag___mixed1--;
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
	{	a = (wsnt__QueryExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__QueryExpressionType, 0, sizeof(wsnt__QueryExpressionType), 0, soap_copy_wsnt__QueryExpressionType);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int wsnt__QueryExpressionType::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_wsnt__QueryExpressionType);
	if (this->soap_out(soap, tag?tag:"wsnt:QueryExpressionType", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *wsnt__QueryExpressionType::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_wsnt__QueryExpressionType(soap, this, tag, type);
}

SOAP_FMAC3 wsnt__QueryExpressionType * SOAP_FMAC4 soap_get_wsnt__QueryExpressionType(struct soap *soap, wsnt__QueryExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__QueryExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 wsnt__QueryExpressionType * SOAP_FMAC2 soap_instantiate_wsnt__QueryExpressionType(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_wsnt__QueryExpressionType(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_wsnt__QueryExpressionType, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_wsnt__QueryExpressionType(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying wsnt__QueryExpressionType %p -> %p\n", q, p));
	*(wsnt__QueryExpressionType*)p = *(wsnt__QueryExpressionType*)q;
}

void _tt__Message::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->_tt__Message::Source = NULL;
	this->_tt__Message::Key = NULL;
	this->_tt__Message::Data = NULL;
	this->_tt__Message::Extension = NULL;
	soap_default_time(soap, &this->_tt__Message::UtcTime);
	this->_tt__Message::PropertyOperation = NULL;
	this->_tt__Message::__anyAttribute = NULL;
	/* transient soap skipped */
}

void _tt__Message::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemList(soap, &this->_tt__Message::Source);
	soap_serialize_PointerTott__ItemList(soap, &this->_tt__Message::Key);
	soap_serialize_PointerTott__ItemList(soap, &this->_tt__Message::Data);
	soap_serialize_PointerTott__MessageExtension(soap, &this->_tt__Message::Extension);
	/* transient soap skipped */
#endif
}

int _tt__Message::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out__tt__Message(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Message(struct soap *soap, const char *tag, int id, const _tt__Message *a, const char *type)
{
	soap_set_attr(soap, "UtcTime", soap_dateTime2s(soap, ((_tt__Message*)a)->UtcTime), 1);
	if (((_tt__Message*)a)->PropertyOperation)
		soap_set_attr(soap, "PropertyOperation", soap_tt__PropertyOperation2s(soap, *((_tt__Message*)a)->PropertyOperation), 1);
	if (((_tt__Message*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((_tt__Message*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Message), type))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Source", -1, &(a->_tt__Message::Source), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Key", -1, &(a->_tt__Message::Key), ""))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Data", -1, &(a->_tt__Message::Data), ""))
		return soap->error;
	if (soap_out_PointerTott__MessageExtension(soap, "tt:Extension", -1, &(a->_tt__Message::Extension), ""))
		return soap->error;
	/* transient soap skipped */
	return soap_element_end_out(soap, tag);
}

void *_tt__Message::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in__tt__Message(soap, tag, this, type);
}

SOAP_FMAC3 _tt__Message * SOAP_FMAC4 soap_in__tt__Message(struct soap *soap, const char *tag, _tt__Message *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (_tt__Message *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Message, sizeof(_tt__Message), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE__tt__Message)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (_tt__Message *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2dateTime(soap, soap_attr_value(soap, "UtcTime", 1), &((_tt__Message*)a)->UtcTime))
		return NULL;
	{	const char *t = soap_attr_value(soap, "PropertyOperation", 0);
		if (t)
		{
			if (!(((_tt__Message*)a)->PropertyOperation = (enum tt__PropertyOperation *)soap_malloc(soap, sizeof(enum tt__PropertyOperation))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2tt__PropertyOperation(soap, t, ((_tt__Message*)a)->PropertyOperation))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((_tt__Message*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag_Source1 = 1;
	size_t soap_flag_Key1 = 1;
	size_t soap_flag_Data1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Source1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Source", &(a->_tt__Message::Source), "tt:ItemList"))
				{	soap_flag_Source1--;
					continue;
				}
			if (soap_flag_Key1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Key", &(a->_tt__Message::Key), "tt:ItemList"))
				{	soap_flag_Key1--;
					continue;
				}
			if (soap_flag_Data1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Data", &(a->_tt__Message::Data), "tt:ItemList"))
				{	soap_flag_Data1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MessageExtension(soap, "tt:Extension", &(a->_tt__Message::Extension), "tt:MessageExtension"))
				{	soap_flag_Extension1--;
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
	{	a = (_tt__Message *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Message, 0, sizeof(_tt__Message), 0, soap_copy__tt__Message);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int _tt__Message::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE__tt__Message);
	if (this->soap_out(soap, tag?tag:"tt:Message", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *_tt__Message::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get__tt__Message(soap, this, tag, type);
}

SOAP_FMAC3 _tt__Message * SOAP_FMAC4 soap_get__tt__Message(struct soap *soap, _tt__Message *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Message(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 _tt__Message * SOAP_FMAC2 soap_instantiate__tt__Message(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate__tt__Message(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE__tt__Message, n, soap_fdelete);
	if (!cp)
		return NULL;
	if (n < 0)
	{	cp->ptr = (void*)SOAP_NEW(_tt__Message);
		if (size)
			*size = sizeof(_tt__Message);
		((_tt__Message*)cp->ptr)->soap = soap;
	}
	else
	{	cp->ptr = (void*)SOAP_NEW_ARRAY(_tt__Message, n);
		if (size)
			*size = n * sizeof(_tt__Message);
		if (cp->ptr)
			for (int i = 0; i < n; i++)
				((_tt__Message*)cp->ptr)[i].soap = soap;
	}
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
	if (!cp->ptr)
		soap->error = SOAP_EOM;
	return (_tt__Message*)cp->ptr;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_copy__tt__Message(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying _tt__Message %p -> %p\n", q, p));
	*(_tt__Message*)p = *(_tt__Message*)q;
}

void tt__ActionEngineEventPayloadExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ActionEngineEventPayloadExtension::__size = 0;
	this->tt__ActionEngineEventPayloadExtension::__any = NULL;
	this->tt__ActionEngineEventPayloadExtension::__anyAttribute = NULL;
}

void tt__ActionEngineEventPayloadExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ActionEngineEventPayloadExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ActionEngineEventPayloadExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ActionEngineEventPayloadExtension(struct soap *soap, const char *tag, int id, const tt__ActionEngineEventPayloadExtension *a, const char *type)
{
	if (((tt__ActionEngineEventPayloadExtension*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ActionEngineEventPayloadExtension*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ActionEngineEventPayloadExtension), "tt:ActionEngineEventPayloadExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__ActionEngineEventPayloadExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__ActionEngineEventPayloadExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__ActionEngineEventPayloadExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__ActionEngineEventPayloadExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ActionEngineEventPayloadExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__ActionEngineEventPayloadExtension * SOAP_FMAC4 soap_in_tt__ActionEngineEventPayloadExtension(struct soap *soap, const char *tag, tt__ActionEngineEventPayloadExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ActionEngineEventPayloadExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ActionEngineEventPayloadExtension, sizeof(tt__ActionEngineEventPayloadExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ActionEngineEventPayloadExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ActionEngineEventPayloadExtension *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ActionEngineEventPayloadExtension*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__ActionEngineEventPayloadExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__ActionEngineEventPayloadExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__ActionEngineEventPayloadExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__ActionEngineEventPayloadExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__ActionEngineEventPayloadExtension::__any, "xsd:byte"))
				{	a->tt__ActionEngineEventPayloadExtension::__size++;
					a->tt__ActionEngineEventPayloadExtension::__any = NULL;
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
		if (a->tt__ActionEngineEventPayloadExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__ActionEngineEventPayloadExtension::__size)
			a->tt__ActionEngineEventPayloadExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__ActionEngineEventPayloadExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__ActionEngineEventPayloadExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ActionEngineEventPayloadExtension, 0, sizeof(tt__ActionEngineEventPayloadExtension), 0, soap_copy_tt__ActionEngineEventPayloadExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ActionEngineEventPayloadExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ActionEngineEventPayloadExtension);
	if (this->soap_out(soap, tag?tag:"tt:ActionEngineEventPayloadExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ActionEngineEventPayloadExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ActionEngineEventPayloadExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__ActionEngineEventPayloadExtension * SOAP_FMAC4 soap_get_tt__ActionEngineEventPayloadExtension(struct soap *soap, tt__ActionEngineEventPayloadExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ActionEngineEventPayloadExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ActionEngineEventPayloadExtension * SOAP_FMAC2 soap_instantiate_tt__ActionEngineEventPayloadExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ActionEngineEventPayloadExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ActionEngineEventPayloadExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ActionEngineEventPayloadExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ActionEngineEventPayloadExtension %p -> %p\n", q, p));
	*(tt__ActionEngineEventPayloadExtension*)p = *(tt__ActionEngineEventPayloadExtension*)q;
}

void tt__ActionEngineEventPayload::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__ActionEngineEventPayload::RequestInfo = NULL;
	this->tt__ActionEngineEventPayload::ResponseInfo = NULL;
	this->tt__ActionEngineEventPayload::Fault = NULL;
	this->tt__ActionEngineEventPayload::Extension = NULL;
	this->tt__ActionEngineEventPayload::__anyAttribute = NULL;
}

void tt__ActionEngineEventPayload::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_PointerToSOAP_ENV__Envelope(soap, &this->tt__ActionEngineEventPayload::RequestInfo);
	soap_serialize_PointerToSOAP_ENV__Envelope(soap, &this->tt__ActionEngineEventPayload::ResponseInfo);
	soap_serialize_PointerToSOAP_ENV__Fault(soap, &this->tt__ActionEngineEventPayload::Fault);
	soap_serialize_PointerTott__ActionEngineEventPayloadExtension(soap, &this->tt__ActionEngineEventPayload::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__ActionEngineEventPayload::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__ActionEngineEventPayload(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ActionEngineEventPayload(struct soap *soap, const char *tag, int id, const tt__ActionEngineEventPayload *a, const char *type)
{
	if (((tt__ActionEngineEventPayload*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__ActionEngineEventPayload*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ActionEngineEventPayload), "tt:ActionEngineEventPayload"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_PointerToSOAP_ENV__Envelope(soap, "tt:RequestInfo", -1, &(a->tt__ActionEngineEventPayload::RequestInfo), ""))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Envelope(soap, "tt:ResponseInfo", -1, &(a->tt__ActionEngineEventPayload::ResponseInfo), ""))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Fault(soap, "tt:Fault", -1, &(a->tt__ActionEngineEventPayload::Fault), ""))
		return soap->error;
	if (soap_out_PointerTott__ActionEngineEventPayloadExtension(soap, "tt:Extension", -1, &(a->tt__ActionEngineEventPayload::Extension), ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

void *tt__ActionEngineEventPayload::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__ActionEngineEventPayload(soap, tag, this, type);
}

SOAP_FMAC3 tt__ActionEngineEventPayload * SOAP_FMAC4 soap_in_tt__ActionEngineEventPayload(struct soap *soap, const char *tag, tt__ActionEngineEventPayload *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__ActionEngineEventPayload *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ActionEngineEventPayload, sizeof(tt__ActionEngineEventPayload), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__ActionEngineEventPayload)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__ActionEngineEventPayload *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__ActionEngineEventPayload*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_RequestInfo1 = 1;
	size_t soap_flag_ResponseInfo1 = 1;
	size_t soap_flag_Fault1 = 1;
	size_t soap_flag_Extension1 = 1;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_RequestInfo1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Envelope(soap, "tt:RequestInfo", &(a->tt__ActionEngineEventPayload::RequestInfo), ""))
				{	soap_flag_RequestInfo1--;
					continue;
				}
			if (soap_flag_ResponseInfo1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Envelope(soap, "tt:ResponseInfo", &(a->tt__ActionEngineEventPayload::ResponseInfo), ""))
				{	soap_flag_ResponseInfo1--;
					continue;
				}
			if (soap_flag_Fault1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Fault(soap, "tt:Fault", &(a->tt__ActionEngineEventPayload::Fault), ""))
				{	soap_flag_Fault1--;
					continue;
				}
			if (soap_flag_Extension1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ActionEngineEventPayloadExtension(soap, "tt:Extension", &(a->tt__ActionEngineEventPayload::Extension), "tt:ActionEngineEventPayloadExtension"))
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
	{	a = (tt__ActionEngineEventPayload *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ActionEngineEventPayload, 0, sizeof(tt__ActionEngineEventPayload), 0, soap_copy_tt__ActionEngineEventPayload);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__ActionEngineEventPayload::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__ActionEngineEventPayload);
	if (this->soap_out(soap, tag?tag:"tt:ActionEngineEventPayload", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__ActionEngineEventPayload::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__ActionEngineEventPayload(soap, this, tag, type);
}

SOAP_FMAC3 tt__ActionEngineEventPayload * SOAP_FMAC4 soap_get_tt__ActionEngineEventPayload(struct soap *soap, tt__ActionEngineEventPayload *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ActionEngineEventPayload(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__ActionEngineEventPayload * SOAP_FMAC2 soap_instantiate_tt__ActionEngineEventPayload(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__ActionEngineEventPayload(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__ActionEngineEventPayload, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__ActionEngineEventPayload(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__ActionEngineEventPayload %p -> %p\n", q, p));
	*(tt__ActionEngineEventPayload*)p = *(tt__ActionEngineEventPayload*)q;
}

void tt__AnalyticsState::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_string(soap, &this->tt__AnalyticsState::Error);
	soap_default_string(soap, &this->tt__AnalyticsState::State);
	this->tt__AnalyticsState::__size = 0;
	this->tt__AnalyticsState::__any = NULL;
	this->tt__AnalyticsState::__anyAttribute = NULL;
}

void tt__AnalyticsState::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_string(soap, &this->tt__AnalyticsState::Error);
	soap_serialize_string(soap, &this->tt__AnalyticsState::State);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsState::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsState(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsState(struct soap *soap, const char *tag, int id, const tt__AnalyticsState *a, const char *type)
{
	if (((tt__AnalyticsState*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsState*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsState), "tt:AnalyticsState"))
		return soap->error;
	/* transient soap skipped */
	if (soap_out_string(soap, "tt:Error", -1, &(a->tt__AnalyticsState::Error), ""))
		return soap->error;
	if (a->tt__AnalyticsState::State)
	{	if (soap_out_string(soap, "tt:State", -1, &a->tt__AnalyticsState::State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->tt__AnalyticsState::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsState::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsState::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsState::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsState(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsState * SOAP_FMAC4 soap_in_tt__AnalyticsState(struct soap *soap, const char *tag, tt__AnalyticsState *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsState *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsState, sizeof(tt__AnalyticsState), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsState)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsState *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsState*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_Error1 = 1;
	size_t soap_flag_State1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_Error1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &(a->tt__AnalyticsState::Error), "xsd:string"))
				{	soap_flag_Error1--;
					continue;
				}
			if (soap_flag_State1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:State", &(a->tt__AnalyticsState::State), "xsd:string"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsState::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsState::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsState::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsState::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsState::__any, "xsd:byte"))
				{	a->tt__AnalyticsState::__size++;
					a->tt__AnalyticsState::__any = NULL;
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
		if (a->tt__AnalyticsState::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsState::__size)
			a->tt__AnalyticsState::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsState::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsState, 0, sizeof(tt__AnalyticsState), 0, soap_copy_tt__AnalyticsState);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsState::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsState);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsState", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsState::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsState(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsState * SOAP_FMAC4 soap_get_tt__AnalyticsState(struct soap *soap, tt__AnalyticsState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsState * SOAP_FMAC2 soap_instantiate_tt__AnalyticsState(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsState(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsState, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsState(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsState %p -> %p\n", q, p));
	*(tt__AnalyticsState*)p = *(tt__AnalyticsState*)q;
}

void tt__AnalyticsStateInformation::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__AnalyticsStateInformation::AnalyticsEngineControlToken);
	this->tt__AnalyticsStateInformation::State = NULL;
	this->tt__AnalyticsStateInformation::__size = 0;
	this->tt__AnalyticsStateInformation::__any = NULL;
	this->tt__AnalyticsStateInformation::__anyAttribute = NULL;
}

void tt__AnalyticsStateInformation::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__AnalyticsStateInformation::AnalyticsEngineControlToken);
	soap_serialize_PointerTott__AnalyticsState(soap, &this->tt__AnalyticsStateInformation::State);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsStateInformation::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsStateInformation(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsStateInformation(struct soap *soap, const char *tag, int id, const tt__AnalyticsStateInformation *a, const char *type)
{
	if (((tt__AnalyticsStateInformation*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsStateInformation*)a)->__anyAttribute, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsStateInformation), "tt:AnalyticsStateInformation"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__AnalyticsStateInformation::AnalyticsEngineControlToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:AnalyticsEngineControlToken", -1, &a->tt__AnalyticsStateInformation::AnalyticsEngineControlToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineControlToken"))
		return soap->error;
	if (a->tt__AnalyticsStateInformation::State)
	{	if (soap_out_PointerTott__AnalyticsState(soap, "tt:State", -1, &a->tt__AnalyticsStateInformation::State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->tt__AnalyticsStateInformation::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsStateInformation::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsStateInformation::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsStateInformation::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsStateInformation(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsStateInformation * SOAP_FMAC4 soap_in_tt__AnalyticsStateInformation(struct soap *soap, const char *tag, tt__AnalyticsStateInformation *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsStateInformation *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsStateInformation, sizeof(tt__AnalyticsStateInformation), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsStateInformation)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsStateInformation *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsStateInformation*)a)->__anyAttribute, 0, -1))
		return NULL;
	size_t soap_flag___item2 = 1;
	size_t soap_flag_AnalyticsEngineControlToken1 = 1;
	size_t soap_flag_State1 = 1;
	struct soap_blist *soap_blist___any1 = NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			/* transient soap skipped */
			if (soap_flag_AnalyticsEngineControlToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AnalyticsEngineControlToken", &(a->tt__AnalyticsStateInformation::AnalyticsEngineControlToken), "tt:ReferenceToken"))
				{	soap_flag_AnalyticsEngineControlToken1--;
					continue;
				}
			if (soap_flag_State1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsState(soap, "tt:State", &(a->tt__AnalyticsStateInformation::State), "tt:AnalyticsState"))
				{	soap_flag_State1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsStateInformation::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsStateInformation::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsStateInformation::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsStateInformation::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsStateInformation::__any, "xsd:byte"))
				{	a->tt__AnalyticsStateInformation::__size++;
					a->tt__AnalyticsStateInformation::__any = NULL;
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
		if (a->tt__AnalyticsStateInformation::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsStateInformation::__size)
			a->tt__AnalyticsStateInformation::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsStateInformation::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsStateInformation, 0, sizeof(tt__AnalyticsStateInformation), 0, soap_copy_tt__AnalyticsStateInformation);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AnalyticsEngineControlToken1 > 0 || soap_flag_State1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsStateInformation::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsStateInformation);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsStateInformation", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsStateInformation::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsStateInformation(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsStateInformation * SOAP_FMAC4 soap_get_tt__AnalyticsStateInformation(struct soap *soap, tt__AnalyticsStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsStateInformation * SOAP_FMAC2 soap_instantiate_tt__AnalyticsStateInformation(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsStateInformation(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsStateInformation, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsStateInformation(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsStateInformation %p -> %p\n", q, p));
	*(tt__AnalyticsStateInformation*)p = *(tt__AnalyticsStateInformation*)q;
}

void tt__AnalyticsEngineControl::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->tt__ConfigurationEntity::soap_default(soap);
	this->xsd__anyType::soap_default(soap);
	soap_default_tt__ReferenceToken(soap, &this->tt__AnalyticsEngineControl::EngineToken);
	soap_default_tt__ReferenceToken(soap, &this->tt__AnalyticsEngineControl::EngineConfigToken);
	this->tt__AnalyticsEngineControl::__sizeInputToken = 0;
	this->tt__AnalyticsEngineControl::InputToken = NULL;
	this->tt__AnalyticsEngineControl::__sizeReceiverToken = 0;
	this->tt__AnalyticsEngineControl::ReceiverToken = NULL;
	this->tt__AnalyticsEngineControl::Multicast = NULL;
	this->tt__AnalyticsEngineControl::Subscription = NULL;
	soap_default_tt__ModeOfOperation(soap, &this->tt__AnalyticsEngineControl::Mode);
	this->tt__AnalyticsEngineControl::__size = 0;
	this->tt__AnalyticsEngineControl::__any = NULL;
	this->tt__AnalyticsEngineControl::__anyAttribute = NULL;
}

void tt__AnalyticsEngineControl::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &this->tt__AnalyticsEngineControl::EngineToken);
	soap_serialize_tt__ReferenceToken(soap, &this->tt__AnalyticsEngineControl::EngineConfigToken);
	if (this->tt__AnalyticsEngineControl::InputToken)
	{	int i;
		for (i = 0; i < this->tt__AnalyticsEngineControl::__sizeInputToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, this->tt__AnalyticsEngineControl::InputToken + i);
		}
	}
	if (this->tt__AnalyticsEngineControl::ReceiverToken)
	{	int i;
		for (i = 0; i < this->tt__AnalyticsEngineControl::__sizeReceiverToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, this->tt__AnalyticsEngineControl::ReceiverToken + i);
		}
	}
	soap_serialize_PointerTott__MulticastConfiguration(soap, &this->tt__AnalyticsEngineControl::Multicast);
	soap_serialize_PointerTott__Config(soap, &this->tt__AnalyticsEngineControl::Subscription);
	this->tt__ConfigurationEntity::soap_serialize(soap);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__AnalyticsEngineControl::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__AnalyticsEngineControl(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineControl(struct soap *soap, const char *tag, int id, const tt__AnalyticsEngineControl *a, const char *type)
{
	if (((tt__AnalyticsEngineControl*)a)->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", ((tt__AnalyticsEngineControl*)a)->__anyAttribute, 1);
	if (((tt__ConfigurationEntity*)a)->token)
		soap_set_attr(soap, "token", ((tt__ConfigurationEntity*)a)->token, 1);
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineControl), "tt:AnalyticsEngineControl"))
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
	if (a->tt__AnalyticsEngineControl::EngineToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:EngineToken", -1, &a->tt__AnalyticsEngineControl::EngineToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EngineToken"))
		return soap->error;
	if (a->tt__AnalyticsEngineControl::EngineConfigToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:EngineConfigToken", -1, &a->tt__AnalyticsEngineControl::EngineConfigToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EngineConfigToken"))
		return soap->error;
	if (a->tt__AnalyticsEngineControl::InputToken)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineControl::__sizeInputToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:InputToken", -1, a->tt__AnalyticsEngineControl::InputToken + i, ""))
				return soap->error;
	}
	if (a->tt__AnalyticsEngineControl::ReceiverToken)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineControl::__sizeReceiverToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:ReceiverToken", -1, a->tt__AnalyticsEngineControl::ReceiverToken + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &(a->tt__AnalyticsEngineControl::Multicast), ""))
		return soap->error;
	if (a->tt__AnalyticsEngineControl::Subscription)
	{	if (soap_out_PointerTott__Config(soap, "tt:Subscription", -1, &a->tt__AnalyticsEngineControl::Subscription, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Subscription"))
		return soap->error;
	if (soap_out_tt__ModeOfOperation(soap, "tt:Mode", -1, &(a->tt__AnalyticsEngineControl::Mode), ""))
		return soap->error;
	if (a->tt__AnalyticsEngineControl::__any)
	{	int i;
		for (i = 0; i < a->tt__AnalyticsEngineControl::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__AnalyticsEngineControl::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__AnalyticsEngineControl::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__AnalyticsEngineControl(soap, tag, this, type);
}

SOAP_FMAC3 tt__AnalyticsEngineControl * SOAP_FMAC4 soap_in_tt__AnalyticsEngineControl(struct soap *soap, const char *tag, tt__AnalyticsEngineControl *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__AnalyticsEngineControl *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineControl, sizeof(tt__AnalyticsEngineControl), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__AnalyticsEngineControl)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__AnalyticsEngineControl *)a->soap_in(soap, tag, type);
		}
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &((tt__AnalyticsEngineControl*)a)->__anyAttribute, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &((tt__ConfigurationEntity*)a)->token, 0, 64))
		return NULL;
	size_t soap_flag___item3 = 1;
	size_t soap_flag_Name2 = 1;
	size_t soap_flag_UseCount2 = 1;
	size_t soap_flag_EngineToken1 = 1;
	size_t soap_flag_EngineConfigToken1 = 1;
	struct soap_blist *soap_blist_InputToken1 = NULL;
	struct soap_blist *soap_blist_ReceiverToken1 = NULL;
	size_t soap_flag_Multicast1 = 1;
	size_t soap_flag_Subscription1 = 1;
	size_t soap_flag_Mode1 = 1;
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
			if (soap_flag_EngineToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:EngineToken", &(a->tt__AnalyticsEngineControl::EngineToken), "tt:ReferenceToken"))
				{	soap_flag_EngineToken1--;
					continue;
				}
			if (soap_flag_EngineConfigToken1 && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:EngineConfigToken", &(a->tt__AnalyticsEngineControl::EngineConfigToken), "tt:ReferenceToken"))
				{	soap_flag_EngineConfigToken1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:InputToken", 1, NULL))
			{	if (a->tt__AnalyticsEngineControl::InputToken == NULL)
				{	if (soap_blist_InputToken1 == NULL)
						soap_blist_InputToken1 = soap_new_block(soap);
					a->tt__AnalyticsEngineControl::InputToken = (char **)soap_push_block(soap, soap_blist_InputToken1, sizeof(char *));
					if (a->tt__AnalyticsEngineControl::InputToken == NULL)
						return NULL;
					*a->tt__AnalyticsEngineControl::InputToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:InputToken", a->tt__AnalyticsEngineControl::InputToken, "tt:ReferenceToken"))
				{	a->tt__AnalyticsEngineControl::__sizeInputToken++;
					a->tt__AnalyticsEngineControl::InputToken = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ReceiverToken", 1, NULL))
			{	if (a->tt__AnalyticsEngineControl::ReceiverToken == NULL)
				{	if (soap_blist_ReceiverToken1 == NULL)
						soap_blist_ReceiverToken1 = soap_new_block(soap);
					a->tt__AnalyticsEngineControl::ReceiverToken = (char **)soap_push_block(soap, soap_blist_ReceiverToken1, sizeof(char *));
					if (a->tt__AnalyticsEngineControl::ReceiverToken == NULL)
						return NULL;
					*a->tt__AnalyticsEngineControl::ReceiverToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:ReceiverToken", a->tt__AnalyticsEngineControl::ReceiverToken, "tt:ReferenceToken"))
				{	a->tt__AnalyticsEngineControl::__sizeReceiverToken++;
					a->tt__AnalyticsEngineControl::ReceiverToken = NULL;
					continue;
				}
			}
			if (soap_flag_Multicast1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &(a->tt__AnalyticsEngineControl::Multicast), "tt:MulticastConfiguration"))
				{	soap_flag_Multicast1--;
					continue;
				}
			if (soap_flag_Subscription1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Config(soap, "tt:Subscription", &(a->tt__AnalyticsEngineControl::Subscription), "tt:Config"))
				{	soap_flag_Subscription1--;
					continue;
				}
			if (soap_flag_Mode1 && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ModeOfOperation(soap, "tt:Mode", &(a->tt__AnalyticsEngineControl::Mode), "tt:ModeOfOperation"))
				{	soap_flag_Mode1--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->tt__AnalyticsEngineControl::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__AnalyticsEngineControl::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__AnalyticsEngineControl::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__AnalyticsEngineControl::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__AnalyticsEngineControl::__any, "xsd:byte"))
				{	a->tt__AnalyticsEngineControl::__size++;
					a->tt__AnalyticsEngineControl::__any = NULL;
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
		if (a->tt__AnalyticsEngineControl::InputToken)
			soap_pop_block(soap, soap_blist_InputToken1);
		if (a->tt__AnalyticsEngineControl::__sizeInputToken)
			a->tt__AnalyticsEngineControl::InputToken = (char **)soap_save_block(soap, soap_blist_InputToken1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineControl::InputToken = NULL;
			if (soap_blist_InputToken1)
				soap_end_block(soap, soap_blist_InputToken1);
		}
		if (a->tt__AnalyticsEngineControl::ReceiverToken)
			soap_pop_block(soap, soap_blist_ReceiverToken1);
		if (a->tt__AnalyticsEngineControl::__sizeReceiverToken)
			a->tt__AnalyticsEngineControl::ReceiverToken = (char **)soap_save_block(soap, soap_blist_ReceiverToken1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineControl::ReceiverToken = NULL;
			if (soap_blist_ReceiverToken1)
				soap_end_block(soap, soap_blist_ReceiverToken1);
		}
		if (a->tt__AnalyticsEngineControl::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__AnalyticsEngineControl::__size)
			a->tt__AnalyticsEngineControl::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__AnalyticsEngineControl::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__AnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineControl, 0, sizeof(tt__AnalyticsEngineControl), 0, soap_copy_tt__AnalyticsEngineControl);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name2 > 0 || soap_flag_UseCount2 > 0 || soap_flag_EngineToken1 > 0 || soap_flag_EngineConfigToken1 > 0 || a->tt__AnalyticsEngineControl::__sizeInputToken < 1 || a->tt__AnalyticsEngineControl::__sizeReceiverToken < 1 || soap_flag_Subscription1 > 0 || soap_flag_Mode1 > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

int tt__AnalyticsEngineControl::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineControl);
	if (this->soap_out(soap, tag?tag:"tt:AnalyticsEngineControl", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__AnalyticsEngineControl::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__AnalyticsEngineControl(soap, this, tag, type);
}

SOAP_FMAC3 tt__AnalyticsEngineControl * SOAP_FMAC4 soap_get_tt__AnalyticsEngineControl(struct soap *soap, tt__AnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__AnalyticsEngineControl * SOAP_FMAC2 soap_instantiate_tt__AnalyticsEngineControl(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__AnalyticsEngineControl(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__AnalyticsEngineControl, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__AnalyticsEngineControl(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__AnalyticsEngineControl %p -> %p\n", q, p));
	*(tt__AnalyticsEngineControl*)p = *(tt__AnalyticsEngineControl*)q;
}

void tt__MetadataInputExtension::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataInputExtension::__size = 0;
	this->tt__MetadataInputExtension::__any = NULL;
}

void tt__MetadataInputExtension::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataInputExtension::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataInputExtension(soap, tag, id, this, type);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataInputExtension(struct soap *soap, const char *tag, int id, const tt__MetadataInputExtension *a, const char *type)
{
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataInputExtension), "tt:MetadataInputExtension"))
		return soap->error;
	/* transient soap skipped */
	if (a->tt__MetadataInputExtension::__any)
	{	int i;
		for (i = 0; i < a->tt__MetadataInputExtension::__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->tt__MetadataInputExtension::__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

void *tt__MetadataInputExtension::soap_in(struct soap *soap, const char *tag, const char *type)
{	return soap_in_tt__MetadataInputExtension(soap, tag, this, type);
}

SOAP_FMAC3 tt__MetadataInputExtension * SOAP_FMAC4 soap_in_tt__MetadataInputExtension(struct soap *soap, const char *tag, tt__MetadataInputExtension *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 0, NULL))
		return NULL;
	a = (tt__MetadataInputExtension *)soap_class_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataInputExtension, sizeof(tt__MetadataInputExtension), soap->type, soap->arrayType);
	if (!a)
		return NULL;
	if (soap->alloced)
	{	a->soap_default(soap);
		if (soap->clist->type != SOAP_TYPE_tt__MetadataInputExtension)
		{	soap_revert(soap);
			*soap->id = '\0';
			return (tt__MetadataInputExtension *)a->soap_in(soap, tag, type);
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
			{	if (a->tt__MetadataInputExtension::__any == NULL)
				{	if (soap_blist___any1 == NULL)
						soap_blist___any1 = soap_new_block(soap);
					a->tt__MetadataInputExtension::__any = (char *)soap_push_block(soap, soap_blist___any1, sizeof(char));
					if (a->tt__MetadataInputExtension::__any == NULL)
						return NULL;
					soap_default_byte(soap, a->tt__MetadataInputExtension::__any);
				}
				if (soap_in_byte(soap, "-any", a->tt__MetadataInputExtension::__any, "xsd:byte"))
				{	a->tt__MetadataInputExtension::__size++;
					a->tt__MetadataInputExtension::__any = NULL;
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
		if (a->tt__MetadataInputExtension::__any)
			soap_pop_block(soap, soap_blist___any1);
		if (a->tt__MetadataInputExtension::__size)
			a->tt__MetadataInputExtension::__any = (char *)soap_save_block(soap, soap_blist___any1, NULL, 1);
		else
		{	a->tt__MetadataInputExtension::__any = NULL;
			if (soap_blist___any1)
				soap_end_block(soap, soap_blist___any1);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (tt__MetadataInputExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataInputExtension, 0, sizeof(tt__MetadataInputExtension), 0, soap_copy_tt__MetadataInputExtension);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

int tt__MetadataInputExtension::soap_put(struct soap *soap, const char *tag, const  char *type) const
{
	register int id = soap_embed(soap, (void*)this, NULL, 0, tag, SOAP_TYPE_tt__MetadataInputExtension);
	if (this->soap_out(soap, tag?tag:"tt:MetadataInputExtension", id, type))
		return soap->error;
	return soap_putindependent(soap);
}

void *tt__MetadataInputExtension::soap_get(struct soap *soap, const char *tag, const char *type)
{
	return soap_get_tt__MetadataInputExtension(soap, this, tag, type);
}

SOAP_FMAC3 tt__MetadataInputExtension * SOAP_FMAC4 soap_get_tt__MetadataInputExtension(struct soap *soap, tt__MetadataInputExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataInputExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC1 tt__MetadataInputExtension * SOAP_FMAC2 soap_instantiate_tt__MetadataInputExtension(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
	(void)type; (void)arrayType; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_tt__MetadataInputExtension(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
	struct soap_clist *cp = soap_link(soap, NULL, SOAP_TYPE_tt__MetadataInputExtension, n, soap_fdelete);
	if (!cp)
		return NULL;
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

SOAP_FMAC3 void SOAP_FMAC4 soap_copy_tt__MetadataInputExtension(struct soap *soap, int st, int tt, void *p, size_t len, const void *q, size_t n)
{
	(void)soap; (void)tt; (void)st; (void)len; (void)n; /* appease -Wall -Werror */
	DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying tt__MetadataInputExtension %p -> %p\n", q, p));
	*(tt__MetadataInputExtension*)p = *(tt__MetadataInputExtension*)q;
}

void tt__MetadataInput::soap_default(struct soap *soap)
{
	this->soap = soap;
	this->xsd__anyType::soap_default(soap);
	this->tt__MetadataInput::__sizeMetadataConfig = 0;
	this->tt__MetadataInput::MetadataConfig = NULL;
	this->tt__MetadataInput::Extension = NULL;
	this->tt__MetadataInput::__anyAttribute = NULL;
}

void tt__MetadataInput::soap_serialize(struct soap *soap) const
{
#ifndef WITH_NOIDREF
	(void)soap; /* appease -Wall -Werror */
	if (this->tt__MetadataInput::MetadataConfig)
	{	int i;
		for (i = 0; i < this->tt__MetadataInput::__sizeMetadataConfig; i++)
		{
			soap_serialize_PointerTott__Config(soap, this->tt__MetadataInput::MetadataConfig + i);
		}
	}
	soap_serialize_PointerTott__MetadataInputExtension(soap, &this->tt__MetadataInput::Extension);
	this->xsd__anyType::soap_serialize(soap);
#endif
}

int tt__MetadataInput::soap_out(struct soap *soap, const char *tag, int id, const char *type) const
{
	return soap_out_tt__MetadataInput(soap, tag, id, this, type);
}

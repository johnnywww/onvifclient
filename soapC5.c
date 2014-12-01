#include "soapH.h"

#ifdef __cplusplus
extern "C" {
#endif


SOAP_FMAC3 struct _tmd__GetVideoOutputConfigurationResponse * SOAP_FMAC4 soap_in__tmd__GetVideoOutputConfigurationResponse(struct soap *soap, const char *tag, struct _tmd__GetVideoOutputConfigurationResponse *a, const char *type)
{
	size_t soap_flag_VideoOutputConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoOutputConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoOutputConfigurationResponse, sizeof(struct _tmd__GetVideoOutputConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoOutputConfigurationResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoOutputConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoOutputConfiguration(soap, "tmd:VideoOutputConfiguration", &a->VideoOutputConfiguration, "tt:VideoOutputConfiguration"))
				{	soap_flag_VideoOutputConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "tmd:VideoOutputConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetVideoOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoOutputConfigurationResponse, 0, sizeof(struct _tmd__GetVideoOutputConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoOutputConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoOutputConfigurationResponse(struct soap *soap, const struct _tmd__GetVideoOutputConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoOutputConfigurationResponse);
	if (soap_out__tmd__GetVideoOutputConfigurationResponse(soap, tag?tag:"tmd:GetVideoOutputConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputConfigurationResponse * SOAP_FMAC4 soap_get__tmd__GetVideoOutputConfigurationResponse(struct soap *soap, struct _tmd__GetVideoOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetVideoOutputConfiguration(struct soap *soap, struct _tmd__GetVideoOutputConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->VideoOutputToken);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetVideoOutputConfiguration(struct soap *soap, const struct _tmd__GetVideoOutputConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->VideoOutputToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetVideoOutputConfiguration(struct soap *soap, const char *tag, int id, const struct _tmd__GetVideoOutputConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetVideoOutputConfiguration), type))
		return soap->error;
	if (a->VideoOutputToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tmd:VideoOutputToken", -1, &a->VideoOutputToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:VideoOutputToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputConfiguration * SOAP_FMAC4 soap_in__tmd__GetVideoOutputConfiguration(struct soap *soap, const char *tag, struct _tmd__GetVideoOutputConfiguration *a, const char *type)
{
	size_t soap_flag_VideoOutputToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoOutputConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoOutputConfiguration, sizeof(struct _tmd__GetVideoOutputConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoOutputConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoOutputToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tmd:VideoOutputToken", &a->VideoOutputToken, "tt:ReferenceToken"))
				{	soap_flag_VideoOutputToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetVideoOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoOutputConfiguration, 0, sizeof(struct _tmd__GetVideoOutputConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoOutputToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoOutputConfiguration(struct soap *soap, const struct _tmd__GetVideoOutputConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoOutputConfiguration);
	if (soap_out__tmd__GetVideoOutputConfiguration(soap, tag?tag:"tmd:GetVideoOutputConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputConfiguration * SOAP_FMAC4 soap_get__tmd__GetVideoOutputConfiguration(struct soap *soap, struct _tmd__GetVideoOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, struct _tmd__GetVideoSourceConfigurationResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->VideoSourceConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, const struct _tmd__GetVideoSourceConfigurationResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoSourceConfiguration(soap, &a->VideoSourceConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetVideoSourceConfigurationResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetVideoSourceConfigurationResponse), type))
		return soap->error;
	if (a->VideoSourceConfiguration)
		soap_element_result(soap, "tmd:VideoSourceConfiguration");
	if (a->VideoSourceConfiguration)
	{	if (soap_out_PointerTott__VideoSourceConfiguration(soap, "tmd:VideoSourceConfiguration", -1, &a->VideoSourceConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:VideoSourceConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_in__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, const char *tag, struct _tmd__GetVideoSourceConfigurationResponse *a, const char *type)
{
	size_t soap_flag_VideoSourceConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoSourceConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoSourceConfigurationResponse, sizeof(struct _tmd__GetVideoSourceConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoSourceConfigurationResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoSourceConfiguration(soap, "tmd:VideoSourceConfiguration", &a->VideoSourceConfiguration, "tt:VideoSourceConfiguration"))
				{	soap_flag_VideoSourceConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "tmd:VideoSourceConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetVideoSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoSourceConfigurationResponse, 0, sizeof(struct _tmd__GetVideoSourceConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, const struct _tmd__GetVideoSourceConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoSourceConfigurationResponse);
	if (soap_out__tmd__GetVideoSourceConfigurationResponse(soap, tag?tag:"tmd:GetVideoSourceConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoSourceConfigurationResponse * SOAP_FMAC4 soap_get__tmd__GetVideoSourceConfigurationResponse(struct soap *soap, struct _tmd__GetVideoSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetVideoSourceConfiguration(struct soap *soap, struct _tmd__GetVideoSourceConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->VideoSourceToken);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetVideoSourceConfiguration(struct soap *soap, const struct _tmd__GetVideoSourceConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->VideoSourceToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetVideoSourceConfiguration(struct soap *soap, const char *tag, int id, const struct _tmd__GetVideoSourceConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetVideoSourceConfiguration), type))
		return soap->error;
	if (a->VideoSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tmd:VideoSourceToken", -1, &a->VideoSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:VideoSourceToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetVideoSourceConfiguration * SOAP_FMAC4 soap_in__tmd__GetVideoSourceConfiguration(struct soap *soap, const char *tag, struct _tmd__GetVideoSourceConfiguration *a, const char *type)
{
	size_t soap_flag_VideoSourceToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoSourceConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoSourceConfiguration, sizeof(struct _tmd__GetVideoSourceConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoSourceConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoSourceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tmd:VideoSourceToken", &a->VideoSourceToken, "tt:ReferenceToken"))
				{	soap_flag_VideoSourceToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetVideoSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoSourceConfiguration, 0, sizeof(struct _tmd__GetVideoSourceConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoSourceToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoSourceConfiguration(struct soap *soap, const struct _tmd__GetVideoSourceConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoSourceConfiguration);
	if (soap_out__tmd__GetVideoSourceConfiguration(soap, tag?tag:"tmd:GetVideoSourceConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoSourceConfiguration * SOAP_FMAC4 soap_get__tmd__GetVideoSourceConfiguration(struct soap *soap, struct _tmd__GetVideoSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, struct _tmd__GetAudioOutputConfigurationResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AudioOutputConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, const struct _tmd__GetAudioOutputConfigurationResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioOutputConfiguration(soap, &a->AudioOutputConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetAudioOutputConfigurationResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetAudioOutputConfigurationResponse), type))
		return soap->error;
	if (a->AudioOutputConfiguration)
		soap_element_result(soap, "tmd:AudioOutputConfiguration");
	if (a->AudioOutputConfiguration)
	{	if (soap_out_PointerTott__AudioOutputConfiguration(soap, "tmd:AudioOutputConfiguration", -1, &a->AudioOutputConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:AudioOutputConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_in__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, const char *tag, struct _tmd__GetAudioOutputConfigurationResponse *a, const char *type)
{
	size_t soap_flag_AudioOutputConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetAudioOutputConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetAudioOutputConfigurationResponse, sizeof(struct _tmd__GetAudioOutputConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetAudioOutputConfigurationResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioOutputConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioOutputConfiguration(soap, "tmd:AudioOutputConfiguration", &a->AudioOutputConfiguration, "tt:AudioOutputConfiguration"))
				{	soap_flag_AudioOutputConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "tmd:AudioOutputConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetAudioOutputConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetAudioOutputConfigurationResponse, 0, sizeof(struct _tmd__GetAudioOutputConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AudioOutputConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, const struct _tmd__GetAudioOutputConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetAudioOutputConfigurationResponse);
	if (soap_out__tmd__GetAudioOutputConfigurationResponse(soap, tag?tag:"tmd:GetAudioOutputConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetAudioOutputConfigurationResponse * SOAP_FMAC4 soap_get__tmd__GetAudioOutputConfigurationResponse(struct soap *soap, struct _tmd__GetAudioOutputConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetAudioOutputConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetAudioOutputConfiguration(struct soap *soap, struct _tmd__GetAudioOutputConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->AudioOutputToken);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetAudioOutputConfiguration(struct soap *soap, const struct _tmd__GetAudioOutputConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->AudioOutputToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetAudioOutputConfiguration(struct soap *soap, const char *tag, int id, const struct _tmd__GetAudioOutputConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetAudioOutputConfiguration), type))
		return soap->error;
	if (a->AudioOutputToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tmd:AudioOutputToken", -1, &a->AudioOutputToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:AudioOutputToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetAudioOutputConfiguration * SOAP_FMAC4 soap_in__tmd__GetAudioOutputConfiguration(struct soap *soap, const char *tag, struct _tmd__GetAudioOutputConfiguration *a, const char *type)
{
	size_t soap_flag_AudioOutputToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetAudioOutputConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetAudioOutputConfiguration, sizeof(struct _tmd__GetAudioOutputConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetAudioOutputConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioOutputToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tmd:AudioOutputToken", &a->AudioOutputToken, "tt:ReferenceToken"))
				{	soap_flag_AudioOutputToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetAudioOutputConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetAudioOutputConfiguration, 0, sizeof(struct _tmd__GetAudioOutputConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AudioOutputToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetAudioOutputConfiguration(struct soap *soap, const struct _tmd__GetAudioOutputConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetAudioOutputConfiguration);
	if (soap_out__tmd__GetAudioOutputConfiguration(soap, tag?tag:"tmd:GetAudioOutputConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetAudioOutputConfiguration * SOAP_FMAC4 soap_get__tmd__GetAudioOutputConfiguration(struct soap *soap, struct _tmd__GetAudioOutputConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetAudioOutputConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, struct _tmd__GetAudioSourceConfigurationResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AudioSourceConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, const struct _tmd__GetAudioSourceConfigurationResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioSourceConfiguration(soap, &a->AudioSourceConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetAudioSourceConfigurationResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetAudioSourceConfigurationResponse), type))
		return soap->error;
	if (a->AudioSourceConfiguration)
		soap_element_result(soap, "tmd:AudioSourceConfiguration");
	if (a->AudioSourceConfiguration)
	{	if (soap_out_PointerTott__AudioSourceConfiguration(soap, "tmd:AudioSourceConfiguration", -1, &a->AudioSourceConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:AudioSourceConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_in__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, const char *tag, struct _tmd__GetAudioSourceConfigurationResponse *a, const char *type)
{
	size_t soap_flag_AudioSourceConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetAudioSourceConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetAudioSourceConfigurationResponse, sizeof(struct _tmd__GetAudioSourceConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetAudioSourceConfigurationResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioSourceConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioSourceConfiguration(soap, "tmd:AudioSourceConfiguration", &a->AudioSourceConfiguration, "tt:AudioSourceConfiguration"))
				{	soap_flag_AudioSourceConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "tmd:AudioSourceConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetAudioSourceConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetAudioSourceConfigurationResponse, 0, sizeof(struct _tmd__GetAudioSourceConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AudioSourceConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, const struct _tmd__GetAudioSourceConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetAudioSourceConfigurationResponse);
	if (soap_out__tmd__GetAudioSourceConfigurationResponse(soap, tag?tag:"tmd:GetAudioSourceConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetAudioSourceConfigurationResponse * SOAP_FMAC4 soap_get__tmd__GetAudioSourceConfigurationResponse(struct soap *soap, struct _tmd__GetAudioSourceConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetAudioSourceConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetAudioSourceConfiguration(struct soap *soap, struct _tmd__GetAudioSourceConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->AudioSourceToken);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetAudioSourceConfiguration(struct soap *soap, const struct _tmd__GetAudioSourceConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->AudioSourceToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetAudioSourceConfiguration(struct soap *soap, const char *tag, int id, const struct _tmd__GetAudioSourceConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetAudioSourceConfiguration), type))
		return soap->error;
	if (a->AudioSourceToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tmd:AudioSourceToken", -1, &a->AudioSourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:AudioSourceToken"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetAudioSourceConfiguration * SOAP_FMAC4 soap_in__tmd__GetAudioSourceConfiguration(struct soap *soap, const char *tag, struct _tmd__GetAudioSourceConfiguration *a, const char *type)
{
	size_t soap_flag_AudioSourceToken = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetAudioSourceConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetAudioSourceConfiguration, sizeof(struct _tmd__GetAudioSourceConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetAudioSourceConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioSourceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tmd:AudioSourceToken", &a->AudioSourceToken, "tt:ReferenceToken"))
				{	soap_flag_AudioSourceToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetAudioSourceConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetAudioSourceConfiguration, 0, sizeof(struct _tmd__GetAudioSourceConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AudioSourceToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetAudioSourceConfiguration(struct soap *soap, const struct _tmd__GetAudioSourceConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetAudioSourceConfiguration);
	if (soap_out__tmd__GetAudioSourceConfiguration(soap, tag?tag:"tmd:GetAudioSourceConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetAudioSourceConfiguration * SOAP_FMAC4 soap_get__tmd__GetAudioSourceConfiguration(struct soap *soap, struct _tmd__GetAudioSourceConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetAudioSourceConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoOutput(struct soap *soap, struct tt__VideoOutput *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->Layout = NULL;
	a->Resolution = NULL;
	a->RefreshRate = NULL;
	a->AspectRatio = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoOutput(struct soap *soap, const struct tt__VideoOutput *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Layout(soap, &a->Layout);
	soap_serialize_PointerTott__VideoResolution(soap, &a->Resolution);
	soap_serialize_PointerTofloat(soap, &a->RefreshRate);
	soap_serialize_PointerTofloat(soap, &a->AspectRatio);
	soap_serialize_PointerTott__VideoOutputExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoOutput(struct soap *soap, const char *tag, int id, const struct tt__VideoOutput *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoOutput), type))
		return soap->error;
	if (a->Layout)
	{	if (soap_out_PointerTott__Layout(soap, "tt:Layout", -1, &a->Layout, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Layout"))
		return soap->error;
	if (soap_out_PointerTott__VideoResolution(soap, "tt:Resolution", -1, &a->Resolution, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:RefreshRate", -1, &a->RefreshRate, ""))
		return soap->error;
	if (soap_out_PointerTofloat(soap, "tt:AspectRatio", -1, &a->AspectRatio, ""))
		return soap->error;
	if (soap_out_PointerTott__VideoOutputExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoOutput * SOAP_FMAC4 soap_in_tt__VideoOutput(struct soap *soap, const char *tag, struct tt__VideoOutput *a, const char *type)
{
	size_t soap_flag_Layout = 1;
	size_t soap_flag_Resolution = 1;
	size_t soap_flag_RefreshRate = 1;
	size_t soap_flag_AspectRatio = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoOutput *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoOutput, sizeof(struct tt__VideoOutput), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoOutput(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Layout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Layout(soap, "tt:Layout", &a->Layout, "tt:Layout"))
				{	soap_flag_Layout--;
					continue;
				}
			if (soap_flag_Resolution && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoResolution(soap, "tt:Resolution", &a->Resolution, "tt:VideoResolution"))
				{	soap_flag_Resolution--;
					continue;
				}
			if (soap_flag_RefreshRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:RefreshRate", &a->RefreshRate, "xsd:float"))
				{	soap_flag_RefreshRate--;
					continue;
				}
			if (soap_flag_AspectRatio && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTofloat(soap, "tt:AspectRatio", &a->AspectRatio, "xsd:float"))
				{	soap_flag_AspectRatio--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoOutputExtension(soap, "tt:Extension", &a->Extension, "tt:VideoOutputExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__VideoOutput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoOutput, 0, sizeof(struct tt__VideoOutput), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Layout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoOutput(struct soap *soap, const struct tt__VideoOutput *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoOutput);
	if (soap_out_tt__VideoOutput(soap, tag?tag:"tt:VideoOutput", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoOutput * SOAP_FMAC4 soap_get_tt__VideoOutput(struct soap *soap, struct tt__VideoOutput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoOutput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetVideoOutputsResponse(struct soap *soap, struct _tmd__GetVideoOutputsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeVideoOutputs = 0;
	a->VideoOutputs = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetVideoOutputsResponse(struct soap *soap, const struct _tmd__GetVideoOutputsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->VideoOutputs)
	{	int i;
		for (i = 0; i < a->__sizeVideoOutputs; i++)
		{
			soap_embedded(soap, a->VideoOutputs + i, SOAP_TYPE_tt__VideoOutput);
			soap_serialize_tt__VideoOutput(soap, a->VideoOutputs + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetVideoOutputsResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetVideoOutputsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetVideoOutputsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeVideoOutputs");
	if (a->VideoOutputs)
	{	int i;
		for (i = 0; i < a->__sizeVideoOutputs; i++)
			if (soap_out_tt__VideoOutput(soap, "tmd:VideoOutputs", -1, a->VideoOutputs + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputsResponse * SOAP_FMAC4 soap_in__tmd__GetVideoOutputsResponse(struct soap *soap, const char *tag, struct _tmd__GetVideoOutputsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_VideoOutputs = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoOutputsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoOutputsResponse, sizeof(struct _tmd__GetVideoOutputsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoOutputsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tmd:VideoOutputs", 1, NULL))
			{	if (a->VideoOutputs == NULL)
				{	if (soap_blist_VideoOutputs == NULL)
						soap_blist_VideoOutputs = soap_new_block(soap);
					a->VideoOutputs = (struct tt__VideoOutput *)soap_push_block(soap, soap_blist_VideoOutputs, sizeof(struct tt__VideoOutput));
					if (a->VideoOutputs == NULL)
						return NULL;
					soap_default_tt__VideoOutput(soap, a->VideoOutputs);
				}
				soap_revert(soap);
				if (soap_in_tt__VideoOutput(soap, "tmd:VideoOutputs", a->VideoOutputs, "tt:VideoOutput"))
				{	a->__sizeVideoOutputs++;
					a->VideoOutputs = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeVideoOutputs");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->VideoOutputs)
			soap_pop_block(soap, soap_blist_VideoOutputs);
		if (a->__sizeVideoOutputs)
			a->VideoOutputs = (struct tt__VideoOutput *)soap_save_block(soap, soap_blist_VideoOutputs, NULL, 1);
		else
		{	a->VideoOutputs = NULL;
			if (soap_blist_VideoOutputs)
				soap_end_block(soap, soap_blist_VideoOutputs);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetVideoOutputsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoOutputsResponse, 0, sizeof(struct _tmd__GetVideoOutputsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoOutputsResponse(struct soap *soap, const struct _tmd__GetVideoOutputsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoOutputsResponse);
	if (soap_out__tmd__GetVideoOutputsResponse(soap, tag?tag:"tmd:GetVideoOutputsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputsResponse * SOAP_FMAC4 soap_get__tmd__GetVideoOutputsResponse(struct soap *soap, struct _tmd__GetVideoOutputsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoOutputsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetVideoOutputs(struct soap *soap, struct _tmd__GetVideoOutputs *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetVideoOutputs(struct soap *soap, const struct _tmd__GetVideoOutputs *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetVideoOutputs(struct soap *soap, const char *tag, int id, const struct _tmd__GetVideoOutputs *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetVideoOutputs), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputs * SOAP_FMAC4 soap_in__tmd__GetVideoOutputs(struct soap *soap, const char *tag, struct _tmd__GetVideoOutputs *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetVideoOutputs *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetVideoOutputs, sizeof(struct _tmd__GetVideoOutputs), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetVideoOutputs(soap, a);
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
	{	a = (struct _tmd__GetVideoOutputs *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetVideoOutputs, 0, sizeof(struct _tmd__GetVideoOutputs), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetVideoOutputs(struct soap *soap, const struct _tmd__GetVideoOutputs *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetVideoOutputs);
	if (soap_out__tmd__GetVideoOutputs(soap, tag?tag:"tmd:GetVideoOutputs", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetVideoOutputs * SOAP_FMAC4 soap_get__tmd__GetVideoOutputs(struct soap *soap, struct _tmd__GetVideoOutputs *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetVideoOutputs(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetRelayOutputOptionsResponse(struct soap *soap, struct _tmd__GetRelayOutputOptionsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeRelayOutputOptions = 0;
	a->RelayOutputOptions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetRelayOutputOptionsResponse(struct soap *soap, const struct _tmd__GetRelayOutputOptionsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->RelayOutputOptions)
	{	int i;
		for (i = 0; i < a->__sizeRelayOutputOptions; i++)
		{
			soap_embedded(soap, a->RelayOutputOptions + i, SOAP_TYPE_tmd__RelayOutputOptions);
			soap_serialize_tmd__RelayOutputOptions(soap, a->RelayOutputOptions + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetRelayOutputOptionsResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetRelayOutputOptionsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetRelayOutputOptionsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeRelayOutputOptions");
	if (a->RelayOutputOptions)
	{	int i;
		for (i = 0; i < a->__sizeRelayOutputOptions; i++)
			if (soap_out_tmd__RelayOutputOptions(soap, "tmd:RelayOutputOptions", -1, a->RelayOutputOptions + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetRelayOutputOptionsResponse * SOAP_FMAC4 soap_in__tmd__GetRelayOutputOptionsResponse(struct soap *soap, const char *tag, struct _tmd__GetRelayOutputOptionsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_RelayOutputOptions = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetRelayOutputOptionsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetRelayOutputOptionsResponse, sizeof(struct _tmd__GetRelayOutputOptionsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetRelayOutputOptionsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tmd:RelayOutputOptions", 1, NULL))
			{	if (a->RelayOutputOptions == NULL)
				{	if (soap_blist_RelayOutputOptions == NULL)
						soap_blist_RelayOutputOptions = soap_new_block(soap);
					a->RelayOutputOptions = (struct tmd__RelayOutputOptions *)soap_push_block(soap, soap_blist_RelayOutputOptions, sizeof(struct tmd__RelayOutputOptions));
					if (a->RelayOutputOptions == NULL)
						return NULL;
					soap_default_tmd__RelayOutputOptions(soap, a->RelayOutputOptions);
				}
				soap_revert(soap);
				if (soap_in_tmd__RelayOutputOptions(soap, "tmd:RelayOutputOptions", a->RelayOutputOptions, "tmd:RelayOutputOptions"))
				{	a->__sizeRelayOutputOptions++;
					a->RelayOutputOptions = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeRelayOutputOptions");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->RelayOutputOptions)
			soap_pop_block(soap, soap_blist_RelayOutputOptions);
		if (a->__sizeRelayOutputOptions)
			a->RelayOutputOptions = (struct tmd__RelayOutputOptions *)soap_save_block(soap, soap_blist_RelayOutputOptions, NULL, 1);
		else
		{	a->RelayOutputOptions = NULL;
			if (soap_blist_RelayOutputOptions)
				soap_end_block(soap, soap_blist_RelayOutputOptions);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetRelayOutputOptionsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetRelayOutputOptionsResponse, 0, sizeof(struct _tmd__GetRelayOutputOptionsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetRelayOutputOptionsResponse(struct soap *soap, const struct _tmd__GetRelayOutputOptionsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetRelayOutputOptionsResponse);
	if (soap_out__tmd__GetRelayOutputOptionsResponse(soap, tag?tag:"tmd:GetRelayOutputOptionsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetRelayOutputOptionsResponse * SOAP_FMAC4 soap_get__tmd__GetRelayOutputOptionsResponse(struct soap *soap, struct _tmd__GetRelayOutputOptionsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetRelayOutputOptionsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetRelayOutputOptions(struct soap *soap, struct _tmd__GetRelayOutputOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->RelayOutputToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetRelayOutputOptions(struct soap *soap, const struct _tmd__GetRelayOutputOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->RelayOutputToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetRelayOutputOptions(struct soap *soap, const char *tag, int id, const struct _tmd__GetRelayOutputOptions *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetRelayOutputOptions), type))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tmd:RelayOutputToken", -1, &a->RelayOutputToken, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetRelayOutputOptions * SOAP_FMAC4 soap_in__tmd__GetRelayOutputOptions(struct soap *soap, const char *tag, struct _tmd__GetRelayOutputOptions *a, const char *type)
{
	size_t soap_flag_RelayOutputToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetRelayOutputOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetRelayOutputOptions, sizeof(struct _tmd__GetRelayOutputOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetRelayOutputOptions(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RelayOutputToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tmd:RelayOutputToken", &a->RelayOutputToken, "tt:ReferenceToken"))
				{	soap_flag_RelayOutputToken--;
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
	{	a = (struct _tmd__GetRelayOutputOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetRelayOutputOptions, 0, sizeof(struct _tmd__GetRelayOutputOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetRelayOutputOptions(struct soap *soap, const struct _tmd__GetRelayOutputOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetRelayOutputOptions);
	if (soap_out__tmd__GetRelayOutputOptions(soap, tag?tag:"tmd:GetRelayOutputOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetRelayOutputOptions * SOAP_FMAC4 soap_get__tmd__GetRelayOutputOptions(struct soap *soap, struct _tmd__GetRelayOutputOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetRelayOutputOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetServiceCapabilitiesResponse(struct soap *soap, struct _tmd__GetServiceCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Capabilities = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tmd__GetServiceCapabilitiesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTotmd__Capabilities(soap, &a->Capabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const struct _tmd__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tmd:Capabilities");
	if (a->Capabilities)
	{	if (soap_out_PointerTotmd__Capabilities(soap, "tmd:Capabilities", -1, &a->Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:Capabilities"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__tmd__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, struct _tmd__GetServiceCapabilitiesResponse *a, const char *type)
{
	size_t soap_flag_Capabilities = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetServiceCapabilitiesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetServiceCapabilitiesResponse, sizeof(struct _tmd__GetServiceCapabilitiesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetServiceCapabilitiesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotmd__Capabilities(soap, "tmd:Capabilities", &a->Capabilities, "tmd:Capabilities"))
				{	soap_flag_Capabilities--;
					continue;
				}
			soap_check_result(soap, "tmd:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tmd__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetServiceCapabilitiesResponse, 0, sizeof(struct _tmd__GetServiceCapabilitiesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tmd__GetServiceCapabilitiesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetServiceCapabilitiesResponse);
	if (soap_out__tmd__GetServiceCapabilitiesResponse(soap, tag?tag:"tmd:GetServiceCapabilitiesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__tmd__GetServiceCapabilitiesResponse(struct soap *soap, struct _tmd__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tmd__GetServiceCapabilities(struct soap *soap, struct _tmd__GetServiceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tmd__GetServiceCapabilities(struct soap *soap, const struct _tmd__GetServiceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tmd__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const struct _tmd__GetServiceCapabilities *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tmd__GetServiceCapabilities), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tmd__GetServiceCapabilities * SOAP_FMAC4 soap_in__tmd__GetServiceCapabilities(struct soap *soap, const char *tag, struct _tmd__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tmd__GetServiceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tmd__GetServiceCapabilities, sizeof(struct _tmd__GetServiceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tmd__GetServiceCapabilities(soap, a);
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
	{	a = (struct _tmd__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tmd__GetServiceCapabilities, 0, sizeof(struct _tmd__GetServiceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tmd__GetServiceCapabilities(struct soap *soap, const struct _tmd__GetServiceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tmd__GetServiceCapabilities);
	if (soap_out__tmd__GetServiceCapabilities(soap, tag?tag:"tmd:GetServiceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tmd__GetServiceCapabilities * SOAP_FMAC4 soap_get__tmd__GetServiceCapabilities(struct soap *soap, struct _tmd__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tmd__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__ParityBitList(struct soap *soap, struct tmd__ParityBitList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeItems = 0;
	a->Items = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__ParityBitList(struct soap *soap, const struct tmd__ParityBitList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
		{
			soap_embedded(soap, a->Items + i, SOAP_TYPE_tmd__ParityBit);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__ParityBitList(struct soap *soap, const char *tag, int id, const struct tmd__ParityBitList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__ParityBitList), type))
		return soap->error;
	if (a->Items)
	{	int i;
		for (i = 0; i < a->__sizeItems; i++)
			if (soap_out_tmd__ParityBit(soap, "tmd:Items", -1, a->Items + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__ParityBitList * SOAP_FMAC4 soap_in_tmd__ParityBitList(struct soap *soap, const char *tag, struct tmd__ParityBitList *a, const char *type)
{
	struct soap_blist *soap_blist_Items = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__ParityBitList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__ParityBitList, sizeof(struct tmd__ParityBitList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__ParityBitList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tmd:Items", 1, NULL))
			{	if (a->Items == NULL)
				{	if (soap_blist_Items == NULL)
						soap_blist_Items = soap_new_block(soap);
					a->Items = (enum tmd__ParityBit *)soap_push_block(soap, soap_blist_Items, sizeof(enum tmd__ParityBit));
					if (a->Items == NULL)
						return NULL;
					soap_default_tmd__ParityBit(soap, a->Items);
				}
				soap_revert(soap);
				if (soap_in_tmd__ParityBit(soap, "tmd:Items", a->Items, "tmd:ParityBit"))
				{	a->__sizeItems++;
					a->Items = NULL;
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
		if (a->Items)
			soap_pop_block(soap, soap_blist_Items);
		if (a->__sizeItems)
			a->Items = (enum tmd__ParityBit *)soap_save_block(soap, soap_blist_Items, NULL, 1);
		else
		{	a->Items = NULL;
			if (soap_blist_Items)
				soap_end_block(soap, soap_blist_Items);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__ParityBitList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__ParityBitList, 0, sizeof(struct tmd__ParityBitList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__ParityBitList(struct soap *soap, const struct tmd__ParityBitList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__ParityBitList);
	if (soap_out_tmd__ParityBitList(soap, tag?tag:"tmd:ParityBitList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__ParityBitList * SOAP_FMAC4 soap_get_tmd__ParityBitList(struct soap *soap, struct tmd__ParityBitList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__ParityBitList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__SerialPortConfigurationOptions(struct soap *soap, struct tmd__SerialPortConfigurationOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->BaudRateList = NULL;
	a->ParityBitList = NULL;
	a->CharacterLengthList = NULL;
	a->StopBitList = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__SerialPortConfigurationOptions(struct soap *soap, const struct tmd__SerialPortConfigurationOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__IntList(soap, &a->BaudRateList);
	soap_serialize_PointerTotmd__ParityBitList(soap, &a->ParityBitList);
	soap_serialize_PointerTott__IntList(soap, &a->CharacterLengthList);
	soap_serialize_PointerTott__FloatList(soap, &a->StopBitList);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__SerialPortConfigurationOptions(struct soap *soap, const char *tag, int id, const struct tmd__SerialPortConfigurationOptions *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__SerialPortConfigurationOptions), type))
		return soap->error;
	if (a->BaudRateList)
	{	if (soap_out_PointerTott__IntList(soap, "tmd:BaudRateList", -1, &a->BaudRateList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:BaudRateList"))
		return soap->error;
	if (a->ParityBitList)
	{	if (soap_out_PointerTotmd__ParityBitList(soap, "tmd:ParityBitList", -1, &a->ParityBitList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:ParityBitList"))
		return soap->error;
	if (a->CharacterLengthList)
	{	if (soap_out_PointerTott__IntList(soap, "tmd:CharacterLengthList", -1, &a->CharacterLengthList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:CharacterLengthList"))
		return soap->error;
	if (a->StopBitList)
	{	if (soap_out_PointerTott__FloatList(soap, "tmd:StopBitList", -1, &a->StopBitList, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tmd:StopBitList"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__SerialPortConfigurationOptions * SOAP_FMAC4 soap_in_tmd__SerialPortConfigurationOptions(struct soap *soap, const char *tag, struct tmd__SerialPortConfigurationOptions *a, const char *type)
{
	size_t soap_flag_BaudRateList = 1;
	size_t soap_flag_ParityBitList = 1;
	size_t soap_flag_CharacterLengthList = 1;
	size_t soap_flag_StopBitList = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__SerialPortConfigurationOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__SerialPortConfigurationOptions, sizeof(struct tmd__SerialPortConfigurationOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__SerialPortConfigurationOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BaudRateList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tmd:BaudRateList", &a->BaudRateList, "tt:IntList"))
				{	soap_flag_BaudRateList--;
					continue;
				}
			if (soap_flag_ParityBitList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotmd__ParityBitList(soap, "tmd:ParityBitList", &a->ParityBitList, "tmd:ParityBitList"))
				{	soap_flag_ParityBitList--;
					continue;
				}
			if (soap_flag_CharacterLengthList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__IntList(soap, "tmd:CharacterLengthList", &a->CharacterLengthList, "tt:IntList"))
				{	soap_flag_CharacterLengthList--;
					continue;
				}
			if (soap_flag_StopBitList && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__FloatList(soap, "tmd:StopBitList", &a->StopBitList, "tt:FloatList"))
				{	soap_flag_StopBitList--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__SerialPortConfigurationOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__SerialPortConfigurationOptions, 0, sizeof(struct tmd__SerialPortConfigurationOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BaudRateList > 0 || soap_flag_ParityBitList > 0 || soap_flag_CharacterLengthList > 0 || soap_flag_StopBitList > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__SerialPortConfigurationOptions(struct soap *soap, const struct tmd__SerialPortConfigurationOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__SerialPortConfigurationOptions);
	if (soap_out_tmd__SerialPortConfigurationOptions(soap, tag?tag:"tmd:SerialPortConfigurationOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__SerialPortConfigurationOptions * SOAP_FMAC4 soap_get_tmd__SerialPortConfigurationOptions(struct soap *soap, struct tmd__SerialPortConfigurationOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__SerialPortConfigurationOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__SerialPortConfiguration(struct soap *soap, struct tmd__SerialPortConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_int(soap, &a->BaudRate);
	soap_default_tmd__ParityBit(soap, &a->ParityBit);
	soap_default_int(soap, &a->CharacterLength);
	soap_default_float(soap, &a->StopBit);
	a->__size = 0;
	a->__any = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tmd__SerialPortType(soap, &a->type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__SerialPortConfiguration(struct soap *soap, const struct tmd__SerialPortConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->BaudRate, SOAP_TYPE_int);
	soap_embedded(soap, &a->ParityBit, SOAP_TYPE_tmd__ParityBit);
	soap_embedded(soap, &a->CharacterLength, SOAP_TYPE_int);
	soap_embedded(soap, &a->StopBit, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__SerialPortConfiguration(struct soap *soap, const char *tag, int id, const struct tmd__SerialPortConfiguration *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	soap_set_attr(soap, "type", soap_tmd__SerialPortType2s(soap, a->type), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__SerialPortConfiguration), type))
		return soap->error;
	if (soap_out_int(soap, "tmd:BaudRate", -1, &a->BaudRate, ""))
		return soap->error;
	if (soap_out_tmd__ParityBit(soap, "tmd:ParityBit", -1, &a->ParityBit, ""))
		return soap->error;
	if (soap_out_int(soap, "tmd:CharacterLength", -1, &a->CharacterLength, ""))
		return soap->error;
	if (soap_out_float(soap, "tmd:StopBit", -1, &a->StopBit, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__SerialPortConfiguration * SOAP_FMAC4 soap_in_tmd__SerialPortConfiguration(struct soap *soap, const char *tag, struct tmd__SerialPortConfiguration *a, const char *type)
{
	size_t soap_flag_BaudRate = 1;
	size_t soap_flag_ParityBit = 1;
	size_t soap_flag_CharacterLength = 1;
	size_t soap_flag_StopBit = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__SerialPortConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__SerialPortConfiguration, sizeof(struct tmd__SerialPortConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__SerialPortConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2tmd__SerialPortType(soap, soap_attr_value(soap, "type", 1), &a->type))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_BaudRate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tmd:BaudRate", &a->BaudRate, "xsd:int"))
				{	soap_flag_BaudRate--;
					continue;
				}
			if (soap_flag_ParityBit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tmd__ParityBit(soap, "tmd:ParityBit", &a->ParityBit, "tmd:ParityBit"))
				{	soap_flag_ParityBit--;
					continue;
				}
			if (soap_flag_CharacterLength && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tmd:CharacterLength", &a->CharacterLength, "xsd:int"))
				{	soap_flag_CharacterLength--;
					continue;
				}
			if (soap_flag_StopBit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tmd:StopBit", &a->StopBit, "xsd:float"))
				{	soap_flag_StopBit--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__SerialPortConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__SerialPortConfiguration, 0, sizeof(struct tmd__SerialPortConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_BaudRate > 0 || soap_flag_ParityBit > 0 || soap_flag_CharacterLength > 0 || soap_flag_StopBit > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__SerialPortConfiguration(struct soap *soap, const struct tmd__SerialPortConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__SerialPortConfiguration);
	if (soap_out_tmd__SerialPortConfiguration(soap, tag?tag:"tmd:SerialPortConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__SerialPortConfiguration * SOAP_FMAC4 soap_get_tmd__SerialPortConfiguration(struct soap *soap, struct tmd__SerialPortConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__SerialPortConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__SerialData(struct soap *soap, struct tmd__SerialData *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_SerialData = 0;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__SerialData(struct soap *soap, const struct tmd__SerialData *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tmd__union_SerialData(soap, a->__union_SerialData, &a->union_SerialData);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__SerialData(struct soap *soap, const char *tag, int id, const struct tmd__SerialData *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__SerialData), type))
		return soap->error;
	if (soap_out__tmd__union_SerialData(soap, a->__union_SerialData, &a->union_SerialData))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__SerialData * SOAP_FMAC4 soap_in_tmd__SerialData(struct soap *soap, const char *tag, struct tmd__SerialData *a, const char *type)
{
	size_t soap_flag_union_SerialData = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__SerialData *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__SerialData, sizeof(struct tmd__SerialData), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__SerialData(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_union_SerialData && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__tmd__union_SerialData(soap, &a->__union_SerialData, &a->union_SerialData))
				{	soap_flag_union_SerialData = 0;
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
	{	a = (struct tmd__SerialData *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__SerialData, 0, sizeof(struct tmd__SerialData), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_union_SerialData))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__SerialData(struct soap *soap, const struct tmd__SerialData *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__SerialData);
	if (soap_out_tmd__SerialData(soap, tag?tag:"tmd:SerialData", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__SerialData * SOAP_FMAC4 soap_get_tmd__SerialData(struct soap *soap, struct tmd__SerialData *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__SerialData(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__RelayOutputOptionsExtension(struct soap *soap, struct tmd__RelayOutputOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__RelayOutputOptionsExtension(struct soap *soap, const struct tmd__RelayOutputOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__RelayOutputOptionsExtension(struct soap *soap, const char *tag, int id, const struct tmd__RelayOutputOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__RelayOutputOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__RelayOutputOptionsExtension * SOAP_FMAC4 soap_in_tmd__RelayOutputOptionsExtension(struct soap *soap, const char *tag, struct tmd__RelayOutputOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__RelayOutputOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__RelayOutputOptionsExtension, sizeof(struct tmd__RelayOutputOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__RelayOutputOptionsExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__RelayOutputOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__RelayOutputOptionsExtension, 0, sizeof(struct tmd__RelayOutputOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__RelayOutputOptionsExtension(struct soap *soap, const struct tmd__RelayOutputOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__RelayOutputOptionsExtension);
	if (soap_out_tmd__RelayOutputOptionsExtension(soap, tag?tag:"tmd:RelayOutputOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__RelayOutputOptionsExtension * SOAP_FMAC4 soap_get_tmd__RelayOutputOptionsExtension(struct soap *soap, struct tmd__RelayOutputOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__RelayOutputOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__RelayOutputOptions(struct soap *soap, struct tmd__RelayOutputOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMode = 0;
	a->Mode = NULL;
	soap_default_tmd__DelayTimes(soap, &a->DelayTimes);
	a->Discrete = NULL;
	a->Extension = NULL;
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__RelayOutputOptions(struct soap *soap, const struct tmd__RelayOutputOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
		{
			soap_embedded(soap, a->Mode + i, SOAP_TYPE_tt__RelayMode);
		}
	}
	soap_serialize_tmd__DelayTimes(soap, &a->DelayTimes);
	soap_serialize_PointerToxsd__boolean(soap, &a->Discrete);
	soap_serialize_PointerTotmd__RelayOutputOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__RelayOutputOptions(struct soap *soap, const char *tag, int id, const struct tmd__RelayOutputOptions *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__RelayOutputOptions), type))
		return soap->error;
	if (a->Mode)
	{	int i;
		for (i = 0; i < a->__sizeMode; i++)
			if (soap_out_tt__RelayMode(soap, "tmd:Mode", -1, a->Mode + i, ""))
				return soap->error;
	}
	if (soap_out_tmd__DelayTimes(soap, "tmd:DelayTimes", -1, &a->DelayTimes, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tmd:Discrete", -1, &a->Discrete, ""))
		return soap->error;
	if (soap_out_PointerTotmd__RelayOutputOptionsExtension(soap, "tmd:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__RelayOutputOptions * SOAP_FMAC4 soap_in_tmd__RelayOutputOptions(struct soap *soap, const char *tag, struct tmd__RelayOutputOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Mode = NULL;
	size_t soap_flag_DelayTimes = 1;
	size_t soap_flag_Discrete = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__RelayOutputOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__RelayOutputOptions, sizeof(struct tmd__RelayOutputOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__RelayOutputOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tmd:Mode", 1, NULL))
			{	if (a->Mode == NULL)
				{	if (soap_blist_Mode == NULL)
						soap_blist_Mode = soap_new_block(soap);
					a->Mode = (enum tt__RelayMode *)soap_push_block(soap, soap_blist_Mode, sizeof(enum tt__RelayMode));
					if (a->Mode == NULL)
						return NULL;
					soap_default_tt__RelayMode(soap, a->Mode);
				}
				soap_revert(soap);
				if (soap_in_tt__RelayMode(soap, "tmd:Mode", a->Mode, "tt:RelayMode"))
				{	a->__sizeMode++;
					a->Mode = NULL;
					continue;
				}
			}
			if (soap_flag_DelayTimes && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tmd__DelayTimes(soap, "tmd:DelayTimes", &a->DelayTimes, "tmd:DelayTimes"))
				{	soap_flag_DelayTimes--;
					continue;
				}
			if (soap_flag_Discrete && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tmd:Discrete", &a->Discrete, "xsd:boolean"))
				{	soap_flag_Discrete--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotmd__RelayOutputOptionsExtension(soap, "tmd:Extension", &a->Extension, "tmd:RelayOutputOptionsExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Mode)
			soap_pop_block(soap, soap_blist_Mode);
		if (a->__sizeMode)
			a->Mode = (enum tt__RelayMode *)soap_save_block(soap, soap_blist_Mode, NULL, 1);
		else
		{	a->Mode = NULL;
			if (soap_blist_Mode)
				soap_end_block(soap, soap_blist_Mode);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__RelayOutputOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__RelayOutputOptions, 0, sizeof(struct tmd__RelayOutputOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeMode < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__RelayOutputOptions(struct soap *soap, const struct tmd__RelayOutputOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__RelayOutputOptions);
	if (soap_out_tmd__RelayOutputOptions(soap, tag?tag:"tmd:RelayOutputOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__RelayOutputOptions * SOAP_FMAC4 soap_get_tmd__RelayOutputOptions(struct soap *soap, struct tmd__RelayOutputOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__RelayOutputOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tmd__Capabilities(struct soap *soap, struct tmd__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->VideoSources = 0;
	a->VideoOutputs = 0;
	a->AudioSources = 0;
	a->AudioOutputs = 0;
	a->RelayOutputs = 0;
	a->SerialPorts = 0;
	a->DigitalInputs = 0;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tmd__Capabilities(struct soap *soap, const struct tmd__Capabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tmd__Capabilities(struct soap *soap, const char *tag, int id, const struct tmd__Capabilities *a, const char *type)
{
	soap_set_attr(soap, "VideoSources", soap_int2s(soap, a->VideoSources), 1);
	soap_set_attr(soap, "VideoOutputs", soap_int2s(soap, a->VideoOutputs), 1);
	soap_set_attr(soap, "AudioSources", soap_int2s(soap, a->AudioSources), 1);
	soap_set_attr(soap, "AudioOutputs", soap_int2s(soap, a->AudioOutputs), 1);
	soap_set_attr(soap, "RelayOutputs", soap_int2s(soap, a->RelayOutputs), 1);
	soap_set_attr(soap, "SerialPorts", soap_int2s(soap, a->SerialPorts), 1);
	soap_set_attr(soap, "DigitalInputs", soap_int2s(soap, a->DigitalInputs), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tmd__Capabilities), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tmd__Capabilities * SOAP_FMAC4 soap_in_tmd__Capabilities(struct soap *soap, const char *tag, struct tmd__Capabilities *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tmd__Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tmd__Capabilities, sizeof(struct tmd__Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tmd__Capabilities(soap, a);
	if (soap_s2int(soap, soap_attr_value(soap, "VideoSources", 0), &a->VideoSources))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "VideoOutputs", 0), &a->VideoOutputs))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "AudioSources", 0), &a->AudioSources))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "AudioOutputs", 0), &a->AudioOutputs))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "RelayOutputs", 0), &a->RelayOutputs))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "SerialPorts", 0), &a->SerialPorts))
		return NULL;
	if (soap_s2int(soap, soap_attr_value(soap, "DigitalInputs", 0), &a->DigitalInputs))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tmd__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tmd__Capabilities, 0, sizeof(struct tmd__Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tmd__Capabilities(struct soap *soap, const struct tmd__Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tmd__Capabilities);
	if (soap_out_tmd__Capabilities(soap, tag?tag:"tmd:Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tmd__Capabilities * SOAP_FMAC4 soap_get_tmd__Capabilities(struct soap *soap, struct tmd__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tmd__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsStateResponse(struct soap *soap, struct _tad__GetAnalyticsStateResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->State = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsStateResponse(struct soap *soap, const struct _tad__GetAnalyticsStateResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsStateInformation(soap, &a->State);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsStateResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsStateResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsStateResponse), type))
		return soap->error;
	if (a->State)
		soap_element_result(soap, "tad:State");
	if (a->State)
	{	if (soap_out_PointerTott__AnalyticsStateInformation(soap, "tad:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:State"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsStateResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsStateResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsStateResponse *a, const char *type)
{
	size_t soap_flag_State = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsStateResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsStateResponse, sizeof(struct _tad__GetAnalyticsStateResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsStateResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_State && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsStateInformation(soap, "tad:State", &a->State, "tt:AnalyticsStateInformation"))
				{	soap_flag_State--;
					continue;
				}
			soap_check_result(soap, "tad:State");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsStateResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsStateResponse, 0, sizeof(struct _tad__GetAnalyticsStateResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsStateResponse(struct soap *soap, const struct _tad__GetAnalyticsStateResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsStateResponse);
	if (soap_out__tad__GetAnalyticsStateResponse(soap, tag?tag:"tad:GetAnalyticsStateResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsStateResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsStateResponse(struct soap *soap, struct _tad__GetAnalyticsStateResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsStateResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsState(struct soap *soap, struct _tad__GetAnalyticsState *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsState(struct soap *soap, const struct _tad__GetAnalyticsState *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsState(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsState *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsState), type))
		return soap->error;
	if (a->AnalyticsEngineControlToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:AnalyticsEngineControlToken", -1, &a->AnalyticsEngineControlToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:AnalyticsEngineControlToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsState * SOAP_FMAC4 soap_in__tad__GetAnalyticsState(struct soap *soap, const char *tag, struct _tad__GetAnalyticsState *a, const char *type)
{
	size_t soap_flag_AnalyticsEngineControlToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsState, sizeof(struct _tad__GetAnalyticsState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsState(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AnalyticsEngineControlToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:AnalyticsEngineControlToken", &a->AnalyticsEngineControlToken, "tt:ReferenceToken"))
				{	soap_flag_AnalyticsEngineControlToken--;
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
	{	a = (struct _tad__GetAnalyticsState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsState, 0, sizeof(struct _tad__GetAnalyticsState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AnalyticsEngineControlToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsState(struct soap *soap, const struct _tad__GetAnalyticsState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsState);
	if (soap_out__tad__GetAnalyticsState(soap, tag?tag:"tad:GetAnalyticsState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsState * SOAP_FMAC4 soap_get__tad__GetAnalyticsState(struct soap *soap, struct _tad__GetAnalyticsState *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__DeleteAnalyticsEngineInputsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__DeleteAnalyticsEngineInputsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, int id, const struct _tad__DeleteAnalyticsEngineInputsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineInputsResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_in__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, struct _tad__DeleteAnalyticsEngineInputsResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__DeleteAnalyticsEngineInputsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineInputsResponse, sizeof(struct _tad__DeleteAnalyticsEngineInputsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__DeleteAnalyticsEngineInputsResponse(soap, a);
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
	{	a = (struct _tad__DeleteAnalyticsEngineInputsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__DeleteAnalyticsEngineInputsResponse, 0, sizeof(struct _tad__DeleteAnalyticsEngineInputsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__DeleteAnalyticsEngineInputsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__DeleteAnalyticsEngineInputsResponse);
	if (soap_out__tad__DeleteAnalyticsEngineInputsResponse(soap, tag?tag:"tad:DeleteAnalyticsEngineInputsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_get__tad__DeleteAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__DeleteAnalyticsEngineInputsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__DeleteAnalyticsEngineInputsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__DeleteAnalyticsEngineInputs(struct soap *soap, struct _tad__DeleteAnalyticsEngineInputs *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfigurationToken = 0;
	a->ConfigurationToken = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__DeleteAnalyticsEngineInputs(struct soap *soap, const struct _tad__DeleteAnalyticsEngineInputs *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->ConfigurationToken)
	{	int i;
		for (i = 0; i < a->__sizeConfigurationToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->ConfigurationToken + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__DeleteAnalyticsEngineInputs(struct soap *soap, const char *tag, int id, const struct _tad__DeleteAnalyticsEngineInputs *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineInputs), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	int i;
		for (i = 0; i < a->__sizeConfigurationToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, a->ConfigurationToken + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineInputs * SOAP_FMAC4 soap_in__tad__DeleteAnalyticsEngineInputs(struct soap *soap, const char *tag, struct _tad__DeleteAnalyticsEngineInputs *a, const char *type)
{
	struct soap_blist *soap_blist_ConfigurationToken = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__DeleteAnalyticsEngineInputs *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineInputs, sizeof(struct _tad__DeleteAnalyticsEngineInputs), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__DeleteAnalyticsEngineInputs(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:ConfigurationToken", 1, NULL))
			{	if (a->ConfigurationToken == NULL)
				{	if (soap_blist_ConfigurationToken == NULL)
						soap_blist_ConfigurationToken = soap_new_block(soap);
					a->ConfigurationToken = (char **)soap_push_block(soap, soap_blist_ConfigurationToken, sizeof(char *));
					if (a->ConfigurationToken == NULL)
						return NULL;
					*a->ConfigurationToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", a->ConfigurationToken, "tt:ReferenceToken"))
				{	a->__sizeConfigurationToken++;
					a->ConfigurationToken = NULL;
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
		if (a->ConfigurationToken)
			soap_pop_block(soap, soap_blist_ConfigurationToken);
		if (a->__sizeConfigurationToken)
			a->ConfigurationToken = (char **)soap_save_block(soap, soap_blist_ConfigurationToken, NULL, 1);
		else
		{	a->ConfigurationToken = NULL;
			if (soap_blist_ConfigurationToken)
				soap_end_block(soap, soap_blist_ConfigurationToken);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__DeleteAnalyticsEngineInputs *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__DeleteAnalyticsEngineInputs, 0, sizeof(struct _tad__DeleteAnalyticsEngineInputs), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfigurationToken < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__DeleteAnalyticsEngineInputs(struct soap *soap, const struct _tad__DeleteAnalyticsEngineInputs *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__DeleteAnalyticsEngineInputs);
	if (soap_out__tad__DeleteAnalyticsEngineInputs(soap, tag?tag:"tad:DeleteAnalyticsEngineInputs", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineInputs * SOAP_FMAC4 soap_get__tad__DeleteAnalyticsEngineInputs(struct soap *soap, struct _tad__DeleteAnalyticsEngineInputs *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__DeleteAnalyticsEngineInputs(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, struct _tad__GetVideoAnalyticsConfigurationResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const struct _tad__GetVideoAnalyticsConfigurationResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "tad:Configuration");
	if (a->Configuration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, struct _tad__GetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetVideoAnalyticsConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetVideoAnalyticsConfigurationResponse, sizeof(struct _tad__GetVideoAnalyticsConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetVideoAnalyticsConfigurationResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "tad:Configuration", &a->Configuration, "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_Configuration--;
					continue;
				}
			soap_check_result(soap, "tad:Configuration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetVideoAnalyticsConfigurationResponse, 0, sizeof(struct _tad__GetVideoAnalyticsConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, const struct _tad__GetVideoAnalyticsConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetVideoAnalyticsConfigurationResponse);
	if (soap_out__tad__GetVideoAnalyticsConfigurationResponse(soap, tag?tag:"tad:GetVideoAnalyticsConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__tad__GetVideoAnalyticsConfigurationResponse(struct soap *soap, struct _tad__GetVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetVideoAnalyticsConfiguration(struct soap *soap, struct _tad__GetVideoAnalyticsConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetVideoAnalyticsConfiguration(struct soap *soap, const struct _tad__GetVideoAnalyticsConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const struct _tad__GetVideoAnalyticsConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__tad__GetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, struct _tad__GetVideoAnalyticsConfiguration *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetVideoAnalyticsConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetVideoAnalyticsConfiguration, sizeof(struct _tad__GetVideoAnalyticsConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetVideoAnalyticsConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tad__GetVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetVideoAnalyticsConfiguration, 0, sizeof(struct _tad__GetVideoAnalyticsConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetVideoAnalyticsConfiguration(struct soap *soap, const struct _tad__GetVideoAnalyticsConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetVideoAnalyticsConfiguration);
	if (soap_out__tad__GetVideoAnalyticsConfiguration(soap, tag?tag:"tad:GetVideoAnalyticsConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__tad__GetVideoAnalyticsConfiguration(struct soap *soap, struct _tad__GetVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, struct _tad__GetAnalyticsDeviceStreamUriResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->Uri);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, const struct _tad__GetAnalyticsDeviceStreamUriResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->Uri);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsDeviceStreamUriResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUriResponse), type))
		return soap->error;
	if (a->Uri)
		soap_element_result(soap, "tad:Uri");
	if (a->Uri)
	{	if (soap_out_xsd__anyURI(soap, "tad:Uri", -1, &a->Uri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Uri"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsDeviceStreamUriResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsDeviceStreamUriResponse *a, const char *type)
{
	size_t soap_flag_Uri = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsDeviceStreamUriResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUriResponse, sizeof(struct _tad__GetAnalyticsDeviceStreamUriResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsDeviceStreamUriResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Uri && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tad:Uri", &a->Uri, "xsd:anyURI"))
				{	soap_flag_Uri--;
					continue;
				}
			soap_check_result(soap, "tad:Uri");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsDeviceStreamUriResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUriResponse, 0, sizeof(struct _tad__GetAnalyticsDeviceStreamUriResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Uri > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, const struct _tad__GetAnalyticsDeviceStreamUriResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUriResponse);
	if (soap_out__tad__GetAnalyticsDeviceStreamUriResponse(soap, tag?tag:"tad:GetAnalyticsDeviceStreamUriResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsDeviceStreamUriResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsDeviceStreamUriResponse(struct soap *soap, struct _tad__GetAnalyticsDeviceStreamUriResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsDeviceStreamUriResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, struct _tad__GetAnalyticsDeviceStreamUri *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->StreamSetup = NULL;
	soap_default_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, const struct _tad__GetAnalyticsDeviceStreamUri *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__StreamSetup(soap, &a->StreamSetup);
	soap_serialize_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsDeviceStreamUri *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUri), type))
		return soap->error;
	if (a->StreamSetup)
	{	if (soap_out_PointerTott__StreamSetup(soap, "tad:StreamSetup", -1, &a->StreamSetup, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:StreamSetup"))
		return soap->error;
	if (a->AnalyticsEngineControlToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:AnalyticsEngineControlToken", -1, &a->AnalyticsEngineControlToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:AnalyticsEngineControlToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsDeviceStreamUri * SOAP_FMAC4 soap_in__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, const char *tag, struct _tad__GetAnalyticsDeviceStreamUri *a, const char *type)
{
	size_t soap_flag_StreamSetup = 1;
	size_t soap_flag_AnalyticsEngineControlToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsDeviceStreamUri *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUri, sizeof(struct _tad__GetAnalyticsDeviceStreamUri), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsDeviceStreamUri(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_StreamSetup && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__StreamSetup(soap, "tad:StreamSetup", &a->StreamSetup, "tt:StreamSetup"))
				{	soap_flag_StreamSetup--;
					continue;
				}
			if (soap_flag_AnalyticsEngineControlToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:AnalyticsEngineControlToken", &a->AnalyticsEngineControlToken, "tt:ReferenceToken"))
				{	soap_flag_AnalyticsEngineControlToken--;
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
	{	a = (struct _tad__GetAnalyticsDeviceStreamUri *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUri, 0, sizeof(struct _tad__GetAnalyticsDeviceStreamUri), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_StreamSetup > 0 || soap_flag_AnalyticsEngineControlToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, const struct _tad__GetAnalyticsDeviceStreamUri *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsDeviceStreamUri);
	if (soap_out__tad__GetAnalyticsDeviceStreamUri(soap, tag?tag:"tad:GetAnalyticsDeviceStreamUri", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsDeviceStreamUri * SOAP_FMAC4 soap_get__tad__GetAnalyticsDeviceStreamUri(struct soap *soap, struct _tad__GetAnalyticsDeviceStreamUri *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsDeviceStreamUri(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__GetAnalyticsEngineInputsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfiguration = 0;
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineInputsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
		{
			soap_embedded(soap, a->Configuration + i, SOAP_TYPE_tt__AnalyticsEngineInput);
			soap_serialize_tt__AnalyticsEngineInput(soap, a->Configuration + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineInputsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfiguration");
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
			if (soap_out_tt__AnalyticsEngineInput(soap, "tad:Configuration", -1, a->Configuration + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineInputsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Configuration = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineInputsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputsResponse, sizeof(struct _tad__GetAnalyticsEngineInputsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineInputsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:Configuration", 1, NULL))
			{	if (a->Configuration == NULL)
				{	if (soap_blist_Configuration == NULL)
						soap_blist_Configuration = soap_new_block(soap);
					a->Configuration = (struct tt__AnalyticsEngineInput *)soap_push_block(soap, soap_blist_Configuration, sizeof(struct tt__AnalyticsEngineInput));
					if (a->Configuration == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngineInput(soap, a->Configuration);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngineInput(soap, "tad:Configuration", a->Configuration, "tt:AnalyticsEngineInput"))
				{	a->__sizeConfiguration++;
					a->Configuration = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Configuration)
			soap_pop_block(soap, soap_blist_Configuration);
		if (a->__sizeConfiguration)
			a->Configuration = (struct tt__AnalyticsEngineInput *)soap_save_block(soap, soap_blist_Configuration, NULL, 1);
		else
		{	a->Configuration = NULL;
			if (soap_blist_Configuration)
				soap_end_block(soap, soap_blist_Configuration);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEngineInputsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineInputsResponse, 0, sizeof(struct _tad__GetAnalyticsEngineInputsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineInputsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineInputsResponse);
	if (soap_out__tad__GetAnalyticsEngineInputsResponse(soap, tag?tag:"tad:GetAnalyticsEngineInputsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__GetAnalyticsEngineInputsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineInputsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineInputs(struct soap *soap, struct _tad__GetAnalyticsEngineInputs *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineInputs(struct soap *soap, const struct _tad__GetAnalyticsEngineInputs *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineInputs(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineInputs *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputs), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputs * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineInputs(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineInputs *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineInputs *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputs, sizeof(struct _tad__GetAnalyticsEngineInputs), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineInputs(soap, a);
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
	{	a = (struct _tad__GetAnalyticsEngineInputs *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineInputs, 0, sizeof(struct _tad__GetAnalyticsEngineInputs), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineInputs(struct soap *soap, const struct _tad__GetAnalyticsEngineInputs *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineInputs);
	if (soap_out__tad__GetAnalyticsEngineInputs(soap, tag?tag:"tad:GetAnalyticsEngineInputs", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputs * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineInputs(struct soap *soap, struct _tad__GetAnalyticsEngineInputs *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineInputs(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineInputResponse(struct soap *soap, struct _tad__GetAnalyticsEngineInputResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineInputResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineInputResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineInput(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineInputResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineInputResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "tad:Configuration");
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngineInput(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineInputResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineInputResponse *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineInputResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineInputResponse, sizeof(struct _tad__GetAnalyticsEngineInputResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineInputResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInput(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngineInput"))
				{	soap_flag_Configuration--;
					continue;
				}
			soap_check_result(soap, "tad:Configuration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEngineInputResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineInputResponse, 0, sizeof(struct _tad__GetAnalyticsEngineInputResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineInputResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineInputResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineInputResponse);
	if (soap_out__tad__GetAnalyticsEngineInputResponse(soap, tag?tag:"tad:GetAnalyticsEngineInputResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInputResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineInputResponse(struct soap *soap, struct _tad__GetAnalyticsEngineInputResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineInputResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineInput(struct soap *soap, struct _tad__GetAnalyticsEngineInput *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineInput(struct soap *soap, const struct _tad__GetAnalyticsEngineInput *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineInput(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineInput *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineInput), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInput * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineInput(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineInput *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineInput *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineInput, sizeof(struct _tad__GetAnalyticsEngineInput), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineInput(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tad__GetAnalyticsEngineInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineInput, 0, sizeof(struct _tad__GetAnalyticsEngineInput), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineInput(struct soap *soap, const struct _tad__GetAnalyticsEngineInput *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineInput);
	if (soap_out__tad__GetAnalyticsEngineInput(soap, tag?tag:"tad:GetAnalyticsEngineInput", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineInput * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineInput(struct soap *soap, struct _tad__GetAnalyticsEngineInput *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetAnalyticsEngineInputResponse(struct soap *soap, struct _tad__SetAnalyticsEngineInputResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetAnalyticsEngineInputResponse(struct soap *soap, const struct _tad__SetAnalyticsEngineInputResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetAnalyticsEngineInputResponse(struct soap *soap, const char *tag, int id, const struct _tad__SetAnalyticsEngineInputResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetAnalyticsEngineInputResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineInputResponse * SOAP_FMAC4 soap_in__tad__SetAnalyticsEngineInputResponse(struct soap *soap, const char *tag, struct _tad__SetAnalyticsEngineInputResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetAnalyticsEngineInputResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetAnalyticsEngineInputResponse, sizeof(struct _tad__SetAnalyticsEngineInputResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetAnalyticsEngineInputResponse(soap, a);
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
	{	a = (struct _tad__SetAnalyticsEngineInputResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetAnalyticsEngineInputResponse, 0, sizeof(struct _tad__SetAnalyticsEngineInputResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetAnalyticsEngineInputResponse(struct soap *soap, const struct _tad__SetAnalyticsEngineInputResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetAnalyticsEngineInputResponse);
	if (soap_out__tad__SetAnalyticsEngineInputResponse(soap, tag?tag:"tad:SetAnalyticsEngineInputResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineInputResponse * SOAP_FMAC4 soap_get__tad__SetAnalyticsEngineInputResponse(struct soap *soap, struct _tad__SetAnalyticsEngineInputResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetAnalyticsEngineInputResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetAnalyticsEngineInput(struct soap *soap, struct _tad__SetAnalyticsEngineInput *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
	soap_default_xsd__boolean(soap, &a->ForcePersistence);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetAnalyticsEngineInput(struct soap *soap, const struct _tad__SetAnalyticsEngineInput *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineInput(soap, &a->Configuration);
	soap_embedded(soap, &a->ForcePersistence, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetAnalyticsEngineInput(struct soap *soap, const char *tag, int id, const struct _tad__SetAnalyticsEngineInput *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetAnalyticsEngineInput), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngineInput(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tad:ForcePersistence", -1, &a->ForcePersistence, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineInput * SOAP_FMAC4 soap_in__tad__SetAnalyticsEngineInput(struct soap *soap, const char *tag, struct _tad__SetAnalyticsEngineInput *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	size_t soap_flag_ForcePersistence = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetAnalyticsEngineInput *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetAnalyticsEngineInput, sizeof(struct _tad__SetAnalyticsEngineInput), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetAnalyticsEngineInput(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInput(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngineInput"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap_flag_ForcePersistence && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tad:ForcePersistence", &a->ForcePersistence, "xsd:boolean"))
				{	soap_flag_ForcePersistence--;
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
	{	a = (struct _tad__SetAnalyticsEngineInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetAnalyticsEngineInput, 0, sizeof(struct _tad__SetAnalyticsEngineInput), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0 || soap_flag_ForcePersistence > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetAnalyticsEngineInput(struct soap *soap, const struct _tad__SetAnalyticsEngineInput *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetAnalyticsEngineInput);
	if (soap_out__tad__SetAnalyticsEngineInput(soap, tag?tag:"tad:SetAnalyticsEngineInput", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineInput * SOAP_FMAC4 soap_get__tad__SetAnalyticsEngineInput(struct soap *soap, struct _tad__SetAnalyticsEngineInput *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetAnalyticsEngineInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, struct _tad__SetVideoAnalyticsConfigurationResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const struct _tad__SetVideoAnalyticsConfigurationResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, int id, const struct _tad__SetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetVideoAnalyticsConfigurationResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_in__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const char *tag, struct _tad__SetVideoAnalyticsConfigurationResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetVideoAnalyticsConfigurationResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetVideoAnalyticsConfigurationResponse, sizeof(struct _tad__SetVideoAnalyticsConfigurationResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetVideoAnalyticsConfigurationResponse(soap, a);
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
	{	a = (struct _tad__SetVideoAnalyticsConfigurationResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetVideoAnalyticsConfigurationResponse, 0, sizeof(struct _tad__SetVideoAnalyticsConfigurationResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, const struct _tad__SetVideoAnalyticsConfigurationResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetVideoAnalyticsConfigurationResponse);
	if (soap_out__tad__SetVideoAnalyticsConfigurationResponse(soap, tag?tag:"tad:SetVideoAnalyticsConfigurationResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetVideoAnalyticsConfigurationResponse * SOAP_FMAC4 soap_get__tad__SetVideoAnalyticsConfigurationResponse(struct soap *soap, struct _tad__SetVideoAnalyticsConfigurationResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetVideoAnalyticsConfigurationResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetVideoAnalyticsConfiguration(struct soap *soap, struct _tad__SetVideoAnalyticsConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
	soap_default_xsd__boolean(soap, &a->ForcePersistence);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetVideoAnalyticsConfiguration(struct soap *soap, const struct _tad__SetVideoAnalyticsConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &a->Configuration);
	soap_embedded(soap, &a->ForcePersistence, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, int id, const struct _tad__SetVideoAnalyticsConfiguration *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetVideoAnalyticsConfiguration), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tad:ForcePersistence", -1, &a->ForcePersistence, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_in__tad__SetVideoAnalyticsConfiguration(struct soap *soap, const char *tag, struct _tad__SetVideoAnalyticsConfiguration *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	size_t soap_flag_ForcePersistence = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetVideoAnalyticsConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetVideoAnalyticsConfiguration, sizeof(struct _tad__SetVideoAnalyticsConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetVideoAnalyticsConfiguration(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "tad:Configuration", &a->Configuration, "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap_flag_ForcePersistence && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tad:ForcePersistence", &a->ForcePersistence, "xsd:boolean"))
				{	soap_flag_ForcePersistence--;
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
	{	a = (struct _tad__SetVideoAnalyticsConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetVideoAnalyticsConfiguration, 0, sizeof(struct _tad__SetVideoAnalyticsConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0 || soap_flag_ForcePersistence > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetVideoAnalyticsConfiguration(struct soap *soap, const struct _tad__SetVideoAnalyticsConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetVideoAnalyticsConfiguration);
	if (soap_out__tad__SetVideoAnalyticsConfiguration(soap, tag?tag:"tad:SetVideoAnalyticsConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetVideoAnalyticsConfiguration * SOAP_FMAC4 soap_get__tad__SetVideoAnalyticsConfiguration(struct soap *soap, struct _tad__SetVideoAnalyticsConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetVideoAnalyticsConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEnginesResponse(struct soap *soap, struct _tad__GetAnalyticsEnginesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfiguration = 0;
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEnginesResponse(struct soap *soap, const struct _tad__GetAnalyticsEnginesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
		{
			soap_embedded(soap, a->Configuration + i, SOAP_TYPE_tt__AnalyticsEngine);
			soap_serialize_tt__AnalyticsEngine(soap, a->Configuration + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEnginesResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEnginesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEnginesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfiguration");
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
			if (soap_out_tt__AnalyticsEngine(soap, "tad:Configuration", -1, a->Configuration + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEnginesResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEnginesResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEnginesResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Configuration = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEnginesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEnginesResponse, sizeof(struct _tad__GetAnalyticsEnginesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEnginesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:Configuration", 1, NULL))
			{	if (a->Configuration == NULL)
				{	if (soap_blist_Configuration == NULL)
						soap_blist_Configuration = soap_new_block(soap);
					a->Configuration = (struct tt__AnalyticsEngine *)soap_push_block(soap, soap_blist_Configuration, sizeof(struct tt__AnalyticsEngine));
					if (a->Configuration == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngine(soap, a->Configuration);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngine(soap, "tad:Configuration", a->Configuration, "tt:AnalyticsEngine"))
				{	a->__sizeConfiguration++;
					a->Configuration = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Configuration)
			soap_pop_block(soap, soap_blist_Configuration);
		if (a->__sizeConfiguration)
			a->Configuration = (struct tt__AnalyticsEngine *)soap_save_block(soap, soap_blist_Configuration, NULL, 1);
		else
		{	a->Configuration = NULL;
			if (soap_blist_Configuration)
				soap_end_block(soap, soap_blist_Configuration);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEnginesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEnginesResponse, 0, sizeof(struct _tad__GetAnalyticsEnginesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEnginesResponse(struct soap *soap, const struct _tad__GetAnalyticsEnginesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEnginesResponse);
	if (soap_out__tad__GetAnalyticsEnginesResponse(soap, tag?tag:"tad:GetAnalyticsEnginesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEnginesResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEnginesResponse(struct soap *soap, struct _tad__GetAnalyticsEnginesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEnginesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngines(struct soap *soap, struct _tad__GetAnalyticsEngines *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngines(struct soap *soap, const struct _tad__GetAnalyticsEngines *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngines(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngines *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngines), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngines * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngines(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngines *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngines *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngines, sizeof(struct _tad__GetAnalyticsEngines), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngines(soap, a);
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
	{	a = (struct _tad__GetAnalyticsEngines *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngines, 0, sizeof(struct _tad__GetAnalyticsEngines), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngines(struct soap *soap, const struct _tad__GetAnalyticsEngines *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngines);
	if (soap_out__tad__GetAnalyticsEngines(soap, tag?tag:"tad:GetAnalyticsEngines", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngines * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngines(struct soap *soap, struct _tad__GetAnalyticsEngines *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngines(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngine(struct soap *soap, struct tt__AnalyticsEngine *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->AnalyticsEngineConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngine(struct soap *soap, const struct tt__AnalyticsEngine *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_PointerTott__AnalyticsDeviceEngineConfiguration(soap, &a->AnalyticsEngineConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngine(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngine *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngine), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->AnalyticsEngineConfiguration)
	{	if (soap_out_PointerTott__AnalyticsDeviceEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", -1, &a->AnalyticsEngineConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngine * SOAP_FMAC4 soap_in_tt__AnalyticsEngine(struct soap *soap, const char *tag, struct tt__AnalyticsEngine *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_AnalyticsEngineConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngine *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngine, sizeof(struct tt__AnalyticsEngine), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngine(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &a->Name, "tt:Name"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_UseCount && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:UseCount", &a->UseCount, "xsd:int"))
				{	soap_flag_UseCount--;
					continue;
				}
			if (soap_flag_AnalyticsEngineConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceEngineConfiguration(soap, "tt:AnalyticsEngineConfiguration", &a->AnalyticsEngineConfiguration, "tt:AnalyticsDeviceEngineConfiguration"))
				{	soap_flag_AnalyticsEngineConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngine *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngine, 0, sizeof(struct tt__AnalyticsEngine), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_AnalyticsEngineConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngine(struct soap *soap, const struct tt__AnalyticsEngine *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngine);
	if (soap_out_tt__AnalyticsEngine(soap, tag?tag:"tt:AnalyticsEngine", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngine * SOAP_FMAC4 soap_get_tt__AnalyticsEngine(struct soap *soap, struct tt__AnalyticsEngine *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngine(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineResponse(struct soap *soap, struct _tad__GetAnalyticsEngineResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngine(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "tad:Configuration");
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngine(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineResponse *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineResponse, sizeof(struct _tad__GetAnalyticsEngineResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngine(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngine"))
				{	soap_flag_Configuration--;
					continue;
				}
			soap_check_result(soap, "tad:Configuration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEngineResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineResponse, 0, sizeof(struct _tad__GetAnalyticsEngineResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineResponse);
	if (soap_out__tad__GetAnalyticsEngineResponse(soap, tag?tag:"tad:GetAnalyticsEngineResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineResponse(struct soap *soap, struct _tad__GetAnalyticsEngineResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngine(struct soap *soap, struct _tad__GetAnalyticsEngine *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngine(struct soap *soap, const struct _tad__GetAnalyticsEngine *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngine(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngine *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngine), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngine * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngine(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngine *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngine *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngine, sizeof(struct _tad__GetAnalyticsEngine), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngine(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tad__GetAnalyticsEngine *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngine, 0, sizeof(struct _tad__GetAnalyticsEngine), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngine(struct soap *soap, const struct _tad__GetAnalyticsEngine *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngine);
	if (soap_out__tad__GetAnalyticsEngine(soap, tag?tag:"tad:GetAnalyticsEngine", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngine * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngine(struct soap *soap, struct _tad__GetAnalyticsEngine *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngine(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, struct _tad__GetAnalyticsEngineControlsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAnalyticsEngineControls = 0;
	a->AnalyticsEngineControls = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineControlsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AnalyticsEngineControls)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsEngineControls; i++)
		{
			soap_embedded(soap, a->AnalyticsEngineControls + i, SOAP_TYPE_tt__AnalyticsEngineControl);
			soap_serialize_tt__AnalyticsEngineControl(soap, a->AnalyticsEngineControls + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineControlsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineControlsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAnalyticsEngineControls");
	if (a->AnalyticsEngineControls)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsEngineControls; i++)
			if (soap_out_tt__AnalyticsEngineControl(soap, "tad:AnalyticsEngineControls", -1, a->AnalyticsEngineControls + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControlsResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineControlsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_AnalyticsEngineControls = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineControlsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineControlsResponse, sizeof(struct _tad__GetAnalyticsEngineControlsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineControlsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:AnalyticsEngineControls", 1, NULL))
			{	if (a->AnalyticsEngineControls == NULL)
				{	if (soap_blist_AnalyticsEngineControls == NULL)
						soap_blist_AnalyticsEngineControls = soap_new_block(soap);
					a->AnalyticsEngineControls = (struct tt__AnalyticsEngineControl *)soap_push_block(soap, soap_blist_AnalyticsEngineControls, sizeof(struct tt__AnalyticsEngineControl));
					if (a->AnalyticsEngineControls == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngineControl(soap, a->AnalyticsEngineControls);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngineControl(soap, "tad:AnalyticsEngineControls", a->AnalyticsEngineControls, "tt:AnalyticsEngineControl"))
				{	a->__sizeAnalyticsEngineControls++;
					a->AnalyticsEngineControls = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeAnalyticsEngineControls");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->AnalyticsEngineControls)
			soap_pop_block(soap, soap_blist_AnalyticsEngineControls);
		if (a->__sizeAnalyticsEngineControls)
			a->AnalyticsEngineControls = (struct tt__AnalyticsEngineControl *)soap_save_block(soap, soap_blist_AnalyticsEngineControls, NULL, 1);
		else
		{	a->AnalyticsEngineControls = NULL;
			if (soap_blist_AnalyticsEngineControls)
				soap_end_block(soap, soap_blist_AnalyticsEngineControls);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEngineControlsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineControlsResponse, 0, sizeof(struct _tad__GetAnalyticsEngineControlsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeAnalyticsEngineControls < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineControlsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineControlsResponse);
	if (soap_out__tad__GetAnalyticsEngineControlsResponse(soap, tag?tag:"tad:GetAnalyticsEngineControlsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControlsResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineControlsResponse(struct soap *soap, struct _tad__GetAnalyticsEngineControlsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineControlsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineControls(struct soap *soap, struct _tad__GetAnalyticsEngineControls *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineControls(struct soap *soap, const struct _tad__GetAnalyticsEngineControls *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineControls(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineControls *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineControls), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControls * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineControls(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineControls *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineControls *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineControls, sizeof(struct _tad__GetAnalyticsEngineControls), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineControls(soap, a);
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
	{	a = (struct _tad__GetAnalyticsEngineControls *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineControls, 0, sizeof(struct _tad__GetAnalyticsEngineControls), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineControls(struct soap *soap, const struct _tad__GetAnalyticsEngineControls *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineControls);
	if (soap_out__tad__GetAnalyticsEngineControls(soap, tag?tag:"tad:GetAnalyticsEngineControls", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControls * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineControls(struct soap *soap, struct _tad__GetAnalyticsEngineControls *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineControls(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineControlResponse(struct soap *soap, struct _tad__GetAnalyticsEngineControlResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineControlResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineControl(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineControlResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineControlResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineControlResponse), type))
		return soap->error;
	if (a->Configuration)
		soap_element_result(soap, "tad:Configuration");
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControlResponse * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineControlResponse(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineControlResponse *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineControlResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineControlResponse, sizeof(struct _tad__GetAnalyticsEngineControlResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineControlResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngineControl"))
				{	soap_flag_Configuration--;
					continue;
				}
			soap_check_result(soap, "tad:Configuration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetAnalyticsEngineControlResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineControlResponse, 0, sizeof(struct _tad__GetAnalyticsEngineControlResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__GetAnalyticsEngineControlResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineControlResponse);
	if (soap_out__tad__GetAnalyticsEngineControlResponse(soap, tag?tag:"tad:GetAnalyticsEngineControlResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControlResponse * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineControlResponse(struct soap *soap, struct _tad__GetAnalyticsEngineControlResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineControlResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetAnalyticsEngineControl(struct soap *soap, struct _tad__GetAnalyticsEngineControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetAnalyticsEngineControl(struct soap *soap, const struct _tad__GetAnalyticsEngineControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetAnalyticsEngineControl(struct soap *soap, const char *tag, int id, const struct _tad__GetAnalyticsEngineControl *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetAnalyticsEngineControl), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControl * SOAP_FMAC4 soap_in__tad__GetAnalyticsEngineControl(struct soap *soap, const char *tag, struct _tad__GetAnalyticsEngineControl *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetAnalyticsEngineControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetAnalyticsEngineControl, sizeof(struct _tad__GetAnalyticsEngineControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetAnalyticsEngineControl(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tad__GetAnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetAnalyticsEngineControl, 0, sizeof(struct _tad__GetAnalyticsEngineControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetAnalyticsEngineControl(struct soap *soap, const struct _tad__GetAnalyticsEngineControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetAnalyticsEngineControl);
	if (soap_out__tad__GetAnalyticsEngineControl(soap, tag?tag:"tad:GetAnalyticsEngineControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetAnalyticsEngineControl * SOAP_FMAC4 soap_get__tad__GetAnalyticsEngineControl(struct soap *soap, struct _tad__GetAnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetAnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetAnalyticsEngineControlResponse(struct soap *soap, struct _tad__SetAnalyticsEngineControlResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__SetAnalyticsEngineControlResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetAnalyticsEngineControlResponse(struct soap *soap, const char *tag, int id, const struct _tad__SetAnalyticsEngineControlResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetAnalyticsEngineControlResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineControlResponse * SOAP_FMAC4 soap_in__tad__SetAnalyticsEngineControlResponse(struct soap *soap, const char *tag, struct _tad__SetAnalyticsEngineControlResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetAnalyticsEngineControlResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetAnalyticsEngineControlResponse, sizeof(struct _tad__SetAnalyticsEngineControlResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetAnalyticsEngineControlResponse(soap, a);
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
	{	a = (struct _tad__SetAnalyticsEngineControlResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetAnalyticsEngineControlResponse, 0, sizeof(struct _tad__SetAnalyticsEngineControlResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__SetAnalyticsEngineControlResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetAnalyticsEngineControlResponse);
	if (soap_out__tad__SetAnalyticsEngineControlResponse(soap, tag?tag:"tad:SetAnalyticsEngineControlResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineControlResponse * SOAP_FMAC4 soap_get__tad__SetAnalyticsEngineControlResponse(struct soap *soap, struct _tad__SetAnalyticsEngineControlResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetAnalyticsEngineControlResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__SetAnalyticsEngineControl(struct soap *soap, struct _tad__SetAnalyticsEngineControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
	soap_default_xsd__boolean(soap, &a->ForcePersistence);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__SetAnalyticsEngineControl(struct soap *soap, const struct _tad__SetAnalyticsEngineControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineControl(soap, &a->Configuration);
	soap_embedded(soap, &a->ForcePersistence, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__SetAnalyticsEngineControl(struct soap *soap, const char *tag, int id, const struct _tad__SetAnalyticsEngineControl *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__SetAnalyticsEngineControl), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tad:ForcePersistence", -1, &a->ForcePersistence, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineControl * SOAP_FMAC4 soap_in__tad__SetAnalyticsEngineControl(struct soap *soap, const char *tag, struct _tad__SetAnalyticsEngineControl *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	size_t soap_flag_ForcePersistence = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__SetAnalyticsEngineControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__SetAnalyticsEngineControl, sizeof(struct _tad__SetAnalyticsEngineControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__SetAnalyticsEngineControl(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngineControl"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap_flag_ForcePersistence && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tad:ForcePersistence", &a->ForcePersistence, "xsd:boolean"))
				{	soap_flag_ForcePersistence--;
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
	{	a = (struct _tad__SetAnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__SetAnalyticsEngineControl, 0, sizeof(struct _tad__SetAnalyticsEngineControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0 || soap_flag_ForcePersistence > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__SetAnalyticsEngineControl(struct soap *soap, const struct _tad__SetAnalyticsEngineControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__SetAnalyticsEngineControl);
	if (soap_out__tad__SetAnalyticsEngineControl(soap, tag?tag:"tad:SetAnalyticsEngineControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__SetAnalyticsEngineControl * SOAP_FMAC4 soap_get__tad__SetAnalyticsEngineControl(struct soap *soap, struct _tad__SetAnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__SetAnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, struct _tad__CreateAnalyticsEngineControlResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfiguration = 0;
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__CreateAnalyticsEngineControlResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
		{
			soap_embedded(soap, a->Configuration + i, SOAP_TYPE_tt__AnalyticsEngineInput);
			soap_serialize_tt__AnalyticsEngineInput(soap, a->Configuration + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, const char *tag, int id, const struct _tad__CreateAnalyticsEngineControlResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__CreateAnalyticsEngineControlResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfiguration");
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
			if (soap_out_tt__AnalyticsEngineInput(soap, "tad:Configuration", -1, a->Configuration + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineControlResponse * SOAP_FMAC4 soap_in__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, const char *tag, struct _tad__CreateAnalyticsEngineControlResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Configuration = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__CreateAnalyticsEngineControlResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__CreateAnalyticsEngineControlResponse, sizeof(struct _tad__CreateAnalyticsEngineControlResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__CreateAnalyticsEngineControlResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:Configuration", 1, NULL))
			{	if (a->Configuration == NULL)
				{	if (soap_blist_Configuration == NULL)
						soap_blist_Configuration = soap_new_block(soap);
					a->Configuration = (struct tt__AnalyticsEngineInput *)soap_push_block(soap, soap_blist_Configuration, sizeof(struct tt__AnalyticsEngineInput));
					if (a->Configuration == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngineInput(soap, a->Configuration);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngineInput(soap, "tad:Configuration", a->Configuration, "tt:AnalyticsEngineInput"))
				{	a->__sizeConfiguration++;
					a->Configuration = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Configuration)
			soap_pop_block(soap, soap_blist_Configuration);
		if (a->__sizeConfiguration)
			a->Configuration = (struct tt__AnalyticsEngineInput *)soap_save_block(soap, soap_blist_Configuration, NULL, 1);
		else
		{	a->Configuration = NULL;
			if (soap_blist_Configuration)
				soap_end_block(soap, soap_blist_Configuration);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__CreateAnalyticsEngineControlResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__CreateAnalyticsEngineControlResponse, 0, sizeof(struct _tad__CreateAnalyticsEngineControlResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__CreateAnalyticsEngineControlResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__CreateAnalyticsEngineControlResponse);
	if (soap_out__tad__CreateAnalyticsEngineControlResponse(soap, tag?tag:"tad:CreateAnalyticsEngineControlResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineControlResponse * SOAP_FMAC4 soap_get__tad__CreateAnalyticsEngineControlResponse(struct soap *soap, struct _tad__CreateAnalyticsEngineControlResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__CreateAnalyticsEngineControlResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineControl(struct soap *soap, struct tt__AnalyticsEngineControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	soap_default_tt__ReferenceToken(soap, &a->EngineToken);
	soap_default_tt__ReferenceToken(soap, &a->EngineConfigToken);
	a->__sizeInputToken = 0;
	a->InputToken = NULL;
	a->__sizeReceiverToken = 0;
	a->ReceiverToken = NULL;
	a->Multicast = NULL;
	a->Subscription = NULL;
	soap_default_tt__ModeOfOperation(soap, &a->Mode);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineControl(struct soap *soap, const struct tt__AnalyticsEngineControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_tt__ReferenceToken(soap, &a->EngineToken);
	soap_serialize_tt__ReferenceToken(soap, &a->EngineConfigToken);
	if (a->InputToken)
	{	int i;
		for (i = 0; i < a->__sizeInputToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->InputToken + i);
		}
	}
	if (a->ReceiverToken)
	{	int i;
		for (i = 0; i < a->__sizeReceiverToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->ReceiverToken + i);
		}
	}
	soap_serialize_PointerTott__MulticastConfiguration(soap, &a->Multicast);
	soap_serialize_PointerTott__Config(soap, &a->Subscription);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineControl(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineControl *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineControl), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->EngineToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:EngineToken", -1, &a->EngineToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EngineToken"))
		return soap->error;
	if (a->EngineConfigToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:EngineConfigToken", -1, &a->EngineConfigToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:EngineConfigToken"))
		return soap->error;
	if (a->InputToken)
	{	int i;
		for (i = 0; i < a->__sizeInputToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:InputToken", -1, a->InputToken + i, ""))
				return soap->error;
	}
	if (a->ReceiverToken)
	{	int i;
		for (i = 0; i < a->__sizeReceiverToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:ReceiverToken", -1, a->ReceiverToken + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MulticastConfiguration(soap, "tt:Multicast", -1, &a->Multicast, ""))
		return soap->error;
	if (a->Subscription)
	{	if (soap_out_PointerTott__Config(soap, "tt:Subscription", -1, &a->Subscription, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Subscription"))
		return soap->error;
	if (soap_out_tt__ModeOfOperation(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineControl * SOAP_FMAC4 soap_in_tt__AnalyticsEngineControl(struct soap *soap, const char *tag, struct tt__AnalyticsEngineControl *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_EngineToken = 1;
	size_t soap_flag_EngineConfigToken = 1;
	struct soap_blist *soap_blist_InputToken = NULL;
	struct soap_blist *soap_blist_ReceiverToken = NULL;
	size_t soap_flag_Multicast = 1;
	size_t soap_flag_Subscription = 1;
	size_t soap_flag_Mode = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineControl, sizeof(struct tt__AnalyticsEngineControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineControl(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &a->Name, "tt:Name"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_UseCount && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:UseCount", &a->UseCount, "xsd:int"))
				{	soap_flag_UseCount--;
					continue;
				}
			if (soap_flag_EngineToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:EngineToken", &a->EngineToken, "tt:ReferenceToken"))
				{	soap_flag_EngineToken--;
					continue;
				}
			if (soap_flag_EngineConfigToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:EngineConfigToken", &a->EngineConfigToken, "tt:ReferenceToken"))
				{	soap_flag_EngineConfigToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:InputToken", 1, NULL))
			{	if (a->InputToken == NULL)
				{	if (soap_blist_InputToken == NULL)
						soap_blist_InputToken = soap_new_block(soap);
					a->InputToken = (char **)soap_push_block(soap, soap_blist_InputToken, sizeof(char *));
					if (a->InputToken == NULL)
						return NULL;
					*a->InputToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:InputToken", a->InputToken, "tt:ReferenceToken"))
				{	a->__sizeInputToken++;
					a->InputToken = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:ReceiverToken", 1, NULL))
			{	if (a->ReceiverToken == NULL)
				{	if (soap_blist_ReceiverToken == NULL)
						soap_blist_ReceiverToken = soap_new_block(soap);
					a->ReceiverToken = (char **)soap_push_block(soap, soap_blist_ReceiverToken, sizeof(char *));
					if (a->ReceiverToken == NULL)
						return NULL;
					*a->ReceiverToken = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:ReceiverToken", a->ReceiverToken, "tt:ReferenceToken"))
				{	a->__sizeReceiverToken++;
					a->ReceiverToken = NULL;
					continue;
				}
			}
			if (soap_flag_Multicast && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MulticastConfiguration(soap, "tt:Multicast", &a->Multicast, "tt:MulticastConfiguration"))
				{	soap_flag_Multicast--;
					continue;
				}
			if (soap_flag_Subscription && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Config(soap, "tt:Subscription", &a->Subscription, "tt:Config"))
				{	soap_flag_Subscription--;
					continue;
				}
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ModeOfOperation(soap, "tt:Mode", &a->Mode, "tt:ModeOfOperation"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->InputToken)
			soap_pop_block(soap, soap_blist_InputToken);
		if (a->__sizeInputToken)
			a->InputToken = (char **)soap_save_block(soap, soap_blist_InputToken, NULL, 1);
		else
		{	a->InputToken = NULL;
			if (soap_blist_InputToken)
				soap_end_block(soap, soap_blist_InputToken);
		}
		if (a->ReceiverToken)
			soap_pop_block(soap, soap_blist_ReceiverToken);
		if (a->__sizeReceiverToken)
			a->ReceiverToken = (char **)soap_save_block(soap, soap_blist_ReceiverToken, NULL, 1);
		else
		{	a->ReceiverToken = NULL;
			if (soap_blist_ReceiverToken)
				soap_end_block(soap, soap_blist_ReceiverToken);
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineControl, 0, sizeof(struct tt__AnalyticsEngineControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_EngineToken > 0 || soap_flag_EngineConfigToken > 0 || a->__sizeInputToken < 1 || a->__sizeReceiverToken < 1 || soap_flag_Subscription > 0 || soap_flag_Mode > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineControl(struct soap *soap, const struct tt__AnalyticsEngineControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineControl);
	if (soap_out_tt__AnalyticsEngineControl(soap, tag?tag:"tt:AnalyticsEngineControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineControl * SOAP_FMAC4 soap_get_tt__AnalyticsEngineControl(struct soap *soap, struct tt__AnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__CreateAnalyticsEngineControl(struct soap *soap, struct _tad__CreateAnalyticsEngineControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__CreateAnalyticsEngineControl(struct soap *soap, const struct _tad__CreateAnalyticsEngineControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsEngineControl(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__CreateAnalyticsEngineControl(struct soap *soap, const char *tag, int id, const struct _tad__CreateAnalyticsEngineControl *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__CreateAnalyticsEngineControl), type))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Configuration"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineControl * SOAP_FMAC4 soap_in__tad__CreateAnalyticsEngineControl(struct soap *soap, const char *tag, struct _tad__CreateAnalyticsEngineControl *a, const char *type)
{
	size_t soap_flag_Configuration = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__CreateAnalyticsEngineControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__CreateAnalyticsEngineControl, sizeof(struct _tad__CreateAnalyticsEngineControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__CreateAnalyticsEngineControl(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineControl(soap, "tad:Configuration", &a->Configuration, "tt:AnalyticsEngineControl"))
				{	soap_flag_Configuration--;
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
	{	a = (struct _tad__CreateAnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__CreateAnalyticsEngineControl, 0, sizeof(struct _tad__CreateAnalyticsEngineControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__CreateAnalyticsEngineControl(struct soap *soap, const struct _tad__CreateAnalyticsEngineControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__CreateAnalyticsEngineControl);
	if (soap_out__tad__CreateAnalyticsEngineControl(soap, tag?tag:"tad:CreateAnalyticsEngineControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineControl * SOAP_FMAC4 soap_get__tad__CreateAnalyticsEngineControl(struct soap *soap, struct _tad__CreateAnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__CreateAnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__CreateAnalyticsEngineInputsResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfiguration = 0;
	a->Configuration = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__CreateAnalyticsEngineInputsResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
		{
			soap_embedded(soap, a->Configuration + i, SOAP_TYPE_tt__AnalyticsEngineInput);
			soap_serialize_tt__AnalyticsEngineInput(soap, a->Configuration + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, int id, const struct _tad__CreateAnalyticsEngineInputsResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__CreateAnalyticsEngineInputsResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeConfiguration");
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
			if (soap_out_tt__AnalyticsEngineInput(soap, "tad:Configuration", -1, a->Configuration + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_in__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, const char *tag, struct _tad__CreateAnalyticsEngineInputsResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Configuration = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__CreateAnalyticsEngineInputsResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__CreateAnalyticsEngineInputsResponse, sizeof(struct _tad__CreateAnalyticsEngineInputsResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__CreateAnalyticsEngineInputsResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:Configuration", 1, NULL))
			{	if (a->Configuration == NULL)
				{	if (soap_blist_Configuration == NULL)
						soap_blist_Configuration = soap_new_block(soap);
					a->Configuration = (struct tt__AnalyticsEngineInput *)soap_push_block(soap, soap_blist_Configuration, sizeof(struct tt__AnalyticsEngineInput));
					if (a->Configuration == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngineInput(soap, a->Configuration);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngineInput(soap, "tad:Configuration", a->Configuration, "tt:AnalyticsEngineInput"))
				{	a->__sizeConfiguration++;
					a->Configuration = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeConfiguration");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Configuration)
			soap_pop_block(soap, soap_blist_Configuration);
		if (a->__sizeConfiguration)
			a->Configuration = (struct tt__AnalyticsEngineInput *)soap_save_block(soap, soap_blist_Configuration, NULL, 1);
		else
		{	a->Configuration = NULL;
			if (soap_blist_Configuration)
				soap_end_block(soap, soap_blist_Configuration);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__CreateAnalyticsEngineInputsResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__CreateAnalyticsEngineInputsResponse, 0, sizeof(struct _tad__CreateAnalyticsEngineInputsResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, const struct _tad__CreateAnalyticsEngineInputsResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__CreateAnalyticsEngineInputsResponse);
	if (soap_out__tad__CreateAnalyticsEngineInputsResponse(soap, tag?tag:"tad:CreateAnalyticsEngineInputsResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineInputsResponse * SOAP_FMAC4 soap_get__tad__CreateAnalyticsEngineInputsResponse(struct soap *soap, struct _tad__CreateAnalyticsEngineInputsResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__CreateAnalyticsEngineInputsResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineInput(struct soap *soap, struct tt__AnalyticsEngineInput *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__Name(soap, &a->Name);
	soap_default_int(soap, &a->UseCount);
	soap_default_tt__ReferenceToken(soap, &a->token);
	a->SourceIdentification = NULL;
	a->VideoInput = NULL;
	a->MetadataInput = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineInput(struct soap *soap, const struct tt__AnalyticsEngineInput *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Name(soap, &a->Name);
	soap_embedded(soap, &a->UseCount, SOAP_TYPE_int);
	soap_serialize_PointerTott__SourceIdentification(soap, &a->SourceIdentification);
	soap_serialize_PointerTott__VideoEncoderConfiguration(soap, &a->VideoInput);
	soap_serialize_PointerTott__MetadataInput(soap, &a->MetadataInput);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInput(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineInput *a, const char *type)
{
	if (a->token)
		soap_set_attr(soap, "token", a->token, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInput), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (soap_out_int(soap, "tt:UseCount", -1, &a->UseCount, ""))
		return soap->error;
	if (a->SourceIdentification)
	{	if (soap_out_PointerTott__SourceIdentification(soap, "tt:SourceIdentification", -1, &a->SourceIdentification, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceIdentification"))
		return soap->error;
	if (a->VideoInput)
	{	if (soap_out_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoInput", -1, &a->VideoInput, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoInput"))
		return soap->error;
	if (a->MetadataInput)
	{	if (soap_out_PointerTott__MetadataInput(soap, "tt:MetadataInput", -1, &a->MetadataInput, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MetadataInput"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInput * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInput(struct soap *soap, const char *tag, struct tt__AnalyticsEngineInput *a, const char *type)
{
	size_t soap_flag_Name = 1;
	size_t soap_flag_UseCount = 1;
	size_t soap_flag_SourceIdentification = 1;
	size_t soap_flag_VideoInput = 1;
	size_t soap_flag_MetadataInput = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineInput *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInput, sizeof(struct tt__AnalyticsEngineInput), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineInput(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "token", 1), &a->token, 0, 64))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &a->Name, "tt:Name"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_UseCount && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:UseCount", &a->UseCount, "xsd:int"))
				{	soap_flag_UseCount--;
					continue;
				}
			if (soap_flag_SourceIdentification && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceIdentification(soap, "tt:SourceIdentification", &a->SourceIdentification, "tt:SourceIdentification"))
				{	soap_flag_SourceIdentification--;
					continue;
				}
			if (soap_flag_VideoInput && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoEncoderConfiguration(soap, "tt:VideoInput", &a->VideoInput, "tt:VideoEncoderConfiguration"))
				{	soap_flag_VideoInput--;
					continue;
				}
			if (soap_flag_MetadataInput && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataInput(soap, "tt:MetadataInput", &a->MetadataInput, "tt:MetadataInput"))
				{	soap_flag_MetadataInput--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngineInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInput, 0, sizeof(struct tt__AnalyticsEngineInput), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || soap_flag_UseCount > 0 || soap_flag_SourceIdentification > 0 || soap_flag_VideoInput > 0 || soap_flag_MetadataInput > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineInput(struct soap *soap, const struct tt__AnalyticsEngineInput *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInput);
	if (soap_out_tt__AnalyticsEngineInput(soap, tag?tag:"tt:AnalyticsEngineInput", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInput * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInput(struct soap *soap, struct tt__AnalyticsEngineInput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__CreateAnalyticsEngineInputs(struct soap *soap, struct _tad__CreateAnalyticsEngineInputs *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeConfiguration = 0;
	a->Configuration = NULL;
	a->__sizeForcePersistence = 0;
	a->ForcePersistence = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__CreateAnalyticsEngineInputs(struct soap *soap, const struct _tad__CreateAnalyticsEngineInputs *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
		{
			soap_embedded(soap, a->Configuration + i, SOAP_TYPE_tt__AnalyticsEngineInput);
			soap_serialize_tt__AnalyticsEngineInput(soap, a->Configuration + i);
		}
	}
	if (a->ForcePersistence)
	{	int i;
		for (i = 0; i < a->__sizeForcePersistence; i++)
		{
			soap_embedded(soap, a->ForcePersistence + i, SOAP_TYPE_xsd__boolean);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__CreateAnalyticsEngineInputs(struct soap *soap, const char *tag, int id, const struct _tad__CreateAnalyticsEngineInputs *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__CreateAnalyticsEngineInputs), type))
		return soap->error;
	if (a->Configuration)
	{	int i;
		for (i = 0; i < a->__sizeConfiguration; i++)
			if (soap_out_tt__AnalyticsEngineInput(soap, "tad:Configuration", -1, a->Configuration + i, ""))
				return soap->error;
	}
	if (a->ForcePersistence)
	{	int i;
		for (i = 0; i < a->__sizeForcePersistence; i++)
			if (soap_out_xsd__boolean(soap, "tad:ForcePersistence", -1, a->ForcePersistence + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineInputs * SOAP_FMAC4 soap_in__tad__CreateAnalyticsEngineInputs(struct soap *soap, const char *tag, struct _tad__CreateAnalyticsEngineInputs *a, const char *type)
{
	struct soap_blist *soap_blist_Configuration = NULL;
	struct soap_blist *soap_blist_ForcePersistence = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__CreateAnalyticsEngineInputs *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__CreateAnalyticsEngineInputs, sizeof(struct _tad__CreateAnalyticsEngineInputs), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__CreateAnalyticsEngineInputs(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:Configuration", 1, NULL))
			{	if (a->Configuration == NULL)
				{	if (soap_blist_Configuration == NULL)
						soap_blist_Configuration = soap_new_block(soap);
					a->Configuration = (struct tt__AnalyticsEngineInput *)soap_push_block(soap, soap_blist_Configuration, sizeof(struct tt__AnalyticsEngineInput));
					if (a->Configuration == NULL)
						return NULL;
					soap_default_tt__AnalyticsEngineInput(soap, a->Configuration);
				}
				soap_revert(soap);
				if (soap_in_tt__AnalyticsEngineInput(soap, "tad:Configuration", a->Configuration, "tt:AnalyticsEngineInput"))
				{	a->__sizeConfiguration++;
					a->Configuration = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tad:ForcePersistence", 1, NULL))
			{	if (a->ForcePersistence == NULL)
				{	if (soap_blist_ForcePersistence == NULL)
						soap_blist_ForcePersistence = soap_new_block(soap);
					a->ForcePersistence = (enum xsd__boolean *)soap_push_block(soap, soap_blist_ForcePersistence, sizeof(enum xsd__boolean));
					if (a->ForcePersistence == NULL)
						return NULL;
					soap_default_xsd__boolean(soap, a->ForcePersistence);
				}
				soap_revert(soap);
				if (soap_in_xsd__boolean(soap, "tad:ForcePersistence", a->ForcePersistence, "xsd:boolean"))
				{	a->__sizeForcePersistence++;
					a->ForcePersistence = NULL;
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
		if (a->Configuration)
			soap_pop_block(soap, soap_blist_Configuration);
		if (a->__sizeConfiguration)
			a->Configuration = (struct tt__AnalyticsEngineInput *)soap_save_block(soap, soap_blist_Configuration, NULL, 1);
		else
		{	a->Configuration = NULL;
			if (soap_blist_Configuration)
				soap_end_block(soap, soap_blist_Configuration);
		}
		if (a->ForcePersistence)
			soap_pop_block(soap, soap_blist_ForcePersistence);
		if (a->__sizeForcePersistence)
			a->ForcePersistence = (enum xsd__boolean *)soap_save_block(soap, soap_blist_ForcePersistence, NULL, 1);
		else
		{	a->ForcePersistence = NULL;
			if (soap_blist_ForcePersistence)
				soap_end_block(soap, soap_blist_ForcePersistence);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__CreateAnalyticsEngineInputs *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__CreateAnalyticsEngineInputs, 0, sizeof(struct _tad__CreateAnalyticsEngineInputs), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeConfiguration < 1 || a->__sizeForcePersistence < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__CreateAnalyticsEngineInputs(struct soap *soap, const struct _tad__CreateAnalyticsEngineInputs *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__CreateAnalyticsEngineInputs);
	if (soap_out__tad__CreateAnalyticsEngineInputs(soap, tag?tag:"tad:CreateAnalyticsEngineInputs", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__CreateAnalyticsEngineInputs * SOAP_FMAC4 soap_get__tad__CreateAnalyticsEngineInputs(struct soap *soap, struct _tad__CreateAnalyticsEngineInputs *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__CreateAnalyticsEngineInputs(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, struct _tad__DeleteAnalyticsEngineControlResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__DeleteAnalyticsEngineControlResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, const char *tag, int id, const struct _tad__DeleteAnalyticsEngineControlResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineControlResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineControlResponse * SOAP_FMAC4 soap_in__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, const char *tag, struct _tad__DeleteAnalyticsEngineControlResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__DeleteAnalyticsEngineControlResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineControlResponse, sizeof(struct _tad__DeleteAnalyticsEngineControlResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__DeleteAnalyticsEngineControlResponse(soap, a);
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
	{	a = (struct _tad__DeleteAnalyticsEngineControlResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__DeleteAnalyticsEngineControlResponse, 0, sizeof(struct _tad__DeleteAnalyticsEngineControlResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, const struct _tad__DeleteAnalyticsEngineControlResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__DeleteAnalyticsEngineControlResponse);
	if (soap_out__tad__DeleteAnalyticsEngineControlResponse(soap, tag?tag:"tad:DeleteAnalyticsEngineControlResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineControlResponse * SOAP_FMAC4 soap_get__tad__DeleteAnalyticsEngineControlResponse(struct soap *soap, struct _tad__DeleteAnalyticsEngineControlResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__DeleteAnalyticsEngineControlResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__DeleteAnalyticsEngineControl(struct soap *soap, struct _tad__DeleteAnalyticsEngineControl *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__DeleteAnalyticsEngineControl(struct soap *soap, const struct _tad__DeleteAnalyticsEngineControl *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__DeleteAnalyticsEngineControl(struct soap *soap, const char *tag, int id, const struct _tad__DeleteAnalyticsEngineControl *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineControl), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tad:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineControl * SOAP_FMAC4 soap_in__tad__DeleteAnalyticsEngineControl(struct soap *soap, const char *tag, struct _tad__DeleteAnalyticsEngineControl *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__DeleteAnalyticsEngineControl *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__DeleteAnalyticsEngineControl, sizeof(struct _tad__DeleteAnalyticsEngineControl), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__DeleteAnalyticsEngineControl(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tad:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tad__DeleteAnalyticsEngineControl *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__DeleteAnalyticsEngineControl, 0, sizeof(struct _tad__DeleteAnalyticsEngineControl), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__DeleteAnalyticsEngineControl(struct soap *soap, const struct _tad__DeleteAnalyticsEngineControl *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__DeleteAnalyticsEngineControl);
	if (soap_out__tad__DeleteAnalyticsEngineControl(soap, tag?tag:"tad:DeleteAnalyticsEngineControl", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__DeleteAnalyticsEngineControl * SOAP_FMAC4 soap_get__tad__DeleteAnalyticsEngineControl(struct soap *soap, struct _tad__DeleteAnalyticsEngineControl *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__DeleteAnalyticsEngineControl(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetServiceCapabilitiesResponse(struct soap *soap, struct _tad__GetServiceCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Capabilities = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tad__GetServiceCapabilitiesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTotad__Capabilities(soap, &a->Capabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const struct _tad__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tad:Capabilities");
	if (a->Capabilities)
	{	if (soap_out_PointerTotad__Capabilities(soap, "tad:Capabilities", -1, &a->Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tad:Capabilities"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__tad__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, struct _tad__GetServiceCapabilitiesResponse *a, const char *type)
{
	size_t soap_flag_Capabilities = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetServiceCapabilitiesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetServiceCapabilitiesResponse, sizeof(struct _tad__GetServiceCapabilitiesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetServiceCapabilitiesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotad__Capabilities(soap, "tad:Capabilities", &a->Capabilities, "tad:Capabilities"))
				{	soap_flag_Capabilities--;
					continue;
				}
			soap_check_result(soap, "tad:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tad__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetServiceCapabilitiesResponse, 0, sizeof(struct _tad__GetServiceCapabilitiesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tad__GetServiceCapabilitiesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetServiceCapabilitiesResponse);
	if (soap_out__tad__GetServiceCapabilitiesResponse(soap, tag?tag:"tad:GetServiceCapabilitiesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__tad__GetServiceCapabilitiesResponse(struct soap *soap, struct _tad__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tad__GetServiceCapabilities(struct soap *soap, struct _tad__GetServiceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tad__GetServiceCapabilities(struct soap *soap, const struct _tad__GetServiceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tad__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const struct _tad__GetServiceCapabilities *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tad__GetServiceCapabilities), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tad__GetServiceCapabilities * SOAP_FMAC4 soap_in__tad__GetServiceCapabilities(struct soap *soap, const char *tag, struct _tad__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tad__GetServiceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tad__GetServiceCapabilities, sizeof(struct _tad__GetServiceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tad__GetServiceCapabilities(soap, a);
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
	{	a = (struct _tad__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tad__GetServiceCapabilities, 0, sizeof(struct _tad__GetServiceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tad__GetServiceCapabilities(struct soap *soap, const struct _tad__GetServiceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tad__GetServiceCapabilities);
	if (soap_out__tad__GetServiceCapabilities(soap, tag?tag:"tad:GetServiceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tad__GetServiceCapabilities * SOAP_FMAC4 soap_get__tad__GetServiceCapabilities(struct soap *soap, struct _tad__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tad__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tad__Capabilities(struct soap *soap, struct tad__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tad__Capabilities(struct soap *soap, const struct tad__Capabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tad__Capabilities(struct soap *soap, const char *tag, int id, const struct tad__Capabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tad__Capabilities), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tad__Capabilities * SOAP_FMAC4 soap_in_tad__Capabilities(struct soap *soap, const char *tag, struct tad__Capabilities *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tad__Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tad__Capabilities, sizeof(struct tad__Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tad__Capabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tad__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tad__Capabilities, 0, sizeof(struct tad__Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tad__Capabilities(struct soap *soap, const struct tad__Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tad__Capabilities);
	if (soap_out_tad__Capabilities(soap, tag?tag:"tad:Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tad__Capabilities * SOAP_FMAC4 soap_get_tad__Capabilities(struct soap *soap, struct tad__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tad__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetAnalyticsModulesResponse(struct soap *soap, struct _tan__GetAnalyticsModulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAnalyticsModule = 0;
	a->AnalyticsModule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetAnalyticsModulesResponse(struct soap *soap, const struct _tan__GetAnalyticsModulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
		{
			soap_embedded(soap, a->AnalyticsModule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->AnalyticsModule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetAnalyticsModulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__GetAnalyticsModulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetAnalyticsModulesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeAnalyticsModule");
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
			if (soap_out_tt__Config(soap, "tan:AnalyticsModule", -1, a->AnalyticsModule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetAnalyticsModulesResponse * SOAP_FMAC4 soap_in__tan__GetAnalyticsModulesResponse(struct soap *soap, const char *tag, struct _tan__GetAnalyticsModulesResponse *a, const char *type)
{
	struct soap_blist *soap_blist_AnalyticsModule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetAnalyticsModulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetAnalyticsModulesResponse, sizeof(struct _tan__GetAnalyticsModulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetAnalyticsModulesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:AnalyticsModule", 1, NULL))
			{	if (a->AnalyticsModule == NULL)
				{	if (soap_blist_AnalyticsModule == NULL)
						soap_blist_AnalyticsModule = soap_new_block(soap);
					a->AnalyticsModule = (struct tt__Config *)soap_push_block(soap, soap_blist_AnalyticsModule, sizeof(struct tt__Config));
					if (a->AnalyticsModule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->AnalyticsModule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:AnalyticsModule", a->AnalyticsModule, "tt:Config"))
				{	a->__sizeAnalyticsModule++;
					a->AnalyticsModule = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeAnalyticsModule");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->AnalyticsModule)
			soap_pop_block(soap, soap_blist_AnalyticsModule);
		if (a->__sizeAnalyticsModule)
			a->AnalyticsModule = (struct tt__Config *)soap_save_block(soap, soap_blist_AnalyticsModule, NULL, 1);
		else
		{	a->AnalyticsModule = NULL;
			if (soap_blist_AnalyticsModule)
				soap_end_block(soap, soap_blist_AnalyticsModule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__GetAnalyticsModulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetAnalyticsModulesResponse, 0, sizeof(struct _tan__GetAnalyticsModulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetAnalyticsModulesResponse(struct soap *soap, const struct _tan__GetAnalyticsModulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetAnalyticsModulesResponse);
	if (soap_out__tan__GetAnalyticsModulesResponse(soap, tag?tag:"tan:GetAnalyticsModulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetAnalyticsModulesResponse * SOAP_FMAC4 soap_get__tan__GetAnalyticsModulesResponse(struct soap *soap, struct _tan__GetAnalyticsModulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetAnalyticsModulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetAnalyticsModules(struct soap *soap, struct _tan__GetAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetAnalyticsModules(struct soap *soap, const struct _tan__GetAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetAnalyticsModules(struct soap *soap, const char *tag, int id, const struct _tan__GetAnalyticsModules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetAnalyticsModules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetAnalyticsModules * SOAP_FMAC4 soap_in__tan__GetAnalyticsModules(struct soap *soap, const char *tag, struct _tan__GetAnalyticsModules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetAnalyticsModules, sizeof(struct _tan__GetAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetAnalyticsModules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tan__GetAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetAnalyticsModules, 0, sizeof(struct _tan__GetAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetAnalyticsModules(struct soap *soap, const struct _tan__GetAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetAnalyticsModules);
	if (soap_out__tan__GetAnalyticsModules(soap, tag?tag:"tan:GetAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetAnalyticsModules * SOAP_FMAC4 soap_get__tan__GetAnalyticsModules(struct soap *soap, struct _tan__GetAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__ModifyAnalyticsModulesResponse(struct soap *soap, struct _tan__ModifyAnalyticsModulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__ModifyAnalyticsModulesResponse(struct soap *soap, const struct _tan__ModifyAnalyticsModulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__ModifyAnalyticsModulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__ModifyAnalyticsModulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__ModifyAnalyticsModulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__ModifyAnalyticsModulesResponse * SOAP_FMAC4 soap_in__tan__ModifyAnalyticsModulesResponse(struct soap *soap, const char *tag, struct _tan__ModifyAnalyticsModulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__ModifyAnalyticsModulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__ModifyAnalyticsModulesResponse, sizeof(struct _tan__ModifyAnalyticsModulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__ModifyAnalyticsModulesResponse(soap, a);
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
	{	a = (struct _tan__ModifyAnalyticsModulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__ModifyAnalyticsModulesResponse, 0, sizeof(struct _tan__ModifyAnalyticsModulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__ModifyAnalyticsModulesResponse(struct soap *soap, const struct _tan__ModifyAnalyticsModulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__ModifyAnalyticsModulesResponse);
	if (soap_out__tan__ModifyAnalyticsModulesResponse(soap, tag?tag:"tan:ModifyAnalyticsModulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__ModifyAnalyticsModulesResponse * SOAP_FMAC4 soap_get__tan__ModifyAnalyticsModulesResponse(struct soap *soap, struct _tan__ModifyAnalyticsModulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__ModifyAnalyticsModulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__ModifyAnalyticsModules(struct soap *soap, struct _tan__ModifyAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeAnalyticsModule = 0;
	a->AnalyticsModule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__ModifyAnalyticsModules(struct soap *soap, const struct _tan__ModifyAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
		{
			soap_embedded(soap, a->AnalyticsModule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->AnalyticsModule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__ModifyAnalyticsModules(struct soap *soap, const char *tag, int id, const struct _tan__ModifyAnalyticsModules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__ModifyAnalyticsModules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
			if (soap_out_tt__Config(soap, "tan:AnalyticsModule", -1, a->AnalyticsModule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__ModifyAnalyticsModules * SOAP_FMAC4 soap_in__tan__ModifyAnalyticsModules(struct soap *soap, const char *tag, struct _tan__ModifyAnalyticsModules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_AnalyticsModule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__ModifyAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__ModifyAnalyticsModules, sizeof(struct _tan__ModifyAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__ModifyAnalyticsModules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:AnalyticsModule", 1, NULL))
			{	if (a->AnalyticsModule == NULL)
				{	if (soap_blist_AnalyticsModule == NULL)
						soap_blist_AnalyticsModule = soap_new_block(soap);
					a->AnalyticsModule = (struct tt__Config *)soap_push_block(soap, soap_blist_AnalyticsModule, sizeof(struct tt__Config));
					if (a->AnalyticsModule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->AnalyticsModule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:AnalyticsModule", a->AnalyticsModule, "tt:Config"))
				{	a->__sizeAnalyticsModule++;
					a->AnalyticsModule = NULL;
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
		if (a->AnalyticsModule)
			soap_pop_block(soap, soap_blist_AnalyticsModule);
		if (a->__sizeAnalyticsModule)
			a->AnalyticsModule = (struct tt__Config *)soap_save_block(soap, soap_blist_AnalyticsModule, NULL, 1);
		else
		{	a->AnalyticsModule = NULL;
			if (soap_blist_AnalyticsModule)
				soap_end_block(soap, soap_blist_AnalyticsModule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__ModifyAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__ModifyAnalyticsModules, 0, sizeof(struct _tan__ModifyAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeAnalyticsModule < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__ModifyAnalyticsModules(struct soap *soap, const struct _tan__ModifyAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__ModifyAnalyticsModules);
	if (soap_out__tan__ModifyAnalyticsModules(soap, tag?tag:"tan:ModifyAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__ModifyAnalyticsModules * SOAP_FMAC4 soap_get__tan__ModifyAnalyticsModules(struct soap *soap, struct _tan__ModifyAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__ModifyAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__DeleteAnalyticsModulesResponse(struct soap *soap, struct _tan__DeleteAnalyticsModulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__DeleteAnalyticsModulesResponse(struct soap *soap, const struct _tan__DeleteAnalyticsModulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__DeleteAnalyticsModulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__DeleteAnalyticsModulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__DeleteAnalyticsModulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__DeleteAnalyticsModulesResponse * SOAP_FMAC4 soap_in__tan__DeleteAnalyticsModulesResponse(struct soap *soap, const char *tag, struct _tan__DeleteAnalyticsModulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__DeleteAnalyticsModulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__DeleteAnalyticsModulesResponse, sizeof(struct _tan__DeleteAnalyticsModulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__DeleteAnalyticsModulesResponse(soap, a);
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
	{	a = (struct _tan__DeleteAnalyticsModulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__DeleteAnalyticsModulesResponse, 0, sizeof(struct _tan__DeleteAnalyticsModulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__DeleteAnalyticsModulesResponse(struct soap *soap, const struct _tan__DeleteAnalyticsModulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__DeleteAnalyticsModulesResponse);
	if (soap_out__tan__DeleteAnalyticsModulesResponse(soap, tag?tag:"tan:DeleteAnalyticsModulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__DeleteAnalyticsModulesResponse * SOAP_FMAC4 soap_get__tan__DeleteAnalyticsModulesResponse(struct soap *soap, struct _tan__DeleteAnalyticsModulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__DeleteAnalyticsModulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__DeleteAnalyticsModules(struct soap *soap, struct _tan__DeleteAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeAnalyticsModuleName = 0;
	a->AnalyticsModuleName = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__DeleteAnalyticsModules(struct soap *soap, const struct _tan__DeleteAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->AnalyticsModuleName)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleName; i++)
		{
			soap_serialize_string(soap, a->AnalyticsModuleName + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__DeleteAnalyticsModules(struct soap *soap, const char *tag, int id, const struct _tan__DeleteAnalyticsModules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__DeleteAnalyticsModules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->AnalyticsModuleName)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleName; i++)
			if (soap_out_string(soap, "tan:AnalyticsModuleName", -1, a->AnalyticsModuleName + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__DeleteAnalyticsModules * SOAP_FMAC4 soap_in__tan__DeleteAnalyticsModules(struct soap *soap, const char *tag, struct _tan__DeleteAnalyticsModules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_AnalyticsModuleName = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__DeleteAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__DeleteAnalyticsModules, sizeof(struct _tan__DeleteAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__DeleteAnalyticsModules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:AnalyticsModuleName", 1, NULL))
			{	if (a->AnalyticsModuleName == NULL)
				{	if (soap_blist_AnalyticsModuleName == NULL)
						soap_blist_AnalyticsModuleName = soap_new_block(soap);
					a->AnalyticsModuleName = (char **)soap_push_block(soap, soap_blist_AnalyticsModuleName, sizeof(char *));
					if (a->AnalyticsModuleName == NULL)
						return NULL;
					*a->AnalyticsModuleName = NULL;
				}
				soap_revert(soap);
				if (soap_in_string(soap, "tan:AnalyticsModuleName", a->AnalyticsModuleName, "xsd:string"))
				{	a->__sizeAnalyticsModuleName++;
					a->AnalyticsModuleName = NULL;
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
		if (a->AnalyticsModuleName)
			soap_pop_block(soap, soap_blist_AnalyticsModuleName);
		if (a->__sizeAnalyticsModuleName)
			a->AnalyticsModuleName = (char **)soap_save_block(soap, soap_blist_AnalyticsModuleName, NULL, 1);
		else
		{	a->AnalyticsModuleName = NULL;
			if (soap_blist_AnalyticsModuleName)
				soap_end_block(soap, soap_blist_AnalyticsModuleName);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__DeleteAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__DeleteAnalyticsModules, 0, sizeof(struct _tan__DeleteAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeAnalyticsModuleName < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__DeleteAnalyticsModules(struct soap *soap, const struct _tan__DeleteAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__DeleteAnalyticsModules);
	if (soap_out__tan__DeleteAnalyticsModules(soap, tag?tag:"tan:DeleteAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__DeleteAnalyticsModules * SOAP_FMAC4 soap_get__tan__DeleteAnalyticsModules(struct soap *soap, struct _tan__DeleteAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__DeleteAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__CreateAnalyticsModulesResponse(struct soap *soap, struct _tan__CreateAnalyticsModulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__CreateAnalyticsModulesResponse(struct soap *soap, const struct _tan__CreateAnalyticsModulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__CreateAnalyticsModulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__CreateAnalyticsModulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__CreateAnalyticsModulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__CreateAnalyticsModulesResponse * SOAP_FMAC4 soap_in__tan__CreateAnalyticsModulesResponse(struct soap *soap, const char *tag, struct _tan__CreateAnalyticsModulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__CreateAnalyticsModulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__CreateAnalyticsModulesResponse, sizeof(struct _tan__CreateAnalyticsModulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__CreateAnalyticsModulesResponse(soap, a);
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
	{	a = (struct _tan__CreateAnalyticsModulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__CreateAnalyticsModulesResponse, 0, sizeof(struct _tan__CreateAnalyticsModulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__CreateAnalyticsModulesResponse(struct soap *soap, const struct _tan__CreateAnalyticsModulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__CreateAnalyticsModulesResponse);
	if (soap_out__tan__CreateAnalyticsModulesResponse(soap, tag?tag:"tan:CreateAnalyticsModulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__CreateAnalyticsModulesResponse * SOAP_FMAC4 soap_get__tan__CreateAnalyticsModulesResponse(struct soap *soap, struct _tan__CreateAnalyticsModulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__CreateAnalyticsModulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__CreateAnalyticsModules(struct soap *soap, struct _tan__CreateAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeAnalyticsModule = 0;
	a->AnalyticsModule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__CreateAnalyticsModules(struct soap *soap, const struct _tan__CreateAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
		{
			soap_embedded(soap, a->AnalyticsModule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->AnalyticsModule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__CreateAnalyticsModules(struct soap *soap, const char *tag, int id, const struct _tan__CreateAnalyticsModules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__CreateAnalyticsModules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
			if (soap_out_tt__Config(soap, "tan:AnalyticsModule", -1, a->AnalyticsModule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__CreateAnalyticsModules * SOAP_FMAC4 soap_in__tan__CreateAnalyticsModules(struct soap *soap, const char *tag, struct _tan__CreateAnalyticsModules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_AnalyticsModule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__CreateAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__CreateAnalyticsModules, sizeof(struct _tan__CreateAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__CreateAnalyticsModules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:AnalyticsModule", 1, NULL))
			{	if (a->AnalyticsModule == NULL)
				{	if (soap_blist_AnalyticsModule == NULL)
						soap_blist_AnalyticsModule = soap_new_block(soap);
					a->AnalyticsModule = (struct tt__Config *)soap_push_block(soap, soap_blist_AnalyticsModule, sizeof(struct tt__Config));
					if (a->AnalyticsModule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->AnalyticsModule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:AnalyticsModule", a->AnalyticsModule, "tt:Config"))
				{	a->__sizeAnalyticsModule++;
					a->AnalyticsModule = NULL;
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
		if (a->AnalyticsModule)
			soap_pop_block(soap, soap_blist_AnalyticsModule);
		if (a->__sizeAnalyticsModule)
			a->AnalyticsModule = (struct tt__Config *)soap_save_block(soap, soap_blist_AnalyticsModule, NULL, 1);
		else
		{	a->AnalyticsModule = NULL;
			if (soap_blist_AnalyticsModule)
				soap_end_block(soap, soap_blist_AnalyticsModule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__CreateAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__CreateAnalyticsModules, 0, sizeof(struct _tan__CreateAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeAnalyticsModule < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__CreateAnalyticsModules(struct soap *soap, const struct _tan__CreateAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__CreateAnalyticsModules);
	if (soap_out__tan__CreateAnalyticsModules(soap, tag?tag:"tan:CreateAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__CreateAnalyticsModules * SOAP_FMAC4 soap_get__tan__CreateAnalyticsModules(struct soap *soap, struct _tan__CreateAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__CreateAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, struct _tan__GetSupportedAnalyticsModulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SupportedAnalyticsModules = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, const struct _tan__GetSupportedAnalyticsModulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SupportedAnalyticsModules(soap, &a->SupportedAnalyticsModules);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__GetSupportedAnalyticsModulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetSupportedAnalyticsModulesResponse), type))
		return soap->error;
	if (a->SupportedAnalyticsModules)
		soap_element_result(soap, "tan:SupportedAnalyticsModules");
	if (a->SupportedAnalyticsModules)
	{	if (soap_out_PointerTott__SupportedAnalyticsModules(soap, "tan:SupportedAnalyticsModules", -1, &a->SupportedAnalyticsModules, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:SupportedAnalyticsModules"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetSupportedAnalyticsModulesResponse * SOAP_FMAC4 soap_in__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, const char *tag, struct _tan__GetSupportedAnalyticsModulesResponse *a, const char *type)
{
	size_t soap_flag_SupportedAnalyticsModules = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetSupportedAnalyticsModulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetSupportedAnalyticsModulesResponse, sizeof(struct _tan__GetSupportedAnalyticsModulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetSupportedAnalyticsModulesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SupportedAnalyticsModules && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedAnalyticsModules(soap, "tan:SupportedAnalyticsModules", &a->SupportedAnalyticsModules, "tt:SupportedAnalyticsModules"))
				{	soap_flag_SupportedAnalyticsModules--;
					continue;
				}
			soap_check_result(soap, "tan:SupportedAnalyticsModules");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__GetSupportedAnalyticsModulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetSupportedAnalyticsModulesResponse, 0, sizeof(struct _tan__GetSupportedAnalyticsModulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedAnalyticsModules > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, const struct _tan__GetSupportedAnalyticsModulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetSupportedAnalyticsModulesResponse);
	if (soap_out__tan__GetSupportedAnalyticsModulesResponse(soap, tag?tag:"tan:GetSupportedAnalyticsModulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetSupportedAnalyticsModulesResponse * SOAP_FMAC4 soap_get__tan__GetSupportedAnalyticsModulesResponse(struct soap *soap, struct _tan__GetSupportedAnalyticsModulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetSupportedAnalyticsModulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetSupportedAnalyticsModules(struct soap *soap, struct _tan__GetSupportedAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetSupportedAnalyticsModules(struct soap *soap, const struct _tan__GetSupportedAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetSupportedAnalyticsModules(struct soap *soap, const char *tag, int id, const struct _tan__GetSupportedAnalyticsModules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetSupportedAnalyticsModules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetSupportedAnalyticsModules * SOAP_FMAC4 soap_in__tan__GetSupportedAnalyticsModules(struct soap *soap, const char *tag, struct _tan__GetSupportedAnalyticsModules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetSupportedAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetSupportedAnalyticsModules, sizeof(struct _tan__GetSupportedAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetSupportedAnalyticsModules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tan__GetSupportedAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetSupportedAnalyticsModules, 0, sizeof(struct _tan__GetSupportedAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetSupportedAnalyticsModules(struct soap *soap, const struct _tan__GetSupportedAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetSupportedAnalyticsModules);
	if (soap_out__tan__GetSupportedAnalyticsModules(soap, tag?tag:"tan:GetSupportedAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetSupportedAnalyticsModules * SOAP_FMAC4 soap_get__tan__GetSupportedAnalyticsModules(struct soap *soap, struct _tan__GetSupportedAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetSupportedAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetRulesResponse(struct soap *soap, struct _tan__GetRulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeRule = 0;
	a->Rule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetRulesResponse(struct soap *soap, const struct _tan__GetRulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
		{
			soap_embedded(soap, a->Rule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->Rule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetRulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__GetRulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetRulesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeRule");
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
			if (soap_out_tt__Config(soap, "tan:Rule", -1, a->Rule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetRulesResponse * SOAP_FMAC4 soap_in__tan__GetRulesResponse(struct soap *soap, const char *tag, struct _tan__GetRulesResponse *a, const char *type)
{
	struct soap_blist *soap_blist_Rule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetRulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetRulesResponse, sizeof(struct _tan__GetRulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetRulesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:Rule", 1, NULL))
			{	if (a->Rule == NULL)
				{	if (soap_blist_Rule == NULL)
						soap_blist_Rule = soap_new_block(soap);
					a->Rule = (struct tt__Config *)soap_push_block(soap, soap_blist_Rule, sizeof(struct tt__Config));
					if (a->Rule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->Rule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:Rule", a->Rule, "tt:Config"))
				{	a->__sizeRule++;
					a->Rule = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeRule");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Rule)
			soap_pop_block(soap, soap_blist_Rule);
		if (a->__sizeRule)
			a->Rule = (struct tt__Config *)soap_save_block(soap, soap_blist_Rule, NULL, 1);
		else
		{	a->Rule = NULL;
			if (soap_blist_Rule)
				soap_end_block(soap, soap_blist_Rule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__GetRulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetRulesResponse, 0, sizeof(struct _tan__GetRulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetRulesResponse(struct soap *soap, const struct _tan__GetRulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetRulesResponse);
	if (soap_out__tan__GetRulesResponse(soap, tag?tag:"tan:GetRulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetRulesResponse * SOAP_FMAC4 soap_get__tan__GetRulesResponse(struct soap *soap, struct _tan__GetRulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetRulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetRules(struct soap *soap, struct _tan__GetRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetRules(struct soap *soap, const struct _tan__GetRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetRules(struct soap *soap, const char *tag, int id, const struct _tan__GetRules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetRules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetRules * SOAP_FMAC4 soap_in__tan__GetRules(struct soap *soap, const char *tag, struct _tan__GetRules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetRules, sizeof(struct _tan__GetRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetRules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tan__GetRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetRules, 0, sizeof(struct _tan__GetRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetRules(struct soap *soap, const struct _tan__GetRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetRules);
	if (soap_out__tan__GetRules(soap, tag?tag:"tan:GetRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetRules * SOAP_FMAC4 soap_get__tan__GetRules(struct soap *soap, struct _tan__GetRules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__ModifyRulesResponse(struct soap *soap, struct _tan__ModifyRulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__ModifyRulesResponse(struct soap *soap, const struct _tan__ModifyRulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__ModifyRulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__ModifyRulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__ModifyRulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__ModifyRulesResponse * SOAP_FMAC4 soap_in__tan__ModifyRulesResponse(struct soap *soap, const char *tag, struct _tan__ModifyRulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__ModifyRulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__ModifyRulesResponse, sizeof(struct _tan__ModifyRulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__ModifyRulesResponse(soap, a);
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
	{	a = (struct _tan__ModifyRulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__ModifyRulesResponse, 0, sizeof(struct _tan__ModifyRulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__ModifyRulesResponse(struct soap *soap, const struct _tan__ModifyRulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__ModifyRulesResponse);
	if (soap_out__tan__ModifyRulesResponse(soap, tag?tag:"tan:ModifyRulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__ModifyRulesResponse * SOAP_FMAC4 soap_get__tan__ModifyRulesResponse(struct soap *soap, struct _tan__ModifyRulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__ModifyRulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__ModifyRules(struct soap *soap, struct _tan__ModifyRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeRule = 0;
	a->Rule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__ModifyRules(struct soap *soap, const struct _tan__ModifyRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
		{
			soap_embedded(soap, a->Rule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->Rule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__ModifyRules(struct soap *soap, const char *tag, int id, const struct _tan__ModifyRules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__ModifyRules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
			if (soap_out_tt__Config(soap, "tan:Rule", -1, a->Rule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__ModifyRules * SOAP_FMAC4 soap_in__tan__ModifyRules(struct soap *soap, const char *tag, struct _tan__ModifyRules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_Rule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__ModifyRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__ModifyRules, sizeof(struct _tan__ModifyRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__ModifyRules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:Rule", 1, NULL))
			{	if (a->Rule == NULL)
				{	if (soap_blist_Rule == NULL)
						soap_blist_Rule = soap_new_block(soap);
					a->Rule = (struct tt__Config *)soap_push_block(soap, soap_blist_Rule, sizeof(struct tt__Config));
					if (a->Rule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->Rule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:Rule", a->Rule, "tt:Config"))
				{	a->__sizeRule++;
					a->Rule = NULL;
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
		if (a->Rule)
			soap_pop_block(soap, soap_blist_Rule);
		if (a->__sizeRule)
			a->Rule = (struct tt__Config *)soap_save_block(soap, soap_blist_Rule, NULL, 1);
		else
		{	a->Rule = NULL;
			if (soap_blist_Rule)
				soap_end_block(soap, soap_blist_Rule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__ModifyRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__ModifyRules, 0, sizeof(struct _tan__ModifyRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeRule < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__ModifyRules(struct soap *soap, const struct _tan__ModifyRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__ModifyRules);
	if (soap_out__tan__ModifyRules(soap, tag?tag:"tan:ModifyRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__ModifyRules * SOAP_FMAC4 soap_get__tan__ModifyRules(struct soap *soap, struct _tan__ModifyRules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__ModifyRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__DeleteRulesResponse(struct soap *soap, struct _tan__DeleteRulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__DeleteRulesResponse(struct soap *soap, const struct _tan__DeleteRulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__DeleteRulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__DeleteRulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__DeleteRulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__DeleteRulesResponse * SOAP_FMAC4 soap_in__tan__DeleteRulesResponse(struct soap *soap, const char *tag, struct _tan__DeleteRulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__DeleteRulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__DeleteRulesResponse, sizeof(struct _tan__DeleteRulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__DeleteRulesResponse(soap, a);
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
	{	a = (struct _tan__DeleteRulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__DeleteRulesResponse, 0, sizeof(struct _tan__DeleteRulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__DeleteRulesResponse(struct soap *soap, const struct _tan__DeleteRulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__DeleteRulesResponse);
	if (soap_out__tan__DeleteRulesResponse(soap, tag?tag:"tan:DeleteRulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__DeleteRulesResponse * SOAP_FMAC4 soap_get__tan__DeleteRulesResponse(struct soap *soap, struct _tan__DeleteRulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__DeleteRulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__DeleteRules(struct soap *soap, struct _tan__DeleteRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeRuleName = 0;
	a->RuleName = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__DeleteRules(struct soap *soap, const struct _tan__DeleteRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->RuleName)
	{	int i;
		for (i = 0; i < a->__sizeRuleName; i++)
		{
			soap_serialize_string(soap, a->RuleName + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__DeleteRules(struct soap *soap, const char *tag, int id, const struct _tan__DeleteRules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__DeleteRules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->RuleName)
	{	int i;
		for (i = 0; i < a->__sizeRuleName; i++)
			if (soap_out_string(soap, "tan:RuleName", -1, a->RuleName + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__DeleteRules * SOAP_FMAC4 soap_in__tan__DeleteRules(struct soap *soap, const char *tag, struct _tan__DeleteRules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_RuleName = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__DeleteRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__DeleteRules, sizeof(struct _tan__DeleteRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__DeleteRules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:RuleName", 1, NULL))
			{	if (a->RuleName == NULL)
				{	if (soap_blist_RuleName == NULL)
						soap_blist_RuleName = soap_new_block(soap);
					a->RuleName = (char **)soap_push_block(soap, soap_blist_RuleName, sizeof(char *));
					if (a->RuleName == NULL)
						return NULL;
					*a->RuleName = NULL;
				}
				soap_revert(soap);
				if (soap_in_string(soap, "tan:RuleName", a->RuleName, "xsd:string"))
				{	a->__sizeRuleName++;
					a->RuleName = NULL;
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
		if (a->RuleName)
			soap_pop_block(soap, soap_blist_RuleName);
		if (a->__sizeRuleName)
			a->RuleName = (char **)soap_save_block(soap, soap_blist_RuleName, NULL, 1);
		else
		{	a->RuleName = NULL;
			if (soap_blist_RuleName)
				soap_end_block(soap, soap_blist_RuleName);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__DeleteRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__DeleteRules, 0, sizeof(struct _tan__DeleteRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeRuleName < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__DeleteRules(struct soap *soap, const struct _tan__DeleteRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__DeleteRules);
	if (soap_out__tan__DeleteRules(soap, tag?tag:"tan:DeleteRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__DeleteRules * SOAP_FMAC4 soap_get__tan__DeleteRules(struct soap *soap, struct _tan__DeleteRules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__DeleteRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__CreateRulesResponse(struct soap *soap, struct _tan__CreateRulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__CreateRulesResponse(struct soap *soap, const struct _tan__CreateRulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__CreateRulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__CreateRulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__CreateRulesResponse), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__CreateRulesResponse * SOAP_FMAC4 soap_in__tan__CreateRulesResponse(struct soap *soap, const char *tag, struct _tan__CreateRulesResponse *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__CreateRulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__CreateRulesResponse, sizeof(struct _tan__CreateRulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__CreateRulesResponse(soap, a);
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
	{	a = (struct _tan__CreateRulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__CreateRulesResponse, 0, sizeof(struct _tan__CreateRulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__CreateRulesResponse(struct soap *soap, const struct _tan__CreateRulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__CreateRulesResponse);
	if (soap_out__tan__CreateRulesResponse(soap, tag?tag:"tan:CreateRulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__CreateRulesResponse * SOAP_FMAC4 soap_get__tan__CreateRulesResponse(struct soap *soap, struct _tan__CreateRulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__CreateRulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__CreateRules(struct soap *soap, struct _tan__CreateRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
	a->__sizeRule = 0;
	a->Rule = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__CreateRules(struct soap *soap, const struct _tan__CreateRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
		{
			soap_embedded(soap, a->Rule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->Rule + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__CreateRules(struct soap *soap, const char *tag, int id, const struct _tan__CreateRules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__CreateRules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
			if (soap_out_tt__Config(soap, "tan:Rule", -1, a->Rule + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__CreateRules * SOAP_FMAC4 soap_in__tan__CreateRules(struct soap *soap, const char *tag, struct _tan__CreateRules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	struct soap_blist *soap_blist_Rule = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__CreateRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__CreateRules, sizeof(struct _tan__CreateRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__CreateRules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tan:Rule", 1, NULL))
			{	if (a->Rule == NULL)
				{	if (soap_blist_Rule == NULL)
						soap_blist_Rule = soap_new_block(soap);
					a->Rule = (struct tt__Config *)soap_push_block(soap, soap_blist_Rule, sizeof(struct tt__Config));
					if (a->Rule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->Rule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tan:Rule", a->Rule, "tt:Config"))
				{	a->__sizeRule++;
					a->Rule = NULL;
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
		if (a->Rule)
			soap_pop_block(soap, soap_blist_Rule);
		if (a->__sizeRule)
			a->Rule = (struct tt__Config *)soap_save_block(soap, soap_blist_Rule, NULL, 1);
		else
		{	a->Rule = NULL;
			if (soap_blist_Rule)
				soap_end_block(soap, soap_blist_Rule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__CreateRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__CreateRules, 0, sizeof(struct _tan__CreateRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0 || a->__sizeRule < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__CreateRules(struct soap *soap, const struct _tan__CreateRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__CreateRules);
	if (soap_out__tan__CreateRules(soap, tag?tag:"tan:CreateRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__CreateRules * SOAP_FMAC4 soap_get__tan__CreateRules(struct soap *soap, struct _tan__CreateRules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__CreateRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetSupportedRulesResponse(struct soap *soap, struct _tan__GetSupportedRulesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SupportedRules = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetSupportedRulesResponse(struct soap *soap, const struct _tan__GetSupportedRulesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SupportedRules(soap, &a->SupportedRules);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetSupportedRulesResponse(struct soap *soap, const char *tag, int id, const struct _tan__GetSupportedRulesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetSupportedRulesResponse), type))
		return soap->error;
	if (a->SupportedRules)
		soap_element_result(soap, "tan:SupportedRules");
	if (a->SupportedRules)
	{	if (soap_out_PointerTott__SupportedRules(soap, "tan:SupportedRules", -1, &a->SupportedRules, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:SupportedRules"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetSupportedRulesResponse * SOAP_FMAC4 soap_in__tan__GetSupportedRulesResponse(struct soap *soap, const char *tag, struct _tan__GetSupportedRulesResponse *a, const char *type)
{
	size_t soap_flag_SupportedRules = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetSupportedRulesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetSupportedRulesResponse, sizeof(struct _tan__GetSupportedRulesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetSupportedRulesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SupportedRules && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedRules(soap, "tan:SupportedRules", &a->SupportedRules, "tt:SupportedRules"))
				{	soap_flag_SupportedRules--;
					continue;
				}
			soap_check_result(soap, "tan:SupportedRules");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__GetSupportedRulesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetSupportedRulesResponse, 0, sizeof(struct _tan__GetSupportedRulesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SupportedRules > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetSupportedRulesResponse(struct soap *soap, const struct _tan__GetSupportedRulesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetSupportedRulesResponse);
	if (soap_out__tan__GetSupportedRulesResponse(soap, tag?tag:"tan:GetSupportedRulesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetSupportedRulesResponse * SOAP_FMAC4 soap_get__tan__GetSupportedRulesResponse(struct soap *soap, struct _tan__GetSupportedRulesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetSupportedRulesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetSupportedRules(struct soap *soap, struct _tan__GetSupportedRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->ConfigurationToken);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetSupportedRules(struct soap *soap, const struct _tan__GetSupportedRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->ConfigurationToken);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetSupportedRules(struct soap *soap, const char *tag, int id, const struct _tan__GetSupportedRules *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetSupportedRules), type))
		return soap->error;
	if (a->ConfigurationToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tan:ConfigurationToken", -1, &a->ConfigurationToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:ConfigurationToken"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetSupportedRules * SOAP_FMAC4 soap_in__tan__GetSupportedRules(struct soap *soap, const char *tag, struct _tan__GetSupportedRules *a, const char *type)
{
	size_t soap_flag_ConfigurationToken = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetSupportedRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetSupportedRules, sizeof(struct _tan__GetSupportedRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetSupportedRules(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConfigurationToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tan:ConfigurationToken", &a->ConfigurationToken, "tt:ReferenceToken"))
				{	soap_flag_ConfigurationToken--;
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
	{	a = (struct _tan__GetSupportedRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetSupportedRules, 0, sizeof(struct _tan__GetSupportedRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConfigurationToken > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetSupportedRules(struct soap *soap, const struct _tan__GetSupportedRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetSupportedRules);
	if (soap_out__tan__GetSupportedRules(soap, tag?tag:"tan:GetSupportedRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetSupportedRules * SOAP_FMAC4 soap_get__tan__GetSupportedRules(struct soap *soap, struct _tan__GetSupportedRules *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetSupportedRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetServiceCapabilitiesResponse(struct soap *soap, struct _tan__GetServiceCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Capabilities = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tan__GetServiceCapabilitiesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTotan__Capabilities(soap, &a->Capabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, int id, const struct _tan__GetServiceCapabilitiesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetServiceCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tan:Capabilities");
	if (a->Capabilities)
	{	if (soap_out_PointerTotan__Capabilities(soap, "tan:Capabilities", -1, &a->Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tan:Capabilities"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_in__tan__GetServiceCapabilitiesResponse(struct soap *soap, const char *tag, struct _tan__GetServiceCapabilitiesResponse *a, const char *type)
{
	size_t soap_flag_Capabilities = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetServiceCapabilitiesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetServiceCapabilitiesResponse, sizeof(struct _tan__GetServiceCapabilitiesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetServiceCapabilitiesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotan__Capabilities(soap, "tan:Capabilities", &a->Capabilities, "tan:Capabilities"))
				{	soap_flag_Capabilities--;
					continue;
				}
			soap_check_result(soap, "tan:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tan__GetServiceCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetServiceCapabilitiesResponse, 0, sizeof(struct _tan__GetServiceCapabilitiesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetServiceCapabilitiesResponse(struct soap *soap, const struct _tan__GetServiceCapabilitiesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetServiceCapabilitiesResponse);
	if (soap_out__tan__GetServiceCapabilitiesResponse(soap, tag?tag:"tan:GetServiceCapabilitiesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetServiceCapabilitiesResponse * SOAP_FMAC4 soap_get__tan__GetServiceCapabilitiesResponse(struct soap *soap, struct _tan__GetServiceCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetServiceCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tan__GetServiceCapabilities(struct soap *soap, struct _tan__GetServiceCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tan__GetServiceCapabilities(struct soap *soap, const struct _tan__GetServiceCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tan__GetServiceCapabilities(struct soap *soap, const char *tag, int id, const struct _tan__GetServiceCapabilities *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tan__GetServiceCapabilities), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tan__GetServiceCapabilities * SOAP_FMAC4 soap_in__tan__GetServiceCapabilities(struct soap *soap, const char *tag, struct _tan__GetServiceCapabilities *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tan__GetServiceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tan__GetServiceCapabilities, sizeof(struct _tan__GetServiceCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tan__GetServiceCapabilities(soap, a);
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
	{	a = (struct _tan__GetServiceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tan__GetServiceCapabilities, 0, sizeof(struct _tan__GetServiceCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tan__GetServiceCapabilities(struct soap *soap, const struct _tan__GetServiceCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tan__GetServiceCapabilities);
	if (soap_out__tan__GetServiceCapabilities(soap, tag?tag:"tan:GetServiceCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tan__GetServiceCapabilities * SOAP_FMAC4 soap_get__tan__GetServiceCapabilities(struct soap *soap, struct _tan__GetServiceCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tan__GetServiceCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tan__Capabilities(struct soap *soap, struct tan__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->RuleSupport = NULL;
	a->AnalyticsModuleSupport = NULL;
	a->CellBasedSceneDescriptionSupported = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tan__Capabilities(struct soap *soap, const struct tan__Capabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tan__Capabilities(struct soap *soap, const char *tag, int id, const struct tan__Capabilities *a, const char *type)
{
	if (a->RuleSupport)
		soap_set_attr(soap, "RuleSupport", soap_xsd__boolean2s(soap, *a->RuleSupport), 1);
	if (a->AnalyticsModuleSupport)
		soap_set_attr(soap, "AnalyticsModuleSupport", soap_xsd__boolean2s(soap, *a->AnalyticsModuleSupport), 1);
	if (a->CellBasedSceneDescriptionSupported)
		soap_set_attr(soap, "CellBasedSceneDescriptionSupported", soap_xsd__boolean2s(soap, *a->CellBasedSceneDescriptionSupported), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tan__Capabilities), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tan__Capabilities * SOAP_FMAC4 soap_in_tan__Capabilities(struct soap *soap, const char *tag, struct tan__Capabilities *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tan__Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tan__Capabilities, sizeof(struct tan__Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tan__Capabilities(soap, a);
	{	const char *t = soap_attr_value(soap, "RuleSupport", 0);
		if (t)
		{
			if (!(a->RuleSupport = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->RuleSupport))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "AnalyticsModuleSupport", 0);
		if (t)
		{
			if (!(a->AnalyticsModuleSupport = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->AnalyticsModuleSupport))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	{	const char *t = soap_attr_value(soap, "CellBasedSceneDescriptionSupported", 0);
		if (t)
		{
			if (!(a->CellBasedSceneDescriptionSupported = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->CellBasedSceneDescriptionSupported))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tan__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tan__Capabilities, 0, sizeof(struct tan__Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tan__Capabilities(struct soap *soap, const struct tan__Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tan__Capabilities);
	if (soap_out_tan__Capabilities(soap, tag?tag:"tan:Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tan__Capabilities * SOAP_FMAC4 soap_get_tan__Capabilities(struct soap *soap, struct tan__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tan__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wstop__QueryExpressionType(struct soap *soap, struct wstop__QueryExpressionType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
	soap_default_xsd__anyURI(soap, &a->Dialect);
	a->__mixed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wstop__QueryExpressionType(struct soap *soap, const struct wstop__QueryExpressionType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__QueryExpressionType(struct soap *soap, const char *tag, int id, const struct wstop__QueryExpressionType *a, const char *type)
{
	if (a->Dialect)
		soap_set_attr(soap, "Dialect", a->Dialect, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__QueryExpressionType), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	soap_outliteral(soap, "-mixed", &a->__mixed, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wstop__QueryExpressionType * SOAP_FMAC4 soap_in_wstop__QueryExpressionType(struct soap *soap, const char *tag, struct wstop__QueryExpressionType *a, const char *type)
{
	size_t soap_flag___any = 1;
	size_t soap_flag___mixed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wstop__QueryExpressionType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__QueryExpressionType, sizeof(struct wstop__QueryExpressionType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wstop__QueryExpressionType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Dialect", 1), &a->Dialect, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &a->__any))
				{	soap_flag___any--;
					continue;
				}
			if (soap_flag___mixed && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &a->__mixed))
				{	soap_flag___mixed--;
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
	{	a = (struct wstop__QueryExpressionType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__QueryExpressionType, 0, sizeof(struct wstop__QueryExpressionType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wstop__QueryExpressionType(struct soap *soap, const struct wstop__QueryExpressionType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wstop__QueryExpressionType);
	if (soap_out_wstop__QueryExpressionType(soap, tag?tag:"wstop:QueryExpressionType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wstop__QueryExpressionType * SOAP_FMAC4 soap_get_wstop__QueryExpressionType(struct soap *soap, struct wstop__QueryExpressionType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__QueryExpressionType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wstop__ExtensibleDocumented(struct soap *soap, struct wstop__ExtensibleDocumented *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->documentation = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wstop__ExtensibleDocumented(struct soap *soap, const struct wstop__ExtensibleDocumented *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowstop__Documentation(soap, &a->documentation);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__ExtensibleDocumented(struct soap *soap, const char *tag, int id, const struct wstop__ExtensibleDocumented *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__ExtensibleDocumented), type))
		return soap->error;
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &a->documentation, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wstop__ExtensibleDocumented * SOAP_FMAC4 soap_in_wstop__ExtensibleDocumented(struct soap *soap, const char *tag, struct wstop__ExtensibleDocumented *a, const char *type)
{
	size_t soap_flag_documentation = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wstop__ExtensibleDocumented *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__ExtensibleDocumented, sizeof(struct wstop__ExtensibleDocumented), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wstop__ExtensibleDocumented(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_documentation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &a->documentation, "wstop:Documentation"))
				{	soap_flag_documentation--;
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
	{	a = (struct wstop__ExtensibleDocumented *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__ExtensibleDocumented, 0, sizeof(struct wstop__ExtensibleDocumented), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wstop__ExtensibleDocumented(struct soap *soap, const struct wstop__ExtensibleDocumented *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wstop__ExtensibleDocumented);
	if (soap_out_wstop__ExtensibleDocumented(soap, tag?tag:"wstop:ExtensibleDocumented", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wstop__ExtensibleDocumented * SOAP_FMAC4 soap_get_wstop__ExtensibleDocumented(struct soap *soap, struct wstop__ExtensibleDocumented *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__ExtensibleDocumented(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wstop__Documentation(struct soap *soap, struct wstop__Documentation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__mixed = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wstop__Documentation(struct soap *soap, const struct wstop__Documentation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__Documentation(struct soap *soap, const char *tag, int id, const struct wstop__Documentation *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__Documentation), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	soap_outliteral(soap, "-mixed", &a->__mixed, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wstop__Documentation * SOAP_FMAC4 soap_in_wstop__Documentation(struct soap *soap, const char *tag, struct wstop__Documentation *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag___mixed = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wstop__Documentation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__Documentation, sizeof(struct wstop__Documentation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wstop__Documentation(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			if (soap_flag___mixed && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-mixed", &a->__mixed))
				{	soap_flag___mixed--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wstop__Documentation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__Documentation, 0, sizeof(struct wstop__Documentation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wstop__Documentation(struct soap *soap, const struct wstop__Documentation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wstop__Documentation);
	if (soap_out_wstop__Documentation(soap, tag?tag:"wstop:Documentation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wstop__Documentation * SOAP_FMAC4 soap_get_wstop__Documentation(struct soap *soap, struct wstop__Documentation *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__Documentation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, struct _wsrfbf__BaseFaultType_FaultCause *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const struct _wsrfbf__BaseFaultType_FaultCause *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const char *tag, int id, const struct _wsrfbf__BaseFaultType_FaultCause *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_FaultCause * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const char *tag, struct _wsrfbf__BaseFaultType_FaultCause *a, const char *type)
{
	size_t soap_flag___any = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsrfbf__BaseFaultType_FaultCause *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause, sizeof(struct _wsrfbf__BaseFaultType_FaultCause), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsrfbf__BaseFaultType_FaultCause(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &a->__any))
				{	soap_flag___any--;
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
	{	a = (struct _wsrfbf__BaseFaultType_FaultCause *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause, 0, sizeof(struct _wsrfbf__BaseFaultType_FaultCause), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, const struct _wsrfbf__BaseFaultType_FaultCause *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_FaultCause);
	if (soap_out__wsrfbf__BaseFaultType_FaultCause(soap, tag?tag:"wsrfbf:BaseFaultType-FaultCause", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_FaultCause * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_FaultCause(struct soap *soap, struct _wsrfbf__BaseFaultType_FaultCause *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_FaultCause(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsrfbf__BaseFaultType_Description(struct soap *soap, struct _wsrfbf__BaseFaultType_Description *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->__item);
	soap_default__xml__lang(soap, &a->xml__lang);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsrfbf__BaseFaultType_Description(struct soap *soap, const struct _wsrfbf__BaseFaultType_Description *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->__item);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_Description(struct soap *soap, const char *tag, int id, const struct _wsrfbf__BaseFaultType_Description *a, const char *type)
{
	if (a->xml__lang)
		soap_set_attr(soap, "xml:lang", a->xml__lang, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	return soap_out_string(soap, tag, id, &a->__item, "");
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_Description * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_Description(struct soap *soap, const char *tag, struct _wsrfbf__BaseFaultType_Description *a, const char *type)
{
	(void)type; /* appease -Wall -Werror */
	if (soap_element_begin_in(soap, tag, 1, NULL))
		return NULL;
	if (!(a = (struct _wsrfbf__BaseFaultType_Description *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_Description, sizeof(struct _wsrfbf__BaseFaultType_Description), 0, NULL, NULL, NULL)))
		return NULL;
	soap_revert(soap);
	*soap->id = '\0';
	soap_default__wsrfbf__BaseFaultType_Description(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "xml:lang", 0), &a->xml__lang, 0, -1))
		return NULL;
	if (!soap_in_string(soap, tag, &a->__item, ""))
		return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsrfbf__BaseFaultType_Description(struct soap *soap, const struct _wsrfbf__BaseFaultType_Description *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_Description);
	if (soap_out__wsrfbf__BaseFaultType_Description(soap, tag?tag:"wsrfbf:BaseFaultType-Description", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_Description * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_Description(struct soap *soap, struct _wsrfbf__BaseFaultType_Description *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_Description(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, struct _wsrfbf__BaseFaultType_ErrorCode *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->dialect);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const struct _wsrfbf__BaseFaultType_ErrorCode *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const char *tag, int id, const struct _wsrfbf__BaseFaultType_ErrorCode *a, const char *type)
{
	if (a->dialect)
		soap_set_attr(soap, "dialect", a->dialect, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_ErrorCode * SOAP_FMAC4 soap_in__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const char *tag, struct _wsrfbf__BaseFaultType_ErrorCode *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsrfbf__BaseFaultType_ErrorCode *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode, sizeof(struct _wsrfbf__BaseFaultType_ErrorCode), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsrfbf__BaseFaultType_ErrorCode(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "dialect", 1), &a->dialect, 0, -1))
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
	{	a = (struct _wsrfbf__BaseFaultType_ErrorCode *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode, 0, sizeof(struct _wsrfbf__BaseFaultType_ErrorCode), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, const struct _wsrfbf__BaseFaultType_ErrorCode *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsrfbf__BaseFaultType_ErrorCode);
	if (soap_out__wsrfbf__BaseFaultType_ErrorCode(soap, tag?tag:"wsrfbf:BaseFaultType-ErrorCode", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsrfbf__BaseFaultType_ErrorCode * SOAP_FMAC4 soap_get__wsrfbf__BaseFaultType_ErrorCode(struct soap *soap, struct _wsrfbf__BaseFaultType_ErrorCode *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsrfbf__BaseFaultType_ErrorCode(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsrfbf__BaseFaultType(struct soap *soap, struct wsrfbf__BaseFaultType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default_time(soap, &a->Timestamp);
	a->Originator = NULL;
	a->ErrorCode = NULL;
	a->__sizeDescription = 0;
	a->Description = NULL;
	a->FaultCause = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsrfbf__BaseFaultType(struct soap *soap, const struct wsrfbf__BaseFaultType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->Timestamp, SOAP_TYPE_time);
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &a->Originator);
	soap_serialize_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, &a->ErrorCode);
	if (a->Description)
	{	int i;
		for (i = 0; i < a->__sizeDescription; i++)
		{
			soap_embedded(soap, a->Description + i, SOAP_TYPE__wsrfbf__BaseFaultType_Description);
			soap_serialize__wsrfbf__BaseFaultType_Description(soap, a->Description + i);
		}
	}
	soap_serialize_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, &a->FaultCause);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsrfbf__BaseFaultType(struct soap *soap, const char *tag, int id, const struct wsrfbf__BaseFaultType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsrfbf__BaseFaultType), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "wsrfbf:Timestamp", -1, &a->Timestamp, ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", -1, &a->Originator, ""))
		return soap->error;
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", -1, &a->ErrorCode, ""))
		return soap->error;
	if (a->Description)
	{	int i;
		for (i = 0; i < a->__sizeDescription; i++)
			if (soap_out__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", -1, a->Description + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", -1, &a->FaultCause, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsrfbf__BaseFaultType * SOAP_FMAC4 soap_in_wsrfbf__BaseFaultType(struct soap *soap, const char *tag, struct wsrfbf__BaseFaultType *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	size_t soap_flag_Timestamp = 1;
	size_t soap_flag_Originator = 1;
	size_t soap_flag_ErrorCode = 1;
	struct soap_blist *soap_blist_Description = NULL;
	size_t soap_flag_FaultCause = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsrfbf__BaseFaultType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsrfbf__BaseFaultType, sizeof(struct wsrfbf__BaseFaultType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsrfbf__BaseFaultType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Timestamp && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsrfbf:Timestamp", &a->Timestamp, "xsd:dateTime"))
				{	soap_flag_Timestamp--;
					continue;
				}
			if (soap_flag_Originator && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsrfbf:Originator", &a->Originator, "wsa5:EndpointReferenceType"))
				{	soap_flag_Originator--;
					continue;
				}
			if (soap_flag_ErrorCode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_ErrorCode(soap, "wsrfbf:ErrorCode", &a->ErrorCode, ""))
				{	soap_flag_ErrorCode--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsrfbf:Description", 1, NULL))
			{	if (a->Description == NULL)
				{	if (soap_blist_Description == NULL)
						soap_blist_Description = soap_new_block(soap);
					a->Description = (struct _wsrfbf__BaseFaultType_Description *)soap_push_block(soap, soap_blist_Description, sizeof(struct _wsrfbf__BaseFaultType_Description));
					if (a->Description == NULL)
						return NULL;
					soap_default__wsrfbf__BaseFaultType_Description(soap, a->Description);
				}
				soap_revert(soap);
				if (soap_in__wsrfbf__BaseFaultType_Description(soap, "wsrfbf:Description", a->Description, ""))
				{	a->__sizeDescription++;
					a->Description = NULL;
					continue;
				}
			}
			if (soap_flag_FaultCause && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsrfbf__BaseFaultType_FaultCause(soap, "wsrfbf:FaultCause", &a->FaultCause, ""))
				{	soap_flag_FaultCause--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (a->Description)
			soap_pop_block(soap, soap_blist_Description);
		if (a->__sizeDescription)
			a->Description = (struct _wsrfbf__BaseFaultType_Description *)soap_save_block(soap, soap_blist_Description, NULL, 1);
		else
		{	a->Description = NULL;
			if (soap_blist_Description)
				soap_end_block(soap, soap_blist_Description);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsrfbf__BaseFaultType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsrfbf__BaseFaultType, 0, sizeof(struct wsrfbf__BaseFaultType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Timestamp > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsrfbf__BaseFaultType(struct soap *soap, const struct wsrfbf__BaseFaultType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsrfbf__BaseFaultType);
	if (soap_out_wsrfbf__BaseFaultType(soap, tag?tag:"wsrfbf:BaseFaultType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsrfbf__BaseFaultType * SOAP_FMAC4 soap_get_wsrfbf__BaseFaultType(struct soap *soap, struct wsrfbf__BaseFaultType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsrfbf__BaseFaultType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__ResumeSubscriptionResponse(struct soap *soap, struct _wsnt__ResumeSubscriptionResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__ResumeSubscriptionResponse(struct soap *soap, const struct _wsnt__ResumeSubscriptionResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__ResumeSubscriptionResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__ResumeSubscriptionResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__ResumeSubscriptionResponse), type))
		return soap->error;
	soap_element_result(soap, "-size");
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__ResumeSubscriptionResponse * SOAP_FMAC4 soap_in__wsnt__ResumeSubscriptionResponse(struct soap *soap, const char *tag, struct _wsnt__ResumeSubscriptionResponse *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__ResumeSubscriptionResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__ResumeSubscriptionResponse, sizeof(struct _wsnt__ResumeSubscriptionResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__ResumeSubscriptionResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__ResumeSubscriptionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__ResumeSubscriptionResponse, 0, sizeof(struct _wsnt__ResumeSubscriptionResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__ResumeSubscriptionResponse(struct soap *soap, const struct _wsnt__ResumeSubscriptionResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__ResumeSubscriptionResponse);
	if (soap_out__wsnt__ResumeSubscriptionResponse(soap, tag?tag:"wsnt:ResumeSubscriptionResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__ResumeSubscriptionResponse * SOAP_FMAC4 soap_get__wsnt__ResumeSubscriptionResponse(struct soap *soap, struct _wsnt__ResumeSubscriptionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__ResumeSubscriptionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__ResumeSubscription(struct soap *soap, struct _wsnt__ResumeSubscription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__ResumeSubscription(struct soap *soap, const struct _wsnt__ResumeSubscription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__ResumeSubscription(struct soap *soap, const char *tag, int id, const struct _wsnt__ResumeSubscription *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__ResumeSubscription), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__ResumeSubscription * SOAP_FMAC4 soap_in__wsnt__ResumeSubscription(struct soap *soap, const char *tag, struct _wsnt__ResumeSubscription *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__ResumeSubscription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__ResumeSubscription, sizeof(struct _wsnt__ResumeSubscription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__ResumeSubscription(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__ResumeSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__ResumeSubscription, 0, sizeof(struct _wsnt__ResumeSubscription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__ResumeSubscription(struct soap *soap, const struct _wsnt__ResumeSubscription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__ResumeSubscription);
	if (soap_out__wsnt__ResumeSubscription(soap, tag?tag:"wsnt:ResumeSubscription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__ResumeSubscription * SOAP_FMAC4 soap_get__wsnt__ResumeSubscription(struct soap *soap, struct _wsnt__ResumeSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__ResumeSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__PauseSubscriptionResponse(struct soap *soap, struct _wsnt__PauseSubscriptionResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__PauseSubscriptionResponse(struct soap *soap, const struct _wsnt__PauseSubscriptionResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__PauseSubscriptionResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__PauseSubscriptionResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__PauseSubscriptionResponse), type))
		return soap->error;
	soap_element_result(soap, "-size");
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__PauseSubscriptionResponse * SOAP_FMAC4 soap_in__wsnt__PauseSubscriptionResponse(struct soap *soap, const char *tag, struct _wsnt__PauseSubscriptionResponse *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__PauseSubscriptionResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__PauseSubscriptionResponse, sizeof(struct _wsnt__PauseSubscriptionResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__PauseSubscriptionResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__PauseSubscriptionResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__PauseSubscriptionResponse, 0, sizeof(struct _wsnt__PauseSubscriptionResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__PauseSubscriptionResponse(struct soap *soap, const struct _wsnt__PauseSubscriptionResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__PauseSubscriptionResponse);
	if (soap_out__wsnt__PauseSubscriptionResponse(soap, tag?tag:"wsnt:PauseSubscriptionResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__PauseSubscriptionResponse * SOAP_FMAC4 soap_get__wsnt__PauseSubscriptionResponse(struct soap *soap, struct _wsnt__PauseSubscriptionResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__PauseSubscriptionResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__PauseSubscription(struct soap *soap, struct _wsnt__PauseSubscription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__PauseSubscription(struct soap *soap, const struct _wsnt__PauseSubscription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__PauseSubscription(struct soap *soap, const char *tag, int id, const struct _wsnt__PauseSubscription *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__PauseSubscription), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__PauseSubscription * SOAP_FMAC4 soap_in__wsnt__PauseSubscription(struct soap *soap, const char *tag, struct _wsnt__PauseSubscription *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__PauseSubscription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__PauseSubscription, sizeof(struct _wsnt__PauseSubscription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__PauseSubscription(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__PauseSubscription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__PauseSubscription, 0, sizeof(struct _wsnt__PauseSubscription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__PauseSubscription(struct soap *soap, const struct _wsnt__PauseSubscription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__PauseSubscription);
	if (soap_out__wsnt__PauseSubscription(soap, tag?tag:"wsnt:PauseSubscription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__PauseSubscription * SOAP_FMAC4 soap_get__wsnt__PauseSubscription(struct soap *soap, struct _wsnt__PauseSubscription *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__PauseSubscription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__UnsubscribeResponse(struct soap *soap, struct _wsnt__UnsubscribeResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__UnsubscribeResponse(struct soap *soap, const struct _wsnt__UnsubscribeResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__UnsubscribeResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__UnsubscribeResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__UnsubscribeResponse), type))
		return soap->error;
	soap_element_result(soap, "-size");
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__UnsubscribeResponse * SOAP_FMAC4 soap_in__wsnt__UnsubscribeResponse(struct soap *soap, const char *tag, struct _wsnt__UnsubscribeResponse *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__UnsubscribeResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__UnsubscribeResponse, sizeof(struct _wsnt__UnsubscribeResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__UnsubscribeResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__UnsubscribeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__UnsubscribeResponse, 0, sizeof(struct _wsnt__UnsubscribeResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__UnsubscribeResponse(struct soap *soap, const struct _wsnt__UnsubscribeResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__UnsubscribeResponse);
	if (soap_out__wsnt__UnsubscribeResponse(soap, tag?tag:"wsnt:UnsubscribeResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__UnsubscribeResponse * SOAP_FMAC4 soap_get__wsnt__UnsubscribeResponse(struct soap *soap, struct _wsnt__UnsubscribeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__UnsubscribeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__Unsubscribe(struct soap *soap, struct _wsnt__Unsubscribe *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__Unsubscribe(struct soap *soap, const struct _wsnt__Unsubscribe *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Unsubscribe(struct soap *soap, const char *tag, int id, const struct _wsnt__Unsubscribe *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Unsubscribe), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__Unsubscribe * SOAP_FMAC4 soap_in__wsnt__Unsubscribe(struct soap *soap, const char *tag, struct _wsnt__Unsubscribe *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__Unsubscribe *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Unsubscribe, sizeof(struct _wsnt__Unsubscribe), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__Unsubscribe(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__Unsubscribe *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Unsubscribe, 0, sizeof(struct _wsnt__Unsubscribe), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__Unsubscribe(struct soap *soap, const struct _wsnt__Unsubscribe *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__Unsubscribe);
	if (soap_out__wsnt__Unsubscribe(soap, tag?tag:"wsnt:Unsubscribe", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__Unsubscribe * SOAP_FMAC4 soap_get__wsnt__Unsubscribe(struct soap *soap, struct _wsnt__Unsubscribe *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Unsubscribe(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__RenewResponse(struct soap *soap, struct _wsnt__RenewResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_time(soap, &a->TerminationTime);
	a->CurrentTime = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__RenewResponse(struct soap *soap, const struct _wsnt__RenewResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->TerminationTime, SOAP_TYPE_time);
	soap_serialize_PointerTotime(soap, &a->CurrentTime);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__RenewResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__RenewResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__RenewResponse), type))
		return soap->error;
	soap_element_result(soap, "wsnt:TerminationTime");
	if (soap_out_time(soap, "wsnt:TerminationTime", -1, &a->TerminationTime, ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CurrentTime", -1, &a->CurrentTime, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__RenewResponse * SOAP_FMAC4 soap_in__wsnt__RenewResponse(struct soap *soap, const char *tag, struct _wsnt__RenewResponse *a, const char *type)
{
	size_t soap_flag_TerminationTime = 1;
	size_t soap_flag_CurrentTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__RenewResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__RenewResponse, sizeof(struct _wsnt__RenewResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__RenewResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TerminationTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "wsnt:TerminationTime", &a->TerminationTime, "xsd:dateTime"))
				{	soap_flag_TerminationTime--;
					continue;
				}
			if (soap_flag_CurrentTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CurrentTime", &a->CurrentTime, "xsd:dateTime"))
				{	soap_flag_CurrentTime--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "wsnt:TerminationTime");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__RenewResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__RenewResponse, 0, sizeof(struct _wsnt__RenewResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TerminationTime > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__RenewResponse(struct soap *soap, const struct _wsnt__RenewResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__RenewResponse);
	if (soap_out__wsnt__RenewResponse(soap, tag?tag:"wsnt:RenewResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__RenewResponse * SOAP_FMAC4 soap_get__wsnt__RenewResponse(struct soap *soap, struct _wsnt__RenewResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__RenewResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__Renew(struct soap *soap, struct _wsnt__Renew *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsnt__AbsoluteOrRelativeTimeType(soap, &a->TerminationTime);
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__Renew(struct soap *soap, const struct _wsnt__Renew *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_wsnt__AbsoluteOrRelativeTimeType(soap, &a->TerminationTime);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Renew(struct soap *soap, const char *tag, int id, const struct _wsnt__Renew *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Renew), type))
		return soap->error;
	if (a->TerminationTime)
	{	if (soap_out_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:TerminationTime", -1, &a->TerminationTime, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "wsnt:TerminationTime"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__Renew * SOAP_FMAC4 soap_in__wsnt__Renew(struct soap *soap, const char *tag, struct _wsnt__Renew *a, const char *type)
{
	size_t soap_flag_TerminationTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__Renew *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Renew, sizeof(struct _wsnt__Renew), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__Renew(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TerminationTime && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:TerminationTime", &a->TerminationTime, "wsnt:AbsoluteOrRelativeTimeType"))
				{	soap_flag_TerminationTime--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__Renew *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Renew, 0, sizeof(struct _wsnt__Renew), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TerminationTime > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__Renew(struct soap *soap, const struct _wsnt__Renew *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__Renew);
	if (soap_out__wsnt__Renew(soap, tag?tag:"wsnt:Renew", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__Renew * SOAP_FMAC4 soap_get__wsnt__Renew(struct soap *soap, struct _wsnt__Renew *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Renew(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__CreatePullPointResponse(struct soap *soap, struct _wsnt__CreatePullPointResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsa5__EndpointReferenceType(soap, &a->PullPoint);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__CreatePullPointResponse(struct soap *soap, const struct _wsnt__CreatePullPointResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->PullPoint, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &a->PullPoint);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__CreatePullPointResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__CreatePullPointResponse *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__CreatePullPointResponse), type))
		return soap->error;
	soap_element_result(soap, "wsnt:PullPoint");
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:PullPoint", -1, &a->PullPoint, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__CreatePullPointResponse * SOAP_FMAC4 soap_in__wsnt__CreatePullPointResponse(struct soap *soap, const char *tag, struct _wsnt__CreatePullPointResponse *a, const char *type)
{
	size_t soap_flag_PullPoint = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__CreatePullPointResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__CreatePullPointResponse, sizeof(struct _wsnt__CreatePullPointResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__CreatePullPointResponse(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PullPoint && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:PullPoint", &a->PullPoint, "wsa5:EndpointReferenceType"))
				{	soap_flag_PullPoint--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "wsnt:PullPoint");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__CreatePullPointResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__CreatePullPointResponse, 0, sizeof(struct _wsnt__CreatePullPointResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PullPoint > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__CreatePullPointResponse(struct soap *soap, const struct _wsnt__CreatePullPointResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__CreatePullPointResponse);
	if (soap_out__wsnt__CreatePullPointResponse(soap, tag?tag:"wsnt:CreatePullPointResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__CreatePullPointResponse * SOAP_FMAC4 soap_get__wsnt__CreatePullPointResponse(struct soap *soap, struct _wsnt__CreatePullPointResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__CreatePullPointResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__CreatePullPoint(struct soap *soap, struct _wsnt__CreatePullPoint *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__CreatePullPoint(struct soap *soap, const struct _wsnt__CreatePullPoint *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__CreatePullPoint(struct soap *soap, const char *tag, int id, const struct _wsnt__CreatePullPoint *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__CreatePullPoint), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__CreatePullPoint * SOAP_FMAC4 soap_in__wsnt__CreatePullPoint(struct soap *soap, const char *tag, struct _wsnt__CreatePullPoint *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__CreatePullPoint *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__CreatePullPoint, sizeof(struct _wsnt__CreatePullPoint), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__CreatePullPoint(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__CreatePullPoint *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__CreatePullPoint, 0, sizeof(struct _wsnt__CreatePullPoint), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__CreatePullPoint(struct soap *soap, const struct _wsnt__CreatePullPoint *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__CreatePullPoint);
	if (soap_out__wsnt__CreatePullPoint(soap, tag?tag:"wsnt:CreatePullPoint", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__CreatePullPoint * SOAP_FMAC4 soap_get__wsnt__CreatePullPoint(struct soap *soap, struct _wsnt__CreatePullPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__CreatePullPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__DestroyPullPointResponse(struct soap *soap, struct _wsnt__DestroyPullPointResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__DestroyPullPointResponse(struct soap *soap, const struct _wsnt__DestroyPullPointResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__DestroyPullPointResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__DestroyPullPointResponse *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__DestroyPullPointResponse), type))
		return soap->error;
	soap_element_result(soap, "-size");
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__DestroyPullPointResponse * SOAP_FMAC4 soap_in__wsnt__DestroyPullPointResponse(struct soap *soap, const char *tag, struct _wsnt__DestroyPullPointResponse *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__DestroyPullPointResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__DestroyPullPointResponse, sizeof(struct _wsnt__DestroyPullPointResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__DestroyPullPointResponse(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__DestroyPullPointResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__DestroyPullPointResponse, 0, sizeof(struct _wsnt__DestroyPullPointResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__DestroyPullPointResponse(struct soap *soap, const struct _wsnt__DestroyPullPointResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__DestroyPullPointResponse);
	if (soap_out__wsnt__DestroyPullPointResponse(soap, tag?tag:"wsnt:DestroyPullPointResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__DestroyPullPointResponse * SOAP_FMAC4 soap_get__wsnt__DestroyPullPointResponse(struct soap *soap, struct _wsnt__DestroyPullPointResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__DestroyPullPointResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__DestroyPullPoint(struct soap *soap, struct _wsnt__DestroyPullPoint *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__DestroyPullPoint(struct soap *soap, const struct _wsnt__DestroyPullPoint *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__DestroyPullPoint(struct soap *soap, const char *tag, int id, const struct _wsnt__DestroyPullPoint *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__DestroyPullPoint), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__DestroyPullPoint * SOAP_FMAC4 soap_in__wsnt__DestroyPullPoint(struct soap *soap, const char *tag, struct _wsnt__DestroyPullPoint *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__DestroyPullPoint *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__DestroyPullPoint, sizeof(struct _wsnt__DestroyPullPoint), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__DestroyPullPoint(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__DestroyPullPoint *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__DestroyPullPoint, 0, sizeof(struct _wsnt__DestroyPullPoint), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__DestroyPullPoint(struct soap *soap, const struct _wsnt__DestroyPullPoint *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__DestroyPullPoint);
	if (soap_out__wsnt__DestroyPullPoint(soap, tag?tag:"wsnt:DestroyPullPoint", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__DestroyPullPoint * SOAP_FMAC4 soap_get__wsnt__DestroyPullPoint(struct soap *soap, struct _wsnt__DestroyPullPoint *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__DestroyPullPoint(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__GetMessagesResponse(struct soap *soap, struct _wsnt__GetMessagesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeNotificationMessage = 0;
	a->NotificationMessage = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__GetMessagesResponse(struct soap *soap, const struct _wsnt__GetMessagesResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->NotificationMessage)
	{	int i;
		for (i = 0; i < a->__sizeNotificationMessage; i++)
		{
			soap_embedded(soap, a->NotificationMessage + i, SOAP_TYPE_wsnt__NotificationMessageHolderType);
			soap_serialize_wsnt__NotificationMessageHolderType(soap, a->NotificationMessage + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetMessagesResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__GetMessagesResponse *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetMessagesResponse), type))
		return soap->error;
	soap_element_result(soap, "-sizeNotificationMessage");
	if (a->NotificationMessage)
	{	int i;
		for (i = 0; i < a->__sizeNotificationMessage; i++)
			if (soap_out_wsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", -1, a->NotificationMessage + i, ""))
				return soap->error;
	}
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__GetMessagesResponse * SOAP_FMAC4 soap_in__wsnt__GetMessagesResponse(struct soap *soap, const char *tag, struct _wsnt__GetMessagesResponse *a, const char *type)
{
	struct soap_blist *soap_blist_NotificationMessage = NULL;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__GetMessagesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetMessagesResponse, sizeof(struct _wsnt__GetMessagesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__GetMessagesResponse(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:NotificationMessage", 1, NULL))
			{	if (a->NotificationMessage == NULL)
				{	if (soap_blist_NotificationMessage == NULL)
						soap_blist_NotificationMessage = soap_new_block(soap);
					a->NotificationMessage = (struct wsnt__NotificationMessageHolderType *)soap_push_block(soap, soap_blist_NotificationMessage, sizeof(struct wsnt__NotificationMessageHolderType));
					if (a->NotificationMessage == NULL)
						return NULL;
					soap_default_wsnt__NotificationMessageHolderType(soap, a->NotificationMessage);
				}
				soap_revert(soap);
				if (soap_in_wsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", a->NotificationMessage, "wsnt:NotificationMessageHolderType"))
				{	a->__sizeNotificationMessage++;
					a->NotificationMessage = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-sizeNotificationMessage");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->NotificationMessage)
			soap_pop_block(soap, soap_blist_NotificationMessage);
		if (a->__sizeNotificationMessage)
			a->NotificationMessage = (struct wsnt__NotificationMessageHolderType *)soap_save_block(soap, soap_blist_NotificationMessage, NULL, 1);
		else
		{	a->NotificationMessage = NULL;
			if (soap_blist_NotificationMessage)
				soap_end_block(soap, soap_blist_NotificationMessage);
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__GetMessagesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetMessagesResponse, 0, sizeof(struct _wsnt__GetMessagesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__GetMessagesResponse(struct soap *soap, const struct _wsnt__GetMessagesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__GetMessagesResponse);
	if (soap_out__wsnt__GetMessagesResponse(soap, tag?tag:"wsnt:GetMessagesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__GetMessagesResponse * SOAP_FMAC4 soap_get__wsnt__GetMessagesResponse(struct soap *soap, struct _wsnt__GetMessagesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetMessagesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__GetMessages(struct soap *soap, struct _wsnt__GetMessages *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__nonNegativeInteger(soap, &a->MaximumNumber);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__GetMessages(struct soap *soap, const struct _wsnt__GetMessages *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__nonNegativeInteger(soap, &a->MaximumNumber);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetMessages(struct soap *soap, const char *tag, int id, const struct _wsnt__GetMessages *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetMessages), type))
		return soap->error;
	if (soap_out_xsd__nonNegativeInteger(soap, "wsnt:MaximumNumber", -1, &a->MaximumNumber, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__GetMessages * SOAP_FMAC4 soap_in__wsnt__GetMessages(struct soap *soap, const char *tag, struct _wsnt__GetMessages *a, const char *type)
{
	size_t soap_flag_MaximumNumber = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__GetMessages *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetMessages, sizeof(struct _wsnt__GetMessages), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__GetMessages(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MaximumNumber && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__nonNegativeInteger(soap, "wsnt:MaximumNumber", &a->MaximumNumber, "xsd:nonNegativeInteger"))
				{	soap_flag_MaximumNumber--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__GetMessages *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetMessages, 0, sizeof(struct _wsnt__GetMessages), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__GetMessages(struct soap *soap, const struct _wsnt__GetMessages *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__GetMessages);
	if (soap_out__wsnt__GetMessages(soap, tag?tag:"wsnt:GetMessages", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__GetMessages * SOAP_FMAC4 soap_get__wsnt__GetMessages(struct soap *soap, struct _wsnt__GetMessages *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetMessages(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__GetCurrentMessageResponse(struct soap *soap, struct _wsnt__GetCurrentMessageResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__GetCurrentMessageResponse(struct soap *soap, const struct _wsnt__GetCurrentMessageResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetCurrentMessageResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__GetCurrentMessageResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetCurrentMessageResponse), type))
		return soap->error;
	soap_element_result(soap, "-size");
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__GetCurrentMessageResponse * SOAP_FMAC4 soap_in__wsnt__GetCurrentMessageResponse(struct soap *soap, const char *tag, struct _wsnt__GetCurrentMessageResponse *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__GetCurrentMessageResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetCurrentMessageResponse, sizeof(struct _wsnt__GetCurrentMessageResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__GetCurrentMessageResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "-size");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__GetCurrentMessageResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetCurrentMessageResponse, 0, sizeof(struct _wsnt__GetCurrentMessageResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__GetCurrentMessageResponse(struct soap *soap, const struct _wsnt__GetCurrentMessageResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__GetCurrentMessageResponse);
	if (soap_out__wsnt__GetCurrentMessageResponse(soap, tag?tag:"wsnt:GetCurrentMessageResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__GetCurrentMessageResponse * SOAP_FMAC4 soap_get__wsnt__GetCurrentMessageResponse(struct soap *soap, struct _wsnt__GetCurrentMessageResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetCurrentMessageResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__GetCurrentMessage(struct soap *soap, struct _wsnt__GetCurrentMessage *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Topic = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__GetCurrentMessage(struct soap *soap, const struct _wsnt__GetCurrentMessage *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsnt__TopicExpressionType(soap, &a->Topic);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__GetCurrentMessage(struct soap *soap, const char *tag, int id, const struct _wsnt__GetCurrentMessage *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__GetCurrentMessage), type))
		return soap->error;
	if (a->Topic)
	{	if (soap_out_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", -1, &a->Topic, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "wsnt:Topic"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__GetCurrentMessage * SOAP_FMAC4 soap_in__wsnt__GetCurrentMessage(struct soap *soap, const char *tag, struct _wsnt__GetCurrentMessage *a, const char *type)
{
	size_t soap_flag_Topic = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__GetCurrentMessage *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__GetCurrentMessage, sizeof(struct _wsnt__GetCurrentMessage), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__GetCurrentMessage(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Topic && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", &a->Topic, "wsnt:TopicExpressionType"))
				{	soap_flag_Topic--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__GetCurrentMessage *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__GetCurrentMessage, 0, sizeof(struct _wsnt__GetCurrentMessage), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Topic > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__GetCurrentMessage(struct soap *soap, const struct _wsnt__GetCurrentMessage *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__GetCurrentMessage);
	if (soap_out__wsnt__GetCurrentMessage(soap, tag?tag:"wsnt:GetCurrentMessage", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__GetCurrentMessage * SOAP_FMAC4 soap_get__wsnt__GetCurrentMessage(struct soap *soap, struct _wsnt__GetCurrentMessage *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__GetCurrentMessage(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__SubscribeResponse(struct soap *soap, struct _wsnt__SubscribeResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsa5__EndpointReferenceType(soap, &a->SubscriptionReference);
	a->CurrentTime = NULL;
	a->TerminationTime = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__SubscribeResponse(struct soap *soap, const struct _wsnt__SubscribeResponse *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->SubscriptionReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &a->SubscriptionReference);
	soap_serialize_PointerTotime(soap, &a->CurrentTime);
	soap_serialize_PointerTotime(soap, &a->TerminationTime);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__SubscribeResponse(struct soap *soap, const char *tag, int id, const struct _wsnt__SubscribeResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__SubscribeResponse), type))
		return soap->error;
	soap_element_result(soap, "wsnt:SubscriptionReference");
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", -1, &a->SubscriptionReference, ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CurrentTime", -1, &a->CurrentTime, ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:TerminationTime", -1, &a->TerminationTime, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__SubscribeResponse * SOAP_FMAC4 soap_in__wsnt__SubscribeResponse(struct soap *soap, const char *tag, struct _wsnt__SubscribeResponse *a, const char *type)
{
	size_t soap_flag_SubscriptionReference = 1;
	size_t soap_flag_CurrentTime = 1;
	size_t soap_flag_TerminationTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__SubscribeResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__SubscribeResponse, sizeof(struct _wsnt__SubscribeResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__SubscribeResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SubscriptionReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", &a->SubscriptionReference, "wsa5:EndpointReferenceType"))
				{	soap_flag_SubscriptionReference--;
					continue;
				}
			if (soap_flag_CurrentTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CurrentTime", &a->CurrentTime, "xsd:dateTime"))
				{	soap_flag_CurrentTime--;
					continue;
				}
			if (soap_flag_TerminationTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:TerminationTime", &a->TerminationTime, "xsd:dateTime"))
				{	soap_flag_TerminationTime--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
					continue;
				}
			}
			soap_check_result(soap, "wsnt:SubscriptionReference");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__SubscribeResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__SubscribeResponse, 0, sizeof(struct _wsnt__SubscribeResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SubscriptionReference > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__SubscribeResponse(struct soap *soap, const struct _wsnt__SubscribeResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__SubscribeResponse);
	if (soap_out__wsnt__SubscribeResponse(soap, tag?tag:"wsnt:SubscribeResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__SubscribeResponse * SOAP_FMAC4 soap_get__wsnt__SubscribeResponse(struct soap *soap, struct _wsnt__SubscribeResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__SubscribeResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, struct _wsnt__Subscribe_SubscriptionPolicy *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const struct _wsnt__Subscribe_SubscriptionPolicy *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const char *tag, int id, const struct _wsnt__Subscribe_SubscriptionPolicy *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__Subscribe_SubscriptionPolicy * SOAP_FMAC4 soap_in__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const char *tag, struct _wsnt__Subscribe_SubscriptionPolicy *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__Subscribe_SubscriptionPolicy *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy, sizeof(struct _wsnt__Subscribe_SubscriptionPolicy), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__Subscribe_SubscriptionPolicy(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__Subscribe_SubscriptionPolicy *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy, 0, sizeof(struct _wsnt__Subscribe_SubscriptionPolicy), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, const struct _wsnt__Subscribe_SubscriptionPolicy *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__Subscribe_SubscriptionPolicy);
	if (soap_out__wsnt__Subscribe_SubscriptionPolicy(soap, tag?tag:"wsnt:Subscribe-SubscriptionPolicy", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__Subscribe_SubscriptionPolicy * SOAP_FMAC4 soap_get__wsnt__Subscribe_SubscriptionPolicy(struct soap *soap, struct _wsnt__Subscribe_SubscriptionPolicy *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Subscribe_SubscriptionPolicy(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__Subscribe(struct soap *soap, struct _wsnt__Subscribe *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsa5__EndpointReferenceType(soap, &a->ConsumerReference);
	a->Filter = NULL;
	soap_default_wsnt__AbsoluteOrRelativeTimeType(soap, &a->InitialTerminationTime);
	a->SubscriptionPolicy = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__Subscribe(struct soap *soap, const struct _wsnt__Subscribe *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->ConsumerReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &a->ConsumerReference);
	soap_serialize_PointerTowsnt__FilterType(soap, &a->Filter);
	soap_serialize_wsnt__AbsoluteOrRelativeTimeType(soap, &a->InitialTerminationTime);
	soap_serialize_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, &a->SubscriptionPolicy);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Subscribe(struct soap *soap, const char *tag, int id, const struct _wsnt__Subscribe *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Subscribe), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", -1, &a->ConsumerReference, ""))
		return soap->error;
	if (soap_out_PointerTowsnt__FilterType(soap, "wsnt:Filter", -1, &a->Filter, ""))
		return soap->error;
	if (soap_out_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:InitialTerminationTime", -1, &a->InitialTerminationTime, ""))
		return soap->error;
	if (soap_out_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, "wsnt:SubscriptionPolicy", -1, &a->SubscriptionPolicy, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__Subscribe * SOAP_FMAC4 soap_in__wsnt__Subscribe(struct soap *soap, const char *tag, struct _wsnt__Subscribe *a, const char *type)
{
	size_t soap_flag_ConsumerReference = 1;
	size_t soap_flag_Filter = 1;
	size_t soap_flag_InitialTerminationTime = 1;
	size_t soap_flag_SubscriptionPolicy = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__Subscribe *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Subscribe, sizeof(struct _wsnt__Subscribe), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__Subscribe(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConsumerReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", &a->ConsumerReference, "wsa5:EndpointReferenceType"))
				{	soap_flag_ConsumerReference--;
					continue;
				}
			if (soap_flag_Filter && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "wsnt:Filter", &a->Filter, "wsnt:FilterType"))
				{	soap_flag_Filter--;
					continue;
				}
			if (soap_flag_InitialTerminationTime && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_wsnt__AbsoluteOrRelativeTimeType(soap, "wsnt:InitialTerminationTime", &a->InitialTerminationTime, "wsnt:AbsoluteOrRelativeTimeType"))
				{	soap_flag_InitialTerminationTime--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_wsnt__Subscribe_SubscriptionPolicy(soap, "wsnt:SubscriptionPolicy", &a->SubscriptionPolicy, ""))
				{	soap_flag_SubscriptionPolicy--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__Subscribe *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Subscribe, 0, sizeof(struct _wsnt__Subscribe), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConsumerReference > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__Subscribe(struct soap *soap, const struct _wsnt__Subscribe *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__Subscribe);
	if (soap_out__wsnt__Subscribe(soap, tag?tag:"wsnt:Subscribe", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__Subscribe * SOAP_FMAC4 soap_get__wsnt__Subscribe(struct soap *soap, struct _wsnt__Subscribe *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Subscribe(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__UseRaw(struct soap *soap, struct _wsnt__UseRaw *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__UseRaw(struct soap *soap, const struct _wsnt__UseRaw *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__UseRaw(struct soap *soap, const char *tag, int id, const struct _wsnt__UseRaw *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__UseRaw), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__UseRaw * SOAP_FMAC4 soap_in__wsnt__UseRaw(struct soap *soap, const char *tag, struct _wsnt__UseRaw *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__UseRaw *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__UseRaw, sizeof(struct _wsnt__UseRaw), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__UseRaw(soap, a);
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
	{	a = (struct _wsnt__UseRaw *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__UseRaw, 0, sizeof(struct _wsnt__UseRaw), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__UseRaw(struct soap *soap, const struct _wsnt__UseRaw *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__UseRaw);
	if (soap_out__wsnt__UseRaw(soap, tag?tag:"wsnt:UseRaw", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__UseRaw * SOAP_FMAC4 soap_get__wsnt__UseRaw(struct soap *soap, struct _wsnt__UseRaw *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__UseRaw(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__Notify(struct soap *soap, struct _wsnt__Notify *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeNotificationMessage = 0;
	a->NotificationMessage = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__Notify(struct soap *soap, const struct _wsnt__Notify *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->NotificationMessage)
	{	int i;
		for (i = 0; i < a->__sizeNotificationMessage; i++)
		{
			soap_embedded(soap, a->NotificationMessage + i, SOAP_TYPE_wsnt__NotificationMessageHolderType);
			soap_serialize_wsnt__NotificationMessageHolderType(soap, a->NotificationMessage + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__Notify(struct soap *soap, const char *tag, int id, const struct _wsnt__Notify *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__Notify), type))
		return soap->error;
	if (a->NotificationMessage)
	{	int i;
		for (i = 0; i < a->__sizeNotificationMessage; i++)
			if (soap_out_wsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", -1, a->NotificationMessage + i, ""))
				return soap->error;
	}
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__Notify * SOAP_FMAC4 soap_in__wsnt__Notify(struct soap *soap, const char *tag, struct _wsnt__Notify *a, const char *type)
{
	struct soap_blist *soap_blist_NotificationMessage = NULL;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__Notify *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__Notify, sizeof(struct _wsnt__Notify), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__Notify(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:NotificationMessage", 1, NULL))
			{	if (a->NotificationMessage == NULL)
				{	if (soap_blist_NotificationMessage == NULL)
						soap_blist_NotificationMessage = soap_new_block(soap);
					a->NotificationMessage = (struct wsnt__NotificationMessageHolderType *)soap_push_block(soap, soap_blist_NotificationMessage, sizeof(struct wsnt__NotificationMessageHolderType));
					if (a->NotificationMessage == NULL)
						return NULL;
					soap_default_wsnt__NotificationMessageHolderType(soap, a->NotificationMessage);
				}
				soap_revert(soap);
				if (soap_in_wsnt__NotificationMessageHolderType(soap, "wsnt:NotificationMessage", a->NotificationMessage, "wsnt:NotificationMessageHolderType"))
				{	a->__sizeNotificationMessage++;
					a->NotificationMessage = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->NotificationMessage)
			soap_pop_block(soap, soap_blist_NotificationMessage);
		if (a->__sizeNotificationMessage)
			a->NotificationMessage = (struct wsnt__NotificationMessageHolderType *)soap_save_block(soap, soap_blist_NotificationMessage, NULL, 1);
		else
		{	a->NotificationMessage = NULL;
			if (soap_blist_NotificationMessage)
				soap_end_block(soap, soap_blist_NotificationMessage);
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__Notify *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__Notify, 0, sizeof(struct _wsnt__Notify), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeNotificationMessage < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__Notify(struct soap *soap, const struct _wsnt__Notify *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__Notify);
	if (soap_out__wsnt__Notify(soap, tag?tag:"wsnt:Notify", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__Notify * SOAP_FMAC4 soap_get__wsnt__Notify(struct soap *soap, struct _wsnt__Notify *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__Notify(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__SubscriptionManagerRP(struct soap *soap, struct _wsnt__SubscriptionManagerRP *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_wsa5__EndpointReferenceType(soap, &a->ConsumerReference);
	a->Filter = NULL;
	a->SubscriptionPolicy = NULL;
	a->CreationTime = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__SubscriptionManagerRP(struct soap *soap, const struct _wsnt__SubscriptionManagerRP *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->ConsumerReference, SOAP_TYPE_wsa5__EndpointReferenceType);
	soap_serialize_wsa5__EndpointReferenceType(soap, &a->ConsumerReference);
	soap_serialize_PointerTowsnt__FilterType(soap, &a->Filter);
	soap_serialize_PointerTowsnt__SubscriptionPolicyType(soap, &a->SubscriptionPolicy);
	soap_serialize_PointerTotime(soap, &a->CreationTime);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__SubscriptionManagerRP(struct soap *soap, const char *tag, int id, const struct _wsnt__SubscriptionManagerRP *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__SubscriptionManagerRP), type))
		return soap->error;
	if (soap_out_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", -1, &a->ConsumerReference, ""))
		return soap->error;
	if (soap_out_PointerTowsnt__FilterType(soap, "wsnt:Filter", -1, &a->Filter, ""))
		return soap->error;
	if (soap_out_PointerTowsnt__SubscriptionPolicyType(soap, "wsnt:SubscriptionPolicy", -1, &a->SubscriptionPolicy, ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "wsnt:CreationTime", -1, &a->CreationTime, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__SubscriptionManagerRP * SOAP_FMAC4 soap_in__wsnt__SubscriptionManagerRP(struct soap *soap, const char *tag, struct _wsnt__SubscriptionManagerRP *a, const char *type)
{
	size_t soap_flag_ConsumerReference = 1;
	size_t soap_flag_Filter = 1;
	size_t soap_flag_SubscriptionPolicy = 1;
	size_t soap_flag_CreationTime = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__SubscriptionManagerRP *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__SubscriptionManagerRP, sizeof(struct _wsnt__SubscriptionManagerRP), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__SubscriptionManagerRP(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_ConsumerReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_wsa5__EndpointReferenceType(soap, "wsnt:ConsumerReference", &a->ConsumerReference, "wsa5:EndpointReferenceType"))
				{	soap_flag_ConsumerReference--;
					continue;
				}
			if (soap_flag_Filter && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__FilterType(soap, "wsnt:Filter", &a->Filter, "wsnt:FilterType"))
				{	soap_flag_Filter--;
					continue;
				}
			if (soap_flag_SubscriptionPolicy && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__SubscriptionPolicyType(soap, "wsnt:SubscriptionPolicy", &a->SubscriptionPolicy, "wsnt:SubscriptionPolicyType"))
				{	soap_flag_SubscriptionPolicy--;
					continue;
				}
			if (soap_flag_CreationTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "wsnt:CreationTime", &a->CreationTime, "xsd:dateTime"))
				{	soap_flag_CreationTime--;
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
	{	a = (struct _wsnt__SubscriptionManagerRP *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__SubscriptionManagerRP, 0, sizeof(struct _wsnt__SubscriptionManagerRP), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ConsumerReference > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__SubscriptionManagerRP(struct soap *soap, const struct _wsnt__SubscriptionManagerRP *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__SubscriptionManagerRP);
	if (soap_out__wsnt__SubscriptionManagerRP(soap, tag?tag:"wsnt:SubscriptionManagerRP", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__SubscriptionManagerRP * SOAP_FMAC4 soap_get__wsnt__SubscriptionManagerRP(struct soap *soap, struct _wsnt__SubscriptionManagerRP *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__SubscriptionManagerRP(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wstop__TopicSetType(struct soap *soap, struct wstop__TopicSetType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->documentation = NULL;
	a->__anyAttribute = NULL;
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wstop__TopicSetType(struct soap *soap, const struct wstop__TopicSetType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowstop__Documentation(soap, &a->documentation);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstop__TopicSetType(struct soap *soap, const char *tag, int id, const struct wstop__TopicSetType *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wstop__TopicSetType), type))
		return soap->error;
	if (soap_out_PointerTowstop__Documentation(soap, "wstop:documentation", -1, &a->documentation, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wstop__TopicSetType * SOAP_FMAC4 soap_in_wstop__TopicSetType(struct soap *soap, const char *tag, struct wstop__TopicSetType *a, const char *type)
{
	size_t soap_flag_documentation = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wstop__TopicSetType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wstop__TopicSetType, sizeof(struct wstop__TopicSetType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wstop__TopicSetType(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_documentation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__Documentation(soap, "wstop:documentation", &a->documentation, "wstop:Documentation"))
				{	soap_flag_documentation--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wstop__TopicSetType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wstop__TopicSetType, 0, sizeof(struct wstop__TopicSetType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wstop__TopicSetType(struct soap *soap, const struct wstop__TopicSetType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wstop__TopicSetType);
	if (soap_out_wstop__TopicSetType(soap, tag?tag:"wstop:TopicSetType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wstop__TopicSetType * SOAP_FMAC4 soap_get_wstop__TopicSetType(struct soap *soap, struct wstop__TopicSetType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wstop__TopicSetType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__NotificationProducerRP(struct soap *soap, struct _wsnt__NotificationProducerRP *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeTopicExpression = 0;
	a->TopicExpression = NULL;
	a->FixedTopicSet = NULL;
	a->__sizeTopicExpressionDialect = 0;
	a->TopicExpressionDialect = NULL;
	a->wstop__TopicSet = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__NotificationProducerRP(struct soap *soap, const struct _wsnt__NotificationProducerRP *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->TopicExpression)
	{	int i;
		for (i = 0; i < a->__sizeTopicExpression; i++)
		{
			soap_embedded(soap, a->TopicExpression + i, SOAP_TYPE_wsnt__TopicExpressionType);
			soap_serialize_wsnt__TopicExpressionType(soap, a->TopicExpression + i);
		}
	}
	soap_serialize_PointerToxsd__boolean(soap, &a->FixedTopicSet);
	if (a->TopicExpressionDialect)
	{	int i;
		for (i = 0; i < a->__sizeTopicExpressionDialect; i++)
		{
			soap_serialize_xsd__anyURI(soap, a->TopicExpressionDialect + i);
		}
	}
	soap_serialize_PointerTowstop__TopicSetType(soap, &a->wstop__TopicSet);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__NotificationProducerRP(struct soap *soap, const char *tag, int id, const struct _wsnt__NotificationProducerRP *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__NotificationProducerRP), type))
		return soap->error;
	if (a->TopicExpression)
	{	int i;
		for (i = 0; i < a->__sizeTopicExpression; i++)
			if (soap_out_wsnt__TopicExpressionType(soap, "wsnt:TopicExpression", -1, a->TopicExpression + i, ""))
				return soap->error;
	}
	if (soap_out_PointerToxsd__boolean(soap, "wsnt:FixedTopicSet", -1, &a->FixedTopicSet, ""))
		return soap->error;
	if (a->TopicExpressionDialect)
	{	int i;
		for (i = 0; i < a->__sizeTopicExpressionDialect; i++)
			if (soap_out_xsd__anyURI(soap, "wsnt:TopicExpressionDialect", -1, a->TopicExpressionDialect + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTowstop__TopicSetType(soap, "wstop:TopicSet", -1, &a->wstop__TopicSet, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__NotificationProducerRP * SOAP_FMAC4 soap_in__wsnt__NotificationProducerRP(struct soap *soap, const char *tag, struct _wsnt__NotificationProducerRP *a, const char *type)
{
	struct soap_blist *soap_blist_TopicExpression = NULL;
	size_t soap_flag_FixedTopicSet = 1;
	struct soap_blist *soap_blist_TopicExpressionDialect = NULL;
	size_t soap_flag_wstop__TopicSet = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__NotificationProducerRP *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__NotificationProducerRP, sizeof(struct _wsnt__NotificationProducerRP), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__NotificationProducerRP(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:TopicExpression", 1, NULL))
			{	if (a->TopicExpression == NULL)
				{	if (soap_blist_TopicExpression == NULL)
						soap_blist_TopicExpression = soap_new_block(soap);
					a->TopicExpression = (struct wsnt__TopicExpressionType *)soap_push_block(soap, soap_blist_TopicExpression, sizeof(struct wsnt__TopicExpressionType));
					if (a->TopicExpression == NULL)
						return NULL;
					soap_default_wsnt__TopicExpressionType(soap, a->TopicExpression);
				}
				soap_revert(soap);
				if (soap_in_wsnt__TopicExpressionType(soap, "wsnt:TopicExpression", a->TopicExpression, "wsnt:TopicExpressionType"))
				{	a->__sizeTopicExpression++;
					a->TopicExpression = NULL;
					continue;
				}
			}
			if (soap_flag_FixedTopicSet && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "wsnt:FixedTopicSet", &a->FixedTopicSet, "xsd:boolean"))
				{	soap_flag_FixedTopicSet--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "wsnt:TopicExpressionDialect", 1, NULL))
			{	if (a->TopicExpressionDialect == NULL)
				{	if (soap_blist_TopicExpressionDialect == NULL)
						soap_blist_TopicExpressionDialect = soap_new_block(soap);
					a->TopicExpressionDialect = (char **)soap_push_block(soap, soap_blist_TopicExpressionDialect, sizeof(char *));
					if (a->TopicExpressionDialect == NULL)
						return NULL;
					*a->TopicExpressionDialect = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "wsnt:TopicExpressionDialect", a->TopicExpressionDialect, "xsd:anyURI"))
				{	a->__sizeTopicExpressionDialect++;
					a->TopicExpressionDialect = NULL;
					continue;
				}
			}
			if (soap_flag_wstop__TopicSet && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowstop__TopicSetType(soap, "wstop:TopicSet", &a->wstop__TopicSet, "wstop:TopicSetType"))
				{	soap_flag_wstop__TopicSet--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->TopicExpression)
			soap_pop_block(soap, soap_blist_TopicExpression);
		if (a->__sizeTopicExpression)
			a->TopicExpression = (struct wsnt__TopicExpressionType *)soap_save_block(soap, soap_blist_TopicExpression, NULL, 1);
		else
		{	a->TopicExpression = NULL;
			if (soap_blist_TopicExpression)
				soap_end_block(soap, soap_blist_TopicExpression);
		}
		if (a->TopicExpressionDialect)
			soap_pop_block(soap, soap_blist_TopicExpressionDialect);
		if (a->__sizeTopicExpressionDialect)
			a->TopicExpressionDialect = (char **)soap_save_block(soap, soap_blist_TopicExpressionDialect, NULL, 1);
		else
		{	a->TopicExpressionDialect = NULL;
			if (soap_blist_TopicExpressionDialect)
				soap_end_block(soap, soap_blist_TopicExpressionDialect);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _wsnt__NotificationProducerRP *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__NotificationProducerRP, 0, sizeof(struct _wsnt__NotificationProducerRP), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__NotificationProducerRP(struct soap *soap, const struct _wsnt__NotificationProducerRP *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__NotificationProducerRP);
	if (soap_out__wsnt__NotificationProducerRP(soap, tag?tag:"wsnt:NotificationProducerRP", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__NotificationProducerRP * SOAP_FMAC4 soap_get__wsnt__NotificationProducerRP(struct soap *soap, struct _wsnt__NotificationProducerRP *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__NotificationProducerRP(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__wsnt__NotificationMessageHolderType_Message(struct soap *soap, struct _wsnt__NotificationMessageHolderType_Message *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const struct _wsnt__NotificationMessageHolderType_Message *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const char *tag, int id, const struct _wsnt__NotificationMessageHolderType_Message *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message), type))
		return soap->error;
	soap_outliteral(soap, "-any", &a->__any, NULL);
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _wsnt__NotificationMessageHolderType_Message * SOAP_FMAC4 soap_in__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const char *tag, struct _wsnt__NotificationMessageHolderType_Message *a, const char *type)
{
	size_t soap_flag___any = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _wsnt__NotificationMessageHolderType_Message *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message, sizeof(struct _wsnt__NotificationMessageHolderType_Message), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__wsnt__NotificationMessageHolderType_Message(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag___any && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_inliteral(soap, "-any", &a->__any))
				{	soap_flag___any--;
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
	{	a = (struct _wsnt__NotificationMessageHolderType_Message *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message, 0, sizeof(struct _wsnt__NotificationMessageHolderType_Message), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__wsnt__NotificationMessageHolderType_Message(struct soap *soap, const struct _wsnt__NotificationMessageHolderType_Message *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__wsnt__NotificationMessageHolderType_Message);
	if (soap_out__wsnt__NotificationMessageHolderType_Message(soap, tag?tag:"wsnt:NotificationMessageHolderType-Message", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _wsnt__NotificationMessageHolderType_Message * SOAP_FMAC4 soap_get__wsnt__NotificationMessageHolderType_Message(struct soap *soap, struct _wsnt__NotificationMessageHolderType_Message *p, const char *tag, const char *type)
{
	if ((p = soap_in__wsnt__NotificationMessageHolderType_Message(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsnt__SubscriptionPolicyType(struct soap *soap, struct wsnt__SubscriptionPolicyType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsnt__SubscriptionPolicyType(struct soap *soap, const struct wsnt__SubscriptionPolicyType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__SubscriptionPolicyType(struct soap *soap, const char *tag, int id, const struct wsnt__SubscriptionPolicyType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__SubscriptionPolicyType), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsnt__SubscriptionPolicyType * SOAP_FMAC4 soap_in_wsnt__SubscriptionPolicyType(struct soap *soap, const char *tag, struct wsnt__SubscriptionPolicyType *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsnt__SubscriptionPolicyType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__SubscriptionPolicyType, sizeof(struct wsnt__SubscriptionPolicyType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsnt__SubscriptionPolicyType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct wsnt__SubscriptionPolicyType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__SubscriptionPolicyType, 0, sizeof(struct wsnt__SubscriptionPolicyType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsnt__SubscriptionPolicyType(struct soap *soap, const struct wsnt__SubscriptionPolicyType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsnt__SubscriptionPolicyType);
	if (soap_out_wsnt__SubscriptionPolicyType(soap, tag?tag:"wsnt:SubscriptionPolicyType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsnt__SubscriptionPolicyType * SOAP_FMAC4 soap_get_wsnt__SubscriptionPolicyType(struct soap *soap, struct wsnt__SubscriptionPolicyType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__SubscriptionPolicyType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__Message(struct soap *soap, struct _tt__Message *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Source = NULL;
	a->Key = NULL;
	a->Data = NULL;
	a->Extension = NULL;
	soap_default_time(soap, &a->UtcTime);
	a->PropertyOperation = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__Message(struct soap *soap, const struct _tt__Message *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemList(soap, &a->Source);
	soap_serialize_PointerTott__ItemList(soap, &a->Key);
	soap_serialize_PointerTott__ItemList(soap, &a->Data);
	soap_serialize_PointerTott__MessageExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Message(struct soap *soap, const char *tag, int id, const struct _tt__Message *a, const char *type)
{
	soap_set_attr(soap, "UtcTime", soap_dateTime2s(soap, a->UtcTime), 1);
	if (a->PropertyOperation)
		soap_set_attr(soap, "PropertyOperation", soap_tt__PropertyOperation2s(soap, *a->PropertyOperation), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Message), type))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Source", -1, &a->Source, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Key", -1, &a->Key, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemList(soap, "tt:Data", -1, &a->Data, ""))
		return soap->error;
	if (soap_out_PointerTott__MessageExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__Message * SOAP_FMAC4 soap_in__tt__Message(struct soap *soap, const char *tag, struct _tt__Message *a, const char *type)
{
	size_t soap_flag_Source = 1;
	size_t soap_flag_Key = 1;
	size_t soap_flag_Data = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__Message *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Message, sizeof(struct _tt__Message), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__Message(soap, a);
	if (soap_s2dateTime(soap, soap_attr_value(soap, "UtcTime", 1), &a->UtcTime))
		return NULL;
	{	const char *t = soap_attr_value(soap, "PropertyOperation", 0);
		if (t)
		{
			if (!(a->PropertyOperation = (enum tt__PropertyOperation *)soap_malloc(soap, sizeof(enum tt__PropertyOperation))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2tt__PropertyOperation(soap, t, a->PropertyOperation))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Source && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Source", &a->Source, "tt:ItemList"))
				{	soap_flag_Source--;
					continue;
				}
			if (soap_flag_Key && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Key", &a->Key, "tt:ItemList"))
				{	soap_flag_Key--;
					continue;
				}
			if (soap_flag_Data && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Data", &a->Data, "tt:ItemList"))
				{	soap_flag_Data--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MessageExtension(soap, "tt:Extension", &a->Extension, "tt:MessageExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct _tt__Message *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Message, 0, sizeof(struct _tt__Message), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__Message(struct soap *soap, const struct _tt__Message *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__Message);
	if (soap_out__tt__Message(soap, tag?tag:"tt:Message", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__Message * SOAP_FMAC4 soap_get__tt__Message(struct soap *soap, struct _tt__Message *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Message(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ActionEngineEventPayloadExtension(struct soap *soap, struct tt__ActionEngineEventPayloadExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ActionEngineEventPayloadExtension(struct soap *soap, const struct tt__ActionEngineEventPayloadExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ActionEngineEventPayloadExtension(struct soap *soap, const char *tag, int id, const struct tt__ActionEngineEventPayloadExtension *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ActionEngineEventPayloadExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ActionEngineEventPayloadExtension * SOAP_FMAC4 soap_in_tt__ActionEngineEventPayloadExtension(struct soap *soap, const char *tag, struct tt__ActionEngineEventPayloadExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ActionEngineEventPayloadExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ActionEngineEventPayloadExtension, sizeof(struct tt__ActionEngineEventPayloadExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ActionEngineEventPayloadExtension(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ActionEngineEventPayloadExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ActionEngineEventPayloadExtension, 0, sizeof(struct tt__ActionEngineEventPayloadExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ActionEngineEventPayloadExtension(struct soap *soap, const struct tt__ActionEngineEventPayloadExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ActionEngineEventPayloadExtension);
	if (soap_out_tt__ActionEngineEventPayloadExtension(soap, tag?tag:"tt:ActionEngineEventPayloadExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ActionEngineEventPayloadExtension * SOAP_FMAC4 soap_get_tt__ActionEngineEventPayloadExtension(struct soap *soap, struct tt__ActionEngineEventPayloadExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ActionEngineEventPayloadExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ActionEngineEventPayload(struct soap *soap, struct tt__ActionEngineEventPayload *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->RequestInfo = NULL;
	a->ResponseInfo = NULL;
	a->Fault = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ActionEngineEventPayload(struct soap *soap, const struct tt__ActionEngineEventPayload *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToSOAP_ENV__Envelope(soap, &a->RequestInfo);
	soap_serialize_PointerToSOAP_ENV__Envelope(soap, &a->ResponseInfo);
	soap_serialize_PointerToSOAP_ENV__Fault(soap, &a->Fault);
	soap_serialize_PointerTott__ActionEngineEventPayloadExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ActionEngineEventPayload(struct soap *soap, const char *tag, int id, const struct tt__ActionEngineEventPayload *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ActionEngineEventPayload), type))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Envelope(soap, "tt:RequestInfo", -1, &a->RequestInfo, ""))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Envelope(soap, "tt:ResponseInfo", -1, &a->ResponseInfo, ""))
		return soap->error;
	if (soap_out_PointerToSOAP_ENV__Fault(soap, "tt:Fault", -1, &a->Fault, ""))
		return soap->error;
	if (soap_out_PointerTott__ActionEngineEventPayloadExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ActionEngineEventPayload * SOAP_FMAC4 soap_in_tt__ActionEngineEventPayload(struct soap *soap, const char *tag, struct tt__ActionEngineEventPayload *a, const char *type)
{
	size_t soap_flag_RequestInfo = 1;
	size_t soap_flag_ResponseInfo = 1;
	size_t soap_flag_Fault = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ActionEngineEventPayload *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ActionEngineEventPayload, sizeof(struct tt__ActionEngineEventPayload), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ActionEngineEventPayload(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RequestInfo && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Envelope(soap, "tt:RequestInfo", &a->RequestInfo, ""))
				{	soap_flag_RequestInfo--;
					continue;
				}
			if (soap_flag_ResponseInfo && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Envelope(soap, "tt:ResponseInfo", &a->ResponseInfo, ""))
				{	soap_flag_ResponseInfo--;
					continue;
				}
			if (soap_flag_Fault && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToSOAP_ENV__Fault(soap, "tt:Fault", &a->Fault, ""))
				{	soap_flag_Fault--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ActionEngineEventPayloadExtension(soap, "tt:Extension", &a->Extension, "tt:ActionEngineEventPayloadExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__ActionEngineEventPayload *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ActionEngineEventPayload, 0, sizeof(struct tt__ActionEngineEventPayload), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ActionEngineEventPayload(struct soap *soap, const struct tt__ActionEngineEventPayload *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ActionEngineEventPayload);
	if (soap_out_tt__ActionEngineEventPayload(soap, tag?tag:"tt:ActionEngineEventPayload", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ActionEngineEventPayload * SOAP_FMAC4 soap_get_tt__ActionEngineEventPayload(struct soap *soap, struct tt__ActionEngineEventPayload *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ActionEngineEventPayload(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsState(struct soap *soap, struct tt__AnalyticsState *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Error);
	soap_default_string(soap, &a->State);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsState(struct soap *soap, const struct tt__AnalyticsState *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Error);
	soap_serialize_string(soap, &a->State);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsState(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsState *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsState), type))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &a->Error, ""))
		return soap->error;
	if (a->State)
	{	if (soap_out_string(soap, "tt:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsState * SOAP_FMAC4 soap_in_tt__AnalyticsState(struct soap *soap, const char *tag, struct tt__AnalyticsState *a, const char *type)
{
	size_t soap_flag_Error = 1;
	size_t soap_flag_State = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsState *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsState, sizeof(struct tt__AnalyticsState), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsState(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Error && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &a->Error, "xsd:string"))
				{	soap_flag_Error--;
					continue;
				}
			if (soap_flag_State && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:State", &a->State, "xsd:string"))
				{	soap_flag_State--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsState *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsState, 0, sizeof(struct tt__AnalyticsState), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsState(struct soap *soap, const struct tt__AnalyticsState *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsState);
	if (soap_out_tt__AnalyticsState(soap, tag?tag:"tt:AnalyticsState", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsState * SOAP_FMAC4 soap_get_tt__AnalyticsState(struct soap *soap, struct tt__AnalyticsState *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsState(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsStateInformation(struct soap *soap, struct tt__AnalyticsStateInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
	a->State = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsStateInformation(struct soap *soap, const struct tt__AnalyticsStateInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->AnalyticsEngineControlToken);
	soap_serialize_PointerTott__AnalyticsState(soap, &a->State);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsStateInformation(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsStateInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsStateInformation), type))
		return soap->error;
	if (a->AnalyticsEngineControlToken)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:AnalyticsEngineControlToken", -1, &a->AnalyticsEngineControlToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineControlToken"))
		return soap->error;
	if (a->State)
	{	if (soap_out_PointerTott__AnalyticsState(soap, "tt:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsStateInformation * SOAP_FMAC4 soap_in_tt__AnalyticsStateInformation(struct soap *soap, const char *tag, struct tt__AnalyticsStateInformation *a, const char *type)
{
	size_t soap_flag_AnalyticsEngineControlToken = 1;
	size_t soap_flag_State = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsStateInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsStateInformation, sizeof(struct tt__AnalyticsStateInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsStateInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AnalyticsEngineControlToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AnalyticsEngineControlToken", &a->AnalyticsEngineControlToken, "tt:ReferenceToken"))
				{	soap_flag_AnalyticsEngineControlToken--;
					continue;
				}
			if (soap_flag_State && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsState(soap, "tt:State", &a->State, "tt:AnalyticsState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsStateInformation, 0, sizeof(struct tt__AnalyticsStateInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_AnalyticsEngineControlToken > 0 || soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsStateInformation(struct soap *soap, const struct tt__AnalyticsStateInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsStateInformation);
	if (soap_out_tt__AnalyticsStateInformation(soap, tag?tag:"tt:AnalyticsStateInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsStateInformation * SOAP_FMAC4 soap_get_tt__AnalyticsStateInformation(struct soap *soap, struct tt__AnalyticsStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataInputExtension(struct soap *soap, struct tt__MetadataInputExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataInputExtension(struct soap *soap, const struct tt__MetadataInputExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataInputExtension(struct soap *soap, const char *tag, int id, const struct tt__MetadataInputExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataInputExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataInputExtension * SOAP_FMAC4 soap_in_tt__MetadataInputExtension(struct soap *soap, const char *tag, struct tt__MetadataInputExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataInputExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataInputExtension, sizeof(struct tt__MetadataInputExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataInputExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataInputExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataInputExtension, 0, sizeof(struct tt__MetadataInputExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataInputExtension(struct soap *soap, const struct tt__MetadataInputExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataInputExtension);
	if (soap_out_tt__MetadataInputExtension(soap, tag?tag:"tt:MetadataInputExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataInputExtension * SOAP_FMAC4 soap_get_tt__MetadataInputExtension(struct soap *soap, struct tt__MetadataInputExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataInputExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataInput(struct soap *soap, struct tt__MetadataInput *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeMetadataConfig = 0;
	a->MetadataConfig = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataInput(struct soap *soap, const struct tt__MetadataInput *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->MetadataConfig)
	{	int i;
		for (i = 0; i < a->__sizeMetadataConfig; i++)
		{
			soap_embedded(soap, a->MetadataConfig + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->MetadataConfig + i);
		}
	}
	soap_serialize_PointerTott__MetadataInputExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataInput(struct soap *soap, const char *tag, int id, const struct tt__MetadataInput *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataInput), type))
		return soap->error;
	if (a->MetadataConfig)
	{	int i;
		for (i = 0; i < a->__sizeMetadataConfig; i++)
			if (soap_out_tt__Config(soap, "tt:MetadataConfig", -1, a->MetadataConfig + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__MetadataInputExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataInput * SOAP_FMAC4 soap_in_tt__MetadataInput(struct soap *soap, const char *tag, struct tt__MetadataInput *a, const char *type)
{
	struct soap_blist *soap_blist_MetadataConfig = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataInput *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataInput, sizeof(struct tt__MetadataInput), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataInput(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:MetadataConfig", 1, NULL))
			{	if (a->MetadataConfig == NULL)
				{	if (soap_blist_MetadataConfig == NULL)
						soap_blist_MetadataConfig = soap_new_block(soap);
					a->MetadataConfig = (struct tt__Config *)soap_push_block(soap, soap_blist_MetadataConfig, sizeof(struct tt__Config));
					if (a->MetadataConfig == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->MetadataConfig);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tt:MetadataConfig", a->MetadataConfig, "tt:Config"))
				{	a->__sizeMetadataConfig++;
					a->MetadataConfig = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataInputExtension(soap, "tt:Extension", &a->Extension, "tt:MetadataInputExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->MetadataConfig)
			soap_pop_block(soap, soap_blist_MetadataConfig);
		if (a->__sizeMetadataConfig)
			a->MetadataConfig = (struct tt__Config *)soap_save_block(soap, soap_blist_MetadataConfig, NULL, 1);
		else
		{	a->MetadataConfig = NULL;
			if (soap_blist_MetadataConfig)
				soap_end_block(soap, soap_blist_MetadataConfig);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataInput *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataInput, 0, sizeof(struct tt__MetadataInput), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataInput(struct soap *soap, const struct tt__MetadataInput *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataInput);
	if (soap_out_tt__MetadataInput(soap, tag?tag:"tt:MetadataInput", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataInput * SOAP_FMAC4 soap_get_tt__MetadataInput(struct soap *soap, struct tt__MetadataInput *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataInput(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SourceIdentificationExtension(struct soap *soap, struct tt__SourceIdentificationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SourceIdentificationExtension(struct soap *soap, const struct tt__SourceIdentificationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceIdentificationExtension(struct soap *soap, const char *tag, int id, const struct tt__SourceIdentificationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceIdentificationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SourceIdentificationExtension * SOAP_FMAC4 soap_in_tt__SourceIdentificationExtension(struct soap *soap, const char *tag, struct tt__SourceIdentificationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SourceIdentificationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceIdentificationExtension, sizeof(struct tt__SourceIdentificationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SourceIdentificationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SourceIdentificationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceIdentificationExtension, 0, sizeof(struct tt__SourceIdentificationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SourceIdentificationExtension(struct soap *soap, const struct tt__SourceIdentificationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SourceIdentificationExtension);
	if (soap_out_tt__SourceIdentificationExtension(soap, tag?tag:"tt:SourceIdentificationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SourceIdentificationExtension * SOAP_FMAC4 soap_get_tt__SourceIdentificationExtension(struct soap *soap, struct tt__SourceIdentificationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceIdentificationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SourceIdentification(struct soap *soap, struct tt__SourceIdentification *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Name);
	a->__sizeToken = 0;
	a->Token = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SourceIdentification(struct soap *soap, const struct tt__SourceIdentification *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Name);
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
		{
			soap_serialize_tt__ReferenceToken(soap, a->Token + i);
		}
	}
	soap_serialize_PointerTott__SourceIdentificationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceIdentification(struct soap *soap, const char *tag, int id, const struct tt__SourceIdentification *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceIdentification), type))
		return soap->error;
	if (a->Name)
	{	if (soap_out_string(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->Token)
	{	int i;
		for (i = 0; i < a->__sizeToken; i++)
			if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, a->Token + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SourceIdentificationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SourceIdentification * SOAP_FMAC4 soap_in_tt__SourceIdentification(struct soap *soap, const char *tag, struct tt__SourceIdentification *a, const char *type)
{
	size_t soap_flag_Name = 1;
	struct soap_blist *soap_blist_Token = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SourceIdentification *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceIdentification, sizeof(struct tt__SourceIdentification), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SourceIdentification(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Name", &a->Name, "xsd:string"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Token", 1, NULL))
			{	if (a->Token == NULL)
				{	if (soap_blist_Token == NULL)
						soap_blist_Token = soap_new_block(soap);
					a->Token = (char **)soap_push_block(soap, soap_blist_Token, sizeof(char *));
					if (a->Token == NULL)
						return NULL;
					*a->Token = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", a->Token, "tt:ReferenceToken"))
				{	a->__sizeToken++;
					a->Token = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceIdentificationExtension(soap, "tt:Extension", &a->Extension, "tt:SourceIdentificationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Token)
			soap_pop_block(soap, soap_blist_Token);
		if (a->__sizeToken)
			a->Token = (char **)soap_save_block(soap, soap_blist_Token, NULL, 1);
		else
		{	a->Token = NULL;
			if (soap_blist_Token)
				soap_end_block(soap, soap_blist_Token);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SourceIdentification *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceIdentification, 0, sizeof(struct tt__SourceIdentification), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Name > 0 || a->__sizeToken < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SourceIdentification(struct soap *soap, const struct tt__SourceIdentification *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SourceIdentification);
	if (soap_out_tt__SourceIdentification(soap, tag?tag:"tt:SourceIdentification", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SourceIdentification * SOAP_FMAC4 soap_get_tt__SourceIdentification(struct soap *soap, struct tt__SourceIdentification *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceIdentification(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, struct tt__AnalyticsEngineInputInfoExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const struct tt__AnalyticsEngineInputInfoExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineInputInfoExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInputInfoExtension * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const char *tag, struct tt__AnalyticsEngineInputInfoExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineInputInfoExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension, sizeof(struct tt__AnalyticsEngineInputInfoExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineInputInfoExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngineInputInfoExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension, 0, sizeof(struct tt__AnalyticsEngineInputInfoExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, const struct tt__AnalyticsEngineInputInfoExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInputInfoExtension);
	if (soap_out_tt__AnalyticsEngineInputInfoExtension(soap, tag?tag:"tt:AnalyticsEngineInputInfoExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInputInfoExtension * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInputInfoExtension(struct soap *soap, struct tt__AnalyticsEngineInputInfoExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInputInfoExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineInputInfo(struct soap *soap, struct tt__AnalyticsEngineInputInfo *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->InputInfo = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineInputInfo(struct soap *soap, const struct tt__AnalyticsEngineInputInfo *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Config(soap, &a->InputInfo);
	soap_serialize_PointerTott__AnalyticsEngineInputInfoExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineInputInfo(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineInputInfo *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfo), type))
		return soap->error;
	if (soap_out_PointerTott__Config(soap, "tt:InputInfo", -1, &a->InputInfo, ""))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsEngineInputInfoExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInputInfo * SOAP_FMAC4 soap_in_tt__AnalyticsEngineInputInfo(struct soap *soap, const char *tag, struct tt__AnalyticsEngineInputInfo *a, const char *type)
{
	size_t soap_flag_InputInfo = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineInputInfo *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineInputInfo, sizeof(struct tt__AnalyticsEngineInputInfo), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineInputInfo(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_InputInfo && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Config(soap, "tt:InputInfo", &a->InputInfo, "tt:Config"))
				{	soap_flag_InputInfo--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInputInfoExtension(soap, "tt:Extension", &a->Extension, "tt:AnalyticsEngineInputInfoExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__AnalyticsEngineInputInfo *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineInputInfo, 0, sizeof(struct tt__AnalyticsEngineInputInfo), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineInputInfo(struct soap *soap, const struct tt__AnalyticsEngineInputInfo *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineInputInfo);
	if (soap_out_tt__AnalyticsEngineInputInfo(soap, tag?tag:"tt:AnalyticsEngineInputInfo", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineInputInfo * SOAP_FMAC4 soap_get_tt__AnalyticsEngineInputInfo(struct soap *soap, struct tt__AnalyticsEngineInputInfo *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineInputInfo(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, struct tt__AnalyticsDeviceEngineConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const struct tt__AnalyticsDeviceEngineConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsDeviceEngineConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceEngineConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsDeviceEngineConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension, sizeof(struct tt__AnalyticsDeviceEngineConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsDeviceEngineConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsDeviceEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension, 0, sizeof(struct tt__AnalyticsDeviceEngineConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, const struct tt__AnalyticsDeviceEngineConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceEngineConfigurationExtension);
	if (soap_out_tt__AnalyticsDeviceEngineConfigurationExtension(soap, tag?tag:"tt:AnalyticsDeviceEngineConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceEngineConfigurationExtension(struct soap *soap, struct tt__AnalyticsDeviceEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EngineConfiguration(struct soap *soap, struct tt__EngineConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->VideoAnalyticsConfiguration = NULL;
	a->AnalyticsEngineInputInfo = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EngineConfiguration(struct soap *soap, const struct tt__EngineConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__VideoAnalyticsConfiguration(soap, &a->VideoAnalyticsConfiguration);
	soap_serialize_PointerTott__AnalyticsEngineInputInfo(soap, &a->AnalyticsEngineInputInfo);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EngineConfiguration(struct soap *soap, const char *tag, int id, const struct tt__EngineConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EngineConfiguration), type))
		return soap->error;
	if (a->VideoAnalyticsConfiguration)
	{	if (soap_out_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", -1, &a->VideoAnalyticsConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoAnalyticsConfiguration"))
		return soap->error;
	if (a->AnalyticsEngineInputInfo)
	{	if (soap_out_PointerTott__AnalyticsEngineInputInfo(soap, "tt:AnalyticsEngineInputInfo", -1, &a->AnalyticsEngineInputInfo, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:AnalyticsEngineInputInfo"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EngineConfiguration * SOAP_FMAC4 soap_in_tt__EngineConfiguration(struct soap *soap, const char *tag, struct tt__EngineConfiguration *a, const char *type)
{
	size_t soap_flag_VideoAnalyticsConfiguration = 1;
	size_t soap_flag_AnalyticsEngineInputInfo = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EngineConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EngineConfiguration, sizeof(struct tt__EngineConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EngineConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_VideoAnalyticsConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAnalyticsConfiguration(soap, "tt:VideoAnalyticsConfiguration", &a->VideoAnalyticsConfiguration, "tt:VideoAnalyticsConfiguration"))
				{	soap_flag_VideoAnalyticsConfiguration--;
					continue;
				}
			if (soap_flag_AnalyticsEngineInputInfo && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineInputInfo(soap, "tt:AnalyticsEngineInputInfo", &a->AnalyticsEngineInputInfo, "tt:AnalyticsEngineInputInfo"))
				{	soap_flag_AnalyticsEngineInputInfo--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__EngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EngineConfiguration, 0, sizeof(struct tt__EngineConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoAnalyticsConfiguration > 0 || soap_flag_AnalyticsEngineInputInfo > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EngineConfiguration(struct soap *soap, const struct tt__EngineConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EngineConfiguration);
	if (soap_out_tt__EngineConfiguration(soap, tag?tag:"tt:EngineConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EngineConfiguration * SOAP_FMAC4 soap_get_tt__EngineConfiguration(struct soap *soap, struct tt__EngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, struct tt__AnalyticsDeviceEngineConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeEngineConfiguration = 0;
	a->EngineConfiguration = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const struct tt__AnalyticsDeviceEngineConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->EngineConfiguration)
	{	int i;
		for (i = 0; i < a->__sizeEngineConfiguration; i++)
		{
			soap_embedded(soap, a->EngineConfiguration + i, SOAP_TYPE_tt__EngineConfiguration);
			soap_serialize_tt__EngineConfiguration(soap, a->EngineConfiguration + i);
		}
	}
	soap_serialize_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsDeviceEngineConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration), type))
		return soap->error;
	if (a->EngineConfiguration)
	{	int i;
		for (i = 0; i < a->__sizeEngineConfiguration; i++)
			if (soap_out_tt__EngineConfiguration(soap, "tt:EngineConfiguration", -1, a->EngineConfiguration + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceEngineConfiguration * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceEngineConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist_EngineConfiguration = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsDeviceEngineConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration, sizeof(struct tt__AnalyticsDeviceEngineConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsDeviceEngineConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:EngineConfiguration", 1, NULL))
			{	if (a->EngineConfiguration == NULL)
				{	if (soap_blist_EngineConfiguration == NULL)
						soap_blist_EngineConfiguration = soap_new_block(soap);
					a->EngineConfiguration = (struct tt__EngineConfiguration *)soap_push_block(soap, soap_blist_EngineConfiguration, sizeof(struct tt__EngineConfiguration));
					if (a->EngineConfiguration == NULL)
						return NULL;
					soap_default_tt__EngineConfiguration(soap, a->EngineConfiguration);
				}
				soap_revert(soap);
				if (soap_in_tt__EngineConfiguration(soap, "tt:EngineConfiguration", a->EngineConfiguration, "tt:EngineConfiguration"))
				{	a->__sizeEngineConfiguration++;
					a->EngineConfiguration = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsDeviceEngineConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:AnalyticsDeviceEngineConfigurationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->EngineConfiguration)
			soap_pop_block(soap, soap_blist_EngineConfiguration);
		if (a->__sizeEngineConfiguration)
			a->EngineConfiguration = (struct tt__EngineConfiguration *)soap_save_block(soap, soap_blist_EngineConfiguration, NULL, 1);
		else
		{	a->EngineConfiguration = NULL;
			if (soap_blist_EngineConfiguration)
				soap_end_block(soap, soap_blist_EngineConfiguration);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsDeviceEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration, 0, sizeof(struct tt__AnalyticsDeviceEngineConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeEngineConfiguration < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, const struct tt__AnalyticsDeviceEngineConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceEngineConfiguration);
	if (soap_out_tt__AnalyticsDeviceEngineConfiguration(soap, tag?tag:"tt:AnalyticsDeviceEngineConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceEngineConfiguration * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceEngineConfiguration(struct soap *soap, struct tt__AnalyticsDeviceEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsDeviceEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReplayConfiguration(struct soap *soap, struct tt__ReplayConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__duration(soap, &a->SessionTimeout);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReplayConfiguration(struct soap *soap, const struct tt__ReplayConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->SessionTimeout, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReplayConfiguration(struct soap *soap, const char *tag, int id, const struct tt__ReplayConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReplayConfiguration), type))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:SessionTimeout", -1, &a->SessionTimeout, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReplayConfiguration * SOAP_FMAC4 soap_in_tt__ReplayConfiguration(struct soap *soap, const char *tag, struct tt__ReplayConfiguration *a, const char *type)
{
	size_t soap_flag_SessionTimeout = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReplayConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReplayConfiguration, sizeof(struct tt__ReplayConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReplayConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SessionTimeout && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:SessionTimeout", &a->SessionTimeout, "xsd:duration"))
				{	soap_flag_SessionTimeout--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ReplayConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReplayConfiguration, 0, sizeof(struct tt__ReplayConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SessionTimeout > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReplayConfiguration(struct soap *soap, const struct tt__ReplayConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReplayConfiguration);
	if (soap_out_tt__ReplayConfiguration(soap, tag?tag:"tt:ReplayConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReplayConfiguration * SOAP_FMAC4 soap_get_tt__ReplayConfiguration(struct soap *soap, struct tt__ReplayConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReplayConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__GetRecordingJobsResponseItem(struct soap *soap, struct tt__GetRecordingJobsResponseItem *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingJobReference(soap, &a->JobToken);
	a->JobConfiguration = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__GetRecordingJobsResponseItem(struct soap *soap, const struct tt__GetRecordingJobsResponseItem *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingJobReference(soap, &a->JobToken);
	soap_serialize_PointerTott__RecordingJobConfiguration(soap, &a->JobConfiguration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetRecordingJobsResponseItem(struct soap *soap, const char *tag, int id, const struct tt__GetRecordingJobsResponseItem *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetRecordingJobsResponseItem), type))
		return soap->error;
	if (a->JobToken)
	{	if (soap_out_tt__RecordingJobReference(soap, "tt:JobToken", -1, &a->JobToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:JobToken"))
		return soap->error;
	if (a->JobConfiguration)
	{	if (soap_out_PointerTott__RecordingJobConfiguration(soap, "tt:JobConfiguration", -1, &a->JobConfiguration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:JobConfiguration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__GetRecordingJobsResponseItem * SOAP_FMAC4 soap_in_tt__GetRecordingJobsResponseItem(struct soap *soap, const char *tag, struct tt__GetRecordingJobsResponseItem *a, const char *type)
{
	size_t soap_flag_JobToken = 1;
	size_t soap_flag_JobConfiguration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__GetRecordingJobsResponseItem *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetRecordingJobsResponseItem, sizeof(struct tt__GetRecordingJobsResponseItem), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__GetRecordingJobsResponseItem(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_JobToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobReference(soap, "tt:JobToken", &a->JobToken, "tt:RecordingJobReference"))
				{	soap_flag_JobToken--;
					continue;
				}
			if (soap_flag_JobConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobConfiguration(soap, "tt:JobConfiguration", &a->JobConfiguration, "tt:RecordingJobConfiguration"))
				{	soap_flag_JobConfiguration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__GetRecordingJobsResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetRecordingJobsResponseItem, 0, sizeof(struct tt__GetRecordingJobsResponseItem), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_JobToken > 0 || soap_flag_JobConfiguration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__GetRecordingJobsResponseItem(struct soap *soap, const struct tt__GetRecordingJobsResponseItem *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__GetRecordingJobsResponseItem);
	if (soap_out_tt__GetRecordingJobsResponseItem(soap, tag?tag:"tt:GetRecordingJobsResponseItem", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__GetRecordingJobsResponseItem * SOAP_FMAC4 soap_get_tt__GetRecordingJobsResponseItem(struct soap *soap, struct tt__GetRecordingJobsResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetRecordingJobsResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobStateTrack(struct soap *soap, struct tt__RecordingJobStateTrack *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->SourceTag);
	soap_default_tt__TrackReference(soap, &a->Destination);
	soap_default_string(soap, &a->Error);
	soap_default_tt__RecordingJobState(soap, &a->State);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobStateTrack(struct soap *soap, const struct tt__RecordingJobStateTrack *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->SourceTag);
	soap_serialize_tt__TrackReference(soap, &a->Destination);
	soap_serialize_string(soap, &a->Error);
	soap_serialize_tt__RecordingJobState(soap, &a->State);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateTrack(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobStateTrack *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateTrack), type))
		return soap->error;
	if (a->SourceTag)
	{	if (soap_out_string(soap, "tt:SourceTag", -1, &a->SourceTag, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceTag"))
		return soap->error;
	if (a->Destination)
	{	if (soap_out_tt__TrackReference(soap, "tt:Destination", -1, &a->Destination, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Destination"))
		return soap->error;
	if (soap_out_string(soap, "tt:Error", -1, &a->Error, ""))
		return soap->error;
	if (a->State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobStateTrack * SOAP_FMAC4 soap_in_tt__RecordingJobStateTrack(struct soap *soap, const char *tag, struct tt__RecordingJobStateTrack *a, const char *type)
{
	size_t soap_flag_SourceTag = 1;
	size_t soap_flag_Destination = 1;
	size_t soap_flag_Error = 1;
	size_t soap_flag_State = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobStateTrack *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateTrack, sizeof(struct tt__RecordingJobStateTrack), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobStateTrack(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SourceTag && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SourceTag", &a->SourceTag, "xsd:string"))
				{	soap_flag_SourceTag--;
					continue;
				}
			if (soap_flag_Destination && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:Destination", &a->Destination, "tt:TrackReference"))
				{	soap_flag_Destination--;
					continue;
				}
			if (soap_flag_Error && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Error", &a->Error, "xsd:string"))
				{	soap_flag_Error--;
					continue;
				}
			if (soap_flag_State && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &a->State, "tt:RecordingJobState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobStateTrack *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateTrack, 0, sizeof(struct tt__RecordingJobStateTrack), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceTag > 0 || soap_flag_Destination > 0 || soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobStateTrack(struct soap *soap, const struct tt__RecordingJobStateTrack *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateTrack);
	if (soap_out_tt__RecordingJobStateTrack(soap, tag?tag:"tt:RecordingJobStateTrack", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobStateTrack * SOAP_FMAC4 soap_get_tt__RecordingJobStateTrack(struct soap *soap, struct tt__RecordingJobStateTrack *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateTrack(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobStateTracks(struct soap *soap, struct tt__RecordingJobStateTracks *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeTrack = 0;
	a->Track = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobStateTracks(struct soap *soap, const struct tt__RecordingJobStateTracks *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
		{
			soap_embedded(soap, a->Track + i, SOAP_TYPE_tt__RecordingJobStateTrack);
			soap_serialize_tt__RecordingJobStateTrack(soap, a->Track + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateTracks(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobStateTracks *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateTracks), type))
		return soap->error;
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
			if (soap_out_tt__RecordingJobStateTrack(soap, "tt:Track", -1, a->Track + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobStateTracks * SOAP_FMAC4 soap_in_tt__RecordingJobStateTracks(struct soap *soap, const char *tag, struct tt__RecordingJobStateTracks *a, const char *type)
{
	struct soap_blist *soap_blist_Track = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobStateTracks *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateTracks, sizeof(struct tt__RecordingJobStateTracks), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobStateTracks(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->Track == NULL)
				{	if (soap_blist_Track == NULL)
						soap_blist_Track = soap_new_block(soap);
					a->Track = (struct tt__RecordingJobStateTrack *)soap_push_block(soap, soap_blist_Track, sizeof(struct tt__RecordingJobStateTrack));
					if (a->Track == NULL)
						return NULL;
					soap_default_tt__RecordingJobStateTrack(soap, a->Track);
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingJobStateTrack(soap, "tt:Track", a->Track, "tt:RecordingJobStateTrack"))
				{	a->__sizeTrack++;
					a->Track = NULL;
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
		if (a->Track)
			soap_pop_block(soap, soap_blist_Track);
		if (a->__sizeTrack)
			a->Track = (struct tt__RecordingJobStateTrack *)soap_save_block(soap, soap_blist_Track, NULL, 1);
		else
		{	a->Track = NULL;
			if (soap_blist_Track)
				soap_end_block(soap, soap_blist_Track);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobStateTracks *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateTracks, 0, sizeof(struct tt__RecordingJobStateTracks), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobStateTracks(struct soap *soap, const struct tt__RecordingJobStateTracks *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateTracks);
	if (soap_out_tt__RecordingJobStateTracks(soap, tag?tag:"tt:RecordingJobStateTracks", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobStateTracks * SOAP_FMAC4 soap_get_tt__RecordingJobStateTracks(struct soap *soap, struct tt__RecordingJobStateTracks *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateTracks(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobStateInformationExtension(struct soap *soap, struct tt__RecordingJobStateInformationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobStateInformationExtension(struct soap *soap, const struct tt__RecordingJobStateInformationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateInformationExtension(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobStateInformationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateInformationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobStateInformationExtension * SOAP_FMAC4 soap_in_tt__RecordingJobStateInformationExtension(struct soap *soap, const char *tag, struct tt__RecordingJobStateInformationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobStateInformationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateInformationExtension, sizeof(struct tt__RecordingJobStateInformationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobStateInformationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobStateInformationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateInformationExtension, 0, sizeof(struct tt__RecordingJobStateInformationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobStateInformationExtension(struct soap *soap, const struct tt__RecordingJobStateInformationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateInformationExtension);
	if (soap_out_tt__RecordingJobStateInformationExtension(soap, tag?tag:"tt:RecordingJobStateInformationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobStateInformationExtension * SOAP_FMAC4 soap_get_tt__RecordingJobStateInformationExtension(struct soap *soap, struct tt__RecordingJobStateInformationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateInformationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobStateSource(struct soap *soap, struct tt__RecordingJobStateSource *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SourceToken = NULL;
	soap_default_tt__RecordingJobState(soap, &a->State);
	a->Tracks = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobStateSource(struct soap *soap, const struct tt__RecordingJobStateSource *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SourceReference(soap, &a->SourceToken);
	soap_serialize_tt__RecordingJobState(soap, &a->State);
	soap_serialize_PointerTott__RecordingJobStateTracks(soap, &a->Tracks);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateSource(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobStateSource *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateSource), type))
		return soap->error;
	if (a->SourceToken)
	{	if (soap_out_PointerTott__SourceReference(soap, "tt:SourceToken", -1, &a->SourceToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceToken"))
		return soap->error;
	if (a->State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->Tracks)
	{	if (soap_out_PointerTott__RecordingJobStateTracks(soap, "tt:Tracks", -1, &a->Tracks, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Tracks"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobStateSource * SOAP_FMAC4 soap_in_tt__RecordingJobStateSource(struct soap *soap, const char *tag, struct tt__RecordingJobStateSource *a, const char *type)
{
	size_t soap_flag_SourceToken = 1;
	size_t soap_flag_State = 1;
	size_t soap_flag_Tracks = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobStateSource *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateSource, sizeof(struct tt__RecordingJobStateSource), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobStateSource(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SourceToken && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceReference(soap, "tt:SourceToken", &a->SourceToken, "tt:SourceReference"))
				{	soap_flag_SourceToken--;
					continue;
				}
			if (soap_flag_State && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &a->State, "tt:RecordingJobState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap_flag_Tracks && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobStateTracks(soap, "tt:Tracks", &a->Tracks, "tt:RecordingJobStateTracks"))
				{	soap_flag_Tracks--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobStateSource *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateSource, 0, sizeof(struct tt__RecordingJobStateSource), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceToken > 0 || soap_flag_State > 0 || soap_flag_Tracks > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobStateSource(struct soap *soap, const struct tt__RecordingJobStateSource *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateSource);
	if (soap_out_tt__RecordingJobStateSource(soap, tag?tag:"tt:RecordingJobStateSource", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobStateSource * SOAP_FMAC4 soap_get_tt__RecordingJobStateSource(struct soap *soap, struct tt__RecordingJobStateSource *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateSource(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobStateInformation(struct soap *soap, struct tt__RecordingJobStateInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	soap_default_tt__RecordingJobState(soap, &a->State);
	a->__sizeSources = 0;
	a->Sources = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobStateInformation(struct soap *soap, const struct tt__RecordingJobStateInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_tt__RecordingJobState(soap, &a->State);
	if (a->Sources)
	{	int i;
		for (i = 0; i < a->__sizeSources; i++)
		{
			soap_embedded(soap, a->Sources + i, SOAP_TYPE_tt__RecordingJobStateSource);
			soap_serialize_tt__RecordingJobStateSource(soap, a->Sources + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobStateInformationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobStateInformation(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobStateInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobStateInformation), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->State)
	{	if (soap_out_tt__RecordingJobState(soap, "tt:State", -1, &a->State, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:State"))
		return soap->error;
	if (a->Sources)
	{	int i;
		for (i = 0; i < a->__sizeSources; i++)
			if (soap_out_tt__RecordingJobStateSource(soap, "tt:Sources", -1, a->Sources + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobStateInformationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobStateInformation * SOAP_FMAC4 soap_in_tt__RecordingJobStateInformation(struct soap *soap, const char *tag, struct tt__RecordingJobStateInformation *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_State = 1;
	struct soap_blist *soap_blist_Sources = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobStateInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobStateInformation, sizeof(struct tt__RecordingJobStateInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobStateInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_State && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobState(soap, "tt:State", &a->State, "tt:RecordingJobState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Sources", 1, NULL))
			{	if (a->Sources == NULL)
				{	if (soap_blist_Sources == NULL)
						soap_blist_Sources = soap_new_block(soap);
					a->Sources = (struct tt__RecordingJobStateSource *)soap_push_block(soap, soap_blist_Sources, sizeof(struct tt__RecordingJobStateSource));
					if (a->Sources == NULL)
						return NULL;
					soap_default_tt__RecordingJobStateSource(soap, a->Sources);
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingJobStateSource(soap, "tt:Sources", a->Sources, "tt:RecordingJobStateSource"))
				{	a->__sizeSources++;
					a->Sources = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobStateInformationExtension(soap, "tt:Extension", &a->Extension, "tt:RecordingJobStateInformationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Sources)
			soap_pop_block(soap, soap_blist_Sources);
		if (a->__sizeSources)
			a->Sources = (struct tt__RecordingJobStateSource *)soap_save_block(soap, soap_blist_Sources, NULL, 1);
		else
		{	a->Sources = NULL;
			if (soap_blist_Sources)
				soap_end_block(soap, soap_blist_Sources);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobStateInformation, 0, sizeof(struct tt__RecordingJobStateInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_State > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobStateInformation(struct soap *soap, const struct tt__RecordingJobStateInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobStateInformation);
	if (soap_out_tt__RecordingJobStateInformation(soap, tag?tag:"tt:RecordingJobStateInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobStateInformation * SOAP_FMAC4 soap_get_tt__RecordingJobStateInformation(struct soap *soap, struct tt__RecordingJobStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobSourceExtension(struct soap *soap, struct tt__RecordingJobSourceExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobSourceExtension(struct soap *soap, const struct tt__RecordingJobSourceExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobSourceExtension(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobSourceExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobSourceExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobSourceExtension * SOAP_FMAC4 soap_in_tt__RecordingJobSourceExtension(struct soap *soap, const char *tag, struct tt__RecordingJobSourceExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobSourceExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobSourceExtension, sizeof(struct tt__RecordingJobSourceExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobSourceExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobSourceExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobSourceExtension, 0, sizeof(struct tt__RecordingJobSourceExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobSourceExtension(struct soap *soap, const struct tt__RecordingJobSourceExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobSourceExtension);
	if (soap_out_tt__RecordingJobSourceExtension(soap, tag?tag:"tt:RecordingJobSourceExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobSourceExtension * SOAP_FMAC4 soap_get_tt__RecordingJobSourceExtension(struct soap *soap, struct tt__RecordingJobSourceExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobSourceExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobTrack(struct soap *soap, struct tt__RecordingJobTrack *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->SourceTag);
	soap_default_tt__TrackReference(soap, &a->Destination);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobTrack(struct soap *soap, const struct tt__RecordingJobTrack *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->SourceTag);
	soap_serialize_tt__TrackReference(soap, &a->Destination);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobTrack(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobTrack *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobTrack), type))
		return soap->error;
	if (a->SourceTag)
	{	if (soap_out_string(soap, "tt:SourceTag", -1, &a->SourceTag, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceTag"))
		return soap->error;
	if (a->Destination)
	{	if (soap_out_tt__TrackReference(soap, "tt:Destination", -1, &a->Destination, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Destination"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobTrack * SOAP_FMAC4 soap_in_tt__RecordingJobTrack(struct soap *soap, const char *tag, struct tt__RecordingJobTrack *a, const char *type)
{
	size_t soap_flag_SourceTag = 1;
	size_t soap_flag_Destination = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobTrack *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobTrack, sizeof(struct tt__RecordingJobTrack), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobTrack(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SourceTag && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:SourceTag", &a->SourceTag, "xsd:string"))
				{	soap_flag_SourceTag--;
					continue;
				}
			if (soap_flag_Destination && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:Destination", &a->Destination, "tt:TrackReference"))
				{	soap_flag_Destination--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobTrack *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobTrack, 0, sizeof(struct tt__RecordingJobTrack), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceTag > 0 || soap_flag_Destination > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobTrack(struct soap *soap, const struct tt__RecordingJobTrack *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobTrack);
	if (soap_out_tt__RecordingJobTrack(soap, tag?tag:"tt:RecordingJobTrack", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobTrack * SOAP_FMAC4 soap_get_tt__RecordingJobTrack(struct soap *soap, struct tt__RecordingJobTrack *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobTrack(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobConfigurationExtension(struct soap *soap, struct tt__RecordingJobConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobConfigurationExtension(struct soap *soap, const struct tt__RecordingJobConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobConfigurationExtension * SOAP_FMAC4 soap_in_tt__RecordingJobConfigurationExtension(struct soap *soap, const char *tag, struct tt__RecordingJobConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobConfigurationExtension, sizeof(struct tt__RecordingJobConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobConfigurationExtension, 0, sizeof(struct tt__RecordingJobConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobConfigurationExtension(struct soap *soap, const struct tt__RecordingJobConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobConfigurationExtension);
	if (soap_out_tt__RecordingJobConfigurationExtension(soap, tag?tag:"tt:RecordingJobConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobConfigurationExtension * SOAP_FMAC4 soap_get_tt__RecordingJobConfigurationExtension(struct soap *soap, struct tt__RecordingJobConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobSource(struct soap *soap, struct tt__RecordingJobSource *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SourceToken = NULL;
	a->AutoCreateReceiver = NULL;
	a->__sizeTracks = 0;
	a->Tracks = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobSource(struct soap *soap, const struct tt__RecordingJobSource *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__SourceReference(soap, &a->SourceToken);
	soap_serialize_PointerToxsd__boolean(soap, &a->AutoCreateReceiver);
	if (a->Tracks)
	{	int i;
		for (i = 0; i < a->__sizeTracks; i++)
		{
			soap_embedded(soap, a->Tracks + i, SOAP_TYPE_tt__RecordingJobTrack);
			soap_serialize_tt__RecordingJobTrack(soap, a->Tracks + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobSourceExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobSource(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobSource *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobSource), type))
		return soap->error;
	if (soap_out_PointerTott__SourceReference(soap, "tt:SourceToken", -1, &a->SourceToken, ""))
		return soap->error;
	if (soap_out_PointerToxsd__boolean(soap, "tt:AutoCreateReceiver", -1, &a->AutoCreateReceiver, ""))
		return soap->error;
	if (a->Tracks)
	{	int i;
		for (i = 0; i < a->__sizeTracks; i++)
			if (soap_out_tt__RecordingJobTrack(soap, "tt:Tracks", -1, a->Tracks + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobSourceExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobSource * SOAP_FMAC4 soap_in_tt__RecordingJobSource(struct soap *soap, const char *tag, struct tt__RecordingJobSource *a, const char *type)
{
	size_t soap_flag_SourceToken = 1;
	size_t soap_flag_AutoCreateReceiver = 1;
	struct soap_blist *soap_blist_Tracks = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobSource *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobSource, sizeof(struct tt__RecordingJobSource), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobSource(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SourceToken && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SourceReference(soap, "tt:SourceToken", &a->SourceToken, "tt:SourceReference"))
				{	soap_flag_SourceToken--;
					continue;
				}
			if (soap_flag_AutoCreateReceiver && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToxsd__boolean(soap, "tt:AutoCreateReceiver", &a->AutoCreateReceiver, "xsd:boolean"))
				{	soap_flag_AutoCreateReceiver--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Tracks", 1, NULL))
			{	if (a->Tracks == NULL)
				{	if (soap_blist_Tracks == NULL)
						soap_blist_Tracks = soap_new_block(soap);
					a->Tracks = (struct tt__RecordingJobTrack *)soap_push_block(soap, soap_blist_Tracks, sizeof(struct tt__RecordingJobTrack));
					if (a->Tracks == NULL)
						return NULL;
					soap_default_tt__RecordingJobTrack(soap, a->Tracks);
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingJobTrack(soap, "tt:Tracks", a->Tracks, "tt:RecordingJobTrack"))
				{	a->__sizeTracks++;
					a->Tracks = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobSourceExtension(soap, "tt:Extension", &a->Extension, "tt:RecordingJobSourceExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Tracks)
			soap_pop_block(soap, soap_blist_Tracks);
		if (a->__sizeTracks)
			a->Tracks = (struct tt__RecordingJobTrack *)soap_save_block(soap, soap_blist_Tracks, NULL, 1);
		else
		{	a->Tracks = NULL;
			if (soap_blist_Tracks)
				soap_end_block(soap, soap_blist_Tracks);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobSource *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobSource, 0, sizeof(struct tt__RecordingJobSource), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobSource(struct soap *soap, const struct tt__RecordingJobSource *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobSource);
	if (soap_out_tt__RecordingJobSource(soap, tag?tag:"tt:RecordingJobSource", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobSource * SOAP_FMAC4 soap_get_tt__RecordingJobSource(struct soap *soap, struct tt__RecordingJobSource *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobSource(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingJobConfiguration(struct soap *soap, struct tt__RecordingJobConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	soap_default_tt__RecordingJobMode(soap, &a->Mode);
	soap_default_int(soap, &a->Priority);
	a->__sizeSource = 0;
	a->Source = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingJobConfiguration(struct soap *soap, const struct tt__RecordingJobConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_tt__RecordingJobMode(soap, &a->Mode);
	soap_embedded(soap, &a->Priority, SOAP_TYPE_int);
	if (a->Source)
	{	int i;
		for (i = 0; i < a->__sizeSource; i++)
		{
			soap_embedded(soap, a->Source + i, SOAP_TYPE_tt__RecordingJobSource);
			soap_serialize_tt__RecordingJobSource(soap, a->Source + i);
		}
	}
	soap_serialize_PointerTott__RecordingJobConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingJobConfiguration(struct soap *soap, const char *tag, int id, const struct tt__RecordingJobConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingJobConfiguration), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->Mode)
	{	if (soap_out_tt__RecordingJobMode(soap, "tt:Mode", -1, &a->Mode, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Mode"))
		return soap->error;
	if (soap_out_int(soap, "tt:Priority", -1, &a->Priority, ""))
		return soap->error;
	if (a->Source)
	{	int i;
		for (i = 0; i < a->__sizeSource; i++)
			if (soap_out_tt__RecordingJobSource(soap, "tt:Source", -1, a->Source + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RecordingJobConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingJobConfiguration * SOAP_FMAC4 soap_in_tt__RecordingJobConfiguration(struct soap *soap, const char *tag, struct tt__RecordingJobConfiguration *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_Mode = 1;
	size_t soap_flag_Priority = 1;
	struct soap_blist *soap_blist_Source = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingJobConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingJobConfiguration, sizeof(struct tt__RecordingJobConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingJobConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_Mode && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingJobMode(soap, "tt:Mode", &a->Mode, "tt:RecordingJobMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_Priority && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Priority", &a->Priority, "xsd:int"))
				{	soap_flag_Priority--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Source", 1, NULL))
			{	if (a->Source == NULL)
				{	if (soap_blist_Source == NULL)
						soap_blist_Source = soap_new_block(soap);
					a->Source = (struct tt__RecordingJobSource *)soap_push_block(soap, soap_blist_Source, sizeof(struct tt__RecordingJobSource));
					if (a->Source == NULL)
						return NULL;
					soap_default_tt__RecordingJobSource(soap, a->Source);
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingJobSource(soap, "tt:Source", a->Source, "tt:RecordingJobSource"))
				{	a->__sizeSource++;
					a->Source = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingJobConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:RecordingJobConfigurationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Source)
			soap_pop_block(soap, soap_blist_Source);
		if (a->__sizeSource)
			a->Source = (struct tt__RecordingJobSource *)soap_save_block(soap, soap_blist_Source, NULL, 1);
		else
		{	a->Source = NULL;
			if (soap_blist_Source)
				soap_end_block(soap, soap_blist_Source);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingJobConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingJobConfiguration, 0, sizeof(struct tt__RecordingJobConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_Mode > 0 || soap_flag_Priority > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingJobConfiguration(struct soap *soap, const struct tt__RecordingJobConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingJobConfiguration);
	if (soap_out_tt__RecordingJobConfiguration(soap, tag?tag:"tt:RecordingJobConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingJobConfiguration * SOAP_FMAC4 soap_get_tt__RecordingJobConfiguration(struct soap *soap, struct tt__RecordingJobConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingJobConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__GetTracksResponseItem(struct soap *soap, struct tt__GetTracksResponseItem *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__TrackReference(soap, &a->TrackToken);
	a->Configuration = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__GetTracksResponseItem(struct soap *soap, const struct tt__GetTracksResponseItem *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__TrackReference(soap, &a->TrackToken);
	soap_serialize_PointerTott__TrackConfiguration(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetTracksResponseItem(struct soap *soap, const char *tag, int id, const struct tt__GetTracksResponseItem *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetTracksResponseItem), type))
		return soap->error;
	if (a->TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__TrackConfiguration(soap, "tt:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__GetTracksResponseItem * SOAP_FMAC4 soap_in_tt__GetTracksResponseItem(struct soap *soap, const char *tag, struct tt__GetTracksResponseItem *a, const char *type)
{
	size_t soap_flag_TrackToken = 1;
	size_t soap_flag_Configuration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__GetTracksResponseItem *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetTracksResponseItem, sizeof(struct tt__GetTracksResponseItem), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__GetTracksResponseItem(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TrackToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &a->TrackToken, "tt:TrackReference"))
				{	soap_flag_TrackToken--;
					continue;
				}
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackConfiguration(soap, "tt:Configuration", &a->Configuration, "tt:TrackConfiguration"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__GetTracksResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetTracksResponseItem, 0, sizeof(struct tt__GetTracksResponseItem), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackToken > 0 || soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__GetTracksResponseItem(struct soap *soap, const struct tt__GetTracksResponseItem *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__GetTracksResponseItem);
	if (soap_out_tt__GetTracksResponseItem(soap, tag?tag:"tt:GetTracksResponseItem", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__GetTracksResponseItem * SOAP_FMAC4 soap_get_tt__GetTracksResponseItem(struct soap *soap, struct tt__GetTracksResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetTracksResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__GetTracksResponseList(struct soap *soap, struct tt__GetTracksResponseList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeTrack = 0;
	a->Track = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__GetTracksResponseList(struct soap *soap, const struct tt__GetTracksResponseList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
		{
			soap_embedded(soap, a->Track + i, SOAP_TYPE_tt__GetTracksResponseItem);
			soap_serialize_tt__GetTracksResponseItem(soap, a->Track + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetTracksResponseList(struct soap *soap, const char *tag, int id, const struct tt__GetTracksResponseList *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetTracksResponseList), type))
		return soap->error;
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
			if (soap_out_tt__GetTracksResponseItem(soap, "tt:Track", -1, a->Track + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__GetTracksResponseList * SOAP_FMAC4 soap_in_tt__GetTracksResponseList(struct soap *soap, const char *tag, struct tt__GetTracksResponseList *a, const char *type)
{
	struct soap_blist *soap_blist_Track = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__GetTracksResponseList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetTracksResponseList, sizeof(struct tt__GetTracksResponseList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__GetTracksResponseList(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->Track == NULL)
				{	if (soap_blist_Track == NULL)
						soap_blist_Track = soap_new_block(soap);
					a->Track = (struct tt__GetTracksResponseItem *)soap_push_block(soap, soap_blist_Track, sizeof(struct tt__GetTracksResponseItem));
					if (a->Track == NULL)
						return NULL;
					soap_default_tt__GetTracksResponseItem(soap, a->Track);
				}
				soap_revert(soap);
				if (soap_in_tt__GetTracksResponseItem(soap, "tt:Track", a->Track, "tt:GetTracksResponseItem"))
				{	a->__sizeTrack++;
					a->Track = NULL;
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
		if (a->Track)
			soap_pop_block(soap, soap_blist_Track);
		if (a->__sizeTrack)
			a->Track = (struct tt__GetTracksResponseItem *)soap_save_block(soap, soap_blist_Track, NULL, 1);
		else
		{	a->Track = NULL;
			if (soap_blist_Track)
				soap_end_block(soap, soap_blist_Track);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__GetTracksResponseList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetTracksResponseList, 0, sizeof(struct tt__GetTracksResponseList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__GetTracksResponseList(struct soap *soap, const struct tt__GetTracksResponseList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__GetTracksResponseList);
	if (soap_out_tt__GetTracksResponseList(soap, tag?tag:"tt:GetTracksResponseList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__GetTracksResponseList * SOAP_FMAC4 soap_get_tt__GetTracksResponseList(struct soap *soap, struct tt__GetTracksResponseList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetTracksResponseList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__GetRecordingsResponseItem(struct soap *soap, struct tt__GetRecordingsResponseItem *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	a->Configuration = NULL;
	a->Tracks = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__GetRecordingsResponseItem(struct soap *soap, const struct tt__GetRecordingsResponseItem *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_PointerTott__RecordingConfiguration(soap, &a->Configuration);
	soap_serialize_PointerTott__GetTracksResponseList(soap, &a->Tracks);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__GetRecordingsResponseItem(struct soap *soap, const char *tag, int id, const struct tt__GetRecordingsResponseItem *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__GetRecordingsResponseItem), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__RecordingConfiguration(soap, "tt:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->Tracks)
	{	if (soap_out_PointerTott__GetTracksResponseList(soap, "tt:Tracks", -1, &a->Tracks, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Tracks"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__GetRecordingsResponseItem * SOAP_FMAC4 soap_in_tt__GetRecordingsResponseItem(struct soap *soap, const char *tag, struct tt__GetRecordingsResponseItem *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_Configuration = 1;
	size_t soap_flag_Tracks = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__GetRecordingsResponseItem *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__GetRecordingsResponseItem, sizeof(struct tt__GetRecordingsResponseItem), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__GetRecordingsResponseItem(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingConfiguration(soap, "tt:Configuration", &a->Configuration, "tt:RecordingConfiguration"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap_flag_Tracks && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__GetTracksResponseList(soap, "tt:Tracks", &a->Tracks, "tt:GetTracksResponseList"))
				{	soap_flag_Tracks--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__GetRecordingsResponseItem *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__GetRecordingsResponseItem, 0, sizeof(struct tt__GetRecordingsResponseItem), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_Configuration > 0 || soap_flag_Tracks > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__GetRecordingsResponseItem(struct soap *soap, const struct tt__GetRecordingsResponseItem *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__GetRecordingsResponseItem);
	if (soap_out_tt__GetRecordingsResponseItem(soap, tag?tag:"tt:GetRecordingsResponseItem", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__GetRecordingsResponseItem * SOAP_FMAC4 soap_get_tt__GetRecordingsResponseItem(struct soap *soap, struct tt__GetRecordingsResponseItem *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__GetRecordingsResponseItem(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TrackConfiguration(struct soap *soap, struct tt__TrackConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__TrackType(soap, &a->TrackType);
	soap_default_tt__Description(soap, &a->Description);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TrackConfiguration(struct soap *soap, const struct tt__TrackConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__Description(soap, &a->Description);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackConfiguration(struct soap *soap, const char *tag, int id, const struct tt__TrackConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackConfiguration), type))
		return soap->error;
	if (soap_out_tt__TrackType(soap, "tt:TrackType", -1, &a->TrackType, ""))
		return soap->error;
	if (a->Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TrackConfiguration * SOAP_FMAC4 soap_in_tt__TrackConfiguration(struct soap *soap, const char *tag, struct tt__TrackConfiguration *a, const char *type)
{
	size_t soap_flag_TrackType = 1;
	size_t soap_flag_Description = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TrackConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackConfiguration, sizeof(struct tt__TrackConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TrackConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TrackType && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TrackType(soap, "tt:TrackType", &a->TrackType, "tt:TrackType"))
				{	soap_flag_TrackType--;
					continue;
				}
			if (soap_flag_Description && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &a->Description, "tt:Description"))
				{	soap_flag_Description--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__TrackConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackConfiguration, 0, sizeof(struct tt__TrackConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackType > 0 || soap_flag_Description > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TrackConfiguration(struct soap *soap, const struct tt__TrackConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TrackConfiguration);
	if (soap_out_tt__TrackConfiguration(soap, tag?tag:"tt:TrackConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TrackConfiguration * SOAP_FMAC4 soap_get_tt__TrackConfiguration(struct soap *soap, struct tt__TrackConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingConfiguration(struct soap *soap, struct tt__RecordingConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Source = NULL;
	soap_default_tt__Description(soap, &a->Content);
	soap_default_xsd__duration(soap, &a->MaximumRetentionTime);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingConfiguration(struct soap *soap, const struct tt__RecordingConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__RecordingSourceInformation(soap, &a->Source);
	soap_serialize_tt__Description(soap, &a->Content);
	soap_embedded(soap, &a->MaximumRetentionTime, SOAP_TYPE_xsd__duration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingConfiguration(struct soap *soap, const char *tag, int id, const struct tt__RecordingConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingConfiguration), type))
		return soap->error;
	if (a->Source)
	{	if (soap_out_PointerTott__RecordingSourceInformation(soap, "tt:Source", -1, &a->Source, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Source"))
		return soap->error;
	if (a->Content)
	{	if (soap_out_tt__Description(soap, "tt:Content", -1, &a->Content, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Content"))
		return soap->error;
	if (soap_out_xsd__duration(soap, "tt:MaximumRetentionTime", -1, &a->MaximumRetentionTime, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingConfiguration * SOAP_FMAC4 soap_in_tt__RecordingConfiguration(struct soap *soap, const char *tag, struct tt__RecordingConfiguration *a, const char *type)
{
	size_t soap_flag_Source = 1;
	size_t soap_flag_Content = 1;
	size_t soap_flag_MaximumRetentionTime = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingConfiguration, sizeof(struct tt__RecordingConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Source && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingSourceInformation(soap, "tt:Source", &a->Source, "tt:RecordingSourceInformation"))
				{	soap_flag_Source--;
					continue;
				}
			if (soap_flag_Content && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Content", &a->Content, "tt:Description"))
				{	soap_flag_Content--;
					continue;
				}
			if (soap_flag_MaximumRetentionTime && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__duration(soap, "tt:MaximumRetentionTime", &a->MaximumRetentionTime, "xsd:duration"))
				{	soap_flag_MaximumRetentionTime--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingConfiguration, 0, sizeof(struct tt__RecordingConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Source > 0 || soap_flag_Content > 0 || soap_flag_MaximumRetentionTime > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingConfiguration(struct soap *soap, const struct tt__RecordingConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingConfiguration);
	if (soap_out_tt__RecordingConfiguration(soap, tag?tag:"tt:RecordingConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingConfiguration * SOAP_FMAC4 soap_get_tt__RecordingConfiguration(struct soap *soap, struct tt__RecordingConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TrackAttributesExtension(struct soap *soap, struct tt__TrackAttributesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TrackAttributesExtension(struct soap *soap, const struct tt__TrackAttributesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackAttributesExtension(struct soap *soap, const char *tag, int id, const struct tt__TrackAttributesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackAttributesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TrackAttributesExtension * SOAP_FMAC4 soap_in_tt__TrackAttributesExtension(struct soap *soap, const char *tag, struct tt__TrackAttributesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TrackAttributesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackAttributesExtension, sizeof(struct tt__TrackAttributesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TrackAttributesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__TrackAttributesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackAttributesExtension, 0, sizeof(struct tt__TrackAttributesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TrackAttributesExtension(struct soap *soap, const struct tt__TrackAttributesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TrackAttributesExtension);
	if (soap_out_tt__TrackAttributesExtension(soap, tag?tag:"tt:TrackAttributesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TrackAttributesExtension * SOAP_FMAC4 soap_get_tt__TrackAttributesExtension(struct soap *soap, struct tt__TrackAttributesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackAttributesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataAttributes(struct soap *soap, struct tt__MetadataAttributes *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__boolean(soap, &a->CanContainPTZ);
	soap_default_xsd__boolean(soap, &a->CanContainAnalytics);
	soap_default_xsd__boolean(soap, &a->CanContainNotifications);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataAttributes(struct soap *soap, const struct tt__MetadataAttributes *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->CanContainPTZ, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->CanContainAnalytics, SOAP_TYPE_xsd__boolean);
	soap_embedded(soap, &a->CanContainNotifications, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataAttributes(struct soap *soap, const char *tag, int id, const struct tt__MetadataAttributes *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataAttributes), type))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:CanContainPTZ", -1, &a->CanContainPTZ, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:CanContainAnalytics", -1, &a->CanContainAnalytics, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:CanContainNotifications", -1, &a->CanContainNotifications, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataAttributes * SOAP_FMAC4 soap_in_tt__MetadataAttributes(struct soap *soap, const char *tag, struct tt__MetadataAttributes *a, const char *type)
{
	size_t soap_flag_CanContainPTZ = 1;
	size_t soap_flag_CanContainAnalytics = 1;
	size_t soap_flag_CanContainNotifications = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataAttributes *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataAttributes, sizeof(struct tt__MetadataAttributes), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataAttributes(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_CanContainPTZ && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:CanContainPTZ", &a->CanContainPTZ, "xsd:boolean"))
				{	soap_flag_CanContainPTZ--;
					continue;
				}
			if (soap_flag_CanContainAnalytics && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:CanContainAnalytics", &a->CanContainAnalytics, "xsd:boolean"))
				{	soap_flag_CanContainAnalytics--;
					continue;
				}
			if (soap_flag_CanContainNotifications && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:CanContainNotifications", &a->CanContainNotifications, "xsd:boolean"))
				{	soap_flag_CanContainNotifications--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataAttributes, 0, sizeof(struct tt__MetadataAttributes), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_CanContainPTZ > 0 || soap_flag_CanContainAnalytics > 0 || soap_flag_CanContainNotifications > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataAttributes(struct soap *soap, const struct tt__MetadataAttributes *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataAttributes);
	if (soap_out_tt__MetadataAttributes(soap, tag?tag:"tt:MetadataAttributes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataAttributes * SOAP_FMAC4 soap_get_tt__MetadataAttributes(struct soap *soap, struct tt__MetadataAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AudioAttributes(struct soap *soap, struct tt__AudioAttributes *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Bitrate = NULL;
	soap_default_tt__AudioEncoding(soap, &a->Encoding);
	soap_default_int(soap, &a->Samplerate);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AudioAttributes(struct soap *soap, const struct tt__AudioAttributes *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &a->Bitrate);
	soap_embedded(soap, &a->Samplerate, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AudioAttributes(struct soap *soap, const char *tag, int id, const struct tt__AudioAttributes *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AudioAttributes), type))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
		return soap->error;
	if (soap_out_tt__AudioEncoding(soap, "tt:Encoding", -1, &a->Encoding, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Samplerate", -1, &a->Samplerate, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AudioAttributes * SOAP_FMAC4 soap_in_tt__AudioAttributes(struct soap *soap, const char *tag, struct tt__AudioAttributes *a, const char *type)
{
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_Encoding = 1;
	size_t soap_flag_Samplerate = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AudioAttributes *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AudioAttributes, sizeof(struct tt__AudioAttributes), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AudioAttributes(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:Bitrate", &a->Bitrate, "xsd:int"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_Encoding && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__AudioEncoding(soap, "tt:Encoding", &a->Encoding, "tt:AudioEncoding"))
				{	soap_flag_Encoding--;
					continue;
				}
			if (soap_flag_Samplerate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Samplerate", &a->Samplerate, "xsd:int"))
				{	soap_flag_Samplerate--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AudioAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AudioAttributes, 0, sizeof(struct tt__AudioAttributes), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Encoding > 0 || soap_flag_Samplerate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AudioAttributes(struct soap *soap, const struct tt__AudioAttributes *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AudioAttributes);
	if (soap_out_tt__AudioAttributes(soap, tag?tag:"tt:AudioAttributes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AudioAttributes * SOAP_FMAC4 soap_get_tt__AudioAttributes(struct soap *soap, struct tt__AudioAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AudioAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoAttributes(struct soap *soap, struct tt__VideoAttributes *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Bitrate = NULL;
	soap_default_int(soap, &a->Width);
	soap_default_int(soap, &a->Height);
	soap_default_tt__VideoEncoding(soap, &a->Encoding);
	soap_default_float(soap, &a->Framerate);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoAttributes(struct soap *soap, const struct tt__VideoAttributes *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerToint(soap, &a->Bitrate);
	soap_embedded(soap, &a->Width, SOAP_TYPE_int);
	soap_embedded(soap, &a->Height, SOAP_TYPE_int);
	soap_embedded(soap, &a->Framerate, SOAP_TYPE_float);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAttributes(struct soap *soap, const char *tag, int id, const struct tt__VideoAttributes *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAttributes), type))
		return soap->error;
	if (soap_out_PointerToint(soap, "tt:Bitrate", -1, &a->Bitrate, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Width", -1, &a->Width, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:Height", -1, &a->Height, ""))
		return soap->error;
	if (soap_out_tt__VideoEncoding(soap, "tt:Encoding", -1, &a->Encoding, ""))
		return soap->error;
	if (soap_out_float(soap, "tt:Framerate", -1, &a->Framerate, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoAttributes * SOAP_FMAC4 soap_in_tt__VideoAttributes(struct soap *soap, const char *tag, struct tt__VideoAttributes *a, const char *type)
{
	size_t soap_flag_Bitrate = 1;
	size_t soap_flag_Width = 1;
	size_t soap_flag_Height = 1;
	size_t soap_flag_Encoding = 1;
	size_t soap_flag_Framerate = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoAttributes *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAttributes, sizeof(struct tt__VideoAttributes), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoAttributes(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Bitrate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerToint(soap, "tt:Bitrate", &a->Bitrate, "xsd:int"))
				{	soap_flag_Bitrate--;
					continue;
				}
			if (soap_flag_Width && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Width", &a->Width, "xsd:int"))
				{	soap_flag_Width--;
					continue;
				}
			if (soap_flag_Height && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:Height", &a->Height, "xsd:int"))
				{	soap_flag_Height--;
					continue;
				}
			if (soap_flag_Encoding && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__VideoEncoding(soap, "tt:Encoding", &a->Encoding, "tt:VideoEncoding"))
				{	soap_flag_Encoding--;
					continue;
				}
			if (soap_flag_Framerate && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_float(soap, "tt:Framerate", &a->Framerate, "xsd:float"))
				{	soap_flag_Framerate--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__VideoAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAttributes, 0, sizeof(struct tt__VideoAttributes), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Width > 0 || soap_flag_Height > 0 || soap_flag_Encoding > 0 || soap_flag_Framerate > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoAttributes(struct soap *soap, const struct tt__VideoAttributes *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoAttributes);
	if (soap_out_tt__VideoAttributes(soap, tag?tag:"tt:VideoAttributes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoAttributes * SOAP_FMAC4 soap_get_tt__VideoAttributes(struct soap *soap, struct tt__VideoAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TrackAttributes(struct soap *soap, struct tt__TrackAttributes *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->TrackInformation = NULL;
	a->VideoAttributes = NULL;
	a->AudioAttributes = NULL;
	a->MetadataAttributes = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TrackAttributes(struct soap *soap, const struct tt__TrackAttributes *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__TrackInformation(soap, &a->TrackInformation);
	soap_serialize_PointerTott__VideoAttributes(soap, &a->VideoAttributes);
	soap_serialize_PointerTott__AudioAttributes(soap, &a->AudioAttributes);
	soap_serialize_PointerTott__MetadataAttributes(soap, &a->MetadataAttributes);
	soap_serialize_PointerTott__TrackAttributesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackAttributes(struct soap *soap, const char *tag, int id, const struct tt__TrackAttributes *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackAttributes), type))
		return soap->error;
	if (a->TrackInformation)
	{	if (soap_out_PointerTott__TrackInformation(soap, "tt:TrackInformation", -1, &a->TrackInformation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackInformation"))
		return soap->error;
	if (soap_out_PointerTott__VideoAttributes(soap, "tt:VideoAttributes", -1, &a->VideoAttributes, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioAttributes(soap, "tt:AudioAttributes", -1, &a->AudioAttributes, ""))
		return soap->error;
	if (soap_out_PointerTott__MetadataAttributes(soap, "tt:MetadataAttributes", -1, &a->MetadataAttributes, ""))
		return soap->error;
	if (soap_out_PointerTott__TrackAttributesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TrackAttributes * SOAP_FMAC4 soap_in_tt__TrackAttributes(struct soap *soap, const char *tag, struct tt__TrackAttributes *a, const char *type)
{
	size_t soap_flag_TrackInformation = 1;
	size_t soap_flag_VideoAttributes = 1;
	size_t soap_flag_AudioAttributes = 1;
	size_t soap_flag_MetadataAttributes = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TrackAttributes *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackAttributes, sizeof(struct tt__TrackAttributes), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TrackAttributes(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TrackInformation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackInformation(soap, "tt:TrackInformation", &a->TrackInformation, "tt:TrackInformation"))
				{	soap_flag_TrackInformation--;
					continue;
				}
			if (soap_flag_VideoAttributes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoAttributes(soap, "tt:VideoAttributes", &a->VideoAttributes, "tt:VideoAttributes"))
				{	soap_flag_VideoAttributes--;
					continue;
				}
			if (soap_flag_AudioAttributes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioAttributes(soap, "tt:AudioAttributes", &a->AudioAttributes, "tt:AudioAttributes"))
				{	soap_flag_AudioAttributes--;
					continue;
				}
			if (soap_flag_MetadataAttributes && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MetadataAttributes(soap, "tt:MetadataAttributes", &a->MetadataAttributes, "tt:MetadataAttributes"))
				{	soap_flag_MetadataAttributes--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__TrackAttributesExtension(soap, "tt:Extension", &a->Extension, "tt:TrackAttributesExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__TrackAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackAttributes, 0, sizeof(struct tt__TrackAttributes), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackInformation > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TrackAttributes(struct soap *soap, const struct tt__TrackAttributes *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TrackAttributes);
	if (soap_out_tt__TrackAttributes(soap, tag?tag:"tt:TrackAttributes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TrackAttributes * SOAP_FMAC4 soap_get_tt__TrackAttributes(struct soap *soap, struct tt__TrackAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaAttributes(struct soap *soap, struct tt__MediaAttributes *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	a->__sizeTrackAttributes = 0;
	a->TrackAttributes = NULL;
	soap_default_time(soap, &a->From);
	soap_default_time(soap, &a->Until);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaAttributes(struct soap *soap, const struct tt__MediaAttributes *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	if (a->TrackAttributes)
	{	int i;
		for (i = 0; i < a->__sizeTrackAttributes; i++)
		{
			soap_embedded(soap, a->TrackAttributes + i, SOAP_TYPE_tt__TrackAttributes);
			soap_serialize_tt__TrackAttributes(soap, a->TrackAttributes + i);
		}
	}
	soap_embedded(soap, &a->From, SOAP_TYPE_time);
	soap_embedded(soap, &a->Until, SOAP_TYPE_time);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaAttributes(struct soap *soap, const char *tag, int id, const struct tt__MediaAttributes *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaAttributes), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->TrackAttributes)
	{	int i;
		for (i = 0; i < a->__sizeTrackAttributes; i++)
			if (soap_out_tt__TrackAttributes(soap, "tt:TrackAttributes", -1, a->TrackAttributes + i, ""))
				return soap->error;
	}
	if (soap_out_time(soap, "tt:From", -1, &a->From, ""))
		return soap->error;
	if (soap_out_time(soap, "tt:Until", -1, &a->Until, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaAttributes * SOAP_FMAC4 soap_in_tt__MediaAttributes(struct soap *soap, const char *tag, struct tt__MediaAttributes *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	struct soap_blist *soap_blist_TrackAttributes = NULL;
	size_t soap_flag_From = 1;
	size_t soap_flag_Until = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MediaAttributes *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaAttributes, sizeof(struct tt__MediaAttributes), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MediaAttributes(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:TrackAttributes", 1, NULL))
			{	if (a->TrackAttributes == NULL)
				{	if (soap_blist_TrackAttributes == NULL)
						soap_blist_TrackAttributes = soap_new_block(soap);
					a->TrackAttributes = (struct tt__TrackAttributes *)soap_push_block(soap, soap_blist_TrackAttributes, sizeof(struct tt__TrackAttributes));
					if (a->TrackAttributes == NULL)
						return NULL;
					soap_default_tt__TrackAttributes(soap, a->TrackAttributes);
				}
				soap_revert(soap);
				if (soap_in_tt__TrackAttributes(soap, "tt:TrackAttributes", a->TrackAttributes, "tt:TrackAttributes"))
				{	a->__sizeTrackAttributes++;
					a->TrackAttributes = NULL;
					continue;
				}
			}
			if (soap_flag_From && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:From", &a->From, "xsd:dateTime"))
				{	soap_flag_From--;
					continue;
				}
			if (soap_flag_Until && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Until", &a->Until, "xsd:dateTime"))
				{	soap_flag_Until--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->TrackAttributes)
			soap_pop_block(soap, soap_blist_TrackAttributes);
		if (a->__sizeTrackAttributes)
			a->TrackAttributes = (struct tt__TrackAttributes *)soap_save_block(soap, soap_blist_TrackAttributes, NULL, 1);
		else
		{	a->TrackAttributes = NULL;
			if (soap_blist_TrackAttributes)
				soap_end_block(soap, soap_blist_TrackAttributes);
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MediaAttributes *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaAttributes, 0, sizeof(struct tt__MediaAttributes), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_From > 0 || soap_flag_Until > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaAttributes(struct soap *soap, const struct tt__MediaAttributes *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaAttributes);
	if (soap_out_tt__MediaAttributes(soap, tag?tag:"tt:MediaAttributes", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaAttributes * SOAP_FMAC4 soap_get_tt__MediaAttributes(struct soap *soap, struct tt__MediaAttributes *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MediaAttributes(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__TrackInformation(struct soap *soap, struct tt__TrackInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__TrackReference(soap, &a->TrackToken);
	soap_default_tt__TrackType(soap, &a->TrackType);
	soap_default_tt__Description(soap, &a->Description);
	soap_default_time(soap, &a->DataFrom);
	soap_default_time(soap, &a->DataTo);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__TrackInformation(struct soap *soap, const struct tt__TrackInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__TrackReference(soap, &a->TrackToken);
	soap_serialize_tt__Description(soap, &a->Description);
	soap_embedded(soap, &a->DataFrom, SOAP_TYPE_time);
	soap_embedded(soap, &a->DataTo, SOAP_TYPE_time);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__TrackInformation(struct soap *soap, const char *tag, int id, const struct tt__TrackInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__TrackInformation), type))
		return soap->error;
	if (a->TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_tt__TrackType(soap, "tt:TrackType", -1, &a->TrackType, ""))
		return soap->error;
	if (a->Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (soap_out_time(soap, "tt:DataFrom", -1, &a->DataFrom, ""))
		return soap->error;
	if (soap_out_time(soap, "tt:DataTo", -1, &a->DataTo, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__TrackInformation * SOAP_FMAC4 soap_in_tt__TrackInformation(struct soap *soap, const char *tag, struct tt__TrackInformation *a, const char *type)
{
	size_t soap_flag_TrackToken = 1;
	size_t soap_flag_TrackType = 1;
	size_t soap_flag_Description = 1;
	size_t soap_flag_DataFrom = 1;
	size_t soap_flag_DataTo = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__TrackInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__TrackInformation, sizeof(struct tt__TrackInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__TrackInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_TrackToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &a->TrackToken, "tt:TrackReference"))
				{	soap_flag_TrackToken--;
					continue;
				}
			if (soap_flag_TrackType && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__TrackType(soap, "tt:TrackType", &a->TrackType, "tt:TrackType"))
				{	soap_flag_TrackType--;
					continue;
				}
			if (soap_flag_Description && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &a->Description, "tt:Description"))
				{	soap_flag_Description--;
					continue;
				}
			if (soap_flag_DataFrom && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataFrom", &a->DataFrom, "xsd:dateTime"))
				{	soap_flag_DataFrom--;
					continue;
				}
			if (soap_flag_DataTo && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataTo", &a->DataTo, "xsd:dateTime"))
				{	soap_flag_DataTo--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__TrackInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__TrackInformation, 0, sizeof(struct tt__TrackInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TrackToken > 0 || soap_flag_TrackType > 0 || soap_flag_Description > 0 || soap_flag_DataFrom > 0 || soap_flag_DataTo > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__TrackInformation(struct soap *soap, const struct tt__TrackInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__TrackInformation);
	if (soap_out_tt__TrackInformation(soap, tag?tag:"tt:TrackInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__TrackInformation * SOAP_FMAC4 soap_get_tt__TrackInformation(struct soap *soap, struct tt__TrackInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__TrackInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingSourceInformation(struct soap *soap, struct tt__RecordingSourceInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__anyURI(soap, &a->SourceId);
	soap_default_tt__Name(soap, &a->Name);
	soap_default_tt__Description(soap, &a->Location);
	soap_default_tt__Description(soap, &a->Description);
	soap_default_xsd__anyURI(soap, &a->Address);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingSourceInformation(struct soap *soap, const struct tt__RecordingSourceInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->SourceId);
	soap_serialize_tt__Name(soap, &a->Name);
	soap_serialize_tt__Description(soap, &a->Location);
	soap_serialize_tt__Description(soap, &a->Description);
	soap_serialize_xsd__anyURI(soap, &a->Address);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingSourceInformation(struct soap *soap, const char *tag, int id, const struct tt__RecordingSourceInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingSourceInformation), type))
		return soap->error;
	if (a->SourceId)
	{	if (soap_out_xsd__anyURI(soap, "tt:SourceId", -1, &a->SourceId, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:SourceId"))
		return soap->error;
	if (a->Name)
	{	if (soap_out_tt__Name(soap, "tt:Name", -1, &a->Name, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Name"))
		return soap->error;
	if (a->Location)
	{	if (soap_out_tt__Description(soap, "tt:Location", -1, &a->Location, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Location"))
		return soap->error;
	if (a->Description)
	{	if (soap_out_tt__Description(soap, "tt:Description", -1, &a->Description, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Description"))
		return soap->error;
	if (a->Address)
	{	if (soap_out_xsd__anyURI(soap, "tt:Address", -1, &a->Address, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Address"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingSourceInformation * SOAP_FMAC4 soap_in_tt__RecordingSourceInformation(struct soap *soap, const char *tag, struct tt__RecordingSourceInformation *a, const char *type)
{
	size_t soap_flag_SourceId = 1;
	size_t soap_flag_Name = 1;
	size_t soap_flag_Location = 1;
	size_t soap_flag_Description = 1;
	size_t soap_flag_Address = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingSourceInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingSourceInformation, sizeof(struct tt__RecordingSourceInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingSourceInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SourceId && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:SourceId", &a->SourceId, "xsd:anyURI"))
				{	soap_flag_SourceId--;
					continue;
				}
			if (soap_flag_Name && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Name(soap, "tt:Name", &a->Name, "tt:Name"))
				{	soap_flag_Name--;
					continue;
				}
			if (soap_flag_Location && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Location", &a->Location, "tt:Description"))
				{	soap_flag_Location--;
					continue;
				}
			if (soap_flag_Description && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Description", &a->Description, "tt:Description"))
				{	soap_flag_Description--;
					continue;
				}
			if (soap_flag_Address && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:Address", &a->Address, "xsd:anyURI"))
				{	soap_flag_Address--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingSourceInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingSourceInformation, 0, sizeof(struct tt__RecordingSourceInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SourceId > 0 || soap_flag_Name > 0 || soap_flag_Location > 0 || soap_flag_Description > 0 || soap_flag_Address > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingSourceInformation(struct soap *soap, const struct tt__RecordingSourceInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingSourceInformation);
	if (soap_out_tt__RecordingSourceInformation(soap, tag?tag:"tt:RecordingSourceInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingSourceInformation * SOAP_FMAC4 soap_get_tt__RecordingSourceInformation(struct soap *soap, struct tt__RecordingSourceInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingSourceInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindMetadataResult(struct soap *soap, struct tt__FindMetadataResult *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	soap_default_tt__TrackReference(soap, &a->TrackToken);
	soap_default_time(soap, &a->Time);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindMetadataResult(struct soap *soap, const struct tt__FindMetadataResult *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_tt__TrackReference(soap, &a->TrackToken);
	soap_embedded(soap, &a->Time, SOAP_TYPE_time);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindMetadataResult(struct soap *soap, const char *tag, int id, const struct tt__FindMetadataResult *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindMetadataResult), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &a->Time, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindMetadataResult * SOAP_FMAC4 soap_in_tt__FindMetadataResult(struct soap *soap, const char *tag, struct tt__FindMetadataResult *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_TrackToken = 1;
	size_t soap_flag_Time = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindMetadataResult *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindMetadataResult, sizeof(struct tt__FindMetadataResult), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindMetadataResult(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_TrackToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &a->TrackToken, "tt:TrackReference"))
				{	soap_flag_TrackToken--;
					continue;
				}
			if (soap_flag_Time && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &a->Time, "xsd:dateTime"))
				{	soap_flag_Time--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindMetadataResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindMetadataResult, 0, sizeof(struct tt__FindMetadataResult), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_TrackToken > 0 || soap_flag_Time > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindMetadataResult(struct soap *soap, const struct tt__FindMetadataResult *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindMetadataResult);
	if (soap_out_tt__FindMetadataResult(soap, tag?tag:"tt:FindMetadataResult", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindMetadataResult * SOAP_FMAC4 soap_get_tt__FindMetadataResult(struct soap *soap, struct tt__FindMetadataResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindMetadataResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindMetadataResultList(struct soap *soap, struct tt__FindMetadataResultList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SearchState(soap, &a->SearchState);
	a->__sizeResult = 0;
	a->Result = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindMetadataResultList(struct soap *soap, const struct tt__FindMetadataResultList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
		{
			soap_embedded(soap, a->Result + i, SOAP_TYPE_tt__FindMetadataResult);
			soap_serialize_tt__FindMetadataResult(soap, a->Result + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindMetadataResultList(struct soap *soap, const char *tag, int id, const struct tt__FindMetadataResultList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindMetadataResultList), type))
		return soap->error;
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &a->SearchState, ""))
		return soap->error;
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
			if (soap_out_tt__FindMetadataResult(soap, "tt:Result", -1, a->Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindMetadataResultList * SOAP_FMAC4 soap_in_tt__FindMetadataResultList(struct soap *soap, const char *tag, struct tt__FindMetadataResultList *a, const char *type)
{
	size_t soap_flag_SearchState = 1;
	struct soap_blist *soap_blist_Result = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindMetadataResultList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindMetadataResultList, sizeof(struct tt__FindMetadataResultList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindMetadataResultList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SearchState && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &a->SearchState, "tt:SearchState"))
				{	soap_flag_SearchState--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->Result == NULL)
				{	if (soap_blist_Result == NULL)
						soap_blist_Result = soap_new_block(soap);
					a->Result = (struct tt__FindMetadataResult *)soap_push_block(soap, soap_blist_Result, sizeof(struct tt__FindMetadataResult));
					if (a->Result == NULL)
						return NULL;
					soap_default_tt__FindMetadataResult(soap, a->Result);
				}
				soap_revert(soap);
				if (soap_in_tt__FindMetadataResult(soap, "tt:Result", a->Result, "tt:FindMetadataResult"))
				{	a->__sizeResult++;
					a->Result = NULL;
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
		if (a->Result)
			soap_pop_block(soap, soap_blist_Result);
		if (a->__sizeResult)
			a->Result = (struct tt__FindMetadataResult *)soap_save_block(soap, soap_blist_Result, NULL, 1);
		else
		{	a->Result = NULL;
			if (soap_blist_Result)
				soap_end_block(soap, soap_blist_Result);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindMetadataResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindMetadataResultList, 0, sizeof(struct tt__FindMetadataResultList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindMetadataResultList(struct soap *soap, const struct tt__FindMetadataResultList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindMetadataResultList);
	if (soap_out_tt__FindMetadataResultList(soap, tag?tag:"tt:FindMetadataResultList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindMetadataResultList * SOAP_FMAC4 soap_get_tt__FindMetadataResultList(struct soap *soap, struct tt__FindMetadataResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindMetadataResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindPTZPositionResult(struct soap *soap, struct tt__FindPTZPositionResult *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	soap_default_tt__TrackReference(soap, &a->TrackToken);
	soap_default_time(soap, &a->Time);
	a->Position = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindPTZPositionResult(struct soap *soap, const struct tt__FindPTZPositionResult *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_tt__TrackReference(soap, &a->TrackToken);
	soap_embedded(soap, &a->Time, SOAP_TYPE_time);
	soap_serialize_PointerTott__PTZVector(soap, &a->Position);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindPTZPositionResult(struct soap *soap, const char *tag, int id, const struct tt__FindPTZPositionResult *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindPTZPositionResult), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &a->Time, ""))
		return soap->error;
	if (a->Position)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:Position", -1, &a->Position, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Position"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindPTZPositionResult * SOAP_FMAC4 soap_in_tt__FindPTZPositionResult(struct soap *soap, const char *tag, struct tt__FindPTZPositionResult *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_TrackToken = 1;
	size_t soap_flag_Time = 1;
	size_t soap_flag_Position = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindPTZPositionResult *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindPTZPositionResult, sizeof(struct tt__FindPTZPositionResult), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindPTZPositionResult(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_TrackToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &a->TrackToken, "tt:TrackReference"))
				{	soap_flag_TrackToken--;
					continue;
				}
			if (soap_flag_Time && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &a->Time, "xsd:dateTime"))
				{	soap_flag_Time--;
					continue;
				}
			if (soap_flag_Position && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:Position", &a->Position, "tt:PTZVector"))
				{	soap_flag_Position--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindPTZPositionResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindPTZPositionResult, 0, sizeof(struct tt__FindPTZPositionResult), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_TrackToken > 0 || soap_flag_Time > 0 || soap_flag_Position > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindPTZPositionResult(struct soap *soap, const struct tt__FindPTZPositionResult *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindPTZPositionResult);
	if (soap_out_tt__FindPTZPositionResult(soap, tag?tag:"tt:FindPTZPositionResult", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindPTZPositionResult * SOAP_FMAC4 soap_get_tt__FindPTZPositionResult(struct soap *soap, struct tt__FindPTZPositionResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindPTZPositionResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindPTZPositionResultList(struct soap *soap, struct tt__FindPTZPositionResultList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SearchState(soap, &a->SearchState);
	a->__sizeResult = 0;
	a->Result = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindPTZPositionResultList(struct soap *soap, const struct tt__FindPTZPositionResultList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
		{
			soap_embedded(soap, a->Result + i, SOAP_TYPE_tt__FindPTZPositionResult);
			soap_serialize_tt__FindPTZPositionResult(soap, a->Result + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindPTZPositionResultList(struct soap *soap, const char *tag, int id, const struct tt__FindPTZPositionResultList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindPTZPositionResultList), type))
		return soap->error;
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &a->SearchState, ""))
		return soap->error;
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
			if (soap_out_tt__FindPTZPositionResult(soap, "tt:Result", -1, a->Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindPTZPositionResultList * SOAP_FMAC4 soap_in_tt__FindPTZPositionResultList(struct soap *soap, const char *tag, struct tt__FindPTZPositionResultList *a, const char *type)
{
	size_t soap_flag_SearchState = 1;
	struct soap_blist *soap_blist_Result = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindPTZPositionResultList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindPTZPositionResultList, sizeof(struct tt__FindPTZPositionResultList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindPTZPositionResultList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SearchState && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &a->SearchState, "tt:SearchState"))
				{	soap_flag_SearchState--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->Result == NULL)
				{	if (soap_blist_Result == NULL)
						soap_blist_Result = soap_new_block(soap);
					a->Result = (struct tt__FindPTZPositionResult *)soap_push_block(soap, soap_blist_Result, sizeof(struct tt__FindPTZPositionResult));
					if (a->Result == NULL)
						return NULL;
					soap_default_tt__FindPTZPositionResult(soap, a->Result);
				}
				soap_revert(soap);
				if (soap_in_tt__FindPTZPositionResult(soap, "tt:Result", a->Result, "tt:FindPTZPositionResult"))
				{	a->__sizeResult++;
					a->Result = NULL;
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
		if (a->Result)
			soap_pop_block(soap, soap_blist_Result);
		if (a->__sizeResult)
			a->Result = (struct tt__FindPTZPositionResult *)soap_save_block(soap, soap_blist_Result, NULL, 1);
		else
		{	a->Result = NULL;
			if (soap_blist_Result)
				soap_end_block(soap, soap_blist_Result);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindPTZPositionResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindPTZPositionResultList, 0, sizeof(struct tt__FindPTZPositionResultList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindPTZPositionResultList(struct soap *soap, const struct tt__FindPTZPositionResultList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindPTZPositionResultList);
	if (soap_out_tt__FindPTZPositionResultList(soap, tag?tag:"tt:FindPTZPositionResultList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindPTZPositionResultList * SOAP_FMAC4 soap_get_tt__FindPTZPositionResultList(struct soap *soap, struct tt__FindPTZPositionResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindPTZPositionResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindEventResult(struct soap *soap, struct tt__FindEventResult *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	soap_default_tt__TrackReference(soap, &a->TrackToken);
	soap_default_time(soap, &a->Time);
	a->Event = NULL;
	soap_default_xsd__boolean(soap, &a->StartStateEvent);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindEventResult(struct soap *soap, const struct tt__FindEventResult *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_tt__TrackReference(soap, &a->TrackToken);
	soap_embedded(soap, &a->Time, SOAP_TYPE_time);
	soap_serialize_PointerTowsnt__NotificationMessageHolderType(soap, &a->Event);
	soap_embedded(soap, &a->StartStateEvent, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindEventResult(struct soap *soap, const char *tag, int id, const struct tt__FindEventResult *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindEventResult), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->TrackToken)
	{	if (soap_out_tt__TrackReference(soap, "tt:TrackToken", -1, &a->TrackToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:TrackToken"))
		return soap->error;
	if (soap_out_time(soap, "tt:Time", -1, &a->Time, ""))
		return soap->error;
	if (a->Event)
	{	if (soap_out_PointerTowsnt__NotificationMessageHolderType(soap, "tt:Event", -1, &a->Event, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Event"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:StartStateEvent", -1, &a->StartStateEvent, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindEventResult * SOAP_FMAC4 soap_in_tt__FindEventResult(struct soap *soap, const char *tag, struct tt__FindEventResult *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_TrackToken = 1;
	size_t soap_flag_Time = 1;
	size_t soap_flag_Event = 1;
	size_t soap_flag_StartStateEvent = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindEventResult *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindEventResult, sizeof(struct tt__FindEventResult), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindEventResult(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_TrackToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__TrackReference(soap, "tt:TrackToken", &a->TrackToken, "tt:TrackReference"))
				{	soap_flag_TrackToken--;
					continue;
				}
			if (soap_flag_Time && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:Time", &a->Time, "xsd:dateTime"))
				{	soap_flag_Time--;
					continue;
				}
			if (soap_flag_Event && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__NotificationMessageHolderType(soap, "tt:Event", &a->Event, "wsnt:NotificationMessageHolderType"))
				{	soap_flag_Event--;
					continue;
				}
			if (soap_flag_StartStateEvent && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:StartStateEvent", &a->StartStateEvent, "xsd:boolean"))
				{	soap_flag_StartStateEvent--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindEventResult *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindEventResult, 0, sizeof(struct tt__FindEventResult), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_TrackToken > 0 || soap_flag_Time > 0 || soap_flag_Event > 0 || soap_flag_StartStateEvent > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindEventResult(struct soap *soap, const struct tt__FindEventResult *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindEventResult);
	if (soap_out_tt__FindEventResult(soap, tag?tag:"tt:FindEventResult", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindEventResult * SOAP_FMAC4 soap_get_tt__FindEventResult(struct soap *soap, struct tt__FindEventResult *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindEventResult(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindEventResultList(struct soap *soap, struct tt__FindEventResultList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SearchState(soap, &a->SearchState);
	a->__sizeResult = 0;
	a->Result = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindEventResultList(struct soap *soap, const struct tt__FindEventResultList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
		{
			soap_embedded(soap, a->Result + i, SOAP_TYPE_tt__FindEventResult);
			soap_serialize_tt__FindEventResult(soap, a->Result + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindEventResultList(struct soap *soap, const char *tag, int id, const struct tt__FindEventResultList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindEventResultList), type))
		return soap->error;
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &a->SearchState, ""))
		return soap->error;
	if (a->Result)
	{	int i;
		for (i = 0; i < a->__sizeResult; i++)
			if (soap_out_tt__FindEventResult(soap, "tt:Result", -1, a->Result + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindEventResultList * SOAP_FMAC4 soap_in_tt__FindEventResultList(struct soap *soap, const char *tag, struct tt__FindEventResultList *a, const char *type)
{
	size_t soap_flag_SearchState = 1;
	struct soap_blist *soap_blist_Result = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindEventResultList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindEventResultList, sizeof(struct tt__FindEventResultList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindEventResultList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SearchState && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &a->SearchState, "tt:SearchState"))
				{	soap_flag_SearchState--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Result", 1, NULL))
			{	if (a->Result == NULL)
				{	if (soap_blist_Result == NULL)
						soap_blist_Result = soap_new_block(soap);
					a->Result = (struct tt__FindEventResult *)soap_push_block(soap, soap_blist_Result, sizeof(struct tt__FindEventResult));
					if (a->Result == NULL)
						return NULL;
					soap_default_tt__FindEventResult(soap, a->Result);
				}
				soap_revert(soap);
				if (soap_in_tt__FindEventResult(soap, "tt:Result", a->Result, "tt:FindEventResult"))
				{	a->__sizeResult++;
					a->Result = NULL;
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
		if (a->Result)
			soap_pop_block(soap, soap_blist_Result);
		if (a->__sizeResult)
			a->Result = (struct tt__FindEventResult *)soap_save_block(soap, soap_blist_Result, NULL, 1);
		else
		{	a->Result = NULL;
			if (soap_blist_Result)
				soap_end_block(soap, soap_blist_Result);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindEventResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindEventResultList, 0, sizeof(struct tt__FindEventResultList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindEventResultList(struct soap *soap, const struct tt__FindEventResultList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindEventResultList);
	if (soap_out_tt__FindEventResultList(soap, tag?tag:"tt:FindEventResultList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindEventResultList * SOAP_FMAC4 soap_get_tt__FindEventResultList(struct soap *soap, struct tt__FindEventResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindEventResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingInformation(struct soap *soap, struct tt__RecordingInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__RecordingReference(soap, &a->RecordingToken);
	a->Source = NULL;
	a->EarliestRecording = NULL;
	a->LatestRecording = NULL;
	soap_default_tt__Description(soap, &a->Content);
	a->__sizeTrack = 0;
	a->Track = NULL;
	soap_default_tt__RecordingStatus(soap, &a->RecordingStatus);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingInformation(struct soap *soap, const struct tt__RecordingInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__RecordingReference(soap, &a->RecordingToken);
	soap_serialize_PointerTott__RecordingSourceInformation(soap, &a->Source);
	soap_serialize_PointerTotime(soap, &a->EarliestRecording);
	soap_serialize_PointerTotime(soap, &a->LatestRecording);
	soap_serialize_tt__Description(soap, &a->Content);
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
		{
			soap_embedded(soap, a->Track + i, SOAP_TYPE_tt__TrackInformation);
			soap_serialize_tt__TrackInformation(soap, a->Track + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingInformation(struct soap *soap, const char *tag, int id, const struct tt__RecordingInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingInformation), type))
		return soap->error;
	if (a->RecordingToken)
	{	if (soap_out_tt__RecordingReference(soap, "tt:RecordingToken", -1, &a->RecordingToken, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:RecordingToken"))
		return soap->error;
	if (a->Source)
	{	if (soap_out_PointerTott__RecordingSourceInformation(soap, "tt:Source", -1, &a->Source, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Source"))
		return soap->error;
	if (soap_out_PointerTotime(soap, "tt:EarliestRecording", -1, &a->EarliestRecording, ""))
		return soap->error;
	if (soap_out_PointerTotime(soap, "tt:LatestRecording", -1, &a->LatestRecording, ""))
		return soap->error;
	if (a->Content)
	{	if (soap_out_tt__Description(soap, "tt:Content", -1, &a->Content, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Content"))
		return soap->error;
	if (a->Track)
	{	int i;
		for (i = 0; i < a->__sizeTrack; i++)
			if (soap_out_tt__TrackInformation(soap, "tt:Track", -1, a->Track + i, ""))
				return soap->error;
	}
	if (soap_out_tt__RecordingStatus(soap, "tt:RecordingStatus", -1, &a->RecordingStatus, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingInformation * SOAP_FMAC4 soap_in_tt__RecordingInformation(struct soap *soap, const char *tag, struct tt__RecordingInformation *a, const char *type)
{
	size_t soap_flag_RecordingToken = 1;
	size_t soap_flag_Source = 1;
	size_t soap_flag_EarliestRecording = 1;
	size_t soap_flag_LatestRecording = 1;
	size_t soap_flag_Content = 1;
	struct soap_blist *soap_blist_Track = NULL;
	size_t soap_flag_RecordingStatus = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingInformation, sizeof(struct tt__RecordingInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_RecordingToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__RecordingReference(soap, "tt:RecordingToken", &a->RecordingToken, "tt:RecordingReference"))
				{	soap_flag_RecordingToken--;
					continue;
				}
			if (soap_flag_Source && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RecordingSourceInformation(soap, "tt:Source", &a->Source, "tt:RecordingSourceInformation"))
				{	soap_flag_Source--;
					continue;
				}
			if (soap_flag_EarliestRecording && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "tt:EarliestRecording", &a->EarliestRecording, "xsd:dateTime"))
				{	soap_flag_EarliestRecording--;
					continue;
				}
			if (soap_flag_LatestRecording && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTotime(soap, "tt:LatestRecording", &a->LatestRecording, "xsd:dateTime"))
				{	soap_flag_LatestRecording--;
					continue;
				}
			if (soap_flag_Content && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__Description(soap, "tt:Content", &a->Content, "tt:Description"))
				{	soap_flag_Content--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Track", 1, NULL))
			{	if (a->Track == NULL)
				{	if (soap_blist_Track == NULL)
						soap_blist_Track = soap_new_block(soap);
					a->Track = (struct tt__TrackInformation *)soap_push_block(soap, soap_blist_Track, sizeof(struct tt__TrackInformation));
					if (a->Track == NULL)
						return NULL;
					soap_default_tt__TrackInformation(soap, a->Track);
				}
				soap_revert(soap);
				if (soap_in_tt__TrackInformation(soap, "tt:Track", a->Track, "tt:TrackInformation"))
				{	a->__sizeTrack++;
					a->Track = NULL;
					continue;
				}
			}
			if (soap_flag_RecordingStatus && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__RecordingStatus(soap, "tt:RecordingStatus", &a->RecordingStatus, "tt:RecordingStatus"))
				{	soap_flag_RecordingStatus--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->Track)
			soap_pop_block(soap, soap_blist_Track);
		if (a->__sizeTrack)
			a->Track = (struct tt__TrackInformation *)soap_save_block(soap, soap_blist_Track, NULL, 1);
		else
		{	a->Track = NULL;
			if (soap_blist_Track)
				soap_end_block(soap, soap_blist_Track);
		}
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingInformation, 0, sizeof(struct tt__RecordingInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_RecordingToken > 0 || soap_flag_Source > 0 || soap_flag_Content > 0 || soap_flag_RecordingStatus > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingInformation(struct soap *soap, const struct tt__RecordingInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingInformation);
	if (soap_out_tt__RecordingInformation(soap, tag?tag:"tt:RecordingInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingInformation * SOAP_FMAC4 soap_get_tt__RecordingInformation(struct soap *soap, struct tt__RecordingInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FindRecordingResultList(struct soap *soap, struct tt__FindRecordingResultList *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__SearchState(soap, &a->SearchState);
	a->__sizeRecordingInformation = 0;
	a->RecordingInformation = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FindRecordingResultList(struct soap *soap, const struct tt__FindRecordingResultList *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->RecordingInformation)
	{	int i;
		for (i = 0; i < a->__sizeRecordingInformation; i++)
		{
			soap_embedded(soap, a->RecordingInformation + i, SOAP_TYPE_tt__RecordingInformation);
			soap_serialize_tt__RecordingInformation(soap, a->RecordingInformation + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FindRecordingResultList(struct soap *soap, const char *tag, int id, const struct tt__FindRecordingResultList *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FindRecordingResultList), type))
		return soap->error;
	if (soap_out_tt__SearchState(soap, "tt:SearchState", -1, &a->SearchState, ""))
		return soap->error;
	if (a->RecordingInformation)
	{	int i;
		for (i = 0; i < a->__sizeRecordingInformation; i++)
			if (soap_out_tt__RecordingInformation(soap, "tt:RecordingInformation", -1, a->RecordingInformation + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FindRecordingResultList * SOAP_FMAC4 soap_in_tt__FindRecordingResultList(struct soap *soap, const char *tag, struct tt__FindRecordingResultList *a, const char *type)
{
	size_t soap_flag_SearchState = 1;
	struct soap_blist *soap_blist_RecordingInformation = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FindRecordingResultList *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FindRecordingResultList, sizeof(struct tt__FindRecordingResultList), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FindRecordingResultList(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SearchState && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__SearchState(soap, "tt:SearchState", &a->SearchState, "tt:SearchState"))
				{	soap_flag_SearchState--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RecordingInformation", 1, NULL))
			{	if (a->RecordingInformation == NULL)
				{	if (soap_blist_RecordingInformation == NULL)
						soap_blist_RecordingInformation = soap_new_block(soap);
					a->RecordingInformation = (struct tt__RecordingInformation *)soap_push_block(soap, soap_blist_RecordingInformation, sizeof(struct tt__RecordingInformation));
					if (a->RecordingInformation == NULL)
						return NULL;
					soap_default_tt__RecordingInformation(soap, a->RecordingInformation);
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingInformation(soap, "tt:RecordingInformation", a->RecordingInformation, "tt:RecordingInformation"))
				{	a->__sizeRecordingInformation++;
					a->RecordingInformation = NULL;
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
		if (a->RecordingInformation)
			soap_pop_block(soap, soap_blist_RecordingInformation);
		if (a->__sizeRecordingInformation)
			a->RecordingInformation = (struct tt__RecordingInformation *)soap_save_block(soap, soap_blist_RecordingInformation, NULL, 1);
		else
		{	a->RecordingInformation = NULL;
			if (soap_blist_RecordingInformation)
				soap_end_block(soap, soap_blist_RecordingInformation);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FindRecordingResultList *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FindRecordingResultList, 0, sizeof(struct tt__FindRecordingResultList), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_SearchState > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FindRecordingResultList(struct soap *soap, const struct tt__FindRecordingResultList *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FindRecordingResultList);
	if (soap_out_tt__FindRecordingResultList(soap, tag?tag:"tt:FindRecordingResultList", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FindRecordingResultList * SOAP_FMAC4 soap_get_tt__FindRecordingResultList(struct soap *soap, struct tt__FindRecordingResultList *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FindRecordingResultList(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataFilter(struct soap *soap, struct tt__MetadataFilter *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__XPathExpression(soap, &a->MetadataStreamFilter);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataFilter(struct soap *soap, const struct tt__MetadataFilter *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__XPathExpression(soap, &a->MetadataStreamFilter);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataFilter(struct soap *soap, const char *tag, int id, const struct tt__MetadataFilter *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataFilter), type))
		return soap->error;
	if (a->MetadataStreamFilter)
	{	if (soap_out_tt__XPathExpression(soap, "tt:MetadataStreamFilter", -1, &a->MetadataStreamFilter, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MetadataStreamFilter"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataFilter * SOAP_FMAC4 soap_in_tt__MetadataFilter(struct soap *soap, const char *tag, struct tt__MetadataFilter *a, const char *type)
{
	size_t soap_flag_MetadataStreamFilter = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataFilter *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataFilter, sizeof(struct tt__MetadataFilter), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataFilter(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MetadataStreamFilter && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__XPathExpression(soap, "tt:MetadataStreamFilter", &a->MetadataStreamFilter, "tt:XPathExpression"))
				{	soap_flag_MetadataStreamFilter--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataFilter, 0, sizeof(struct tt__MetadataFilter), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MetadataStreamFilter > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataFilter(struct soap *soap, const struct tt__MetadataFilter *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataFilter);
	if (soap_out_tt__MetadataFilter(soap, tag?tag:"tt:MetadataFilter", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataFilter * SOAP_FMAC4 soap_get_tt__MetadataFilter(struct soap *soap, struct tt__MetadataFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZPositionFilter(struct soap *soap, struct tt__PTZPositionFilter *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->MinPosition = NULL;
	a->MaxPosition = NULL;
	soap_default_xsd__boolean(soap, &a->EnterOrExit);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZPositionFilter(struct soap *soap, const struct tt__PTZPositionFilter *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PTZVector(soap, &a->MinPosition);
	soap_serialize_PointerTott__PTZVector(soap, &a->MaxPosition);
	soap_embedded(soap, &a->EnterOrExit, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZPositionFilter(struct soap *soap, const char *tag, int id, const struct tt__PTZPositionFilter *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZPositionFilter), type))
		return soap->error;
	if (a->MinPosition)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:MinPosition", -1, &a->MinPosition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MinPosition"))
		return soap->error;
	if (a->MaxPosition)
	{	if (soap_out_PointerTott__PTZVector(soap, "tt:MaxPosition", -1, &a->MaxPosition, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MaxPosition"))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:EnterOrExit", -1, &a->EnterOrExit, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZPositionFilter * SOAP_FMAC4 soap_in_tt__PTZPositionFilter(struct soap *soap, const char *tag, struct tt__PTZPositionFilter *a, const char *type)
{
	size_t soap_flag_MinPosition = 1;
	size_t soap_flag_MaxPosition = 1;
	size_t soap_flag_EnterOrExit = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZPositionFilter *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZPositionFilter, sizeof(struct tt__PTZPositionFilter), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZPositionFilter(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MinPosition && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:MinPosition", &a->MinPosition, "tt:PTZVector"))
				{	soap_flag_MinPosition--;
					continue;
				}
			if (soap_flag_MaxPosition && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZVector(soap, "tt:MaxPosition", &a->MaxPosition, "tt:PTZVector"))
				{	soap_flag_MaxPosition--;
					continue;
				}
			if (soap_flag_EnterOrExit && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:EnterOrExit", &a->EnterOrExit, "xsd:boolean"))
				{	soap_flag_EnterOrExit--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZPositionFilter *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZPositionFilter, 0, sizeof(struct tt__PTZPositionFilter), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MinPosition > 0 || soap_flag_MaxPosition > 0 || soap_flag_EnterOrExit > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZPositionFilter(struct soap *soap, const struct tt__PTZPositionFilter *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZPositionFilter);
	if (soap_out_tt__PTZPositionFilter(soap, tag?tag:"tt:PTZPositionFilter", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZPositionFilter * SOAP_FMAC4 soap_get_tt__PTZPositionFilter(struct soap *soap, struct tt__PTZPositionFilter *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZPositionFilter(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SearchScopeExtension(struct soap *soap, struct tt__SearchScopeExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SearchScopeExtension(struct soap *soap, const struct tt__SearchScopeExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchScopeExtension(struct soap *soap, const char *tag, int id, const struct tt__SearchScopeExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchScopeExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SearchScopeExtension * SOAP_FMAC4 soap_in_tt__SearchScopeExtension(struct soap *soap, const char *tag, struct tt__SearchScopeExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SearchScopeExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchScopeExtension, sizeof(struct tt__SearchScopeExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SearchScopeExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SearchScopeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchScopeExtension, 0, sizeof(struct tt__SearchScopeExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SearchScopeExtension(struct soap *soap, const struct tt__SearchScopeExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SearchScopeExtension);
	if (soap_out_tt__SearchScopeExtension(soap, tag?tag:"tt:SearchScopeExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SearchScopeExtension * SOAP_FMAC4 soap_get_tt__SearchScopeExtension(struct soap *soap, struct tt__SearchScopeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchScopeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SearchScope(struct soap *soap, struct tt__SearchScope *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeIncludedSources = 0;
	a->IncludedSources = NULL;
	a->__sizeIncludedRecordings = 0;
	a->IncludedRecordings = NULL;
	soap_default_tt__XPathExpression(soap, &a->RecordingInformationFilter);
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SearchScope(struct soap *soap, const struct tt__SearchScope *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->IncludedSources)
	{	int i;
		for (i = 0; i < a->__sizeIncludedSources; i++)
		{
			soap_embedded(soap, a->IncludedSources + i, SOAP_TYPE_tt__SourceReference);
			soap_serialize_tt__SourceReference(soap, a->IncludedSources + i);
		}
	}
	if (a->IncludedRecordings)
	{	int i;
		for (i = 0; i < a->__sizeIncludedRecordings; i++)
		{
			soap_serialize_tt__RecordingReference(soap, a->IncludedRecordings + i);
		}
	}
	soap_serialize_tt__XPathExpression(soap, &a->RecordingInformationFilter);
	soap_serialize_PointerTott__SearchScopeExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchScope(struct soap *soap, const char *tag, int id, const struct tt__SearchScope *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchScope), type))
		return soap->error;
	if (a->IncludedSources)
	{	int i;
		for (i = 0; i < a->__sizeIncludedSources; i++)
			if (soap_out_tt__SourceReference(soap, "tt:IncludedSources", -1, a->IncludedSources + i, ""))
				return soap->error;
	}
	if (a->IncludedRecordings)
	{	int i;
		for (i = 0; i < a->__sizeIncludedRecordings; i++)
			if (soap_out_tt__RecordingReference(soap, "tt:IncludedRecordings", -1, a->IncludedRecordings + i, ""))
				return soap->error;
	}
	if (soap_out_tt__XPathExpression(soap, "tt:RecordingInformationFilter", -1, &a->RecordingInformationFilter, ""))
		return soap->error;
	if (soap_out_PointerTott__SearchScopeExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SearchScope * SOAP_FMAC4 soap_in_tt__SearchScope(struct soap *soap, const char *tag, struct tt__SearchScope *a, const char *type)
{
	struct soap_blist *soap_blist_IncludedSources = NULL;
	struct soap_blist *soap_blist_IncludedRecordings = NULL;
	size_t soap_flag_RecordingInformationFilter = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SearchScope *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchScope, sizeof(struct tt__SearchScope), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SearchScope(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IncludedSources", 1, NULL))
			{	if (a->IncludedSources == NULL)
				{	if (soap_blist_IncludedSources == NULL)
						soap_blist_IncludedSources = soap_new_block(soap);
					a->IncludedSources = (struct tt__SourceReference *)soap_push_block(soap, soap_blist_IncludedSources, sizeof(struct tt__SourceReference));
					if (a->IncludedSources == NULL)
						return NULL;
					soap_default_tt__SourceReference(soap, a->IncludedSources);
				}
				soap_revert(soap);
				if (soap_in_tt__SourceReference(soap, "tt:IncludedSources", a->IncludedSources, "tt:SourceReference"))
				{	a->__sizeIncludedSources++;
					a->IncludedSources = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:IncludedRecordings", 1, NULL))
			{	if (a->IncludedRecordings == NULL)
				{	if (soap_blist_IncludedRecordings == NULL)
						soap_blist_IncludedRecordings = soap_new_block(soap);
					a->IncludedRecordings = (char **)soap_push_block(soap, soap_blist_IncludedRecordings, sizeof(char *));
					if (a->IncludedRecordings == NULL)
						return NULL;
					*a->IncludedRecordings = NULL;
				}
				soap_revert(soap);
				if (soap_in_tt__RecordingReference(soap, "tt:IncludedRecordings", a->IncludedRecordings, "tt:RecordingReference"))
				{	a->__sizeIncludedRecordings++;
					a->IncludedRecordings = NULL;
					continue;
				}
			}
			if (soap_flag_RecordingInformationFilter && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__XPathExpression(soap, "tt:RecordingInformationFilter", &a->RecordingInformationFilter, "tt:XPathExpression"))
				{	soap_flag_RecordingInformationFilter--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SearchScopeExtension(soap, "tt:Extension", &a->Extension, "tt:SearchScopeExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->IncludedSources)
			soap_pop_block(soap, soap_blist_IncludedSources);
		if (a->__sizeIncludedSources)
			a->IncludedSources = (struct tt__SourceReference *)soap_save_block(soap, soap_blist_IncludedSources, NULL, 1);
		else
		{	a->IncludedSources = NULL;
			if (soap_blist_IncludedSources)
				soap_end_block(soap, soap_blist_IncludedSources);
		}
		if (a->IncludedRecordings)
			soap_pop_block(soap, soap_blist_IncludedRecordings);
		if (a->__sizeIncludedRecordings)
			a->IncludedRecordings = (char **)soap_save_block(soap, soap_blist_IncludedRecordings, NULL, 1);
		else
		{	a->IncludedRecordings = NULL;
			if (soap_blist_IncludedRecordings)
				soap_end_block(soap, soap_blist_IncludedRecordings);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SearchScope *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchScope, 0, sizeof(struct tt__SearchScope), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SearchScope(struct soap *soap, const struct tt__SearchScope *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SearchScope);
	if (soap_out_tt__SearchScope(soap, tag?tag:"tt:SearchScope", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SearchScope * SOAP_FMAC4 soap_get_tt__SearchScope(struct soap *soap, struct tt__SearchScope *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SearchScope(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingSummary(struct soap *soap, struct tt__RecordingSummary *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_time(soap, &a->DataFrom);
	soap_default_time(soap, &a->DataUntil);
	soap_default_int(soap, &a->NumberRecordings);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingSummary(struct soap *soap, const struct tt__RecordingSummary *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->DataFrom, SOAP_TYPE_time);
	soap_embedded(soap, &a->DataUntil, SOAP_TYPE_time);
	soap_embedded(soap, &a->NumberRecordings, SOAP_TYPE_int);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingSummary(struct soap *soap, const char *tag, int id, const struct tt__RecordingSummary *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingSummary), type))
		return soap->error;
	if (soap_out_time(soap, "tt:DataFrom", -1, &a->DataFrom, ""))
		return soap->error;
	if (soap_out_time(soap, "tt:DataUntil", -1, &a->DataUntil, ""))
		return soap->error;
	if (soap_out_int(soap, "tt:NumberRecordings", -1, &a->NumberRecordings, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingSummary * SOAP_FMAC4 soap_in_tt__RecordingSummary(struct soap *soap, const char *tag, struct tt__RecordingSummary *a, const char *type)
{
	size_t soap_flag_DataFrom = 1;
	size_t soap_flag_DataUntil = 1;
	size_t soap_flag_NumberRecordings = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RecordingSummary *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingSummary, sizeof(struct tt__RecordingSummary), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RecordingSummary(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_DataFrom && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataFrom", &a->DataFrom, "xsd:dateTime"))
				{	soap_flag_DataFrom--;
					continue;
				}
			if (soap_flag_DataUntil && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_time(soap, "tt:DataUntil", &a->DataUntil, "xsd:dateTime"))
				{	soap_flag_DataUntil--;
					continue;
				}
			if (soap_flag_NumberRecordings && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_int(soap, "tt:NumberRecordings", &a->NumberRecordings, "xsd:int"))
				{	soap_flag_NumberRecordings--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RecordingSummary *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingSummary, 0, sizeof(struct tt__RecordingSummary), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DataFrom > 0 || soap_flag_DataUntil > 0 || soap_flag_NumberRecordings > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingSummary(struct soap *soap, const struct tt__RecordingSummary *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingSummary);
	if (soap_out_tt__RecordingSummary(soap, tag?tag:"tt:RecordingSummary", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingSummary * SOAP_FMAC4 soap_get_tt__RecordingSummary(struct soap *soap, struct tt__RecordingSummary *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RecordingSummary(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SourceReference(struct soap *soap, struct tt__SourceReference *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->Token);
	a->__size = 0;
	a->__any = NULL;
	soap_default_xsd__anyURI(soap, &a->Type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SourceReference(struct soap *soap, const struct tt__SourceReference *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->Token);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SourceReference(struct soap *soap, const char *tag, int id, const struct tt__SourceReference *a, const char *type)
{
	if (a->Type)
		soap_set_attr(soap, "Type", a->Type, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SourceReference), type))
		return soap->error;
	if (a->Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SourceReference * SOAP_FMAC4 soap_in_tt__SourceReference(struct soap *soap, const char *tag, struct tt__SourceReference *a, const char *type)
{
	size_t soap_flag_Token = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SourceReference *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SourceReference, sizeof(struct tt__SourceReference), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SourceReference(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Type", 0), &a->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Token && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &a->Token, "tt:ReferenceToken"))
				{	soap_flag_Token--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SourceReference *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SourceReference, 0, sizeof(struct tt__SourceReference), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SourceReference(struct soap *soap, const struct tt__SourceReference *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SourceReference);
	if (soap_out_tt__SourceReference(soap, tag?tag:"tt:SourceReference", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SourceReference * SOAP_FMAC4 soap_get_tt__SourceReference(struct soap *soap, struct tt__SourceReference *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SourceReference(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverStateInformation(struct soap *soap, struct tt__ReceiverStateInformation *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReceiverState(soap, &a->State);
	soap_default_xsd__boolean(soap, &a->AutoCreated);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReceiverStateInformation(struct soap *soap, const struct tt__ReceiverStateInformation *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_embedded(soap, &a->AutoCreated, SOAP_TYPE_xsd__boolean);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverStateInformation(struct soap *soap, const char *tag, int id, const struct tt__ReceiverStateInformation *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverStateInformation), type))
		return soap->error;
	if (soap_out_tt__ReceiverState(soap, "tt:State", -1, &a->State, ""))
		return soap->error;
	if (soap_out_xsd__boolean(soap, "tt:AutoCreated", -1, &a->AutoCreated, ""))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReceiverStateInformation * SOAP_FMAC4 soap_in_tt__ReceiverStateInformation(struct soap *soap, const char *tag, struct tt__ReceiverStateInformation *a, const char *type)
{
	size_t soap_flag_State = 1;
	size_t soap_flag_AutoCreated = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReceiverStateInformation *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverStateInformation, sizeof(struct tt__ReceiverStateInformation), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReceiverStateInformation(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_State && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReceiverState(soap, "tt:State", &a->State, "tt:ReceiverState"))
				{	soap_flag_State--;
					continue;
				}
			if (soap_flag_AutoCreated && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_xsd__boolean(soap, "tt:AutoCreated", &a->AutoCreated, "xsd:boolean"))
				{	soap_flag_AutoCreated--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ReceiverStateInformation *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverStateInformation, 0, sizeof(struct tt__ReceiverStateInformation), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_State > 0 || soap_flag_AutoCreated > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverStateInformation(struct soap *soap, const struct tt__ReceiverStateInformation *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverStateInformation);
	if (soap_out_tt__ReceiverStateInformation(soap, tag?tag:"tt:ReceiverStateInformation", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReceiverStateInformation * SOAP_FMAC4 soap_get_tt__ReceiverStateInformation(struct soap *soap, struct tt__ReceiverStateInformation *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverStateInformation(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverConfiguration(struct soap *soap, struct tt__ReceiverConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReceiverMode(soap, &a->Mode);
	soap_default_xsd__anyURI(soap, &a->MediaUri);
	a->StreamSetup = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReceiverConfiguration(struct soap *soap, const struct tt__ReceiverConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_xsd__anyURI(soap, &a->MediaUri);
	soap_serialize_PointerTott__StreamSetup(soap, &a->StreamSetup);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverConfiguration(struct soap *soap, const char *tag, int id, const struct tt__ReceiverConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverConfiguration), type))
		return soap->error;
	if (soap_out_tt__ReceiverMode(soap, "tt:Mode", -1, &a->Mode, ""))
		return soap->error;
	if (a->MediaUri)
	{	if (soap_out_xsd__anyURI(soap, "tt:MediaUri", -1, &a->MediaUri, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MediaUri"))
		return soap->error;
	if (a->StreamSetup)
	{	if (soap_out_PointerTott__StreamSetup(soap, "tt:StreamSetup", -1, &a->StreamSetup, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:StreamSetup"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReceiverConfiguration * SOAP_FMAC4 soap_in_tt__ReceiverConfiguration(struct soap *soap, const char *tag, struct tt__ReceiverConfiguration *a, const char *type)
{
	size_t soap_flag_Mode = 1;
	size_t soap_flag_MediaUri = 1;
	size_t soap_flag_StreamSetup = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ReceiverConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverConfiguration, sizeof(struct tt__ReceiverConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ReceiverConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Mode && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_tt__ReceiverMode(soap, "tt:Mode", &a->Mode, "tt:ReceiverMode"))
				{	soap_flag_Mode--;
					continue;
				}
			if (soap_flag_MediaUri && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_xsd__anyURI(soap, "tt:MediaUri", &a->MediaUri, "xsd:anyURI"))
				{	soap_flag_MediaUri--;
					continue;
				}
			if (soap_flag_StreamSetup && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__StreamSetup(soap, "tt:StreamSetup", &a->StreamSetup, "tt:StreamSetup"))
				{	soap_flag_StreamSetup--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ReceiverConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverConfiguration, 0, sizeof(struct tt__ReceiverConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Mode > 0 || soap_flag_MediaUri > 0 || soap_flag_StreamSetup > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverConfiguration(struct soap *soap, const struct tt__ReceiverConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverConfiguration);
	if (soap_out_tt__ReceiverConfiguration(soap, tag?tag:"tt:ReceiverConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReceiverConfiguration * SOAP_FMAC4 soap_get_tt__ReceiverConfiguration(struct soap *soap, struct tt__ReceiverConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ReceiverConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Receiver(struct soap *soap, struct tt__Receiver *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->Token);
	a->Configuration = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Receiver(struct soap *soap, const struct tt__Receiver *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->Token);
	soap_serialize_PointerTott__ReceiverConfiguration(soap, &a->Configuration);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Receiver(struct soap *soap, const char *tag, int id, const struct tt__Receiver *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Receiver), type))
		return soap->error;
	if (a->Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->Configuration)
	{	if (soap_out_PointerTott__ReceiverConfiguration(soap, "tt:Configuration", -1, &a->Configuration, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Configuration"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Receiver * SOAP_FMAC4 soap_in_tt__Receiver(struct soap *soap, const char *tag, struct tt__Receiver *a, const char *type)
{
	size_t soap_flag_Token = 1;
	size_t soap_flag_Configuration = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Receiver *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Receiver, sizeof(struct tt__Receiver), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Receiver(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Token && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &a->Token, "tt:ReferenceToken"))
				{	soap_flag_Token--;
					continue;
				}
			if (soap_flag_Configuration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ReceiverConfiguration(soap, "tt:Configuration", &a->Configuration, "tt:ReceiverConfiguration"))
				{	soap_flag_Configuration--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Receiver *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Receiver, 0, sizeof(struct tt__Receiver), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token > 0 || soap_flag_Configuration > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Receiver(struct soap *soap, const struct tt__Receiver *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Receiver);
	if (soap_out_tt__Receiver(soap, tag?tag:"tt:Receiver", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Receiver * SOAP_FMAC4 soap_get_tt__Receiver(struct soap *soap, struct tt__Receiver *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Receiver(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PaneOptionExtension(struct soap *soap, struct tt__PaneOptionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PaneOptionExtension(struct soap *soap, const struct tt__PaneOptionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneOptionExtension(struct soap *soap, const char *tag, int id, const struct tt__PaneOptionExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneOptionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PaneOptionExtension * SOAP_FMAC4 soap_in_tt__PaneOptionExtension(struct soap *soap, const char *tag, struct tt__PaneOptionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PaneOptionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneOptionExtension, sizeof(struct tt__PaneOptionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PaneOptionExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PaneOptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneOptionExtension, 0, sizeof(struct tt__PaneOptionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PaneOptionExtension(struct soap *soap, const struct tt__PaneOptionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PaneOptionExtension);
	if (soap_out_tt__PaneOptionExtension(soap, tag?tag:"tt:PaneOptionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PaneOptionExtension * SOAP_FMAC4 soap_get_tt__PaneOptionExtension(struct soap *soap, struct tt__PaneOptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneOptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__LayoutOptionsExtension(struct soap *soap, struct tt__LayoutOptionsExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__LayoutOptionsExtension(struct soap *soap, const struct tt__LayoutOptionsExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutOptionsExtension(struct soap *soap, const char *tag, int id, const struct tt__LayoutOptionsExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutOptionsExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__LayoutOptionsExtension * SOAP_FMAC4 soap_in_tt__LayoutOptionsExtension(struct soap *soap, const char *tag, struct tt__LayoutOptionsExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__LayoutOptionsExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutOptionsExtension, sizeof(struct tt__LayoutOptionsExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__LayoutOptionsExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__LayoutOptionsExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutOptionsExtension, 0, sizeof(struct tt__LayoutOptionsExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__LayoutOptionsExtension(struct soap *soap, const struct tt__LayoutOptionsExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__LayoutOptionsExtension);
	if (soap_out_tt__LayoutOptionsExtension(soap, tag?tag:"tt:LayoutOptionsExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__LayoutOptionsExtension * SOAP_FMAC4 soap_get_tt__LayoutOptionsExtension(struct soap *soap, struct tt__LayoutOptionsExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutOptionsExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PaneLayoutOptions(struct soap *soap, struct tt__PaneLayoutOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeArea = 0;
	a->Area = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PaneLayoutOptions(struct soap *soap, const struct tt__PaneLayoutOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Area)
	{	int i;
		for (i = 0; i < a->__sizeArea; i++)
		{
			soap_embedded(soap, a->Area + i, SOAP_TYPE_tt__Rectangle);
			soap_serialize_tt__Rectangle(soap, a->Area + i);
		}
	}
	soap_serialize_PointerTott__PaneOptionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneLayoutOptions(struct soap *soap, const char *tag, int id, const struct tt__PaneLayoutOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneLayoutOptions), type))
		return soap->error;
	if (a->Area)
	{	int i;
		for (i = 0; i < a->__sizeArea; i++)
			if (soap_out_tt__Rectangle(soap, "tt:Area", -1, a->Area + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PaneOptionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PaneLayoutOptions * SOAP_FMAC4 soap_in_tt__PaneLayoutOptions(struct soap *soap, const char *tag, struct tt__PaneLayoutOptions *a, const char *type)
{
	struct soap_blist *soap_blist_Area = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PaneLayoutOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneLayoutOptions, sizeof(struct tt__PaneLayoutOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PaneLayoutOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Area", 1, NULL))
			{	if (a->Area == NULL)
				{	if (soap_blist_Area == NULL)
						soap_blist_Area = soap_new_block(soap);
					a->Area = (struct tt__Rectangle *)soap_push_block(soap, soap_blist_Area, sizeof(struct tt__Rectangle));
					if (a->Area == NULL)
						return NULL;
					soap_default_tt__Rectangle(soap, a->Area);
				}
				soap_revert(soap);
				if (soap_in_tt__Rectangle(soap, "tt:Area", a->Area, "tt:Rectangle"))
				{	a->__sizeArea++;
					a->Area = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PaneOptionExtension(soap, "tt:Extension", &a->Extension, "tt:PaneOptionExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Area)
			soap_pop_block(soap, soap_blist_Area);
		if (a->__sizeArea)
			a->Area = (struct tt__Rectangle *)soap_save_block(soap, soap_blist_Area, NULL, 1);
		else
		{	a->Area = NULL;
			if (soap_blist_Area)
				soap_end_block(soap, soap_blist_Area);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PaneLayoutOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneLayoutOptions, 0, sizeof(struct tt__PaneLayoutOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeArea < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PaneLayoutOptions(struct soap *soap, const struct tt__PaneLayoutOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PaneLayoutOptions);
	if (soap_out_tt__PaneLayoutOptions(soap, tag?tag:"tt:PaneLayoutOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PaneLayoutOptions * SOAP_FMAC4 soap_get_tt__PaneLayoutOptions(struct soap *soap, struct tt__PaneLayoutOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneLayoutOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__LayoutOptions(struct soap *soap, struct tt__LayoutOptions *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizePaneLayoutOptions = 0;
	a->PaneLayoutOptions = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__LayoutOptions(struct soap *soap, const struct tt__LayoutOptions *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->PaneLayoutOptions)
	{	int i;
		for (i = 0; i < a->__sizePaneLayoutOptions; i++)
		{
			soap_embedded(soap, a->PaneLayoutOptions + i, SOAP_TYPE_tt__PaneLayoutOptions);
			soap_serialize_tt__PaneLayoutOptions(soap, a->PaneLayoutOptions + i);
		}
	}
	soap_serialize_PointerTott__LayoutOptionsExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutOptions(struct soap *soap, const char *tag, int id, const struct tt__LayoutOptions *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutOptions), type))
		return soap->error;
	if (a->PaneLayoutOptions)
	{	int i;
		for (i = 0; i < a->__sizePaneLayoutOptions; i++)
			if (soap_out_tt__PaneLayoutOptions(soap, "tt:PaneLayoutOptions", -1, a->PaneLayoutOptions + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__LayoutOptionsExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__LayoutOptions * SOAP_FMAC4 soap_in_tt__LayoutOptions(struct soap *soap, const char *tag, struct tt__LayoutOptions *a, const char *type)
{
	struct soap_blist *soap_blist_PaneLayoutOptions = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__LayoutOptions *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutOptions, sizeof(struct tt__LayoutOptions), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__LayoutOptions(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PaneLayoutOptions", 1, NULL))
			{	if (a->PaneLayoutOptions == NULL)
				{	if (soap_blist_PaneLayoutOptions == NULL)
						soap_blist_PaneLayoutOptions = soap_new_block(soap);
					a->PaneLayoutOptions = (struct tt__PaneLayoutOptions *)soap_push_block(soap, soap_blist_PaneLayoutOptions, sizeof(struct tt__PaneLayoutOptions));
					if (a->PaneLayoutOptions == NULL)
						return NULL;
					soap_default_tt__PaneLayoutOptions(soap, a->PaneLayoutOptions);
				}
				soap_revert(soap);
				if (soap_in_tt__PaneLayoutOptions(soap, "tt:PaneLayoutOptions", a->PaneLayoutOptions, "tt:PaneLayoutOptions"))
				{	a->__sizePaneLayoutOptions++;
					a->PaneLayoutOptions = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__LayoutOptionsExtension(soap, "tt:Extension", &a->Extension, "tt:LayoutOptionsExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->PaneLayoutOptions)
			soap_pop_block(soap, soap_blist_PaneLayoutOptions);
		if (a->__sizePaneLayoutOptions)
			a->PaneLayoutOptions = (struct tt__PaneLayoutOptions *)soap_save_block(soap, soap_blist_PaneLayoutOptions, NULL, 1);
		else
		{	a->PaneLayoutOptions = NULL;
			if (soap_blist_PaneLayoutOptions)
				soap_end_block(soap, soap_blist_PaneLayoutOptions);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__LayoutOptions *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutOptions, 0, sizeof(struct tt__LayoutOptions), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizePaneLayoutOptions < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__LayoutOptions(struct soap *soap, const struct tt__LayoutOptions *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__LayoutOptions);
	if (soap_out_tt__LayoutOptions(soap, tag?tag:"tt:LayoutOptions", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__LayoutOptions * SOAP_FMAC4 soap_get_tt__LayoutOptions(struct soap *soap, struct tt__LayoutOptions *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutOptions(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CodingCapabilities(struct soap *soap, struct tt__CodingCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->AudioEncodingCapabilities = NULL;
	a->AudioDecodingCapabilities = NULL;
	a->VideoDecodingCapabilities = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CodingCapabilities(struct soap *soap, const struct tt__CodingCapabilities *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AudioEncoderConfigurationOptions(soap, &a->AudioEncodingCapabilities);
	soap_serialize_PointerTott__AudioDecoderConfigurationOptions(soap, &a->AudioDecodingCapabilities);
	soap_serialize_PointerTott__VideoDecoderConfigurationOptions(soap, &a->VideoDecodingCapabilities);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CodingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__CodingCapabilities *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CodingCapabilities), type))
		return soap->error;
	if (soap_out_PointerTott__AudioEncoderConfigurationOptions(soap, "tt:AudioEncodingCapabilities", -1, &a->AudioEncodingCapabilities, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioDecoderConfigurationOptions(soap, "tt:AudioDecodingCapabilities", -1, &a->AudioDecodingCapabilities, ""))
		return soap->error;
	if (a->VideoDecodingCapabilities)
	{	if (soap_out_PointerTott__VideoDecoderConfigurationOptions(soap, "tt:VideoDecodingCapabilities", -1, &a->VideoDecodingCapabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:VideoDecodingCapabilities"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CodingCapabilities * SOAP_FMAC4 soap_in_tt__CodingCapabilities(struct soap *soap, const char *tag, struct tt__CodingCapabilities *a, const char *type)
{
	size_t soap_flag_AudioEncodingCapabilities = 1;
	size_t soap_flag_AudioDecodingCapabilities = 1;
	size_t soap_flag_VideoDecodingCapabilities = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CodingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CodingCapabilities, sizeof(struct tt__CodingCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CodingCapabilities(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_AudioEncodingCapabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfigurationOptions(soap, "tt:AudioEncodingCapabilities", &a->AudioEncodingCapabilities, "tt:AudioEncoderConfigurationOptions"))
				{	soap_flag_AudioEncodingCapabilities--;
					continue;
				}
			if (soap_flag_AudioDecodingCapabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioDecoderConfigurationOptions(soap, "tt:AudioDecodingCapabilities", &a->AudioDecodingCapabilities, "tt:AudioDecoderConfigurationOptions"))
				{	soap_flag_AudioDecodingCapabilities--;
					continue;
				}
			if (soap_flag_VideoDecodingCapabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__VideoDecoderConfigurationOptions(soap, "tt:VideoDecodingCapabilities", &a->VideoDecodingCapabilities, "tt:VideoDecoderConfigurationOptions"))
				{	soap_flag_VideoDecodingCapabilities--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__CodingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CodingCapabilities, 0, sizeof(struct tt__CodingCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_VideoDecodingCapabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CodingCapabilities(struct soap *soap, const struct tt__CodingCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CodingCapabilities);
	if (soap_out_tt__CodingCapabilities(soap, tag?tag:"tt:CodingCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CodingCapabilities * SOAP_FMAC4 soap_get_tt__CodingCapabilities(struct soap *soap, struct tt__CodingCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CodingCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__LayoutExtension(struct soap *soap, struct tt__LayoutExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__LayoutExtension(struct soap *soap, const struct tt__LayoutExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__LayoutExtension(struct soap *soap, const char *tag, int id, const struct tt__LayoutExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__LayoutExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__LayoutExtension * SOAP_FMAC4 soap_in_tt__LayoutExtension(struct soap *soap, const char *tag, struct tt__LayoutExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__LayoutExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__LayoutExtension, sizeof(struct tt__LayoutExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__LayoutExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__LayoutExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__LayoutExtension, 0, sizeof(struct tt__LayoutExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__LayoutExtension(struct soap *soap, const struct tt__LayoutExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__LayoutExtension);
	if (soap_out_tt__LayoutExtension(soap, tag?tag:"tt:LayoutExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__LayoutExtension * SOAP_FMAC4 soap_get_tt__LayoutExtension(struct soap *soap, struct tt__LayoutExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__LayoutExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Layout(struct soap *soap, struct tt__Layout *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizePaneLayout = 0;
	a->PaneLayout = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Layout(struct soap *soap, const struct tt__Layout *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->PaneLayout)
	{	int i;
		for (i = 0; i < a->__sizePaneLayout; i++)
		{
			soap_embedded(soap, a->PaneLayout + i, SOAP_TYPE_tt__PaneLayout);
			soap_serialize_tt__PaneLayout(soap, a->PaneLayout + i);
		}
	}
	soap_serialize_PointerTott__LayoutExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Layout(struct soap *soap, const char *tag, int id, const struct tt__Layout *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Layout), type))
		return soap->error;
	if (a->PaneLayout)
	{	int i;
		for (i = 0; i < a->__sizePaneLayout; i++)
			if (soap_out_tt__PaneLayout(soap, "tt:PaneLayout", -1, a->PaneLayout + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__LayoutExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Layout * SOAP_FMAC4 soap_in_tt__Layout(struct soap *soap, const char *tag, struct tt__Layout *a, const char *type)
{
	struct soap_blist *soap_blist_PaneLayout = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Layout *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Layout, sizeof(struct tt__Layout), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Layout(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:PaneLayout", 1, NULL))
			{	if (a->PaneLayout == NULL)
				{	if (soap_blist_PaneLayout == NULL)
						soap_blist_PaneLayout = soap_new_block(soap);
					a->PaneLayout = (struct tt__PaneLayout *)soap_push_block(soap, soap_blist_PaneLayout, sizeof(struct tt__PaneLayout));
					if (a->PaneLayout == NULL)
						return NULL;
					soap_default_tt__PaneLayout(soap, a->PaneLayout);
				}
				soap_revert(soap);
				if (soap_in_tt__PaneLayout(soap, "tt:PaneLayout", a->PaneLayout, "tt:PaneLayout"))
				{	a->__sizePaneLayout++;
					a->PaneLayout = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__LayoutExtension(soap, "tt:Extension", &a->Extension, "tt:LayoutExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->PaneLayout)
			soap_pop_block(soap, soap_blist_PaneLayout);
		if (a->__sizePaneLayout)
			a->PaneLayout = (struct tt__PaneLayout *)soap_save_block(soap, soap_blist_PaneLayout, NULL, 1);
		else
		{	a->PaneLayout = NULL;
			if (soap_blist_PaneLayout)
				soap_end_block(soap, soap_blist_PaneLayout);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Layout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Layout, 0, sizeof(struct tt__Layout), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizePaneLayout < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Layout(struct soap *soap, const struct tt__Layout *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Layout);
	if (soap_out_tt__Layout(soap, tag?tag:"tt:Layout", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Layout * SOAP_FMAC4 soap_get_tt__Layout(struct soap *soap, struct tt__Layout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Layout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PaneLayout(struct soap *soap, struct tt__PaneLayout *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_tt__ReferenceToken(soap, &a->Pane);
	a->Area = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PaneLayout(struct soap *soap, const struct tt__PaneLayout *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_tt__ReferenceToken(soap, &a->Pane);
	soap_serialize_PointerTott__Rectangle(soap, &a->Area);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneLayout(struct soap *soap, const char *tag, int id, const struct tt__PaneLayout *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneLayout), type))
		return soap->error;
	if (a->Pane)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Pane", -1, &a->Pane, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Pane"))
		return soap->error;
	if (a->Area)
	{	if (soap_out_PointerTott__Rectangle(soap, "tt:Area", -1, &a->Area, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Area"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PaneLayout * SOAP_FMAC4 soap_in_tt__PaneLayout(struct soap *soap, const char *tag, struct tt__PaneLayout *a, const char *type)
{
	size_t soap_flag_Pane = 1;
	size_t soap_flag_Area = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PaneLayout *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneLayout, sizeof(struct tt__PaneLayout), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PaneLayout(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Pane && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Pane", &a->Pane, "tt:ReferenceToken"))
				{	soap_flag_Pane--;
					continue;
				}
			if (soap_flag_Area && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Rectangle(soap, "tt:Area", &a->Area, "tt:Rectangle"))
				{	soap_flag_Area--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PaneLayout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneLayout, 0, sizeof(struct tt__PaneLayout), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Pane > 0 || soap_flag_Area > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PaneLayout(struct soap *soap, const struct tt__PaneLayout *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PaneLayout);
	if (soap_out_tt__PaneLayout(soap, tag?tag:"tt:PaneLayout", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PaneLayout * SOAP_FMAC4 soap_get_tt__PaneLayout(struct soap *soap, struct tt__PaneLayout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneLayout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PaneConfiguration(struct soap *soap, struct tt__PaneConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->PaneName);
	soap_default_tt__ReferenceToken(soap, &a->AudioOutputToken);
	soap_default_tt__ReferenceToken(soap, &a->AudioSourceToken);
	a->AudioEncoderConfiguration = NULL;
	soap_default_tt__ReferenceToken(soap, &a->ReceiverToken);
	soap_default_tt__ReferenceToken(soap, &a->Token);
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PaneConfiguration(struct soap *soap, const struct tt__PaneConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->PaneName);
	soap_serialize_tt__ReferenceToken(soap, &a->AudioOutputToken);
	soap_serialize_tt__ReferenceToken(soap, &a->AudioSourceToken);
	soap_serialize_PointerTott__AudioEncoderConfiguration(soap, &a->AudioEncoderConfiguration);
	soap_serialize_tt__ReferenceToken(soap, &a->ReceiverToken);
	soap_serialize_tt__ReferenceToken(soap, &a->Token);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PaneConfiguration(struct soap *soap, const char *tag, int id, const struct tt__PaneConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PaneConfiguration), type))
		return soap->error;
	if (soap_out_string(soap, "tt:PaneName", -1, &a->PaneName, ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:AudioOutputToken", -1, &a->AudioOutputToken, ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:AudioSourceToken", -1, &a->AudioSourceToken, ""))
		return soap->error;
	if (soap_out_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", -1, &a->AudioEncoderConfiguration, ""))
		return soap->error;
	if (soap_out_tt__ReferenceToken(soap, "tt:ReceiverToken", -1, &a->ReceiverToken, ""))
		return soap->error;
	if (a->Token)
	{	if (soap_out_tt__ReferenceToken(soap, "tt:Token", -1, &a->Token, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Token"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PaneConfiguration * SOAP_FMAC4 soap_in_tt__PaneConfiguration(struct soap *soap, const char *tag, struct tt__PaneConfiguration *a, const char *type)
{
	size_t soap_flag_PaneName = 1;
	size_t soap_flag_AudioOutputToken = 1;
	size_t soap_flag_AudioSourceToken = 1;
	size_t soap_flag_AudioEncoderConfiguration = 1;
	size_t soap_flag_ReceiverToken = 1;
	size_t soap_flag_Token = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PaneConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PaneConfiguration, sizeof(struct tt__PaneConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PaneConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PaneName && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:PaneName", &a->PaneName, "xsd:string"))
				{	soap_flag_PaneName--;
					continue;
				}
			if (soap_flag_AudioOutputToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AudioOutputToken", &a->AudioOutputToken, "tt:ReferenceToken"))
				{	soap_flag_AudioOutputToken--;
					continue;
				}
			if (soap_flag_AudioSourceToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:AudioSourceToken", &a->AudioSourceToken, "tt:ReferenceToken"))
				{	soap_flag_AudioSourceToken--;
					continue;
				}
			if (soap_flag_AudioEncoderConfiguration && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AudioEncoderConfiguration(soap, "tt:AudioEncoderConfiguration", &a->AudioEncoderConfiguration, "tt:AudioEncoderConfiguration"))
				{	soap_flag_AudioEncoderConfiguration--;
					continue;
				}
			if (soap_flag_ReceiverToken && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:ReceiverToken", &a->ReceiverToken, "tt:ReferenceToken"))
				{	soap_flag_ReceiverToken--;
					continue;
				}
			if (soap_flag_Token && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_tt__ReferenceToken(soap, "tt:Token", &a->Token, "tt:ReferenceToken"))
				{	soap_flag_Token--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PaneConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PaneConfiguration, 0, sizeof(struct tt__PaneConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Token > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PaneConfiguration(struct soap *soap, const struct tt__PaneConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PaneConfiguration);
	if (soap_out_tt__PaneConfiguration(soap, tag?tag:"tt:PaneConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PaneConfiguration * SOAP_FMAC4 soap_get_tt__PaneConfiguration(struct soap *soap, struct tt__PaneConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PaneConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EventStreamExtension(struct soap *soap, struct tt__EventStreamExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EventStreamExtension(struct soap *soap, const struct tt__EventStreamExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventStreamExtension(struct soap *soap, const char *tag, int id, const struct tt__EventStreamExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventStreamExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EventStreamExtension * SOAP_FMAC4 soap_in_tt__EventStreamExtension(struct soap *soap, const char *tag, struct tt__EventStreamExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EventStreamExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventStreamExtension, sizeof(struct tt__EventStreamExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EventStreamExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__EventStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventStreamExtension, 0, sizeof(struct tt__EventStreamExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EventStreamExtension(struct soap *soap, const struct tt__EventStreamExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EventStreamExtension);
	if (soap_out_tt__EventStreamExtension(soap, tag?tag:"tt:EventStreamExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventStreamExtension * SOAP_FMAC4 soap_get_tt__EventStreamExtension(struct soap *soap, struct tt__EventStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_wsnt__NotificationMessageHolderType(struct soap *soap, struct wsnt__NotificationMessageHolderType *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->SubscriptionReference = NULL;
	a->Topic = NULL;
	a->ProducerReference = NULL;
	soap_default__wsnt__NotificationMessageHolderType_Message(soap, &a->Message);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wsnt__NotificationMessageHolderType(struct soap *soap, const struct wsnt__NotificationMessageHolderType *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &a->SubscriptionReference);
	soap_serialize_PointerTowsnt__TopicExpressionType(soap, &a->Topic);
	soap_serialize_PointerTowsa5__EndpointReferenceType(soap, &a->ProducerReference);
	soap_serialize__wsnt__NotificationMessageHolderType_Message(soap, &a->Message);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_wsnt__NotificationMessageHolderType(struct soap *soap, const char *tag, int id, const struct wsnt__NotificationMessageHolderType *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_wsnt__NotificationMessageHolderType), type))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", -1, &a->SubscriptionReference, ""))
		return soap->error;
	if (soap_out_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", -1, &a->Topic, ""))
		return soap->error;
	if (soap_out_PointerTowsa5__EndpointReferenceType(soap, "wsnt:ProducerReference", -1, &a->ProducerReference, ""))
		return soap->error;
	if (soap_out__wsnt__NotificationMessageHolderType_Message(soap, "wsnt:Message", -1, &a->Message, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct wsnt__NotificationMessageHolderType * SOAP_FMAC4 soap_in_wsnt__NotificationMessageHolderType(struct soap *soap, const char *tag, struct wsnt__NotificationMessageHolderType *a, const char *type)
{
	size_t soap_flag_SubscriptionReference = 1;
	size_t soap_flag_Topic = 1;
	size_t soap_flag_ProducerReference = 1;
	size_t soap_flag_Message = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct wsnt__NotificationMessageHolderType *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_wsnt__NotificationMessageHolderType, sizeof(struct wsnt__NotificationMessageHolderType), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_wsnt__NotificationMessageHolderType(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_SubscriptionReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsnt:SubscriptionReference", &a->SubscriptionReference, "wsa5:EndpointReferenceType"))
				{	soap_flag_SubscriptionReference--;
					continue;
				}
			if (soap_flag_Topic && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsnt__TopicExpressionType(soap, "wsnt:Topic", &a->Topic, "wsnt:TopicExpressionType"))
				{	soap_flag_Topic--;
					continue;
				}
			if (soap_flag_ProducerReference && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTowsa5__EndpointReferenceType(soap, "wsnt:ProducerReference", &a->ProducerReference, "wsa5:EndpointReferenceType"))
				{	soap_flag_ProducerReference--;
					continue;
				}
			if (soap_flag_Message && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in__wsnt__NotificationMessageHolderType_Message(soap, "wsnt:Message", &a->Message, ""))
				{	soap_flag_Message--;
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
	{	a = (struct wsnt__NotificationMessageHolderType *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_wsnt__NotificationMessageHolderType, 0, sizeof(struct wsnt__NotificationMessageHolderType), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Message > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_wsnt__NotificationMessageHolderType(struct soap *soap, const struct wsnt__NotificationMessageHolderType *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_wsnt__NotificationMessageHolderType);
	if (soap_out_wsnt__NotificationMessageHolderType(soap, tag?tag:"wsnt:NotificationMessageHolderType", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct wsnt__NotificationMessageHolderType * SOAP_FMAC4 soap_get_wsnt__NotificationMessageHolderType(struct soap *soap, struct wsnt__NotificationMessageHolderType *p, const char *tag, const char *type)
{
	if ((p = soap_in_wsnt__NotificationMessageHolderType(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___tt__union_EventStream(struct soap *soap, struct __tt__union_EventStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_EventStream = 0;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___tt__union_EventStream(struct soap *soap, const struct __tt__union_EventStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tt__union_EventStream(soap, a->__union_EventStream, &a->union_EventStream);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_EventStream(struct soap *soap, const char *tag, int id, const struct __tt__union_EventStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out__tt__union_EventStream(soap, a->__union_EventStream, &a->union_EventStream))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_EventStream * SOAP_FMAC4 soap_in___tt__union_EventStream(struct soap *soap, const char *tag, struct __tt__union_EventStream *a, const char *type)
{
	a = (struct __tt__union_EventStream *)soap_id_enter(soap, "", a, SOAP_TYPE___tt__union_EventStream, sizeof(struct __tt__union_EventStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___tt__union_EventStream(soap, a);
		if (!soap_in__tt__union_EventStream(soap, &a->__union_EventStream, &a->union_EventStream))
			return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___tt__union_EventStream(struct soap *soap, const struct __tt__union_EventStream *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___tt__union_EventStream(soap, tag?tag:"-tt:union-EventStream", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_EventStream * SOAP_FMAC4 soap_get___tt__union_EventStream(struct soap *soap, struct __tt__union_EventStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_EventStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZStreamExtension(struct soap *soap, struct tt__PTZStreamExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZStreamExtension(struct soap *soap, const struct tt__PTZStreamExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStreamExtension(struct soap *soap, const char *tag, int id, const struct tt__PTZStreamExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStreamExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZStreamExtension * SOAP_FMAC4 soap_in_tt__PTZStreamExtension(struct soap *soap, const char *tag, struct tt__PTZStreamExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZStreamExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStreamExtension, sizeof(struct tt__PTZStreamExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZStreamExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStreamExtension, 0, sizeof(struct tt__PTZStreamExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZStreamExtension(struct soap *soap, const struct tt__PTZStreamExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZStreamExtension);
	if (soap_out_tt__PTZStreamExtension(soap, tag?tag:"tt:PTZStreamExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZStreamExtension * SOAP_FMAC4 soap_get_tt__PTZStreamExtension(struct soap *soap, struct tt__PTZStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___tt__union_PTZStream(struct soap *soap, struct __tt__union_PTZStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_PTZStream = 0;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___tt__union_PTZStream(struct soap *soap, const struct __tt__union_PTZStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tt__union_PTZStream(soap, a->__union_PTZStream, &a->union_PTZStream);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_PTZStream(struct soap *soap, const char *tag, int id, const struct __tt__union_PTZStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out__tt__union_PTZStream(soap, a->__union_PTZStream, &a->union_PTZStream))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_PTZStream * SOAP_FMAC4 soap_in___tt__union_PTZStream(struct soap *soap, const char *tag, struct __tt__union_PTZStream *a, const char *type)
{
	a = (struct __tt__union_PTZStream *)soap_id_enter(soap, "", a, SOAP_TYPE___tt__union_PTZStream, sizeof(struct __tt__union_PTZStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___tt__union_PTZStream(soap, a);
		if (!soap_in__tt__union_PTZStream(soap, &a->__union_PTZStream, &a->union_PTZStream))
			return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___tt__union_PTZStream(struct soap *soap, const struct __tt__union_PTZStream *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___tt__union_PTZStream(soap, tag?tag:"-tt:union-PTZStream", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_PTZStream * SOAP_FMAC4 soap_get___tt__union_PTZStream(struct soap *soap, struct __tt__union_PTZStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_PTZStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoAnalyticsStreamExtension(struct soap *soap, struct tt__VideoAnalyticsStreamExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoAnalyticsStreamExtension(struct soap *soap, const struct tt__VideoAnalyticsStreamExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsStreamExtension(struct soap *soap, const char *tag, int id, const struct tt__VideoAnalyticsStreamExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsStreamExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoAnalyticsStreamExtension * SOAP_FMAC4 soap_in_tt__VideoAnalyticsStreamExtension(struct soap *soap, const char *tag, struct tt__VideoAnalyticsStreamExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoAnalyticsStreamExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsStreamExtension, sizeof(struct tt__VideoAnalyticsStreamExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoAnalyticsStreamExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__VideoAnalyticsStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsStreamExtension, 0, sizeof(struct tt__VideoAnalyticsStreamExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoAnalyticsStreamExtension(struct soap *soap, const struct tt__VideoAnalyticsStreamExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsStreamExtension);
	if (soap_out_tt__VideoAnalyticsStreamExtension(soap, tag?tag:"tt:VideoAnalyticsStreamExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoAnalyticsStreamExtension * SOAP_FMAC4 soap_get_tt__VideoAnalyticsStreamExtension(struct soap *soap, struct tt__VideoAnalyticsStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___tt__union_VideoAnalyticsStream(struct soap *soap, struct __tt__union_VideoAnalyticsStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_VideoAnalyticsStream = 0;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___tt__union_VideoAnalyticsStream(struct soap *soap, const struct __tt__union_VideoAnalyticsStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tt__union_VideoAnalyticsStream(soap, a->__union_VideoAnalyticsStream, &a->union_VideoAnalyticsStream);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_VideoAnalyticsStream(struct soap *soap, const char *tag, int id, const struct __tt__union_VideoAnalyticsStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out__tt__union_VideoAnalyticsStream(soap, a->__union_VideoAnalyticsStream, &a->union_VideoAnalyticsStream))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_VideoAnalyticsStream * SOAP_FMAC4 soap_in___tt__union_VideoAnalyticsStream(struct soap *soap, const char *tag, struct __tt__union_VideoAnalyticsStream *a, const char *type)
{
	a = (struct __tt__union_VideoAnalyticsStream *)soap_id_enter(soap, "", a, SOAP_TYPE___tt__union_VideoAnalyticsStream, sizeof(struct __tt__union_VideoAnalyticsStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___tt__union_VideoAnalyticsStream(soap, a);
		if (!soap_in__tt__union_VideoAnalyticsStream(soap, &a->__union_VideoAnalyticsStream, &a->union_VideoAnalyticsStream))
			return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___tt__union_VideoAnalyticsStream(struct soap *soap, const struct __tt__union_VideoAnalyticsStream *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___tt__union_VideoAnalyticsStream(soap, tag?tag:"-tt:union-VideoAnalyticsStream", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_VideoAnalyticsStream * SOAP_FMAC4 soap_get___tt__union_VideoAnalyticsStream(struct soap *soap, struct __tt__union_VideoAnalyticsStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_VideoAnalyticsStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataStreamExtension(struct soap *soap, struct tt__MetadataStreamExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataStreamExtension(struct soap *soap, const struct tt__MetadataStreamExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataStreamExtension(struct soap *soap, const char *tag, int id, const struct tt__MetadataStreamExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataStreamExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataStreamExtension * SOAP_FMAC4 soap_in_tt__MetadataStreamExtension(struct soap *soap, const char *tag, struct tt__MetadataStreamExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataStreamExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataStreamExtension, sizeof(struct tt__MetadataStreamExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataStreamExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataStreamExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataStreamExtension, 0, sizeof(struct tt__MetadataStreamExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataStreamExtension(struct soap *soap, const struct tt__MetadataStreamExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataStreamExtension);
	if (soap_out_tt__MetadataStreamExtension(soap, tag?tag:"tt:MetadataStreamExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataStreamExtension * SOAP_FMAC4 soap_get_tt__MetadataStreamExtension(struct soap *soap, struct tt__MetadataStreamExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataStreamExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EventStream(struct soap *soap, struct tt__EventStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size_EventStream = 0;
	a->__union_EventStream = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EventStream(struct soap *soap, const struct tt__EventStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->__union_EventStream)
	{	int i;
		for (i = 0; i < a->__size_EventStream; i++)
		{
			soap_serialize___tt__union_EventStream(soap, a->__union_EventStream + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventStream(struct soap *soap, const char *tag, int id, const struct tt__EventStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventStream), type))
		return soap->error;
	if (a->__union_EventStream)
	{	int i;
		for (i = 0; i < a->__size_EventStream; i++)
			if (soap_out___tt__union_EventStream(soap, "-union-EventStream", -1, a->__union_EventStream + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EventStream * SOAP_FMAC4 soap_in_tt__EventStream(struct soap *soap, const char *tag, struct tt__EventStream *a, const char *type)
{
	struct soap_blist *soap_blist___union_EventStream = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__EventStream *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventStream, sizeof(struct tt__EventStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__EventStream(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__union_EventStream == NULL)
				{	if (soap_blist___union_EventStream == NULL)
						soap_blist___union_EventStream = soap_new_block(soap);
					a->__union_EventStream = (struct __tt__union_EventStream *)soap_push_block(soap, soap_blist___union_EventStream, sizeof(struct __tt__union_EventStream));
					if (a->__union_EventStream == NULL)
						return NULL;
					soap_default___tt__union_EventStream(soap, a->__union_EventStream);
				}
				if (soap_in___tt__union_EventStream(soap, "-union-EventStream", a->__union_EventStream, "-tt:union-EventStream"))
				{	a->__size_EventStream++;
					a->__union_EventStream = NULL;
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
		if (a->__union_EventStream)
			soap_pop_block(soap, soap_blist___union_EventStream);
		if (a->__size_EventStream)
			a->__union_EventStream = (struct __tt__union_EventStream *)soap_save_block(soap, soap_blist___union_EventStream, NULL, 1);
		else
		{	a->__union_EventStream = NULL;
			if (soap_blist___union_EventStream)
				soap_end_block(soap, soap_blist___union_EventStream);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__EventStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventStream, 0, sizeof(struct tt__EventStream), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EventStream(struct soap *soap, const struct tt__EventStream *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EventStream);
	if (soap_out_tt__EventStream(soap, tag?tag:"tt:EventStream", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventStream * SOAP_FMAC4 soap_get_tt__EventStream(struct soap *soap, struct tt__EventStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__EventStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZStream(struct soap *soap, struct tt__PTZStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size_PTZStream = 0;
	a->__union_PTZStream = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZStream(struct soap *soap, const struct tt__PTZStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->__union_PTZStream)
	{	int i;
		for (i = 0; i < a->__size_PTZStream; i++)
		{
			soap_serialize___tt__union_PTZStream(soap, a->__union_PTZStream + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZStream(struct soap *soap, const char *tag, int id, const struct tt__PTZStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZStream), type))
		return soap->error;
	if (a->__union_PTZStream)
	{	int i;
		for (i = 0; i < a->__size_PTZStream; i++)
			if (soap_out___tt__union_PTZStream(soap, "-union-PTZStream", -1, a->__union_PTZStream + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZStream * SOAP_FMAC4 soap_in_tt__PTZStream(struct soap *soap, const char *tag, struct tt__PTZStream *a, const char *type)
{
	struct soap_blist *soap_blist___union_PTZStream = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PTZStream *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZStream, sizeof(struct tt__PTZStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PTZStream(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__union_PTZStream == NULL)
				{	if (soap_blist___union_PTZStream == NULL)
						soap_blist___union_PTZStream = soap_new_block(soap);
					a->__union_PTZStream = (struct __tt__union_PTZStream *)soap_push_block(soap, soap_blist___union_PTZStream, sizeof(struct __tt__union_PTZStream));
					if (a->__union_PTZStream == NULL)
						return NULL;
					soap_default___tt__union_PTZStream(soap, a->__union_PTZStream);
				}
				if (soap_in___tt__union_PTZStream(soap, "-union-PTZStream", a->__union_PTZStream, "-tt:union-PTZStream"))
				{	a->__size_PTZStream++;
					a->__union_PTZStream = NULL;
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
		if (a->__union_PTZStream)
			soap_pop_block(soap, soap_blist___union_PTZStream);
		if (a->__size_PTZStream)
			a->__union_PTZStream = (struct __tt__union_PTZStream *)soap_save_block(soap, soap_blist___union_PTZStream, NULL, 1);
		else
		{	a->__union_PTZStream = NULL;
			if (soap_blist___union_PTZStream)
				soap_end_block(soap, soap_blist___union_PTZStream);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PTZStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZStream, 0, sizeof(struct tt__PTZStream), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZStream(struct soap *soap, const struct tt__PTZStream *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZStream);
	if (soap_out_tt__PTZStream(soap, tag?tag:"tt:PTZStream", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZStream * SOAP_FMAC4 soap_get_tt__PTZStream(struct soap *soap, struct tt__PTZStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PTZStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__VideoAnalyticsStream(struct soap *soap, struct tt__VideoAnalyticsStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size_VideoAnalyticsStream = 0;
	a->__union_VideoAnalyticsStream = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__VideoAnalyticsStream(struct soap *soap, const struct tt__VideoAnalyticsStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->__union_VideoAnalyticsStream)
	{	int i;
		for (i = 0; i < a->__size_VideoAnalyticsStream; i++)
		{
			soap_serialize___tt__union_VideoAnalyticsStream(soap, a->__union_VideoAnalyticsStream + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__VideoAnalyticsStream(struct soap *soap, const char *tag, int id, const struct tt__VideoAnalyticsStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__VideoAnalyticsStream), type))
		return soap->error;
	if (a->__union_VideoAnalyticsStream)
	{	int i;
		for (i = 0; i < a->__size_VideoAnalyticsStream; i++)
			if (soap_out___tt__union_VideoAnalyticsStream(soap, "-union-VideoAnalyticsStream", -1, a->__union_VideoAnalyticsStream + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__VideoAnalyticsStream * SOAP_FMAC4 soap_in_tt__VideoAnalyticsStream(struct soap *soap, const char *tag, struct tt__VideoAnalyticsStream *a, const char *type)
{
	struct soap_blist *soap_blist___union_VideoAnalyticsStream = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__VideoAnalyticsStream *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__VideoAnalyticsStream, sizeof(struct tt__VideoAnalyticsStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__VideoAnalyticsStream(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__union_VideoAnalyticsStream == NULL)
				{	if (soap_blist___union_VideoAnalyticsStream == NULL)
						soap_blist___union_VideoAnalyticsStream = soap_new_block(soap);
					a->__union_VideoAnalyticsStream = (struct __tt__union_VideoAnalyticsStream *)soap_push_block(soap, soap_blist___union_VideoAnalyticsStream, sizeof(struct __tt__union_VideoAnalyticsStream));
					if (a->__union_VideoAnalyticsStream == NULL)
						return NULL;
					soap_default___tt__union_VideoAnalyticsStream(soap, a->__union_VideoAnalyticsStream);
				}
				if (soap_in___tt__union_VideoAnalyticsStream(soap, "-union-VideoAnalyticsStream", a->__union_VideoAnalyticsStream, "-tt:union-VideoAnalyticsStream"))
				{	a->__size_VideoAnalyticsStream++;
					a->__union_VideoAnalyticsStream = NULL;
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
		if (a->__union_VideoAnalyticsStream)
			soap_pop_block(soap, soap_blist___union_VideoAnalyticsStream);
		if (a->__size_VideoAnalyticsStream)
			a->__union_VideoAnalyticsStream = (struct __tt__union_VideoAnalyticsStream *)soap_save_block(soap, soap_blist___union_VideoAnalyticsStream, NULL, 1);
		else
		{	a->__union_VideoAnalyticsStream = NULL;
			if (soap_blist___union_VideoAnalyticsStream)
				soap_end_block(soap, soap_blist___union_VideoAnalyticsStream);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__VideoAnalyticsStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__VideoAnalyticsStream, 0, sizeof(struct tt__VideoAnalyticsStream), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__VideoAnalyticsStream(struct soap *soap, const struct tt__VideoAnalyticsStream *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__VideoAnalyticsStream);
	if (soap_out_tt__VideoAnalyticsStream(soap, tag?tag:"tt:VideoAnalyticsStream", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__VideoAnalyticsStream * SOAP_FMAC4 soap_get_tt__VideoAnalyticsStream(struct soap *soap, struct tt__VideoAnalyticsStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__VideoAnalyticsStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default___tt__union_MetadataStream(struct soap *soap, struct __tt__union_MetadataStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__union_MetadataStream = 0;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___tt__union_MetadataStream(struct soap *soap, const struct __tt__union_MetadataStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize__tt__union_MetadataStream(soap, a->__union_MetadataStream, &a->union_MetadataStream);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out___tt__union_MetadataStream(struct soap *soap, const char *tag, int id, const struct __tt__union_MetadataStream *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_out__tt__union_MetadataStream(soap, a->__union_MetadataStream, &a->union_MetadataStream))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_MetadataStream * SOAP_FMAC4 soap_in___tt__union_MetadataStream(struct soap *soap, const char *tag, struct __tt__union_MetadataStream *a, const char *type)
{
	a = (struct __tt__union_MetadataStream *)soap_id_enter(soap, "", a, SOAP_TYPE___tt__union_MetadataStream, sizeof(struct __tt__union_MetadataStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default___tt__union_MetadataStream(soap, a);
		if (!soap_in__tt__union_MetadataStream(soap, &a->__union_MetadataStream, &a->union_MetadataStream))
			return NULL;
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put___tt__union_MetadataStream(struct soap *soap, const struct __tt__union_MetadataStream *a, const char *tag, const char *type)
{
	register int id = 0;
	if (soap_out___tt__union_MetadataStream(soap, tag?tag:"-tt:union-MetadataStream", id, a, type))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC3 struct __tt__union_MetadataStream * SOAP_FMAC4 soap_get___tt__union_MetadataStream(struct soap *soap, struct __tt__union_MetadataStream *p, const char *tag, const char *type)
{
	if ((p = soap_in___tt__union_MetadataStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MetadataStream(struct soap *soap, struct tt__MetadataStream *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size_MetadataStream = 0;
	a->__union_MetadataStream = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MetadataStream(struct soap *soap, const struct tt__MetadataStream *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->__union_MetadataStream)
	{	int i;
		for (i = 0; i < a->__size_MetadataStream; i++)
		{
			soap_serialize___tt__union_MetadataStream(soap, a->__union_MetadataStream + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MetadataStream(struct soap *soap, const char *tag, int id, const struct tt__MetadataStream *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MetadataStream), type))
		return soap->error;
	if (a->__union_MetadataStream)
	{	int i;
		for (i = 0; i < a->__size_MetadataStream; i++)
			if (soap_out___tt__union_MetadataStream(soap, "-union-MetadataStream", -1, a->__union_MetadataStream + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MetadataStream * SOAP_FMAC4 soap_in_tt__MetadataStream(struct soap *soap, const char *tag, struct tt__MetadataStream *a, const char *type)
{
	struct soap_blist *soap_blist___union_MetadataStream = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MetadataStream *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MetadataStream, sizeof(struct tt__MetadataStream), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MetadataStream(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__union_MetadataStream == NULL)
				{	if (soap_blist___union_MetadataStream == NULL)
						soap_blist___union_MetadataStream = soap_new_block(soap);
					a->__union_MetadataStream = (struct __tt__union_MetadataStream *)soap_push_block(soap, soap_blist___union_MetadataStream, sizeof(struct __tt__union_MetadataStream));
					if (a->__union_MetadataStream == NULL)
						return NULL;
					soap_default___tt__union_MetadataStream(soap, a->__union_MetadataStream);
				}
				if (soap_in___tt__union_MetadataStream(soap, "-union-MetadataStream", a->__union_MetadataStream, "-tt:union-MetadataStream"))
				{	a->__size_MetadataStream++;
					a->__union_MetadataStream = NULL;
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
		if (a->__union_MetadataStream)
			soap_pop_block(soap, soap_blist___union_MetadataStream);
		if (a->__size_MetadataStream)
			a->__union_MetadataStream = (struct __tt__union_MetadataStream *)soap_save_block(soap, soap_blist___union_MetadataStream, NULL, 1);
		else
		{	a->__union_MetadataStream = NULL;
			if (soap_blist___union_MetadataStream)
				soap_end_block(soap, soap_blist___union_MetadataStream);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MetadataStream *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MetadataStream, 0, sizeof(struct tt__MetadataStream), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MetadataStream(struct soap *soap, const struct tt__MetadataStream *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MetadataStream);
	if (soap_out_tt__MetadataStream(soap, tag?tag:"tt:MetadataStream", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MetadataStream * SOAP_FMAC4 soap_get_tt__MetadataStream(struct soap *soap, struct tt__MetadataStream *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MetadataStream(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CellLayout(struct soap *soap, struct tt__CellLayout *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Transformation = NULL;
	a->__size = 0;
	a->__any = NULL;
	soap_default_xsd__integer(soap, &a->Columns);
	soap_default_xsd__integer(soap, &a->Rows);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CellLayout(struct soap *soap, const struct tt__CellLayout *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Transformation(soap, &a->Transformation);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CellLayout(struct soap *soap, const char *tag, int id, const struct tt__CellLayout *a, const char *type)
{
	if (a->Columns)
		soap_set_attr(soap, "Columns", a->Columns, 1);
	if (a->Rows)
		soap_set_attr(soap, "Rows", a->Rows, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CellLayout), type))
		return soap->error;
	if (a->Transformation)
	{	if (soap_out_PointerTott__Transformation(soap, "tt:Transformation", -1, &a->Transformation, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Transformation"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CellLayout * SOAP_FMAC4 soap_in_tt__CellLayout(struct soap *soap, const char *tag, struct tt__CellLayout *a, const char *type)
{
	size_t soap_flag_Transformation = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__CellLayout *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CellLayout, sizeof(struct tt__CellLayout), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__CellLayout(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Columns", 1), &a->Columns, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Rows", 1), &a->Rows, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Transformation && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Transformation(soap, "tt:Transformation", &a->Transformation, "tt:Transformation"))
				{	soap_flag_Transformation--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__CellLayout *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CellLayout, 0, sizeof(struct tt__CellLayout), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Transformation > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CellLayout(struct soap *soap, const struct tt__CellLayout *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CellLayout);
	if (soap_out_tt__CellLayout(soap, tag?tag:"tt:CellLayout", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CellLayout * SOAP_FMAC4 soap_get_tt__CellLayout(struct soap *soap, struct tt__CellLayout *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__CellLayout(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MotionExpressionConfiguration(struct soap *soap, struct tt__MotionExpressionConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->MotionExpression = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MotionExpressionConfiguration(struct soap *soap, const struct tt__MotionExpressionConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__MotionExpression(soap, &a->MotionExpression);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionExpressionConfiguration(struct soap *soap, const char *tag, int id, const struct tt__MotionExpressionConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionExpressionConfiguration), type))
		return soap->error;
	if (a->MotionExpression)
	{	if (soap_out_PointerTott__MotionExpression(soap, "tt:MotionExpression", -1, &a->MotionExpression, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:MotionExpression"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MotionExpressionConfiguration * SOAP_FMAC4 soap_in_tt__MotionExpressionConfiguration(struct soap *soap, const char *tag, struct tt__MotionExpressionConfiguration *a, const char *type)
{
	size_t soap_flag_MotionExpression = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MotionExpressionConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionExpressionConfiguration, sizeof(struct tt__MotionExpressionConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MotionExpressionConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_MotionExpression && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MotionExpression(soap, "tt:MotionExpression", &a->MotionExpression, "tt:MotionExpression"))
				{	soap_flag_MotionExpression--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MotionExpressionConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionExpressionConfiguration, 0, sizeof(struct tt__MotionExpressionConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MotionExpression > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MotionExpressionConfiguration(struct soap *soap, const struct tt__MotionExpressionConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MotionExpressionConfiguration);
	if (soap_out_tt__MotionExpressionConfiguration(soap, tag?tag:"tt:MotionExpressionConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MotionExpressionConfiguration * SOAP_FMAC4 soap_get_tt__MotionExpressionConfiguration(struct soap *soap, struct tt__MotionExpressionConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionExpressionConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MotionExpression(struct soap *soap, struct tt__MotionExpression *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_string(soap, &a->Expression);
	a->__size = 0;
	a->__any = NULL;
	soap_default_string(soap, &a->Type);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MotionExpression(struct soap *soap, const struct tt__MotionExpression *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_string(soap, &a->Expression);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionExpression(struct soap *soap, const char *tag, int id, const struct tt__MotionExpression *a, const char *type)
{
	if (a->Type)
		soap_set_attr(soap, "Type", a->Type, 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionExpression), type))
		return soap->error;
	if (a->Expression)
	{	if (soap_out_string(soap, "tt:Expression", -1, &a->Expression, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Expression"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MotionExpression * SOAP_FMAC4 soap_in_tt__MotionExpression(struct soap *soap, const char *tag, struct tt__MotionExpression *a, const char *type)
{
	size_t soap_flag_Expression = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MotionExpression *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionExpression, sizeof(struct tt__MotionExpression), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MotionExpression(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Type", 0), &a->Type, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Expression && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:Expression", &a->Expression, "xsd:string"))
				{	soap_flag_Expression--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MotionExpression *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionExpression, 0, sizeof(struct tt__MotionExpression), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Expression > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MotionExpression(struct soap *soap, const struct tt__MotionExpression *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MotionExpression);
	if (soap_out_tt__MotionExpression(soap, tag?tag:"tt:MotionExpression", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MotionExpression * SOAP_FMAC4 soap_get_tt__MotionExpression(struct soap *soap, struct tt__MotionExpression *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__MotionExpression(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PolylineArrayConfiguration(struct soap *soap, struct tt__PolylineArrayConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->PolylineArray = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PolylineArrayConfiguration(struct soap *soap, const struct tt__PolylineArrayConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__PolylineArray(soap, &a->PolylineArray);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArrayConfiguration(struct soap *soap, const char *tag, int id, const struct tt__PolylineArrayConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArrayConfiguration), type))
		return soap->error;
	if (a->PolylineArray)
	{	if (soap_out_PointerTott__PolylineArray(soap, "tt:PolylineArray", -1, &a->PolylineArray, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:PolylineArray"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PolylineArrayConfiguration * SOAP_FMAC4 soap_in_tt__PolylineArrayConfiguration(struct soap *soap, const char *tag, struct tt__PolylineArrayConfiguration *a, const char *type)
{
	size_t soap_flag_PolylineArray = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PolylineArrayConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArrayConfiguration, sizeof(struct tt__PolylineArrayConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PolylineArrayConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_PolylineArray && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PolylineArray(soap, "tt:PolylineArray", &a->PolylineArray, "tt:PolylineArray"))
				{	soap_flag_PolylineArray--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PolylineArrayConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArrayConfiguration, 0, sizeof(struct tt__PolylineArrayConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_PolylineArray > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PolylineArrayConfiguration(struct soap *soap, const struct tt__PolylineArrayConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PolylineArrayConfiguration);
	if (soap_out_tt__PolylineArrayConfiguration(soap, tag?tag:"tt:PolylineArrayConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PolylineArrayConfiguration * SOAP_FMAC4 soap_get_tt__PolylineArrayConfiguration(struct soap *soap, struct tt__PolylineArrayConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArrayConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PolylineArrayExtension(struct soap *soap, struct tt__PolylineArrayExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PolylineArrayExtension(struct soap *soap, const struct tt__PolylineArrayExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArrayExtension(struct soap *soap, const char *tag, int id, const struct tt__PolylineArrayExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArrayExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PolylineArrayExtension * SOAP_FMAC4 soap_in_tt__PolylineArrayExtension(struct soap *soap, const char *tag, struct tt__PolylineArrayExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PolylineArrayExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArrayExtension, sizeof(struct tt__PolylineArrayExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PolylineArrayExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PolylineArrayExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArrayExtension, 0, sizeof(struct tt__PolylineArrayExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PolylineArrayExtension(struct soap *soap, const struct tt__PolylineArrayExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PolylineArrayExtension);
	if (soap_out_tt__PolylineArrayExtension(soap, tag?tag:"tt:PolylineArrayExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PolylineArrayExtension * SOAP_FMAC4 soap_get_tt__PolylineArrayExtension(struct soap *soap, struct tt__PolylineArrayExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArrayExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PolylineArray(struct soap *soap, struct tt__PolylineArray *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeSegment = 0;
	a->Segment = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PolylineArray(struct soap *soap, const struct tt__PolylineArray *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Segment)
	{	int i;
		for (i = 0; i < a->__sizeSegment; i++)
		{
			soap_embedded(soap, a->Segment + i, SOAP_TYPE_tt__Polyline);
			soap_serialize_tt__Polyline(soap, a->Segment + i);
		}
	}
	soap_serialize_PointerTott__PolylineArrayExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolylineArray(struct soap *soap, const char *tag, int id, const struct tt__PolylineArray *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolylineArray), type))
		return soap->error;
	if (a->Segment)
	{	int i;
		for (i = 0; i < a->__sizeSegment; i++)
			if (soap_out_tt__Polyline(soap, "tt:Segment", -1, a->Segment + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__PolylineArrayExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PolylineArray * SOAP_FMAC4 soap_in_tt__PolylineArray(struct soap *soap, const char *tag, struct tt__PolylineArray *a, const char *type)
{
	struct soap_blist *soap_blist_Segment = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PolylineArray *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolylineArray, sizeof(struct tt__PolylineArray), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PolylineArray(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Segment", 1, NULL))
			{	if (a->Segment == NULL)
				{	if (soap_blist_Segment == NULL)
						soap_blist_Segment = soap_new_block(soap);
					a->Segment = (struct tt__Polyline *)soap_push_block(soap, soap_blist_Segment, sizeof(struct tt__Polyline));
					if (a->Segment == NULL)
						return NULL;
					soap_default_tt__Polyline(soap, a->Segment);
				}
				soap_revert(soap);
				if (soap_in_tt__Polyline(soap, "tt:Segment", a->Segment, "tt:Polyline"))
				{	a->__sizeSegment++;
					a->Segment = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PolylineArrayExtension(soap, "tt:Extension", &a->Extension, "tt:PolylineArrayExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Segment)
			soap_pop_block(soap, soap_blist_Segment);
		if (a->__sizeSegment)
			a->Segment = (struct tt__Polyline *)soap_save_block(soap, soap_blist_Segment, NULL, 1);
		else
		{	a->Segment = NULL;
			if (soap_blist_Segment)
				soap_end_block(soap, soap_blist_Segment);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PolylineArray *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolylineArray, 0, sizeof(struct tt__PolylineArray), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizeSegment < 1))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PolylineArray(struct soap *soap, const struct tt__PolylineArray *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PolylineArray);
	if (soap_out_tt__PolylineArray(soap, tag?tag:"tt:PolylineArray", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PolylineArray * SOAP_FMAC4 soap_get_tt__PolylineArray(struct soap *soap, struct tt__PolylineArray *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolylineArray(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PolygonConfiguration(struct soap *soap, struct tt__PolygonConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Polygon = NULL;
	a->__size = 0;
	a->__any = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PolygonConfiguration(struct soap *soap, const struct tt__PolygonConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Polygon(soap, &a->Polygon);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PolygonConfiguration(struct soap *soap, const char *tag, int id, const struct tt__PolygonConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PolygonConfiguration), type))
		return soap->error;
	if (a->Polygon)
	{	if (soap_out_PointerTott__Polygon(soap, "tt:Polygon", -1, &a->Polygon, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Polygon"))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PolygonConfiguration * SOAP_FMAC4 soap_in_tt__PolygonConfiguration(struct soap *soap, const char *tag, struct tt__PolygonConfiguration *a, const char *type)
{
	size_t soap_flag_Polygon = 1;
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__PolygonConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PolygonConfiguration, sizeof(struct tt__PolygonConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__PolygonConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Polygon && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Polygon(soap, "tt:Polygon", &a->Polygon, "tt:Polygon"))
				{	soap_flag_Polygon--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__PolygonConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PolygonConfiguration, 0, sizeof(struct tt__PolygonConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Polygon > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PolygonConfiguration(struct soap *soap, const struct tt__PolygonConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PolygonConfiguration);
	if (soap_out_tt__PolygonConfiguration(soap, tag?tag:"tt:PolygonConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PolygonConfiguration * SOAP_FMAC4 soap_get_tt__PolygonConfiguration(struct soap *soap, struct tt__PolygonConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__PolygonConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SupportedAnalyticsModulesExtension(struct soap *soap, struct tt__SupportedAnalyticsModulesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const struct tt__SupportedAnalyticsModulesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const char *tag, int id, const struct tt__SupportedAnalyticsModulesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SupportedAnalyticsModulesExtension * SOAP_FMAC4 soap_in_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const char *tag, struct tt__SupportedAnalyticsModulesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SupportedAnalyticsModulesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension, sizeof(struct tt__SupportedAnalyticsModulesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SupportedAnalyticsModulesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SupportedAnalyticsModulesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension, 0, sizeof(struct tt__SupportedAnalyticsModulesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SupportedAnalyticsModulesExtension(struct soap *soap, const struct tt__SupportedAnalyticsModulesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SupportedAnalyticsModulesExtension);
	if (soap_out_tt__SupportedAnalyticsModulesExtension(soap, tag?tag:"tt:SupportedAnalyticsModulesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SupportedAnalyticsModulesExtension * SOAP_FMAC4 soap_get_tt__SupportedAnalyticsModulesExtension(struct soap *soap, struct tt__SupportedAnalyticsModulesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedAnalyticsModulesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SupportedAnalyticsModules(struct soap *soap, struct tt__SupportedAnalyticsModules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAnalyticsModuleContentSchemaLocation = 0;
	a->AnalyticsModuleContentSchemaLocation = NULL;
	a->__sizeAnalyticsModuleDescription = 0;
	a->AnalyticsModuleDescription = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SupportedAnalyticsModules(struct soap *soap, const struct tt__SupportedAnalyticsModules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AnalyticsModuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleContentSchemaLocation; i++)
		{
			soap_serialize_xsd__anyURI(soap, a->AnalyticsModuleContentSchemaLocation + i);
		}
	}
	if (a->AnalyticsModuleDescription)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleDescription; i++)
		{
			soap_embedded(soap, a->AnalyticsModuleDescription + i, SOAP_TYPE_tt__ConfigDescription);
			soap_serialize_tt__ConfigDescription(soap, a->AnalyticsModuleDescription + i);
		}
	}
	soap_serialize_PointerTott__SupportedAnalyticsModulesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedAnalyticsModules(struct soap *soap, const char *tag, int id, const struct tt__SupportedAnalyticsModules *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedAnalyticsModules), type))
		return soap->error;
	if (a->AnalyticsModuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleContentSchemaLocation; i++)
			if (soap_out_xsd__anyURI(soap, "tt:AnalyticsModuleContentSchemaLocation", -1, a->AnalyticsModuleContentSchemaLocation + i, ""))
				return soap->error;
	}
	if (a->AnalyticsModuleDescription)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModuleDescription; i++)
			if (soap_out_tt__ConfigDescription(soap, "tt:AnalyticsModuleDescription", -1, a->AnalyticsModuleDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SupportedAnalyticsModulesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SupportedAnalyticsModules * SOAP_FMAC4 soap_in_tt__SupportedAnalyticsModules(struct soap *soap, const char *tag, struct tt__SupportedAnalyticsModules *a, const char *type)
{
	struct soap_blist *soap_blist_AnalyticsModuleContentSchemaLocation = NULL;
	struct soap_blist *soap_blist_AnalyticsModuleDescription = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SupportedAnalyticsModules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedAnalyticsModules, sizeof(struct tt__SupportedAnalyticsModules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SupportedAnalyticsModules(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModuleContentSchemaLocation", 1, NULL))
			{	if (a->AnalyticsModuleContentSchemaLocation == NULL)
				{	if (soap_blist_AnalyticsModuleContentSchemaLocation == NULL)
						soap_blist_AnalyticsModuleContentSchemaLocation = soap_new_block(soap);
					a->AnalyticsModuleContentSchemaLocation = (char **)soap_push_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation, sizeof(char *));
					if (a->AnalyticsModuleContentSchemaLocation == NULL)
						return NULL;
					*a->AnalyticsModuleContentSchemaLocation = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:AnalyticsModuleContentSchemaLocation", a->AnalyticsModuleContentSchemaLocation, "xsd:anyURI"))
				{	a->__sizeAnalyticsModuleContentSchemaLocation++;
					a->AnalyticsModuleContentSchemaLocation = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModuleDescription", 1, NULL))
			{	if (a->AnalyticsModuleDescription == NULL)
				{	if (soap_blist_AnalyticsModuleDescription == NULL)
						soap_blist_AnalyticsModuleDescription = soap_new_block(soap);
					a->AnalyticsModuleDescription = (struct tt__ConfigDescription *)soap_push_block(soap, soap_blist_AnalyticsModuleDescription, sizeof(struct tt__ConfigDescription));
					if (a->AnalyticsModuleDescription == NULL)
						return NULL;
					soap_default_tt__ConfigDescription(soap, a->AnalyticsModuleDescription);
				}
				soap_revert(soap);
				if (soap_in_tt__ConfigDescription(soap, "tt:AnalyticsModuleDescription", a->AnalyticsModuleDescription, "tt:ConfigDescription"))
				{	a->__sizeAnalyticsModuleDescription++;
					a->AnalyticsModuleDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedAnalyticsModulesExtension(soap, "tt:Extension", &a->Extension, "tt:SupportedAnalyticsModulesExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->AnalyticsModuleContentSchemaLocation)
			soap_pop_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation);
		if (a->__sizeAnalyticsModuleContentSchemaLocation)
			a->AnalyticsModuleContentSchemaLocation = (char **)soap_save_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation, NULL, 1);
		else
		{	a->AnalyticsModuleContentSchemaLocation = NULL;
			if (soap_blist_AnalyticsModuleContentSchemaLocation)
				soap_end_block(soap, soap_blist_AnalyticsModuleContentSchemaLocation);
		}
		if (a->AnalyticsModuleDescription)
			soap_pop_block(soap, soap_blist_AnalyticsModuleDescription);
		if (a->__sizeAnalyticsModuleDescription)
			a->AnalyticsModuleDescription = (struct tt__ConfigDescription *)soap_save_block(soap, soap_blist_AnalyticsModuleDescription, NULL, 1);
		else
		{	a->AnalyticsModuleDescription = NULL;
			if (soap_blist_AnalyticsModuleDescription)
				soap_end_block(soap, soap_blist_AnalyticsModuleDescription);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SupportedAnalyticsModules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedAnalyticsModules, 0, sizeof(struct tt__SupportedAnalyticsModules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SupportedAnalyticsModules(struct soap *soap, const struct tt__SupportedAnalyticsModules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SupportedAnalyticsModules);
	if (soap_out_tt__SupportedAnalyticsModules(soap, tag?tag:"tt:SupportedAnalyticsModules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SupportedAnalyticsModules * SOAP_FMAC4 soap_get_tt__SupportedAnalyticsModules(struct soap *soap, struct tt__SupportedAnalyticsModules *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedAnalyticsModules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SupportedRulesExtension(struct soap *soap, struct tt__SupportedRulesExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SupportedRulesExtension(struct soap *soap, const struct tt__SupportedRulesExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedRulesExtension(struct soap *soap, const char *tag, int id, const struct tt__SupportedRulesExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedRulesExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SupportedRulesExtension * SOAP_FMAC4 soap_in_tt__SupportedRulesExtension(struct soap *soap, const char *tag, struct tt__SupportedRulesExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SupportedRulesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedRulesExtension, sizeof(struct tt__SupportedRulesExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SupportedRulesExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SupportedRulesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedRulesExtension, 0, sizeof(struct tt__SupportedRulesExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SupportedRulesExtension(struct soap *soap, const struct tt__SupportedRulesExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SupportedRulesExtension);
	if (soap_out_tt__SupportedRulesExtension(soap, tag?tag:"tt:SupportedRulesExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SupportedRulesExtension * SOAP_FMAC4 soap_get_tt__SupportedRulesExtension(struct soap *soap, struct tt__SupportedRulesExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedRulesExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SupportedRules(struct soap *soap, struct tt__SupportedRules *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeRuleContentSchemaLocation = 0;
	a->RuleContentSchemaLocation = NULL;
	a->__sizeRuleDescription = 0;
	a->RuleDescription = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SupportedRules(struct soap *soap, const struct tt__SupportedRules *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->RuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeRuleContentSchemaLocation; i++)
		{
			soap_serialize_xsd__anyURI(soap, a->RuleContentSchemaLocation + i);
		}
	}
	if (a->RuleDescription)
	{	int i;
		for (i = 0; i < a->__sizeRuleDescription; i++)
		{
			soap_embedded(soap, a->RuleDescription + i, SOAP_TYPE_tt__ConfigDescription);
			soap_serialize_tt__ConfigDescription(soap, a->RuleDescription + i);
		}
	}
	soap_serialize_PointerTott__SupportedRulesExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SupportedRules(struct soap *soap, const char *tag, int id, const struct tt__SupportedRules *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SupportedRules), type))
		return soap->error;
	if (a->RuleContentSchemaLocation)
	{	int i;
		for (i = 0; i < a->__sizeRuleContentSchemaLocation; i++)
			if (soap_out_xsd__anyURI(soap, "tt:RuleContentSchemaLocation", -1, a->RuleContentSchemaLocation + i, ""))
				return soap->error;
	}
	if (a->RuleDescription)
	{	int i;
		for (i = 0; i < a->__sizeRuleDescription; i++)
			if (soap_out_tt__ConfigDescription(soap, "tt:RuleDescription", -1, a->RuleDescription + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__SupportedRulesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SupportedRules * SOAP_FMAC4 soap_in_tt__SupportedRules(struct soap *soap, const char *tag, struct tt__SupportedRules *a, const char *type)
{
	struct soap_blist *soap_blist_RuleContentSchemaLocation = NULL;
	struct soap_blist *soap_blist_RuleDescription = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__SupportedRules *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SupportedRules, sizeof(struct tt__SupportedRules), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__SupportedRules(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RuleContentSchemaLocation", 1, NULL))
			{	if (a->RuleContentSchemaLocation == NULL)
				{	if (soap_blist_RuleContentSchemaLocation == NULL)
						soap_blist_RuleContentSchemaLocation = soap_new_block(soap);
					a->RuleContentSchemaLocation = (char **)soap_push_block(soap, soap_blist_RuleContentSchemaLocation, sizeof(char *));
					if (a->RuleContentSchemaLocation == NULL)
						return NULL;
					*a->RuleContentSchemaLocation = NULL;
				}
				soap_revert(soap);
				if (soap_in_xsd__anyURI(soap, "tt:RuleContentSchemaLocation", a->RuleContentSchemaLocation, "xsd:anyURI"))
				{	a->__sizeRuleContentSchemaLocation++;
					a->RuleContentSchemaLocation = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:RuleDescription", 1, NULL))
			{	if (a->RuleDescription == NULL)
				{	if (soap_blist_RuleDescription == NULL)
						soap_blist_RuleDescription = soap_new_block(soap);
					a->RuleDescription = (struct tt__ConfigDescription *)soap_push_block(soap, soap_blist_RuleDescription, sizeof(struct tt__ConfigDescription));
					if (a->RuleDescription == NULL)
						return NULL;
					soap_default_tt__ConfigDescription(soap, a->RuleDescription);
				}
				soap_revert(soap);
				if (soap_in_tt__ConfigDescription(soap, "tt:RuleDescription", a->RuleDescription, "tt:ConfigDescription"))
				{	a->__sizeRuleDescription++;
					a->RuleDescription = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__SupportedRulesExtension(soap, "tt:Extension", &a->Extension, "tt:SupportedRulesExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->RuleContentSchemaLocation)
			soap_pop_block(soap, soap_blist_RuleContentSchemaLocation);
		if (a->__sizeRuleContentSchemaLocation)
			a->RuleContentSchemaLocation = (char **)soap_save_block(soap, soap_blist_RuleContentSchemaLocation, NULL, 1);
		else
		{	a->RuleContentSchemaLocation = NULL;
			if (soap_blist_RuleContentSchemaLocation)
				soap_end_block(soap, soap_blist_RuleContentSchemaLocation);
		}
		if (a->RuleDescription)
			soap_pop_block(soap, soap_blist_RuleDescription);
		if (a->__sizeRuleDescription)
			a->RuleDescription = (struct tt__ConfigDescription *)soap_save_block(soap, soap_blist_RuleDescription, NULL, 1);
		else
		{	a->RuleDescription = NULL;
			if (soap_blist_RuleDescription)
				soap_end_block(soap, soap_blist_RuleDescription);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__SupportedRules *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SupportedRules, 0, sizeof(struct tt__SupportedRules), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SupportedRules(struct soap *soap, const struct tt__SupportedRules *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SupportedRules);
	if (soap_out_tt__SupportedRules(soap, tag?tag:"tt:SupportedRules", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SupportedRules * SOAP_FMAC4 soap_get_tt__SupportedRules(struct soap *soap, struct tt__SupportedRules *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__SupportedRules(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ConfigDescriptionExtension(struct soap *soap, struct tt__ConfigDescriptionExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ConfigDescriptionExtension(struct soap *soap, const struct tt__ConfigDescriptionExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ConfigDescriptionExtension(struct soap *soap, const char *tag, int id, const struct tt__ConfigDescriptionExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ConfigDescriptionExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ConfigDescriptionExtension * SOAP_FMAC4 soap_in_tt__ConfigDescriptionExtension(struct soap *soap, const char *tag, struct tt__ConfigDescriptionExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ConfigDescriptionExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ConfigDescriptionExtension, sizeof(struct tt__ConfigDescriptionExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ConfigDescriptionExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ConfigDescriptionExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ConfigDescriptionExtension, 0, sizeof(struct tt__ConfigDescriptionExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ConfigDescriptionExtension(struct soap *soap, const struct tt__ConfigDescriptionExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ConfigDescriptionExtension);
	if (soap_out_tt__ConfigDescriptionExtension(soap, tag?tag:"tt:ConfigDescriptionExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ConfigDescriptionExtension * SOAP_FMAC4 soap_get_tt__ConfigDescriptionExtension(struct soap *soap, struct tt__ConfigDescriptionExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ConfigDescriptionExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__ConfigDescription_Messages(struct soap *soap, struct _tt__ConfigDescription_Messages *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Source = NULL;
	a->Key = NULL;
	a->Data = NULL;
	a->Extension = NULL;
	a->IsProperty = NULL;
	a->__anyAttribute = NULL;
	soap_default_string(soap, &a->ParentTopic);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__ConfigDescription_Messages(struct soap *soap, const struct _tt__ConfigDescription_Messages *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Source);
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Key);
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Data);
	soap_serialize_PointerTott__MessageDescriptionExtension(soap, &a->Extension);
	soap_serialize_string(soap, &a->ParentTopic);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__ConfigDescription_Messages(struct soap *soap, const char *tag, int id, const struct _tt__ConfigDescription_Messages *a, const char *type)
{
	if (a->IsProperty)
		soap_set_attr(soap, "IsProperty", soap_xsd__boolean2s(soap, *a->IsProperty), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__ConfigDescription_Messages), type))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Source", -1, &a->Source, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Key", -1, &a->Key, ""))
		return soap->error;
	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Data", -1, &a->Data, ""))
		return soap->error;
	if (soap_out_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	if (a->ParentTopic)
	{	if (soap_out_string(soap, "tt:ParentTopic", -1, &a->ParentTopic, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:ParentTopic"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__ConfigDescription_Messages * SOAP_FMAC4 soap_in__tt__ConfigDescription_Messages(struct soap *soap, const char *tag, struct _tt__ConfigDescription_Messages *a, const char *type)
{
	size_t soap_flag_Source = 1;
	size_t soap_flag_Key = 1;
	size_t soap_flag_Data = 1;
	size_t soap_flag_Extension = 1;
	size_t soap_flag_ParentTopic = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__ConfigDescription_Messages *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__ConfigDescription_Messages, sizeof(struct _tt__ConfigDescription_Messages), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__ConfigDescription_Messages(soap, a);
	{	const char *t = soap_attr_value(soap, "IsProperty", 0);
		if (t)
		{
			if (!(a->IsProperty = (enum xsd__boolean *)soap_malloc(soap, sizeof(enum xsd__boolean))))
			{	soap->error = SOAP_EOM;
				return NULL;
			}
			if (soap_s2xsd__boolean(soap, t, a->IsProperty))
			return NULL;
		}
		else if (soap->error)
			return NULL;
	}
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Source && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Source", &a->Source, "tt:ItemListDescription"))
				{	soap_flag_Source--;
					continue;
				}
			if (soap_flag_Key && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Key", &a->Key, "tt:ItemListDescription"))
				{	soap_flag_Key--;
					continue;
				}
			if (soap_flag_Data && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Data", &a->Data, "tt:ItemListDescription"))
				{	soap_flag_Data--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MessageDescriptionExtension(soap, "tt:Extension", &a->Extension, "tt:MessageDescriptionExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap_flag_ParentTopic && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
				if (soap_in_string(soap, "tt:ParentTopic", &a->ParentTopic, "xsd:string"))
				{	soap_flag_ParentTopic--;
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
	{	a = (struct _tt__ConfigDescription_Messages *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__ConfigDescription_Messages, 0, sizeof(struct _tt__ConfigDescription_Messages), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ParentTopic > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__ConfigDescription_Messages(struct soap *soap, const struct _tt__ConfigDescription_Messages *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__ConfigDescription_Messages);
	if (soap_out__tt__ConfigDescription_Messages(soap, tag?tag:"tt:ConfigDescription-Messages", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__ConfigDescription_Messages * SOAP_FMAC4 soap_get__tt__ConfigDescription_Messages(struct soap *soap, struct _tt__ConfigDescription_Messages *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__ConfigDescription_Messages(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ConfigDescription(struct soap *soap, struct tt__ConfigDescription *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Parameters = NULL;
	a->__sizeMessages = 0;
	a->Messages = NULL;
	a->Extension = NULL;
	soap_default__QName(soap, &a->Name);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ConfigDescription(struct soap *soap, const struct tt__ConfigDescription *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemListDescription(soap, &a->Parameters);
	if (a->Messages)
	{	int i;
		for (i = 0; i < a->__sizeMessages; i++)
		{
			soap_embedded(soap, a->Messages + i, SOAP_TYPE__tt__ConfigDescription_Messages);
			soap_serialize__tt__ConfigDescription_Messages(soap, a->Messages + i);
		}
	}
	soap_serialize_PointerTott__ConfigDescriptionExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ConfigDescription(struct soap *soap, const char *tag, int id, const struct tt__ConfigDescription *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", soap_QName2s(soap, a->Name), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ConfigDescription), type))
		return soap->error;
	if (a->Parameters)
	{	if (soap_out_PointerTott__ItemListDescription(soap, "tt:Parameters", -1, &a->Parameters, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Parameters"))
		return soap->error;
	if (a->Messages)
	{	int i;
		for (i = 0; i < a->__sizeMessages; i++)
			if (soap_out__tt__ConfigDescription_Messages(soap, "tt:Messages", -1, a->Messages + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__ConfigDescriptionExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ConfigDescription * SOAP_FMAC4 soap_in_tt__ConfigDescription(struct soap *soap, const char *tag, struct tt__ConfigDescription *a, const char *type)
{
	size_t soap_flag_Parameters = 1;
	struct soap_blist *soap_blist_Messages = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ConfigDescription *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ConfigDescription, sizeof(struct tt__ConfigDescription), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ConfigDescription(soap, a);
	if (soap_s2QName(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Parameters && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemListDescription(soap, "tt:Parameters", &a->Parameters, "tt:ItemListDescription"))
				{	soap_flag_Parameters--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Messages", 1, NULL))
			{	if (a->Messages == NULL)
				{	if (soap_blist_Messages == NULL)
						soap_blist_Messages = soap_new_block(soap);
					a->Messages = (struct _tt__ConfigDescription_Messages *)soap_push_block(soap, soap_blist_Messages, sizeof(struct _tt__ConfigDescription_Messages));
					if (a->Messages == NULL)
						return NULL;
					soap_default__tt__ConfigDescription_Messages(soap, a->Messages);
				}
				soap_revert(soap);
				if (soap_in__tt__ConfigDescription_Messages(soap, "tt:Messages", a->Messages, ""))
				{	a->__sizeMessages++;
					a->Messages = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ConfigDescriptionExtension(soap, "tt:Extension", &a->Extension, "tt:ConfigDescriptionExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Messages)
			soap_pop_block(soap, soap_blist_Messages);
		if (a->__sizeMessages)
			a->Messages = (struct _tt__ConfigDescription_Messages *)soap_save_block(soap, soap_blist_Messages, NULL, 1);
		else
		{	a->Messages = NULL;
			if (soap_blist_Messages)
				soap_end_block(soap, soap_blist_Messages);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ConfigDescription *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ConfigDescription, 0, sizeof(struct tt__ConfigDescription), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Parameters > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ConfigDescription(struct soap *soap, const struct tt__ConfigDescription *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ConfigDescription);
	if (soap_out_tt__ConfigDescription(soap, tag?tag:"tt:ConfigDescription", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ConfigDescription * SOAP_FMAC4 soap_get_tt__ConfigDescription(struct soap *soap, struct tt__ConfigDescription *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ConfigDescription(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RuleEngineConfigurationExtension(struct soap *soap, struct tt__RuleEngineConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RuleEngineConfigurationExtension(struct soap *soap, const struct tt__RuleEngineConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RuleEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__RuleEngineConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RuleEngineConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RuleEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__RuleEngineConfigurationExtension(struct soap *soap, const char *tag, struct tt__RuleEngineConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RuleEngineConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RuleEngineConfigurationExtension, sizeof(struct tt__RuleEngineConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RuleEngineConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RuleEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RuleEngineConfigurationExtension, 0, sizeof(struct tt__RuleEngineConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RuleEngineConfigurationExtension(struct soap *soap, const struct tt__RuleEngineConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RuleEngineConfigurationExtension);
	if (soap_out_tt__RuleEngineConfigurationExtension(soap, tag?tag:"tt:RuleEngineConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RuleEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__RuleEngineConfigurationExtension(struct soap *soap, struct tt__RuleEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RuleEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RuleEngineConfiguration(struct soap *soap, struct tt__RuleEngineConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeRule = 0;
	a->Rule = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RuleEngineConfiguration(struct soap *soap, const struct tt__RuleEngineConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
		{
			soap_embedded(soap, a->Rule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->Rule + i);
		}
	}
	soap_serialize_PointerTott__RuleEngineConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RuleEngineConfiguration(struct soap *soap, const char *tag, int id, const struct tt__RuleEngineConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RuleEngineConfiguration), type))
		return soap->error;
	if (a->Rule)
	{	int i;
		for (i = 0; i < a->__sizeRule; i++)
			if (soap_out_tt__Config(soap, "tt:Rule", -1, a->Rule + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__RuleEngineConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RuleEngineConfiguration * SOAP_FMAC4 soap_in_tt__RuleEngineConfiguration(struct soap *soap, const char *tag, struct tt__RuleEngineConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist_Rule = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__RuleEngineConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RuleEngineConfiguration, sizeof(struct tt__RuleEngineConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__RuleEngineConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:Rule", 1, NULL))
			{	if (a->Rule == NULL)
				{	if (soap_blist_Rule == NULL)
						soap_blist_Rule = soap_new_block(soap);
					a->Rule = (struct tt__Config *)soap_push_block(soap, soap_blist_Rule, sizeof(struct tt__Config));
					if (a->Rule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->Rule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tt:Rule", a->Rule, "tt:Config"))
				{	a->__sizeRule++;
					a->Rule = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__RuleEngineConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:RuleEngineConfigurationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Rule)
			soap_pop_block(soap, soap_blist_Rule);
		if (a->__sizeRule)
			a->Rule = (struct tt__Config *)soap_save_block(soap, soap_blist_Rule, NULL, 1);
		else
		{	a->Rule = NULL;
			if (soap_blist_Rule)
				soap_end_block(soap, soap_blist_Rule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__RuleEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RuleEngineConfiguration, 0, sizeof(struct tt__RuleEngineConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RuleEngineConfiguration(struct soap *soap, const struct tt__RuleEngineConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RuleEngineConfiguration);
	if (soap_out_tt__RuleEngineConfiguration(soap, tag?tag:"tt:RuleEngineConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RuleEngineConfiguration * SOAP_FMAC4 soap_get_tt__RuleEngineConfiguration(struct soap *soap, struct tt__RuleEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__RuleEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, struct tt__AnalyticsEngineConfigurationExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const struct tt__AnalyticsEngineConfigurationExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineConfigurationExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineConfigurationExtension * SOAP_FMAC4 soap_in_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const char *tag, struct tt__AnalyticsEngineConfigurationExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineConfigurationExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension, sizeof(struct tt__AnalyticsEngineConfigurationExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineConfigurationExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngineConfigurationExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension, 0, sizeof(struct tt__AnalyticsEngineConfigurationExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, const struct tt__AnalyticsEngineConfigurationExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineConfigurationExtension);
	if (soap_out_tt__AnalyticsEngineConfigurationExtension(soap, tag?tag:"tt:AnalyticsEngineConfigurationExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineConfigurationExtension * SOAP_FMAC4 soap_get_tt__AnalyticsEngineConfigurationExtension(struct soap *soap, struct tt__AnalyticsEngineConfigurationExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineConfigurationExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Config(struct soap *soap, struct tt__Config *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Parameters = NULL;
	soap_default_string(soap, &a->Name);
	soap_default__QName(soap, &a->Type);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Config(struct soap *soap, const struct tt__Config *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ItemList(soap, &a->Parameters);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Config(struct soap *soap, const char *tag, int id, const struct tt__Config *a, const char *type)
{
	if (a->Name)
		soap_set_attr(soap, "Name", a->Name, 1);
	if (a->Type)
		soap_set_attr(soap, "Type", soap_QName2s(soap, a->Type), 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Config), type))
		return soap->error;
	if (a->Parameters)
	{	if (soap_out_PointerTott__ItemList(soap, "tt:Parameters", -1, &a->Parameters, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:Parameters"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Config * SOAP_FMAC4 soap_in_tt__Config(struct soap *soap, const char *tag, struct tt__Config *a, const char *type)
{
	size_t soap_flag_Parameters = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Config *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Config, sizeof(struct tt__Config), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Config(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Name", 1), &a->Name, 0, -1))
		return NULL;
	if (soap_s2QName(soap, soap_attr_value(soap, "Type", 1), &a->Type, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Parameters && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ItemList(soap, "tt:Parameters", &a->Parameters, "tt:ItemList"))
				{	soap_flag_Parameters--;
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
	{	a = (struct tt__Config *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Config, 0, sizeof(struct tt__Config), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Parameters > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Config(struct soap *soap, const struct tt__Config *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Config);
	if (soap_out_tt__Config(soap, tag?tag:"tt:Config", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Config * SOAP_FMAC4 soap_get_tt__Config(struct soap *soap, struct tt__Config *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Config(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsEngineConfiguration(struct soap *soap, struct tt__AnalyticsEngineConfiguration *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeAnalyticsModule = 0;
	a->AnalyticsModule = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsEngineConfiguration(struct soap *soap, const struct tt__AnalyticsEngineConfiguration *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
		{
			soap_embedded(soap, a->AnalyticsModule + i, SOAP_TYPE_tt__Config);
			soap_serialize_tt__Config(soap, a->AnalyticsModule + i);
		}
	}
	soap_serialize_PointerTott__AnalyticsEngineConfigurationExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsEngineConfiguration(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsEngineConfiguration *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsEngineConfiguration), type))
		return soap->error;
	if (a->AnalyticsModule)
	{	int i;
		for (i = 0; i < a->__sizeAnalyticsModule; i++)
			if (soap_out_tt__Config(soap, "tt:AnalyticsModule", -1, a->AnalyticsModule + i, ""))
				return soap->error;
	}
	if (soap_out_PointerTott__AnalyticsEngineConfigurationExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsEngineConfiguration * SOAP_FMAC4 soap_in_tt__AnalyticsEngineConfiguration(struct soap *soap, const char *tag, struct tt__AnalyticsEngineConfiguration *a, const char *type)
{
	struct soap_blist *soap_blist_AnalyticsModule = NULL;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__AnalyticsEngineConfiguration *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsEngineConfiguration, sizeof(struct tt__AnalyticsEngineConfiguration), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__AnalyticsEngineConfiguration(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AnalyticsModule", 1, NULL))
			{	if (a->AnalyticsModule == NULL)
				{	if (soap_blist_AnalyticsModule == NULL)
						soap_blist_AnalyticsModule = soap_new_block(soap);
					a->AnalyticsModule = (struct tt__Config *)soap_push_block(soap, soap_blist_AnalyticsModule, sizeof(struct tt__Config));
					if (a->AnalyticsModule == NULL)
						return NULL;
					soap_default_tt__Config(soap, a->AnalyticsModule);
				}
				soap_revert(soap);
				if (soap_in_tt__Config(soap, "tt:AnalyticsModule", a->AnalyticsModule, "tt:Config"))
				{	a->__sizeAnalyticsModule++;
					a->AnalyticsModule = NULL;
					continue;
				}
			}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsEngineConfigurationExtension(soap, "tt:Extension", &a->Extension, "tt:AnalyticsEngineConfigurationExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->AnalyticsModule)
			soap_pop_block(soap, soap_blist_AnalyticsModule);
		if (a->__sizeAnalyticsModule)
			a->AnalyticsModule = (struct tt__Config *)soap_save_block(soap, soap_blist_AnalyticsModule, NULL, 1);
		else
		{	a->AnalyticsModule = NULL;
			if (soap_blist_AnalyticsModule)
				soap_end_block(soap, soap_blist_AnalyticsModule);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__AnalyticsEngineConfiguration *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsEngineConfiguration, 0, sizeof(struct tt__AnalyticsEngineConfiguration), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsEngineConfiguration(struct soap *soap, const struct tt__AnalyticsEngineConfiguration *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsEngineConfiguration);
	if (soap_out_tt__AnalyticsEngineConfiguration(soap, tag?tag:"tt:AnalyticsEngineConfiguration", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsEngineConfiguration * SOAP_FMAC4 soap_get_tt__AnalyticsEngineConfiguration(struct soap *soap, struct tt__AnalyticsEngineConfiguration *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__AnalyticsEngineConfiguration(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ObjectTreeExtension(struct soap *soap, struct tt__ObjectTreeExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ObjectTreeExtension(struct soap *soap, const struct tt__ObjectTreeExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectTreeExtension(struct soap *soap, const char *tag, int id, const struct tt__ObjectTreeExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectTreeExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ObjectTreeExtension * SOAP_FMAC4 soap_in_tt__ObjectTreeExtension(struct soap *soap, const char *tag, struct tt__ObjectTreeExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ObjectTreeExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectTreeExtension, sizeof(struct tt__ObjectTreeExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ObjectTreeExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__ObjectTreeExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectTreeExtension, 0, sizeof(struct tt__ObjectTreeExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ObjectTreeExtension(struct soap *soap, const struct tt__ObjectTreeExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ObjectTreeExtension);
	if (soap_out_tt__ObjectTreeExtension(soap, tag?tag:"tt:ObjectTreeExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ObjectTreeExtension * SOAP_FMAC4 soap_get_tt__ObjectTreeExtension(struct soap *soap, struct tt__ObjectTreeExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectTreeExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__BehaviourExtension(struct soap *soap, struct tt__BehaviourExtension *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__BehaviourExtension(struct soap *soap, const struct tt__BehaviourExtension *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__BehaviourExtension(struct soap *soap, const char *tag, int id, const struct tt__BehaviourExtension *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__BehaviourExtension), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__BehaviourExtension * SOAP_FMAC4 soap_in_tt__BehaviourExtension(struct soap *soap, const char *tag, struct tt__BehaviourExtension *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__BehaviourExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__BehaviourExtension, sizeof(struct tt__BehaviourExtension), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__BehaviourExtension(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__BehaviourExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__BehaviourExtension, 0, sizeof(struct tt__BehaviourExtension), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__BehaviourExtension(struct soap *soap, const struct tt__BehaviourExtension *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__BehaviourExtension);
	if (soap_out_tt__BehaviourExtension(soap, tag?tag:"tt:BehaviourExtension", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__BehaviourExtension * SOAP_FMAC4 soap_get_tt__BehaviourExtension(struct soap *soap, struct tt__BehaviourExtension *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__BehaviourExtension(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__Behaviour_Idle(struct soap *soap, struct _tt__Behaviour_Idle *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__Behaviour_Idle(struct soap *soap, const struct _tt__Behaviour_Idle *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Behaviour_Idle(struct soap *soap, const char *tag, int id, const struct _tt__Behaviour_Idle *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Behaviour_Idle), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__Behaviour_Idle * SOAP_FMAC4 soap_in__tt__Behaviour_Idle(struct soap *soap, const char *tag, struct _tt__Behaviour_Idle *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__Behaviour_Idle *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Behaviour_Idle, sizeof(struct _tt__Behaviour_Idle), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__Behaviour_Idle(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tt__Behaviour_Idle *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Behaviour_Idle, 0, sizeof(struct _tt__Behaviour_Idle), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__Behaviour_Idle(struct soap *soap, const struct _tt__Behaviour_Idle *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__Behaviour_Idle);
	if (soap_out__tt__Behaviour_Idle(soap, tag?tag:"tt:Behaviour-Idle", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__Behaviour_Idle * SOAP_FMAC4 soap_get__tt__Behaviour_Idle(struct soap *soap, struct _tt__Behaviour_Idle *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Behaviour_Idle(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tt__Behaviour_Removed(struct soap *soap, struct _tt__Behaviour_Removed *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tt__Behaviour_Removed(struct soap *soap, const struct _tt__Behaviour_Removed *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tt__Behaviour_Removed(struct soap *soap, const char *tag, int id, const struct _tt__Behaviour_Removed *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tt__Behaviour_Removed), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tt__Behaviour_Removed * SOAP_FMAC4 soap_in__tt__Behaviour_Removed(struct soap *soap, const char *tag, struct _tt__Behaviour_Removed *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tt__Behaviour_Removed *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tt__Behaviour_Removed, sizeof(struct _tt__Behaviour_Removed), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tt__Behaviour_Removed(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tt__Behaviour_Removed *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tt__Behaviour_Removed, 0, sizeof(struct _tt__Behaviour_Removed), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tt__Behaviour_Removed(struct soap *soap, const struct _tt__Behaviour_Removed *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tt__Behaviour_Removed);
	if (soap_out__tt__Behaviour_Removed(soap, tag?tag:"tt:Behaviour-Removed", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tt__Behaviour_Removed * SOAP_FMAC4 soap_get__tt__Behaviour_Removed(struct soap *soap, struct _tt__Behaviour_Removed *p, const char *tag, const char *type)
{
	if ((p = soap_in__tt__Behaviour_Removed(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Behaviour(struct soap *soap, struct tt__Behaviour *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Removed = NULL;
	a->Idle = NULL;
	a->Extension = NULL;
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Behaviour(struct soap *soap, const struct tt__Behaviour *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTo_tt__Behaviour_Removed(soap, &a->Removed);
	soap_serialize_PointerTo_tt__Behaviour_Idle(soap, &a->Idle);
	soap_serialize_PointerTott__BehaviourExtension(soap, &a->Extension);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Behaviour(struct soap *soap, const char *tag, int id, const struct tt__Behaviour *a, const char *type)
{
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Behaviour), type))
		return soap->error;
	if (soap_out_PointerTo_tt__Behaviour_Removed(soap, "tt:Removed", -1, &a->Removed, ""))
		return soap->error;
	if (soap_out_PointerTo_tt__Behaviour_Idle(soap, "tt:Idle", -1, &a->Idle, ""))
		return soap->error;
	if (soap_out_PointerTott__BehaviourExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Behaviour * SOAP_FMAC4 soap_in_tt__Behaviour(struct soap *soap, const char *tag, struct tt__Behaviour *a, const char *type)
{
	size_t soap_flag_Removed = 1;
	size_t soap_flag_Idle = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Behaviour *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Behaviour, sizeof(struct tt__Behaviour), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Behaviour(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Removed && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__Behaviour_Removed(soap, "tt:Removed", &a->Removed, ""))
				{	soap_flag_Removed--;
					continue;
				}
			if (soap_flag_Idle && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTo_tt__Behaviour_Idle(soap, "tt:Idle", &a->Idle, ""))
				{	soap_flag_Idle--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__BehaviourExtension(soap, "tt:Extension", &a->Extension, "tt:BehaviourExtension"))
				{	soap_flag_Extension--;
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
	{	a = (struct tt__Behaviour *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Behaviour, 0, sizeof(struct tt__Behaviour), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Behaviour(struct soap *soap, const struct tt__Behaviour *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Behaviour);
	if (soap_out_tt__Behaviour(soap, tag?tag:"tt:Behaviour", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Behaviour * SOAP_FMAC4 soap_get_tt__Behaviour(struct soap *soap, struct tt__Behaviour *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Behaviour(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Rename(struct soap *soap, struct tt__Rename *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->from = NULL;
	a->to = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Rename(struct soap *soap, const struct tt__Rename *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ObjectId(soap, &a->from);
	soap_serialize_PointerTott__ObjectId(soap, &a->to);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Rename(struct soap *soap, const char *tag, int id, const struct tt__Rename *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Rename), type))
		return soap->error;
	if (a->from)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:from", -1, &a->from, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:from"))
		return soap->error;
	if (a->to)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:to", -1, &a->to, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:to"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Rename * SOAP_FMAC4 soap_in_tt__Rename(struct soap *soap, const char *tag, struct tt__Rename *a, const char *type)
{
	size_t soap_flag_from = 1;
	size_t soap_flag_to = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Rename *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Rename, sizeof(struct tt__Rename), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Rename(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_from && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:from", &a->from, "tt:ObjectId"))
				{	soap_flag_from--;
					continue;
				}
			if (soap_flag_to && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:to", &a->to, "tt:ObjectId"))
				{	soap_flag_to--;
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
	{	a = (struct tt__Rename *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Rename, 0, sizeof(struct tt__Rename), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_from > 0 || soap_flag_to > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Rename(struct soap *soap, const struct tt__Rename *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Rename);
	if (soap_out_tt__Rename(soap, tag?tag:"tt:Rename", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Rename * SOAP_FMAC4 soap_get_tt__Rename(struct soap *soap, struct tt__Rename *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Rename(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Split(struct soap *soap, struct tt__Split *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->from = NULL;
	a->__sizeto = 0;
	a->to = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Split(struct soap *soap, const struct tt__Split *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__ObjectId(soap, &a->from);
	if (a->to)
	{	int i;
		for (i = 0; i < a->__sizeto; i++)
		{
			soap_embedded(soap, a->to + i, SOAP_TYPE_tt__ObjectId);
			soap_serialize_tt__ObjectId(soap, a->to + i);
		}
	}
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Split(struct soap *soap, const char *tag, int id, const struct tt__Split *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Split), type))
		return soap->error;
	if (a->from)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:from", -1, &a->from, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:from"))
		return soap->error;
	if (a->to)
	{	int i;
		for (i = 0; i < a->__sizeto; i++)
			if (soap_out_tt__ObjectId(soap, "tt:to", -1, a->to + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Split * SOAP_FMAC4 soap_in_tt__Split(struct soap *soap, const char *tag, struct tt__Split *a, const char *type)
{
	size_t soap_flag_from = 1;
	struct soap_blist *soap_blist_to = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Split *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Split, sizeof(struct tt__Split), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Split(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_from && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:from", &a->from, "tt:ObjectId"))
				{	soap_flag_from--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:to", 1, NULL))
			{	if (a->to == NULL)
				{	if (soap_blist_to == NULL)
						soap_blist_to = soap_new_block(soap);
					a->to = (struct tt__ObjectId *)soap_push_block(soap, soap_blist_to, sizeof(struct tt__ObjectId));
					if (a->to == NULL)
						return NULL;
					soap_default_tt__ObjectId(soap, a->to);
				}
				soap_revert(soap);
				if (soap_in_tt__ObjectId(soap, "tt:to", a->to, "tt:ObjectId"))
				{	a->__sizeto++;
					a->to = NULL;
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
		if (a->to)
			soap_pop_block(soap, soap_blist_to);
		if (a->__sizeto)
			a->to = (struct tt__ObjectId *)soap_save_block(soap, soap_blist_to, NULL, 1);
		else
		{	a->to = NULL;
			if (soap_blist_to)
				soap_end_block(soap, soap_blist_to);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Split *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Split, 0, sizeof(struct tt__Split), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_from > 0 || a->__sizeto < 2))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Split(struct soap *soap, const struct tt__Split *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Split);
	if (soap_out_tt__Split(soap, tag?tag:"tt:Split", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Split * SOAP_FMAC4 soap_get_tt__Split(struct soap *soap, struct tt__Split *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Split(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ObjectId(struct soap *soap, struct tt__ObjectId *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_default_xsd__integer(soap, &a->ObjectId);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ObjectId(struct soap *soap, const struct tt__ObjectId *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ObjectId(struct soap *soap, const char *tag, int id, const struct tt__ObjectId *a, const char *type)
{
	if (a->ObjectId)
		soap_set_attr(soap, "ObjectId", a->ObjectId, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ObjectId), type))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ObjectId * SOAP_FMAC4 soap_in_tt__ObjectId(struct soap *soap, const char *tag, struct tt__ObjectId *a, const char *type)
{
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__ObjectId *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ObjectId, sizeof(struct tt__ObjectId), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__ObjectId(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "ObjectId", 0), &a->ObjectId, 0, -1))
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
	{	a = (struct tt__ObjectId *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ObjectId, 0, sizeof(struct tt__ObjectId), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ObjectId(struct soap *soap, const struct tt__ObjectId *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ObjectId);
	if (soap_out_tt__ObjectId(soap, tag?tag:"tt:ObjectId", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ObjectId * SOAP_FMAC4 soap_get_tt__ObjectId(struct soap *soap, struct tt__ObjectId *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__ObjectId(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Merge(struct soap *soap, struct tt__Merge *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizefrom = 0;
	a->from = NULL;
	a->to = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Merge(struct soap *soap, const struct tt__Merge *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->from)
	{	int i;
		for (i = 0; i < a->__sizefrom; i++)
		{
			soap_embedded(soap, a->from + i, SOAP_TYPE_tt__ObjectId);
			soap_serialize_tt__ObjectId(soap, a->from + i);
		}
	}
	soap_serialize_PointerTott__ObjectId(soap, &a->to);
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Merge(struct soap *soap, const char *tag, int id, const struct tt__Merge *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Merge), type))
		return soap->error;
	if (a->from)
	{	int i;
		for (i = 0; i < a->__sizefrom; i++)
			if (soap_out_tt__ObjectId(soap, "tt:from", -1, a->from + i, ""))
				return soap->error;
	}
	if (a->to)
	{	if (soap_out_PointerTott__ObjectId(soap, "tt:to", -1, &a->to, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tt:to"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Merge * SOAP_FMAC4 soap_in_tt__Merge(struct soap *soap, const char *tag, struct tt__Merge *a, const char *type)
{
	struct soap_blist *soap_blist_from = NULL;
	size_t soap_flag_to = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Merge *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Merge, sizeof(struct tt__Merge), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Merge(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:from", 1, NULL))
			{	if (a->from == NULL)
				{	if (soap_blist_from == NULL)
						soap_blist_from = soap_new_block(soap);
					a->from = (struct tt__ObjectId *)soap_push_block(soap, soap_blist_from, sizeof(struct tt__ObjectId));
					if (a->from == NULL)
						return NULL;
					soap_default_tt__ObjectId(soap, a->from);
				}
				soap_revert(soap);
				if (soap_in_tt__ObjectId(soap, "tt:from", a->from, "tt:ObjectId"))
				{	a->__sizefrom++;
					a->from = NULL;
					continue;
				}
			}
			if (soap_flag_to && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ObjectId(soap, "tt:to", &a->to, "tt:ObjectId"))
				{	soap_flag_to--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->from)
			soap_pop_block(soap, soap_blist_from);
		if (a->__sizefrom)
			a->from = (struct tt__ObjectId *)soap_save_block(soap, soap_blist_from, NULL, 1);
		else
		{	a->from = NULL;
			if (soap_blist_from)
				soap_end_block(soap, soap_blist_from);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Merge *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Merge, 0, sizeof(struct tt__Merge), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (a->__sizefrom < 2 || soap_flag_to > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Merge(struct soap *soap, const struct tt__Merge *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Merge);
	if (soap_out_tt__Merge(soap, tag?tag:"tt:Merge", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Merge * SOAP_FMAC4 soap_get_tt__Merge(struct soap *soap, struct tt__Merge *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Merge(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__FrameExtension2(struct soap *soap, struct tt__FrameExtension2 *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__FrameExtension2(struct soap *soap, const struct tt__FrameExtension2 *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__FrameExtension2(struct soap *soap, const char *tag, int id, const struct tt__FrameExtension2 *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__FrameExtension2), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__FrameExtension2 * SOAP_FMAC4 soap_in_tt__FrameExtension2(struct soap *soap, const char *tag, struct tt__FrameExtension2 *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__FrameExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__FrameExtension2, sizeof(struct tt__FrameExtension2), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__FrameExtension2(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__FrameExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__FrameExtension2, 0, sizeof(struct tt__FrameExtension2), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__FrameExtension2(struct soap *soap, const struct tt__FrameExtension2 *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__FrameExtension2);
	if (soap_out_tt__FrameExtension2(soap, tag?tag:"tt:FrameExtension2", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__FrameExtension2 * SOAP_FMAC4 soap_get_tt__FrameExtension2(struct soap *soap, struct tt__FrameExtension2 *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__FrameExtension2(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MotionInCells(struct soap *soap, struct tt__MotionInCells *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__size = 0;
	a->__any = NULL;
	soap_default_xsd__integer(soap, &a->Columns);
	soap_default_xsd__integer(soap, &a->Rows);
	soap_default_xsd__base64Binary(soap, &a->Cells);
	a->__anyAttribute = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MotionInCells(struct soap *soap, const struct tt__MotionInCells *a)
{
#ifndef WITH_NOIDREF
	(void)soap; (void)a; /* appease -Wall -Werror */
#endif
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MotionInCells(struct soap *soap, const char *tag, int id, const struct tt__MotionInCells *a, const char *type)
{
	if (a->Columns)
		soap_set_attr(soap, "Columns", a->Columns, 1);
	if (a->Rows)
		soap_set_attr(soap, "Rows", a->Rows, 1);
	if (a->Cells.__ptr)
		soap_set_attr(soap, "Cells", soap_s2base64(soap, a->Cells.__ptr, NULL, a->Cells.__size), 1);
	if (a->__anyAttribute)
		soap_set_attr(soap, "-anyAttribute", a->__anyAttribute, 1);
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MotionInCells), type))
		return soap->error;
	if (a->__any)
	{	int i;
		for (i = 0; i < a->__size; i++)
			if (soap_out_byte(soap, "-any", -1, a->__any + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MotionInCells * SOAP_FMAC4 soap_in_tt__MotionInCells(struct soap *soap, const char *tag, struct tt__MotionInCells *a, const char *type)
{
	struct soap_blist *soap_blist___any = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__MotionInCells *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MotionInCells, sizeof(struct tt__MotionInCells), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__MotionInCells(soap, a);
	if (soap_s2string(soap, soap_attr_value(soap, "Columns", 1), &a->Columns, 0, -1))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "Rows", 1), &a->Rows, 0, -1))
		return NULL;
	if (!(a->Cells.__ptr = (unsigned char*)soap_base642s(soap, soap_attr_value(soap, "Cells", 1), NULL, 0, &a->Cells.__size)))
		return NULL;
	if (soap_s2string(soap, soap_attr_value(soap, "-anyAttribute", 0), &a->__anyAttribute, 0, -1))
		return NULL;
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
			{	if (a->__any == NULL)
				{	if (soap_blist___any == NULL)
						soap_blist___any = soap_new_block(soap);
					a->__any = (char *)soap_push_block(soap, soap_blist___any, sizeof(char));
					if (a->__any == NULL)
						return NULL;
					soap_default_byte(soap, a->__any);
				}
				if (soap_in_byte(soap, "-any", a->__any, "xsd:byte"))
				{	a->__size++;
					a->__any = NULL;
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
		if (a->__any)
			soap_pop_block(soap, soap_blist___any);
		if (a->__size)
			a->__any = (char *)soap_save_block(soap, soap_blist___any, NULL, 1);
		else
		{	a->__any = NULL;
			if (soap_blist___any)
				soap_end_block(soap, soap_blist___any);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__MotionInCells *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MotionInCells, 0, sizeof(struct tt__MotionInCells), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

#ifdef __cplusplus
}
#endif
